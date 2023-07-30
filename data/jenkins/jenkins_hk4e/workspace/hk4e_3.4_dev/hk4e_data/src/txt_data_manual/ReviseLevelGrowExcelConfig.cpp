// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ReviseLevelGrowExcelConfig.cpp

// Line 22: range 0000000014654B92-0000000014654BA4
int32_t __cdecl ReviseLevelGrowExcelConfigMgr::checkConfig(
        ReviseLevelGrowExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 27: range 0000000014654BA6-0000000014654F8A
__int64 __fastcall ReviseLevelGrowExcelConfigMgr::findReviseLevel(
        const ReviseLevelGrowExcelConfigMgr *const this,
        __int64 revise_id,
        uint32_t world_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ReviseLevelGrowExcelConfigMap *p_revise_level_grow_excel_config_map; // rdx
  data::ReviseLevelGrowExcelConfigMap *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReviseLevelGrowExcelConfig>,false,false>::pointer v12; // rax
  std::vector<unsigned int>::const_reference v13; // rax
  unsigned int *v14; // rdx
  std::vector<unsigned int>::const_reference v15; // rax
  unsigned int *v16; // rdx
  const data::ReviseLevelGrowExcelConfig *excel_config; // [rsp+18h] [rbp-E8h]
  char v19[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 revise_id:26 64 8 7 iter:28 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReviseLevelGrowExcelConfigMgr::findReviseLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = revise_id;
  p_revise_level_grow_excel_config_map = &this->revise_level_grow_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, revise_id);
  *(std::unordered_map<unsigned int,data::ReviseLevelGrowExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ReviseLevelGrowExcelConfig>::find(p_revise_level_grow_excel_config_map, (const std::unordered_map<unsigned int,data::ReviseLevelGrowExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->revise_level_grow_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::ReviseLevelGrowExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ReviseLevelGrowExcelConfig>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,data::ReviseLevelGrowExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReviseLevelGrowExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReviseLevelGrowExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      "./src/txt_data_manual/ReviseLevelGrowExcelConfig.cpp",
      "findReviseLevel",
      31);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
            v9,
            (const char (*)[66])"[ReviseLevelGrowExcelConfigMgr] revise_id is invalid, revise_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
  }
  else
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReviseLevelGrowExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReviseLevelGrowExcelConfig>,false,false> *const)(v3 + 64));
    excel_config = &v12->second;
    if ( world_level < std::vector<unsigned int>::size(&v12->second.grade) )
    {
      v15 = std::vector<unsigned int>::operator[](&excel_config->grade, world_level);
      v16 = (unsigned int *)v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      result = *v16;
    }
    else
    {
      v13 = std::vector<unsigned int>::back(&excel_config->grade);
      v14 = (unsigned int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      result = *v14;
    }
  }
  if ( v19 == (char *)v3 )
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
