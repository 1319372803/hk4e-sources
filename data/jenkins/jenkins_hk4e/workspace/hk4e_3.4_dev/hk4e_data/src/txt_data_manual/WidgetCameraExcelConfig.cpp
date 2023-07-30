// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WidgetCameraExcelConfig.cpp

// Line 17: range 000000000CB61DAC-000000000CB621D9
int32_t __cdecl WidgetCameraExcelConfigMgr::rewriteConfig(
        WidgetCameraExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *p_config_id; // rcx
  const unsigned int *p_camera_id; // rdx
  __int64 v7; // rsi
  std::pair<unsigned int,unsigned int> *v8; // rcx
  const unsigned int *v9; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-114h]
  data::WidgetCameraScanExcelConfigMap *__for_range; // [rsp+30h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetCameraScanExcelConfig>,false,false>::reference v18; // [rsp+38h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WidgetCameraScanExcelConfig> >::type *config; // [rsp+48h] [rbp-F8h]
  char v20[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 14 __for_begin:19 64 8 12 __for_end:19 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WidgetCameraExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  ret = 0;
  __for_range = &this->widget_camera_scan_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WidgetCameraScanExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::WidgetCameraScanExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WidgetCameraScanExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WidgetCameraScanExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WidgetCameraScanExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WidgetCameraScanExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WidgetCameraScanExcelConfig>,false> *)(v2 + 64)) )
  {
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetCameraScanExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetCameraScanExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::WidgetCameraScanExcelConfig>(v18);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::WidgetCameraScanExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WidgetCameraScanExcelConfig>(v18);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    p_config_id = &config->config_id;
    p_camera_id = &config->camera_id;
    v7 = *(unsigned __int8 *)(((v2 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 )
      __asan_report_store8(v2 + 96, v7);
    *(std::pair<unsigned int,unsigned int> *)(v2 + 96) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                           p_camera_id,
                                                           p_config_id);
    v10 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::emplace<std::pair<unsigned int,unsigned int>,unsigned int const&>(
            &this->camera_scan_id_map_,
            (std::pair<unsigned int,unsigned int> *)(v2 + 96),
            &config->id,
            v8,
            v9);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10.second )
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
        "./src/txt_data_manual/WidgetCameraExcelConfig.cpp",
        "rewriteConfig",
        23);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v11,
              (const char (*)[21])"duplicate config_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->config_id);
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" in camera_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->camera_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetCameraScanExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetCameraScanExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v20 == (char *)v2 )
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

// Line 31: range 000000000CB621DA-000000000CB621EC
int32_t __cdecl WidgetCameraExcelConfigMgr::checkConfig(
        WidgetCameraExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 36: range 000000000CB621EE-000000000CB62479
__int64 __fastcall WidgetCameraExcelConfigMgr::findCameraScanId(
        const WidgetCameraExcelConfigMgr *const this,
        __int64 camera_id,
        uint32_t entity_config_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *p_camera_scan_id_map; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v12[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 12 camera_id:35 48 4 19 entity_config_id:35 64 8 5 it:37 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WidgetCameraExcelConfigMgr::findCameraScanId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 32) = camera_id;
  *(_DWORD *)(v3 + 48) = entity_config_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, camera_id);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v3 + 32),
                                                         (unsigned int *)(v3 + 48));
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v3 + 48);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v3 + 64) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::find(&this->camera_scan_id_map_, (const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_camera_scan_id_map = &this->camera_scan_id_map_;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 96);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v3 + 128) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::end(p_camera_scan_id_map);
  v7 = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v3 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v9->second;
  }
  if ( v12 == (char *)v3 )
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
