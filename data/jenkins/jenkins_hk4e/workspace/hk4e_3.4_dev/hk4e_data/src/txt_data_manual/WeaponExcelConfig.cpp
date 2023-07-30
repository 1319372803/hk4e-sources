// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WeaponExcelConfig.cpp

// Line 20: range 000000000CB5570A-000000000CB55932
int32_t __cdecl WeaponExcelConfigMgr::checkConfig(WeaponExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = WeaponExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( WeaponExcelConfigMgr::checkWeaponExcelConfig(this, txt_config_mgr)
    || WeaponExcelConfigMgr::checkWeaponLevelExcelConfig(this, txt_config_mgr)
    || WeaponExcelConfigMgr::checkWeaponPromoteExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/WeaponExcelConfig.cpp",
      "checkConfig",
      25);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v6,
      (const char (*)[31])"checkWeaponExcelConfig failed!");
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

// Line 32: range 000000000CB55934-000000000CB55B5C
int32_t __cdecl WeaponExcelConfigMgr::rewriteConfig(WeaponExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = WeaponExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( WeaponExcelConfigMgr::rewriteWeaponExcelConfig(this, txt_config_mgr)
    || WeaponExcelConfigMgr::rewriteWeaponLevelExcelConfig(this, txt_config_mgr)
    || WeaponExcelConfigMgr::rewriteWeaponPromoteExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/WeaponExcelConfig.cpp",
      "rewriteConfig",
      37);
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

// Line 45: range 000000000CB55B5E-000000000CB55BAA
uint32_t __cdecl WeaponExcelConfigMgr::getWeaponMaxLevel(const WeaponExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->weapon_max_level);
  }
  return this->weapon_max_level;
};

// Line 50: range 000000000CB55BAC-000000000CB5603D
__int64 __fastcall WeaponExcelConfigMgr::getWeaponMaxPromoteLevel(
        const WeaponExcelConfigMgr *const this,
        uint32_t weapon_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::map<unsigned int,unsigned int> *p_max_weapon_promote_level_map; // rdx
  const std::map<unsigned int,unsigned int>::key_type *p_weapon_promote_id; // rcx
  __int64 v9; // rsi
  const std::map<unsigned int,unsigned int>::key_type *v10; // rsi
  std::map<unsigned int,unsigned int> *v11; // rdx
  bool v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v15; // rdx
  unsigned int *p_second; // rax
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+18h] [rbp-128h]
  char v18[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 weapon_id:49 64 8 7 iter:58 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WeaponExcelConfigMgr::getWeaponMaxPromoteLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  *(_DWORD *)(v2 + 48) = weapon_id;
  weapon_config_ptr = data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( weapon_config_ptr )
  {
    p_max_weapon_promote_level_map = &this->max_weapon_promote_level_map;
    p_weapon_promote_id = &weapon_config_ptr->weapon_promote_id;
    v9 = *(unsigned __int8 *)(((v2 + 64) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v9 )
      __asan_report_store8(v2 + 64, v9);
    v10 = p_weapon_promote_id;
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                          p_max_weapon_promote_level_map,
                                                                          p_weapon_promote_id);
    v11 = &this->max_weapon_promote_level_map;
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
        "./src/txt_data_manual/WeaponExcelConfig.cpp",
        "getWeaponMaxPromoteLevel",
        61);
      v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[19])"weapon_promote_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              &weapon_config_ptr->weapon_promote_id);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        v14,
        (const char (*)[37])" not in max_weapon_promote_level_map");
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
      "./src/txt_data_manual/WeaponExcelConfig.cpp",
      "getWeaponMaxPromoteLevel",
      54);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[39])"findWeaponExcelConfig fail, weapon_id:");
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

// Line 69: range 000000000CB5603E-000000000CB564B7
__int64 __fastcall WeaponExcelConfigMgr::getTotalExpToLevel(
        const WeaponExcelConfigMgr *const this,
        uint32_t weapon_id,
        uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *p_level_total_exp_map; // rdx
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *v10; // rdx
  bool v11; // al
  const std::map<unsigned int,unsigned int>::key_type *p_rank_level; // rdx
  const std::map<unsigned int,unsigned int>::key_type *v13; // rsi
  bool v14; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v15; // rdx
  unsigned int *p_second; // rax
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+10h] [rbp-130h]
  std::map<unsigned int,unsigned int> *rank_exp_map; // [rsp+18h] [rbp-128h]
  char v20[288]; // [rsp+20h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 12 weapon_id:68 48 4 8 level:68 64 8 7 iter:77 96 8 9 <unknown> 128 8 12 rank_iter:84 160"
                        " 8 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WeaponExcelConfigMgr::getTotalExpToLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 32) = weapon_id;
  *(_DWORD *)(v3 + 48) = level;
  v6 = *(unsigned int *)(v3 + 32);
  weapon_config_ptr = data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(this, v6);
  if ( weapon_config_ptr )
  {
    p_level_total_exp_map = &this->level_total_exp_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v6);
    *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                                 p_level_total_exp_map,
                                                                                                 (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
    v10 = &this->level_total_exp_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(v10);
    v11 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v3 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v11 )
    {
      result = 0LL;
    }
    else
    {
      rank_exp_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v3 + 64))->second;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      p_rank_level = &weapon_config_ptr->rank_level;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v3 + 96);
      v13 = p_rank_level;
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                             rank_exp_map,
                                                                             p_rank_level);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v13);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 160) = std::map<unsigned int,unsigned int>::end(rank_exp_map);
      v14 = std::operator==(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 160));
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
      {
        result = 0LL;
      }
      else
      {
        v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 128));
        p_second = &v15->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        result = v15->second;
      }
    }
  }
  else
  {
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/WeaponExcelConfig.cpp",
      "getTotalExpToLevel",
      73);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[19])"invalid weapon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    result = 0LL;
  }
  if ( v20 == (char *)v3 )
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

// Line 95: range 000000000CB564B8-000000000CB56730
const data::WeaponPromoteExcelConfig *__fastcall WeaponExcelConfigMgr::findWeaponPromoteExcelConfig(
        const WeaponExcelConfigMgr *const this,
        uint32_t weapon_id,
        uint32_t promote_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::WeaponPromoteExcelConfig *result; // rax
  const unsigned int *p_weapon_promote_id; // rdx
  std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig> *p_weapon_promote_config_map; // rdx
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+18h] [rbp-D8h]
  char v11[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 promote_level:94 64 8 8 iter:102 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WeaponExcelConfigMgr::findWeaponPromoteExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 48) = promote_level;
  weapon_config_ptr = data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(this, weapon_id);
  if ( weapon_config_ptr )
  {
    p_weapon_promote_id = &weapon_config_ptr->weapon_promote_id;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, weapon_id);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int const&,unsigned int &>(
                                                           p_weapon_promote_id,
                                                           (unsigned int *)(v3 + 48));
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v3 + 48);
    *(std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig>::const_iterator *)(v3 + 64) = std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig>::find(&this->weapon_promote_config_map, (const std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig>::key_type *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_weapon_promote_config_map = &this->weapon_promote_config_map;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig>::const_iterator *)(v3 + 128) = std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig>::end(p_weapon_promote_config_map);
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig> >::_Self *)(v3 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig> >::_Self *)(v3 + 128)) )
    {
      result = 0LL;
    }
    else
    {
      result = &std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig> > *const)(v3 + 64))->second;
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

// Line 108: range 000000000CB56732-000000000CB56F71
__int64 __fastcall WeaponExcelConfigMgr::findPromoteLevelByWeaponIdAndLevel(
        const WeaponExcelConfigMgr *const this,
        uint32_t weapon_id,
        uint32_t level,
        unsigned __int64 promote_level)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *p_promote_id_level_map; // rdx
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *p_weapon_promote_id; // rcx
  __int64 v11; // rsi
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *v12; // rsi
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *v13; // rdx
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  bool v18; // al
  char *v19; // rsi
  bool v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v23; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v26; // dl
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+20h] [rbp-1D0h]
  std::map<unsigned int,unsigned int> *level_map; // [rsp+28h] [rbp-1C8h]
  char v31[448]; // [rsp+30h] [rbp-1C0h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 4 13 weapon_id:107 48 4 9 level:107 64 8 12 map_iter:115 96 8 9 <unknown> 128 8 8 iter:122"
                        " 160 8 9 <unknown> 192 8 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = WeaponExcelConfigMgr::findPromoteLevelByWeaponIdAndLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -202116109;
  *(_DWORD *)(v4 + 32) = weapon_id;
  *(_DWORD *)(v4 + 48) = level;
  weapon_config_ptr = data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(this, *(unsigned int *)(v4 + 32));
  if ( weapon_config_ptr )
  {
    p_promote_id_level_map = &this->promote_id_level_map;
    p_weapon_promote_id = &weapon_config_ptr->weapon_promote_id;
    v11 = *(unsigned __int8 *)(((v4 + 64) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v11 )
      __asan_report_store8(v4 + 64, v11);
    v12 = p_weapon_promote_id;
    *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::find(p_promote_id_level_map, p_weapon_promote_id);
    v13 = &this->promote_id_level_map;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 96, v12);
    *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(v13);
    v14 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v4 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v4 + 96));
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
      *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/WeaponExcelConfig.cpp",
        "findPromoteLevelByWeaponIdAndLevel",
        118);
      v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
              (common::milog::MiLogStream *const)(v4 + 288),
              (const char (*)[11])"weapon_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v16,
              (const char (*)[20])" weapon_promote_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &weapon_config_ptr->weapon_promote_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      level_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v4 + 64))->second;
      *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 128, v4 + 96);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 128) = std::map<unsigned int,unsigned int>::lower_bound(
                                                                             level_map,
                                                                             (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 48));
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 160, v4 + 48);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 160) = std::map<unsigned int,unsigned int>::end(level_map);
      v18 = std::operator==(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 128),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 160));
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v18 && !std::map<unsigned int,unsigned int>::empty(level_map) )
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 128));
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 192, v4 + 160);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 192) = std::map<unsigned int,unsigned int>::end(level_map);
      v19 = (char *)(v4 + 192);
      v20 = std::operator==(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 128),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 192));
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v20 )
      {
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
          3u,
          "./src/txt_data_manual/WeaponExcelConfig.cpp",
          "findPromoteLevelByWeaponIdAndLevel",
          132);
        v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                (common::milog::MiLogStream *const)(v4 + 352),
                (const char (*)[19])"weapon_promote_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                &weapon_config_ptr->weapon_promote_id);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v22, (const char (*)[20])" level map is empty");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 128));
        p_second = &v23->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        second = v23->second;
        v26 = *(_BYTE *)((promote_level >> 3) + 0x7FFF8000);
        if ( v26 != 0 && (char)((promote_level & 7) + 3) >= v26 )
        {
          LOBYTE(v19) = v26 != 0;
          __asan_report_store4(promote_level, v19);
        }
        *(_DWORD *)promote_level = second;
        result = 0LL;
      }
    }
  }
  else
  {
    if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/WeaponExcelConfig.cpp",
      "findPromoteLevelByWeaponIdAndLevel",
      112);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v4 + 224),
           (const char (*)[39])"findWeaponExcelConfig fail, weapon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
    result = 0xFFFFFFFFLL;
  }
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
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

// Line 140: range 000000000CB56F72-000000000CB57952
int32_t __cdecl WeaponExcelConfigMgr::rewriteWeaponExcelConfig(
        WeaponExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t rank_level; // ecx
  data::ItemConfig *v8; // rdi
  data::ItemConfig **v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // edx
  uint32_t *p_rank_level; // rsi
  uint32_t *v14; // rax
  uint32_t *v15; // rdx
  uint32_t v16; // ecx
  char v17; // al
  std::vector<unsigned int> *v18; // rdx
  unsigned __int64 v19; // rax
  std::vector<unsigned int>::size_type v20; // rax
  unsigned __int64 *v21; // r8
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  data::WeaponExcelConfigMap *__for_range; // [rsp+20h] [rbp-210h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-208h]
  std::tuple_element<0,std::pair<unsigned int const,data::WeaponExcelConfig> >::type *weapon_id; // [rsp+30h] [rbp-200h]
  std::tuple_element<1,std::pair<unsigned int const,data::WeaponExcelConfig> >::type *weapon_config; // [rsp+38h] [rbp-1F8h]
  std::unordered_map<data::WeaponType,std::vector<unsigned int>> *__for_range_0; // [rsp+40h] [rbp-1F0h]
  std::__detail::_Node_iterator<std::pair<const data::WeaponType,std::vector<unsigned int> >,false,false>::reference v31; // [rsp+48h] [rbp-1E8h]
  const data::WeaponType *weapon_type; // [rsp+50h] [rbp-1E0h]
  std::tuple_element<1,std::pair<const data::WeaponType,std::vector<unsigned int> > >::type *item_id_vec; // [rsp+58h] [rbp-1D8h]
  char v34[464]; // [rsp+60h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 8 15 __for_begin:142 80 8 13 __for_end:142 112 8 15 __for_begin:156 144 8 13 __for_end:156 "
                        "176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 48 25 weapon_type_count_map:155";
  *(_QWORD *)(v3 + 16) = WeaponExcelConfigMgr::rewriteWeaponExcelConfig;
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
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  __for_range = &this->weapon_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeaponExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::WeaponExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeaponExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::WeaponExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::WeaponExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponExcelConfig>,false> *)(v3 + 80)) )
    {
      v12 = 1;
      goto LABEL_24;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false> *const)(v3 + 48));
    weapon_id = std::get<0ul,unsigned int const,data::WeaponExcelConfig>(__in);
    weapon_config = std::get<1ul,unsigned int const,data::WeaponExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&weapon_config->rank_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weapon_config->rank_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&weapon_config->rank_level);
    }
    rank_level = weapon_config->rank_level;
    v8 = (data::ItemConfig *)weapon_config;
    v9 = (data::ItemConfig **)(((unsigned __int8)weapon_id & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)weapon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)weapon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weapon_id >> 3) + 0x7FFF8000) )
    {
      v8 = (data::ItemConfig *)weapon_id;
      __asan_report_load4(weapon_id);
    }
    if ( (unsigned int)ItemExcelConfigMgr::addItemConfig(
                         &txt_config_mgr->item_config_mgr,
                         *weapon_id,
                         v8,
                         rank_level,
                         v9) )
      break;
    common::tools::MiscUtils::removeEmptyElement<unsigned int>(&weapon_config->skill_affix);
    common::tools::MiscUtils::removeEmptyElement<data::WeaponProperty,data::GrowCurveType data::WeaponProperty::*>(
      &weapon_config->weapon_prop,
      (data::GrowCurveType *)0x10);
    p_rank_level = &weapon_config->rank_level;
    v14 = (uint32_t *)std::max<unsigned int>(&this->max_weapon_rank, &weapon_config->rank_level);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    v16 = *v15;
    v17 = *(_BYTE *)(((unsigned __int64)&this->max_weapon_rank >> 3) + 0x7FFF8000);
    if ( v17 != 0 && v17 <= 3 )
    {
      LOBYTE(p_rank_level) = v17 != 0;
      __asan_report_store4(&this->max_weapon_rank, p_rank_level);
    }
    this->max_weapon_rank = v16;
    v18 = std::unordered_map<data::WeaponType,std::vector<unsigned int>>::operator[](
            &this->weapon_type_item_map,
            &weapon_config->weapon_type);
    std::vector<unsigned int>::push_back(v18, weapon_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false> *const)(v3 + 48));
  }
  if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 208, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 208),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/WeaponExcelConfig.cpp",
    "rewriteWeaponExcelConfig",
    146);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 208),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          v10,
          (const char (*)[37])"addItemBaseConfig failed, weapon_id:");
  v6 = (char *)weapon_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, weapon_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
  *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v12 = 0;
LABEL_24:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v12 == 1 )
  {
    v19 = ((v3 + 336) >> 3) + 2147450880;
    *(_DWORD *)v19 = 0;
    *(_WORD *)(v19 + 4) = 0;
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 336));
    __for_range_0 = &this->weapon_type_item_map;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, v6);
    *(std::unordered_map<data::WeaponType,std::vector<unsigned int>>::iterator *)(v3 + 112) = std::unordered_map<data::WeaponType,std::vector<unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v6);
    *(std::unordered_map<data::WeaponType,std::vector<unsigned int>>::iterator *)(v3 + 144) = std::unordered_map<data::WeaponType,std::vector<unsigned int>>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<data::WeaponType const,std::vector<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const data::WeaponType,std::vector<unsigned int> >,false> *)(v3 + 112),
              (const std::__detail::_Node_iterator_base<std::pair<const data::WeaponType,std::vector<unsigned int> >,false> *)(v3 + 144)) )
    {
      v31 = std::__detail::_Node_iterator<std::pair<data::WeaponType const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::WeaponType,std::vector<unsigned int> >,false,false> *const)(v3 + 112));
      weapon_type = std::get<0ul,data::WeaponType const,std::vector<unsigned int>>(v31);
      item_id_vec = std::get<1ul,data::WeaponType const,std::vector<unsigned int>>(v31);
      std::vector<unsigned int>::shrink_to_fit(item_id_vec);
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      v20 = std::vector<unsigned int>::size(item_id_vec);
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        v20 = __asan_report_store8(v3 + 176, v3 + 144);
      *(_QWORD *)(v3 + 176) = v20;
      std::map<unsigned int,unsigned int>::emplace<data::WeaponType const&,unsigned long>(
        (std::map<unsigned int,unsigned int> *const)(v3 + 336),
        weapon_type,
        (unsigned __int64 *)(v3 + 176),
        weapon_type,
        v21);
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_iterator<std::pair<data::WeaponType const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::WeaponType,std::vector<unsigned int> >,false,false> *const)(v3 + 112));
    }
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/txt_data_manual/WeaponExcelConfig.cpp",
      "rewriteWeaponExcelConfig",
      161);
    v22 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            (common::milog::MiLogStream *const)(v3 + 272),
            (const char (*)[23])"weapon_type_count_map:");
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
      v22,
      (const std::map<unsigned int,unsigned int> *)(v3 + 336));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
    v2 = 0;
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 336));
  }
  result = v2;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 167: range 000000000CB57954-000000000CB580FE
int32_t __cdecl WeaponExcelConfigMgr::rewriteWeaponLevelExcelConfig(
        WeaponExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::size_type v6; // r14
  data::WeaponLevelExcelConfigMap *p_weapon_level_excel_config_map; // rdx
  data::WeaponLevelExcelConfigMap *v8; // rdx
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // edx
  std::map<unsigned int,unsigned int> *v13; // rax
  __int64 v14; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v15; // rax
  int *v16; // rdx
  int v17; // r14d
  uint32_t v18; // ecx
  char v19; // al
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rax
  uint32_t weapon_max_level; // ecx
  char v22; // al
  int v23; // edx
  int32_t result; // eax
  uint32_t rank_index; // [rsp+24h] [rbp-15Ch]
  data::WeaponLevelExcelConfig *weapon_level_config; // [rsp+28h] [rbp-158h]
  char v27[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 9 level:169 64 4 9 <unknown> 80 8 8 iter:171 112 8 9 <unknown> 144 32 9 <unknown> 208 48 "
                        "22 rank_total_exp_map:168";
  *(_QWORD *)(v3 + 16) = WeaponExcelConfigMgr::rewriteWeaponLevelExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, txt_config_mgr);
  for ( *(_DWORD *)(v3 + 48) = 1; ; ++*(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    v6 = *(unsigned int *)(v3 + 48);
    if ( v6 > std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::size(&this->weapon_level_excel_config_map) )
      break;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    p_weapon_level_excel_config_map = &this->weapon_level_excel_config_map;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 80, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::find(
                                                                                              p_weapon_level_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    v8 = &this->weapon_level_excel_config_map;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, v3 + 48);
    *(std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::end(v8);
    v9 = std::__detail::operator==<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false> *)(v3 + 80),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false> *)(v3 + 112));
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 144, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 144),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WeaponExcelConfig.cpp",
        "rewriteWeaponLevelExcelConfig",
        174);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 144),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v10, (const char (*)[37])byte_1A134FE0);
      txt_config_mgr = (TxtConfigMgr *)(v3 + 48);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 144));
      *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
    else
    {
      v13 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
              &this->level_total_exp_map,
              (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      txt_config_mgr = (TxtConfigMgr *)(v3 + 208);
      std::map<unsigned int,unsigned int>::operator=(v13, (const std::map<unsigned int,unsigned int> *)(v3 + 208));
      weapon_level_config = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false> *const)(v3 + 80))->second;
      for ( rank_index = 0; rank_index < std::vector<unsigned int>::size(&weapon_level_config->required_exps); ++rank_index )
      {
        v14 = rank_index;
        v15 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &weapon_level_config->required_exps,
                                                                                                    rank_index);
        v16 = (int *)v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        v17 = *v16;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        v18 = rank_index + 1;
        v19 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        if ( v19 != 0 && v19 <= 3 )
        {
          LOBYTE(v14) = v19 != 0;
          __asan_report_store4(v3 + 64, v14);
        }
        *(_DWORD *)(v3 + 64) = v18;
        txt_config_mgr = (TxtConfigMgr *)(v3 + 64);
        v20 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v3 + 208),
                (std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        *v20 += v17;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->weapon_max_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->weapon_max_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->weapon_max_level);
      }
      weapon_max_level = this->weapon_max_level;
      v22 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(txt_config_mgr) = v22 != 0;
      if ( v22 != 0 && v22 <= 3 )
        __asan_report_load4(v3 + 48);
      if ( weapon_max_level < *(_DWORD *)(v3 + 48) )
        this->weapon_max_level = *(_DWORD *)(v3 + 48);
      v12 = 1;
    }
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v12 != 1 )
    {
      v23 = 0;
      goto LABEL_40;
    }
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
  }
  v23 = 1;
LABEL_40:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v23 == 1 )
    v2 = 0;
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
  result = v2;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 196: range 000000000CB58100-000000000CB58845
int32_t __cdecl WeaponExcelConfigMgr::rewriteWeaponPromoteExcelConfig(
        WeaponExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t weapon_max_promote_level; // ecx
  unsigned int *p_promote_level; // rcx
  unsigned int *p_weapon_promote_id; // rdx
  __int64 v9; // rsi
  data::WeaponPromoteExcelConfig *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  uint32_t *v17; // rsi
  uint32_t *v18; // rax
  uint32_t *v19; // rdx
  uint32_t v20; // ecx
  char v21; // dl
  std::map<unsigned int,unsigned int> *v22; // rax
  unsigned int *v23; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // eax
  int32_t result; // eax
  data::WeaponPromoteExcelConfigVec *__for_range; // [rsp+18h] [rbp-148h]
  data::WeaponPromoteExcelConfig *weapon_promote_config; // [rsp+20h] [rbp-140h]
  uint32_t *max_promote_level; // [rsp+28h] [rbp-138h]
  char v32[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 15 __for_begin:197 64 8 13 __for_end:197 96 8 7 key:206 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WeaponExcelConfigMgr::rewriteWeaponPromoteExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  __for_range = &this->weapon_promote_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::WeaponPromoteExcelConfig>::iterator *)(v3 + 32) = std::vector<data::WeaponPromoteExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::WeaponPromoteExcelConfig>::iterator *)(v3 + 64) = std::vector<data::WeaponPromoteExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::WeaponPromoteExcelConfig *,std::vector<data::WeaponPromoteExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::WeaponPromoteExcelConfig*,std::vector<data::WeaponPromoteExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::WeaponPromoteExcelConfig*,std::vector<data::WeaponPromoteExcelConfig> > *)(v3 + 64)) )
  {
    weapon_promote_config = __gnu_cxx::__normal_iterator<data::WeaponPromoteExcelConfig *,std::vector<data::WeaponPromoteExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::WeaponPromoteExcelConfig*,std::vector<data::WeaponPromoteExcelConfig> > *const)(v3 + 32));
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &weapon_promote_config->cost_items,
      (unsigned int *)8);
    if ( *(_BYTE *)(((unsigned __int64)&this->weapon_max_promote_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weapon_max_promote_level >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->weapon_max_promote_level);
    }
    weapon_max_promote_level = this->weapon_max_promote_level;
    if ( *(_BYTE *)(((unsigned __int64)&weapon_promote_config->promote_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)weapon_promote_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weapon_promote_config->promote_level >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&weapon_promote_config->promote_level);
    }
    if ( weapon_max_promote_level < weapon_promote_config->promote_level )
      this->weapon_max_promote_level = weapon_promote_config->promote_level;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    p_promote_level = &weapon_promote_config->promote_level;
    p_weapon_promote_id = &weapon_promote_config->weapon_promote_id;
    v9 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v9 )
      __asan_report_store8(v3 + 96, v9);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                           p_weapon_promote_id,
                                                           p_promote_level);
    v11 = std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig>::emplace<std::pair<unsigned int,unsigned int>&,data::WeaponPromoteExcelConfig&>(
            &this->weapon_promote_config_map,
            (std::pair<unsigned int,unsigned int> *)(v3 + 96),
            weapon_promote_config,
            (std::pair<unsigned int,unsigned int> *)&this->weapon_promote_config_map,
            v10);
    if ( !v11.second )
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
        "./src/txt_data_manual/WeaponExcelConfig.cpp",
        "rewriteWeaponPromoteExcelConfig",
        209);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v12, (const char (*)[43])byte_1A135100);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              &weapon_promote_config->weapon_promote_id);
      v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])byte_1A135160);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &weapon_promote_config->promote_level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v16 = 0;
    }
    else
    {
      max_promote_level = std::map<unsigned int,unsigned int>::operator[](
                            &this->max_weapon_promote_level_map,
                            &weapon_promote_config->weapon_promote_id);
      v17 = &weapon_promote_config->promote_level;
      v18 = (uint32_t *)std::max<unsigned int>(max_promote_level, &weapon_promote_config->promote_level);
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      v20 = *v19;
      v21 = *(_BYTE *)(((unsigned __int64)max_promote_level >> 3) + 0x7FFF8000);
      if ( v21 != 0 && (char)(((unsigned __int8)max_promote_level & 7) + 3) >= v21 )
      {
        LOBYTE(v17) = v21 != 0;
        __asan_report_store4(max_promote_level, v17);
      }
      *max_promote_level = v20;
      v22 = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
              &this->promote_id_level_map,
              &weapon_promote_config->weapon_promote_id);
      v24 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
              v22,
              &weapon_promote_config->unlock_max_level,
              &weapon_promote_config->promote_level,
              (unsigned int *)v22,
              v23);
      if ( !v24.second )
      {
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
          4u,
          "./src/txt_data_manual/WeaponExcelConfig.cpp",
          "rewriteWeaponPromoteExcelConfig",
          219);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v25, (const char (*)[43])byte_1A1351A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v26,
          &weapon_promote_config->weapon_promote_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
      }
      else
      {
        v16 = 1;
      }
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v27 = 0;
      goto LABEL_35;
    }
    __gnu_cxx::__normal_iterator<data::WeaponPromoteExcelConfig *,std::vector<data::WeaponPromoteExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::WeaponPromoteExcelConfig*,std::vector<data::WeaponPromoteExcelConfig> > *const)(v3 + 32));
  }
  v27 = 1;
LABEL_35:
  if ( v27 == 1 )
    v2 = 0;
  result = v2;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 227: range 000000000CB58846-000000000CB5B6E9
int32_t __cdecl WeaponExcelConfigMgr::checkWeaponExcelConfig(
        const WeaponExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // eax
  ConstValueExcelConfigMgr *p_const_value_config_mgr; // rcx
  __int64 rank_level; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  const char *v18; // rsi
  unsigned int *v19; // rax
  int *v20; // rdx
  int v21; // ecx
  char v22; // al
  EquipAffixExcelConfigMgr *p_equip_affix_config_mgr; // rcx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // edx
  EquipAffixExcelConfigMgr *v30; // rcx
  __int64 EquipAffixMaxLevel; // rsi
  int v32; // r15d
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  bool v35; // al
  common::milog::MiLogStream *v36; // rax
  int v37; // edx
  unsigned int *v38; // rax
  int *v39; // rdx
  int v40; // ecx
  char v41; // al
  std::vector<unsigned int>::size_type v42; // rcx
  char v43; // al
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v50; // rax
  _DWORD *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rdx
  int v58; // edx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rdx
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  std::vector<unsigned int>::size_type v75; // r15
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rdx
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // r15
  std::vector<unsigned int>::size_type v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // r15
  std::vector<unsigned int>::size_type v83; // rax
  __int64 v84; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v85; // rax
  int *v86; // rdx
  int v87; // ecx
  char v88; // al
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  __int64 v97; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v98; // rax
  int *v99; // rdx
  int v100; // ecx
  char v101; // al
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  const std::string *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // r15
  const std::string *v107; // rax
  int v108; // eax
  unsigned int v109; // ecx
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  unsigned __int64 v114; // rdx
  int v115; // eax
  int32_t ret; // [rsp+2Ch] [rbp-724h]
  uint32_t i; // [rsp+30h] [rbp-720h]
  data::WeaponExcelConfigMap *__for_range; // [rsp+38h] [rbp-718h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false>::reference v121; // [rsp+40h] [rbp-710h]
  std::tuple_element<0,std::pair<unsigned int const,data::WeaponExcelConfig> >::type *weapon_id; // [rsp+48h] [rbp-708h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WeaponExcelConfig> >::type *weapon_config; // [rsp+50h] [rbp-700h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-6F8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-6F0h]
  data::ItemConfig *item_config_ptr; // [rsp+68h] [rbp-6E8h]
  const data::ConstValueExcelConfig *const_value_conf_ptr; // [rsp+70h] [rbp-6E0h]
  const std::vector<std::string> *const_value_string_vec; // [rsp+78h] [rbp-6D8h]
  char v129[1744]; // [rsp+80h] [rbp-6D0h] BYREF

  v3 = (unsigned __int64)v129;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1696LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "35 48 4 12 affix_id:245 64 4 9 <unknown> 80 4 20 max_awaken_level:265 96 4 13 return_id:332 112 "
                        "4 16 return_count:351 128 4 16 return_limit:370 144 8 15 __for_begin:229 176 8 13 __for_end:229 "
                        "208 8 15 __for_begin:245 240 8 13 __for_end:245 272 8 6 it:268 304 8 9 <unknown> 336 8 15 __for_"
                        "begin:284 368 8 13 __for_end:284 400 8 9 <unknown> 432 8 9 <unknown> 464 32 9 <unknown> 528 32 9"
                        " <unknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 "
                        "<unknown> 912 32 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 32 9 <unknown> 1168 32 "
                        "9 <unknown> 1232 32 9 <unknown> 1296 32 9 <unknown> 1360 32 9 <unknown> 1424 32 9 <unknown> 1488"
                        " 32 9 <unknown> 1552 32 9 <unknown> 1616 48 23 max_affix_level_set:244";
  *(_QWORD *)(v3 + 16) = WeaponExcelConfigMgr::checkWeaponExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = 61956;
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
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = 62194;
  v5[536862731] = -234881024;
  v5[536862732] = 62194;
  v5[536862732] = -234881024;
  v5[536862733] = 62194;
  v5[536862733] = -234881024;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862745] = -219021312;
  v5[536862746] = 62194;
  v5[536862747] = -219021312;
  v5[536862748] = 62194;
  v5[536862749] = -219021312;
  v5[536862750] = 62194;
  v5[536862751] = -219021312;
  v5[536862752] = 62194;
  v5[536862753] = -219021312;
  v5[536862754] = 62194;
  v5[536862755] = -219021312;
  v5[536862756] = 62194;
  v5[536862757] = -219021312;
  v5[536862758] = 62194;
  v5[536862759] = -219021312;
  v5[536862760] = 62194;
  v5[536862761] = -219021312;
  v5[536862762] = 62194;
  v5[536862763] = -219021312;
  v5[536862764] = 62194;
  v5[536862765] = -219021312;
  v5[536862766] = 62194;
  v5[536862767] = -219021312;
  v5[536862768] = 62194;
  v5[536862769] = -219021312;
  v5[536862770] = 62194;
  v5[536862772] = -202116109;
  ret = 0;
  __for_range = &this->weapon_excel_config_map;
  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 144, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeaponExcelConfig>::const_iterator *)(v3 + 144) = std::unordered_map<unsigned int,data::WeaponExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 176, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeaponExcelConfig>::const_iterator *)(v3 + 176) = std::unordered_map<unsigned int,data::WeaponExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WeaponExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponExcelConfig>,false> *)(v3 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponExcelConfig>,false> *)(v3 + 176)) )
  {
    v121 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false> *const)(v3 + 144));
    weapon_id = std::get<0ul,unsigned int const,data::WeaponExcelConfig>(v121);
    weapon_config = (std::tuple_element<1,const std::pair<unsigned int const,data::WeaponExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WeaponExcelConfig>(v121);
    if ( *(_BYTE *)(((unsigned __int64)&weapon_config->rank_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weapon_config->rank_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&weapon_config->rank_level);
    }
    if ( !weapon_config->rank_level )
    {
      *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 464, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 464),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WeaponExcelConfig.cpp",
        "checkWeaponExcelConfig",
        234);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 464),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])"weapon_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, weapon_id);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])byte_1A135580);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
      *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_175;
    }
    p_const_value_config_mgr = &txt_config_mgr->const_value_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&weapon_config->rank_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weapon_config->rank_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&weapon_config->rank_level);
    }
    rank_level = weapon_config->rank_level;
    if ( !ConstValueExcelConfigMgr::isContainsWeaponRankLevel(p_const_value_config_mgr, rank_level) )
    {
      *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 528, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 528),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WeaponExcelConfig.cpp",
        "checkWeaponExcelConfig",
        239);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 528),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])"weapon_id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, weapon_id);
      v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])byte_1A1355C0);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &weapon_config->rank_level);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v16, (const char (*)[35])byte_1A135600);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
      *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_175;
    }
    v17 = ((v3 + 1616) >> 3) + 2147450880;
    *(_DWORD *)v17 = 0;
    *(_WORD *)(v17 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1616));
    __for_range_0 = &weapon_config->skill_affix;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, rank_level);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 208) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 240, rank_level);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 240) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v18 = (const char *)(v3 + 240);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 208),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 240)) )
      {
        v29 = 1;
        goto LABEL_46;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v19 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 208));
      v20 = (int *)v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      v21 = *v20;
      v22 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v22 != 0 && v22 <= 3 )
      {
        LOBYTE(v18) = v22 != 0;
        __asan_report_store4(v3 + 48, v18);
      }
      *(_DWORD *)(v3 + 48) = v21;
      if ( *(_DWORD *)(v3 + 48) )
        break;
LABEL_44:
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 208));
    }
    p_equip_affix_config_mgr = &txt_config_mgr->equip_affix_config_mgr;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    if ( EquipAffixExcelConfigMgr::isEquipAffixValid(p_equip_affix_config_mgr, *(unsigned int *)(v3 + 48)) )
    {
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v30 = &txt_config_mgr->equip_affix_config_mgr;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      EquipAffixMaxLevel = (unsigned int)EquipAffixExcelConfigMgr::findEquipAffixMaxLevel(
                                           v30,
                                           *(unsigned int *)(v3 + 48));
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 64, EquipAffixMaxLevel);
      *(_DWORD *)(v3 + 64) = EquipAffixMaxLevel;
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v3 + 1616),
        (std::set<unsigned int>::value_type *)(v3 + 64));
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      goto LABEL_44;
    }
    *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 592) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 592, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 592),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WeaponExcelConfig.cpp",
      "checkWeaponExcelConfig",
      253);
    v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 592),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])"weapon_id: ");
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, weapon_id);
    v27 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v26, (const char (*)[18])byte_1A135660);
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 48));
    v18 = byte_1A1356A0;
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v28, (const char (*)[8])byte_1A1356A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
    *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v29 = 0;
LABEL_46:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( v29 == 1 )
    {
      if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 1616)) <= 1 )
      {
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 80, v18);
        *(_DWORD *)(v3 + 80) = 0;
        if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 1616)) )
          goto LABEL_70;
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 272, v18);
        *(std::set<unsigned int>::iterator *)(v3 + 272) = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 1616));
        *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 304, v18);
        *(std::set<unsigned int>::iterator *)(v3 + 304) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 1616));
        v18 = (const char *)(v3 + 304);
        v35 = std::operator==(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 272),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 304));
        *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
        if ( v35 )
        {
          *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 720) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 720, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 720),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WeaponExcelConfig.cpp",
            "checkWeaponExcelConfig",
            271);
          v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 720),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = "max_affix_level_set is empty";
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v36,
            (const char (*)[29])"max_affix_level_set is empty");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 720));
          *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v37 = 0;
        }
        else
        {
          v38 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 272));
          v39 = (int *)v38;
          if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v38);
          }
          v40 = *v39;
          v41 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
          if ( v41 != 0 && v41 <= 3 )
          {
            LOBYTE(v18) = v41 != 0;
            __asan_report_store4(v3 + 80, v18);
          }
          *(_DWORD *)(v3 + 80) = v40;
          v37 = 1;
        }
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
        if ( v37 == 1 )
        {
LABEL_70:
          v42 = std::vector<unsigned int>::size(&weapon_config->awaken_costs);
          v43 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
          LOBYTE(v18) = v43 != 0;
          if ( v43 != 0 && v43 <= 3 )
            __asan_report_load4(v3 + 80);
          if ( v42 == *(_DWORD *)(v3 + 80) )
          {
            __for_range_1 = &weapon_config->awaken_costs;
            *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 336, v18);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 336) = std::vector<unsigned int>::begin(__for_range_1);
            *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 368, v18);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 368) = std::vector<unsigned int>::end(__for_range_1);
            while ( 1 )
            {
              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 336),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 368)) )
              {
                v58 = 1;
                goto LABEL_90;
              }
              v50 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 336));
              v51 = v50;
              if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v50);
              }
              if ( !*v51 )
                break;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 336));
            }
            *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 848) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 848, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 848),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WeaponExcelConfig.cpp",
              "checkWeaponExcelConfig",
              288);
            v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 848),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v53 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    v52,
                    (const char (*)[62])byte_1A135880);
            v54 = common::milog::MiLogStream::operator<<<unsigned int>(v53, &weapon_config->awaken_costs);
            v55 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v54,
                    (const char (*)[23])byte_1A135800);
            v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v55,
                    (const unsigned int *)(v3 + 80));
            v57 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v56,
                    (const char (*)[12])" weapon_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, weapon_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 848));
            *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v58 = 0;
LABEL_90:
            *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
            if ( v58 == 1 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&weapon_config->awaken_material >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&weapon_config->awaken_material >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&weapon_config->awaken_material);
              }
              if ( !weapon_config->awaken_material
                || data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                     &txt_config_mgr->material_config_mgr,
                     weapon_config->awaken_material) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&weapon_config->enhance_rule >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&weapon_config->enhance_rule >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&weapon_config->enhance_rule);
                }
                if ( !data::isValidWeaponEnhanceRuleType(weapon_config->enhance_rule) )
                {
                  *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 976) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 976, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 976),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/WeaponExcelConfig.cpp",
                    "checkWeaponExcelConfig",
                    305);
                  v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 976),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v64 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                          v63,
                          (const char (*)[27])byte_1A135920);
                  v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v64,
                          &weapon_config->enhance_rule);
                  v66 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v65,
                          (const char (*)[12])" weapon_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, weapon_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 976));
                  *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v32 = 0;
                }
                else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>(
                             &this->max_weapon_promote_level_map,
                             &weapon_config->weapon_promote_id) )
                {
                  *(_DWORD *)(((v3 + 1040) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 1040) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1071) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1071) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 1040, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 1040),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/WeaponExcelConfig.cpp",
                    "checkWeaponExcelConfig",
                    311);
                  v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 1040),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v68 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          v67,
                          (const char (*)[24])byte_1A135960);
                  v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v68,
                          &weapon_config->weapon_promote_id);
                  v70 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v69,
                          (const char (*)[12])" weapon_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, weapon_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1040));
                  *(_DWORD *)(((v3 + 1040) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v32 = 0;
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&weapon_config->destroy_rule >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)weapon_config - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weapon_config->destroy_rule >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    __asan_report_load4(&weapon_config->destroy_rule);
                  }
                  if ( !data::isValidMaterialDestroyType(weapon_config->destroy_rule) )
                  {
                    *(_DWORD *)(((v3 + 1104) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1104) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1135) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1135) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1104, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1104),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/WeaponExcelConfig.cpp",
                      "checkWeaponExcelConfig",
                      317);
                    v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1104),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v72 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v71,
                            (const char (*)[11])"weapon_id:");
                    v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, weapon_id);
                    v74 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                            v73,
                            (const char (*)[28])byte_1A1359A0);
                    common::milog::MiLogStream::operator<<<data::MaterialDestroyType,(data::MaterialDestroyType*)0>(
                      v74,
                      &weapon_config->destroy_rule);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1104));
                    *(_DWORD *)(((v3 + 1104) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  v75 = std::vector<unsigned int>::size(&weapon_config->destroy_return_material);
                  if ( v75 == std::vector<unsigned int>::size(&weapon_config->destroy_return_material_count) )
                  {
                    for ( i = 0; i < std::vector<unsigned int>::size(&weapon_config->destroy_return_material); ++i )
                    {
                      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
                      v84 = i;
                      v85 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&weapon_config->destroy_return_material, i);
                      v86 = (int *)v85;
                      if ( *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v85 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v85);
                      }
                      v87 = *v86;
                      v88 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
                      if ( v88 != 0 && v88 <= 3 )
                      {
                        LOBYTE(v84) = v88 != 0;
                        __asan_report_store4(v3 + 96, v84);
                      }
                      *(_DWORD *)(v3 + 96) = v87;
                      if ( *(_DWORD *)(v3 + 96) )
                      {
                        p_material_config_mgr = &txt_config_mgr->material_config_mgr;
                        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(v3 + 96);
                        }
                        if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                               p_material_config_mgr,
                               *(unsigned int *)(v3 + 96)) )
                        {
                          p_item_config_mgr = &txt_config_mgr->item_config_mgr;
                          if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(v3 + 96);
                          }
                          item_config_ptr = ItemExcelConfigMgr::findItemConfig(
                                              p_item_config_mgr,
                                              *(unsigned int *)(v3 + 96));
                          if ( item_config_ptr )
                          {
                            *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
                            v97 = i;
                            v98 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&weapon_config->destroy_return_material_count, i);
                            v99 = (int *)v98;
                            if ( *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)v98 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v98 >> 3)
                                                                                    + 0x7FFF8000) )
                            {
                              __asan_report_load4(v98);
                            }
                            v100 = *v99;
                            v101 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
                            if ( v101 != 0 && v101 <= 3 )
                            {
                              LOBYTE(v97) = v101 != 0;
                              __asan_report_store4(v3 + 112, v97);
                            }
                            *(_DWORD *)(v3 + 112) = v100;
                            if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
                              && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                                             + 0x7FFF8000) )
                            {
                              __asan_report_load4(&item_config_ptr->item_type);
                            }
                            if ( item_config_ptr->item_type != ITEM_VIRTUAL )
                            {
                              const_value_conf_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(
                                                       &txt_config_mgr->const_value_config_mgr,
                                                       181LL);
                              if ( const_value_conf_ptr )
                              {
                                const_value_string_vec = &const_value_conf_ptr->value;
                                if ( std::vector<std::string>::empty(&const_value_conf_ptr->value) )
                                {
                                  *(_DWORD *)(((v3 + 1424) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v3 + 1424) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v3 + 1455) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 1455) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v3 + 1424, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v3 + 1424),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_manual/WeaponExcelConfig.cpp",
                                    "checkWeaponExcelConfig",
                                    365);
                                  v103 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                           (common::milog::MiLogStream *const)(v3 + 1424),
                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                                    v103,
                                    (const char (*)[69])byte_1A135BE0);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1424));
                                  *(_DWORD *)(((v3 + 1424) >> 3) + 0x7FFF8000) = -117901064;
                                  ret = -1;
                                }
                                else
                                {
                                  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
                                  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0
                                    && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
                                  {
                                    __asan_report_store4(v3 + 128, 181LL);
                                  }
                                  *(_DWORD *)(v3 + 128) = 0;
                                  v104 = std::vector<std::string>::operator[](const_value_string_vec, 0LL);
                                  if ( common::tools::StringUtils::strToNum<unsigned int>(
                                         v104,
                                         (unsigned int *)(v3 + 128),
                                         1) )
                                  {
                                    *(_DWORD *)(((v3 + 1488) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v3 + 1488) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v3 + 1519) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 1519) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v3 + 1488, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v3 + 1488),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_manual/WeaponExcelConfig.cpp",
                                      "checkWeaponExcelConfig",
                                      373);
                                    v105 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                             (common::milog::MiLogStream *const)(v3 + 1488),
                                             (const char (*)[16])"[CONFIG_ERROR] ");
                                    v106 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                                             v105,
                                             (const char (*)[78])byte_1A135C60);
                                    v107 = std::vector<std::string>::operator[](const_value_string_vec, 0LL);
                                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v106, v107);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1488));
                                    *(_DWORD *)(((v3 + 1488) >> 3) + 0x7FFF8000) = -117901064;
                                    ret = -1;
                                  }
                                  else
                                  {
                                    v108 = *(unsigned __int8 *)(((v3 + 112) >> 3) + 0x7FFF8000);
                                    if ( (_BYTE)v108 != 0 && (char)v108 <= 3 )
                                      __asan_report_load4(v3 + 112);
                                    v109 = *(_DWORD *)(v3 + 112);
                                    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0
                                      && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
                                    {
                                      __asan_report_load4(v3 + 128);
                                    }
                                    if ( v109 > *(_DWORD *)(v3 + 128) )
                                    {
                                      *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v3 + 1552) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v3 + 1552, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v3 + 1552),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_manual/WeaponExcelConfig.cpp",
                                        "checkWeaponExcelConfig",
                                        380);
                                      v110 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                               (common::milog::MiLogStream *const)(v3 + 1552),
                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                      v111 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                               v110,
                                               (const char (*)[11])"return_id:");
                                      v112 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                               v111,
                                               (const unsigned int *)(v3 + 96));
                                      v113 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                               v112,
                                               (const char (*)[52])byte_1A135CE0);
                                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                        v113,
                                        (const unsigned int *)(v3 + 112));
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1552));
                                      *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = -117901064;
                                      ret = -1;
                                    }
                                  }
                                }
                              }
                              else
                              {
                                *(_DWORD *)(((v3 + 1360) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v3 + 1360) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v3 + 1391) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1391) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v3 + 1360, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v3 + 1360),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_manual/WeaponExcelConfig.cpp",
                                  "checkWeaponExcelConfig",
                                  357);
                                v102 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                         (common::milog::MiLogStream *const)(v3 + 1360),
                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                                  v102,
                                  (const char (*)[66])byte_1A135B60);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1360));
                                *(_DWORD *)(((v3 + 1360) >> 3) + 0x7FFF8000) = -117901064;
                                ret = -1;
                              }
                              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
                            }
                          }
                          else
                          {
                            *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v3 + 1296) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) != 0
                              && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v3 + 1296, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v3 + 1296),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_manual/WeaponExcelConfig.cpp",
                              "checkWeaponExcelConfig",
                              346);
                            v94 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v3 + 1296),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            v95 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                    v94,
                                    (const char (*)[11])"return_id:");
                            v96 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v95,
                                    (const unsigned int *)(v3 + 96));
                            common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                              v96,
                              (const char (*)[10])byte_1A135B20);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1296));
                            *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = -117901064;
                            ret = -1;
                          }
                        }
                        else
                        {
                          *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v3 + 1232) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) != 0
                            && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v3 + 1232, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v3 + 1232),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_manual/WeaponExcelConfig.cpp",
                            "checkWeaponExcelConfig",
                            338);
                          v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v3 + 1232),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v91 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                  v90,
                                  (const char (*)[11])"return_id:");
                          v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v91,
                                  (const unsigned int *)(v3 + 96));
                          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v92,
                            (const char (*)[13])byte_1A135AE0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1232));
                          *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = -117901064;
                          ret = -1;
                        }
                      }
                      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1168) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1199) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 1199) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1168, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1168),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/WeaponExcelConfig.cpp",
                      "checkWeaponExcelConfig",
                      323);
                    v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1168),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v77 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v76,
                            (const char (*)[11])"weapon_id:");
                    v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, weapon_id);
                    v79 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
                            v78,
                            (const char (*)[80])byte_1A1359E0);
                    *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
                    v80 = std::vector<unsigned int>::size(&weapon_config->destroy_return_material);
                    if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
                      v80 = __asan_report_store8(v3 + 400, byte_1A1359E0);
                    *(_QWORD *)(v3 + 400) = v80;
                    v81 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                            v79,
                            (const unsigned __int64 *)(v3 + 400));
                    v82 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                            v81,
                            (const char (*)[30])byte_1A135A60);
                    *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
                    v83 = std::vector<unsigned int>::size(&weapon_config->destroy_return_material_count);
                    if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
                      v83 = __asan_report_store8(v3 + 432, byte_1A135A60);
                    *(_QWORD *)(v3 + 432) = v83;
                    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v82,
                      (const unsigned __int64 *)(v3 + 432));
                    *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1168));
                    *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  v32 = 1;
                }
              }
              else
              {
                *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 912) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 912, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 912),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/WeaponExcelConfig.cpp",
                  "checkWeaponExcelConfig",
                  298);
                v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 912),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v60 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        v59,
                        (const char (*)[28])byte_1A1358E0);
                v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v60,
                        &weapon_config->awaken_material);
                v62 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v61,
                        (const char (*)[12])" weapon_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, weapon_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 912));
                *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v32 = 0;
              }
            }
            else
            {
              v32 = 0;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 784) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 784, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 784),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WeaponExcelConfig.cpp",
              "checkWeaponExcelConfig",
              280);
            v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 784),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v45 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
                    v44,
                    (const char (*)[82])byte_1A135780);
            v46 = common::milog::MiLogStream::operator<<<unsigned int>(v45, &weapon_config->awaken_costs);
            v47 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v46,
                    (const char (*)[23])byte_1A135800);
            v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v47,
                    (const unsigned int *)(v3 + 80));
            v49 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v48,
                    (const char (*)[12])" weapon_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, weapon_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 784));
            *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v32 = 0;
          }
        }
        else
        {
          v32 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 656, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 656),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WeaponExcelConfig.cpp",
          "checkWeaponExcelConfig",
          260);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 656),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v34 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v33, (const char (*)[48])byte_1A1356E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, weapon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
        *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v32 = 0;
      }
    }
    else
    {
      v32 = 0;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1616));
    v9 = v32 == 1;
LABEL_175:
    v114 = ((v3 + 1616) >> 3) + 2147450880;
    *(_DWORD *)v114 = -117901064;
    *(_WORD *)(v114 + 4) = -1800;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( !v9 )
    {
      v115 = 0;
      goto LABEL_179;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false> *const)(v3 + 144));
  }
  v115 = 1;
LABEL_179:
  if ( v115 == 1 )
    v2 = ret;
  if ( v129 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 212) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1696LL, v129);
  }
  return v2;
};

// Line 391: range 000000000CB5B6EA-000000000CB5C0BC
int32_t __cdecl WeaponExcelConfigMgr::checkWeaponLevelExcelConfig(
        const WeaponExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_max_weapon_rank; // rsi
  std::vector<unsigned int>::size_type v7; // rcx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v14; // rax
  _DWORD *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // edx
  uint32_t weapon_max_level; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // eax
  int32_t result; // eax
  data::WeaponLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-1D8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false>::reference v27; // [rsp+20h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WeaponLevelExcelConfig> >::type *weapon_level_config; // [rsp+30h] [rbp-1C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  char v30[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 9 level:408 64 8 15 __for_begin:392 96 8 13 __for_end:392 128 8 15 __for_begin:399 160 8 "
                        "13 __for_end:399 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WeaponExcelConfigMgr::checkWeaponLevelExcelConfig;
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
  __for_range = &this->weapon_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_max_weapon_rank = (uint32_t *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false> *)(v3 + 96)) )
    {
      v13 = 1;
      goto LABEL_34;
    }
    v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::WeaponLevelExcelConfig>(v27);
    weapon_level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::WeaponLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WeaponLevelExcelConfig>(v27);
    v7 = std::vector<unsigned int>::size(&weapon_level_config->required_exps);
    v8 = *(_BYTE *)(((unsigned __int64)&this->max_weapon_rank >> 3) + 0x7FFF8000);
    LOBYTE(p_max_weapon_rank) = v8 != 0;
    if ( v8 != 0 && v8 <= 3 )
      __asan_report_load4(&this->max_weapon_rank);
    if ( v7 != this->max_weapon_rank )
      break;
    __for_range_0 = &weapon_level_config->required_exps;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_max_weapon_rank);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_max_weapon_rank);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      p_max_weapon_rank = (uint32_t *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v19 = 1;
        goto LABEL_30;
      }
      v14 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      if ( !*v15 )
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
      "./src/txt_data_manual/WeaponExcelConfig.cpp",
      "checkWeaponLevelExcelConfig",
      403);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v16, (const char (*)[32])byte_1A135E40);
    v18 = common::milog::MiLogStream::operator<<<unsigned int>(v17, &weapon_level_config->required_exps);
    p_max_weapon_rank = (uint32_t *)byte_1A135EC0;
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])byte_1A135EC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v19 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v13 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/WeaponExcelConfig.cpp",
    "checkWeaponLevelExcelConfig",
    396);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v9, (const char (*)[32])byte_1A135E40);
  v11 = common::milog::MiLogStream::operator<<<unsigned int>(v10, &weapon_level_config->required_exps);
  v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v11, (const char (*)[32])byte_1A135E80);
  p_max_weapon_rank = &this->max_weapon_rank;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->max_weapon_rank);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v13 = 0;
LABEL_34:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v13 == 1 )
  {
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, p_max_weapon_rank);
    for ( *(_DWORD *)(v3 + 48) = 1; ; ++*(_DWORD *)(v3 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->weapon_max_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->weapon_max_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->weapon_max_level);
      }
      weapon_max_level = this->weapon_max_level;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( weapon_max_level < *(_DWORD *)(v3 + 48) )
      {
        v24 = 1;
        goto LABEL_51;
      }
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WeaponLevelExcelConfig> const,unsigned int>(
              &this->weapon_level_excel_config_map,
              (const unsigned int *)(v3 + 48)) )
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
      "./src/txt_data_manual/WeaponExcelConfig.cpp",
      "checkWeaponLevelExcelConfig",
      412);
    v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v22 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v21, (const char (*)[31])byte_1A135F00);
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])byte_1A135F40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    v2 = -1;
    v24 = 0;
LABEL_51:
    if ( v24 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v30 == (char *)v3 )
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

// Line 420: range 000000000CB5C0BE-000000000CB5C6DF
int32_t __cdecl WeaponExcelConfigMgr::checkWeaponPromoteExcelConfig(
        const WeaponExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v9; // ecx
  char v10; // al
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  int v17; // eax
  int32_t result; // eax
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+18h] [rbp-148h]
  const unsigned int *weapon_promote_id; // [rsp+20h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *max_promote_level; // [rsp+28h] [rbp-138h]
  char v22[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 17 promote_level:423 64 8 9 <unknown> 96 8 15 __for_begin:421 128 8 13 __for_end:421 160 "
                        "8 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WeaponExcelConfigMgr::checkWeaponPromoteExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->max_weapon_promote_level_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128)) )
  {
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v3 + 128);
    v7 = ((_DWORD)v6 + 7) & 7;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
    {
      v7 = 8LL;
      __asan_report_load_n(v6, 8LL);
    }
    *(std::pair<unsigned int const,unsigned int> *)(v3 + 64) = *v6;
    weapon_promote_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 64));
    max_promote_level = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 64));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, v7);
    for ( *(_DWORD *)(v3 + 48) = 0; ; ++*(_DWORD *)(v3 + 48) )
    {
      v8 = ((unsigned __int8)max_promote_level & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)max_promote_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)max_promote_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_promote_level >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(max_promote_level);
      }
      v9 = *max_promote_level;
      v10 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v10 != 0;
      if ( v10 != 0 && v10 <= 3 )
        __asan_report_load4(v3 + 48);
      if ( v9 < *(_DWORD *)(v3 + 48) )
      {
        v16 = 1;
        goto LABEL_32;
      }
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v8);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 160) = std::make_pair<unsigned int const&,unsigned int &>(
                                                              weapon_promote_id,
                                                              (unsigned int *)(v3 + 48));
      v11 = common::tools::MiscUtils::isContains<std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig> const,std::pair<unsigned int,unsigned int>>(
              &this->weapon_promote_config_map,
              (const std::pair<unsigned int,unsigned int> *)(v3 + 160));
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( !v11 )
        break;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
    }
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
      4u,
      "./src/txt_data_manual/WeaponExcelConfig.cpp",
      "checkWeaponPromoteExcelConfig",
      427);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v12, (const char (*)[46])byte_1A136060);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, weapon_promote_id);
    v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])byte_1A1360C0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
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
  if ( v17 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 436: range 000000000CB5C6E0-000000000CB5C8FD
const std::vector<unsigned int> *__fastcall WeaponExcelConfigMgr::getWeaponIdsByWeaponType(
        const WeaponExcelConfigMgr *const this,
        __int64 weapon_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<data::WeaponType,std::vector<unsigned int>> *p_weapon_type_item_map; // rdx
  std::unordered_map<data::WeaponType,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 weapon_type:435 64 8 8 iter:437 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WeaponExcelConfigMgr::getWeaponIdsByWeaponType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = weapon_type;
  p_weapon_type_item_map = &this->weapon_type_item_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, weapon_type);
  *(std::unordered_map<data::WeaponType,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<data::WeaponType,std::vector<unsigned int>>::find(
                                                                                                   p_weapon_type_item_map,
                                                                                                   (const std::unordered_map<data::WeaponType,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->weapon_type_item_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<data::WeaponType,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<data::WeaponType,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<data::WeaponType const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::WeaponType,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const data::WeaponType,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    if ( !(_BYTE)`guard variable for'WeaponExcelConfigMgr::getWeaponIdsByWeaponType(data::WeaponType)::empty_item_vec
      && __cxa_guard_acquire(&`guard variable for'WeaponExcelConfigMgr::getWeaponIdsByWeaponType(data::WeaponType)::empty_item_vec) )
    {
      std::vector<unsigned int>::vector(&WeaponExcelConfigMgr::getWeaponIdsByWeaponType(data::WeaponType)const::empty_item_vec);
      __cxa_guard_release(&`guard variable for'WeaponExcelConfigMgr::getWeaponIdsByWeaponType(data::WeaponType)::empty_item_vec);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
        &WeaponExcelConfigMgr::getWeaponIdsByWeaponType(data::WeaponType)const::empty_item_vec,
        &_dso_handle);
    }
    result = &WeaponExcelConfigMgr::getWeaponIdsByWeaponType(data::WeaponType)const::empty_item_vec;
  }
  else
  {
    result = &std::__detail::_Node_const_iterator<std::pair<data::WeaponType const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::WeaponType,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
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
