// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AvatarTalentExcelConfig.cpp

// Line 21: range 0000000012E7B642-0000000012E7B87B
int32_t __cdecl AvatarTalentExcelConfigMgr::checkConfig(
        AvatarTalentExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  char v9[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarTalentExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = AvatarTalentExcelConfigMgr::checkAvatarTalentExcelConfig(this, txt_config_mgr) != 0;
  v6 = v5 | (AvatarTalentExcelConfigMgr::checkProudSkillExcelConfig(this, txt_config_mgr) != 0);
  if ( v6 | (AvatarTalentExcelConfigMgr::checkLifeEffectConfig(this, txt_config_mgr) != 0) )
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
      "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
      "checkConfig",
      26);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])"checkConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
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

// Line 33: range 0000000012E7B87C-0000000012E7BAFD
int32_t __cdecl AvatarTalentExcelConfigMgr::rewriteConfig(
        AvatarTalentExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  int v6; // r14d
  int v7; // r14d
  int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  char v11[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarTalentExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = AvatarTalentExcelConfigMgr::rewriteAvatarTalentExcelConfig(this, txt_config_mgr) != 0;
  v6 = v5 | (AvatarTalentExcelConfigMgr::rewriteProudSkillExcelConfig(this, txt_config_mgr) != 0);
  v7 = (AvatarTalentExcelConfigMgr::rewriteTalentOpenConfig(this, txt_config_mgr) != 0) | v6;
  v8 = (AvatarTalentExcelConfigMgr::rewriteProudSkillOpenConfig(this, txt_config_mgr) != 0) | v7;
  if ( v8 | (AvatarTalentExcelConfigMgr::rewriteLifeEffectConfig(this, txt_config_mgr) != 0) )
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
      "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
      "rewriteConfig",
      40);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v9, (const char (*)[21])"rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v11 == (char *)v2 )
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

// Line 48: range 0000000012E7BAFE-0000000012E7C1CA
__int64 __fastcall AvatarTalentExcelConfigMgr::checkProudSkillCond(
        const AvatarTalentExcelConfigMgr *const this,
        uint32_t proud_skill_id,
        data::ElementType element_type)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  char *v9; // rsi
  data::TalentFilterCond *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  std::map<data::TalentFilterCond,data::ElementType> *p_talent_filter_map; // rdx
  std::map<data::TalentFilterCond,data::ElementType> *v15; // rdx
  bool v16; // al
  common::milog::MiLogStream *v17; // rax
  int v18; // eax
  std::_Rb_tree_const_iterator<std::pair<const data::TalentFilterCond,data::ElementType> >::pointer v19; // rdx
  data::ElementType *p_second; // rax
  int v21; // eax
  __int64 result; // rax
  const data::ProudSkillExcelConfig *proud_skill_config_ptr; // [rsp+10h] [rbp-180h]
  const std::vector<data::TalentFilterCond> *__for_range; // [rsp+18h] [rbp-178h]
  char v26[368]; // [rsp+20h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 4 21 talent_filter_cond:61 48 4 17 proud_skill_id:47 64 8 14 __for_begin:61 96 8 12 __for_e"
                        "nd:61 128 8 7 iter:63 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = AvatarTalentExcelConfigMgr::checkProudSkillCond;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862727] = -218959118;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 48) = proud_skill_id;
  v7 = *(unsigned int *)(v4 + 48);
  proud_skill_config_ptr = data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(this, v7);
  if ( proud_skill_config_ptr )
  {
    if ( std::vector<data::TalentFilterCond>::empty(&proud_skill_config_ptr->filter_conds) )
    {
      v3 = 1;
    }
    else
    {
      __for_range = &proud_skill_config_ptr->filter_conds;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 64, v7);
      *(std::vector<data::TalentFilterCond>::const_iterator *)(v4 + 64) = std::vector<data::TalentFilterCond>::begin(__for_range);
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 96, v7);
      *(std::vector<data::TalentFilterCond>::const_iterator *)(v4 + 96) = std::vector<data::TalentFilterCond>::end(__for_range);
      while ( 1 )
      {
        v9 = (char *)(v4 + 96);
        if ( !__gnu_cxx::operator!=<data::TalentFilterCond const*,std::vector<data::TalentFilterCond>>(
                (const __gnu_cxx::__normal_iterator<const data::TalentFilterCond*,std::vector<data::TalentFilterCond> > *)(v4 + 64),
                (const __gnu_cxx::__normal_iterator<const data::TalentFilterCond*,std::vector<data::TalentFilterCond> > *)(v4 + 96)) )
          break;
        *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 4;
        v10 = (data::TalentFilterCond *)__gnu_cxx::__normal_iterator<data::TalentFilterCond const*,std::vector<data::TalentFilterCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::TalentFilterCond*,std::vector<data::TalentFilterCond> > *const)(v4 + 64));
        v11 = (int *)v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        v12 = *v11;
        v13 = *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000);
        LOBYTE(v9) = v13 != 0;
        if ( v13 != 0 && v13 <= 3 )
          __asan_report_store4(v4 + 32, v9);
        *(_DWORD *)(v4 + 32) = v12;
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
        p_talent_filter_map = &this->talent_filter_map;
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 128, v9);
        *(std::map<data::TalentFilterCond,data::ElementType>::const_iterator *)(v4 + 128) = std::map<data::TalentFilterCond,data::ElementType>::find(
                                                                                              p_talent_filter_map,
                                                                                              (const std::map<data::TalentFilterCond,data::ElementType>::key_type *)(v4 + 32));
        *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
        v15 = &this->talent_filter_map;
        if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 160, v4 + 32);
        *(std::map<data::TalentFilterCond,data::ElementType>::const_iterator *)(v4 + 160) = std::map<data::TalentFilterCond,data::ElementType>::end(v15);
        v16 = std::operator==(
                (const std::_Rb_tree_const_iterator<std::pair<const data::TalentFilterCond,data::ElementType> >::_Self *)(v4 + 128),
                (const std::_Rb_tree_const_iterator<std::pair<const data::TalentFilterCond,data::ElementType> >::_Self *)(v4 + 160));
        *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v16 )
        {
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
            4u,
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "checkProudSkillCond",
            66);
          v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  (common::milog::MiLogStream *const)(v4 + 256),
                  (const char (*)[47])"talent_filter_map not find talent_filter_cond:");
          common::milog::MiLogStream::operator<<<data::TalentFilterCond,(data::TalentFilterCond*)0>(
            v17,
            (const data::TalentFilterCond *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
          *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v3 = 0;
          v18 = 0;
        }
        else
        {
          v19 = std::_Rb_tree_const_iterator<std::pair<data::TalentFilterCond const,data::ElementType>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::TalentFilterCond,data::ElementType> > *const)(v4 + 128));
          p_second = &v19->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          if ( element_type == v19->second )
          {
            v3 = 1;
            v18 = 0;
          }
          else
          {
            v18 = 1;
          }
        }
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( v18 != 1 )
        {
          v21 = 0;
          goto LABEL_37;
        }
        __gnu_cxx::__normal_iterator<data::TalentFilterCond const*,std::vector<data::TalentFilterCond>>::operator++((__gnu_cxx::__normal_iterator<const data::TalentFilterCond*,std::vector<data::TalentFilterCond> > *const)(v4 + 64));
      }
      v21 = 1;
LABEL_37:
      if ( v21 == 1 )
        v3 = 0;
    }
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
      3u,
      "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
      "checkProudSkillCond",
      52);
    v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           (common::milog::MiLogStream *const)(v4 + 192),
           (const char (*)[48])"findProudSkillExcelConfig fail, proud_skill_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v3 = 0;
  }
  result = v3;
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
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
  return result;
};

// Line 81: range 0000000012E7C1CC-0000000012E7C380
const std::set<unsigned int> *__fastcall AvatarTalentExcelConfigMgr::findProudSkillSetByGroupId(
        const AvatarTalentExcelConfigMgr *const this,
        __int64 proud_skill_group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_proud_skill_group_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v6; // rdx
  const std::set<unsigned int> *result; // rax
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 23 proud_skill_group_id:80 64 8 7 iter:82 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarTalentExcelConfigMgr::findProudSkillSetByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = proud_skill_group_id;
  p_proud_skill_group_map = &this->proud_skill_group_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, proud_skill_group_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_proud_skill_group_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->proud_skill_group_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
  if ( std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96)) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  if ( v8 == (char *)v2 )
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

// Line 88: range 0000000012E7C382-0000000012E7C6A9
__int64 __fastcall AvatarTalentExcelConfigMgr::findProudSkillId(
        const AvatarTalentExcelConfigMgr *const this,
        __int64 proud_skill_group_id,
        uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *p_proud_skill_level_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::map<unsigned int,unsigned int> *p_second; // rdx
  std::map<unsigned int,unsigned int> *v11; // rdx
  bool v12; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v13; // rdx
  unsigned int *v14; // rax
  char v16[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 23 proud_skill_group_id:87 48 4 8 level:87 64 8 7 iter:89 96 8 9 <unknown> 128 8 13 level"
                        "_iter:95 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarTalentExcelConfigMgr::findProudSkillId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = proud_skill_group_id;
  *(_DWORD *)(v3 + 48) = level;
  p_proud_skill_level_map = &this->proud_skill_level_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, proud_skill_group_id);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::find(p_proud_skill_level_map, (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->proud_skill_level_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                           p_second,
                                                                           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 160) = std::map<unsigned int,unsigned int>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      result = 0LL;
    }
    else
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 128));
      v14 = &v13->second;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      result = v13->second;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 106: range 0000000012E7C6AA-0000000012E7C6F3
const data::ProudSkillExcelConfig *__cdecl AvatarTalentExcelConfigMgr::findProudSkillConfig(
        const AvatarTalentExcelConfigMgr *const this,
        uint32_t proud_skill_group_id,
        uint32_t level)
{
  uint32_t proud_skill_id; // [rsp+1Ch] [rbp-4h]

  proud_skill_id = AvatarTalentExcelConfigMgr::findProudSkillId(this, proud_skill_group_id, level);
  if ( proud_skill_id )
    return data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(this, proud_skill_id);
  else
    return 0LL;
};

// Line 118: range 0000000012E7C6F4-0000000012E7CDAB
__int64 __fastcall AvatarTalentExcelConfigMgr::addOpenConfigIndex(
        AvatarTalentExcelConfigMgr *const this,
        const std::string *open_config,
        OpenConfigType open_config_type,
        uint32_t index)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 result; // rax
  std::pair<OpenConfigType,unsigned int> *v8; // r8
  std::unordered_map<std::string,std::pair<OpenConfigType,unsigned int>> *p_open_config_index_map; // rcx
  std::unordered_map<std::string,std::pair<OpenConfigType,unsigned int>> *v10; // rdx
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,std::pair<OpenConfigType,unsigned int> >,false,true>::pointer v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__detail::_Node_iterator<std::pair<const std::string,std::pair<OpenConfigType,unsigned int> >,false,true>::pointer v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__detail::_Node_iterator<std::pair<const std::string,std::pair<OpenConfigType,unsigned int> >,false,true>::pointer v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  char v33[368]; // [rsp+20h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 4 20 open_config_type:117 48 4 9 index:117 64 8 7 val:123 96 8 8 iter:129 128 8 9 <unknown>"
                        " 160 16 6 pr:124 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = AvatarTalentExcelConfigMgr::addOpenConfigIndex;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -219021312;
  v6[536862727] = -218959118;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 32) = open_config_type;
  *(_DWORD *)(v4 + 48) = index;
  if ( (unsigned __int8)std::string::empty() )
  {
    result = 0LL;
  }
  else
  {
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, open_config);
    *(std::pair<OpenConfigType,unsigned int> *)(v4 + 64) = std::make_pair<OpenConfigType &,unsigned int &>(
                                                             (OpenConfigType *)(v4 + 32),
                                                             (unsigned int *)(v4 + 48));
    p_open_config_index_map = &this->open_config_index_map;
    if ( *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    *(std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::pair<OpenConfigType,unsigned int> >,false,true>,bool> *)(v4 + 160) = std::unordered_map<std::string,std::pair<OpenConfigType,unsigned int>>::emplace<std::string const&,std::pair<OpenConfigType,unsigned int>&>(p_open_config_index_map, open_config, (std::pair<OpenConfigType,unsigned int> *)(v4 + 64), (const std::string *)p_open_config_index_map, v8);
    if ( *(char *)(((v4 + 168) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(v4 + 168, open_config, v4 + 168);
    if ( *(_BYTE *)(v4 + 168) )
    {
      result = 0LL;
    }
    else
    {
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 96, open_config);
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4 + 160);
      *(_QWORD *)(v4 + 96) = *(_QWORD *)(v4 + 160);
      v10 = &this->open_config_index_map;
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 128, open_config);
      *(std::unordered_map<std::string,std::pair<OpenConfigType,unsigned int>>::iterator *)(v4 + 128) = std::unordered_map<std::string,std::pair<OpenConfigType,unsigned int>>::end(v10);
      v11 = std::__detail::operator==<std::pair<std::string const,std::pair<OpenConfigType,unsigned int>>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::pair<OpenConfigType,unsigned int> >,true> *)(v4 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::pair<OpenConfigType,unsigned int> >,true> *)(v4 + 128));
      *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v11 )
      {
        *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
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
          "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
          "addOpenConfigIndex",
          132);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                v12,
                (const char (*)[47])"emplace fail but iter is invalid! open_config:");
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, open_config);
        v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v14,
                (const char (*)[19])" open_config_type:");
        v16 = common::milog::MiLogStream::operator<<<OpenConfigType,(OpenConfigType*)0>(
                v15,
                (const OpenConfigType *)(v4 + 32));
        v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v18 = std::__detail::_Node_iterator<std::pair<std::string const,std::pair<OpenConfigType,unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::pair<OpenConfigType,unsigned int> >,false,true> *const)(v4 + 96));
        if ( std::operator!=<OpenConfigType,unsigned int>(
               &v18->second,
               (const std::pair<OpenConfigType,unsigned int> *)(v4 + 64)) )
        {
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
            4u,
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "addOpenConfigIndex",
            137);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v19, (const char (*)[41])byte_1AABE1A0);
          v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, open_config);
          v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" type1:");
          v23 = std::__detail::_Node_iterator<std::pair<std::string const,std::pair<OpenConfigType,unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::pair<OpenConfigType,unsigned int> >,false,true> *const)(v4 + 96));
          v24 = common::milog::MiLogStream::operator<<<OpenConfigType,(OpenConfigType*)0>(
                  v22,
                  (const OpenConfigType *)&v23->second);
          v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])" index:");
          v26 = std::__detail::_Node_iterator<std::pair<std::string const,std::pair<OpenConfigType,unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::pair<OpenConfigType,unsigned int> >,false,true> *const)(v4 + 96));
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &v26->second.second);
          v28 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v27, (const char (*)[8])" type2:");
          v29 = common::milog::MiLogStream::operator<<<OpenConfigType,(OpenConfigType*)0>(
                  v28,
                  (const OpenConfigType *)(v4 + 32));
          v30 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v29, (const char (*)[8])" index:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
          result = 0xFFFFFFFFLL;
        }
        else
        {
          result = 0LL;
        }
      }
    }
  }
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
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
  return result;
};

// Line 147: range 0000000012E7CDAC-0000000012E7CF8F
int32_t __cdecl AvatarTalentExcelConfigMgr::rewriteAvatarTalentExcelConfig(
        AvatarTalentExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::AvatarTalentExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::AvatarTalentExcelConfig> >::type *avatar_talent_excel_config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:148 64 8 13 __for_end:148";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false>::__node_type *)AvatarTalentExcelConfigMgr::rewriteAvatarTalentExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->avatar_talent_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::AvatarTalentExcelConfig>(__in);
    avatar_talent_excel_config = std::get<1ul,unsigned int const,data::AvatarTalentExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::PropValConfig,data::FightPropType data::PropValConfig::*>(
      &avatar_talent_excel_config->add_props,
      (data::FightPropType *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 157: range 0000000012E7CF90-0000000012E7D9D0
int32_t __cdecl AvatarTalentExcelConfigMgr::checkAvatarTalentExcelConfig(
        AvatarTalentExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_prev_talent; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  JsonConfigMgr *p_json_config_mgr; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1BCh]
  data::AvatarTalentExcelConfigMap *__for_range; // [rsp+18h] [rbp-1B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>::reference v32; // [rsp+20h] [rbp-1B0h]
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarTalentExcelConfig> >::type *talent_id; // [rsp+28h] [rbp-1A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarTalentExcelConfig> >::type *avatar_talent_excel_config; // [rsp+30h] [rbp-1A0h]
  const std::string *open_config; // [rsp+38h] [rbp-198h]
  char v36[400]; // [rsp+40h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:160 64 8 13 __for_end:160 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarTalentExcelConfigMgr::checkAvatarTalentExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  ret = 0;
  __for_range = &this->avatar_talent_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_52;
    }
    v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false> *const)(v3 + 32));
    talent_id = std::get<0ul,unsigned int const,data::AvatarTalentExcelConfig>(v32);
    avatar_talent_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarTalentExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarTalentExcelConfig>(v32);
    p_prev_talent = &avatar_talent_excel_config->prev_talent;
    if ( *(_BYTE *)(((unsigned __int64)p_prev_talent >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_prev_talent & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_prev_talent >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_prev_talent);
    }
    if ( avatar_talent_excel_config->prev_talent
      && !data::AvatarTalentExcelConfigMgrBase::findAvatarTalentExcelConfig(
            this,
            avatar_talent_excel_config->prev_talent) )
    {
      *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "checkAvatarTalentExcelConfig",
        166);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v7, (const char (*)[27])byte_1AABE380);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v8,
             &avatar_talent_excel_config->prev_talent);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])byte_1AABE3C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, talent_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v11 = 0;
      goto LABEL_52;
    }
    p_item_config_mgr = &txt_config_mgr->item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_talent_excel_config->main_cost_item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_talent_excel_config->main_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_talent_excel_config->main_cost_item_id);
    }
    if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, avatar_talent_excel_config->main_cost_item_id) )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_talent_excel_config->main_cost_item_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_talent_excel_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_talent_excel_config->main_cost_item_count >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_talent_excel_config->main_cost_item_count);
    }
    if ( avatar_talent_excel_config->main_cost_item_count )
      v13 = 0;
    else
LABEL_23:
      v13 = 1;
    if ( v13 )
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
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "checkAvatarTalentExcelConfig",
        174);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v14, (const char (*)[37])byte_1AABE400);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, talent_id);
      v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])byte_1AABE460);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v17,
        &avatar_talent_excel_config->main_cost_item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v11 = 0;
      goto LABEL_52;
    }
    if ( *(_BYTE *)(((unsigned __int64)&avatar_talent_excel_config->vice_cost_item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_talent_excel_config->vice_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_talent_excel_config->vice_cost_item_id);
    }
    if ( avatar_talent_excel_config->vice_cost_item_id )
    {
      if ( !ItemExcelConfigMgr::findItemConfig(
              &txt_config_mgr->item_config_mgr,
              avatar_talent_excel_config->vice_cost_item_id) )
        goto LABEL_36;
      if ( *(_BYTE *)(((unsigned __int64)&avatar_talent_excel_config->vice_cost_item_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_talent_excel_config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_talent_excel_config->vice_cost_item_count >> 3)
                                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&avatar_talent_excel_config->vice_cost_item_count);
      }
      if ( avatar_talent_excel_config->vice_cost_item_count )
        v18 = 0;
      else
LABEL_36:
        v18 = 1;
      if ( v18 )
        break;
    }
    open_config = &avatar_talent_excel_config->open_config;
    if ( (unsigned __int8)std::string::empty() != 1 )
    {
      p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
      if ( !JsonConfigMgr::findTalentMixinConfigs(p_json_config_mgr, open_config) )
      {
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
          "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
          "checkAvatarTalentExcelConfig",
          192);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v25, (const char (*)[31])byte_1AABE540);
        v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, open_config);
        v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v27, (const char (*)[13])byte_1AABE3C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, talent_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
    "checkAvatarTalentExcelConfig",
    183);
  v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v20 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v19, (const char (*)[37])byte_1AABE4A0);
  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, talent_id);
  v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])byte_1AABE500);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v22,
    &avatar_talent_excel_config->vice_cost_item_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v11 = 0;
LABEL_52:
  if ( v11 == 1 )
    v2 = ret;
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
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

// Line 202: range 0000000012E7D9D2-0000000012E7FAD7
int32_t __cdecl AvatarTalentExcelConfigMgr::rewriteProudSkillExcelConfig(
        AvatarTalentExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // rsi
  unsigned int *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  std::set<unsigned int> *v12; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  char *v16; // rsi
  std::map<unsigned int,unsigned int>::size_type v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v22; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // r14d
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *v25; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v26; // rax
  unsigned int *v27; // rdx
  char v28; // cl
  std::map<data::TalentFilterCond,data::ElementType> *p_talent_filter_map; // rcx
  char v30; // al
  char *v31; // rsi
  std::map<data::TalentFilterCond,data::ElementType>::mapped_type *v32; // rax
  _DWORD *v33; // rdx
  char v34; // cl
  std::map<data::TalentFilterCond,data::ElementType> *v35; // rcx
  char v36; // al
  char *v37; // rsi
  std::map<data::TalentFilterCond,data::ElementType>::mapped_type *v38; // rax
  _DWORD *v39; // rdx
  char v40; // cl
  std::map<data::TalentFilterCond,data::ElementType> *v41; // rcx
  char v42; // al
  char *v43; // rsi
  std::map<data::TalentFilterCond,data::ElementType>::mapped_type *v44; // rax
  _DWORD *v45; // rdx
  char v46; // cl
  std::map<data::TalentFilterCond,data::ElementType> *v47; // rcx
  char v48; // al
  char *v49; // rsi
  std::map<data::TalentFilterCond,data::ElementType>::mapped_type *v50; // rax
  _DWORD *v51; // rdx
  char v52; // cl
  std::map<data::TalentFilterCond,data::ElementType> *v53; // rcx
  char v54; // al
  char *v55; // rsi
  std::map<data::TalentFilterCond,data::ElementType>::mapped_type *v56; // rax
  _DWORD *v57; // rdx
  char v58; // cl
  std::map<data::TalentFilterCond,data::ElementType> *v59; // rcx
  char v60; // al
  char *v61; // rsi
  std::map<data::TalentFilterCond,data::ElementType>::mapped_type *v62; // rax
  _DWORD *v63; // rdx
  char v64; // cl
  std::map<data::TalentFilterCond,data::ElementType> *v65; // rcx
  char v66; // al
  std::map<data::TalentFilterCond,data::ElementType>::mapped_type *v67; // rax
  _DWORD *v68; // rdx
  char v69; // cl
  char *v70; // rsi
  char *v71; // rsi
  unsigned __int64 v72; // rax
  uint32_t *p_skill_depot_id; // rsi
  char *v74; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v75; // rax
  int *v76; // rdx
  int v77; // ecx
  char v78; // al
  __int64 v79; // rsi
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  __int64 v82; // rsi
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  char *v85; // rsi
  unsigned int *v86; // rax
  int *v87; // rdx
  int v88; // ecx
  char v89; // al
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_proud_life_effect_avatars_map; // rcx
  __int64 v93; // rsi
  std::set<unsigned int> *v94; // rdx
  unsigned __int64 v95; // rax
  common::milog::MiLogStream *v96; // rdx
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-5B4h]
  data::ProudSkillExcelConfigMap *__for_range; // [rsp+20h] [rbp-5B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-5A8h]
  const unsigned int *proud_skill_id; // [rsp+30h] [rbp-5A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *proud_skill_config; // [rsp+38h] [rbp-598h]
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *proud_level_map; // [rsp+40h] [rbp-590h]
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_0; // [rsp+48h] [rbp-588h]
  data::AvatarExcelConfigMap *__for_range_1; // [rsp+50h] [rbp-580h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_5; // [rsp+58h] [rbp-578h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v110; // [rsp+60h] [rbp-570h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *life_effect_type; // [rsp+68h] [rbp-568h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *avatar_id_set; // [rsp+70h] [rbp-560h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>::reference v113; // [rsp+78h] [rbp-558h]
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarExcelConfig> >::type *avatar_id; // [rsp+80h] [rbp-550h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarExcelConfig> >::type *avatar_config; // [rsp+88h] [rbp-548h]
  std::vector<unsigned int> *__for_range_2; // [rsp+90h] [rbp-540h]
  data::AvatarSkillDepotExcelConfig *depot_config_ptr; // [rsp+98h] [rbp-538h]
  const std::vector<data::ProudSkillOpenConfig> *__for_range_3; // [rsp+A0h] [rbp-530h]
  const data::ProudSkillOpenConfig *proud_skill_open_config; // [rsp+A8h] [rbp-528h]
  const std::set<unsigned int> *proud_skill_id_set_ptr; // [rsp+B0h] [rbp-520h]
  data::ProudSkillExcelConfig *proud_skill_config_ptr; // [rsp+C0h] [rbp-510h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false>::reference v122; // [rsp+C8h] [rbp-508h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *proud_skill_group_id; // [rsp+D0h] [rbp-500h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *proud_level_map_0; // [rsp+D8h] [rbp-4F8h]
  char v125[1264]; // [rsp+E0h] [rbp-4F0h] BYREF

  v3 = (unsigned __int64)v125;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1216LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "34 48 4 9 level:231 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 18 skill_depot_id:256 192 4 18 proud_skill_"
                        "id:278 208 4 9 <unknown> 224 8 15 __for_begin:203 256 8 13 __for_end:203 288 8 15 __for_begin:22"
                        "4 320 8 13 __for_end:224 352 8 9 <unknown> 384 8 15 __for_begin:252 416 8 13 __for_end:252 448 8"
                        " 15 __for_begin:256 480 8 13 __for_end:256 512 8 15 __for_begin:265 544 8 13 __for_end:265 576 8"
                        " 15 __for_begin:278 608 8 13 __for_end:278 640 8 15 __for_begin:297 672 8 13 __for_end:297 704 2"
                        "4 26 all_skill_depot_id_vec:254 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 "
                        "9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarTalentExcelConfigMgr::rewriteProudSkillExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -234556924;
  v5[536862726] = -234556924;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862737] = -218959360;
  v5[536862738] = -218959360;
  v5[536862739] = -218959360;
  v5[536862740] = -218959360;
  v5[536862741] = -218959360;
  v5[536862742] = -234881024;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -218959118;
  v5[536862757] = -202116109;
  __for_range = &this->proud_skill_excel_config_map;
  if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 224, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 256, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const unsigned int *)(v3 + 256);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v3 + 224),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v3 + 256)) )
    {
      v11 = 1;
      goto LABEL_20;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false> *const)(v3 + 224));
    proud_skill_id = std::get<0ul,unsigned int const,data::ProudSkillExcelConfig>(__in);
    proud_skill_config = std::get<1ul,unsigned int const,data::ProudSkillExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &proud_skill_config->cost_items,
      (unsigned int *)8);
    common::tools::MiscUtils::removeEmptyElement<data::PropValConfig,data::FightPropType data::PropValConfig::*>(
      &proud_skill_config->add_props,
      (data::FightPropType *)8);
    common::tools::MiscUtils::removeEmptyElement<data::TalentFilterCond>(&proud_skill_config->filter_conds);
    proud_level_map = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                        &this->proud_skill_level_map,
                        &proud_skill_config->proud_skill_group_id);
    v8 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
           proud_level_map,
           &proud_skill_config->level,
           &proud_skill_config->proud_skill_id,
           &proud_skill_config->level,
           v7);
    if ( !v8.second )
    {
      if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteProudSkillExcelConfig",
        212);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 768),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v9, (const char (*)[39])byte_1AABE8C0);
      v6 = proud_skill_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
      *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
      goto LABEL_20;
    }
    v12 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
            &this->proud_skill_group_map,
            &proud_skill_config->proud_skill_group_id);
    v13 = std::set<unsigned int>::insert(v12, proud_skill_id);
    if ( !v13.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false> *const)(v3 + 224));
  }
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
    "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
    "rewriteProudSkillExcelConfig",
    218);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 832),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])byte_1AABDBA0);
  v6 = proud_skill_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, proud_skill_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
  *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v11 = 0;
LABEL_20:
  *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
  {
    ret = 0;
    __for_range_0 = &this->proud_skill_level_map;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v6);
    *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v6);
    *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_0);
    while ( 1 )
    {
      v16 = (char *)(v3 + 320);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 288),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 320)) )
        break;
      v122 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 288));
      proud_skill_group_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v122);
      proud_level_map_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v122);
      if ( !std::map<unsigned int,unsigned int>::empty(proud_level_map_0) )
      {
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 48, v16);
        for ( *(_DWORD *)(v3 + 48) = 1; ; ++*(_DWORD *)(v3 + 48) )
        {
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          v17 = *(unsigned int *)(v3 + 48);
          if ( v17 > std::map<unsigned int,unsigned int>::size(proud_level_map_0) )
            break;
          v16 = (char *)(v3 + 48);
          if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>(
                  proud_level_map_0,
                  (const unsigned int *)(v3 + 48)) )
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
              "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
              "rewriteProudSkillExcelConfig",
              235);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 896),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    v18,
                    (const char (*)[44])byte_1AABE920);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, proud_skill_group_id);
            v21 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v20,
                    (const char (*)[20])byte_1AABE980);
            v16 = (char *)(v3 + 48);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
            *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 352, v16);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 352) = std::map<unsigned int,unsigned int>::begin(proud_level_map_0);
        v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 352));
        p_second = &v22->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        second = v22->second;
        v25 = proud_skill_group_id;
        v26 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->first_proud_skill_map,
                proud_skill_group_id);
        v27 = v26;
        v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
        if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
        {
          LOBYTE(v25) = v28 != 0;
          __asan_report_store4(v26, v25);
        }
        *v27 = second;
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 288));
    }
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    p_talent_filter_map = &this->talent_filter_map;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    v30 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
    if ( v30 != 0 && v30 <= 3 )
    {
      LOBYTE(v16) = v30 != 0;
      __asan_report_store4(v3 + 64, v16);
    }
    *(_DWORD *)(v3 + 64) = 1;
    v31 = (char *)(v3 + 64);
    v32 = std::map<data::TalentFilterCond,data::ElementType>::operator[](
            p_talent_filter_map,
            (std::map<data::TalentFilterCond,data::ElementType>::key_type *)(v3 + 64));
    v33 = v32;
    v34 = *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
    if ( v34 != 0 && (char)(((unsigned __int8)v32 & 7) + 3) >= v34 )
    {
      LOBYTE(v31) = v34 != 0;
      __asan_report_store4(v32, v31);
    }
    *v33 = 1;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    v35 = &this->talent_filter_map;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
    v36 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
    if ( v36 != 0 && v36 <= 3 )
    {
      LOBYTE(v31) = v36 != 0;
      __asan_report_store4(v3 + 80, v31);
    }
    *(_DWORD *)(v3 + 80) = 2;
    v37 = (char *)(v3 + 80);
    v38 = std::map<data::TalentFilterCond,data::ElementType>::operator[](
            v35,
            (std::map<data::TalentFilterCond,data::ElementType>::key_type *)(v3 + 80));
    v39 = v38;
    v40 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
    if ( v40 != 0 && (char)(((unsigned __int8)v38 & 7) + 3) >= v40 )
    {
      LOBYTE(v37) = v40 != 0;
      __asan_report_store4(v38, v37);
    }
    *v39 = 4;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    v41 = &this->talent_filter_map;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
    v42 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
    if ( v42 != 0 && v42 <= 3 )
    {
      LOBYTE(v37) = v42 != 0;
      __asan_report_store4(v3 + 96, v37);
    }
    *(_DWORD *)(v3 + 96) = 3;
    v43 = (char *)(v3 + 96);
    v44 = std::map<data::TalentFilterCond,data::ElementType>::operator[](
            v41,
            (std::map<data::TalentFilterCond,data::ElementType>::key_type *)(v3 + 96));
    v45 = v44;
    v46 = *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000);
    if ( v46 != 0 && (char)(((unsigned __int8)v44 & 7) + 3) >= v46 )
    {
      LOBYTE(v43) = v46 != 0;
      __asan_report_store4(v44, v43);
    }
    *v45 = 2;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    v47 = &this->talent_filter_map;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
    v48 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
    if ( v48 != 0 && v48 <= 3 )
    {
      LOBYTE(v43) = v48 != 0;
      __asan_report_store4(v3 + 112, v43);
    }
    *(_DWORD *)(v3 + 112) = 4;
    v49 = (char *)(v3 + 112);
    v50 = std::map<data::TalentFilterCond,data::ElementType>::operator[](
            v47,
            (std::map<data::TalentFilterCond,data::ElementType>::key_type *)(v3 + 112));
    v51 = v50;
    v52 = *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000);
    if ( v52 != 0 && (char)(((unsigned __int8)v50 & 7) + 3) >= v52 )
    {
      LOBYTE(v49) = v52 != 0;
      __asan_report_store4(v50, v49);
    }
    *v51 = 3;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    v53 = &this->talent_filter_map;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
    v54 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
    if ( v54 != 0 && v54 <= 3 )
    {
      LOBYTE(v49) = v54 != 0;
      __asan_report_store4(v3 + 128, v49);
    }
    *(_DWORD *)(v3 + 128) = 5;
    v55 = (char *)(v3 + 128);
    v56 = std::map<data::TalentFilterCond,data::ElementType>::operator[](
            v53,
            (std::map<data::TalentFilterCond,data::ElementType>::key_type *)(v3 + 128));
    v57 = v56;
    v58 = *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000);
    if ( v58 != 0 && (char)(((unsigned __int8)v56 & 7) + 3) >= v58 )
    {
      LOBYTE(v55) = v58 != 0;
      __asan_report_store4(v56, v55);
    }
    *v57 = 7;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    v59 = &this->talent_filter_map;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
    v60 = *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000);
    if ( v60 != 0 && v60 <= 3 )
    {
      LOBYTE(v55) = v60 != 0;
      __asan_report_store4(v3 + 144, v55);
    }
    *(_DWORD *)(v3 + 144) = 6;
    v61 = (char *)(v3 + 144);
    v62 = std::map<data::TalentFilterCond,data::ElementType>::operator[](
            v59,
            (std::map<data::TalentFilterCond,data::ElementType>::key_type *)(v3 + 144));
    v63 = v62;
    v64 = *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000);
    if ( v64 != 0 && (char)(((unsigned __int8)v62 & 7) + 3) >= v64 )
    {
      LOBYTE(v61) = v64 != 0;
      __asan_report_store4(v62, v61);
    }
    *v63 = 5;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    v65 = &this->talent_filter_map;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 4;
    v66 = *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000);
    if ( v66 != 0 && v66 <= 3 )
    {
      LOBYTE(v61) = v66 != 0;
      __asan_report_store4(v3 + 160, v61);
    }
    *(_DWORD *)(v3 + 160) = 7;
    v70 = (char *)(v3 + 160);
    v67 = std::map<data::TalentFilterCond,data::ElementType>::operator[](
            v65,
            (std::map<data::TalentFilterCond,data::ElementType>::key_type *)(v3 + 160));
    v68 = v67;
    v69 = *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000);
    LOBYTE(v70) = v69 != 0;
    if ( v69 != 0 && (char)(((unsigned __int8)v67 & 7) + 3) >= v69 )
      __asan_report_store4(v67, v70);
    *v68 = 8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &txt_config_mgr->avatar_config_mgr.avatar_excel_config_map;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 384, v70);
    *(std::unordered_map<unsigned int,data::AvatarExcelConfig>::iterator *)(v3 + 384) = std::unordered_map<unsigned int,data::AvatarExcelConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 416, v70);
    *(std::unordered_map<unsigned int,data::AvatarExcelConfig>::iterator *)(v3 + 416) = std::unordered_map<unsigned int,data::AvatarExcelConfig>::end(__for_range_1);
    while ( 1 )
    {
      v71 = (char *)(v3 + 416);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExcelConfig>,false> *)(v3 + 384),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExcelConfig>,false> *)(v3 + 416)) )
        break;
      v113 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false> *const)(v3 + 384));
      avatar_id = std::get<0ul,unsigned int const,data::AvatarExcelConfig>(v113);
      avatar_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarExcelConfig>(v113);
      v72 = ((v3 + 704) >> 3) + 2147450880;
      *(_WORD *)v72 = 0;
      *(_BYTE *)(v72 + 2) = 0;
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v3 + 704),
        &avatar_config->cand_skill_depot_ids);
      p_skill_depot_id = &avatar_config->skill_depot_id;
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 704), &avatar_config->skill_depot_id);
      __for_range_2 = (std::vector<unsigned int> *)(v3 + 704);
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 448, p_skill_depot_id);
      *(std::vector<unsigned int>::iterator *)(v3 + 448) = std::vector<unsigned int>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 480, p_skill_depot_id);
      *(std::vector<unsigned int>::iterator *)(v3 + 480) = std::vector<unsigned int>::end(__for_range_2);
      while ( 1 )
      {
        v74 = (char *)(v3 + 480);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 448),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 480)) )
          break;
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 4;
        v75 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 448));
        v76 = (int *)v75;
        if ( *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v75 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v75);
        }
        v77 = *v76;
        v78 = *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000);
        if ( v78 != 0 && v78 <= 3 )
        {
          LOBYTE(v74) = v78 != 0;
          __asan_report_store4(v3 + 176, v74);
        }
        *(_DWORD *)(v3 + 176) = v77;
        v79 = *(unsigned int *)(v3 + 176);
        depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                             &txt_config_mgr->avatar_skill_config_mgr,
                             v79);
        if ( depot_config_ptr )
        {
          __for_range_3 = &depot_config_ptr->inherent_proud_skill_opens;
          *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 512, v79);
          *(std::vector<data::ProudSkillOpenConfig>::const_iterator *)(v3 + 512) = std::vector<data::ProudSkillOpenConfig>::begin(__for_range_3);
          *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 544, v79);
          *(std::vector<data::ProudSkillOpenConfig>::const_iterator *)(v3 + 544) = std::vector<data::ProudSkillOpenConfig>::end(__for_range_3);
          while ( __gnu_cxx::operator!=<data::ProudSkillOpenConfig const*,std::vector<data::ProudSkillOpenConfig>>(
                    (const __gnu_cxx::__normal_iterator<const data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *)(v3 + 512),
                    (const __gnu_cxx::__normal_iterator<const data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *)(v3 + 544)) )
          {
            proud_skill_open_config = __gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig const*,std::vector<data::ProudSkillOpenConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *const)(v3 + 512));
            if ( *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&proud_skill_open_config->proud_skill_group_id);
            }
            if ( proud_skill_open_config->proud_skill_group_id )
            {
              if ( *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&proud_skill_open_config->proud_skill_group_id);
              }
              v82 = proud_skill_open_config->proud_skill_group_id;
              proud_skill_id_set_ptr = AvatarTalentExcelConfigMgr::findProudSkillSetByGroupId(this, v82);
              if ( proud_skill_id_set_ptr )
              {
                *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 576, v82);
                *(std::set<unsigned int>::iterator *)(v3 + 576) = std::set<unsigned int>::begin(proud_skill_id_set_ptr);
                *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 608, v82);
                *(std::set<unsigned int>::iterator *)(v3 + 608) = std::set<unsigned int>::end(proud_skill_id_set_ptr);
                while ( 1 )
                {
                  v85 = (char *)(v3 + 608);
                  if ( !std::operator!=(
                          (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 576),
                          (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 608)) )
                    break;
                  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 4;
                  v86 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 576));
                  v87 = (int *)v86;
                  if ( *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v86 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v86);
                  }
                  v88 = *v87;
                  v89 = *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000);
                  if ( v89 != 0 && v89 <= 3 )
                  {
                    LOBYTE(v85) = v89 != 0;
                    __asan_report_store4(v3 + 192, v85);
                  }
                  *(_DWORD *)(v3 + 192) = v88;
                  proud_skill_config_ptr = data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(
                                             this,
                                             *(unsigned int *)(v3 + 192));
                  if ( proud_skill_config_ptr )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->life_effect_type >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)proud_skill_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->life_effect_type >> 3)
                                                                                            + 0x7FFF8000) )
                    {
                      __asan_report_load4(&proud_skill_config_ptr->life_effect_type);
                    }
                    if ( proud_skill_config_ptr->life_effect_type )
                    {
                      p_proud_life_effect_avatars_map = &this->proud_life_effect_avatars_map;
                      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 4;
                      if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->life_effect_type >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)proud_skill_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->life_effect_type >> 3)
                                                                                              + 0x7FFF8000) )
                      {
                        __asan_report_load4(&proud_skill_config_ptr->life_effect_type);
                      }
                      v93 = (unsigned int)proud_skill_config_ptr->life_effect_type;
                      if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_store4(v3 + 208, v93);
                      }
                      *(_DWORD *)(v3 + 208) = v93;
                      v94 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                              p_proud_life_effect_avatars_map,
                              (std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 208));
                      std::set<unsigned int>::insert(v94, avatar_id);
                      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
                    }
                  }
                  else
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
                      "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
                      "rewriteProudSkillExcelConfig",
                      283);
                    v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1088),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v91 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                            v90,
                            (const char (*)[48])"findProudSkillExcelConfig fail, proud_skill_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v91,
                      (const unsigned int *)(v3 + 192));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
                    *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 576));
                }
                *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = -8;
              }
              else
              {
                *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1024, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1024),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
                  "rewriteProudSkillExcelConfig",
                  274);
                v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1024),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v84 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                        v83,
                        (const char (*)[55])"findProudSkillSetByGroupId fail, proud_skill_group_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v84,
                  &proud_skill_open_config->proud_skill_group_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
                *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            __gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig const*,std::vector<data::ProudSkillOpenConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *const)(v3 + 512));
          }
          *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
        }
        else
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
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "rewriteProudSkillExcelConfig",
            261);
          v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 960),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v81 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  v80,
                  (const char (*)[54])"findAvatarSkillDepotExcelConfig fail, skill_depot_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, (const unsigned int *)(v3 + 176));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
          *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 448));
      }
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 704));
      v95 = ((v3 + 704) >> 3) + 2147450880;
      *(_WORD *)v95 = -1800;
      *(_BYTE *)(v95 + 2) = -8;
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false> *const)(v3 + 384));
    }
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
    __for_range_5 = &this->proud_life_effect_avatars_map;
    *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 640, v71);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 640) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_5);
    *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 672, v71);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 672) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_5);
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 640),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 672)) )
    {
      v110 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 640));
      life_effect_type = std::get<0ul,unsigned int const,std::set<unsigned int>>(v110);
      avatar_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v110);
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
        1u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteProudSkillExcelConfig",
        299);
      v96 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              (common::milog::MiLogStream *const)(v3 + 1152),
              (const char (*)[18])"life_effect_type:");
      v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, life_effect_type);
      v98 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v97, (const char (*)[13])" avatar_ids:");
      common::milog::MiLogStream::operator<<<unsigned int>(v98, avatar_id_set);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
      *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 640));
    }
    v2 = ret;
  }
  if ( v125 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 152) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1216LL, v125);
  }
  return v2;
};

// Line 307: range 0000000012E7FAD8-0000000012E81077
int32_t __cdecl AvatarTalentExcelConfigMgr::checkProudSkillExcelConfig(
        AvatarTalentExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t level; // r15d
  uint32_t v8; // r15d
  uint32_t v9; // r15d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  _BOOL4 v14; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  unsigned __int64 v18; // rax
  std::tuple_element<0,std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *p_id; // rsi
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  int v24; // eax
  ItemExcelConfigMgr *v25; // rcx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // r15d
  char *v33; // rsi
  data::TalentFilterCond *v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  int v40; // edx
  JsonConfigMgr *p_json_config_mgr; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  unsigned __int64 v47; // rdx
  int v48; // eax
  bool is_need_check_cost_items; // [rsp+2Fh] [rbp-371h]
  data::ProudSkillExcelConfigMap *__for_range; // [rsp+30h] [rbp-370h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::reference v53; // [rsp+38h] [rbp-368h]
  std::tuple_element<0,std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *proud_skill_id; // [rsp+40h] [rbp-360h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *proud_skill_excel_config; // [rsp+48h] [rbp-358h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+50h] [rbp-350h]
  const data::IdCountConfig *id_count_config; // [rsp+58h] [rbp-348h]
  const std::vector<data::TalentFilterCond> *__for_range_1; // [rsp+60h] [rbp-340h]
  const std::string *open_config; // [rsp+68h] [rbp-338h]
  char v60[816]; // [rsp+70h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 4 15 filter_cond:362 48 8 15 __for_begin:308 80 8 13 __for_end:308 112 8 15 __for_begin:33"
                        "8 144 8 13 __for_end:338 176 8 15 __for_begin:362 208 8 13 __for_end:362 240 32 9 <unknown> 304 "
                        "32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 3"
                        "2 9 <unknown> 688 48 20 cost_item_id_set:337";
  *(_QWORD *)(v3 + 16) = AvatarTalentExcelConfigMgr::checkProudSkillExcelConfig;
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
  v5[536862743] = -202116109;
  __for_range = &this->proud_skill_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v3 + 80)) )
      break;
    v53 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false> *const)(v3 + 48));
    proud_skill_id = std::get<0ul,unsigned int const,data::ProudSkillExcelConfig>(v53);
    proud_skill_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ProudSkillExcelConfig>(v53);
    is_need_check_cost_items = 0;
    if ( *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&proud_skill_excel_config->level);
    }
    if ( proud_skill_excel_config->level != 1 )
    {
      v6 = (char *)((((_BYTE)proud_skill_excel_config + 100) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->proud_skill_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)proud_skill_excel_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->proud_skill_type >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&proud_skill_excel_config->proud_skill_type);
      }
      if ( proud_skill_excel_config->proud_skill_type == 1 )
      {
        level = proud_skill_excel_config->level;
        is_need_check_cost_items = level <= ConstValueExcelConfigMgr::getCoreProudSkillMaxLevel(&txt_config_mgr->const_value_config_mgr);
      }
      else
      {
        v6 = (char *)((((_BYTE)proud_skill_excel_config + 100) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->proud_skill_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)proud_skill_excel_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->proud_skill_type >> 3)
                                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&proud_skill_excel_config->proud_skill_type);
        }
        if ( proud_skill_excel_config->proud_skill_type == 2 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&proud_skill_excel_config->level);
          }
          v8 = proud_skill_excel_config->level;
          is_need_check_cost_items = v8 <= ConstValueExcelConfigMgr::getInherentProudSkillMaxLevel(&txt_config_mgr->const_value_config_mgr);
        }
        else
        {
          v6 = (char *)((((_BYTE)proud_skill_excel_config + 100) & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->proud_skill_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)proud_skill_excel_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->proud_skill_type >> 3)
                                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&proud_skill_excel_config->proud_skill_type);
          }
          if ( proud_skill_excel_config->proud_skill_type != 3 )
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
              "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
              "checkProudSkillExcelConfig",
              327);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 240),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    v10,
                    (const char (*)[28])byte_1AABECA0);
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v11,
                    &proud_skill_excel_config->proud_skill_type);
            v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v12,
                    (const char (*)[15])byte_1AABDBA0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, proud_skill_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
            *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v14 = 0;
            goto LABEL_100;
          }
          if ( *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&proud_skill_excel_config->level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&proud_skill_excel_config->level);
          }
          v9 = proud_skill_excel_config->level;
          is_need_check_cost_items = v9 <= ConstValueExcelConfigMgr::getActiveSkillMaxLevel(&txt_config_mgr->const_value_config_mgr);
        }
      }
    }
    if ( is_need_check_cost_items && std::vector<data::IdCountConfig>::empty(&proud_skill_excel_config->cost_items) )
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
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "checkProudSkillExcelConfig",
        333);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 304),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v16, (const char (*)[42])byte_1AABECE0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
    }
    else
    {
      v18 = ((v3 + 688) >> 3) + 2147450880;
      *(_DWORD *)v18 = 0;
      *(_WORD *)(v18 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 688));
      __for_range_0 = &proud_skill_excel_config->cost_items;
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 112, v6);
      *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 112) = std::vector<data::IdCountConfig>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 144, v6);
      *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 144) = std::vector<data::IdCountConfig>::end(__for_range_0);
      while ( 1 )
      {
        p_id = (std::tuple_element<0,std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *)(v3 + 144);
        if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 112),
                (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 144)) )
        {
          v24 = 1;
          goto LABEL_70;
        }
        id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 112));
        p_item_config_mgr = &txt_config_mgr->item_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&id_count_config->id);
        }
        if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, id_count_config->id) )
          goto LABEL_52;
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&id_count_config->count);
        }
        if ( id_count_config->count )
          v21 = 0;
        else
LABEL_52:
          v21 = 1;
        if ( v21 )
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
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "checkProudSkillExcelConfig",
            343);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 368),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v22, (const char (*)[42])byte_1AABED40);
          p_id = proud_skill_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, proud_skill_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v24 = 0;
          goto LABEL_70;
        }
        v25 = &txt_config_mgr->item_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&id_count_config->id);
        }
        if ( ItemExcelConfigMgr::getItemType(v25, id_count_config->id) != ITEM_MATERIAL )
        {
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
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "checkProudSkillExcelConfig",
            349);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v26, (const char (*)[51])byte_1AABEDA0);
          p_id = proud_skill_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, proud_skill_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v24 = 0;
          goto LABEL_70;
        }
        if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
               (std::set<unsigned int> *)(v3 + 688),
               &id_count_config->id) )
        {
          break;
        }
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 688), &id_count_config->id);
        __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 112));
      }
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
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "checkProudSkillExcelConfig",
        355);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 496),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v28, (const char (*)[43])byte_1AABEE00);
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, proud_skill_id);
      v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v30, (const char (*)[13])byte_1AABE500);
      p_id = &id_count_config->id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &id_count_config->id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
      *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v24 = 0;
LABEL_70:
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( v24 == 1 )
      {
        __for_range_1 = &proud_skill_excel_config->filter_conds;
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 176, p_id);
        *(std::vector<data::TalentFilterCond>::const_iterator *)(v3 + 176) = std::vector<data::TalentFilterCond>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 208, p_id);
        *(std::vector<data::TalentFilterCond>::const_iterator *)(v3 + 208) = std::vector<data::TalentFilterCond>::end(__for_range_1);
        while ( 1 )
        {
          v33 = (char *)(v3 + 208);
          if ( !__gnu_cxx::operator!=<data::TalentFilterCond const*,std::vector<data::TalentFilterCond>>(
                  (const __gnu_cxx::__normal_iterator<const data::TalentFilterCond*,std::vector<data::TalentFilterCond> > *)(v3 + 176),
                  (const __gnu_cxx::__normal_iterator<const data::TalentFilterCond*,std::vector<data::TalentFilterCond> > *)(v3 + 208)) )
          {
            v40 = 1;
            goto LABEL_88;
          }
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
          v34 = (data::TalentFilterCond *)__gnu_cxx::__normal_iterator<data::TalentFilterCond const*,std::vector<data::TalentFilterCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::TalentFilterCond*,std::vector<data::TalentFilterCond> > *const)(v3 + 176));
          v35 = (int *)v34;
          if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v34);
          }
          v36 = *v35;
          v37 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
          if ( v37 != 0 && v37 <= 3 )
          {
            LOBYTE(v33) = v37 != 0;
            __asan_report_store4(v3 + 32, v33);
          }
          *(_DWORD *)(v3 + 32) = v36;
          if ( !common::tools::MiscUtils::isContains<std::map<data::TalentFilterCond,data::ElementType>,data::TalentFilterCond>(
                  &this->talent_filter_map,
                  (const data::TalentFilterCond *)(v3 + 32)) )
            break;
          __gnu_cxx::__normal_iterator<data::TalentFilterCond const*,std::vector<data::TalentFilterCond>>::operator++((__gnu_cxx::__normal_iterator<const data::TalentFilterCond*,std::vector<data::TalentFilterCond> > *const)(v3 + 176));
        }
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
          "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
          "checkProudSkillExcelConfig",
          366);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 560),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v38, (const char (*)[56])byte_1AABEE60);
        common::milog::MiLogStream::operator<<<data::TalentFilterCond,(data::TalentFilterCond*)0>(
          v39,
          (const data::TalentFilterCond *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v40 = 0;
LABEL_88:
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
        if ( v40 == 1 )
        {
          open_config = &proud_skill_excel_config->open_config;
          if ( (unsigned __int8)std::string::empty() != 1
            && (p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr,
                !JsonConfigMgr::findTalentMixinConfigs(p_json_config_mgr, open_config)) )
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
              "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
              "checkProudSkillExcelConfig",
              375);
            v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 624),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v44 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    v43,
                    (const char (*)[31])byte_1AABE540);
            v45 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, open_config);
            v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v45,
                    (const char (*)[16])byte_1AABEEC0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, proud_skill_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
            *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v32 = 0;
          }
          else
          {
            v32 = 1;
          }
        }
        else
        {
          v32 = 0;
        }
      }
      else
      {
        v32 = 0;
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 688));
      v14 = v32 == 1;
    }
LABEL_100:
    v47 = ((v3 + 688) >> 3) + 2147450880;
    *(_DWORD *)v47 = -117901064;
    *(_WORD *)(v47 + 4) = -1800;
    if ( !v14 )
    {
      v48 = 0;
      goto LABEL_104;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false> *const)(v3 + 48));
  }
  v48 = 1;
LABEL_104:
  if ( v48 == 1 )
    v2 = 0;
  if ( v60 == (char *)v3 )
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

// Line 385: range 0000000012E81078-0000000012E813FF
int32_t __cdecl AvatarTalentExcelConfigMgr::rewriteTalentOpenConfig(
        AvatarTalentExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  int32_t result; // eax
  data::AvatarTalentExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  uint32_t *talent_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarTalentExcelConfig> >::type *talent_config; // [rsp+28h] [rbp-D8h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:386 64 8 13 __for_end:386 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarTalentExcelConfigMgr::rewriteTalentOpenConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->avatar_talent_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_18;
    }
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false> *const)(v3 + 32));
    talent_id = std::get<0ul,unsigned int const,data::AvatarTalentExcelConfig>(v11);
    talent_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarTalentExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarTalentExcelConfig>(v11);
    if ( *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)talent_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)talent_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(talent_id);
    }
    if ( (unsigned int)AvatarTalentExcelConfigMgr::addOpenConfigIndex(
                         this,
                         &talent_config->open_config,
                         OPEN_CONFIG_TALENT,
                         *talent_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
    "rewriteTalentOpenConfig",
    390);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v6, (const char (*)[52])byte_1AABEFA0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, talent_id);
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

// Line 400: range 0000000012E81400-0000000012E81798
int32_t __cdecl AvatarTalentExcelConfigMgr::rewriteProudSkillOpenConfig(
        AvatarTalentExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_proud_skill_group_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  int32_t result; // eax
  data::ProudSkillExcelConfigMap *__for_range; // [rsp+20h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::reference v12; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *proud_skill_id; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *proud_skill_config; // [rsp+38h] [rbp-D8h]
  char v15[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:401 64 8 13 __for_end:401 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarTalentExcelConfigMgr::rewriteProudSkillOpenConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->proud_skill_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_18;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false> *const)(v3 + 32));
    proud_skill_id = std::get<0ul,unsigned int const,data::ProudSkillExcelConfig>(v12);
    proud_skill_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ProudSkillExcelConfig>(v12);
    p_proud_skill_group_id = &proud_skill_config->proud_skill_group_id;
    if ( *(_BYTE *)(((unsigned __int64)p_proud_skill_group_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_proud_skill_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_proud_skill_group_id >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(p_proud_skill_group_id);
    }
    if ( (unsigned int)AvatarTalentExcelConfigMgr::addOpenConfigIndex(
                         this,
                         &proud_skill_config->open_config,
                         OPEN_CONFIG_PROUD_SKILL,
                         proud_skill_config->proud_skill_group_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
    "rewriteProudSkillOpenConfig",
    406);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v7, (const char (*)[52])byte_1AABF0A0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, proud_skill_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_18:
  if ( v9 == 1 )
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

// Line 416: range 0000000012E8179A-0000000012E87CEA
int32_t __cdecl AvatarTalentExcelConfigMgr::rewriteLifeEffectConfig(
        AvatarTalentExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  __int64 v2; // rax
  _DWORD *v3; // rsi
  char *v4; // rsi
  int life_effect_type; // eax
  unsigned __int64 v6; // rax
  char v7; // r12
  char v8; // r13
  char v9; // r14
  char v10; // r15
  const std::string *v11; // rax
  const std::string *v12; // rax
  const std::string *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  int v16; // r12d
  LifeEffectCombineReturnMaterial *v17; // rdx
  const unsigned int *v18; // rcx
  LifeEffectCombineReturnMaterial *v19; // r8
  unsigned __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rax
  char v23; // r12
  char v24; // r13
  char v25; // r14
  char v26; // r15
  const std::string *v27; // rax
  const std::string *v28; // rax
  const std::string *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  int v32; // r12d
  LifeEffectCombineMultiplyOutput *v33; // rdx
  const unsigned int *v34; // rcx
  LifeEffectCombineMultiplyOutput *v35; // r8
  unsigned __int64 v36; // rax
  char v37; // r12
  char v38; // r13
  char v39; // r14
  char v40; // r15
  const std::string *v41; // rax
  const std::string *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  int v45; // r12d
  float v46; // xmm0_4
  LifeEffectCombineAddExtraProb *v47; // rdx
  const unsigned int *v48; // rcx
  LifeEffectCombineAddExtraProb *v49; // r8
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  int v52; // r12d
  LifeEffectCombineReturnSpecialMaterial *v53; // rdx
  const unsigned int *v54; // rcx
  LifeEffectCombineReturnSpecialMaterial *v55; // r8
  unsigned __int64 v56; // rax
  char v57; // r13
  char v58; // r14
  char v59; // r15
  const std::string *v60; // rax
  const std::string *v61; // rax
  const std::string *v62; // rax
  const std::string *v63; // rax
  char v64; // r12
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  int v67; // r12d
  LifeEffectCookExtraProficiency *v68; // rdx
  const unsigned int *v69; // rcx
  LifeEffectCookExtraProficiency *v70; // r8
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  char v73; // r13
  char v74; // r14
  char v75; // r15
  const std::string *v76; // rax
  const std::string *v77; // rax
  const std::string *v78; // rax
  const std::string *v79; // rax
  char v80; // r12
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rdx
  int v83; // r12d
  LifeEffectCookWidenJudgeArea *v84; // rdx
  const unsigned int *v85; // rcx
  LifeEffectCookWidenJudgeArea *v86; // r8
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  char v89; // r13
  char v90; // r14
  char v91; // r15
  const std::string *v92; // rax
  const std::string *v93; // rax
  const std::string *v94; // rax
  const std::string *v95; // rax
  char v96; // r12
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rdx
  int v99; // r12d
  LifeEffectCookAddBonusProb *v100; // rdx
  const unsigned int *v101; // rcx
  LifeEffectCookAddBonusProb *v102; // r8
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rax
  char v105; // r12
  char v106; // r13
  char v107; // r14
  char v108; // r15
  const std::string *v109; // rax
  const std::string *v110; // rax
  const std::string *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rdx
  int v114; // r12d
  float v115; // xmm0_4
  LifeEffectCookPerfectMultiOutput *v116; // rdx
  const unsigned int *v117; // rcx
  LifeEffectCookPerfectMultiOutput *v118; // r8
  unsigned __int64 v119; // rax
  unsigned __int64 v120; // rax
  char v121; // r13
  char v122; // r14
  char v123; // r15
  const std::string *v124; // rax
  const std::string *v125; // rax
  const std::string *v126; // rax
  const std::string *v127; // rax
  const std::string *v128; // rax
  char v129; // r12
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rdx
  int v132; // r12d
  float v133; // xmm0_4
  LifeEffectCookProbMultiOutput *v134; // rdx
  const unsigned int *v135; // rcx
  LifeEffectCookProbMultiOutput *v136; // r8
  unsigned __int64 v137; // rax
  unsigned __int64 v138; // rax
  LifeEffectCookCanNotCook *v139; // rdx
  const unsigned int *v140; // rcx
  LifeEffectCookCanNotCook *v141; // r8
  unsigned __int64 v142; // rax
  unsigned __int64 v143; // rax
  unsigned __int64 v144; // rax
  char v145; // r12
  char v146; // r13
  char v147; // r14
  char v148; // r15
  const std::string *v149; // rax
  const std::string *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rdx
  int v153; // r12d
  unsigned int *v154; // r12
  std::vector<unsigned int>::iterator v155; // rax
  LifeEffectForgeReduceTime *v156; // rdx
  const unsigned int *v157; // rcx
  LifeEffectForgeReduceTime *v158; // r8
  unsigned __int64 v159; // rax
  unsigned __int64 v160; // rax
  unsigned __int64 v161; // rax
  char v162; // r12
  char v163; // r13
  char v164; // r14
  char v165; // r15
  const std::string *v166; // rax
  const std::string *v167; // rax
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rdx
  int v170; // r12d
  unsigned __int64 v171; // rax
  unsigned int *v172; // r12
  unsigned int *v173; // rsi
  float v174; // xmm0_4
  LifeEffectForgeAddExtraProb *v175; // rdx
  const unsigned int *v176; // rcx
  LifeEffectForgeAddExtraProb *v177; // r8
  unsigned __int64 v178; // rax
  unsigned __int64 v179; // rax
  _DWORD *v180; // rax
  unsigned __int64 v181; // rax
  char v182; // r12
  char v183; // r13
  char v184; // r14
  char v185; // r15
  const std::string *v186; // rax
  const std::string *v187; // rax
  const std::string *v188; // rax
  common::milog::MiLogStream *v189; // rax
  common::milog::MiLogStream *v190; // rdx
  int v191; // r12d
  float v192; // xmm0_4
  unsigned int *M_current; // r12
  std::vector<unsigned int>::iterator v194; // rax
  LifeEffectForgeReturnMaterial *v195; // rdx
  const unsigned int *v196; // rcx
  LifeEffectForgeReturnMaterial *v197; // r8
  _DWORD *v198; // rax
  unsigned __int64 v199; // rax
  const std::string *v200; // rax
  const std::string *v201; // rax
  common::milog::MiLogStream *v203; // rax
  common::milog::MiLogStream *v204; // rdx
  int v205; // edx
  LifeEffectExpeditionShortenTime *v206; // rdx
  const unsigned int *v207; // rcx
  LifeEffectExpeditionShortenTime *v208; // r8
  __int64 v209; // rsi
  char *v210; // rsi
  const std::string *v211; // rax
  const std::string *v212; // rax
  const std::string *v213; // rax
  const std::string *v214; // rax
  char v215; // al
  common::milog::MiLogStream *v216; // rax
  common::milog::MiLogStream *v217; // rdx
  int v218; // edx
  float v219; // xmm0_4
  LifeEffectExpeditionExtraOutput *v220; // rdx
  const unsigned int *v221; // rcx
  LifeEffectExpeditionExtraOutput *v222; // r8
  _DWORD *v223; // rax
  __int64 v224; // rsi
  unsigned int v225; // ecx
  char v226; // al
  char v227; // r12
  char v228; // r13
  char v229; // r14
  char v230; // r15
  const std::string *v231; // rax
  const std::string *v232; // rax
  const std::string *v233; // rax
  common::milog::MiLogStream *v234; // rax
  common::milog::MiLogStream *v235; // rdx
  int v236; // r12d
  float v237; // xmm0_4
  LifeEffectFurnitureMakeReturnMaterial *Return; // rdx
  const unsigned int *v239; // rcx
  LifeEffectFurnitureMakeReturnMaterial *v240; // r8
  _DWORD *v241; // rax
  unsigned __int64 v242; // rax
  char v243; // r12
  char v244; // r13
  char v245; // r14
  char v246; // r15
  const std::string *v247; // rax
  const std::string *v248; // rax
  common::milog::MiLogStream *v249; // rax
  common::milog::MiLogStream *v250; // rdx
  int v251; // r12d
  LifeEffectWeaponPromoteReduceScoin *v252; // rdx
  const unsigned int *v253; // rcx
  LifeEffectWeaponPromoteReduceScoin *v254; // r8
  unsigned __int64 v255; // rax
  unsigned __int64 v256; // rax
  char v257; // r12
  char v258; // r13
  char v259; // r14
  char v260; // r15
  const std::string *v261; // rax
  const std::string *v262; // rax
  const std::string *v263; // rax
  common::milog::MiLogStream *v264; // rax
  common::milog::MiLogStream *v265; // rdx
  int v266; // r12d
  float v267; // xmm0_4
  LifeEffectFishingExtraOutput *v268; // rdx
  const unsigned int *v269; // rcx
  LifeEffectFishingExtraOutput *v270; // r8
  unsigned __int64 v271; // rax
  char *v272; // rsi
  const std::string *v273; // rax
  const std::string *v274; // rax
  common::milog::MiLogStream *v276; // rax
  common::milog::MiLogStream *v277; // rdx
  int v278; // edx
  float v279; // xmm0_4
  LifeEffectHitTreeExtraOutput *v280; // rdx
  const unsigned int *v281; // rcx
  LifeEffectHitTreeExtraOutput *v282; // r8
  common::milog::MiLogStream *v283; // rax
  common::milog::MiLogStream *v284; // rax
  common::milog::MiLogStream *v285; // rax
  common::milog::MiLogStream *v286; // rdx
  _QWORD *v288; // [rsp+8h] [rbp-1438h]
  char v289; // [rsp+1Bh] [rbp-1425h]
  char v290; // [rsp+1Bh] [rbp-1425h]
  char v291; // [rsp+1Bh] [rbp-1425h]
  char v292; // [rsp+1Bh] [rbp-1425h]
  char v293; // [rsp+1Ch] [rbp-1424h]
  char v294; // [rsp+1Ch] [rbp-1424h]
  char v295; // [rsp+1Ch] [rbp-1424h]
  char v296; // [rsp+1Ch] [rbp-1424h]
  char v297; // [rsp+1Dh] [rbp-1423h]
  char v298; // [rsp+1Dh] [rbp-1423h]
  char v299; // [rsp+1Dh] [rbp-1423h]
  char v300; // [rsp+1Dh] [rbp-1423h]
  char v301; // [rsp+1Eh] [rbp-1422h]
  char v302; // [rsp+1Eh] [rbp-1422h]
  char v303; // [rsp+1Eh] [rbp-1422h]
  char v304; // [rsp+1Eh] [rbp-1422h]
  char v305; // [rsp+1Fh] [rbp-1421h]
  char v306; // [rsp+1Fh] [rbp-1421h]
  char v307; // [rsp+1Fh] [rbp-1421h]
  char v308; // [rsp+1Fh] [rbp-1421h]
  char v309; // [rsp+1Fh] [rbp-1421h]
  char v310; // [rsp+1Fh] [rbp-1421h]
  char v311; // [rsp+1Fh] [rbp-1421h]
  char v312; // [rsp+1Fh] [rbp-1421h]
  char v313; // [rsp+1Fh] [rbp-1421h]
  char v314; // [rsp+1Fh] [rbp-1421h]
  char v315; // [rsp+1Fh] [rbp-1421h]
  char v316; // [rsp+1Fh] [rbp-1421h]
  char v317; // [rsp+1Fh] [rbp-1421h]
  char v318; // [rsp+1Fh] [rbp-1421h]
  unsigned __int64 v319; // [rsp+20h] [rbp-1420h]
  int32_t v320; // [rsp+28h] [rbp-1418h]
  data::ProudSkillExcelConfigMap *__for_range; // [rsp+48h] [rbp-13F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::reference v322; // [rsp+50h] [rbp-13F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *proud_skill_id; // [rsp+58h] [rbp-13E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *proud_skill_config; // [rsp+60h] [rbp-13E0h]
  const std::vector<std::string> *param_vec; // [rsp+68h] [rbp-13D8h]
  char v326[5072]; // [rsp+70h] [rbp-13D0h] BYREF

  v319 = (unsigned __int64)v326;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_7(5024LL);
    if ( v2 )
      v319 = v2;
  }
  *(_QWORD *)v319 = 1102416563LL;
  *(_QWORD *)(v319 + 8) = "88 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1"
                          " 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <"
                          "unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unkn"
                          "own> 304 1 9 <unknown> 320 1 9 <unknown> 336 4 15 probability:462 352 4 15 probability:545 368"
                          " 4 15 probability:565 384 4 15 probability:612 400 4 15 probability:633 416 4 15 probability:6"
                          "70 432 4 15 probability:692 448 4 15 probability:727 464 4 15 probability:747 480 8 15 __for_b"
                          "egin:417 512 8 13 __for_end:417 544 8 10 config:654 576 8 10 config:746 608 16 10 config:669 6"
                          "40 24 18 forge_type_vec:595 704 24 18 forge_type_vec:611 768 24 18 forge_type_vec:634 832 32 9"
                          " <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 10 config:461 115"
                          "2 32 9 <unknown> 1216 32 9 <unknown> 1280 32 10 config:480 1344 32 9 <unknown> 1408 32 9 <unkn"
                          "own> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9"
                          " <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 204"
                          "8 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknow"
                          "n> 2368 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <"
                          "unknown> 2688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 "
                          "32 9 <unknown> 3008 32 9 <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unknown>"
                          " 3264 32 9 <unknown> 3328 40 10 config:429 3408 40 10 config:445 3488 56 10 config:594 3584 56"
                          " 10 config:620 3680 56 10 config:711 3776 56 10 config:726 3872 64 10 config:632 3968 64 10 co"
                          "nfig:690 4064 104 10 config:586 4208 112 10 config:493 4352 112 10 config:510 4496 112 10 conf"
                          "ig:527 4640 112 10 config:544 4784 168 10 config:564";
  *(_QWORD *)(v319 + 16) = AvatarTalentExcelConfigMgr::rewriteLifeEffectConfig;
  v3 = (_DWORD *)(v319 >> 3);
  v288 = v3;
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234753535;
  v3[536862724] = -234753535;
  v3[536862725] = -234753535;
  v3[536862726] = -234753535;
  v3[536862727] = -234753535;
  v3[536862728] = -234753535;
  v3[536862729] = -234753535;
  v3[536862730] = -234556927;
  v3[536862731] = -234556924;
  v3[536862732] = -234556924;
  v3[536862733] = -234556924;
  v3[536862734] = -234556924;
  v3[536862735] = -218959360;
  v3[536862736] = -218959360;
  v3[536862737] = -218959360;
  v3[536862738] = -218959360;
  v3[536862739] = -219021312;
  v3[536862740] = -234881024;
  v3[536862741] = -218959118;
  v3[536862742] = -234881024;
  v3[536862743] = -218959118;
  v3[536862744] = -234881024;
  v3[536862745] = -218959118;
  v3[536862747] = -218959118;
  v3[536862749] = -218959118;
  v3[536862751] = -218959118;
  v3[536862753] = -218959118;
  v3[536862755] = -218959118;
  v3[536862757] = -218959118;
  v3[536862759] = -218959118;
  v3[536862761] = -218959118;
  v3[536862763] = -218959118;
  v3[536862765] = -218959118;
  v3[536862767] = -218959118;
  v3[536862769] = -218959118;
  v3[536862771] = -218959118;
  v3[536862773] = -218959118;
  v3[536862775] = -218959118;
  v3[536862777] = -218959118;
  v3[536862779] = -218959118;
  v3[536862781] = -218959118;
  v3[536862783] = -218959118;
  v3[536862785] = -218959118;
  v3[536862787] = -218959118;
  v3[536862789] = -218959118;
  v3[536862791] = -218959118;
  v3[536862793] = -218959118;
  v3[536862795] = -218959118;
  v3[536862797] = -218959118;
  v3[536862799] = -218959118;
  v3[536862801] = -218959118;
  v3[536862803] = -218959118;
  v3[536862805] = -218959118;
  v3[536862807] = -218959118;
  v3[536862809] = -218959118;
  v3[536862811] = -218959118;
  v3[536862813] = -218959118;
  v3[536862815] = -218959118;
  v3[536862817] = -218959118;
  v3[536862819] = -218959118;
  v3[536862821] = -218959118;
  v3[536862823] = -218959118;
  v3[536862825] = -218959360;
  v3[536862826] = 62194;
  v3[536862827] = -234881024;
  v3[536862828] = -218959118;
  v3[536862830] = -234881024;
  v3[536862831] = -218959118;
  v3[536862833] = -234881024;
  v3[536862834] = -218959118;
  v3[536862836] = -234881024;
  v3[536862837] = -218959118;
  v3[536862839] = -234881024;
  v3[536862840] = -218959118;
  v3[536862843] = -218959118;
  v3[536862846] = -218959118;
  v3[536862850] = -218959360;
  v3[536862851] = 62194;
  v3[536862855] = -218959118;
  v3[536862859] = -219021312;
  v3[536862860] = 62194;
  v3[536862864] = -218959118;
  v3[536862868] = -219021312;
  v3[536862869] = 62194;
  v3[536862874] = -218103808;
  v3[536862875] = -202116109;
  v3[536862876] = -202116109;
  __for_range = &this->proud_skill_excel_config_map;
  if ( *(_BYTE *)(((v319 + 480) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v319 + 480, v3);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::iterator *)(v319 + 480) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v319 + 512) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v319 + 512, v3);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::iterator *)(v319 + 512) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v319 + 480),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v319 + 512)) )
    {
      v21 = 1;
      goto LABEL_487;
    }
    v322 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false> *const)(v319 + 480));
    proud_skill_id = std::get<0ul,unsigned int const,data::ProudSkillExcelConfig>(v322);
    proud_skill_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ProudSkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ProudSkillExcelConfig>(v322);
    param_vec = &proud_skill_config->life_effect_params;
    v4 = (char *)((((_BYTE)proud_skill_config - 92) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config->life_effect_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)proud_skill_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config->life_effect_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&proud_skill_config->life_effect_type);
    }
    life_effect_type = proud_skill_config->life_effect_type;
    if ( life_effect_type != 701 )
      break;
    *(_BYTE *)(((v319 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v319 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 576) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v319 + 576, v4);
    *(_DWORD *)(v319 + 576) = 0;
    v272 = (char *)((((_BYTE)v319 + 68) & 7u) + 3);
    if ( *(_BYTE *)(((v319 + 580) >> 3) + 0x7FFF8000) != 0
      && (char)(((v319 + 68) & 7) + 3) >= *(_BYTE *)(((v319 + 580) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v319 + 580, v272);
    }
    *(_DWORD *)(v319 + 580) = 0;
    *(_BYTE *)(((v319 + 464) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v319 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 464) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v319 + 464, v272);
    *(_DWORD *)(v319 + 464) = 0;
    if ( std::vector<std::string>::size(param_vec) <= 1
      || (v273 = std::vector<std::string>::operator[](param_vec, 0LL),
          v272 = (char *)(v319 + 464),
          common::tools::StringUtils::strToNum<unsigned int>(v273, (unsigned int *)(v319 + 464), 1))
      || (v274 = std::vector<std::string>::operator[](param_vec, 1uLL),
          v272 = (char *)(v319 + 580),
          common::tools::StringUtils::strToNum<unsigned int>(v274, (unsigned int *)(v319 + 580), 1)) )
    {
      *(_DWORD *)(((v319 + 3200) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v319 + 3200) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v319 + 3231) >> 3) + 0x7FFF8000) != 0
        && (char)((v319 - 97) & 7) >= *(_BYTE *)(((v319 + 3231) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v319 + 3200, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v319 + 3200),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteLifeEffectConfig",
        752);
      v276 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v319 + 3200),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v277 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v276, (const char (*)[40])byte_1AABF880);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v277, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 3200));
      *(_DWORD *)(((v319 + 3200) >> 3) + 0x7FFF8000) = -117901064;
      v320 = -1;
      v278 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((v319 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v319 + 464);
      v279 = (float)*(int *)(v319 + 464) / 10000.0;
      if ( *(_BYTE *)(((v319 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v319 + 576, v272);
      *(float *)(v319 + 576) = v279;
      v280 = std::move<LifeEffectHitTreeExtraOutput &>((LifeEffectHitTreeExtraOutput *)(v319 + 576));
      std::unordered_map<unsigned int,LifeEffectHitTreeExtraOutput>::emplace<unsigned int const&,LifeEffectHitTreeExtraOutput>(
        &this->proud_hit_tree_extra_output_config_map,
        proud_skill_id,
        v280,
        v281,
        v282);
      v278 = 1;
    }
    *(_BYTE *)(((v319 + 576) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v319 + 464) >> 3) + 0x7FFF8000) = -8;
    if ( !v278 )
    {
      v21 = 0;
      goto LABEL_487;
    }
LABEL_485:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false> *const)(v319 + 480));
  }
  if ( life_effect_type > 701 )
    goto LABEL_482;
  if ( life_effect_type == 601 )
  {
    v256 = ((v319 + 3776) >> 3) + 2147450880;
    *(_DWORD *)v256 = 0;
    *(_WORD *)(v256 + 4) = 0;
    *(_BYTE *)(v256 + 6) = 0;
    LifeEffectFishingExtraOutput::LifeEffectFishingExtraOutput((LifeEffectFishingExtraOutput *const)(v319 + 3776));
    *(_BYTE *)(((v319 + 448) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v319 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 448) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v319 + 448, v4);
    *(_DWORD *)(v319 + 448) = 0;
    v257 = 0;
    v258 = 0;
    v259 = 0;
    v260 = 0;
    if ( std::vector<std::string>::size(param_vec) <= 2 )
      goto LABEL_439;
    *(_DWORD *)(((v319 + 3072) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v319 + 320) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v319 + 320);
    v257 = 1;
    v258 = 1;
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v319 + 3072),
      ",",
      (const std::allocator<char> *)(v319 + 320));
    v259 = 1;
    v260 = 1;
    v261 = std::vector<std::string>::operator[](param_vec, 0LL);
    v4 = (char *)(v319 + 3072);
    if ( common::tools::StringUtils::splitToSet<std::set<unsigned int>>(
           v261,
           (const std::string *)(v319 + 3072),
           (std::set<unsigned int> *)(v319 + 3776),
           0)
      || (v262 = std::vector<std::string>::operator[](param_vec, 1uLL),
          v4 = (char *)(v319 + 448),
          common::tools::StringUtils::strToNum<unsigned int>(v262, (unsigned int *)(v319 + 448), 1))
      || (v263 = std::vector<std::string>::operator[](param_vec, 2uLL),
          v4 = (char *)(v319 + 3828),
          common::tools::StringUtils::strToNum<unsigned int>(v263, (unsigned int *)(v319 + 3828), 1)) )
    {
LABEL_439:
      v318 = 1;
    }
    else
    {
      v318 = 0;
    }
    if ( v260 )
      std::string::~string((void *)(v319 + 3072));
    if ( v259 )
      *(_DWORD *)(((v319 + 3072) >> 3) + 0x7FFF8000) = -117901064;
    if ( v258 )
      std::allocator<char>::~allocator(v319 + 320);
    if ( v257 )
      *(_BYTE *)(((v319 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v318 )
    {
      *(_DWORD *)(((v319 + 3136) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v319 + 3136) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v319 + 3167) >> 3) + 0x7FFF8000) != 0
        && (char)((v319 + 95) & 7) >= *(_BYTE *)(((v319 + 3167) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v319 + 3136, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v319 + 3136),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteLifeEffectConfig",
        733);
      v264 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v319 + 3136),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v265 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v264, (const char (*)[40])byte_1AABF880);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v265, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 3136));
      *(_DWORD *)(((v319 + 3136) >> 3) + 0x7FFF8000) = -117901064;
      v320 = -1;
      v266 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((v319 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v319 + 448);
      v267 = (float)*(int *)(v319 + 448) / 10000.0;
      if ( *(_BYTE *)(((v319 + 3824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 3824) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v319 + 3824, v4);
      *(float *)(v319 + 3824) = v267;
      v268 = std::move<LifeEffectFishingExtraOutput &>((LifeEffectFishingExtraOutput *)(v319 + 3776));
      std::unordered_map<unsigned int,LifeEffectFishingExtraOutput>::emplace<unsigned int const&,LifeEffectFishingExtraOutput>(
        &this->proud_fishing_extra_output_config_map,
        proud_skill_id,
        v268,
        v269,
        v270);
      v266 = 1;
    }
    LifeEffectFishingExtraOutput::~LifeEffectFishingExtraOutput((LifeEffectFishingExtraOutput *const)(v319 + 3776));
    v271 = ((v319 + 3776) >> 3) + 2147450880;
    *(_DWORD *)v271 = -117901064;
    *(_WORD *)(v271 + 4) = -1800;
    *(_BYTE *)(v271 + 6) = -8;
    *(_BYTE *)(((v319 + 448) >> 3) + 0x7FFF8000) = -8;
    if ( !v266 )
    {
      v21 = 0;
      goto LABEL_487;
    }
    goto LABEL_485;
  }
  if ( life_effect_type > 601 )
    goto LABEL_482;
  if ( life_effect_type == 501 )
  {
    v242 = ((v319 + 3680) >> 3) + 2147450880;
    *(_DWORD *)v242 = 0;
    *(_WORD *)(v242 + 4) = 0;
    *(_BYTE *)(v242 + 6) = 0;
    LifeEffectWeaponPromoteReduceScoin::LifeEffectWeaponPromoteReduceScoin((LifeEffectWeaponPromoteReduceScoin *const)(v319 + 3680));
    v243 = 0;
    v244 = 0;
    v245 = 0;
    v246 = 0;
    if ( std::vector<std::string>::size(param_vec) <= 1 )
      goto LABEL_416;
    *(_DWORD *)(((v319 + 2944) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v319 + 304) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v319 + 304);
    v243 = 1;
    v244 = 1;
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v319 + 2944),
      ",",
      (const std::allocator<char> *)(v319 + 304));
    v245 = 1;
    v246 = 1;
    v247 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( common::tools::StringUtils::splitToEnumSet<data::WeaponType>(
           v247,
           (const std::string *)(v319 + 2944),
           (std::set<data::WeaponType> *)(v319 + 3680),
           0)
      || (v248 = std::vector<std::string>::operator[](param_vec, 1uLL),
          common::tools::StringUtils::strToNum<float>(v248, (float *)(v319 + 3728), 1)) )
    {
LABEL_416:
      v317 = 1;
    }
    else
    {
      v317 = 0;
    }
    if ( v246 )
      std::string::~string((void *)(v319 + 2944));
    if ( v245 )
      *(_DWORD *)(((v319 + 2944) >> 3) + 0x7FFF8000) = -117901064;
    if ( v244 )
      std::allocator<char>::~allocator(v319 + 304);
    if ( v243 )
      *(_BYTE *)(((v319 + 304) >> 3) + 0x7FFF8000) = -8;
    if ( v317 )
    {
      *(_DWORD *)(((v319 + 3008) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v319 + 3008) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v319 + 3039) >> 3) + 0x7FFF8000) != 0
        && (char)((v319 - 96 + 63) & 7) >= *(_BYTE *)(((v319 + 3039) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v319 + 3008, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v319 + 3008),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteLifeEffectConfig",
        716);
      v249 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v319 + 3008),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v250 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v249, (const char (*)[40])byte_1AABF880);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v250, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 3008));
      *(_DWORD *)(((v319 + 3008) >> 3) + 0x7FFF8000) = -117901064;
      v320 = -1;
      v251 = 0;
    }
    else
    {
      v252 = std::move<LifeEffectWeaponPromoteReduceScoin &>((LifeEffectWeaponPromoteReduceScoin *)(v319 + 3680));
      std::unordered_map<unsigned int,LifeEffectWeaponPromoteReduceScoin>::emplace<unsigned int const&,LifeEffectWeaponPromoteReduceScoin>(
        &this->proud_weapon_promote_reduce_scoin_config_map,
        proud_skill_id,
        v252,
        v253,
        v254);
      v251 = 1;
    }
    LifeEffectWeaponPromoteReduceScoin::~LifeEffectWeaponPromoteReduceScoin((LifeEffectWeaponPromoteReduceScoin *const)(v319 + 3680));
    v255 = ((v319 + 3680) >> 3) + 2147450880;
    *(_DWORD *)v255 = -117901064;
    *(_WORD *)(v255 + 4) = -1800;
    *(_BYTE *)(v255 + 6) = -8;
    if ( !v251 )
    {
      v21 = 0;
      goto LABEL_487;
    }
    goto LABEL_485;
  }
  if ( life_effect_type > 501 )
    goto LABEL_482;
  if ( life_effect_type == 401 )
  {
    v223 = (_DWORD *)(((v319 + 3968) >> 3) + 2147450880);
    *v223 = 0;
    v223[1] = 0;
    LifeEffectFurnitureMakeReturnMaterial::LifeEffectFurnitureMakeReturnMaterial((LifeEffectFurnitureMakeReturnMaterial *const)(v319 + 3968));
    v224 = ((unsigned __int8)proud_skill_id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)proud_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)proud_skill_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(proud_skill_id);
    }
    v225 = *proud_skill_id;
    v226 = *(_BYTE *)(((v319 + 3968) >> 3) + 0x7FFF8000);
    LOBYTE(v224) = v226 != 0;
    if ( v226 != 0 && v226 <= 3 )
      __asan_report_store4(v319 + 3968, v224);
    *(_DWORD *)(v319 + 3968) = v225;
    *(_BYTE *)(((v319 + 432) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v319 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 432) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v319 + 432, v224);
    *(_DWORD *)(v319 + 432) = 0;
    v227 = 0;
    v228 = 0;
    v229 = 0;
    v230 = 0;
    if ( std::vector<std::string>::size(param_vec) <= 2 )
      goto LABEL_392;
    v231 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v231, (unsigned int *)(v319 + 432), 1) )
      goto LABEL_392;
    *(_DWORD *)(((v319 + 2816) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v319 + 288) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v319 + 288);
    v227 = 1;
    v228 = 1;
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v319 + 2816),
      ",",
      (const std::allocator<char> *)(v319 + 288));
    v229 = 1;
    v230 = 1;
    v232 = std::vector<std::string>::operator[](param_vec, 1uLL);
    if ( common::tools::StringUtils::splitToSet<std::set<unsigned int>>(
           v232,
           (const std::string *)(v319 + 2816),
           (std::set<unsigned int> *)(v319 + 3976),
           0)
      || (v233 = std::vector<std::string>::operator[](param_vec, 2uLL),
          common::tools::StringUtils::strToNum<float>(v233, (float *)(v319 + 4024), 1)) )
    {
LABEL_392:
      v316 = 1;
    }
    else
    {
      v316 = 0;
    }
    if ( v230 )
      std::string::~string((void *)(v319 + 2816));
    if ( v229 )
      *(_DWORD *)(((v319 + 2816) >> 3) + 0x7FFF8000) = -117901064;
    if ( v228 )
      std::allocator<char>::~allocator(v319 + 288);
    if ( v227 )
      *(_BYTE *)(((v319 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v316 )
    {
      *(_DWORD *)(((v319 + 2880) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v319 + 2880) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v319 + 2911) >> 3) + 0x7FFF8000) != 0
        && (char)((v319 + 95) & 7) >= *(_BYTE *)(((v319 + 2911) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v319 + 2880, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v319 + 2880),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteLifeEffectConfig",
        698);
      v234 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v319 + 2880),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v235 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v234, (const char (*)[40])byte_1AABF880);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v235, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 2880));
      *(_DWORD *)(((v319 + 2880) >> 3) + 0x7FFF8000) = -117901064;
      v320 = -1;
      v236 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((v319 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v319 + 432);
      v237 = (float)*(int *)(v319 + 432) / 10000.0;
      if ( *(_BYTE *)(((v319 + 3972) >> 3) + 0x7FFF8000) != 0
        && (char)(((v319 - 124) & 7) + 3) >= *(_BYTE *)(((v319 + 3972) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v319 + 3972, (((_BYTE)v319 - 124) & 7u) + 3);
      }
      *(float *)(v319 + 3972) = v237;
      Return = std::move<LifeEffectFurnitureMakeReturnMaterial &>((LifeEffectFurnitureMakeReturnMaterial *)(v319 + 3968));
      std::unordered_map<unsigned int,std::variant<LifeEffectFurnitureMakeReturnMaterial>>::emplace<unsigned int const&,LifeEffectFurnitureMakeReturnMaterial>(
        &this->proud_furniture_make_config_map,
        proud_skill_id,
        Return,
        v239,
        v240);
      v236 = 1;
    }
    LifeEffectFurnitureMakeReturnMaterial::~LifeEffectFurnitureMakeReturnMaterial((LifeEffectFurnitureMakeReturnMaterial *const)(v319 + 3968));
    v241 = (_DWORD *)(((v319 + 3968) >> 3) + 2147450880);
    *v241 = -117901064;
    v241[1] = -117901064;
    *(_BYTE *)(((v319 + 432) >> 3) + 0x7FFF8000) = -8;
    if ( !v236 )
    {
      v21 = 0;
      goto LABEL_487;
    }
    goto LABEL_485;
  }
  if ( life_effect_type > 401 )
    goto LABEL_482;
  if ( life_effect_type == 302 )
  {
    *(_WORD *)(((v319 + 608) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v319 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 608) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v319 + 608, v4);
    *(_DWORD *)(v319 + 608) = 0;
    v209 = (((_BYTE)v319 + 100) & 7u) + 3;
    if ( *(_BYTE *)(((v319 + 612) >> 3) + 0x7FFF8000) != 0
      && (char)(((v319 + 100) & 7) + 3) >= *(_BYTE *)(((v319 + 612) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v319 + 612, v209);
    }
    *(_DWORD *)(v319 + 612) = 0;
    if ( *(_BYTE *)(((v319 + 616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 616) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v319 + 616, v209);
    *(_DWORD *)(v319 + 616) = 0;
    v210 = (char *)((((_BYTE)v319 + 108) & 7u) + 3);
    if ( *(_BYTE *)(((v319 + 620) >> 3) + 0x7FFF8000) != 0
      && (char)(((v319 + 108) & 7) + 3) >= *(_BYTE *)(((v319 + 620) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v319 + 620, v210);
    }
    *(_DWORD *)(v319 + 620) = 0;
    *(_BYTE *)(((v319 + 416) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v319 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v319 + 416, v210);
    *(_DWORD *)(v319 + 416) = 0;
    if ( std::vector<std::string>::size(param_vec) <= 3 )
      goto LABEL_369;
    v211 = std::vector<std::string>::operator[](param_vec, 0LL);
    v210 = (char *)(v319 + 608);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v211, (unsigned int *)(v319 + 608), 1)
      || (v212 = std::vector<std::string>::operator[](param_vec, 1uLL),
          v210 = (char *)(v319 + 612),
          common::tools::StringUtils::strToNum<unsigned int>(v212, (unsigned int *)(v319 + 612), 1))
      || (v213 = std::vector<std::string>::operator[](param_vec, 2uLL),
          v210 = (char *)(v319 + 416),
          common::tools::StringUtils::strToNum<unsigned int>(v213, (unsigned int *)(v319 + 416), 1))
      || (v214 = std::vector<std::string>::operator[](param_vec, 3uLL),
          v210 = (char *)(v319 + 620),
          common::tools::StringUtils::strToNum<float>(v214, (float *)(v319 + 620), 1)) )
    {
LABEL_369:
      v215 = 1;
    }
    else
    {
      v215 = 0;
    }
    if ( v215 )
    {
      *(_DWORD *)(((v319 + 2752) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v319 + 2752) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v319 + 2783) >> 3) + 0x7FFF8000) != 0
        && (char)((v319 - 96 + 63) & 7) >= *(_BYTE *)(((v319 + 2783) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v319 + 2752, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v319 + 2752),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteLifeEffectConfig",
        677);
      v216 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v319 + 2752),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v217 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v216, (const char (*)[40])byte_1AABF880);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v217, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 2752));
      *(_DWORD *)(((v319 + 2752) >> 3) + 0x7FFF8000) = -117901064;
      v320 = -1;
      v218 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((v319 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v319 + 416);
      v219 = (float)*(int *)(v319 + 416) / 10000.0;
      if ( *(_BYTE *)(((v319 + 616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 616) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v319 + 616, v210);
      *(float *)(v319 + 616) = v219;
      v220 = std::move<LifeEffectExpeditionExtraOutput &>((LifeEffectExpeditionExtraOutput *)(v319 + 608));
      std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::emplace<unsigned int const&,LifeEffectExpeditionExtraOutput>(
        &this->proud_expedition_config_map,
        proud_skill_id,
        v220,
        v221,
        v222);
      v218 = 1;
    }
    *(_WORD *)(((v319 + 608) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v319 + 416) >> 3) + 0x7FFF8000) = -8;
    if ( !v218 )
    {
      v21 = 0;
      goto LABEL_487;
    }
    goto LABEL_485;
  }
  if ( life_effect_type > 302 )
    goto LABEL_482;
  if ( life_effect_type == 301 )
  {
    *(_BYTE *)(((v319 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v319 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 544) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v319 + 544, v4);
    *(_DWORD *)(v319 + 544) = 0;
    if ( *(_BYTE *)(((v319 + 548) >> 3) + 0x7FFF8000) != 0
      && (char)(((v319 + 36) & 7) + 3) >= *(_BYTE *)(((v319 + 548) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v319 + 548, (((_BYTE)v319 + 36) & 7u) + 3);
    }
    *(_DWORD *)(v319 + 548) = 0;
    if ( std::vector<std::string>::size(param_vec) <= 1
      || (v200 = std::vector<std::string>::operator[](param_vec, 0LL),
          common::tools::StringUtils::strToNum<unsigned int>(v200, (unsigned int *)(v319 + 544), 1))
      || (v201 = std::vector<std::string>::operator[](param_vec, 1uLL),
          common::tools::StringUtils::strToNum<float>(v201, (float *)(v319 + 548), 1)) )
    {
      *(_DWORD *)(((v319 + 2688) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v319 + 2688) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v319 + 2719) >> 3) + 0x7FFF8000) != 0
        && (char)((v319 - 97) & 7) >= *(_BYTE *)(((v319 + 2719) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v319 + 2688, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v319 + 2688),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteLifeEffectConfig",
        659);
      v203 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v319 + 2688),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v204 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v203, (const char (*)[40])byte_1AABF880);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v204, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 2688));
      *(_DWORD *)(((v319 + 2688) >> 3) + 0x7FFF8000) = -117901064;
      v320 = -1;
      v205 = 0;
    }
    else
    {
      v206 = std::move<LifeEffectExpeditionShortenTime &>((LifeEffectExpeditionShortenTime *)(v319 + 544));
      std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::emplace<unsigned int const&,LifeEffectExpeditionShortenTime>(
        &this->proud_expedition_config_map,
        proud_skill_id,
        v206,
        v207,
        v208);
      v205 = 1;
    }
    *(_BYTE *)(((v319 + 544) >> 3) + 0x7FFF8000) = -8;
    if ( !v205 )
    {
      v21 = 0;
      goto LABEL_487;
    }
    goto LABEL_485;
  }
  if ( life_effect_type == 205 )
  {
    v180 = (_DWORD *)(((v319 + 3872) >> 3) + 2147450880);
    *v180 = 0;
    v180[1] = 0;
    LifeEffectForgeReturnMaterial::LifeEffectForgeReturnMaterial((LifeEffectForgeReturnMaterial *const)(v319 + 3872));
    *(_BYTE *)(((v319 + 400) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v319 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v319 + 400, v4);
    *(_DWORD *)(v319 + 400) = 0;
    v181 = ((v319 + 768) >> 3) + 2147450880;
    *(_WORD *)v181 = 0;
    *(_BYTE *)(v181 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v319 + 768));
    v182 = 0;
    v183 = 0;
    v184 = 0;
    v185 = 0;
    if ( std::vector<std::string>::size(param_vec) <= 2 )
      goto LABEL_317;
    v186 = std::vector<std::string>::operator[](param_vec, 0LL);
    v4 = (char *)(v319 + 400);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v186, (unsigned int *)(v319 + 400), 1) )
      goto LABEL_317;
    *(_DWORD *)(((v319 + 2560) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v319 + 272) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v319 + 272);
    v182 = 1;
    v183 = 1;
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v319 + 2560),
      ",",
      (const std::allocator<char> *)(v319 + 272));
    v184 = 1;
    v185 = 1;
    v187 = std::vector<std::string>::operator[](param_vec, 1uLL);
    v4 = (char *)(v319 + 2560);
    if ( common::tools::StringUtils::splitToList<unsigned int>(
           v187,
           (const std::string *)(v319 + 2560),
           (std::vector<unsigned int> *)(v319 + 768),
           0)
      || (v188 = std::vector<std::string>::operator[](param_vec, 2uLL),
          v4 = (char *)(v319 + 3928),
          common::tools::StringUtils::strToNum<float>(v188, (float *)(v319 + 3928), 1)) )
    {
LABEL_317:
      v315 = 1;
    }
    else
    {
      v315 = 0;
    }
    if ( v185 )
      std::string::~string((void *)(v319 + 2560));
    if ( v184 )
      *(_DWORD *)(((v319 + 2560) >> 3) + 0x7FFF8000) = -117901064;
    if ( v183 )
      std::allocator<char>::~allocator(v319 + 272);
    if ( v182 )
      *(_BYTE *)(((v319 + 272) >> 3) + 0x7FFF8000) = -8;
    if ( v315 )
    {
      *(_DWORD *)(((v319 + 2624) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v319 + 2624) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v319 + 2655) >> 3) + 0x7FFF8000) != 0
        && (char)((v319 + 95) & 7) >= *(_BYTE *)(((v319 + 2655) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v319 + 2624, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v319 + 2624),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteLifeEffectConfig",
        640);
      v189 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v319 + 2624),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v190 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v189, (const char (*)[40])byte_1AABF880);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v190, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 2624));
      *(_DWORD *)(((v319 + 2624) >> 3) + 0x7FFF8000) = -117901064;
      v320 = -1;
      v191 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((v319 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v319 + 400);
      v192 = (float)*(int *)(v319 + 400) / 10000.0;
      if ( *(_BYTE *)(((v319 + 3872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 3872) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v319 + 3872, v4);
      *(float *)(v319 + 3872) = v192;
      M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v319 + 768))._M_current;
      v194._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v319 + 768))._M_current;
      std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
        (std::set<unsigned int> *const)(v319 + 3880),
        v194,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
      v195 = std::move<LifeEffectForgeReturnMaterial &>((LifeEffectForgeReturnMaterial *)(v319 + 3872));
      std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::emplace<unsigned int const&,LifeEffectForgeReturnMaterial>(
        &this->proud_forge_config_map,
        proud_skill_id,
        v195,
        v196,
        v197);
      v191 = 1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v319 + 768));
    LifeEffectForgeReturnMaterial::~LifeEffectForgeReturnMaterial((LifeEffectForgeReturnMaterial *const)(v319 + 3872));
    v198 = (_DWORD *)(((v319 + 3872) >> 3) + 2147450880);
    *v198 = -117901064;
    v198[1] = -117901064;
    *(_BYTE *)(((v319 + 400) >> 3) + 0x7FFF8000) = -8;
    v199 = ((v319 + 768) >> 3) + 2147450880;
    *(_WORD *)v199 = -1800;
    *(_BYTE *)(v199 + 2) = -8;
    if ( !v191 )
    {
      v21 = 0;
      goto LABEL_487;
    }
    goto LABEL_485;
  }
  if ( life_effect_type > 205 )
    goto LABEL_482;
  if ( life_effect_type == 204 )
  {
    v161 = ((v319 + 704) >> 3) + 2147450880;
    *(_WORD *)v161 = 0;
    *(_BYTE *)(v161 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v319 + 704));
    *(_BYTE *)(((v319 + 384) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v319 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v319 + 384, v4);
    *(_DWORD *)(v319 + 384) = 0;
    v162 = 0;
    v163 = 0;
    v164 = 0;
    v165 = 0;
    if ( std::vector<std::string>::size(param_vec) <= 1 )
      goto LABEL_290;
    *(_DWORD *)(((v319 + 2432) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v319 + 256) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v319 + 256);
    v162 = 1;
    v163 = 1;
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v319 + 2432),
      ",",
      (const std::allocator<char> *)(v319 + 256));
    v164 = 1;
    v165 = 1;
    v166 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( common::tools::StringUtils::splitToList<unsigned int>(
           v166,
           (const std::string *)(v319 + 2432),
           (std::vector<unsigned int> *)(v319 + 704),
           0)
      || (v167 = std::vector<std::string>::operator[](param_vec, 1uLL),
          common::tools::StringUtils::strToNum<unsigned int>(v167, (unsigned int *)(v319 + 384), 1)) )
    {
LABEL_290:
      v314 = 1;
    }
    else
    {
      v314 = 0;
    }
    if ( v165 )
      std::string::~string((void *)(v319 + 2432));
    if ( v164 )
      *(_DWORD *)(((v319 + 2432) >> 3) + 0x7FFF8000) = -117901064;
    if ( v163 )
      std::allocator<char>::~allocator(v319 + 256);
    if ( v162 )
      *(_BYTE *)(((v319 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v314 )
    {
      *(_DWORD *)(((v319 + 2496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v319 + 2496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v319 + 2527) >> 3) + 0x7FFF8000) != 0
        && (char)((v319 - 96 + 63) & 7) >= *(_BYTE *)(((v319 + 2527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v319 + 2496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v319 + 2496),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteLifeEffectConfig",
        617);
      v168 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v319 + 2496),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v169 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v168, (const char (*)[40])byte_1AABF880);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v169, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 2496));
      *(_DWORD *)(((v319 + 2496) >> 3) + 0x7FFF8000) = -117901064;
      v320 = -1;
      v170 = 0;
    }
    else
    {
      v171 = ((v319 + 3584) >> 3) + 2147450880;
      *(_DWORD *)v171 = 0;
      *(_WORD *)(v171 + 4) = 0;
      *(_BYTE *)(v171 + 6) = 0;
      LifeEffectForgeAddExtraProb::LifeEffectForgeAddExtraProb((LifeEffectForgeAddExtraProb *const)(v319 + 3584));
      v172 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v319 + 704))._M_current;
      v173 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v319 + 704))._M_current;
      std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
        (std::set<unsigned int> *const)(v319 + 3584),
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v173,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v172);
      if ( *(_BYTE *)(((v319 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v319 + 384);
      v174 = (float)*(int *)(v319 + 384) / 10000.0;
      if ( *(_BYTE *)(((v319 + 3632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 3632) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v319 + 3632, v173);
      *(float *)(v319 + 3632) = v174;
      v175 = std::move<LifeEffectForgeAddExtraProb &>((LifeEffectForgeAddExtraProb *)(v319 + 3584));
      std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::emplace<unsigned int const&,LifeEffectForgeAddExtraProb>(
        &this->proud_forge_config_map,
        proud_skill_id,
        v175,
        v176,
        v177);
      LifeEffectForgeAddExtraProb::~LifeEffectForgeAddExtraProb((LifeEffectForgeAddExtraProb *const)(v319 + 3584));
      v170 = 1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v319 + 704));
    v178 = ((v319 + 704) >> 3) + 2147450880;
    *(_WORD *)v178 = -1800;
    *(_BYTE *)(v178 + 2) = -8;
    *(_BYTE *)(((v319 + 384) >> 3) + 0x7FFF8000) = -8;
    v179 = ((v319 + 3584) >> 3) + 2147450880;
    *(_DWORD *)v179 = -117901064;
    *(_WORD *)(v179 + 4) = -1800;
    *(_BYTE *)(v179 + 6) = -8;
    if ( !v170 )
    {
      v21 = 0;
      goto LABEL_487;
    }
    goto LABEL_485;
  }
  if ( life_effect_type == 203 )
  {
    v143 = ((v319 + 3488) >> 3) + 2147450880;
    *(_DWORD *)v143 = 0;
    *(_WORD *)(v143 + 4) = 0;
    *(_BYTE *)(v143 + 6) = 0;
    LifeEffectForgeReduceTime::LifeEffectForgeReduceTime((LifeEffectForgeReduceTime *const)(v319 + 3488));
    v144 = ((v319 + 640) >> 3) + 2147450880;
    *(_WORD *)v144 = 0;
    *(_BYTE *)(v144 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v319 + 640));
    v145 = 0;
    v146 = 0;
    v147 = 0;
    v148 = 0;
    if ( std::vector<std::string>::size(param_vec) <= 1 )
      goto LABEL_268;
    *(_DWORD *)(((v319 + 2304) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v319 + 240) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v319 + 240);
    v145 = 1;
    v146 = 1;
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v319 + 2304),
      ",",
      (const std::allocator<char> *)(v319 + 240));
    v147 = 1;
    v148 = 1;
    v149 = std::vector<std::string>::operator[](param_vec, 0LL);
    if ( common::tools::StringUtils::splitToList<unsigned int>(
           v149,
           (const std::string *)(v319 + 2304),
           (std::vector<unsigned int> *)(v319 + 640),
           0)
      || (v150 = std::vector<std::string>::operator[](param_vec, 1uLL),
          common::tools::StringUtils::strToNum<float>(v150, (float *)(v319 + 3536), 1)) )
    {
LABEL_268:
      v313 = 1;
    }
    else
    {
      v313 = 0;
    }
    if ( v148 )
      std::string::~string((void *)(v319 + 2304));
    if ( v147 )
      *(_DWORD *)(((v319 + 2304) >> 3) + 0x7FFF8000) = -117901064;
    if ( v146 )
      std::allocator<char>::~allocator(v319 + 240);
    if ( v145 )
      *(_BYTE *)(((v319 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( v313 )
    {
      *(_DWORD *)(((v319 + 2368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v319 + 2368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v319 + 2399) >> 3) + 0x7FFF8000) != 0
        && (char)((v319 + 95) & 7) >= *(_BYTE *)(((v319 + 2399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v319 + 2368, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v319 + 2368),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteLifeEffectConfig",
        600);
      v151 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v319 + 2368),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v152 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v151, (const char (*)[40])byte_1AABF880);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v152, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 2368));
      *(_DWORD *)(((v319 + 2368) >> 3) + 0x7FFF8000) = -117901064;
      v320 = -1;
      v153 = 0;
    }
    else
    {
      v154 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v319 + 640))._M_current;
      v155._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v319 + 640))._M_current;
      std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
        (std::set<unsigned int> *const)(v319 + 3488),
        v155,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v154);
      v156 = std::move<LifeEffectForgeReduceTime &>((LifeEffectForgeReduceTime *)(v319 + 3488));
      std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::emplace<unsigned int const&,LifeEffectForgeReduceTime>(
        &this->proud_forge_config_map,
        proud_skill_id,
        v156,
        v157,
        v158);
      v153 = 1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v319 + 640));
    LifeEffectForgeReduceTime::~LifeEffectForgeReduceTime((LifeEffectForgeReduceTime *const)(v319 + 3488));
    v159 = ((v319 + 3488) >> 3) + 2147450880;
    *(_DWORD *)v159 = -117901064;
    *(_WORD *)(v159 + 4) = -1800;
    *(_BYTE *)(v159 + 6) = -8;
    v160 = ((v319 + 640) >> 3) + 2147450880;
    *(_WORD *)v160 = -1800;
    *(_BYTE *)(v160 + 2) = -8;
    if ( !v153 )
    {
      v21 = 0;
      goto LABEL_487;
    }
    goto LABEL_485;
  }
  if ( life_effect_type > 5 )
  {
    if ( life_effect_type > 106 || life_effect_type < 101 )
      goto LABEL_482;
    switch ( life_effect_type )
    {
      case 'e':
        v56 = ((v319 + 4208) >> 3) + 2147450880;
        *(_DWORD *)v56 = 0;
        *(_DWORD *)(v56 + 4) = 0;
        *(_DWORD *)(v56 + 8) = 0;
        *(_WORD *)(v56 + 12) = 0;
        LifeEffectCookExtraProficiency::LifeEffectCookExtraProficiency((LifeEffectCookExtraProficiency *const)(v319 + 4208));
        v57 = 0;
        v58 = 0;
        v59 = 0;
        v308 = 0;
        v301 = 0;
        v297 = 0;
        v293 = 0;
        v289 = 0;
        if ( std::vector<std::string>::size(param_vec) <= 3 )
          goto LABEL_115;
        v60 = std::vector<std::string>::operator[](param_vec, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v60, (unsigned int *)(v319 + 4208), 1) )
          goto LABEL_115;
        *(_DWORD *)(((v319 + 1408) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 96);
        v57 = 1;
        v58 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 1408),
          ",",
          (const std::allocator<char> *)(v319 + 96));
        v59 = 1;
        v308 = 1;
        v61 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( common::tools::StringUtils::splitToEnumSet<data::CookFoodType>(
               v61,
               (const std::string *)(v319 + 1408),
               (std::set<data::CookFoodType> *)(v319 + 4216),
               0) )
        {
          goto LABEL_115;
        }
        *(_DWORD *)(((v319 + 1472) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 112);
        v301 = 1;
        v297 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 1472),
          ",",
          (const std::allocator<char> *)(v319 + 112));
        v293 = 1;
        v289 = 1;
        v62 = std::vector<std::string>::operator[](param_vec, 2uLL);
        if ( common::tools::StringUtils::splitToEnumSet<data::CookMethodType>(
               v62,
               (const std::string *)(v319 + 1472),
               (std::set<data::CookMethodType> *)(v319 + 4264),
               0)
          || (v63 = std::vector<std::string>::operator[](param_vec, 3uLL),
              common::tools::StringUtils::strToEnum<data::EffectTargetType>(
                v63,
                (data::EffectTargetType *)(v319 + 4312))) )
        {
LABEL_115:
          v64 = 1;
        }
        else
        {
          v64 = 0;
        }
        if ( v289 )
          std::string::~string((void *)(v319 + 1472));
        if ( v293 )
          *(_DWORD *)(((v319 + 1472) >> 3) + 0x7FFF8000) = -117901064;
        if ( v297 )
          std::allocator<char>::~allocator(v319 + 112);
        if ( v301 )
          *(_BYTE *)(((v319 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v308 )
          std::string::~string((void *)(v319 + 1408));
        if ( v59 )
          *(_DWORD *)(((v319 + 1408) >> 3) + 0x7FFF8000) = -117901064;
        if ( v58 )
          std::allocator<char>::~allocator(v319 + 96);
        if ( v57 )
          *(_BYTE *)(((v319 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v64 )
        {
          *(_DWORD *)(((v319 + 1536) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v319 + 1536) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v319 + 1567) >> 3) + 0x7FFF8000) != 0
            && (char)((v319 - 96 + 127) & 7) >= *(_BYTE *)(((v319 + 1567) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v319 + 1536, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v319 + 1536),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "rewriteLifeEffectConfig",
            500);
          v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v319 + 1536),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v66 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v65, (const char (*)[40])byte_1AABF880);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, proud_skill_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 1536));
          *(_DWORD *)(((v319 + 1536) >> 3) + 0x7FFF8000) = -117901064;
          v320 = -1;
          v67 = 0;
        }
        else
        {
          v68 = std::move<LifeEffectCookExtraProficiency &>((LifeEffectCookExtraProficiency *)(v319 + 4208));
          std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::emplace<unsigned int const&,LifeEffectCookExtraProficiency>(
            &this->proud_cook_config_map,
            proud_skill_id,
            v68,
            v69,
            v70);
          v67 = 1;
        }
        LifeEffectCookExtraProficiency::~LifeEffectCookExtraProficiency((LifeEffectCookExtraProficiency *const)(v319 + 4208));
        v71 = ((v319 + 4208) >> 3) + 2147450880;
        *(_DWORD *)v71 = -117901064;
        *(_DWORD *)(v71 + 4) = -117901064;
        *(_DWORD *)(v71 + 8) = -117901064;
        *(_WORD *)(v71 + 12) = -1800;
        if ( v67 )
          goto LABEL_485;
        v21 = 0;
        break;
      case 'f':
        v72 = ((v319 + 4352) >> 3) + 2147450880;
        *(_DWORD *)v72 = 0;
        *(_DWORD *)(v72 + 4) = 0;
        *(_DWORD *)(v72 + 8) = 0;
        *(_WORD *)(v72 + 12) = 0;
        LifeEffectCookWidenJudgeArea::LifeEffectCookWidenJudgeArea((LifeEffectCookWidenJudgeArea *const)(v319 + 4352));
        v73 = 0;
        v74 = 0;
        v75 = 0;
        v309 = 0;
        v302 = 0;
        v298 = 0;
        v294 = 0;
        v290 = 0;
        if ( std::vector<std::string>::size(param_vec) <= 3 )
          goto LABEL_145;
        v76 = std::vector<std::string>::operator[](param_vec, 0LL);
        if ( common::tools::StringUtils::strToNum<float>(v76, (float *)(v319 + 4352), 1) )
          goto LABEL_145;
        *(_DWORD *)(((v319 + 1600) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 128);
        v73 = 1;
        v74 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 1600),
          ",",
          (const std::allocator<char> *)(v319 + 128));
        v75 = 1;
        v309 = 1;
        v77 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( common::tools::StringUtils::splitToEnumSet<data::CookFoodType>(
               v77,
               (const std::string *)(v319 + 1600),
               (std::set<data::CookFoodType> *)(v319 + 4360),
               0) )
        {
          goto LABEL_145;
        }
        *(_DWORD *)(((v319 + 1664) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 144) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 144);
        v302 = 1;
        v298 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 1664),
          ",",
          (const std::allocator<char> *)(v319 + 144));
        v294 = 1;
        v290 = 1;
        v78 = std::vector<std::string>::operator[](param_vec, 2uLL);
        if ( common::tools::StringUtils::splitToEnumSet<data::CookMethodType>(
               v78,
               (const std::string *)(v319 + 1664),
               (std::set<data::CookMethodType> *)(v319 + 4408),
               0)
          || (v79 = std::vector<std::string>::operator[](param_vec, 3uLL),
              common::tools::StringUtils::strToEnum<data::EffectTargetType>(
                v79,
                (data::EffectTargetType *)(v319 + 4456))) )
        {
LABEL_145:
          v80 = 1;
        }
        else
        {
          v80 = 0;
        }
        if ( v290 )
          std::string::~string((void *)(v319 + 1664));
        if ( v294 )
          *(_DWORD *)(((v319 + 1664) >> 3) + 0x7FFF8000) = -117901064;
        if ( v298 )
          std::allocator<char>::~allocator(v319 + 144);
        if ( v302 )
          *(_BYTE *)(((v319 + 144) >> 3) + 0x7FFF8000) = -8;
        if ( v309 )
          std::string::~string((void *)(v319 + 1600));
        if ( v75 )
          *(_DWORD *)(((v319 + 1600) >> 3) + 0x7FFF8000) = -117901064;
        if ( v74 )
          std::allocator<char>::~allocator(v319 + 128);
        if ( v73 )
          *(_BYTE *)(((v319 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( v80 )
        {
          *(_DWORD *)(((v319 + 1728) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v319 + 1728) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v319 + 1759) >> 3) + 0x7FFF8000) != 0
            && (char)((v319 - 96 + 63) & 7) >= *(_BYTE *)(((v319 + 1759) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v319 + 1728, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v319 + 1728),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "rewriteLifeEffectConfig",
            517);
          v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v319 + 1728),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v82 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v81, (const char (*)[40])byte_1AABF880);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v82, proud_skill_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 1728));
          *(_DWORD *)(((v319 + 1728) >> 3) + 0x7FFF8000) = -117901064;
          v320 = -1;
          v83 = 0;
        }
        else
        {
          v84 = std::move<LifeEffectCookWidenJudgeArea &>((LifeEffectCookWidenJudgeArea *)(v319 + 4352));
          std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::emplace<unsigned int const&,LifeEffectCookWidenJudgeArea>(
            &this->proud_cook_config_map,
            proud_skill_id,
            v84,
            v85,
            v86);
          v83 = 1;
        }
        LifeEffectCookWidenJudgeArea::~LifeEffectCookWidenJudgeArea((LifeEffectCookWidenJudgeArea *const)(v319 + 4352));
        v87 = ((v319 + 4352) >> 3) + 2147450880;
        *(_DWORD *)v87 = -117901064;
        *(_DWORD *)(v87 + 4) = -117901064;
        *(_DWORD *)(v87 + 8) = -117901064;
        *(_WORD *)(v87 + 12) = -1800;
        if ( v83 )
          goto LABEL_485;
        v21 = 0;
        break;
      case 'g':
        v88 = ((v319 + 4496) >> 3) + 2147450880;
        *(_DWORD *)v88 = 0;
        *(_DWORD *)(v88 + 4) = 0;
        *(_DWORD *)(v88 + 8) = 0;
        *(_WORD *)(v88 + 12) = 0;
        LifeEffectCookAddBonusProb::LifeEffectCookAddBonusProb((LifeEffectCookAddBonusProb *const)(v319 + 4496));
        v89 = 0;
        v90 = 0;
        v91 = 0;
        v310 = 0;
        v303 = 0;
        v299 = 0;
        v295 = 0;
        v291 = 0;
        if ( std::vector<std::string>::size(param_vec) <= 3 )
          goto LABEL_175;
        v92 = std::vector<std::string>::operator[](param_vec, 0LL);
        if ( common::tools::StringUtils::strToNum<float>(v92, (float *)(v319 + 4496), 1) )
          goto LABEL_175;
        *(_DWORD *)(((v319 + 1792) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 160) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 160);
        v89 = 1;
        v90 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 1792),
          ",",
          (const std::allocator<char> *)(v319 + 160));
        v91 = 1;
        v310 = 1;
        v93 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( common::tools::StringUtils::splitToEnumSet<data::CookFoodType>(
               v93,
               (const std::string *)(v319 + 1792),
               (std::set<data::CookFoodType> *)(v319 + 4504),
               0) )
        {
          goto LABEL_175;
        }
        *(_DWORD *)(((v319 + 1856) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 176) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 176);
        v303 = 1;
        v299 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 1856),
          ",",
          (const std::allocator<char> *)(v319 + 176));
        v295 = 1;
        v291 = 1;
        v94 = std::vector<std::string>::operator[](param_vec, 2uLL);
        if ( common::tools::StringUtils::splitToEnumSet<data::CookMethodType>(
               v94,
               (const std::string *)(v319 + 1856),
               (std::set<data::CookMethodType> *)(v319 + 4552),
               0)
          || (v95 = std::vector<std::string>::operator[](param_vec, 3uLL),
              common::tools::StringUtils::strToEnum<data::EffectTargetType>(
                v95,
                (data::EffectTargetType *)(v319 + 4600))) )
        {
LABEL_175:
          v96 = 1;
        }
        else
        {
          v96 = 0;
        }
        if ( v291 )
          std::string::~string((void *)(v319 + 1856));
        if ( v295 )
          *(_DWORD *)(((v319 + 1856) >> 3) + 0x7FFF8000) = -117901064;
        if ( v299 )
          std::allocator<char>::~allocator(v319 + 176);
        if ( v303 )
          *(_BYTE *)(((v319 + 176) >> 3) + 0x7FFF8000) = -8;
        if ( v310 )
          std::string::~string((void *)(v319 + 1792));
        if ( v91 )
          *(_DWORD *)(((v319 + 1792) >> 3) + 0x7FFF8000) = -117901064;
        if ( v90 )
          std::allocator<char>::~allocator(v319 + 160);
        if ( v89 )
          *(_BYTE *)(((v319 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v96 )
        {
          *(_DWORD *)(((v319 + 1920) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v319 + 1920) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v319 + 1951) >> 3) + 0x7FFF8000) != 0
            && (char)((v319 - 97) & 7) >= *(_BYTE *)(((v319 + 1951) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v319 + 1920, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v319 + 1920),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "rewriteLifeEffectConfig",
            534);
          v97 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v319 + 1920),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v98 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v97, (const char (*)[40])byte_1AABF880);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, proud_skill_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 1920));
          *(_DWORD *)(((v319 + 1920) >> 3) + 0x7FFF8000) = -117901064;
          v320 = -1;
          v99 = 0;
        }
        else
        {
          v100 = std::move<LifeEffectCookAddBonusProb &>((LifeEffectCookAddBonusProb *)(v319 + 4496));
          std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::emplace<unsigned int const&,LifeEffectCookAddBonusProb>(
            &this->proud_cook_config_map,
            proud_skill_id,
            v100,
            v101,
            v102);
          v99 = 1;
        }
        LifeEffectCookAddBonusProb::~LifeEffectCookAddBonusProb((LifeEffectCookAddBonusProb *const)(v319 + 4496));
        v103 = ((v319 + 4496) >> 3) + 2147450880;
        *(_DWORD *)v103 = -117901064;
        *(_DWORD *)(v103 + 4) = -117901064;
        *(_DWORD *)(v103 + 8) = -117901064;
        *(_WORD *)(v103 + 12) = -1800;
        if ( v99 )
          goto LABEL_485;
        v21 = 0;
        break;
      case 'h':
        v104 = ((v319 + 4640) >> 3) + 2147450880;
        *(_DWORD *)v104 = 0;
        *(_DWORD *)(v104 + 4) = 0;
        *(_DWORD *)(v104 + 8) = 0;
        *(_WORD *)(v104 + 12) = 0;
        LifeEffectCookPerfectMultiOutput::LifeEffectCookPerfectMultiOutput((LifeEffectCookPerfectMultiOutput *const)(v319 + 4640));
        *(_BYTE *)(((v319 + 352) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v319 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 352) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v319 + 352, v4);
        *(_DWORD *)(v319 + 352) = 0;
        v105 = 0;
        v106 = 0;
        v107 = 0;
        v108 = 0;
        if ( std::vector<std::string>::size(param_vec) <= 2 )
          goto LABEL_206;
        v109 = std::vector<std::string>::operator[](param_vec, 0LL);
        v4 = (char *)(v319 + 352);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v109, (unsigned int *)(v319 + 352), 1) )
          goto LABEL_206;
        *(_DWORD *)(((v319 + 1984) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 192) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 192);
        v105 = 1;
        v106 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 1984),
          ",",
          (const std::allocator<char> *)(v319 + 192));
        v107 = 1;
        v108 = 1;
        v110 = std::vector<std::string>::operator[](param_vec, 1uLL);
        v4 = (char *)(v319 + 1984);
        if ( common::tools::StringUtils::splitToEnumSet<data::CookFoodType>(
               v110,
               (const std::string *)(v319 + 1984),
               (std::set<data::CookFoodType> *)(v319 + 4648),
               0)
          || (v111 = std::vector<std::string>::operator[](param_vec, 2uLL),
              v4 = (char *)(v319 + 4748),
              common::tools::StringUtils::strToNum<float>(v111, (float *)(v319 + 4748), 1)) )
        {
LABEL_206:
          v311 = 1;
        }
        else
        {
          v311 = 0;
        }
        if ( v108 )
          std::string::~string((void *)(v319 + 1984));
        if ( v107 )
          *(_DWORD *)(((v319 + 1984) >> 3) + 0x7FFF8000) = -117901064;
        if ( v106 )
          std::allocator<char>::~allocator(v319 + 192);
        if ( v105 )
          *(_BYTE *)(((v319 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v311 )
        {
          *(_DWORD *)(((v319 + 2048) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v319 + 2048) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v319 + 2079) >> 3) + 0x7FFF8000) != 0
            && (char)((v319 - 96 + 127) & 7) >= *(_BYTE *)(((v319 + 2079) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v319 + 2048, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v319 + 2048),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "rewriteLifeEffectConfig",
            551);
          v112 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v319 + 2048),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v113 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                   v112,
                   (const char (*)[40])byte_1AABF880);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v113, proud_skill_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 2048));
          *(_DWORD *)(((v319 + 2048) >> 3) + 0x7FFF8000) = -117901064;
          v320 = -1;
          v114 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((v319 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 352) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v319 + 352);
          v115 = (float)*(int *)(v319 + 352) / 10000.0;
          if ( *(_BYTE *)(((v319 + 4640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 4640) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v319 + 4640, v4);
          *(float *)(v319 + 4640) = v115;
          v116 = std::move<LifeEffectCookPerfectMultiOutput &>((LifeEffectCookPerfectMultiOutput *)(v319 + 4640));
          std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::emplace<unsigned int const&,LifeEffectCookPerfectMultiOutput>(
            &this->proud_cook_config_map,
            proud_skill_id,
            v116,
            v117,
            v118);
          v114 = 1;
        }
        LifeEffectCookPerfectMultiOutput::~LifeEffectCookPerfectMultiOutput((LifeEffectCookPerfectMultiOutput *const)(v319 + 4640));
        v119 = ((v319 + 4640) >> 3) + 2147450880;
        *(_DWORD *)v119 = -117901064;
        *(_DWORD *)(v119 + 4) = -117901064;
        *(_DWORD *)(v119 + 8) = -117901064;
        *(_WORD *)(v119 + 12) = -1800;
        *(_BYTE *)(((v319 + 352) >> 3) + 0x7FFF8000) = -8;
        if ( v114 )
          goto LABEL_485;
        v21 = 0;
        break;
      case 'i':
        v120 = ((v319 + 4784) >> 3) + 2147450880;
        *(_DWORD *)v120 = 0;
        *(_DWORD *)(v120 + 4) = 0;
        *(_DWORD *)(v120 + 8) = 0;
        *(_DWORD *)(v120 + 12) = 0;
        *(_DWORD *)(v120 + 16) = 0;
        *(_BYTE *)(v120 + 20) = 0;
        LifeEffectCookProbMultiOutput::LifeEffectCookProbMultiOutput((LifeEffectCookProbMultiOutput *const)(v319 + 4784));
        *(_BYTE *)(((v319 + 368) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v319 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 368) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v319 + 368, v4);
        *(_DWORD *)(v319 + 368) = 0;
        v121 = 0;
        v122 = 0;
        v123 = 0;
        v312 = 0;
        v304 = 0;
        v300 = 0;
        v296 = 0;
        v292 = 0;
        if ( std::vector<std::string>::size(param_vec) <= 4 )
          goto LABEL_235;
        v124 = std::vector<std::string>::operator[](param_vec, 0LL);
        v4 = (char *)(v319 + 368);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v124, (unsigned int *)(v319 + 368), 1) )
          goto LABEL_235;
        *(_DWORD *)(((v319 + 2112) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 208) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 208);
        v121 = 1;
        v122 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 2112),
          ",",
          (const std::allocator<char> *)(v319 + 208));
        v123 = 1;
        v312 = 1;
        v125 = std::vector<std::string>::operator[](param_vec, 1uLL);
        v4 = (char *)(v319 + 2112);
        if ( common::tools::StringUtils::splitToEnumSet<data::CookFoodType>(
               v125,
               (const std::string *)(v319 + 2112),
               (std::set<data::CookFoodType> *)(v319 + 4792),
               0) )
        {
          goto LABEL_235;
        }
        v126 = std::vector<std::string>::operator[](param_vec, 2uLL);
        v4 = (char *)(v319 + 4892);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v126, (unsigned int *)(v319 + 4892), 1) )
          goto LABEL_235;
        *(_DWORD *)(((v319 + 2176) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 224) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 224);
        v304 = 1;
        v300 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 2176),
          ",",
          (const std::allocator<char> *)(v319 + 224));
        v296 = 1;
        v292 = 1;
        v127 = std::vector<std::string>::operator[](param_vec, 3uLL);
        v4 = (char *)(v319 + 2176);
        if ( common::tools::StringUtils::splitToSet<std::set<unsigned int>>(
               v127,
               (const std::string *)(v319 + 2176),
               (std::set<unsigned int> *)(v319 + 4896),
               0)
          || (v128 = std::vector<std::string>::operator[](param_vec, 4uLL),
              v4 = (char *)(v319 + 4944),
              common::tools::StringUtils::strToNum<unsigned int>(v128, (unsigned int *)(v319 + 4944), 1)) )
        {
LABEL_235:
          v129 = 1;
        }
        else
        {
          v129 = 0;
        }
        if ( v292 )
          std::string::~string((void *)(v319 + 2176));
        if ( v296 )
          *(_DWORD *)(((v319 + 2176) >> 3) + 0x7FFF8000) = -117901064;
        if ( v300 )
          std::allocator<char>::~allocator(v319 + 224);
        if ( v304 )
          *(_BYTE *)(((v319 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v312 )
          std::string::~string((void *)(v319 + 2112));
        if ( v123 )
          *(_DWORD *)(((v319 + 2112) >> 3) + 0x7FFF8000) = -117901064;
        if ( v122 )
          std::allocator<char>::~allocator(v319 + 208);
        if ( v121 )
          *(_BYTE *)(((v319 + 208) >> 3) + 0x7FFF8000) = -8;
        if ( v129 )
        {
          *(_DWORD *)(((v319 + 2240) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v319 + 2240) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v319 + 2271) >> 3) + 0x7FFF8000) != 0
            && (char)((v319 - 96 + 63) & 7) >= *(_BYTE *)(((v319 + 2271) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v319 + 2240, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v319 + 2240),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "rewriteLifeEffectConfig",
            573);
          v130 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v319 + 2240),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v131 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                   v130,
                   (const char (*)[40])byte_1AABF880);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v131, proud_skill_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 2240));
          *(_DWORD *)(((v319 + 2240) >> 3) + 0x7FFF8000) = -117901064;
          v320 = -1;
          v132 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((v319 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 368) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v319 + 368);
          v133 = (float)*(int *)(v319 + 368) / 10000.0;
          if ( *(_BYTE *)(((v319 + 4784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 4784) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v319 + 4784, v4);
          *(float *)(v319 + 4784) = v133;
          v134 = std::move<LifeEffectCookProbMultiOutput &>((LifeEffectCookProbMultiOutput *)(v319 + 4784));
          std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::emplace<unsigned int const&,LifeEffectCookProbMultiOutput>(
            &this->proud_cook_config_map,
            proud_skill_id,
            v134,
            v135,
            v136);
          v132 = 1;
        }
        LifeEffectCookProbMultiOutput::~LifeEffectCookProbMultiOutput((LifeEffectCookProbMultiOutput *const)(v319 + 4784));
        v137 = ((v319 + 4784) >> 3) + 2147450880;
        *(_DWORD *)v137 = -117901064;
        *(_DWORD *)(v137 + 4) = -117901064;
        *(_DWORD *)(v137 + 8) = -117901064;
        *(_DWORD *)(v137 + 12) = -117901064;
        *(_DWORD *)(v137 + 16) = -117901064;
        *(_BYTE *)(v137 + 20) = -8;
        *(_BYTE *)(((v319 + 368) >> 3) + 0x7FFF8000) = -8;
        if ( v132 )
          goto LABEL_485;
        v21 = 0;
        break;
      case 'j':
        v138 = ((v319 + 4064) >> 3) + 2147450880;
        *(_DWORD *)v138 = 0;
        *(_DWORD *)(v138 + 4) = 0;
        *(_DWORD *)(v138 + 8) = 0;
        *(_BYTE *)(v138 + 12) = 0;
        LifeEffectCookCanNotCook::LifeEffectCookCanNotCook((LifeEffectCookCanNotCook *const)(v319 + 4064));
        v139 = std::move<LifeEffectCookCanNotCook &>((LifeEffectCookCanNotCook *)(v319 + 4064));
        std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::emplace<unsigned int const&,LifeEffectCookCanNotCook>(
          &this->proud_cook_config_map,
          proud_skill_id,
          v139,
          v140,
          v141);
        LifeEffectCookCanNotCook::~LifeEffectCookCanNotCook((LifeEffectCookCanNotCook *const)(v319 + 4064));
        v142 = ((v319 + 4064) >> 3) + 2147450880;
        *(_DWORD *)v142 = -117901064;
        *(_DWORD *)(v142 + 4) = -117901064;
        *(_DWORD *)(v142 + 8) = -117901064;
        *(_BYTE *)(v142 + 12) = -8;
        goto LABEL_485;
      default:
        goto LABEL_482;
    }
  }
  else
  {
    if ( life_effect_type < 0 )
    {
LABEL_482:
      *(_DWORD *)(((v319 + 3264) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v319 + 3264) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v319 + 3295) >> 3) + 0x7FFF8000) != 0
        && (char)((v319 - 96 + 63) & 7) >= *(_BYTE *)(((v319 + 3295) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v319 + 3264, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v319 + 3264),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "rewriteLifeEffectConfig",
        763);
      v283 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v319 + 3264),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v284 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v283, (const char (*)[31])byte_1AABF8E0);
      v285 = common::milog::MiLogStream::operator<<<data::ProudLifeEffectType,(data::ProudLifeEffectType*)0>(
               v284,
               &proud_skill_config->life_effect_type);
      v286 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v285, (const char (*)[16])byte_1AABEEC0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v286, proud_skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 3264));
      v320 = -1;
      v21 = 0;
      goto LABEL_487;
    }
    switch ( life_effect_type )
    {
      case 0:
        goto LABEL_485;
      case 1:
        v6 = ((v319 + 3328) >> 3) + 2147450880;
        *(_DWORD *)v6 = 0;
        *(_BYTE *)(v6 + 4) = 0;
        LifeEffectCombineReturnMaterial::LifeEffectCombineReturnMaterial((LifeEffectCombineReturnMaterial *const)(v319 + 3328));
        v7 = 0;
        v8 = 0;
        v9 = 0;
        v10 = 0;
        if ( std::vector<std::string>::size(param_vec) <= 2 )
          goto LABEL_39;
        v11 = std::vector<std::string>::operator[](param_vec, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v11, (unsigned int *)(v319 + 3328), 1) )
          goto LABEL_39;
        *(_DWORD *)(((v319 + 832) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 48);
        v7 = 1;
        v8 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 832),
          ",",
          (const std::allocator<char> *)(v319 + 48));
        v9 = 1;
        v10 = 1;
        v12 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( common::tools::StringUtils::splitToList<unsigned int>(
               v12,
               (const std::string *)(v319 + 832),
               (std::vector<unsigned int> *)(v319 + 3336),
               0)
          || (v13 = std::vector<std::string>::operator[](param_vec, 2uLL),
              common::tools::StringUtils::strToNum<float>(v13, (float *)(v319 + 3360), 1)) )
        {
LABEL_39:
          v305 = 1;
        }
        else
        {
          v305 = 0;
        }
        if ( v10 )
          std::string::~string((void *)(v319 + 832));
        if ( v9 )
          *(_DWORD *)(((v319 + 832) >> 3) + 0x7FFF8000) = -117901064;
        if ( v8 )
          std::allocator<char>::~allocator(v319 + 48);
        if ( v7 )
          *(_BYTE *)(((v319 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v305 )
        {
          *(_DWORD *)(((v319 + 896) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v319 + 896) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v319 + 927) >> 3) + 0x7FFF8000) != 0
            && (char)((v319 - 97) & 7) >= *(_BYTE *)(((v319 + 927) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v319 + 896, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v319 + 896),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "rewriteLifeEffectConfig",
            435);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v319 + 896),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v14, (const char (*)[40])byte_1AABF880);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, proud_skill_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 896));
          *(_DWORD *)(((v319 + 896) >> 3) + 0x7FFF8000) = -117901064;
          v320 = -1;
          v16 = 0;
        }
        else
        {
          v17 = std::move<LifeEffectCombineReturnMaterial &>((LifeEffectCombineReturnMaterial *)(v319 + 3328));
          std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::emplace<unsigned int const&,LifeEffectCombineReturnMaterial>(
            &this->proud_combine_config_map,
            proud_skill_id,
            v17,
            v18,
            v19);
          v16 = 1;
        }
        LifeEffectCombineReturnMaterial::~LifeEffectCombineReturnMaterial((LifeEffectCombineReturnMaterial *const)(v319 + 3328));
        v20 = ((v319 + 3328) >> 3) + 2147450880;
        *(_DWORD *)v20 = -117901064;
        *(_BYTE *)(v20 + 4) = -8;
        if ( v16 )
          goto LABEL_485;
        v21 = 0;
        break;
      case 2:
        v22 = ((v319 + 3408) >> 3) + 2147450880;
        *(_DWORD *)v22 = 0;
        *(_BYTE *)(v22 + 4) = 0;
        LifeEffectCombineMultiplyOutput::LifeEffectCombineMultiplyOutput((LifeEffectCombineMultiplyOutput *const)(v319 + 3408));
        v23 = 0;
        v24 = 0;
        v25 = 0;
        v26 = 0;
        if ( std::vector<std::string>::size(param_vec) <= 2 )
          goto LABEL_60;
        v27 = std::vector<std::string>::operator[](param_vec, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v27, (unsigned int *)(v319 + 3408), 1) )
          goto LABEL_60;
        *(_DWORD *)(((v319 + 960) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 64);
        v23 = 1;
        v24 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 960),
          ",",
          (const std::allocator<char> *)(v319 + 64));
        v25 = 1;
        v26 = 1;
        v28 = std::vector<std::string>::operator[](param_vec, 1uLL);
        if ( common::tools::StringUtils::splitToList<unsigned int>(
               v28,
               (const std::string *)(v319 + 960),
               (std::vector<unsigned int> *)(v319 + 3416),
               0)
          || (v29 = std::vector<std::string>::operator[](param_vec, 2uLL),
              common::tools::StringUtils::strToNum<float>(v29, (float *)(v319 + 3440), 1)) )
        {
LABEL_60:
          v306 = 1;
        }
        else
        {
          v306 = 0;
        }
        if ( v26 )
          std::string::~string((void *)(v319 + 960));
        if ( v25 )
          *(_DWORD *)(((v319 + 960) >> 3) + 0x7FFF8000) = -117901064;
        if ( v24 )
          std::allocator<char>::~allocator(v319 + 64);
        if ( v23 )
          *(_BYTE *)(((v319 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( v306 )
        {
          *(_DWORD *)(((v319 + 1024) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v319 + 1024) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v319 + 1055) >> 3) + 0x7FFF8000) != 0
            && (char)((v319 - 96 + 127) & 7) >= *(_BYTE *)(((v319 + 1055) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v319 + 1024, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v319 + 1024),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "rewriteLifeEffectConfig",
            451);
          v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v319 + 1024),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v31 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v30, (const char (*)[40])byte_1AABF880);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, proud_skill_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 1024));
          *(_DWORD *)(((v319 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          v320 = -1;
          v32 = 0;
        }
        else
        {
          v33 = std::move<LifeEffectCombineMultiplyOutput &>((LifeEffectCombineMultiplyOutput *)(v319 + 3408));
          std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::emplace<unsigned int const&,LifeEffectCombineMultiplyOutput>(
            &this->proud_combine_config_map,
            proud_skill_id,
            v33,
            v34,
            v35);
          v32 = 1;
        }
        LifeEffectCombineMultiplyOutput::~LifeEffectCombineMultiplyOutput((LifeEffectCombineMultiplyOutput *const)(v319 + 3408));
        v36 = ((v319 + 3408) >> 3) + 2147450880;
        *(_DWORD *)v36 = -117901064;
        *(_BYTE *)(v36 + 4) = -8;
        if ( v32 )
          goto LABEL_485;
        v21 = 0;
        break;
      case 4:
        *(_DWORD *)(((v319 + 1088) >> 3) + 0x7FFF8000) = 0;
        LifeEffectCombineAddExtraProb::LifeEffectCombineAddExtraProb((LifeEffectCombineAddExtraProb *const)(v319 + 1088));
        *(_BYTE *)(((v319 + 336) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v319 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 336) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v319 + 336, v4);
        *(_DWORD *)(v319 + 336) = 0;
        v37 = 0;
        v38 = 0;
        v39 = 0;
        v40 = 0;
        if ( std::vector<std::string>::size(param_vec) <= 1 )
          goto LABEL_82;
        *(_DWORD *)(((v319 + 1152) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v319 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v319 + 80);
        v37 = 1;
        v38 = 1;
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v319 + 1152),
          ",",
          (const std::allocator<char> *)(v319 + 80));
        v39 = 1;
        v40 = 1;
        v41 = std::vector<std::string>::operator[](param_vec, 0LL);
        v4 = (char *)(v319 + 1152);
        if ( common::tools::StringUtils::splitToList<unsigned int>(
               v41,
               (const std::string *)(v319 + 1152),
               (std::vector<unsigned int> *)(v319 + 1088),
               0)
          || (v42 = std::vector<std::string>::operator[](param_vec, 1uLL),
              v4 = (char *)(v319 + 336),
              common::tools::StringUtils::strToNum<unsigned int>(v42, (unsigned int *)(v319 + 336), 1)) )
        {
LABEL_82:
          v307 = 1;
        }
        else
        {
          v307 = 0;
        }
        if ( v40 )
          std::string::~string((void *)(v319 + 1152));
        if ( v39 )
          *(_DWORD *)(((v319 + 1152) >> 3) + 0x7FFF8000) = -117901064;
        if ( v38 )
          std::allocator<char>::~allocator(v319 + 80);
        if ( v37 )
          *(_BYTE *)(((v319 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v307 )
        {
          *(_DWORD *)(((v319 + 1216) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v319 + 1216) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v319 + 1247) >> 3) + 0x7FFF8000) != 0
            && (char)((v319 - 96 + 63) & 7) >= *(_BYTE *)(((v319 + 1247) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v319 + 1216, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v319 + 1216),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "rewriteLifeEffectConfig",
            467);
          v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v319 + 1216),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v44 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v43, (const char (*)[40])byte_1AABF880);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, proud_skill_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 1216));
          *(_DWORD *)(((v319 + 1216) >> 3) + 0x7FFF8000) = -117901064;
          v320 = -1;
          v45 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((v319 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 336) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v319 + 336);
          v46 = (float)*(int *)(v319 + 336) / 10000.0;
          if ( *(_BYTE *)(((v319 + 1112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v319 + 1112) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v319 + 1112, v4);
          *(float *)(v319 + 1112) = v46;
          v47 = std::move<LifeEffectCombineAddExtraProb &>((LifeEffectCombineAddExtraProb *)(v319 + 1088));
          std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::emplace<unsigned int const&,LifeEffectCombineAddExtraProb>(
            &this->proud_combine_config_map,
            proud_skill_id,
            v47,
            v48,
            v49);
          v45 = 1;
        }
        LifeEffectCombineAddExtraProb::~LifeEffectCombineAddExtraProb((LifeEffectCombineAddExtraProb *const)(v319 + 1088));
        *(_DWORD *)(((v319 + 1088) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v319 + 336) >> 3) + 0x7FFF8000) = -8;
        if ( v45 )
          goto LABEL_485;
        v21 = 0;
        break;
      case 5:
        *(_DWORD *)(((v319 + 1280) >> 3) + 0x7FFF8000) = 0;
        LifeEffectCombineReturnSpecialMaterial::LifeEffectCombineReturnSpecialMaterial((LifeEffectCombineReturnSpecialMaterial *const)(v319 + 1280));
        if ( common::tools::ConvertUtils::convertTo<0u,unsigned int,std::vector<unsigned int> &>(
               param_vec,
               (unsigned int *)(v319 + 1280),
               (std::vector<unsigned int> *)(v319 + 1288),
               (std::vector<unsigned int> *)(v319 + 1280)) )
        {
          *(_DWORD *)(((v319 + 1344) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v319 + 1344) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v319 + 1375) >> 3) + 0x7FFF8000) != 0
            && (char)((v319 + 95) & 7) >= *(_BYTE *)(((v319 + 1375) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v319 + 1344, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v319 + 1344),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "rewriteLifeEffectConfig",
            483);
          v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v319 + 1344),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v51 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v50, (const char (*)[40])byte_1AABF880);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, proud_skill_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v319 + 1344));
          *(_DWORD *)(((v319 + 1344) >> 3) + 0x7FFF8000) = -117901064;
          v320 = -1;
          v52 = 0;
        }
        else
        {
          v53 = std::move<LifeEffectCombineReturnSpecialMaterial &>((LifeEffectCombineReturnSpecialMaterial *)(v319 + 1280));
          std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::emplace<unsigned int const&,LifeEffectCombineReturnSpecialMaterial>(
            &this->proud_combine_config_map,
            proud_skill_id,
            v53,
            v54,
            v55);
          v52 = 1;
        }
        LifeEffectCombineReturnSpecialMaterial::~LifeEffectCombineReturnSpecialMaterial((LifeEffectCombineReturnSpecialMaterial *const)(v319 + 1280));
        *(_DWORD *)(((v319 + 1280) >> 3) + 0x7FFF8000) = -117901064;
        if ( v52 )
          goto LABEL_485;
        v21 = 0;
        break;
      default:
        goto LABEL_482;
    }
  }
LABEL_487:
  if ( v21 == 1 )
    v320 = 0;
  if ( v326 == (char *)v319 )
  {
    v288[268431360] = 0LL;
    v288[268431410] = 0LL;
    memset(
      (void *)((unsigned __int64)(v288 + 268431361) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v288 + 2147450880 - (((_DWORD)v288 + 2147450888) & 0xFFFFFFF8) + 408) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((char *)v288 + 2147451292) = 0LL;
    *(_QWORD *)((char *)v288 + 2147451500) = 0LL;
    memset(
      (void *)(((unsigned __int64)v288 + 2147451300) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v288 + 2147451292 - (((_DWORD)v288 + 2147451300) & 0xFFFFFFF8) + 216) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v319 = 1172321806LL;
    __asan_stack_free_7(v319, 5024LL, v326);
  }
  return v320;
};

// Line 773: range 0000000012E9EC43-0000000012E9EF7B
int32_t __cdecl checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *visitor,
        const std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>> *config_map)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial> *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial> >,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial> > >::type *proud_skill_id; // [rsp+20h] [rbp-E0h]
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:775 64 8 13 __for_end:775 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, config_map);
  *(std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::begin(config_map);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, config_map);
  *(std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::end(config_map);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial> >,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial> >,false,false> *const)(v3 + 32));
    proud_skill_id = std::get<0ul,unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>(v11);
    v6 = std::get<1ul,unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>(v11);
    if ( std::visit_AvatarTalentExcelConfigMgr::checkLifeEffectConfig_const_TxtConfigMgr__::ProudCombineConfigVisitor__const_std::variant_LifeEffectCombineReturnMaterial_LifeEffectCombineMultiplyOutput_LifeEffectCombineAddExtraProb_LifeEffectCombineReturnSpecialMaterial___(
           visitor,
           v6,
           v6) )
    {
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial> >,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
    "checkProudLifeEffectConfigMap",
    779);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AABF880);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, proud_skill_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_16:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 773: range 0000000012E9F5ED-0000000012E9F925
int32_t __cdecl checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *visitor,
        const std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>> *config_map)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> > >::type *proud_skill_id; // [rsp+20h] [rbp-E0h]
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:775 64 8 13 __for_end:775 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, config_map);
  *(std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::begin(config_map);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, config_map);
  *(std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>::end(config_map);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false> *const)(v3 + 32));
    proud_skill_id = std::get<0ul,unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>(v11);
    v6 = std::get<1ul,unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>(v11);
    if ( std::visit_AvatarTalentExcelConfigMgr::checkLifeEffectConfig_const_TxtConfigMgr__::ProudCookConfigVisitor__const_std::variant_LifeEffectCookExtraProficiency_LifeEffectCookWidenJudgeArea_LifeEffectCookAddBonusProb_LifeEffectCookPerfectMultiOutput_LifeEffectCookProbMultiOutput_LifeEffectCookCanNotCook___(
           visitor,
           v6,
           v6) )
    {
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook> >,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
    "checkProudLifeEffectConfigMap",
    779);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AABF880);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, proud_skill_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_16:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 773: range 0000000012EA0305-0000000012EA063D
int32_t __cdecl checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *visitor,
        const std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>> *config_map)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> > >::type *proud_skill_id; // [rsp+20h] [rbp-E0h]
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:775 64 8 13 __for_end:775 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, config_map);
  *(std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::begin(config_map);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, config_map);
  *(std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::end(config_map);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false,false> *const)(v3 + 32));
    proud_skill_id = std::get<0ul,unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>(v11);
    v6 = std::get<1ul,unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>(v11);
    if ( std::visit_AvatarTalentExcelConfigMgr::checkLifeEffectConfig_const_TxtConfigMgr__::ProudExpeditionConfigVisitor__const_std::variant_LifeEffectExpeditionShortenTime_LifeEffectExpeditionExtraOutput___(
           visitor,
           v6,
           v6) )
    {
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
    "checkProudLifeEffectConfigMap",
    779);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AABF880);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, proud_skill_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_16:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 773: range 0000000012E9FCEB-0000000012EA0023
int32_t __cdecl checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *visitor,
        const std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>> *config_map)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> > >::type *proud_skill_id; // [rsp+20h] [rbp-E0h]
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:775 64 8 13 __for_end:775 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, config_map);
  *(std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::begin(config_map);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, config_map);
  *(std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::end(config_map);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false> *const)(v3 + 32));
    proud_skill_id = std::get<0ul,unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>(v11);
    v6 = std::get<1ul,unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>(v11);
    if ( std::visit_AvatarTalentExcelConfigMgr::checkLifeEffectConfig_const_TxtConfigMgr__::ProudForgeConfigVisitor__const_std::variant_LifeEffectForgeReduceTime_LifeEffectForgeAddExtraProb_LifeEffectForgeReturnMaterial___(
           visitor,
           v6,
           v6) )
    {
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
    "checkProudLifeEffectConfigMap",
    779);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AABF880);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, proud_skill_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_16:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 773: range 0000000012EA083B-0000000012EA0B73
int32_t __cdecl checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudFurnitureMakeConfigVisitor,std::variant<LifeEffectFurnitureMakeReturnMaterial>>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudFurnitureMakeConfigVisitor *visitor,
        const std::unordered_map<unsigned int,std::variant<LifeEffectFurnitureMakeReturnMaterial>> *config_map)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::variant<LifeEffectFurnitureMakeReturnMaterial> *Return; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial> >,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial> > >::type *proud_skill_id; // [rsp+20h] [rbp-E0h]
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:775 64 8 13 __for_end:775 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudFurnitureMakeConfigVisitor,std::variant<LifeEffectFurnitureMakeReturnMaterial>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, config_map);
  *(std::unordered_map<unsigned int,std::variant<LifeEffectFurnitureMakeReturnMaterial>>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::variant<LifeEffectFurnitureMakeReturnMaterial>>::begin(config_map);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, config_map);
  *(std::unordered_map<unsigned int,std::variant<LifeEffectFurnitureMakeReturnMaterial>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::variant<LifeEffectFurnitureMakeReturnMaterial>>::end(config_map);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial> >,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial> >,false,false> *const)(v3 + 32));
    proud_skill_id = std::get<0ul,unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial>>(v11);
    Return = std::get<1ul,unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial>>(v11);
    if ( std::visit_AvatarTalentExcelConfigMgr::checkLifeEffectConfig_const_TxtConfigMgr__::ProudFurnitureMakeConfigVisitor__const_std::variant_LifeEffectFurnitureMakeReturnMaterial___(
           visitor,
           Return,
           Return) )
    {
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial> >,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
    "checkProudLifeEffectConfigMap",
    779);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AABF880);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, proud_skill_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_16:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 788: range 0000000012E8A0F6-0000000012E8AE3A
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(
        AvatarTalentExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  char v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  int v11; // edx
  const char *v12; // rsi
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  std::tuple_element<1,std::pair<unsigned int const,LifeEffectHitTreeExtraOutput> >::type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  int v22; // edx
  int32_t result; // eax
  std::unordered_map<unsigned int,LifeEffectWeaponPromoteReduceScoin> *__for_range; // [rsp+10h] [rbp-2D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectWeaponPromoteReduceScoin>,false,false>::reference v26; // [rsp+18h] [rbp-2C8h]
  std::tuple_element<0,std::pair<unsigned int const,LifeEffectWeaponPromoteReduceScoin> >::type *proud_skill_id; // [rsp+20h] [rbp-2C0h]
  std::tuple_element<1,const std::pair<unsigned int const,LifeEffectWeaponPromoteReduceScoin> >::type *config; // [rsp+28h] [rbp-2B8h]
  std::unordered_map<unsigned int,LifeEffectFishingExtraOutput> *__for_range_0; // [rsp+30h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false,false>::reference v30; // [rsp+38h] [rbp-2A8h]
  std::tuple_element<0,std::pair<unsigned int const,LifeEffectFishingExtraOutput> >::type *proud_skill_id_0; // [rsp+40h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,LifeEffectFishingExtraOutput> >::type *config_0; // [rsp+48h] [rbp-298h]
  std::unordered_map<unsigned int,LifeEffectHitTreeExtraOutput> *__for_range_1; // [rsp+50h] [rbp-290h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectHitTreeExtraOutput>,false,false>::reference v34; // [rsp+58h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,LifeEffectHitTreeExtraOutput> >::type *proud_skill_id_1; // [rsp+60h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,LifeEffectHitTreeExtraOutput> >::type *config_1; // [rsp+68h] [rbp-278h]
  char v37[624]; // [rsp+70h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 8 32 proud_combine_config_visitor:841 64 8 29 proud_cook_config_visitor:894 96 8 30 proud_"
                        "forge_config_visitor:924 128 8 35 proud_expedition_config_visitor:975 160 8 40 proud_furniture_m"
                        "ake_config_visitor:1014 192 8 16 __for_begin:1017 224 8 14 __for_end:1017 256 8 16 __for_begin:1"
                        "027 288 8 14 __for_end:1027 320 8 16 __for_begin:1038 352 8 14 __for_end:1038 384 32 9 <unknown>"
                        " 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarTalentExcelConfigMgr::checkLifeEffectConfig;
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
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -202116109;
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor::ProudCombineConfigVisitor(
    (AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *const)(v3 + 32),
    txt_config_mgr);
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor::ProudCookConfigVisitor(
    (AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *const)(v3 + 64),
    txt_config_mgr);
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor::ProudForgeConfigVisitor(
    (AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *const)(v3 + 96),
    txt_config_mgr);
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor::ProudExpeditionConfigVisitor(
    (AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *const)(v3 + 128),
    txt_config_mgr);
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudFurnitureMakeConfigVisitor::ProudFurnitureMakeConfigVisitor(
    (AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudFurnitureMakeConfigVisitor *const)(v3 + 160),
    txt_config_mgr);
  __for_range = &this->proud_weapon_promote_reduce_scoin_config_map;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(std::unordered_map<unsigned int,LifeEffectWeaponPromoteReduceScoin>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,LifeEffectWeaponPromoteReduceScoin>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 224, txt_config_mgr);
  *(std::unordered_map<unsigned int,LifeEffectWeaponPromoteReduceScoin>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,LifeEffectWeaponPromoteReduceScoin>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 224);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,LifeEffectWeaponPromoteReduceScoin>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,LifeEffectWeaponPromoteReduceScoin>,false> *)(v3 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,LifeEffectWeaponPromoteReduceScoin>,false> *)(v3 + 224)) )
    {
      v11 = 1;
      goto LABEL_23;
    }
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectWeaponPromoteReduceScoin>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectWeaponPromoteReduceScoin>,false,false> *const)(v3 + 192));
    proud_skill_id = std::get<0ul,unsigned int const,LifeEffectWeaponPromoteReduceScoin>(v26);
    config = (std::tuple_element<1,const std::pair<unsigned int const,LifeEffectWeaponPromoteReduceScoin> >::type *)std::get<1ul,unsigned int const,LifeEffectWeaponPromoteReduceScoin>(v26);
    if ( std::set<data::WeaponType>::empty(&config->weapon_type_set) )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)&config->reduce_ratio >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->reduce_ratio >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->reduce_ratio);
    }
    if ( config->reduce_ratio > 1.0 || config->reduce_ratio <= 0.0 )
LABEL_15:
      v7 = 1;
    else
      v7 = 0;
    if ( v7 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectWeaponPromoteReduceScoin>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectWeaponPromoteReduceScoin>,false,false> *const)(v3 + 192));
  }
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
    "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
    "checkLifeEffectConfig",
    1021);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 384),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])"proud_skill_id:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, proud_skill_id);
  v6 = " invalid param";
  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" invalid param");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
  *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v11 = 0;
LABEL_23:
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
  {
    __for_range_0 = &this->proud_fishing_extra_output_config_map;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v6);
    *(std::unordered_map<unsigned int,LifeEffectFishingExtraOutput>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,LifeEffectFishingExtraOutput>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v6);
    *(std::unordered_map<unsigned int,LifeEffectFishingExtraOutput>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,LifeEffectFishingExtraOutput>::end(__for_range_0);
    while ( 1 )
    {
      v12 = (const char *)(v3 + 288);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false> *)(v3 + 256),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false> *)(v3 + 288)) )
      {
        v17 = 1;
        goto LABEL_46;
      }
      v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false,false> *const)(v3 + 256));
      proud_skill_id_0 = std::get<0ul,unsigned int const,LifeEffectFishingExtraOutput>(v30);
      config_0 = (std::tuple_element<1,const std::pair<unsigned int const,LifeEffectFishingExtraOutput> >::type *)std::get<1ul,unsigned int const,LifeEffectFishingExtraOutput>(v30);
      if ( std::set<unsigned int>::empty(&config_0->city_id_set) )
        goto LABEL_38;
      if ( *(_BYTE *)(((unsigned __int64)&config_0->probability >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_0->probability >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_0->probability);
      }
      if ( config_0->probability < 0.0 || config_0->probability > 1.0 )
        goto LABEL_38;
      if ( *(_BYTE *)(((unsigned __int64)&config_0->extra_item_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_0 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_0->extra_item_count >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&config_0->extra_item_count);
      }
      if ( config_0->extra_item_count == 1 )
        v13 = 0;
      else
LABEL_38:
        v13 = 1;
      if ( v13 )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectFishingExtraOutput>,false,false> *const)(v3 + 256));
    }
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
      "checkLifeEffectConfig",
      1032);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 448),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])"proud_skill_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, proud_skill_id_0);
    v12 = " invalid param";
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" invalid param");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_46:
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v17 == 1 )
    {
      __for_range_1 = &this->proud_hit_tree_extra_output_config_map;
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 320, v12);
      *(std::unordered_map<unsigned int,LifeEffectHitTreeExtraOutput>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,LifeEffectHitTreeExtraOutput>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v12);
      *(std::unordered_map<unsigned int,LifeEffectHitTreeExtraOutput>::iterator *)(v3 + 352) = std::unordered_map<unsigned int,LifeEffectHitTreeExtraOutput>::end(__for_range_1);
      while ( 1 )
      {
        if ( !std::__detail::operator!=<std::pair<unsigned int const,LifeEffectHitTreeExtraOutput>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,LifeEffectHitTreeExtraOutput>,false> *)(v3 + 320),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,LifeEffectHitTreeExtraOutput>,false> *)(v3 + 352)) )
        {
          v22 = 1;
          goto LABEL_65;
        }
        v34 = std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectHitTreeExtraOutput>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectHitTreeExtraOutput>,false,false> *const)(v3 + 320));
        proud_skill_id_1 = std::get<0ul,unsigned int const,LifeEffectHitTreeExtraOutput>(v34);
        v18 = (std::tuple_element<1,std::pair<unsigned int const,LifeEffectHitTreeExtraOutput> >::type *)std::get<1ul,unsigned int const,LifeEffectHitTreeExtraOutput>(v34);
        config_1 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        if ( config_1->probability < 0.0 || config_1->probability > 1.0 )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&config_1->extra_item_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_1->extra_item_count >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&config_1->extra_item_count);
        }
        if ( config_1->extra_item_count != 1 )
          break;
        std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectHitTreeExtraOutput>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,LifeEffectHitTreeExtraOutput>,false,false> *const)(v3 + 320));
      }
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
        "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
        "checkLifeEffectConfig",
        1043);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v19, (const char (*)[16])"proud_skill_id:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, proud_skill_id_1);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v21, (const char (*)[15])" invalid param");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v22 = 0;
LABEL_65:
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      if ( v22 == 1 )
      {
        if ( checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>(
               (AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *)(v3 + 32),
               &this->proud_combine_config_map)
          || checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor,std::variant<LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>>(
               (AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *)(v3 + 64),
               &this->proud_cook_config_map)
          || checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>(
               (AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *)(v3 + 96),
               &this->proud_forge_config_map)
          || checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>(
               (AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *)(v3 + 128),
               &this->proud_expedition_config_map)
          || checkProudLifeEffectConfigMap<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudFurnitureMakeConfigVisitor,std::variant<LifeEffectFurnitureMakeReturnMaterial>>(
               (AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudFurnitureMakeConfigVisitor *)(v3 + 160),
               &this->proud_furniture_make_config_map) )
        {
          v2 = -1;
        }
        else
        {
          v2 = 0;
        }
      }
    }
  }
  result = v2;
  if ( v37 == (char *)v3 )
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
  }
  return result;
};

// Line 792: range 0000000012E87CEC-0000000012E87D2A
void __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::BaseConfigVisitor::BaseConfigVisitor(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::BaseConfigVisitor *const this,
        const TxtConfigMgr *mgr)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, mgr);
  this->txt_config_mgr = mgr;
};

// Line 798: range 0000000012E883A8-0000000012E883CD
void __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor::ProudCombineConfigVisitor(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *const this,
        const TxtConfigMgr *a2)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::BaseConfigVisitor::BaseConfigVisitor(this, a2);
};

// Line 799: range 0000000012E87D2C-0000000012E87DC8
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *const this,
        const LifeEffectCombineReturnMaterial *config)
{
  char v2; // al

  if ( std::vector<unsigned int>::empty(&config->combine_type_vec) )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&config->return_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->return_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->return_ratio);
  }
  if ( config->return_ratio <= 0.0 || config->return_ratio > 1.0 )
LABEL_6:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
    return -1;
  else
    return 0;
};

// Line 807: range 0000000012E87DCA-0000000012E87E62
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *const this,
        const LifeEffectCombineMultiplyOutput *config)
{
  char v2; // al

  if ( std::vector<unsigned int>::empty(&config->combine_type_vec) )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&config->multiply_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->multiply_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->multiply_ratio);
  }
  if ( config->multiply_ratio <= 0.0 || config->multiply_ratio > 10.0 )
LABEL_6:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
    return -1;
  else
    return 0;
};

// Line 815: range 0000000012E87E64-0000000012E87EC6
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *const this,
        const LifeEffectCombineAddExtraProb *config)
{
  if ( *(_BYTE *)(((unsigned __int64)&config->add_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->add_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->add_prob);
  }
  if ( config->add_prob >= 0.0 )
    return 0;
  else
    return -1;
};

// Line 823: range 0000000012E87EC8-0000000012E883A6
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *const this,
        const LifeEffectCombineReturnSpecialMaterial *config)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::CombineExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CombineExcelConfig> >::type *combine_config; // [rsp+28h] [rbp-118h]
  char v15[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:830 64 8 13 __for_end:830 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  if ( std::vector<unsigned int>::empty(&config->combine_type_vec) )
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
      "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
      "operator()",
      827);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v6,
      (const char (*)[27])"combine_type_vec is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    v2 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    __for_range = &this->txt_config_mgr->combine_config_mgr.combine_excel_config_map;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 32, config);
    *(std::unordered_map<unsigned int,data::CombineExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::CombineExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, config);
    *(std::unordered_map<unsigned int,data::CombineExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CombineExcelConfig>::end(__for_range);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CombineExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombineExcelConfig>,false> *)(v3 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombineExcelConfig>,false> *)(v3 + 64)) )
      {
        v10 = 1;
        goto LABEL_26;
      }
      v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false> *const)(v3 + 32));
      std::get<0ul,unsigned int const,data::CombineExcelConfig>(v13);
      combine_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CombineExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CombineExcelConfig>(v13);
      if ( common::tools::MiscUtils::isContains<unsigned int>(&config->combine_type_vec, &combine_config->combine_type)
        && std::vector<unsigned int>::empty(&combine_config->special_output_items) )
      {
        break;
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false> *const)(v3 + 32));
    }
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
      "operator()",
      835);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v9 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
           v8,
           (const char (*)[72])"special_output_items is need by avatar talent but is empty! combine_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &combine_config->combine_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    v2 = -1;
    v10 = 0;
LABEL_26:
    if ( v10 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 846: range 0000000012E88870-0000000012E88895
void __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor::ProudCookConfigVisitor(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *const this,
        const TxtConfigMgr *a2)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::BaseConfigVisitor::BaseConfigVisitor(this, a2);
};

// Line 847: range 0000000012E883CE-0000000012E88424
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *const this,
        const LifeEffectCookExtraProficiency *config)
{
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  if ( config->extra_proficiency )
    return 0;
  else
    return -1;
};

// Line 855: range 0000000012E88426-0000000012E88483
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *const this,
        const LifeEffectCookWidenJudgeArea *config)
{
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  if ( config->widen_ratio > 0.0 )
    return 0;
  else
    return -1;
};

// Line 863: range 0000000012E88484-0000000012E884E1
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *const this,
        const LifeEffectCookAddBonusProb *config)
{
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  if ( config->add_bonus_prob > 0.0 )
    return 0;
  else
    return -1;
};

// Line 871: range 0000000012E884E2-0000000012E88554
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *const this,
        const LifeEffectCookPerfectMultiOutput *config)
{
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  if ( config->probability > 0.0 && config->probability <= 1.0 )
    return 0;
  else
    return -1;
};

// Line 879: range 0000000012E88556-0000000012E8885B
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *const this,
        const LifeEffectCookProbMultiOutput *config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  if ( config->probability <= 0.0 || config->probability > 1.0 )
    goto LABEL_25;
  if ( *(_BYTE *)(((unsigned __int64)&config->extra_cook_output_item_quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->extra_cook_output_item_quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->extra_cook_output_item_quality);
  }
  if ( !config->extra_cook_output_item_quality || config->extra_cook_output_item_quality > 3 )
    goto LABEL_25;
  if ( *(_BYTE *)(((unsigned __int64)&config->extra_cook_output_item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->extra_cook_output_item_count >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(&config->extra_cook_output_item_count);
  }
  if ( config->extra_cook_output_item_count && config->extra_cook_output_item_count <= 0x64 )
  {
    result = 0;
  }
  else
  {
LABEL_25:
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
      "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
      "operator()",
      885);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           v5,
           (const char (*)[30])"extra_cook_output_item_count:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v6,
           &config->extra_cook_output_item_count);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" is too big");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  if ( v9 == (char *)v2 )
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

// Line 890: range 0000000012E8885C-0000000012E8886E
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *const this,
        const LifeEffectCookCanNotCook *config)
{
  return 0;
};

// Line 899: range 0000000012E889D2-0000000012E889F7
void __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor::ProudForgeConfigVisitor(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *const this,
        const TxtConfigMgr *a2)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::BaseConfigVisitor::BaseConfigVisitor(this, a2);
};

// Line 900: range 0000000012E88896-0000000012E8890E
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *const this,
        const LifeEffectForgeReduceTime *config)
{
  if ( *(_BYTE *)(((unsigned __int64)&config->reduce_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->reduce_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->reduce_ratio);
  }
  if ( config->reduce_ratio > 0.0 && config->reduce_ratio <= 1.0 )
    return 0;
  else
    return -1;
};

// Line 908: range 0000000012E88910-0000000012E88972
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *const this,
        const LifeEffectForgeAddExtraProb *config)
{
  if ( *(_BYTE *)(((unsigned __int64)&config->add_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->add_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->add_prob);
  }
  if ( config->add_prob > 0.0 )
    return 0;
  else
    return -1;
};

// Line 916: range 0000000012E88974-0000000012E889D1
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *const this,
        const LifeEffectForgeReturnMaterial *config)
{
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  if ( config->probability > 0.0 )
    return 0;
  else
    return -1;
};

// Line 929: range 0000000012E895AE-0000000012E895D3
void __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor::ProudExpeditionConfigVisitor(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *const this,
        const TxtConfigMgr *a2)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::BaseConfigVisitor::BaseConfigVisitor(this, a2);
};

// Line 930: range 0000000012E889F8-0000000012E88AB9
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *const this,
        const LifeEffectExpeditionShortenTime *config)
{
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(config);
  }
  if ( !config->city_id )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&config->shorten_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->shorten_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->shorten_ratio);
  }
  if ( config->shorten_ratio >= 0.0 && config->shorten_ratio <= 1.0 )
    return 0;
  else
    return -1;
};

// Line 939: range 0000000012E88ABA-0000000012E895AD
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *const this,
        const LifeEffectExpeditionExtraOutput *config)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  __int64 city_id; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  char *v10; // rsi
  uint32_t htime; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  bool has_effective_expedition_hour_count; // [rsp+1Fh] [rbp-201h]
  data::ExpeditionDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-200h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false>::reference v25; // [rsp+28h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionDataExcelConfig> >::type *expedition_config; // [rsp+38h] [rbp-1E8h]
  const std::vector<data::ExpeditionReward> *__for_range_0; // [rsp+40h] [rbp-1E0h]
  const data::ExpeditionReward *time_reward_config; // [rsp+48h] [rbp-1D8h]
  char v29[464]; // [rsp+50h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 15 __for_begin:946 64 8 13 __for_end:946 96 8 15 __for_begin:949 128 8 13 __for_end:949 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  p_world_area_config_mgr = &this->txt_config_mgr->world_area_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(config);
  }
  city_id = config->city_id;
  if ( WorldAreaExcelConfigMgr::findCityConfig(p_world_area_config_mgr, city_id) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    __for_range = &this->txt_config_mgr->expedition_config_mgr.expedition_data_excel_config_map;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 32, city_id);
    *(std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, city_id);
    *(std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::end(__for_range);
    while ( 1 )
    {
      v10 = (char *)(v3 + 64);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false> *)(v3 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false> *)(v3 + 64)) )
      {
        v16 = 1;
        goto LABEL_39;
      }
      v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false> *const)(v3 + 32));
      std::get<0ul,unsigned int const,data::ExpeditionDataExcelConfig>(v25);
      expedition_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExpeditionDataExcelConfig>(v25);
      has_effective_expedition_hour_count = 0;
      __for_range_0 = &expedition_config->time_reward_vec;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v10);
      *(std::vector<data::ExpeditionReward>::const_iterator *)(v3 + 96) = std::vector<data::ExpeditionReward>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v10);
      *(std::vector<data::ExpeditionReward>::const_iterator *)(v3 + 128) = std::vector<data::ExpeditionReward>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<data::ExpeditionReward const*,std::vector<data::ExpeditionReward>>(
                (const __gnu_cxx::__normal_iterator<const data::ExpeditionReward*,std::vector<data::ExpeditionReward> > *)(v3 + 96),
                (const __gnu_cxx::__normal_iterator<const data::ExpeditionReward*,std::vector<data::ExpeditionReward> > *)(v3 + 128)) )
      {
        time_reward_config = __gnu_cxx::__normal_iterator<data::ExpeditionReward const*,std::vector<data::ExpeditionReward>>::operator*((const __gnu_cxx::__normal_iterator<const data::ExpeditionReward*,std::vector<data::ExpeditionReward> > *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&time_reward_config->htime >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&time_reward_config->htime >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&time_reward_config->htime);
        }
        htime = time_reward_config->htime;
        if ( *(_BYTE *)(((unsigned __int64)&config->effective_expedition_hour_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->effective_expedition_hour_count >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&config->effective_expedition_hour_count);
        }
        if ( htime == config->effective_expedition_hour_count )
        {
          has_effective_expedition_hour_count = 1;
          break;
        }
        __gnu_cxx::__normal_iterator<data::ExpeditionReward const*,std::vector<data::ExpeditionReward>>::operator++((__gnu_cxx::__normal_iterator<const data::ExpeditionReward*,std::vector<data::ExpeditionReward> > *const)(v3 + 96));
      }
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( !has_effective_expedition_hour_count )
        break;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false> *const)(v3 + 32));
    }
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
      "operator()",
      959);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            v12,
            (const char (*)[33])"effective_expedition_hour_count:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v13,
            &config->effective_expedition_hour_count);
    v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v14,
            (const char (*)[29])" not found in expedition_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &expedition_config->id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_39:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v16 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->probability >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->probability >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->probability);
      }
      if ( config->probability >= 0.0 && config->probability <= 1.0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->extra_ratio >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->extra_ratio >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->extra_ratio);
        }
        if ( config->extra_ratio > 0.0 && config->extra_ratio < 1.0 )
        {
          v2 = 0;
        }
        else
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
            "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
            "operator()",
            970);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v19,
                  (const char (*)[21])"invalid extra_ratio:");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v20, &config->extra_ratio);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          v2 = -1;
        }
      }
      else
      {
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
          "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
          "operator()",
          965);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v17,
                (const char (*)[21])"invalid probability:");
        common::milog::MiLogStream::operator<<<float,(float *)0>(v18, &config->probability);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        v2 = -1;
      }
    }
  }
  else
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
      "operator()",
      943);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           v8,
           (const char (*)[30])"findCityConfig fail, city_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->city_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    v2 = -1;
  }
  result = v2;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
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

// Line 980: range 0000000012E8A0D0-0000000012E8A0F5
void __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudFurnitureMakeConfigVisitor::ProudFurnitureMakeConfigVisitor(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudFurnitureMakeConfigVisitor *const this,
        const TxtConfigMgr *a2)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::BaseConfigVisitor::BaseConfigVisitor(this, a2);
};

// Line 981: range 0000000012E895D4-0000000012E8A0CF
int32_t __cdecl AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudFurnitureMakeConfigVisitor::operator()(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudFurnitureMakeConfigVisitor *const this,
        const LifeEffectFurnitureMakeReturnMaterial *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rdi
  uint32_t furniture_item_id; // esi
  char *v8; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  uint32_t *p_count; // rax
  double v14; // xmm0_8
  float return_ratio; // xmm1_4
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  int32_t result; // eax
  bool is_category_match; // [rsp+13h] [rbp-1EDh]
  int32_t ret; // [rsp+14h] [rbp-1ECh]
  data::FurnitureMakeExcelConfigMap *__for_range; // [rsp+18h] [rbp-1E8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false>::reference v32; // [rsp+20h] [rbp-1E0h]
  std::tuple_element<0,std::pair<unsigned int const,data::FurnitureMakeExcelConfig> >::type *furniture_make_config_id; // [rsp+28h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FurnitureMakeExcelConfig> >::type *furniture_make_config; // [rsp+30h] [rbp-1D0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1C8h]
  const std::vector<data::IdCountConfig> *__for_range_1; // [rsp+40h] [rbp-1C0h]
  const data::IdCountConfig *id_count_config; // [rsp+48h] [rbp-1B8h]
  char v38[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 4 17 category_type:988 48 4 30 total_material_item_count:1000 64 8 15 __for_begin:984 96 8"
                        " 13 __for_end:984 128 8 15 __for_begin:988 160 8 13 __for_end:988 192 8 16 __for_begin:1001 224 "
                        "8 14 __for_end:1001 256 24 21 category_type_vec:986 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudFurnitureMakeConfigVisitor::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  __for_range = &this->txt_config_mgr->home_config_mgr.furniture_make_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, config);
  *(std::unordered_map<unsigned int,data::FurnitureMakeExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FurnitureMakeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, config);
  *(std::unordered_map<unsigned int,data::FurnitureMakeExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FurnitureMakeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false> *)(v2 + 96)) )
  {
    v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false> *const)(v2 + 64));
    furniture_make_config_id = std::get<0ul,unsigned int const,data::FurnitureMakeExcelConfig>(v32);
    furniture_make_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FurnitureMakeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FurnitureMakeExcelConfig>(v32);
    v5 = ((v2 + 256) >> 3) + 2147450880;
    *(_WORD *)v5 = 0;
    *(_BYTE *)(v5 + 2) = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    p_home_config_mgr = &this->txt_config_mgr->home_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&furniture_make_config->furniture_item_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)furniture_make_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture_make_config->furniture_item_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      p_home_config_mgr = (HomeWorldExcelConfigMgr *)&furniture_make_config->furniture_item_id;
      __asan_report_load4(&furniture_make_config->furniture_item_id);
    }
    furniture_item_id = furniture_make_config->furniture_item_id;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 279) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 23) & 7) >= *(_BYTE *)(((v2 + 279) >> 3) + 0x7FFF8000) )
    {
      furniture_item_id = 24;
      p_home_config_mgr = (HomeWorldExcelConfigMgr *)(v2 + 256);
      __asan_report_store_n(v2 + 256, 24LL);
    }
    HomeWorldExcelConfigMgr::getFurnitureTypeCategoryVec(
      (std::vector<unsigned int> *)(v2 + 256),
      p_home_config_mgr,
      furniture_item_id);
    is_category_match = 0;
    __for_range_0 = (std::vector<unsigned int> *)(v2 + 256);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, p_home_config_mgr);
    *(std::vector<unsigned int>::iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, p_home_config_mgr);
    *(std::vector<unsigned int>::iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v8 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
      v10 = (int *)v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = *v10;
      v12 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v8) = v12 != 0;
        __asan_report_store4(v2 + 32, v8);
      }
      *(_DWORD *)(v2 + 32) = v11;
      v8 = (char *)(v2 + 32);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &config->furniture_category_set,
             (const unsigned int *)(v2 + 32)) )
      {
        is_category_match = 1;
        break;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( is_category_match )
    {
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 48, v8);
      *(_DWORD *)(v2 + 48) = 0;
      __for_range_1 = &furniture_make_config->material_items;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v8);
      *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 192) = std::vector<data::IdCountConfig>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 224, v8);
      *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 224) = std::vector<data::IdCountConfig>::end(__for_range_1);
      while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 192),
                (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 224)) )
      {
        id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 192));
        p_count = &id_count_config->count;
        if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_count);
        }
        *(float *)&v14 = (float)(int)id_count_config->count;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          v14 = __asan_report_load4(v2 + 48);
        *(float *)(v2 + 48) = *(float *)&v14 + *(float *)(v2 + 48);
        __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 192));
      }
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&config->return_ratio >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->return_ratio >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->return_ratio);
      }
      return_ratio = config->return_ratio;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      if ( (float)(return_ratio * *(float *)(v2 + 48)) < 1.0 )
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
          "./src/txt_data_manual/AvatarTalentExcelConfig.cpp",
          "operator()",
          1007);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v16,
                (const char (*)[26])"furniture_make config_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, furniture_make_config_id);
        v19 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v18,
                (const char (*)[23])" total material count:");
        v20 = common::milog::MiLogStream::operator<<<float,(float *)0>(v19, (const float *)(v2 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" is too small!");
        v22 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                v21,
                (const char (*)[27])" effective proud_skill_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->proud_skill_id);
        v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])" return_ratio:");
        common::milog::MiLogStream::operator<<<float,(float *)0>(v24, &config->return_ratio);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
    v25 = ((v2 + 256) >> 3) + 2147450880;
    *(_WORD *)v25 = -1800;
    *(_BYTE *)(v25 + 2) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v38 == (char *)v2 )
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
