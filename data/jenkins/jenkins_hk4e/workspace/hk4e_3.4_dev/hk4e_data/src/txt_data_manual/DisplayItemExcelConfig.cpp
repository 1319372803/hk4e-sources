// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DisplayItemExcelConfig.cpp

// Line 19: range 0000000013A7E46C-0000000013A7E7F5
int32_t __cdecl DisplayItemExcelConfigMgr::rewriteConfig(
        DisplayItemExcelConfigMgr *const this,
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
  data::DisplayItemExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DisplayItemExcelConfig>,false,false>::reference v12; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::DisplayItemExcelConfig> >::type *id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DisplayItemExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:20 64 8 12 __for_end:20 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DisplayItemExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->display_item_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DisplayItemExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::DisplayItemExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DisplayItemExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DisplayItemExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DisplayItemExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DisplayItemExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DisplayItemExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_19;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DisplayItemExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DisplayItemExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::DisplayItemExcelConfig>(v12);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DisplayItemExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DisplayItemExcelConfig>(v12);
    if ( *(_BYTE *)(((unsigned __int64)&config->display_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->display_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->display_type);
    }
    if ( config->display_type == BARTENDER_ITEM )
    {
      v6 = std::set<unsigned int>::insert(&this->bartender_material_set, id);
      if ( !v6.second )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DisplayItemExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DisplayItemExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/DisplayItemExcelConfig.cpp",
    "rewriteConfig",
    26);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         v7,
         (const char (*)[33])"duplicate bartender_material_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_19:
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

// Line 35: range 0000000013A7E7F6-0000000013A7E808
int32_t __cdecl DisplayItemExcelConfigMgr::checkConfig(
        DisplayItemExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 40: range 0000000013A7E80A-0000000013A7E87D
bool __cdecl DisplayItemExcelConfigMgr::isBartenderMaterial(
        const DisplayItemExcelConfigMgr *const this,
        uint32_t material_id)
{
  const data::DisplayItemExcelConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = data::DisplayItemExcelConfigMgrBase::findDisplayItemExcelConfig(this, material_id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->display_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->display_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->display_type);
  }
  return config_ptr->display_type == BARTENDER_ITEM;
};
