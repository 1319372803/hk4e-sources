// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AvatarSkillExcelConfig.cpp

// Line 22: range 0000000012E78398-0000000012E785AC
int32_t __cdecl AvatarSkillExcelConfigMgr::checkConfig(
        AvatarSkillExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarSkillExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = AvatarSkillExcelConfigMgr::checkAvatarSkillDepotExcelConfig(this, txt_config_mgr) != 0;
  if ( v5 | (AvatarSkillExcelConfigMgr::checkAvatarSkillExcelConfig(this, txt_config_mgr) != 0) )
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
      "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
      "checkConfig",
      26);
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

// Line 34: range 0000000012E785AE-0000000012E787C2
int32_t __cdecl AvatarSkillExcelConfigMgr::rewriteConfig(
        AvatarSkillExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarSkillExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = AvatarSkillExcelConfigMgr::rewriteAvatarSkillExcelConfig(this, txt_config_mgr) != 0;
  if ( v5 | (AvatarSkillExcelConfigMgr::rewriteAvatarSkillDepotExcelConfig(this, txt_config_mgr) != 0) )
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
      "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
      "rewriteConfig",
      38);
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

// Line 47: range 0000000012E787C4-0000000012E789B2
bool __fastcall AvatarSkillExcelConfigMgr::isTalentExistInSkillDepot(
        const AvatarSkillExcelConfigMgr *const this,
        __int64 skill_depot_id,
        uint32_t talent_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_skill_depot_talent_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::set<unsigned int> *talent_set; // [rsp+18h] [rbp-A8h]
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 17 skill_depot_id:46 48 4 12 talent_id:46 64 8 5 it:48 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarSkillExcelConfigMgr::isTalentExistInSkillDepot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = skill_depot_id;
  *(_DWORD *)(v3 + 48) = talent_id;
  p_skill_depot_talent_map = &this->skill_depot_talent_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, skill_depot_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_skill_depot_talent_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->skill_depot_talent_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    talent_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64))->second;
    result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
               talent_set,
               (const unsigned int *)(v3 + 48));
  }
  if ( v12 == (char *)v3 )
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

// Line 59: range 0000000012E789B4-0000000012E78B52
bool __fastcall AvatarSkillExcelConfigMgr::isProudSkillGroupExistInSkillDepot(
        const AvatarSkillExcelConfigMgr *const this,
        __int64 skill_depot_id,
        uint32_t proud_skill_group_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_skill_depot_proud_skill_group_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool result; // al
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 17 skill_depot_id:58 64 8 5 it:60 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarSkillExcelConfigMgr::isProudSkillGroupExistInSkillDepot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = skill_depot_id;
  p_skill_depot_proud_skill_group_map = &this->skill_depot_proud_skill_group_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, skill_depot_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_skill_depot_proud_skill_group_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->skill_depot_proud_skill_group_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  if ( v9 == (char *)v3 )
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

// Line 66: range 0000000012E78B54-0000000012E78CD2
_BOOL8 __fastcall AvatarSkillExcelConfigMgr::isSkillIdExistInSkillDepot(
        const AvatarSkillExcelConfigMgr *const this,
        uint32_t skill_depot_id,
        uint32_t skill_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  _BOOL8 result; // rax
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+18h] [rbp-68h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 skill_id:65";
  *(_QWORD *)(v3 + 16) = AvatarSkillExcelConfigMgr::isSkillIdExistInSkillDepot;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = skill_id;
  avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                    this,
                                    skill_depot_id);
  if ( avatar_skill_depot_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_skill_depot_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3)
                                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_skill_depot_config_ptr->energy_skill);
    }
    result = avatar_skill_depot_config_ptr->energy_skill
          && avatar_skill_depot_config_ptr->energy_skill == *(_DWORD *)(v3 + 32)
          || common::tools::MiscUtils::isContains<unsigned int>(
               &avatar_skill_depot_config_ptr->skills,
               (const unsigned int *)(v3 + 32))
          || common::tools::MiscUtils::isContains<unsigned int>(
               &avatar_skill_depot_config_ptr->sub_skills,
               (const unsigned int *)(v3 + 32));
  }
  else
  {
    result = 0LL;
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 79: range 0000000012E78CD4-0000000012E78EDE
bool __fastcall AvatarSkillExcelConfigMgr::isCoreProudSkillPromoteEnough(
        const AvatarSkillExcelConfigMgr *const this,
        __int64 skill_depot_id,
        uint32_t avatar_promote_level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,unsigned int> *p_core_proud_skill_open_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  char v13[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 17 skill_depot_id:78 64 8 5 it:80 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarSkillExcelConfigMgr::isCoreProudSkillPromoteEnough;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = skill_depot_id;
  p_core_proud_skill_open_map = &this->core_proud_skill_open_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, skill_depot_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_core_proud_skill_open_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = &this->core_proud_skill_open_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = avatar_promote_level >= v10->second;
  }
  if ( v13 == (char *)v3 )
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

// Line 90: range 0000000012E78EE0-0000000012E79094
const std::set<unsigned int> *__fastcall AvatarSkillExcelConfigMgr::findSkillDepotTalentSet(
        const AvatarSkillExcelConfigMgr *const this,
        __int64 skill_depot_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_skill_depot_talent_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 17 skill_depot_id:89 64 8 7 iter:91 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarSkillExcelConfigMgr::findSkillDepotTalentSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = skill_depot_id;
  p_skill_depot_talent_map = &this->skill_depot_talent_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, skill_depot_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_skill_depot_talent_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->skill_depot_talent_map;
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

// Line 96: range 0000000012E79096-0000000012E790A8
int32_t __cdecl AvatarSkillExcelConfigMgr::rewriteAvatarSkillExcelConfig(
        AvatarSkillExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 102: range 0000000012E790AA-0000000012E79489
int32_t __cdecl AvatarSkillExcelConfigMgr::checkAvatarSkillExcelConfig(
        AvatarSkillExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::AvatarSkillExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarSkillExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarSkillExcelConfig> >::type *skill_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarSkillExcelConfig> >::type *skill_config; // [rsp+38h] [rbp-C8h]
  char v16[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:104 64 8 13 __for_end:104 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarSkillExcelConfigMgr::checkAvatarSkillExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->avatar_skill_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarSkillExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::AvatarSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarSkillExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarSkillExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AvatarSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarSkillExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarSkillExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarSkillExcelConfig>,false,false> *const)(v2 + 32));
    skill_id = std::get<0ul,unsigned int const,data::AvatarSkillExcelConfig>(v13);
    skill_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarSkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarSkillExcelConfig>(v13);
    if ( *(_BYTE *)(((unsigned __int64)&skill_config->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&skill_config->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&skill_config->proud_skill_group_id);
    }
    if ( skill_config->proud_skill_group_id
      && !AvatarTalentExcelConfigMgr::findProudSkillSetByGroupId(
            &txt_config_mgr->avatar_talent_config_mgr,
            skill_config->proud_skill_group_id) )
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
        "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
        "checkAvatarSkillExcelConfig",
        109);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v6, (const char (*)[39])byte_1AABD300);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, skill_id);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])byte_1AABD360);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &skill_config->proud_skill_group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarSkillExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v16 == (char *)v2 )
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

// Line 119: range 0000000012E7948A-0000000012E79CC8
int32_t __cdecl AvatarSkillExcelConfigMgr::rewriteAvatarSkillDepotExcelConfig(
        AvatarSkillExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::set<unsigned int> *v6; // r15
  const unsigned int *M_current; // rsi
  unsigned int *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  AvatarTalentExcelConfigMgr *p_avatar_talent_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  std::set<unsigned int> *v20; // rax
  std::set<unsigned int> *v21; // rax
  int32_t result; // eax
  const unsigned int *__last; // [rsp+8h] [rbp-1A8h]
  data::AvatarSkillDepotExcelConfigMap *__for_range; // [rsp+20h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-188h]
  const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *depot_id; // [rsp+30h] [rbp-180h]
  std::tuple_element<1,std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig> >::type *skill_depot_config; // [rsp+38h] [rbp-178h]
  std::vector<data::ProudSkillOpenConfig> *__for_range_0; // [rsp+50h] [rbp-160h]
  const data::ProudSkillOpenConfig *proud_skill_open_config; // [rsp+58h] [rbp-158h]
  char v31[336]; // [rsp+60h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:120 64 8 13 __for_end:120 96 8 15 __for_begin:152 128 8 13 __for_end:152 1"
                        "60 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarSkillExcelConfigMgr::rewriteAvatarSkillDepotExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->avatar_skill_depot_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarSkillDepotExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::AvatarSkillDepotExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarSkillDepotExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AvatarSkillDepotExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false> *)(v3 + 64)) )
    {
      v14 = 1;
      goto LABEL_33;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false,false> *const)(v3 + 32));
    depot_id = std::get<0ul,unsigned int const,data::AvatarSkillDepotExcelConfig>(__in);
    skill_depot_config = std::get<1ul,unsigned int const,data::AvatarSkillDepotExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<unsigned int>(&skill_depot_config->skills);
    common::tools::MiscUtils::removeEmptyElement<unsigned int>(&skill_depot_config->talents);
    common::tools::MiscUtils::removeEmptyElement<data::ProudSkillOpenConfig,unsigned int data::ProudSkillOpenConfig::*>(
      &skill_depot_config->inherent_proud_skill_opens,
      (unsigned int *)8);
    v6 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](&this->skill_depot_talent_map, depot_id);
    __last = std::vector<unsigned int>::end(&skill_depot_config->talents)._M_current;
    M_current = std::vector<unsigned int>::begin(&skill_depot_config->talents)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      v6,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last);
    if ( *(_BYTE *)(((unsigned __int64)&skill_depot_config->core_proud_skill_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&skill_depot_config->core_proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&skill_depot_config->core_proud_skill_group_id);
    }
    if ( skill_depot_config->core_proud_skill_group_id )
      break;
LABEL_24:
    __for_range_0 = &skill_depot_config->inherent_proud_skill_opens;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, M_current);
    *(std::vector<data::ProudSkillOpenConfig>::iterator *)(v3 + 96) = std::vector<data::ProudSkillOpenConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, M_current);
    *(std::vector<data::ProudSkillOpenConfig>::iterator *)(v3 + 128) = std::vector<data::ProudSkillOpenConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::ProudSkillOpenConfig *,std::vector<data::ProudSkillOpenConfig>>(
              (const __gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *)(v3 + 128)) )
    {
      proud_skill_open_config = __gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig *,std::vector<data::ProudSkillOpenConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *const)(v3 + 96));
      v21 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
              &this->skill_depot_proud_skill_group_map,
              depot_id);
      std::set<unsigned int>::insert(v21, &proud_skill_open_config->proud_skill_group_id);
      __gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig *,std::vector<data::ProudSkillOpenConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *const)(v3 + 96));
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false,false> *const)(v3 + 32));
  }
  v9 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
         &this->core_proud_skill_open_map,
         depot_id,
         &skill_depot_config->core_proud_avatar_promote_level,
         (const unsigned int *)&this->core_proud_skill_open_map,
         v8);
  if ( !v9.second )
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
      "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
      "rewriteAvatarSkillDepotExcelConfig",
      135);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 160),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v11 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v10, (const char (*)[52])byte_1AABD4A0);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, depot_id);
    v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])byte_1AABD500);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v13,
      &skill_depot_config->core_proud_skill_group_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    v2 = -1;
    v14 = 0;
    goto LABEL_33;
  }
  p_avatar_talent_config_mgr = &txt_config_mgr->avatar_talent_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&skill_depot_config->core_proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&skill_depot_config->core_proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&skill_depot_config->core_proud_skill_group_id);
  }
  if ( AvatarTalentExcelConfigMgr::findProudSkillSetByGroupId(
         p_avatar_talent_config_mgr,
         skill_depot_config->core_proud_skill_group_id) )
  {
    v20 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
            &this->skill_depot_proud_skill_group_map,
            depot_id);
    M_current = &skill_depot_config->core_proud_skill_group_id;
    std::set<unsigned int>::insert(v20, &skill_depot_config->core_proud_skill_group_id);
    goto LABEL_24;
  }
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
    "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
    "rewriteAvatarSkillDepotExcelConfig",
    145);
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v17 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v16, (const char (*)[30])byte_1AABD540);
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v17,
          &skill_depot_config->core_proud_skill_group_id);
  v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])byte_1AABD580);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, depot_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v14 = 0;
LABEL_33:
  if ( v14 == 1 )
    v2 = 0;
  result = v2;
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 165: range 0000000012E79CCA-0000000012E7AC04
int32_t __cdecl AvatarSkillExcelConfigMgr::checkAvatarSkillDepotExcelConfig(
        const AvatarSkillExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  const TxtConfigMgr *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // edx
  uint32_t v20; // edi
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  uint32_t v24; // edi
  uint32_t need_avatar_promote_level; // ecx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  int32_t result; // eax
  uint32_t core_proud_skill_group_id; // [rsp+1Ch] [rbp-2B4h]
  JsonConfigMgr *json_config_mgr; // [rsp+20h] [rbp-2B0h]
  data::AvatarSkillDepotExcelConfigMap *__for_range; // [rsp+28h] [rbp-2A8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false,false>::reference v42; // [rsp+30h] [rbp-2A0h]
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig> >::type *depot_id; // [rsp+38h] [rbp-298h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig> >::type *skill_depot_config; // [rsp+40h] [rbp-290h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-288h]
  const std::vector<data::ProudSkillOpenConfig> *__for_range_1; // [rsp+50h] [rbp-280h]
  const data::ProudSkillOpenConfig *proud_skill_open_config; // [rsp+58h] [rbp-278h]
  char v48[624]; // [rsp+60h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 13 talent_id:176 64 8 15 __for_begin:167 96 8 13 __for_end:167 128 8 15 __for_begin:176 "
                        "160 8 13 __for_end:176 192 8 15 __for_begin:195 224 8 13 __for_end:195 256 32 9 <unknown> 320 32"
                        " 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarSkillExcelConfigMgr::checkAvatarSkillDepotExcelConfig;
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
  v5[536862737] = -202116109;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  __for_range = &this->avatar_skill_depot_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarSkillDepotExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AvatarSkillDepotExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarSkillDepotExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::AvatarSkillDepotExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false> *)(v3 + 96)) )
    {
      v9 = 1;
      goto LABEL_76;
    }
    v42 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false,false> *const)(v3 + 64));
    depot_id = std::get<0ul,unsigned int const,data::AvatarSkillDepotExcelConfig>(v42);
    skill_depot_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarSkillDepotExcelConfig>(v42);
    if ( std::vector<unsigned int>::size(&skill_depot_config->skills) > 4 )
    {
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
        "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
        "checkAvatarSkillDepotExcelConfig",
        171);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v7, (const char (*)[56])byte_1AABD740);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, depot_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
      v9 = 0;
      goto LABEL_76;
    }
    __for_range_0 = &skill_depot_config->talents;
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
      v10 = (const TxtConfigMgr *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v19 = 1;
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
      if ( !data::AvatarTalentExcelConfigMgrBase::findAvatarTalentExcelConfig(
              &txt_config_mgr->avatar_talent_config_mgr,
              *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
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
      "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
      "checkAvatarSkillDepotExcelConfig",
      180);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v15, (const char (*)[24])byte_1AABD7A0);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
    v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])byte_1AABD7E0);
    v10 = (const TxtConfigMgr *)depot_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, depot_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v19 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v9 = 0;
      goto LABEL_76;
    }
    if ( *(_BYTE *)(((unsigned __int64)&skill_depot_config->core_proud_skill_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&skill_depot_config->core_proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&skill_depot_config->core_proud_skill_group_id);
    }
    core_proud_skill_group_id = skill_depot_config->core_proud_skill_group_id;
    if ( !core_proud_skill_group_id )
      goto LABEL_41;
    if ( *(_BYTE *)(((unsigned __int64)depot_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)depot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)depot_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(depot_id);
    }
    v20 = *depot_id;
    if ( *(_BYTE *)(((unsigned __int64)&skill_depot_config->core_proud_avatar_promote_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_depot_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_depot_config->core_proud_avatar_promote_level >> 3)
                                                                        + 0x7FFF8000) )
    {
      v20 = (_DWORD)skill_depot_config + 164;
      __asan_report_load4(&skill_depot_config->core_proud_avatar_promote_level);
    }
    v10 = txt_config_mgr;
    if ( AvatarSkillExcelConfigMgr::checkProudSkillIdSet(
           this,
           txt_config_mgr,
           core_proud_skill_group_id,
           skill_depot_config->core_proud_avatar_promote_level,
           PROUD_SKILL_CORE,
           v20) )
    {
      v21 = 1;
    }
    else
    {
LABEL_41:
      v21 = 0;
    }
    if ( v21 )
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
        "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
        "checkAvatarSkillDepotExcelConfig",
        190);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v22, (const char (*)[46])byte_1AABD820);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, depot_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      v2 = -1;
      v9 = 0;
      goto LABEL_76;
    }
    __for_range_1 = &skill_depot_config->inherent_proud_skill_opens;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v10);
    *(std::vector<data::ProudSkillOpenConfig>::const_iterator *)(v3 + 192) = std::vector<data::ProudSkillOpenConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v10);
    *(std::vector<data::ProudSkillOpenConfig>::const_iterator *)(v3 + 224) = std::vector<data::ProudSkillOpenConfig>::end(__for_range_1);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ProudSkillOpenConfig const*,std::vector<data::ProudSkillOpenConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<const data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *)(v3 + 224)) )
      {
        v30 = 1;
        goto LABEL_64;
      }
      proud_skill_open_config = __gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig const*,std::vector<data::ProudSkillOpenConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *const)(v3 + 192));
      if ( *(_BYTE *)(((unsigned __int64)depot_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)depot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)depot_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(depot_id);
      }
      v24 = *depot_id;
      if ( *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->need_avatar_promote_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)proud_skill_open_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->need_avatar_promote_level >> 3)
                                                                               + 0x7FFF8000) )
      {
        v24 = (_DWORD)proud_skill_open_config + 12;
        __asan_report_load4(&proud_skill_open_config->need_avatar_promote_level);
      }
      need_avatar_promote_level = proud_skill_open_config->need_avatar_promote_level;
      if ( *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&proud_skill_open_config->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v24 = (_DWORD)proud_skill_open_config + 8;
        __asan_report_load4(&proud_skill_open_config->proud_skill_group_id);
      }
      if ( AvatarSkillExcelConfigMgr::checkProudSkillIdSet(
             this,
             txt_config_mgr,
             proud_skill_open_config->proud_skill_group_id,
             need_avatar_promote_level,
             PROUD_SKILL_INHERENT,
             v24) )
      {
        break;
      }
      __gnu_cxx::__normal_iterator<data::ProudSkillOpenConfig const*,std::vector<data::ProudSkillOpenConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ProudSkillOpenConfig*,std::vector<data::ProudSkillOpenConfig> > *const)(v3 + 192));
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
      "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
      "checkAvatarSkillDepotExcelConfig",
      200);
    v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 448),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v27 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v26, (const char (*)[46])byte_1AABD880);
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, depot_id);
    v29 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v28, (const char (*)[23])byte_1AABD8E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v29,
      &proud_skill_open_config->proud_skill_group_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v30 = 0;
LABEL_64:
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v30 != 1 )
    {
      v9 = 0;
      goto LABEL_76;
    }
    if ( (unsigned __int8)std::string::empty() != 1
      && !JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, &skill_depot_config->skill_depot_ability_group) )
    {
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarSkillDepotExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
    "checkAvatarSkillDepotExcelConfig",
    208);
  v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 512),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v33 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          v32,
          (const char (*)[46])"findAbilityGroupConfig failed, ability_group:");
  v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
          v33,
          &skill_depot_config->skill_depot_ability_group);
  v35 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v34, (const char (*)[15])byte_1AABD980);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, depot_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
  v2 = -1;
  v9 = 0;
LABEL_76:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
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

// Line 219: range 0000000012E7AC06-0000000012E7B641
__int64 __fastcall AvatarSkillExcelConfigMgr::checkProudSkillIdSet(
        const AvatarSkillExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t proud_skill_group_id,
        uint32_t need_avatar_promote_level,
        data::ProudSkillType proud_skill_type,
        uint32_t depot_id)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  __int64 v10; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // eax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  __int64 v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  __int64 result; // rax
  const std::set<unsigned int> *proud_skill_id_set_ptr; // [rsp+28h] [rbp-208h]
  const data::ProudSkillExcelConfig *proud_skill_config_ptr; // [rsp+38h] [rbp-1F8h]
  char v49[496]; // [rsp+40h] [rbp-1F0h] BYREF

  v7 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(448LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "11 32 4 18 proud_skill_id:227 48 4 24 proud_skill_group_id:217 64 4 29 need_avatar_promote_level"
                        ":218 80 4 12 depot_id:218 96 8 15 __for_begin:227 128 8 13 __for_end:227 160 8 9 <unknown> 192 3"
                        "2 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v7 + 16) = AvatarSkillExcelConfigMgr::checkProudSkillIdSet;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = -234556924;
  v9[536862723] = -218959360;
  v9[536862724] = -218959360;
  v9[536862725] = -218959360;
  v9[536862727] = -218959118;
  v9[536862729] = -218959118;
  v9[536862731] = -218959118;
  v9[536862733] = -202116109;
  *(_DWORD *)(v7 + 48) = proud_skill_group_id;
  *(_DWORD *)(v7 + 64) = need_avatar_promote_level;
  *(_DWORD *)(v7 + 80) = depot_id;
  v10 = *(unsigned int *)(v7 + 48);
  proud_skill_id_set_ptr = AvatarTalentExcelConfigMgr::findProudSkillSetByGroupId(
                             &txt_config_mgr->avatar_talent_config_mgr,
                             v10);
  if ( proud_skill_id_set_ptr )
  {
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, v10);
    *(std::set<unsigned int>::iterator *)(v7 + 96) = std::set<unsigned int>::begin(proud_skill_id_set_ptr);
    if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 128, v10);
    *(std::set<unsigned int>::iterator *)(v7 + 128) = std::set<unsigned int>::end(proud_skill_id_set_ptr);
    while ( 1 )
    {
      v15 = (char *)(v7 + 128);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v7 + 96),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v7 + 128)) )
      {
        v24 = 1;
        goto LABEL_41;
      }
      v16 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v7 + 96));
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      v19 = *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v15) = v19 != 0;
        __asan_report_store4(v7 + 32, v15);
      }
      *(_DWORD *)(v7 + 32) = v18;
      proud_skill_config_ptr = data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(
                                 &txt_config_mgr->avatar_talent_config_mgr,
                                 *(unsigned int *)(v7 + 32));
      if ( !proud_skill_config_ptr )
      {
        if ( *(char *)(((v7 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v7 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v7 - 64 + 95) & 7) >= *(_BYTE *)(((v7 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v7 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v7 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
          "checkProudSkillIdSet",
          232);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v7 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v20, (const char (*)[24])byte_1AABDB60);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v7 + 32));
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v22, (const char (*)[16])byte_1AABD580);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v7 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 256));
        v6 = -1;
        v24 = 0;
        goto LABEL_41;
      }
      if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)proud_skill_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&proud_skill_config_ptr->proud_skill_type);
      }
      if ( proud_skill_type != proud_skill_config_ptr->proud_skill_type )
      {
        if ( *(char *)(((v7 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v7 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v7 + 95) & 7) >= *(_BYTE *)(((v7 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v7 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v7 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
          "checkProudSkillIdSet",
          238);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v7 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v25, (const char (*)[15])byte_1AABDBA0);
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v7 + 32));
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v27, (const char (*)[16])byte_1AABD580);
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v7 + 80));
        v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])byte_1AABDBE0);
        v31 = (__int64)data::enumValToStr(proud_skill_type, (__int64)byte_1AABDBE0);
        if ( *(_BYTE *)(((v7 + 160) >> 3) + 0x7FFF8000) )
          v31 = __asan_report_store8(v7 + 160, byte_1AABDBE0);
        *(_QWORD *)(v7 + 160) = v31;
        v32 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v30, (const char *const *)(v7 + 160));
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v32, (const char (*)[10])byte_1AABDC20);
        *(_BYTE *)(((v7 + 160) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 320));
        v6 = -1;
        v24 = 0;
        goto LABEL_41;
      }
      if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&proud_skill_config_ptr->level);
      }
      if ( proud_skill_config_ptr->level == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->break_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->break_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&proud_skill_config_ptr->break_level);
        }
        if ( proud_skill_config_ptr->break_level != *(_DWORD *)(v7 + 64) )
          break;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v7 + 96));
    }
    if ( *(char *)(((v7 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v7 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 - 97) & 7) >= *(_BYTE *)(((v7 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v7 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v7 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
      "checkProudSkillIdSet",
      245);
    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v7 + 384),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v34 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v33, (const char (*)[15])byte_1AABDBA0);
    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v7 + 32));
    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v35, (const char (*)[16])byte_1AABD580);
    v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v7 + 80));
    v38 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v37, (const char (*)[29])byte_1AABDC60);
    v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v7 + 64));
    v40 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v39, (const char (*)[35])byte_1AABDCA0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &proud_skill_config_ptr->break_level);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 384));
    v6 = -1;
    v24 = 0;
LABEL_41:
    if ( v24 == 1 )
      v6 = 0;
  }
  else
  {
    if ( *(char *)(((v7 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v7 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 - 64 + 31) & 7) >= *(_BYTE *)(((v7 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v7 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v7 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AvatarSkillExcelConfig.cpp",
      "checkProudSkillIdSet",
      223);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v7 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v11, (const char (*)[27])byte_1AABDB20);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v7 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])byte_1AABD580);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v7 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 192));
    v6 = -1;
  }
  result = v6;
  if ( v49 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
