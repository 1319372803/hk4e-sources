// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GadgetArgumentExcelConfig.cpp

// Line 20: range 000000001444BE8E-000000001444C123
int32_t __cdecl data::DeshretObeliskChestPosInfo::toClient(
        const data::DeshretObeliskChestPosInfo *const this,
        proto::DeshretObeliskChestInfo *chest_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Vector3 *p_pos; // rsi
  int32_t result; // eax
  proto::Vector *proto_pos; // [rsp+18h] [rbp-88h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DeshretObeliskChestPosInfo::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::DeshretObeliskChestInfo::set_scene_id(chest_info, this->scene_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->group_id);
  }
  proto::DeshretObeliskChestInfo::set_group_id(chest_info, this->group_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id);
  }
  proto::DeshretObeliskChestInfo::set_config_id(chest_info, this->config_id);
  proto_pos = proto::DeshretObeliskChestInfo::mutable_pos(chest_info);
  p_pos = &this->pos;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
  {
    p_pos = (Vector3 *)32;
    __asan_report_store_n(v2 + 32, 32LL);
  }
  Vector3::operator proto::Vector((proto::Vector *)(v2 + 32), p_pos);
  proto::Vector::operator=(proto_pos, (proto::Vector *)(v2 + 32));
  proto::Vector::~Vector((proto::Vector *const)(v2 + 32));
  result = 0;
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

// Line 30: range 000000001444C124-000000001444C448
int32_t __cdecl GadgetArgumentExcelConfigMgr::checkConfig(
        GadgetArgumentExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = GadgetArgumentExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( GadgetArgumentExcelConfigMgr::checkNightCrowArgumentConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
      "checkConfig",
      33);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v5,
      (const char (*)[34])"checkNightCrowArgumentConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( GadgetArgumentExcelConfigMgr::checkDeshretObeliskArgumentConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
      "checkConfig",
      38);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v7,
      (const char (*)[39])"checkDeshretObeliskArgumentConfig fail");
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

// Line 45: range 000000001444C44A-000000001444C62D
int32_t __cdecl GadgetArgumentExcelConfigMgr::rewriteConfig(
        GadgetArgumentExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GadgetArgumentExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( GadgetArgumentExcelConfigMgr::rewriteDeshretObeliskArgumentConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
      "rewriteConfig",
      48);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v5,
      (const char (*)[41])"rewriteDeshretObeliskArgumentConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
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

// Line 55: range 000000001444C62E-000000001444C95F
int32_t __cdecl GadgetArgumentExcelConfigMgr::checkNightCrowArgumentConfig(
        GadgetArgumentExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  int32_t result; // eax
  data::NightCrowArgumentExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::NightCrowArgumentExcelConfig>,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::NightCrowArgumentExcelConfig> >::type *argument_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::NightCrowArgumentExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:56 64 8 12 __for_end:56 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GadgetArgumentExcelConfigMgr::checkNightCrowArgumentConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->night_crow_argument_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::NightCrowArgumentExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::NightCrowArgumentExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::NightCrowArgumentExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::NightCrowArgumentExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::NightCrowArgumentExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NightCrowArgumentExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NightCrowArgumentExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_16;
    }
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::NightCrowArgumentExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::NightCrowArgumentExcelConfig>,false,false> *const)(v3 + 32));
    argument_id = std::get<0ul,unsigned int const,data::NightCrowArgumentExcelConfig>(v11);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::NightCrowArgumentExcelConfig> >::type *)std::get<1ul,unsigned int const,data::NightCrowArgumentExcelConfig>(v11);
    if ( std::vector<unsigned int>::empty(&excel_config->gadget_state_list) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::NightCrowArgumentExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::NightCrowArgumentExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
    "checkNightCrowArgumentConfig",
    61);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
         v6,
         (const char (*)[49])"gadget_state_list cannot be empty, argument_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, argument_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v8 = 0;
LABEL_16:
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

// Line 69: range 000000001444C960-000000001444E05C
int32_t __cdecl GadgetArgumentExcelConfigMgr::checkDeshretObeliskArgumentConfig(
        GadgetArgumentExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  __int64 v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int v20; // eax
  std::tuple_element<0,std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig> >::type *v21; // rsi
  unsigned int *v22; // rax
  int *v23; // rdx
  int v24; // ecx
  char v25; // al
  __int64 v26; // rsi
  int SceneIdByGroupId; // edx
  char v28; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // eax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  int v38; // edx
  char *v39; // rsi
  unsigned int *v40; // rax
  int *v41; // rdx
  int v42; // ecx
  char v43; // al
  char *v44; // rsi
  unsigned int *v45; // rax
  unsigned int *v46; // r8
  int *v47; // rdx
  int v48; // ecx
  char v49; // al
  std::pair<std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >,bool> v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  int v57; // edx
  int v58; // edx
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-3E8h]
  data::DeshretObeliskArgumentExcelConfigMap *__for_range; // [rsp+20h] [rbp-3E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false,false>::reference v63; // [rsp+28h] [rbp-3D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig> >::type *argument_id; // [rsp+30h] [rbp-3D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-3C8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-3C0h]
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+48h] [rbp-3B8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-3B0h]
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+58h] [rbp-3A8h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+60h] [rbp-3A0h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+68h] [rbp-398h]
  char v72[912]; // [rsp+70h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "22 32 4 12 gadget_id:75 48 4 11 group_id:90 64 4 11 scene_id:92 80 4 13 gadget_id:107 96 4 12 gr"
                        "oup_id:109 112 8 14 __for_begin:72 144 8 12 __for_end:72 176 8 14 __for_begin:75 208 8 12 __for_"
                        "end:75 240 8 9 <unknown> 272 8 14 __for_begin:90 304 8 12 __for_end:90 336 8 15 __for_begin:107 "
                        "368 8 13 __for_end:107 400 8 15 __for_begin:109 432 8 13 __for_end:109 464 32 9 <unknown> 528 32"
                        " 9 <unknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 48 24 group_gadget_pair_set:70";
  *(_QWORD *)(v3 + 16) = GadgetArgumentExcelConfigMgr::checkDeshretObeliskArgumentConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
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
  v5[536862746] = -202116109;
  std::set<std::pair<unsigned int,unsigned int>>::set((std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 784));
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->deshret_obelisk_argument_excel_config_map;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DeshretObeliskArgumentExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::DeshretObeliskArgumentExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 144, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DeshretObeliskArgumentExcelConfig>::iterator *)(v3 + 144) = std::unordered_map<unsigned int,data::DeshretObeliskArgumentExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 144);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false> *)(v3 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false> *)(v3 + 144)) )
      break;
    v63 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false,false> *const)(v3 + 112));
    argument_id = std::get<0ul,unsigned int const,data::DeshretObeliskArgumentExcelConfig>(v63);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DeshretObeliskArgumentExcelConfig>(v63);
    __for_range_0 = &excel_config->gadget_id_list;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 176) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 208) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 208);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 176),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 208)) )
      {
        v14 = 1;
        goto LABEL_36;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 176));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v3 + 32, v7);
      }
      *(_DWORD *)(v3 + 32) = v10;
      gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                            &txt_config_mgr->gadget_config_mgr,
                            *(unsigned int *)(v3 + 32));
      if ( !gadget_config_ptr )
      {
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
          "checkDeshretObeliskArgumentConfig",
          80);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 464),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v12, (const char (*)[69])byte_1AD781C0);
        v7 = (char *)(v3 + 32);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_36;
      }
      if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&gadget_config_ptr->type);
      }
      if ( gadget_config_ptr->type != Chest )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 176));
    }
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
      "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
      "checkDeshretObeliskArgumentConfig",
      85);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 528),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(v15, (const char (*)[83])byte_1AD78240);
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&gadget_config_ptr->type);
    }
    v17 = (__int64)data::enumValToStr(gadget_config_ptr->type);
    if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
      v17 = __asan_report_store8(v3 + 240, (((_BYTE)gadget_config_ptr + 84) & 7u) + 3);
    *(_QWORD *)(v3 + 240) = v17;
    v18 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v16, (const char *const *)(v3 + 240));
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])", argument_id: ");
    v7 = (char *)argument_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, argument_id);
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
    *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v14 = 0;
LABEL_36:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v14 != 1 )
    {
      v20 = 0;
      goto LABEL_101;
    }
    __for_range_1 = &excel_config->group_id_list;
    *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 272, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 272) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 304, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 304) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v21 = (std::tuple_element<0,std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig> >::type *)(v3 + 304);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 272),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 304)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v22 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 272));
      v23 = (int *)v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      v24 = *v23;
      v25 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v25 != 0 && v25 <= 3 )
      {
        LOBYTE(v21) = v25 != 0;
        __asan_report_store4(v3 + 48, v21);
      }
      *(_DWORD *)(v3 + 48) = v24;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v26 = *(unsigned int *)(v3 + 48);
      SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v26);
      v28 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( v28 != 0 && v28 <= 3 )
      {
        LOBYTE(v26) = v28 != 0;
        __asan_report_store4(v3 + 64, v26);
      }
      *(_DWORD *)(v3 + 64) = SceneIdByGroupId;
      scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                           &txt_config_mgr->scene_config_mgr,
                           *(unsigned int *)(v3 + 64));
      if ( scene_config_ptr )
      {
        v21 = (std::tuple_element<0,std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig> >::type *)((((_BYTE)scene_config_ptr + 12) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&scene_config_ptr->type);
        }
        if ( scene_config_ptr->type == SCENE_WORLD )
        {
          v31 = 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 656, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 656),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
            "checkDeshretObeliskArgumentConfig",
            101);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 656),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v33 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v32, (const char (*)[70])byte_1AD78340);
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v3 + 64));
          v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v34, (const char (*)[13])" ,group_id: ");
          v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v35,
                  (const unsigned int *)(v3 + 48));
          v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v36,
                  (const char (*)[16])", argument_id: ");
          v21 = argument_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, argument_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
          *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v31 = 0;
        }
      }
      else
      {
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
          "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
          "checkDeshretObeliskArgumentConfig",
          96);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 592),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v30 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v29, (const char (*)[26])byte_1AD78300);
        v21 = (std::tuple_element<0,std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig> >::type *)(v3 + 64);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
        *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v31 = 0;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v31 != 1 )
      {
        v38 = 0;
        goto LABEL_65;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 272));
    }
    v38 = 1;
LABEL_65:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
    if ( v38 != 1 )
    {
      v20 = 0;
      goto LABEL_101;
    }
    __for_range_2 = &excel_config->gadget_id_list;
    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 336, v21);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 336) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 368, v21);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 368) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v39 = (char *)(v3 + 368);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 336),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 368)) )
        break;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v40 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 336));
      v41 = (int *)v40;
      if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v40);
      }
      v42 = *v41;
      v43 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      LOBYTE(v39) = v43 != 0;
      if ( v43 != 0 && v43 <= 3 )
        __asan_report_store4(v3 + 80, v39);
      *(_DWORD *)(v3 + 80) = v42;
      __for_range_3 = &excel_config->group_id_list;
      *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 400, v39);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 400) = std::vector<unsigned int>::begin(__for_range_3);
      *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 432, v39);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 432) = std::vector<unsigned int>::end(__for_range_3);
      while ( 1 )
      {
        v44 = (char *)(v3 + 432);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 400),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 432)) )
        {
          v57 = 1;
          goto LABEL_93;
        }
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
        v45 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 400));
        v47 = (int *)v45;
        if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v45);
        }
        v48 = *v47;
        v49 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
        if ( v49 != 0 && v49 <= 3 )
        {
          LOBYTE(v44) = v49 != 0;
          __asan_report_store4(v3 + 96, v44);
        }
        *(_DWORD *)(v3 + 96) = v48;
        v50 = std::set<std::pair<unsigned int,unsigned int>>::emplace<unsigned int &,unsigned int &>(
                (std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 784),
                (unsigned int *)(v3 + 80),
                (unsigned int *)(v3 + 96),
                (unsigned int *)(v3 + 80),
                v46);
        if ( !v50.second )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 400));
      }
      *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 720) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 720, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 720),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
        "checkDeshretObeliskArgumentConfig",
        113);
      v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 720),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v52 = common::milog::MiLogStream::operator<<<char [126],(char *[126])0>(v51, (const char (*)[126])byte_1AD78400);
      v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v3 + 80));
      v54 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v53, (const char (*)[13])", group_id: ");
      v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, (const unsigned int *)(v3 + 96));
      v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v55, (const char (*)[16])", argument_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, argument_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 720));
      *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v57 = 0;
LABEL_93:
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
      if ( v57 != 1 )
      {
        v58 = 0;
        goto LABEL_97;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 336));
    }
    v58 = 1;
LABEL_97:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
    if ( v58 != 1 )
    {
      v20 = 0;
      goto LABEL_101;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false,false> *const)(v3 + 112));
  }
  v20 = 1;
LABEL_101:
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
  if ( v20 == 1 )
    v2 = 0;
  std::set<std::pair<unsigned int,unsigned int>>::~set((std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 784));
  if ( v72 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v2;
};

// Line 124: range 000000001444E05E-000000001444EE01
int32_t __cdecl GadgetArgumentExcelConfigMgr::rewriteDeshretObeliskArgumentConfig(
        GadgetArgumentExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  unsigned int *v6; // rax
  int *v7; // rdx
  int v8; // ecx
  char v9; // al
  __int64 v10; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  int SceneIdByGroupId; // edx
  char v24; // al
  uint32_t group_id; // ecx
  char v26; // dl
  uint32_t config_id; // ecx
  char v28; // al
  unsigned __int64 v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-284h]
  const LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-280h]
  data::DeshretObeliskArgumentExcelConfigMap *__for_range; // [rsp+28h] [rbp-278h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false,false>::reference v36; // [rsp+30h] [rbp-270h]
  std::tuple_element<0,std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig> >::type *argument_id; // [rsp+38h] [rbp-268h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig> >::type *excel_config; // [rsp+40h] [rbp-260h]
  std::vector<data::DeshretObeliskChestPosInfo> *chest_pos_vec; // [rsp+48h] [rbp-258h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-250h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+58h] [rbp-248h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_1; // [rsp+60h] [rbp-240h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v43; // [rsp+68h] [rbp-238h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_script_config; // [rsp+78h] [rbp-228h]
  char v45[544]; // [rsp+80h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 12 group_id:130 64 8 15 __for_begin:127 96 8 13 __for_end:127 128 8 15 __for_begin:130 1"
                        "60 8 13 __for_end:130 192 8 15 __for_begin:140 224 8 13 __for_end:140 256 24 18 chest_pos_info:1"
                        "50 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GadgetArgumentExcelConfigMgr::rewriteDeshretObeliskArgumentConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  ret = 0;
  __for_range = &this->deshret_obelisk_argument_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DeshretObeliskArgumentExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DeshretObeliskArgumentExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DeshretObeliskArgumentExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DeshretObeliskArgumentExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false> *)(v2 + 96)) )
  {
    v36 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false,false> *const)(v2 + 64));
    argument_id = std::get<0ul,unsigned int const,data::DeshretObeliskArgumentExcelConfig>(v36);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DeshretObeliskArgumentExcelConfig>(v36);
    chest_pos_vec = std::map<unsigned int,std::vector<data::DeshretObeliskChestPosInfo>>::operator[](
                      &this->argument_deshret_obelisk_chest_vec_map_,
                      argument_id);
    __for_range_0 = &excel_config->group_id_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, argument_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, argument_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v5 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v7 = (int *)v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      v8 = *v7;
      v9 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v9 != 0 && v9 <= 3 )
      {
        LOBYTE(v5) = v9 != 0;
        __asan_report_store4(v2 + 48, v5);
      }
      *(_DWORD *)(v2 + 48) = v8;
      v10 = *(unsigned int *)(v2 + 48);
      group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, v10);
      if ( group_script_config_ptr )
      {
        __for_range_1 = &group_script_config_ptr->gadget_config_map;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, v10);
        *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v2 + 192) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v10);
        *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v2 + 224) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_1);
        while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 192),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 224)) )
        {
          v43 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v2 + 192));
          std::get<0ul,unsigned int const,GadgetScriptConfig>(v43);
          gadget_script_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v43);
          if ( common::tools::MiscUtils::isContains<unsigned int>(
                 &excel_config->gadget_id_list,
                 &gadget_script_config->gadget_id) )
          {
            v15 = ((_BYTE)gadget_script_config + 74) & 7;
            v16 = (*(_BYTE *)(((unsigned __int64)&gadget_script_config->is_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&gadget_script_config->is_oneoff >> 3) + 0x7FFF8000));
            if ( (_BYTE)v16 )
              __asan_report_load1(&gadget_script_config->is_oneoff, v15, v16);
            if ( !gadget_script_config->is_oneoff )
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
                "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
                "rewriteDeshretObeliskArgumentConfig",
                146);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 384),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v18 = common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(
                      v17,
                      (const char (*)[90])byte_1AD786E0);
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, argument_id);
              v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v19,
                      (const char (*)[14])", gadget_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                &gadget_script_config->gadget_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
              *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              v21 = ((v2 + 256) >> 3) + 2147450880;
              *(_WORD *)v21 = 0;
              *(_BYTE *)(v21 + 2) = 0;
              if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 48);
              v22 = *(unsigned int *)(v2 + 48);
              SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v22);
              v24 = *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000);
              if ( v24 != 0 && v24 <= 3 )
              {
                LOBYTE(v22) = v24 != 0;
                __asan_report_store4(v2 + 256, v22);
              }
              *(_DWORD *)(v2 + 256) = SceneIdByGroupId;
              if ( *(_BYTE *)(((unsigned __int64)&group_script_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&group_script_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&group_script_config_ptr->group_id);
              }
              group_id = group_script_config_ptr->group_id;
              v26 = *(_BYTE *)(((v2 + 260) >> 3) + 0x7FFF8000);
              if ( v26 != 0 && (char)(((v2 + 4) & 7) + 3) >= v26 )
              {
                LOBYTE(v22) = v26 != 0;
                __asan_report_store4(v2 + 260, v22);
              }
              *(_DWORD *)(v2 + 260) = group_id;
              if ( *(_BYTE *)(((unsigned __int64)gadget_script_config >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)gadget_script_config >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(gadget_script_config);
              }
              config_id = gadget_script_config->config_id;
              v28 = *(_BYTE *)(((v2 + 264) >> 3) + 0x7FFF8000);
              if ( v28 != 0 && v28 <= 3 )
              {
                LOBYTE(v22) = v28 != 0;
                __asan_report_store4(v2 + 264, v22);
              }
              *(_DWORD *)(v2 + 264) = config_id;
              if ( (char)((v2 + 12) & 7) >= *(_BYTE *)(((v2 + 268) >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((v2 + 268) >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)(((v2 + 279) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 23) & 7) >= *(_BYTE *)(((v2 + 279) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 268, 12LL);
              }
              if ( (((unsigned __int8)gadget_script_config + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config->pos >> 3)
                                                                                  + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)&gadget_script_config->pos >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&gadget_script_config->pos.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)gadget_script_config + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&gadget_script_config->pos.z
                                                                                    + 3) >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load_n(&gadget_script_config->pos, 12LL);
              }
              *(_QWORD *)(v2 + 268) = *(_QWORD *)&gadget_script_config->pos.x;
              *(float *)(v2 + 276) = gadget_script_config->pos.z;
              std::vector<data::DeshretObeliskChestPosInfo>::push_back(
                chest_pos_vec,
                (const std::vector<data::DeshretObeliskChestPosInfo>::value_type *)(v2 + 256));
            }
            v29 = ((v2 + 256) >> 3) + 2147450880;
            *(_WORD *)v29 = -1800;
            *(_BYTE *)(v29 + 2) = -8;
          }
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v2 + 192));
        }
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      }
      else
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
          "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
          "rewriteDeshretObeliskArgumentConfig",
          135);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v11, (const char (*)[47])byte_1AD78640);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v13, (const char (*)[29])byte_1AD786A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, argument_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( std::vector<data::DeshretObeliskChestPosInfo>::empty(chest_pos_vec) )
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GadgetArgumentExcelConfig.cpp",
        "rewriteDeshretObeliskArgumentConfig",
        161);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [100],(char *[100])0>(v30, (const char (*)[100])byte_1AD787A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, argument_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DeshretObeliskArgumentExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 170: range 000000001444EE02-000000001444EFBD
const std::vector<data::DeshretObeliskChestPosInfo> *__fastcall GadgetArgumentExcelConfigMgr::findDeshretObeliskChestPosInfoByArgument(
        const GadgetArgumentExcelConfigMgr *const this,
        __int64 argument_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<data::DeshretObeliskChestPosInfo>> *p_argument_deshret_obelisk_chest_vec_map; // rdx
  std::map<unsigned int,std::vector<data::DeshretObeliskChestPosInfo>> *v6; // rdx
  bool v7; // al
  const std::vector<data::DeshretObeliskChestPosInfo> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 argument_id:169 64 8 8 iter:171 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GadgetArgumentExcelConfigMgr::findDeshretObeliskChestPosInfoByArgument;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = argument_id;
  p_argument_deshret_obelisk_chest_vec_map = &this->argument_deshret_obelisk_chest_vec_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, argument_id);
  *(std::map<unsigned int,std::vector<data::DeshretObeliskChestPosInfo>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<data::DeshretObeliskChestPosInfo>>::find(p_argument_deshret_obelisk_chest_vec_map, (const std::map<unsigned int,std::vector<data::DeshretObeliskChestPosInfo>>::key_type *)(v2 + 48));
  v6 = &this->argument_deshret_obelisk_chest_vec_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<data::DeshretObeliskChestPosInfo>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<data::DeshretObeliskChestPosInfo>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DeshretObeliskChestPosInfo> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DeshretObeliskChestPosInfo> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DeshretObeliskChestPosInfo>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::DeshretObeliskChestPosInfo> > > *const)(v2 + 64))->second;
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
