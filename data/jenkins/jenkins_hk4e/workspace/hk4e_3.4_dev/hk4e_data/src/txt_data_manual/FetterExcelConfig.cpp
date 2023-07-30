// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/FetterExcelConfig.cpp

// Line 19: range 0000000013ABFE52-0000000013ABFE9A
int32_t __cdecl FetterExcelConfigMgr::loadConfig(FetterExcelConfigMgr *const this, HK4EDesignConfig *config)
{
  int32_t v2; // ebx

  v2 = data::FettersExcelConfigMgrBase::loadConfig(this, config);
  return v2 | data::PhotographExcelConfigMgrBase::loadConfig(&this->photograph_config_mgr, config);
};

// Line 24: range 0000000013ABFE9C-0000000013AC00A7
int32_t __cdecl FetterExcelConfigMgr::rewriteConfig(FetterExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = FetterExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( FetterExcelConfigMgr::rewriteFetterConfig(this, txt_config_mgr)
    || FetterExcelConfigMgr::rewriteFetterCharacterCardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/FetterExcelConfig.cpp",
      "rewriteConfig",
      28);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])"rewriteConfig fail");
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

// Line 35: range 0000000013AC00A8-0000000013AC02B3
int32_t __cdecl FetterExcelConfigMgr::checkConfig(FetterExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = FetterExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( FetterExcelConfigMgr::checkFetterConfig(this, txt_config_mgr)
    || FetterExcelConfigMgr::checkFetterCharacterCardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/FetterExcelConfig.cpp",
      "checkConfig",
      39);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])"checkConfig fail");
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

// Line 47: range 0000000013AC02B4-0000000013AC0496
const data::FetterConfig *__fastcall FetterExcelConfigMgr::findFetterConfig(
        const FetterExcelConfigMgr *const this,
        __int64 fetter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::FetterConfig*> *p_fetter_config_map; // rdx
  std::unordered_map<unsigned int,data::FetterConfig*> *v6; // rdx
  bool v7; // al
  const data::FetterConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FetterConfig*>,false,false>::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 fetter_id:46 64 8 7 iter:48 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = FetterExcelConfigMgr::findFetterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = fetter_id;
  p_fetter_config_map = &this->fetter_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, fetter_id);
  *(std::unordered_map<unsigned int,data::FetterConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FetterConfig *>::find(
                                                                                         p_fetter_config_map,
                                                                                         (const std::unordered_map<unsigned int,data::FetterConfig*>::key_type *)(v2 + 48));
  v6 = &this->fetter_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FetterConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FetterConfig *>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FetterConfig *>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FetterConfig *>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FetterConfig*>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v9->second);
    result = v9->second;
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

// Line 58: range 0000000013AC0498-0000000013AC077B
__int64 __fastcall FetterExcelConfigMgr::findAvatarBirthDay(
        const FetterExcelConfigMgr *const this,
        __int64 avatar_id,
        unsigned __int64 birthday_month,
        unsigned __int64 birthday_day)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *p_avatar_birthday_map; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v12; // rdx
  std::pair<unsigned int,unsigned int> *p_second; // rax
  uint32_t first; // ecx
  char v15; // dl
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v16; // rdx
  unsigned int *v17; // rax
  uint32_t second; // ecx
  char v19; // dl
  char v22[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 avatar_id:57 64 8 7 iter:59 96 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = FetterExcelConfigMgr::findAvatarBirthDay;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = avatar_id;
  p_avatar_birthday_map = &this->avatar_birthday_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, avatar_id);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(p_avatar_birthday_map, (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v4 + 48));
  v8 = &this->avatar_birthday_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(v8);
  v9 = (char *)(v4 + 96);
  v10 = std::__detail::operator==<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v4 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v4 + 64));
    p_second = &v12->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    first = v12->second.first;
    v15 = *(_BYTE *)((birthday_month >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)((birthday_month & 7) + 3) >= v15 )
    {
      LOBYTE(v9) = v15 != 0;
      __asan_report_store4(birthday_month, v9);
    }
    *(_DWORD *)birthday_month = first;
    v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v4 + 64));
    v17 = &v16->second.second;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    second = v16->second.second;
    v19 = *(_BYTE *)((birthday_day >> 3) + 0x7FFF8000);
    if ( v19 != 0 && (char)((birthday_day & 7) + 3) >= v19 )
    {
      LOBYTE(v9) = v19 != 0;
      __asan_report_store4(birthday_day, v9);
    }
    *(_DWORD *)birthday_day = second;
    result = 0LL;
  }
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 71: range 0000000013AC077C-0000000013AC3A89
int32_t __cdecl FetterExcelConfigMgr::rewriteFetterConfig(
        FetterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::tuple_element<1,std::pair<unsigned int const,data::FettersExcelConfig> >::type *v6; // rdx
  char *v7; // rsi
  std::tuple_element<1,std::pair<unsigned int const,data::FetterInfoExcelConfig> >::type *v8; // rdx
  unsigned int *p_info_birth_day; // rcx
  unsigned int *p_info_birth_month; // rdx
  __int64 v11; // rsi
  std::pair<unsigned int,unsigned int> *v12; // rax
  char *v13; // rsi
  std::tuple_element<1,std::pair<unsigned int const,data::FetterStoryExcelConfig> >::type *v14; // rdx
  char *v15; // rsi
  std::tuple_element<1,std::pair<unsigned int const,data::PhotographPosenameExcelConfig> >::type *v16; // rdx
  char *v17; // rsi
  std::tuple_element<1,std::pair<unsigned int const,data::PhotographExpressionExcelConfig> >::type *v18; // rdx
  unsigned __int64 v19; // rax
  char *v20; // rsi
  __gnu_cxx::__normal_iterator<data::FetterConfig**,std::vector<data::FetterConfig*> >::reference v21; // rax
  data::FetterConfig **v22; // r8
  data::FetterConfig *v23; // rdx
  __int64 v24; // rax
  int v25; // ecx
  char v26; // al
  char *v27; // rsi
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterConfig*>,false,false>,bool> v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  __int64 v32; // rdx
  int v33; // ecx
  char v34; // al
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::vector<unsigned int> *v38; // rax
  char *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  common::milog::MiLogStream *v43; // rax
  std::unordered_map<data::FetterCondType,std::set<unsigned int>> *v44; // rax
  std::set<unsigned int> *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  __int64 v48; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v49; // rax
  int *v50; // rdx
  int v51; // ecx
  char v52; // al
  std::unordered_set<unsigned int> *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  __int64 v58; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v59; // rax
  int *v60; // rdx
  int v61; // ecx
  char v62; // al
  std::unordered_set<unsigned int> *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  __int64 v66; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v67; // rax
  int *v68; // rdx
  int v69; // ecx
  char v70; // al
  std::unordered_set<unsigned int> *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  __int64 v74; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v75; // rax
  int *v76; // rdx
  int v77; // ecx
  char v78; // al
  std::unordered_set<unsigned int> *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  __int64 v82; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v83; // rax
  int *v84; // rdx
  int v85; // ecx
  char v86; // al
  char *v87; // rsi
  bool v88; // al
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  char *v93; // rsi
  char *v94; // rsi
  unsigned int *v95; // rax
  int *v96; // rdx
  int v97; // ecx
  char v98; // al
  std::unordered_set<unsigned int> *v99; // rax
  char *v100; // rsi
  unsigned __int64 v101; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::set<unsigned int>::iterator v103; // rax
  std::unordered_map<data::FetterCondType,std::vector<unsigned int>> *v104; // rdx
  std::vector<unsigned int> *v105; // rax
  unsigned __int64 v106; // rax
  int32_t ret; // [rsp+14h] [rbp-9DCh]
  std::vector<data::FetterConditionConfig> **__for_begin; // [rsp+18h] [rbp-9D8h]
  data::FettersExcelConfigMap *__for_range; // [rsp+20h] [rbp-9D0h]
  data::FetterInfoExcelConfigMap *__for_range_0; // [rsp+28h] [rbp-9C8h]
  data::FetterStoryExcelConfigMap *__for_range_1; // [rsp+30h] [rbp-9C0h]
  data::PhotographPosenameExcelConfigMap *__for_range_2; // [rsp+38h] [rbp-9B8h]
  data::PhotographExpressionExcelConfigMap *__for_range_3; // [rsp+40h] [rbp-9B0h]
  std::vector<data::FetterConfig*> *__for_range_4; // [rsp+48h] [rbp-9A8h]
  std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>> *__for_range_9; // [rsp+50h] [rbp-9A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>> >,false,false>::reference v118; // [rsp+58h] [rbp-998h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>> > >::type *avatar_id; // [rsp+60h] [rbp-990h]
  const std::tuple_element<1,std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>> > >::type *__for_range_10; // [rsp+70h] [rbp-980h]
  std::__detail::_Node_const_iterator<std::pair<const data::FetterCondType,std::set<unsigned int> >,false,false>::reference v121; // [rsp+78h] [rbp-978h]
  std::tuple_element<0,std::pair<const data::FetterCondType,std::set<unsigned int> > >::type *cond_type; // [rsp+80h] [rbp-970h]
  std::tuple_element<1,const std::pair<const data::FetterCondType,std::set<unsigned int> > >::type *fetter_id_set; // [rsp+88h] [rbp-968h]
  std::initializer_list<std::vector<data::FetterConditionConfig>*>::const_iterator __for_end; // [rsp+98h] [rbp-958h]
  std::vector<data::FetterConditionConfig> *cond_vec_ptr; // [rsp+A0h] [rbp-950h]
  const data::FetterConditionConfig *cond; // [rsp+B0h] [rbp-940h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>> *city_level1_trans_points_map; // [rsp+B8h] [rbp-938h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_7; // [rsp+C0h] [rbp-930h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v129; // [rsp+C8h] [rbp-928h]
  const std::tuple_element<1,std::pair<unsigned int const,std::set<unsigned int> > >::type *__for_range_8; // [rsp+E0h] [rbp-910h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PhotographExpressionExcelConfig>,false,false>::reference v131; // [rsp+E8h] [rbp-908h]
  std::tuple_element<1,std::pair<unsigned int const,data::PhotographExpressionExcelConfig> >::type *fetter_config_3; // [rsp+F8h] [rbp-8F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PhotographPosenameExcelConfig>,false,false>::reference v133; // [rsp+100h] [rbp-8F0h]
  std::tuple_element<1,std::pair<unsigned int const,data::PhotographPosenameExcelConfig> >::type *fetter_config_2; // [rsp+110h] [rbp-8E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false,false>::reference v135; // [rsp+118h] [rbp-8D8h]
  std::tuple_element<1,std::pair<unsigned int const,data::FetterStoryExcelConfig> >::type *fetter_config_1; // [rsp+128h] [rbp-8C8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false,false>::reference v137; // [rsp+130h] [rbp-8C0h]
  std::tuple_element<1,std::pair<unsigned int const,data::FetterInfoExcelConfig> >::type *fetter_config_0; // [rsp+140h] [rbp-8B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FettersExcelConfig>,false,false>::reference __in; // [rsp+148h] [rbp-8A8h]
  std::tuple_element<1,std::pair<unsigned int const,data::FettersExcelConfig> >::type *fetter_config; // [rsp+158h] [rbp-898h]
  char v141[2192]; // [rsp+160h] [rbp-890h] BYREF

  v2 = (unsigned __int64)v141;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2144LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "55 48 1 9 <unknown> 64 4 13 fetter_id:107 80 4 13 avatar_id:114 96 4 14 dungeon_id:144 112 4 12 "
                        "point_id:157 128 4 12 quest_id:169 144 4 19 parent_quest_id:181 160 4 11 city_id:193 176 4 12 po"
                        "int_id:205 192 8 14 __for_begin:76 224 8 12 __for_end:76 256 8 9 <unknown> 288 8 14 __for_begin:"
                        "80 320 8 12 __for_end:80 352 8 9 <unknown> 384 8 9 <unknown> 416 8 14 __for_begin:85 448 8 12 __"
                        "for_end:85 480 8 9 <unknown> 512 8 14 __for_begin:89 544 8 12 __for_end:89 576 8 9 <unknown> 608"
                        " 8 14 __for_begin:93 640 8 12 __for_end:93 672 8 9 <unknown> 704 8 20 fetter_config_ptr:99 736 8"
                        " 14 __for_begin:99 768 8 12 __for_end:99 800 8 15 __for_begin:131 832 8 13 __for_end:131 864 8 8"
                        " iter:196 896 8 9 <unknown> 928 8 15 __for_begin:203 960 8 13 __for_end:203 992 8 15 __for_begin"
                        ":205 1024 8 13 __for_end:205 1056 8 15 __for_begin:219 1088 8 13 __for_end:219 1120 8 15 __for_b"
                        "egin:221 1152 8 13 __for_end:221 1184 16 9 <unknown> 1216 24 24 fetter_config_ptr_vec:75 1280 24"
                        " 9 <unknown> 1344 24 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 160"
                        "0 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown>"
                        " 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 56 32 temp_avatar_fetters_index_map:98";
  *(_QWORD *)(v2 + 16) = FetterExcelConfigMgr::rewriteFetterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862736] = -218959360;
  v4[536862737] = -218959360;
  v4[536862738] = -218959360;
  v4[536862739] = -218959360;
  v4[536862740] = -218959360;
  v4[536862741] = -218959360;
  v4[536862742] = -218959360;
  v4[536862743] = -218959360;
  v4[536862744] = -218959360;
  v4[536862745] = -218959360;
  v4[536862746] = -218959360;
  v4[536862747] = -218959360;
  v4[536862748] = -218959360;
  v4[536862749] = -218959360;
  v4[536862750] = -218959360;
  v4[536862751] = -218959360;
  v4[536862752] = -218959360;
  v4[536862753] = -218959360;
  v4[536862754] = -218959360;
  v4[536862755] = -218959360;
  v4[536862756] = -218959360;
  v4[536862757] = -219021312;
  v4[536862758] = -234881024;
  v4[536862759] = -218959118;
  v4[536862760] = -234881024;
  v4[536862761] = -218959118;
  v4[536862762] = -234881024;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -218959118;
  v4[536862771] = -218959118;
  v4[536862773] = -218959118;
  v4[536862775] = -218959118;
  v4[536862777] = -218959118;
  v4[536862779] = -218959118;
  v4[536862781] = -218959118;
  v4[536862783] = -218959118;
  v4[536862785] = -218103808;
  v4[536862786] = -202116109;
  ret = 0;
  std::vector<data::FetterConfig *>::vector((std::vector<data::FetterConfig*> *const)(v2 + 1216));
  __for_range = &this->fetters_excel_config_map;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FettersExcelConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::FettersExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FettersExcelConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::FettersExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 224);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FettersExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FettersExcelConfig>,false> *)(v2 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FettersExcelConfig>,false> *)(v2 + 224)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FettersExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FettersExcelConfig>,false,false> *const)(v2 + 192));
    std::get<0ul,unsigned int const,data::FettersExcelConfig>(__in);
    fetter_config = std::get<1ul,unsigned int const,data::FettersExcelConfig>(__in);
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    v6 = fetter_config;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, v5);
    *(_QWORD *)(v2 + 256) = v6;
    std::vector<data::FetterConfig *>::push_back(
      (std::vector<data::FetterConfig*> *const)(v2 + 1216),
      (std::vector<data::FetterConfig*>::value_type *)(v2 + 256));
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FettersExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FettersExcelConfig>,false,false> *const)(v2 + 192));
  }
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->fetter_info_excel_config_map;
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 288, v5);
  *(std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::iterator *)(v2 + 288) = std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 320, v5);
  *(std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::iterator *)(v2 + 320) = std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::end(__for_range_0);
  while ( 1 )
  {
    v7 = (char *)(v2 + 320);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false> *)(v2 + 288),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false> *)(v2 + 320)) )
      break;
    v137 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false,false> *const)(v2 + 288));
    std::get<0ul,unsigned int const,data::FetterInfoExcelConfig>(v137);
    fetter_config_0 = std::get<1ul,unsigned int const,data::FetterInfoExcelConfig>(v137);
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    v8 = fetter_config_0;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, v7);
    *(_QWORD *)(v2 + 352) = v8;
    std::vector<data::FetterConfig *>::push_back(
      (std::vector<data::FetterConfig*> *const)(v2 + 1216),
      (std::vector<data::FetterConfig*>::value_type *)(v2 + 352));
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    p_info_birth_day = &fetter_config_0->info_birth_day;
    p_info_birth_month = &fetter_config_0->info_birth_month;
    v11 = *(unsigned __int8 *)(((v2 + 384) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v11 )
      __asan_report_store8(v2 + 384, v11);
    *(std::pair<unsigned int,unsigned int> *)(v2 + 384) = std::make_pair<unsigned int &,unsigned int &>(
                                                            p_info_birth_month,
                                                            p_info_birth_day);
    v12 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
            &this->avatar_birthday_map,
            &fetter_config_0->avatar_id);
    std::pair<unsigned int,unsigned int>::operator=(
      v12,
      (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v2 + 384));
    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false,false> *const)(v2 + 288));
  }
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = &this->fetter_story_excel_config_map;
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 416, v7);
  *(std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::iterator *)(v2 + 416) = std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 448, v7);
  *(std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::iterator *)(v2 + 448) = std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::end(__for_range_1);
  while ( 1 )
  {
    v13 = (char *)(v2 + 448);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false> *)(v2 + 416),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false> *)(v2 + 448)) )
      break;
    v135 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false,false> *const)(v2 + 416));
    std::get<0ul,unsigned int const,data::FetterStoryExcelConfig>(v135);
    fetter_config_1 = std::get<1ul,unsigned int const,data::FetterStoryExcelConfig>(v135);
    *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    v14 = fetter_config_1;
    if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 480, v13);
    *(_QWORD *)(v2 + 480) = v14;
    std::vector<data::FetterConfig *>::push_back(
      (std::vector<data::FetterConfig*> *const)(v2 + 1216),
      (std::vector<data::FetterConfig*>::value_type *)(v2 + 480));
    *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false,false> *const)(v2 + 416));
  }
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
  __for_range_2 = &this->photograph_config_mgr.photograph_posename_excel_config_map;
  *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 512, v13);
  *(std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig>::iterator *)(v2 + 512) = std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig>::begin(__for_range_2);
  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 544, v13);
  *(std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig>::iterator *)(v2 + 544) = std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig>::end(__for_range_2);
  while ( 1 )
  {
    v15 = (char *)(v2 + 544);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::PhotographPosenameExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PhotographPosenameExcelConfig>,false> *)(v2 + 512),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PhotographPosenameExcelConfig>,false> *)(v2 + 544)) )
      break;
    v133 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::PhotographPosenameExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::PhotographPosenameExcelConfig>,false,false> *const)(v2 + 512));
    std::get<0ul,unsigned int const,data::PhotographPosenameExcelConfig>(v133);
    fetter_config_2 = std::get<1ul,unsigned int const,data::PhotographPosenameExcelConfig>(v133);
    *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
    v16 = fetter_config_2;
    if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 576, v15);
    *(_QWORD *)(v2 + 576) = v16;
    std::vector<data::FetterConfig *>::push_back(
      (std::vector<data::FetterConfig*> *const)(v2 + 1216),
      (std::vector<data::FetterConfig*>::value_type *)(v2 + 576));
    *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::PhotographPosenameExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::PhotographPosenameExcelConfig>,false,false> *const)(v2 + 512));
  }
  *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
  __for_range_3 = &this->photograph_config_mgr.photograph_expression_excel_config_map;
  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 608, v15);
  *(std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig>::iterator *)(v2 + 608) = std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig>::begin(__for_range_3);
  *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 640, v15);
  *(std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig>::iterator *)(v2 + 640) = std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig>::end(__for_range_3);
  while ( 1 )
  {
    v17 = (char *)(v2 + 640);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::PhotographExpressionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PhotographExpressionExcelConfig>,false> *)(v2 + 608),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PhotographExpressionExcelConfig>,false> *)(v2 + 640)) )
      break;
    v131 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::PhotographExpressionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::PhotographExpressionExcelConfig>,false,false> *const)(v2 + 608));
    std::get<0ul,unsigned int const,data::PhotographExpressionExcelConfig>(v131);
    fetter_config_3 = std::get<1ul,unsigned int const,data::PhotographExpressionExcelConfig>(v131);
    *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
    v18 = fetter_config_3;
    if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 672, v17);
    *(_QWORD *)(v2 + 672) = v18;
    std::vector<data::FetterConfig *>::push_back(
      (std::vector<data::FetterConfig*> *const)(v2 + 1216),
      (std::vector<data::FetterConfig*>::value_type *)(v2 + 672));
    *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::PhotographExpressionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::PhotographExpressionExcelConfig>,false,false> *const)(v2 + 608));
  }
  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
  v19 = ((v2 + 2048) >> 3) + 2147450880;
  *(_DWORD *)v19 = 0;
  *(_WORD *)(v19 + 4) = 0;
  *(_BYTE *)(v19 + 6) = 0;
  std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>::unordered_map((std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>> *const)(v2 + 2048));
  __for_range_4 = (std::vector<data::FetterConfig*> *)(v2 + 1216);
  *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 736, v17);
  *(std::vector<data::FetterConfig*>::iterator *)(v2 + 736) = std::vector<data::FetterConfig *>::begin(__for_range_4);
  *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 768, v17);
  *(std::vector<data::FetterConfig*>::iterator *)(v2 + 768) = std::vector<data::FetterConfig *>::end(__for_range_4);
  while ( 1 )
  {
    v20 = (char *)(v2 + 768);
    if ( !__gnu_cxx::operator!=<data::FetterConfig **,std::vector<data::FetterConfig *>>(
            (const __gnu_cxx::__normal_iterator<data::FetterConfig**,std::vector<data::FetterConfig*> > *)(v2 + 736),
            (const __gnu_cxx::__normal_iterator<data::FetterConfig**,std::vector<data::FetterConfig*> > *)(v2 + 768)) )
      break;
    *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
    v21 = __gnu_cxx::__normal_iterator<data::FetterConfig **,std::vector<data::FetterConfig *>>::operator*((const __gnu_cxx::__normal_iterator<data::FetterConfig**,std::vector<data::FetterConfig*> > *const)(v2 + 736));
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v21);
    v23 = *v21;
    if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 704, v20);
    *(_QWORD *)(v2 + 704) = v23;
    if ( *(_QWORD *)(v2 + 704) )
    {
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 704);
      v24 = *(_QWORD *)(v2 + 704);
      if ( *(_BYTE *)(((unsigned __int64)(v24 + 8) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v24 + 8) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(v24 + 8);
      }
      v25 = *(_DWORD *)(v24 + 8);
      v26 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(v20) = v26 != 0;
        __asan_report_store4(v2 + 64, v20);
      }
      *(_DWORD *)(v2 + 64) = v25;
      v27 = (char *)(v2 + 64);
      v28 = std::unordered_map<unsigned int,data::FetterConfig *>::emplace<unsigned int &,data::FetterConfig *&>(
              &this->fetter_config_map,
              (unsigned int *)(v2 + 64),
              (data::FetterConfig **)(v2 + 704),
              (unsigned int *)&this->fetter_config_map,
              v22);
      if ( !v28.second )
      {
        *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1472) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1472, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1472),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/FetterExcelConfig.cpp",
          "rewriteFetterConfig",
          110);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1472),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v30 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v29, (const char (*)[18])byte_1AC77B60);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v31, (const char (*)[16])byte_1AC77BA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
        *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v2 + 704);
        v32 = *(_QWORD *)(v2 + 704);
        if ( *(_BYTE *)(((unsigned __int64)(v32 + 12) >> 3) + 0x7FFF8000) != 0
          && (char)(((v32 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v32 + 12) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v32 + 12);
        }
        v33 = *(_DWORD *)(v32 + 12);
        v34 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
        if ( v34 != 0 && v34 <= 3 )
        {
          LOBYTE(v27) = v34 != 0;
          __asan_report_store4(v2 + 80, v27);
        }
        *(_DWORD *)(v2 + 80) = v33;
        if ( *(_DWORD *)(v2 + 80) )
        {
          v38 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                  &this->avatar_all_fetters_map,
                  (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 80));
          v39 = (char *)(v2 + 64);
          std::vector<unsigned int>::push_back(v38, (const std::vector<unsigned int>::value_type *)(v2 + 64));
          if ( *(_WORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          *(_QWORD *)(v2 + 1184) = 0LL;
          *(_QWORD *)(v2 + 1192) = 0LL;
          if ( *(_BYTE *)(((v2 + 1192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 1192, v39);
          *(_QWORD *)(v2 + 1192) = 3LL;
          if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v2 + 704);
          v40 = *(_QWORD *)(v2 + 704) + 16LL;
          if ( *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 1280, v39);
          *(_QWORD *)(v2 + 1280) = v40;
          v41 = *(_QWORD *)(v2 + 704) + 40LL;
          if ( *(_BYTE *)(((v2 + 1288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 1288, v39);
          *(_QWORD *)(v2 + 1288) = v41;
          v42 = *(_QWORD *)(v2 + 704) + 64LL;
          if ( *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 1296, v39);
          *(_QWORD *)(v2 + 1296) = v42;
          if ( *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 1184, v39);
          *(_QWORD *)(v2 + 1184) = v2 + 1280;
          __for_begin = (std::vector<data::FetterConditionConfig> **)std::initializer_list<std::vector<data::FetterConditionConfig> *>::begin((const std::initializer_list<std::vector<data::FetterConditionConfig>*> *const)(v2 + 1184));
          __for_end = std::initializer_list<std::vector<data::FetterConditionConfig> *>::end((const std::initializer_list<std::vector<data::FetterConditionConfig>*> *const)(v2 + 1184));
          while ( __for_begin != __for_end )
          {
            if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
              __asan_report_load8(__for_begin);
            cond_vec_ptr = *__for_begin;
            if ( *__for_begin )
            {
              common::tools::MiscUtils::removeEmptyElement<data::FetterConditionConfig,data::FetterCondType data::FetterConditionConfig::*>(
                cond_vec_ptr,
                (data::FetterCondType *)8);
              *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 800, 8LL);
              *(std::vector<data::FetterConditionConfig>::iterator *)(v2 + 800) = std::vector<data::FetterConditionConfig>::begin(cond_vec_ptr);
              *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 832, 8LL);
              *(std::vector<data::FetterConditionConfig>::iterator *)(v2 + 832) = std::vector<data::FetterConditionConfig>::end(cond_vec_ptr);
              while ( __gnu_cxx::operator!=<data::FetterConditionConfig *,std::vector<data::FetterConditionConfig>>(
                        (const __gnu_cxx::__normal_iterator<data::FetterConditionConfig*,std::vector<data::FetterConditionConfig> > *)(v2 + 800),
                        (const __gnu_cxx::__normal_iterator<data::FetterConditionConfig*,std::vector<data::FetterConditionConfig> > *)(v2 + 832)) )
              {
                cond = __gnu_cxx::__normal_iterator<data::FetterConditionConfig *,std::vector<data::FetterConditionConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::FetterConditionConfig*,std::vector<data::FetterConditionConfig> > *const)(v2 + 800));
                v44 = std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>::operator[](
                        (std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>> *const)(v2 + 2048),
                        (const std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>::key_type *)(v2 + 80));
                v45 = std::unordered_map<data::FetterCondType,std::set<unsigned int>>::operator[](v44, &cond->cond_type);
                std::set<unsigned int>::insert(v45, (const std::set<unsigned int>::value_type *)(v2 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&cond->cond_type);
                }
                switch ( cond->cond_type )
                {
                  case FETTER_COND_FINISH_DUNGEON:
                    if ( std::vector<unsigned int>::empty(&cond->param_list) )
                    {
                      *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1664) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1664, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1664),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/FetterExcelConfig.cpp",
                        "rewriteFetterConfig",
                        140);
                      v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1664),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v47 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                              v46,
                              (const char (*)[71])"param_list is empty, cond_type: FETTER_COND_FINISH_DUNGEON, fetter_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v47,
                        (const unsigned int *)(v2 + 64));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                      *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                    else
                    {
                      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
                      v48 = 0LL;
                      v49 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
                      v50 = (int *)v49;
                      if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v49);
                      }
                      v51 = *v50;
                      v52 = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
                      if ( v52 != 0 && v52 <= 3 )
                      {
                        LOBYTE(v48) = v52 != 0;
                        __asan_report_store4(v2 + 96, v48);
                      }
                      *(_DWORD *)(v2 + 96) = v51;
                      v53 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                              &this->fetter_dungeon_avatars_map,
                              (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 96));
                      std::unordered_set<unsigned int>::insert(
                        v53,
                        (const std::unordered_set<unsigned int>::value_type *)(v2 + 80));
                    }
                    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
                    break;
                  case FETTER_COND_UNLOCK_TRANS_POINT:
                  case FETTER_COND_UNLOCK_AREA:
                    if ( std::vector<unsigned int>::size(&cond->param_list) > 1 )
                    {
                      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
                      v58 = 1LL;
                      v59 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 1uLL);
                      v60 = (int *)v59;
                      if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v59 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v59);
                      }
                      v61 = *v60;
                      v62 = *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000);
                      if ( v62 != 0 && v62 <= 3 )
                      {
                        LOBYTE(v58) = v62 != 0;
                        __asan_report_store4(v2 + 112, v58);
                      }
                      *(_DWORD *)(v2 + 112) = v61;
                      v63 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                              &this->fetter_point_avatars_map,
                              (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 112));
                      std::unordered_set<unsigned int>::insert(
                        v63,
                        (const std::unordered_set<unsigned int>::value_type *)(v2 + 80));
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1728) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1728, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1728),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/FetterExcelConfig.cpp",
                        "rewriteFetterConfig",
                        153);
                      v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1728),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v55 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                              v54,
                              (const char (*)[39])"param_list is not enough, cond_type:  ");
                      v56 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                              v55,
                              &cond->cond_type);
                      v57 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                              v56,
                              (const char (*)[13])", fetter_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v57,
                        (const unsigned int *)(v2 + 64));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                      *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
                    break;
                  case FETTER_COND_FINISH_QUEST:
                    if ( std::vector<unsigned int>::empty(&cond->param_list) )
                    {
                      *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1792) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1792, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1792),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/FetterExcelConfig.cpp",
                        "rewriteFetterConfig",
                        165);
                      v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1792),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v65 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                              v64,
                              (const char (*)[71])"param_list is empty, cond_type: FETTER_COND_FINISH_DUNGEON, fetter_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v65,
                        (const unsigned int *)(v2 + 64));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                      *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                    else
                    {
                      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
                      v66 = 0LL;
                      v67 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
                      v68 = (int *)v67;
                      if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v67 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v67);
                      }
                      v69 = *v68;
                      v70 = *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000);
                      if ( v70 != 0 && v70 <= 3 )
                      {
                        LOBYTE(v66) = v70 != 0;
                        __asan_report_store4(v2 + 128, v66);
                      }
                      *(_DWORD *)(v2 + 128) = v69;
                      v71 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                              &this->fetter_quest_avatars_map,
                              (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 128));
                      std::unordered_set<unsigned int>::insert(
                        v71,
                        (const std::unordered_set<unsigned int>::value_type *)(v2 + 80));
                    }
                    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
                    break;
                  case FETTER_COND_FINISH_PARENT_QUEST:
                    if ( std::vector<unsigned int>::empty(&cond->param_list) )
                    {
                      *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1856) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1856, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1856),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/FetterExcelConfig.cpp",
                        "rewriteFetterConfig",
                        177);
                      v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1856),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v73 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                              v72,
                              (const char (*)[76])"param_list is empty, cond_type: FETTER_COND_FINISH_PARENT_QUEST, fetter_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v73,
                        (const unsigned int *)(v2 + 64));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                      *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                    else
                    {
                      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 4;
                      v74 = 0LL;
                      v75 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
                      v76 = (int *)v75;
                      if ( *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v75 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v75);
                      }
                      v77 = *v76;
                      v78 = *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000);
                      if ( v78 != 0 && v78 <= 3 )
                      {
                        LOBYTE(v74) = v78 != 0;
                        __asan_report_store4(v2 + 144, v74);
                      }
                      *(_DWORD *)(v2 + 144) = v77;
                      v79 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                              &this->fetter_parent_quest_avatars_map,
                              (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 144));
                      std::unordered_set<unsigned int>::insert(
                        v79,
                        (const std::unordered_set<unsigned int>::value_type *)(v2 + 80));
                    }
                    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                    break;
                  case FETTER_COND_UNLOCK_ARENA_BY_CITY_ID:
                    if ( std::vector<unsigned int>::size(&cond->param_list) == 1 )
                    {
                      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 4;
                      v82 = 0LL;
                      v83 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
                      v84 = (int *)v83;
                      if ( *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v83 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v83);
                      }
                      v85 = *v84;
                      v86 = *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000);
                      LOBYTE(v82) = v86 != 0;
                      if ( v86 != 0 && v86 <= 3 )
                        __asan_report_store4(v2 + 160, v82);
                      *(_DWORD *)(v2 + 160) = v85;
                      city_level1_trans_points_map = &txt_config_mgr->world_area_config_mgr.city_level1_trans_points_map;
                      *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v2 + 864, v82);
                      *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::const_iterator *)(v2 + 864) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::find(city_level1_trans_points_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::key_type *)(v2 + 160));
                      *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v2 + 896, v2 + 160);
                      *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::const_iterator *)(v2 + 896) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::end(city_level1_trans_points_map);
                      v87 = (char *)(v2 + 896);
                      v88 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>>>,false>(
                              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false> *)(v2 + 864),
                              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false> *)(v2 + 896));
                      *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
                      if ( v88 )
                      {
                        *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1984) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1984, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1984),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/FetterExcelConfig.cpp",
                          "rewriteFetterConfig",
                          199);
                        v89 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1984),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v90 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                v89,
                                (const char (*)[34])"no level1_trans_point in city_id:");
                        v91 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v90,
                                (const unsigned int *)(v2 + 160));
                        v92 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                v91,
                                (const char (*)[12])" fetter_id:");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v92,
                          (const unsigned int *)(v2 + 64));
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                        *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                        ret = -1;
                      }
                      else
                      {
                        __for_range_7 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false,false> *const)(v2 + 864))->second;
                        *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
                        if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) )
                          __asan_report_store8(v2 + 928, v87);
                        *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 928) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_7);
                        *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
                        if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) )
                          __asan_report_store8(v2 + 960, v87);
                        *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 960) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_7);
                        while ( 1 )
                        {
                          v93 = (char *)(v2 + 960);
                          if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
                                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 928),
                                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 960)) )
                            break;
                          v129 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 928));
                          std::get<0ul,unsigned int const,std::set<unsigned int>>(v129);
                          __for_range_8 = std::get<1ul,unsigned int const,std::set<unsigned int>>(v129);
                          *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
                          if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) )
                            __asan_report_store8(v2 + 992, v93);
                          *(std::set<unsigned int>::iterator *)(v2 + 992) = std::set<unsigned int>::begin(__for_range_8);
                          *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
                          if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) )
                            __asan_report_store8(v2 + 1024, v93);
                          *(std::set<unsigned int>::iterator *)(v2 + 1024) = std::set<unsigned int>::end(__for_range_8);
                          while ( 1 )
                          {
                            v94 = (char *)(v2 + 1024);
                            if ( !std::operator!=(
                                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 992),
                                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 1024)) )
                              break;
                            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 4;
                            v95 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 992));
                            v96 = (int *)v95;
                            if ( *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)v95 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v95 >> 3)
                                                                                    + 0x7FFF8000) )
                            {
                              __asan_report_load4(v95);
                            }
                            v97 = *v96;
                            v98 = *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000);
                            if ( v98 != 0 && v98 <= 3 )
                            {
                              LOBYTE(v94) = v98 != 0;
                              __asan_report_store4(v2 + 176, v94);
                            }
                            *(_DWORD *)(v2 + 176) = v97;
                            v99 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                                    &this->fetter_point_avatars_map,
                                    (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 176));
                            std::unordered_set<unsigned int>::insert(
                              v99,
                              (const std::unordered_set<unsigned int>::value_type *)(v2 + 80));
                            std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 992));
                          }
                          *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                          *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = -8;
                          *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -8;
                          std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 928));
                        }
                        *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = -8;
                        *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = -8;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1920) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1920, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1920),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/FetterExcelConfig.cpp",
                        "rewriteFetterConfig",
                        189);
                      v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1920),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v81 = common::milog::MiLogStream::operator<<<char [87],(char *[87])0>(
                              v80,
                              (const char (*)[87])"param_list's size is not 1, cond_type: FETTER_COND_UNLOCK_ARENA_BY_CIT"
                                                  "Y_ID, fetter_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v81,
                        (const unsigned int *)(v2 + 64));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                      *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = -8;
                    break;
                  default:
                    break;
                }
                __gnu_cxx::__normal_iterator<data::FetterConditionConfig *,std::vector<data::FetterConditionConfig>>::operator++((__gnu_cxx::__normal_iterator<data::FetterConditionConfig*,std::vector<data::FetterConditionConfig> > *const)(v2 + 800));
              }
              *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
            }
            else
            {
              *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1600) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1600, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1600),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/FetterExcelConfig.cpp",
                "rewriteFetterConfig",
                126);
              v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1600),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v43,
                (const char (*)[21])"cond_vec_ptr is null");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
              *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            ++__for_begin;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1536) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1536, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1536),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/FetterExcelConfig.cpp",
            "rewriteFetterConfig",
            117);
          v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1536),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v36 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v35, (const char (*)[18])byte_1AC77B60);
          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v36,
                  (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v37, (const char (*)[28])byte_1AC77BE0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
          *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1408) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1408, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1408),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/FetterExcelConfig.cpp",
        "rewriteFetterConfig",
        103);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)(v2 + 1408),
        (const char (*)[26])"fetter_config_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
      *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    __gnu_cxx::__normal_iterator<data::FetterConfig **,std::vector<data::FetterConfig *>>::operator++((__gnu_cxx::__normal_iterator<data::FetterConfig**,std::vector<data::FetterConfig*> > *const)(v2 + 736));
  }
  *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
  __for_range_9 = (std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>> *)(v2 + 2048);
  *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1056, v20);
  *(std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>::iterator *)(v2 + 1056) = std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>::begin(__for_range_9);
  *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1088, v20);
  *(std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>::iterator *)(v2 + 1088) = std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>::end(__for_range_9);
  while ( 1 )
  {
    v100 = (char *)(v2 + 1088);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>> >,false> *)(v2 + 1056),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>> >,false> *)(v2 + 1088)) )
      break;
    v118 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>> >,false,false> *const)(v2 + 1056));
    avatar_id = std::get<0ul,unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>(v118);
    __for_range_10 = std::get<1ul,unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>(v118);
    *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1120, v100);
    *(std::unordered_map<data::FetterCondType,std::set<unsigned int>>::const_iterator *)(v2 + 1120) = std::unordered_map<data::FetterCondType,std::set<unsigned int>>::begin(__for_range_10);
    *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1152, v100);
    *(std::unordered_map<data::FetterCondType,std::set<unsigned int>>::const_iterator *)(v2 + 1152) = std::unordered_map<data::FetterCondType,std::set<unsigned int>>::end(__for_range_10);
    while ( std::__detail::operator!=<std::pair<data::FetterCondType const,std::set<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const data::FetterCondType,std::set<unsigned int> >,false> *)(v2 + 1120),
              (const std::__detail::_Node_iterator_base<std::pair<const data::FetterCondType,std::set<unsigned int> >,false> *)(v2 + 1152)) )
    {
      v121 = std::__detail::_Node_const_iterator<std::pair<data::FetterCondType const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::FetterCondType,std::set<unsigned int> >,false,false> *const)(v2 + 1120));
      cond_type = std::get<0ul,data::FetterCondType const,std::set<unsigned int>>(v121);
      fetter_id_set = (std::tuple_element<1,const std::pair<const data::FetterCondType,std::set<unsigned int> > >::type *)std::get<1ul,data::FetterCondType const,std::set<unsigned int>>(v121);
      v101 = ((v2 + 1344) >> 3) + 2147450880;
      *(_WORD *)v101 = 0;
      *(_BYTE *)(v101 + 2) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 48));
      M_node = std::set<unsigned int>::end(fetter_id_set)._M_node;
      v103._M_node = std::set<unsigned int>::begin(fetter_id_set)._M_node;
      std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
        (std::vector<unsigned int> *const)(v2 + 1344),
        v103,
        (std::_Rb_tree_const_iterator<unsigned int>)M_node,
        (const std::vector<unsigned int>::allocator_type *)(v2 + 48));
      v104 = std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::vector<unsigned int>>>::operator[](
               &this->avatar_fetters_index_map,
               avatar_id);
      v105 = std::unordered_map<data::FetterCondType,std::vector<unsigned int>>::operator[](v104, cond_type);
      std::vector<unsigned int>::operator=(v105, (std::vector<unsigned int> *)(v2 + 1344));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 1344));
      v106 = ((v2 + 1344) >> 3) + 2147450880;
      *(_WORD *)v106 = -1800;
      *(_BYTE *)(v106 + 2) = -8;
      std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_const_iterator<std::pair<data::FetterCondType const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::FetterCondType,std::set<unsigned int> >,false,false> *const)(v2 + 1120));
    }
    *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::set<unsigned int>> >,false,false> *const)(v2 + 1056));
  }
  *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -8;
  std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>>::~unordered_map((std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::set<unsigned int>>> *const)(v2 + 2048));
  std::vector<data::FetterConfig *>::~vector((std::vector<data::FetterConfig*> *const)(v2 + 1216));
  if ( v141 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 256) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8104) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2144LL, v141);
  }
  return ret;
};

// Line 232: range 0000000013AC3A8A-0000000013AC5FBA
int32_t __cdecl FetterExcelConfigMgr::checkFetterConfig(
        const FetterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  std::tuple_element<1,std::pair<unsigned int const,data::FetterConfig*> >::type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rdi
  __int64 v11; // rdx
  char v12; // cl
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  const char *v17; // rsi
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  __int64 p_open_conds; // rcx
  __int64 p_finish_conds; // rcx
  __int64 p_conceal_conds; // rcx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  __int64 v35; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v36; // rax
  int *v37; // rdx
  int v38; // ecx
  char v39; // al
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  __int64 v48; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v49; // rax
  int *v50; // rdx
  int v51; // ecx
  char v52; // al
  __int64 v53; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v54; // rax
  int *v55; // rdx
  int v56; // ecx
  char v57; // al
  JsonConfigMgr *p_json_config_mgr; // rsi
  int v59; // ecx
  uint32_t v60; // edx
  bool v61; // r15
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rdx
  __int64 v70; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v71; // rax
  int *v72; // rdx
  int v73; // ecx
  char v74; // al
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rdx
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rdx
  __int64 v81; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v82; // rax
  int *v83; // rdx
  int v84; // ecx
  char v85; // al
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rdx
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rdx
  __int64 v92; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v93; // rax
  int *v94; // rdx
  int v95; // ecx
  char v96; // al
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rdx
  int32_t ret; // [rsp+14h] [rbp-61Ch]
  std::initializer_list<std::vector<data::FetterConditionConfig>*>::const_iterator __for_begin; // [rsp+18h] [rbp-618h]
  std::unordered_map<unsigned int,data::FetterConfig*> *__for_range; // [rsp+20h] [rbp-610h]
  const unsigned int *fetter_id; // [rsp+28h] [rbp-608h]
  std::tuple_element<1,std::pair<unsigned int const,data::FetterConfig*> >::type *fetter_config_ptr; // [rsp+30h] [rbp-600h]
  std::initializer_list<std::vector<data::FetterConditionConfig>*>::const_iterator __for_end; // [rsp+40h] [rbp-5F0h]
  const std::vector<data::FetterConditionConfig> *cond_vec_ptr; // [rsp+48h] [rbp-5E8h]
  const data::FetterConditionConfig *cond; // [rsp+58h] [rbp-5D8h]
  char v112[1488]; // [rsp+60h] [rbp-5D0h] BYREF

  v2 = (unsigned __int64)v112;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1440LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "30 32 4 14 dungeon_id:297 48 4 12 scene_id:315 64 4 12 point_id:316 80 4 12 quest_id:333 96 4 19"
                        " parent_quest_id:350 112 4 11 city_id:367 128 8 15 __for_begin:235 160 8 13 __for_end:235 192 8 "
                        "15 __for_begin:265 224 8 13 __for_end:265 256 16 9 <unknown> 288 16 9 <unknown> 320 16 9 <unknow"
                        "n> 352 24 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown"
                        "> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown>"
                        " 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unkno"
                        "wn> 1312 32 9 <unknown> 1376 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = FetterExcelConfigMgr::checkFetterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862731] = -234881024;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -202116109;
  ret = 0;
  __for_range = &this->fetter_config_map;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FetterConfig*>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::FetterConfig *>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FetterConfig*>::const_iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::FetterConfig *>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FetterConfig *>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterConfig*>,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterConfig*>,false> *)(v2 + 160)) )
  {
    *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    v5 = (unsigned __int64)std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FetterConfig *>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FetterConfig*>,false,false> *const)(v2 + 128));
    if ( *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store16();
    if ( *(_WORD *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load16(v5);
    v6 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)(v2 + 256) = *(_QWORD *)v5;
    *(_QWORD *)(v2 + 264) = v6;
    fetter_id = std::get<0ul,unsigned int const,data::FetterConfig *>((std::pair<unsigned int const,data::FetterConfig*> *)(v2 + 256));
    v7 = std::get<1ul,unsigned int const,data::FetterConfig *>((std::pair<unsigned int const,data::FetterConfig*> *)(v2 + 256));
    fetter_config_ptr = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    if ( *fetter_config_ptr )
    {
      p_avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)fetter_config_ptr >> 3) + 0x7FFF8000) )
      {
        p_avatar_config_mgr = (AvatarExcelConfigMgr *)fetter_config_ptr;
        __asan_report_load8(fetter_config_ptr);
      }
      v11 = (__int64)*fetter_config_ptr;
      v12 = *(_BYTE *)(((unsigned __int64)&(*fetter_config_ptr)->avatar_id >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)(((*(_BYTE *)fetter_config_ptr + 12) & 7) + 3) >= v12 )
      {
        p_avatar_config_mgr = (AvatarExcelConfigMgr *)&(*fetter_config_ptr)->avatar_id;
        __asan_report_load4(p_avatar_config_mgr);
      }
      if ( data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, *(unsigned int *)(v11 + 12)) )
      {
        v17 = (const char *)fetter_id;
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::FettersExcelConfig> const,unsigned int>(
               &this->fetters_excel_config_map,
               fetter_id) )
        {
          goto LABEL_37;
        }
        v17 = (const char *)fetter_id;
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig> const,unsigned int>(
               &this->photograph_config_mgr.photograph_posename_excel_config_map,
               fetter_id) )
        {
          goto LABEL_37;
        }
        v17 = (const char *)fetter_id;
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig> const,unsigned int>(
               &this->photograph_config_mgr.photograph_expression_excel_config_map,
               fetter_id) )
        {
          goto LABEL_37;
        }
        if ( *(_BYTE *)(((unsigned __int64)fetter_config_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(fetter_config_ptr);
        if ( std::vector<data::FetterConditionConfig>::empty(&(*fetter_config_ptr)->finish_conds) )
          v18 = 1;
        else
LABEL_37:
          v18 = 0;
        if ( v18 )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/FetterExcelConfig.cpp",
            "checkFetterConfig",
            254);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [138],(char *[138])0>(
                  v19,
                  (const char (*)[138])byte_1AC78300);
          v17 = (const char *)fetter_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, fetter_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        *(_QWORD *)(v2 + 288) = 0LL;
        *(_QWORD *)(v2 + 296) = 0LL;
        if ( *(_BYTE *)(((v2 + 296) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 296, v17);
        *(_QWORD *)(v2 + 296) = 3LL;
        if ( *(_BYTE *)(((unsigned __int64)fetter_config_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(fetter_config_ptr);
        p_open_conds = (__int64)&(*fetter_config_ptr)->open_conds;
        if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 352, v17);
        *(_QWORD *)(v2 + 352) = p_open_conds;
        p_finish_conds = (__int64)&(*fetter_config_ptr)->finish_conds;
        if ( *(_BYTE *)(((v2 + 360) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 360, v17);
        *(_QWORD *)(v2 + 360) = p_finish_conds;
        p_conceal_conds = (__int64)&(*fetter_config_ptr)->conceal_conds;
        if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 368, v17);
        *(_QWORD *)(v2 + 368) = p_conceal_conds;
        if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 288, v17);
        *(_QWORD *)(v2 + 288) = v2 + 352;
        __for_begin = std::initializer_list<std::vector<data::FetterConditionConfig> *>::begin((const std::initializer_list<std::vector<data::FetterConditionConfig>*> *const)(v2 + 288));
        __for_end = std::initializer_list<std::vector<data::FetterConditionConfig> *>::end((const std::initializer_list<std::vector<data::FetterConditionConfig>*> *const)(v2 + 288));
        while ( __for_begin != __for_end )
        {
          if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
            __asan_report_load8(__for_begin);
          cond_vec_ptr = *__for_begin;
          if ( *__for_begin )
          {
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 192, v17);
            *(std::vector<data::FetterConditionConfig>::const_iterator *)(v2 + 192) = std::vector<data::FetterConditionConfig>::begin(cond_vec_ptr);
            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 224, v17);
            *(std::vector<data::FetterConditionConfig>::const_iterator *)(v2 + 224) = std::vector<data::FetterConditionConfig>::end(cond_vec_ptr);
            while ( 1 )
            {
              v17 = (const char *)(v2 + 224);
              if ( !__gnu_cxx::operator!=<data::FetterConditionConfig const*,std::vector<data::FetterConditionConfig>>(
                      (const __gnu_cxx::__normal_iterator<const data::FetterConditionConfig*,std::vector<data::FetterConditionConfig> > *)(v2 + 192),
                      (const __gnu_cxx::__normal_iterator<const data::FetterConditionConfig*,std::vector<data::FetterConditionConfig> > *)(v2 + 224)) )
                break;
              cond = __gnu_cxx::__normal_iterator<data::FetterConditionConfig const*,std::vector<data::FetterConditionConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::FetterConditionConfig*,std::vector<data::FetterConditionConfig> > *const)(v2 + 192));
              if ( *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&cond->cond_type);
              }
              switch ( cond->cond_type )
              {
                case FETTER_COND_FETTER_LEVEL:
                case FETTER_COND_AVATAR_LEVEL:
                case FETTER_COND_AVATAR_PROMOTE_LEVEL:
                  if ( std::vector<unsigned int>::size(&cond->param_list) != 1 )
                  {
                    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 672, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 672),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/FetterExcelConfig.cpp",
                      "checkFetterConfig",
                      274);
                    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 672),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v26 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                            v25,
                            (const char (*)[36])"param_list's size != 1, cond_type: ");
                    v27 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                            v26,
                            &cond->cond_type);
                    v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v27,
                            (const char (*)[13])", fetter_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, fetter_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
                    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  break;
                case FETTER_COND_FINISH_DUNGEON:
                  if ( std::vector<unsigned int>::size(&cond->param_list) == 1 )
                  {
                    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
                    v35 = 0LL;
                    v36 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
                    v37 = (int *)v36;
                    if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v36);
                    }
                    v38 = *v37;
                    v39 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
                    if ( v39 != 0 && v39 <= 3 )
                    {
                      LOBYTE(v35) = v39 != 0;
                      __asan_report_store4(v2 + 32, v35);
                    }
                    *(_DWORD *)(v2 + 32) = v38;
                    if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                            &txt_config_mgr->dungeon_config_mgr,
                            *(unsigned int *)(v2 + 32)) )
                    {
                      *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 864, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 864),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/FetterExcelConfig.cpp",
                        "checkFetterConfig",
                        300);
                      v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 864),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v41 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                              v40,
                              (const char (*)[41])"findDungeonExcelConfig fail, dungeon_id:");
                      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v41,
                              (const unsigned int *)(v2 + 32));
                      v43 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v42,
                              (const char (*)[12])" fetter_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, fetter_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
                      *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 800, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 800),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/FetterExcelConfig.cpp",
                      "checkFetterConfig",
                      293);
                    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 800),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v34 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                            v33,
                            (const char (*)[78])"param_list's size is not 1, cond_type: FETTER_COND_FINISH_DUNGEON, fetter_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, fetter_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
                    *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
                  break;
                case FETTER_COND_UNLOCK_TRANS_POINT:
                case FETTER_COND_UNLOCK_AREA:
                  if ( std::vector<unsigned int>::size(&cond->param_list) == 2 )
                  {
                    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
                    v48 = 0LL;
                    v49 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
                    v50 = (int *)v49;
                    if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v49);
                    }
                    v51 = *v50;
                    v52 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
                    if ( v52 != 0 && v52 <= 3 )
                    {
                      LOBYTE(v48) = v52 != 0;
                      __asan_report_store4(v2 + 48, v48);
                    }
                    *(_DWORD *)(v2 + 48) = v51;
                    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
                    v53 = 1LL;
                    v54 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 1uLL);
                    v55 = (int *)v54;
                    if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v54);
                    }
                    v56 = *v55;
                    v57 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
                    if ( v57 != 0 && v57 <= 3 )
                    {
                      LOBYTE(v53) = v57 != 0;
                      __asan_report_store4(v2 + 64, v53);
                    }
                    *(_DWORD *)(v2 + 64) = v56;
                    *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
                    p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
                    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(v2 + 64);
                    }
                    v59 = *(_DWORD *)(v2 + 64);
                    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(v2 + 48);
                    }
                    v60 = *(_DWORD *)(v2 + 48);
                    if ( *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) )
                      __asan_report_store16();
                    JsonConfigMgr::findScenePoint((const JsonConfigMgr *const)(v2 + 320), p_json_config_mgr, v60, v59);
                    v61 = std::operator==<data::ConfigScenePoint>(
                            0LL,
                            (const std::shared_ptr<data::ConfigScenePoint> *)(v2 + 320));
                    std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v2 + 320));
                    *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -1800;
                    if ( v61 )
                    {
                      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 992, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 992),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/FetterExcelConfig.cpp",
                        "checkFetterConfig",
                        319);
                      v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 992),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v63 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                              v62,
                              (const char (*)[31])"findScenePoint fail, scene_id:");
                      v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v63,
                              (const unsigned int *)(v2 + 48));
                      v65 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                              v64,
                              (const char (*)[11])" point_id:");
                      v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v65,
                              (const unsigned int *)(v2 + 64));
                      v67 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v66,
                              (const char (*)[12])" fetter_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, fetter_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 928, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 928),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/FetterExcelConfig.cpp",
                      "checkFetterConfig",
                      311);
                    v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 928),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v45 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                            v44,
                            (const char (*)[40])"param_list's size is not 2, cond_type: ");
                    v46 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                            v45,
                            &cond->cond_type);
                    v47 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v46,
                            (const char (*)[13])", fetter_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, fetter_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
                    *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
                  break;
                case FETTER_COND_FINISH_QUEST:
                  if ( std::vector<unsigned int>::size(&cond->param_list) == 1 )
                  {
                    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
                    v70 = 0LL;
                    v71 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
                    v72 = (int *)v71;
                    if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v71 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v71);
                    }
                    v73 = *v72;
                    v74 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
                    if ( v74 != 0 && v74 <= 3 )
                    {
                      LOBYTE(v70) = v74 != 0;
                      __asan_report_store4(v2 + 80, v70);
                    }
                    *(_DWORD *)(v2 + 80) = v73;
                    if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                            &txt_config_mgr->quest_config_mgr,
                            *(unsigned int *)(v2 + 80)) )
                    {
                      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1120, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1120),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/FetterExcelConfig.cpp",
                        "checkFetterConfig",
                        336);
                      v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1120),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v76 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                              v75,
                              (const char (*)[37])"findQuestExcelConfig fail, quest_id:");
                      v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v76,
                              (const unsigned int *)(v2 + 80));
                      v78 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v77,
                              (const char (*)[12])" fetter_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, fetter_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1056, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1056),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/FetterExcelConfig.cpp",
                      "checkFetterConfig",
                      329);
                    v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1056),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v69 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                            v68,
                            (const char (*)[76])"param_list's size is not 1, cond_type: FETTER_COND_FINISH_QUEST, fetter_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, fetter_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
                    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
                  break;
                case FETTER_COND_PLAYER_BIRTHDAY:
                case FETTER_COND_AVATAR_BIRTHDAY:
                case FETTER_COND_NOT_OPEN:
                  if ( !std::vector<unsigned int>::empty(&cond->param_list) )
                  {
                    *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 736, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 736),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/FetterExcelConfig.cpp",
                      "checkFetterConfig",
                      284);
                    v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 736),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v30 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                            v29,
                            (const char (*)[34])"param_list not empty, cond_type: ");
                    v31 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                            v30,
                            &cond->cond_type);
                    v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v31,
                            (const char (*)[13])", fetter_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, fetter_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
                    *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  break;
                case FETTER_COND_FINISH_PARENT_QUEST:
                  if ( std::vector<unsigned int>::size(&cond->param_list) == 1 )
                  {
                    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
                    v81 = 0LL;
                    v82 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
                    v83 = (int *)v82;
                    if ( *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v82 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v82);
                    }
                    v84 = *v83;
                    v85 = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
                    if ( v85 != 0 && v85 <= 3 )
                    {
                      LOBYTE(v81) = v85 != 0;
                      __asan_report_store4(v2 + 96, v81);
                    }
                    *(_DWORD *)(v2 + 96) = v84;
                    if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
                            &txt_config_mgr->quest_config_mgr,
                            *(unsigned int *)(v2 + 96)) )
                    {
                      *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1248, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1248),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/FetterExcelConfig.cpp",
                        "checkFetterConfig",
                        353);
                      v86 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1248),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v87 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                              v86,
                              (const char (*)[48])"findMainQuestExcelConfig fail, parent_quest_id:");
                      v88 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v87,
                              (const unsigned int *)(v2 + 96));
                      v89 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v88,
                              (const char (*)[12])" fetter_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, fetter_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                      *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1184, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1184),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/FetterExcelConfig.cpp",
                      "checkFetterConfig",
                      346);
                    v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1184),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v80 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
                            v79,
                            (const char (*)[83])"param_list's size is not 1, cond_type: FETTER_COND_FINISH_PARENT_QUEST, fetter_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, fetter_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                    *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
                  break;
                case FETTER_COND_UNLOCK_ARENA_BY_CITY_ID:
                  if ( std::vector<unsigned int>::size(&cond->param_list) == 1 )
                  {
                    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
                    v92 = 0LL;
                    v93 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
                    v94 = (int *)v93;
                    if ( *(_BYTE *)(((unsigned __int64)v93 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v93 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v93 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v93);
                    }
                    v95 = *v94;
                    v96 = *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000);
                    if ( v96 != 0 && v96 <= 3 )
                    {
                      LOBYTE(v92) = v96 != 0;
                      __asan_report_store4(v2 + 112, v92);
                    }
                    *(_DWORD *)(v2 + 112) = v95;
                    if ( !WorldAreaExcelConfigMgr::findCityConfig(
                            &txt_config_mgr->world_area_config_mgr,
                            *(_DWORD *)(v2 + 112)) )
                    {
                      *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1376, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1376),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/FetterExcelConfig.cpp",
                        "checkFetterConfig",
                        370);
                      v97 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1376),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v98 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                              v97,
                              (const char (*)[17])"invalid city_id:");
                      v99 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v98,
                              (const unsigned int *)(v2 + 112));
                      v100 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                               v99,
                               (const char (*)[12])" fetter_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v100, fetter_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                      *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1312, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1312),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/FetterExcelConfig.cpp",
                      "checkFetterConfig",
                      363);
                    v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1312),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v91 = common::milog::MiLogStream::operator<<<char [87],(char *[87])0>(
                            v90,
                            (const char (*)[87])"param_list's size is not 1, cond_type: FETTER_COND_UNLOCK_ARENA_BY_CITY_ID, fetter_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v91, fetter_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
                  break;
                default:
                  break;
              }
              __gnu_cxx::__normal_iterator<data::FetterConditionConfig const*,std::vector<data::FetterConditionConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::FetterConditionConfig*,std::vector<data::FetterConditionConfig> > *const)(v2 + 192));
            }
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
          }
          else
          {
            *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 608, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 608),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/FetterExcelConfig.cpp",
              "checkFetterConfig",
              261);
            v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = "cond_vec_ptr is null";
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v24,
              (const char (*)[21])"cond_vec_ptr is null");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
            *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          ++__for_begin;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/FetterExcelConfig.cpp",
          "checkFetterConfig",
          245);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v13, (const char (*)[36])byte_1AC78260);
        if ( *(_BYTE *)(((unsigned __int64)fetter_config_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(fetter_config_ptr);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                &(*fetter_config_ptr)->avatar_id);
        v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])byte_1AC782C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, fetter_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/FetterExcelConfig.cpp",
        "checkFetterConfig",
        239);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 416),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v8, (const char (*)[39])byte_1AC78200);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, fetter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FetterConfig *>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FetterConfig*>,false,false> *const)(v2 + 128));
  }
  if ( v112 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80AC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 180) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1440LL, v112);
  }
  return ret;
};

// Line 388: range 0000000013AC5FBC-0000000013AC63B7
int32_t __cdecl FetterExcelConfigMgr::rewriteFetterCharacterCardConfig(
        FetterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *p_fetter_level; // rcx
  const unsigned int *p_avatar_id; // rdx
  __int64 v7; // rsi
  const unsigned int *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-F4h]
  data::FetterCharacterCardExcelConfigVec *__for_range; // [rsp+20h] [rbp-F0h]
  const data::FetterCharacterCardExcelConfig *config; // [rsp+28h] [rbp-E8h]
  char v18[224]; // [rsp+30h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:390 64 8 13 __for_end:390 96 8 23 avatar_fetter_index:392 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = FetterExcelConfigMgr::rewriteFetterCharacterCardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  ret = 0;
  __for_range = &this->fetter_character_card_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::vector<data::FetterCharacterCardExcelConfig>::iterator *)(v2 + 32) = std::vector<data::FetterCharacterCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::FetterCharacterCardExcelConfig>::iterator *)(v2 + 64) = std::vector<data::FetterCharacterCardExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::FetterCharacterCardExcelConfig *,std::vector<data::FetterCharacterCardExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::FetterCharacterCardExcelConfig*,std::vector<data::FetterCharacterCardExcelConfig> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<data::FetterCharacterCardExcelConfig*,std::vector<data::FetterCharacterCardExcelConfig> > *)(v2 + 64)) )
  {
    config = __gnu_cxx::__normal_iterator<data::FetterCharacterCardExcelConfig *,std::vector<data::FetterCharacterCardExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::FetterCharacterCardExcelConfig*,std::vector<data::FetterCharacterCardExcelConfig> > *const)(v2 + 32));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    p_fetter_level = &config->fetter_level;
    p_avatar_id = &config->avatar_id;
    v7 = *(unsigned __int8 *)(((v2 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 )
      __asan_report_store8(v2 + 96, v7);
    *(std::pair<unsigned int,unsigned int> *)(v2 + 96) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                           p_avatar_id,
                                                           p_fetter_level);
    v9 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::emplace<std::pair<unsigned int,unsigned int>&,unsigned int const&>(
           &this->avatar_fetter_level_reward_map,
           (std::pair<unsigned int,unsigned int> *)(v2 + 96),
           &config->reward_id,
           (std::pair<unsigned int,unsigned int> *)&this->avatar_fetter_level_reward_map,
           v8);
    if ( !v9.second )
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
        "./src/txt_data_manual/FetterExcelConfig.cpp",
        "rewriteFetterCharacterCardConfig",
        395);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v10, (const char (*)[43])byte_1AC788C0);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->avatar_id);
      v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])byte_1AC78920);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->fetter_level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    __gnu_cxx::__normal_iterator<data::FetterCharacterCardExcelConfig *,std::vector<data::FetterCharacterCardExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::FetterCharacterCardExcelConfig*,std::vector<data::FetterCharacterCardExcelConfig> > *const)(v2 + 32));
  }
  result = ret;
  if ( v18 == (char *)v2 )
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

// Line 405: range 0000000013AC63B8-0000000013AC6A38
int32_t __cdecl FetterExcelConfigMgr::checkFetterCharacterCardConfig(
        const FetterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-154h]
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *__for_range; // [rsp+20h] [rbp-150h]
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>::reference v15; // [rsp+28h] [rbp-148h]
  std::tuple_element<0,std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *avatar_fetter_index; // [rsp+30h] [rbp-140h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *reward_id; // [rsp+38h] [rbp-138h]
  const unsigned int *avatar_id; // [rsp+40h] [rbp-130h]
  char v19[288]; // [rsp+50h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:407 64 8 13 __for_end:407 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = FetterExcelConfigMgr::checkFetterCharacterCardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->avatar_fetter_level_reward_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v2 + 32) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v2 + 64) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v2 + 64)) )
  {
    v15 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v2 + 32));
    avatar_fetter_index = std::get<0ul,std::pair<unsigned int,unsigned int> const,unsigned int>(v15);
    reward_id = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,unsigned int>(v15);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 64);
    if ( ((unsigned __int8)avatar_fetter_index & 7) >= *(_BYTE *)(((unsigned __int64)avatar_fetter_index >> 3)
                                                                + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)avatar_fetter_index >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&avatar_fetter_index->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)avatar_fetter_index + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&avatar_fetter_index->second
                                                                        + 3) >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load_n(avatar_fetter_index, 8LL);
    }
    *(std::tuple_element<0,std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *)(v2 + 96) = *avatar_fetter_index;
    avatar_id = std::get<0ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)(v2 + 96));
    std::get<1ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)(v2 + 96));
    p_avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(avatar_id);
    }
    if ( data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, *avatar_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(reward_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              *reward_id,
                              ITEM_LIMIT_FETTER_LEVEL_REWARD) != 1 )
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
          "./src/txt_data_manual/FetterExcelConfig.cpp",
          "checkFetterCharacterCardConfig",
          418);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
               v8,
               (const char (*)[45])"isItemAllowedByOutputControl fail, RewardID:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, reward_id);
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])byte_1AC78AE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, avatar_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/FetterExcelConfig.cpp",
        "checkFetterCharacterCardConfig",
        412);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             v6,
             (const char (*)[39])"findAvatarExcelConfig fail, avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, avatar_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v2 + 32));
  }
  result = ret;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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
