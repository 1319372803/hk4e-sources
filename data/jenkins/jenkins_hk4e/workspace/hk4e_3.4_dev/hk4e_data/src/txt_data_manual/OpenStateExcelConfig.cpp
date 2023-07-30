// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/OpenStateExcelConfig.cpp

// Line 18: range 0000000014628B78-0000000014628CAA
bool __cdecl OpenStateExcelConfigMgr::OpenStateCondComparer::operator()(
        const OpenStateExcelConfigMgr::OpenStateCondComparer *const this,
        const data::OpenStateCond *lhs,
        const data::OpenStateCond *rhs)
{
  data::OpenStateCondType cond_type; // ecx
  uint32_t param; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs->cond_type);
  }
  cond_type = lhs->cond_type;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->cond_type);
  }
  if ( cond_type != rhs->cond_type )
    return lhs->cond_type < rhs->cond_type;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->param);
  }
  param = lhs->param;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->param);
  }
  return param < rhs->param;
};

// Line 24: range 0000000014628CFE-0000000014629414
int32_t __cdecl OpenStateExcelConfigMgr::rewriteConfig(
        OpenStateExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  data::OpenStateCond *M_current; // r14
  data::OpenStateCond *v7; // rcx
  OpenStateExcelConfigMgr::rewriteConfig::<lambda(const data::OpenStateCond&)> v8; // dl
  char *v9; // rsi
  std::vector<unsigned int> *v10; // rax
  int32_t result; // eax
  data::OpenStateConfigMap *__for_range; // [rsp+18h] [rbp-1E8h]
  data::OpenStateConfigMap *__for_range_0; // [rsp+20h] [rbp-1E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false>::reference v14; // [rsp+28h] [rbp-1D8h]
  std::tuple_element<1,std::pair<unsigned int const,data::OpenStateConfig> >::type *open_state_config_0; // [rsp+38h] [rbp-1C8h]
  std::vector<data::OpenStateCond> *__for_range_1; // [rsp+40h] [rbp-1C0h]
  data::OpenStateCond *open_state_cond; // [rsp+48h] [rbp-1B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false>::reference __in; // [rsp+50h] [rbp-1B0h]
  std::vector<data::OpenStateCond> *cond_vec; // [rsp+68h] [rbp-198h]
  char v20[400]; // [rsp+70h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 8 14 __for_begin:25 64 8 12 __for_end:25 96 8 12 last_iter:28 128 8 9 <unknown> 160 8 9 <u"
                        "nknown> 192 8 9 <unknown> 224 8 14 __for_begin:34 256 8 12 __for_end:34 288 8 14 __for_begin:36 "
                        "320 8 12 __for_end:36";
  *(_QWORD *)(v2 + 16) = OpenStateExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -202116352;
  __for_range = &this->open_state_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpenStateConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::OpenStateConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpenStateConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OpenStateConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::OpenStateConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpenStateConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpenStateConfig>,false> *)(v2 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::OpenStateConfig>(__in);
    cond_vec = &std::get<1ul,unsigned int const,data::OpenStateConfig>(__in)->cond;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    M_current = std::vector<data::OpenStateCond>::end(cond_vec)._M_current;
    v7 = std::vector<data::OpenStateCond>::begin(cond_vec)._M_current;
    v8.gap0[0] = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
    if ( v8.gap0[0] )
      __asan_report_store8(v2 + 96, v5);
    *(__gnu_cxx::__normal_iterator<data::OpenStateCond*,std::vector<data::OpenStateCond> > *)(v2 + 96) = std::remove_if<__gnu_cxx::__normal_iterator<data::OpenStateCond *,std::vector<data::OpenStateCond>>,OpenStateExcelConfigMgr::rewriteConfig(TxtConfigMgr &)::{lambda(data::OpenStateCond const&)#1}>((__gnu_cxx::__normal_iterator<data::OpenStateCond*,std::vector<data::OpenStateCond> >)v7, (__gnu_cxx::__normal_iterator<data::OpenStateCond*,std::vector<data::OpenStateCond> >)M_current, v8);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, M_current);
    *(std::vector<data::OpenStateCond>::iterator *)(v2 + 128) = std::vector<data::OpenStateCond>::end(cond_vec);
    __gnu_cxx::__normal_iterator<data::OpenStateCond const*,std::vector<data::OpenStateCond>>::__normal_iterator<data::OpenStateCond*>(
      (__gnu_cxx::__normal_iterator<const data::OpenStateCond*,std::vector<data::OpenStateCond> > *const)(v2 + 192),
      (const __gnu_cxx::__normal_iterator<data::OpenStateCond*,std::vector<data::OpenStateCond> > *)(v2 + 128));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    __gnu_cxx::__normal_iterator<data::OpenStateCond const*,std::vector<data::OpenStateCond>>::__normal_iterator<data::OpenStateCond*>(
      (__gnu_cxx::__normal_iterator<const data::OpenStateCond*,std::vector<data::OpenStateCond> > *const)(v2 + 160),
      (const __gnu_cxx::__normal_iterator<data::OpenStateCond*,std::vector<data::OpenStateCond> > *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 160);
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 192);
    std::vector<data::OpenStateCond>::erase(
      cond_vec,
      *(std::vector<data::OpenStateCond>::const_iterator *)(v2 + 160),
      *(std::vector<data::OpenStateCond>::const_iterator *)(v2 + 192));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->open_state_config_map;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v5);
  *(std::unordered_map<unsigned int,data::OpenStateConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::OpenStateConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 256, v5);
  *(std::unordered_map<unsigned int,data::OpenStateConfig>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,data::OpenStateConfig>::end(__for_range_0);
  while ( 1 )
  {
    v9 = (char *)(v2 + 256);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::OpenStateConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpenStateConfig>,false> *)(v2 + 224),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpenStateConfig>,false> *)(v2 + 256)) )
      break;
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false> *const)(v2 + 224));
    std::get<0ul,unsigned int const,data::OpenStateConfig>(v14);
    open_state_config_0 = std::get<1ul,unsigned int const,data::OpenStateConfig>(v14);
    __for_range_1 = &open_state_config_0->cond;
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, v9);
    *(std::vector<data::OpenStateCond>::iterator *)(v2 + 288) = std::vector<data::OpenStateCond>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, v9);
    *(std::vector<data::OpenStateCond>::iterator *)(v2 + 320) = std::vector<data::OpenStateCond>::end(__for_range_1);
    while ( __gnu_cxx::operator!=<data::OpenStateCond *,std::vector<data::OpenStateCond>>(
              (const __gnu_cxx::__normal_iterator<data::OpenStateCond*,std::vector<data::OpenStateCond> > *)(v2 + 288),
              (const __gnu_cxx::__normal_iterator<data::OpenStateCond*,std::vector<data::OpenStateCond> > *)(v2 + 320)) )
    {
      open_state_cond = __gnu_cxx::__normal_iterator<data::OpenStateCond *,std::vector<data::OpenStateCond>>::operator*((const __gnu_cxx::__normal_iterator<data::OpenStateCond*,std::vector<data::OpenStateCond> > *const)(v2 + 288));
      v10 = std::map<data::OpenStateCond,std::vector<unsigned int>,OpenStateExcelConfigMgr::OpenStateCondComparer,std::allocator<std::pair<data::OpenStateCond const,std::vector<unsigned int>>>>::operator[](
              &this->cond_type_map_,
              open_state_cond);
      std::vector<unsigned int>::push_back(v10, &open_state_config_0->id);
      __gnu_cxx::__normal_iterator<data::OpenStateCond *,std::vector<data::OpenStateCond>>::operator++((__gnu_cxx::__normal_iterator<data::OpenStateCond*,std::vector<data::OpenStateCond> > *const)(v2 + 288));
    }
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false> *const)(v2 + 224));
  }
  result = 0;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 28: range 0000000014628CAC-0000000014628CFC
bool __cdecl OpenStateExcelConfigMgr::rewriteConfig(TxtConfigMgr &)::{lambda(data::OpenStateCond const&)#1}::operator()(
        const OpenStateExcelConfigMgr::rewriteConfig::<lambda(const data::OpenStateCond&)> *const __closure,
        const data::OpenStateCond *cond)
{
  if ( *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->cond_type);
  }
  return cond->cond_type == OPEN_STATE_COND_NONE;
};

// Line 45: range 0000000014629416-000000001462943A
int32_t __cdecl OpenStateExcelConfigMgr::checkConfig(
        OpenStateExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return OpenStateExcelConfigMgr::checkOpenStateConfig(this, txt_config_mgr);
};

// Line 50: range 000000001462943C-000000001462A52A
int32_t __cdecl OpenStateExcelConfigMgr::checkOpenStateConfig(
        const OpenStateExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t *p_param; // rax
  __int64 v8; // rsi
  uint32_t param; // ecx
  char v10; // al
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  int v16; // eax
  QuestExcelConfigMgr *v17; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  int v22; // ecx
  char v23; // al
  uint32_t param2; // ecx
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // eax
  ReputationExcelConfigMgr *p_reputation_config_mgr; // rcx
  uint32_t CityReputationMaxLevel; // ecx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  int v37; // ecx
  char v38; // al
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int v42; // edx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  int v47; // edx
  int v48; // eax
  data::OpenStateConfigMap *__for_range; // [rsp+10h] [rbp-2C0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false>::reference v52; // [rsp+18h] [rbp-2B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::OpenStateConfig> >::type *id; // [rsp+20h] [rbp-2B0h]
  std::vector<data::OpenStateCond> *__for_range_0; // [rsp+30h] [rbp-2A0h]
  const data::OpenStateCond *open_state_cond; // [rsp+38h] [rbp-298h]
  char v56[656]; // [rsp+40h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 4 8 param:55 48 4 10 city_id:79 64 4 8 level:80 80 4 14 offering_id:96 96 8 14 __for_begin"
                        ":51 128 8 12 __for_end:51 160 8 14 __for_begin:53 192 8 12 __for_end:53 224 32 9 <unknown> 288 3"
                        "2 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = OpenStateExcelConfigMgr::checkOpenStateConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -202116109;
  __for_range = &this->open_state_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpenStateConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::OpenStateConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpenStateConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::OpenStateConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::OpenStateConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpenStateConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpenStateConfig>,false> *)(v3 + 128)) )
      break;
    v52 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false> *const)(v3 + 96));
    id = std::get<0ul,unsigned int const,data::OpenStateConfig>(v52);
    __for_range_0 = &std::get<1ul,unsigned int const,data::OpenStateConfig>(v52)->cond;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<data::OpenStateCond>::const_iterator *)(v3 + 160) = std::vector<data::OpenStateCond>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::vector<data::OpenStateCond>::const_iterator *)(v3 + 192) = std::vector<data::OpenStateCond>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::OpenStateCond const*,std::vector<data::OpenStateCond>>(
              (const __gnu_cxx::__normal_iterator<const data::OpenStateCond*,std::vector<data::OpenStateCond> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<const data::OpenStateCond*,std::vector<data::OpenStateCond> > *)(v3 + 192)) )
    {
      open_state_cond = __gnu_cxx::__normal_iterator<data::OpenStateCond const*,std::vector<data::OpenStateCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::OpenStateCond*,std::vector<data::OpenStateCond> > *const)(v3 + 160));
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      p_param = &open_state_cond->param;
      v8 = (((_BYTE)open_state_cond + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)p_param >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)open_state_cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_param);
      }
      param = open_state_cond->param;
      v10 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v8) = v10 != 0;
        __asan_report_store4(v3 + 32, v8);
      }
      *(_DWORD *)(v3 + 32) = param;
      if ( *(_BYTE *)(((unsigned __int64)&open_state_cond->cond_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&open_state_cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&open_state_cond->cond_type);
      }
      switch ( open_state_cond->cond_type )
      {
        case OPEN_STATE_COND_PLAYER_LEVEL:
        case OPEN_STATE_COND_GCG_LEVEL:
          goto LABEL_72;
        case OPEN_STATE_COND_QUEST:
          p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, *(unsigned int *)(v3 + 32)) )
            goto LABEL_72;
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
            "./src/txt_data_manual/OpenStateExcelConfig.cpp",
            "checkOpenStateConfig",
            65);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  v12,
                  (const char (*)[35])"OpenState quest invalid. quest_id:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 32));
          v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v14, (const char (*)[5])" id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
          *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
          break;
        case OPEN_STATE_COND_PARENT_QUEST:
          v17 = &txt_config_mgr->quest_config_mgr;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          if ( data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(v17, *(unsigned int *)(v3 + 32)) )
            goto LABEL_72;
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
            "./src/txt_data_manual/OpenStateExcelConfig.cpp",
            "checkOpenStateConfig",
            72);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  v18,
                  (const char (*)[42])"OpenState parent quest invalid. quest_id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v20, (const char (*)[5])" id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
          break;
        case OPEN_STATE_CITY_REPUTATION_LEVEL:
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v22 = *(_DWORD *)(v3 + 32);
          v23 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v23 != 0 && v23 <= 3 )
          {
            LOBYTE(v8) = v23 != 0;
            __asan_report_store4(v3 + 48, v8);
          }
          *(_DWORD *)(v3 + 48) = v22;
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((unsigned __int64)&open_state_cond->param2 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&open_state_cond->param2 >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&open_state_cond->param2);
          }
          param2 = open_state_cond->param2;
          v25 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
          if ( v25 != 0 && v25 <= 3 )
          {
            LOBYTE(v8) = v25 != 0;
            __asan_report_store4(v3 + 64, v8);
          }
          *(_DWORD *)(v3 + 64) = param2;
          if ( WorldAreaExcelConfigMgr::findCityConfig(&txt_config_mgr->world_area_config_mgr, *(_DWORD *)(v3 + 48)) )
          {
            p_reputation_config_mgr = &txt_config_mgr->reputation_config_mgr;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            CityReputationMaxLevel = ReputationExcelConfigMgr::getCityReputationMaxLevel(
                                       p_reputation_config_mgr,
                                       *(_DWORD *)(v3 + 48));
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            if ( CityReputationMaxLevel >= *(_DWORD *)(v3 + 64) )
            {
              v29 = 1;
            }
            else
            {
              *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 416, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 416),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/OpenStateExcelConfig.cpp",
                "checkOpenStateConfig",
                88);
              v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 416),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v33 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])"level:");
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v3 + 64));
              v35 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v34,
                      (const char (*)[15])byte_1ADC6F00);
              v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v35,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v36, (const char (*)[34])byte_1ADC6F40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
              *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v29 = 0;
            }
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
              "./src/txt_data_manual/OpenStateExcelConfig.cpp",
              "checkOpenStateConfig",
              83);
            v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v27 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])byte_1ADC6EC0);
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])byte_1AD7AF20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v29 = 0;
          }
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          if ( v29 )
            goto LABEL_72;
          v16 = 0;
          break;
        case OPEN_STATE_OFFERING_LEVEL:
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v37 = *(_DWORD *)(v3 + 32);
          v38 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
          if ( v38 != 0 && v38 <= 3 )
          {
            LOBYTE(v8) = v38 != 0;
            __asan_report_store4(v3 + 80, v8);
          }
          *(_DWORD *)(v3 + 80) = v37;
          if ( data::OfferingExcelConfigMgrBase::findOfferingOpenStateConfig(
                 &txt_config_mgr->offering_config_mgr,
                 *(unsigned int *)(v3 + 80)) )
          {
            v42 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 480, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 480),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/OpenStateExcelConfig.cpp",
              "checkOpenStateConfig",
              99);
            v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v40 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v39,
                    (const char (*)[13])"Offering Id:");
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v40,
                    (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v41, (const char (*)[7])byte_1AD7AF20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v42 = 0;
          }
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( v42 )
LABEL_72:
            v16 = 1;
          else
            v16 = 0;
          break;
        default:
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/OpenStateExcelConfig.cpp",
            "checkOpenStateConfig",
            105);
          v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v44 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  v43,
                  (const char (*)[34])"OpenState unknown condition type:");
          v45 = common::milog::MiLogStream::operator<<<data::OpenStateCondType,(data::OpenStateCondType*)0>(
                  v44,
                  &open_state_cond->cond_type);
          v46 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v45, (const char (*)[5])" id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
          break;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v16 != 1 )
      {
        v47 = 0;
        goto LABEL_77;
      }
      __gnu_cxx::__normal_iterator<data::OpenStateCond const*,std::vector<data::OpenStateCond>>::operator++((__gnu_cxx::__normal_iterator<const data::OpenStateCond*,std::vector<data::OpenStateCond> > *const)(v3 + 160));
    }
    v47 = 1;
LABEL_77:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v47 != 1 )
    {
      v48 = 0;
      goto LABEL_81;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false> *const)(v3 + 96));
  }
  v48 = 1;
LABEL_81:
  if ( v48 == 1 )
    v2 = 0;
  if ( v56 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
  return v2;
};

// Line 114: range 000000001462A52C-000000001462A83A
// local variable allocation has failed, the output may be wrong!
const std::vector<unsigned int> *__cdecl OpenStateExcelConfigMgr::findOpenStateByCond(
        const OpenStateExcelConfigMgr *const this,
        data::OpenStateCondType cond_type,
        uint32_t param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 *v6; // rdx
  __int64 v7; // rsi
  std::map<data::OpenStateCond,std::vector<unsigned int>,OpenStateExcelConfigMgr::OpenStateCondComparer,std::allocator<std::pair<const data::OpenStateCond,std::vector<unsigned int> > > > *p_cond_type_map; // rdx
  std::map<data::OpenStateCond,std::vector<unsigned int>,OpenStateExcelConfigMgr::OpenStateCondComparer,std::allocator<std::pair<const data::OpenStateCond,std::vector<unsigned int> > > > *v9; // rdx
  bool v10; // al
  std::vector<unsigned int> *p_second; // r14
  const std::vector<unsigned int> *result; // rax
  char v15[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 8 iter:119 64 8 9 <unknown> 96 24 8 cond:115";
  *(_QWORD *)(v3 + 16) = OpenStateExcelConfigMgr::findOpenStateByCond;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  v6 = &`vtable for'data::OpenStateCond + 2;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, *(_QWORD *)&cond_type);
  *(_QWORD *)(v3 + 96) = v6;
  if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 104, *(_QWORD *)&cond_type);
  *(_DWORD *)(v3 + 104) = 0;
  v7 = (((_BYTE)v3 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((v3 + 108) >> 3) + 0x7FFF8000) != 0
    && (char)(((v3 + 108) & 7) + 3) >= *(_BYTE *)(((v3 + 108) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3 + 108, v7);
  }
  *(_DWORD *)(v3 + 108) = 0;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 112, v7);
  *(_DWORD *)(v3 + 112) = 0;
  *(_DWORD *)(v3 + 104) = cond_type;
  *(_DWORD *)(v3 + 108) = param;
  p_cond_type_map = &this->cond_type_map_;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, v7);
  *(std::map<data::OpenStateCond,std::vector<unsigned int>,OpenStateExcelConfigMgr::OpenStateCondComparer,std::allocator<std::pair<const data::OpenStateCond,std::vector<unsigned int> > > >::const_iterator *)(v3 + 32) = std::map<data::OpenStateCond,std::vector<unsigned int>,OpenStateExcelConfigMgr::OpenStateCondComparer,std::allocator<std::pair<data::OpenStateCond const,std::vector<unsigned int>>>>::find(p_cond_type_map, (const std::map<data::OpenStateCond,std::vector<unsigned int>,OpenStateExcelConfigMgr::OpenStateCondComparer,std::allocator<std::pair<const data::OpenStateCond,std::vector<unsigned int> > > >::key_type *)(v3 + 96));
  v9 = &this->cond_type_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v3 + 96);
  *(std::map<data::OpenStateCond,std::vector<unsigned int>,OpenStateExcelConfigMgr::OpenStateCondComparer,std::allocator<std::pair<const data::OpenStateCond,std::vector<unsigned int> > > >::const_iterator *)(v3 + 64) = std::map<data::OpenStateCond,std::vector<unsigned int>,OpenStateExcelConfigMgr::OpenStateCondComparer,std::allocator<std::pair<data::OpenStateCond const,std::vector<unsigned int>>>>::end(v9);
  v10 = std::operator==(
          (const std::_Rb_tree_const_iterator<std::pair<const data::OpenStateCond,std::vector<unsigned int> > >::_Self *)(v3 + 32),
          (const std::_Rb_tree_const_iterator<std::pair<const data::OpenStateCond,std::vector<unsigned int> > >::_Self *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
    p_second = 0LL;
  else
    p_second = &std::_Rb_tree_const_iterator<std::pair<data::OpenStateCond const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::OpenStateCond,std::vector<unsigned int> > > *const)(v3 + 32))->second;
  data::OpenStateCond::~OpenStateCond((data::OpenStateCond *const)(v3 + 96));
  result = p_second;
  if ( v15 == (char *)v3 )
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
