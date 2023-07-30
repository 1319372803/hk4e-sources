// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/SceneExcelConfig.cpp

// Line 22: range 000000000CAD5452-000000000CAD55A4
bool __cdecl SceneExcelConfigMgr::SceneTriggerConfig::operator<(
        const SceneExcelConfigMgr::SceneTriggerConfig *const this,
        const SceneExcelConfigMgr::SceneTriggerConfig *other)
{
  uint32_t scene_id; // ecx
  _BOOL4 v3; // eax
  uint32_t group_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  scene_id = this->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(other);
  }
  if ( scene_id == other->scene_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->group_id);
    }
    group_id = this->group_id;
    if ( *(_BYTE *)(((unsigned __int64)&other->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)other + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&other->group_id);
    }
    if ( group_id == other->group_id )
      return (unsigned int)std::string::compare(&this->trigger_name, &other->trigger_name) >> 31;
    else
      LOBYTE(v3) = this->group_id < other->group_id;
  }
  else
  {
    LOBYTE(v3) = this->scene_id < other->scene_id;
  }
  return v3;
};

// Line 35: range 000000000CAD55A6-000000000CAD5A1B
int32_t __cdecl SceneExcelConfigMgr::checkConfig(SceneExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)SceneExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( SceneExcelConfigMgr::checkSceneExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/SceneExcelConfig.cpp",
      "checkConfig",
      38);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])"checkConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( SceneExcelConfigMgr::checkWorldExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/SceneExcelConfig.cpp",
      "checkConfig",
      43);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v7,
      (const char (*)[29])"checkWorldExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( SceneExcelConfigMgr::checkSceneTagConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/SceneExcelConfig.cpp",
      "checkConfig",
      48);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v8,
      (const char (*)[32])"checkSceneTagExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 55: range 000000000CAD5A1C-000000000CAD5E91
int32_t __cdecl SceneExcelConfigMgr::rewriteConfig(SceneExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)SceneExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( SceneExcelConfigMgr::rewriteSceneExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/SceneExcelConfig.cpp",
      "rewriteConfig",
      58);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])"rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( SceneExcelConfigMgr::rewriteTriggerExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/SceneExcelConfig.cpp",
      "rewriteConfig",
      63);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])"rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( SceneExcelConfigMgr::rewriteWorldLevelExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/SceneExcelConfig.cpp",
      "rewriteConfig",
      68);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v8,
      (const char (*)[36])"rewriteWorldLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 77: range 000000000CAD5E92-000000000CAD61B3
// local variable allocation has failed, the output may be wrong!
uint32_t __cdecl SceneExcelConfigMgr::findSceneTriggerId(
        const SceneExcelConfigMgr *const this,
        uint32_t scene_id,
        uint32_t group_id,
        const std::string *trigger_name)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<SceneExcelConfigMgr::SceneTriggerConfig,unsigned int> *p_scene_trigger_map; // rdx
  std::map<SceneExcelConfigMgr::SceneTriggerConfig,unsigned int> *v8; // rdx
  bool v9; // al
  std::_Rb_tree_const_iterator<std::pair<const SceneExcelConfigMgr::SceneTriggerConfig,unsigned int> >::pointer v10; // rax
  uint32_t second; // r14d
  uint32_t result; // eax
  char v15[240]; // [rsp+20h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 8 5 it:79 80 8 9 <unknown> 112 40 17 trigger_config:78";
  *(_QWORD *)(v4 + 16) = SceneExcelConfigMgr::findSceneTriggerId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v4 + 112, *(_QWORD *)&scene_id);
  *(_DWORD *)(v4 + 112) = scene_id;
  if ( *(_BYTE *)(((v4 + 116) >> 3) + 0x7FFF8000) != 0
    && (char)(((v4 + 116) & 7) + 3) >= *(_BYTE *)(((v4 + 116) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v4 + 116, (((_BYTE)v4 + 116) & 7u) + 3);
  }
  *(_DWORD *)(v4 + 116) = group_id;
  std::string::basic_string(v4 + 120, trigger_name);
  p_scene_trigger_map = &this->scene_trigger_map;
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 48, trigger_name);
  *(std::map<SceneExcelConfigMgr::SceneTriggerConfig,unsigned int>::const_iterator *)(v4 + 48) = std::map<SceneExcelConfigMgr::SceneTriggerConfig,unsigned int>::find(
                                                                                                   p_scene_trigger_map,
                                                                                                   (const std::map<SceneExcelConfigMgr::SceneTriggerConfig,unsigned int>::key_type *)(v4 + 112));
  v8 = &this->scene_trigger_map;
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 80, v4 + 112);
  *(std::map<SceneExcelConfigMgr::SceneTriggerConfig,unsigned int>::const_iterator *)(v4 + 80) = std::map<SceneExcelConfigMgr::SceneTriggerConfig,unsigned int>::end(v8);
  v9 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<const SceneExcelConfigMgr::SceneTriggerConfig,unsigned int> >::_Self *)(v4 + 48),
         (const std::_Rb_tree_const_iterator<std::pair<const SceneExcelConfigMgr::SceneTriggerConfig,unsigned int> >::_Self *)(v4 + 80));
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<SceneExcelConfigMgr::SceneTriggerConfig const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const SceneExcelConfigMgr::SceneTriggerConfig,unsigned int> > *const)(v4 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v10->second);
    }
    second = v10->second;
  }
  else
  {
    second = 0;
  }
  SceneExcelConfigMgr::SceneTriggerConfig::~SceneTriggerConfig((SceneExcelConfigMgr::SceneTriggerConfig *const)(v4 + 112));
  result = second;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 86: range 000000000CAD61B4-000000000CAD6521
bool __fastcall SceneExcelConfigMgr::isSceneIdBelongToWorld(
        const SceneExcelConfigMgr *const this,
        uint32_t scene_id,
        uint32_t world_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  bool result; // al
  const unsigned int *M_current; // r14
  const unsigned int *v10; // rcx
  const std::vector<unsigned int> *p_sub_scene_id_vec; // rdx
  const data::WorldExcelConfig *world_config_ptr; // [rsp+18h] [rbp-F8h]
  char v14[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 11 scene_id:85 48 4 11 world_id:85 64 8 7 iter:97 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SceneExcelConfigMgr::isSceneIdBelongToWorld;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = scene_id;
  *(_DWORD *)(v3 + 48) = world_id;
  v6 = *(unsigned int *)(v3 + 48);
  world_config_ptr = data::SceneExcelConfigMgrBase::findWorldExcelConfig(this, v6);
  if ( world_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&world_config_ptr->main_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&world_config_ptr->main_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&world_config_ptr->main_scene_id);
    }
    if ( world_config_ptr->main_scene_id == *(_DWORD *)(v3 + 32) )
    {
      result = 1;
    }
    else
    {
      M_current = std::vector<unsigned int>::end(&world_config_ptr->sub_scene_id_vec)._M_current;
      v10 = std::vector<unsigned int>::begin(&world_config_ptr->sub_scene_id_vec)._M_current;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 64, v6);
      *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v10,
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                     (const unsigned int *)(v3 + 32));
      p_sub_scene_id_vec = &world_config_ptr->sub_scene_id_vec;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, M_current);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(p_sub_scene_id_vec);
      result = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                 (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
                 (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96));
    }
  }
  else
  {
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/SceneExcelConfig.cpp",
      "isSceneIdBelongToWorld",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[29])"findWorldExcelConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0;
  }
  if ( v14 == (char *)v3 )
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

// Line 102: range 000000000CAD6522-000000000CAD6597
data::SceneType __cdecl SceneExcelConfigMgr::getSceneTypeBySceneId(
        const SceneExcelConfigMgr *const this,
        uint32_t scene_id)
{
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+18h] [rbp-8h]

  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(this, scene_id);
  if ( !scene_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&scene_config_ptr->type);
  }
  return scene_config_ptr->type;
};

// Line 112: range 000000000CAD6598-000000000CAD67B5
const std::unordered_set<unsigned int> *__fastcall SceneExcelConfigMgr::getAllSceneIdBySceneType(
        const SceneExcelConfigMgr *const this,
        const std::unordered_set<unsigned int> *scene_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<data::SceneType,std::unordered_set<unsigned int>> *p_scenetype_to_sceneids_map; // rdx
  std::map<data::SceneType,std::unordered_set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::unordered_set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 scene_type:111 64 8 6 it:114 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SceneExcelConfigMgr::getAllSceneIdBySceneType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)scene_type;
  if ( !(_BYTE)`guard variable for'SceneExcelConfigMgr::getAllSceneIdBySceneType(data::SceneType)::empty_set
    && __cxa_guard_acquire(&`guard variable for'SceneExcelConfigMgr::getAllSceneIdBySceneType(data::SceneType)::empty_set) )
  {
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)&SceneExcelConfigMgr::getAllSceneIdBySceneType(data::SceneType)const::empty_set);
    __cxa_guard_release(&`guard variable for'SceneExcelConfigMgr::getAllSceneIdBySceneType(data::SceneType)::empty_set);
    scene_type = &SceneExcelConfigMgr::getAllSceneIdBySceneType(data::SceneType)const::empty_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_set<unsigned int>::~unordered_set,
      (void *)&SceneExcelConfigMgr::getAllSceneIdBySceneType(data::SceneType)const::empty_set,
      &_dso_handle);
  }
  p_scenetype_to_sceneids_map = &this->scenetype_to_sceneids_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, scene_type);
  *(std::map<data::SceneType,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<data::SceneType,std::unordered_set<unsigned int>>::find(
                                                                                               p_scenetype_to_sceneids_map,
                                                                                               (const std::map<data::SceneType,std::unordered_set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->scenetype_to_sceneids_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::SceneType,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<data::SceneType,std::unordered_set<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::SceneType,std::unordered_set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::SceneType,std::unordered_set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &SceneExcelConfigMgr::getAllSceneIdBySceneType(data::SceneType)const::empty_set;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<data::SceneType const,std::unordered_set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::SceneType,std::unordered_set<unsigned int> > > *const)(v2 + 64))->second;
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

// Line 123: range 000000000CAD67B6-000000000CAD6DE4
int32_t __cdecl SceneExcelConfigMgr::rewriteTriggerExcelConfig(
        SceneExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned int first; // ecx
  char v8; // al
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  uint32_t scene_id; // ecx
  char v12; // al
  uint32_t group_id; // ecx
  char v14; // dl
  unsigned int *v15; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const SceneExcelConfigMgr::SceneTriggerConfig,unsigned int> >,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // r15d
  unsigned __int64 v20; // rax
  int v21; // eax
  int32_t result; // eax
  data::TriggerExcelConfigMap *__for_range; // [rsp+28h] [rbp-148h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TriggerExcelConfig>,false,false>::reference p; // [rsp+30h] [rbp-140h]
  char v25[304]; // [rsp+40h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 14 trigger_id:126 48 8 15 __for_begin:124 80 8 13 __for_end:124 112 32 9 <unknown> 176 40"
                        " 24 scene_trigger_config:128";
  *(_QWORD *)(v3 + 16) = SceneExcelConfigMgr::rewriteTriggerExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  __for_range = &this->trigger_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TriggerExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::TriggerExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TriggerExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::TriggerExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TriggerExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TriggerExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TriggerExcelConfig>,false> *)(v3 + 80)) )
      break;
    p = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TriggerExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TriggerExcelConfig>,false,false> *const)(v3 + 48));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p);
    }
    first = p->first;
    v8 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v3 + 32, v6);
    }
    *(_DWORD *)(v3 + 32) = first;
    v9 = ((v3 + 176) >> 3) + 2147450880;
    *(_DWORD *)v9 = 0;
    *(_BYTE *)(v9 + 4) = 0;
    v10 = (((_BYTE)p + 20) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&p->second.scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second.scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p->second.scene_id);
    }
    scene_id = p->second.scene_id;
    v12 = *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(v10) = v12 != 0;
      __asan_report_store4(v3 + 176, v10);
    }
    *(_DWORD *)(v3 + 176) = scene_id;
    if ( *(_BYTE *)(((unsigned __int64)&p->second.group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p->second.group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p->second.group_id);
    }
    group_id = p->second.group_id;
    v14 = *(_BYTE *)(((v3 + 180) >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)(((v3 - 80 + 4) & 7) + 3) >= v14 )
    {
      LOBYTE(v10) = v14 != 0;
      __asan_report_store4(v3 + 180, v10);
    }
    *(_DWORD *)(v3 + 180) = group_id;
    std::string::basic_string(v3 + 184, &p->second.trigger_name);
    v16 = std::map<SceneExcelConfigMgr::SceneTriggerConfig,unsigned int>::emplace<SceneExcelConfigMgr::SceneTriggerConfig&,unsigned int &>(
            &this->scene_trigger_map,
            (SceneExcelConfigMgr::SceneTriggerConfig *)(v3 + 176),
            (unsigned int *)(v3 + 32),
            (SceneExcelConfigMgr::SceneTriggerConfig *)&this->scene_trigger_map,
            v15);
    if ( !v16.second )
    {
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 112),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/SceneExcelConfig.cpp",
        "rewriteTriggerExcelConfig",
        131);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 112),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              v17,
              (const char (*)[38])"duplicate trigger config, trigger_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v19 = 0;
    }
    else
    {
      v19 = 1;
    }
    SceneExcelConfigMgr::SceneTriggerConfig::~SceneTriggerConfig((SceneExcelConfigMgr::SceneTriggerConfig *const)(v3 + 176));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    v20 = ((v3 + 176) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    if ( v19 != 1 )
    {
      v21 = 0;
      goto LABEL_31;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TriggerExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TriggerExcelConfig>,false,false> *const)(v3 + 48));
  }
  v21 = 1;
LABEL_31:
  if ( v21 == 1 )
    v2 = 0;
  result = v2;
  if ( v25 == (char *)v3 )
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

// Line 139: range 000000000CAD6DE6-000000000CAD70B4
int32_t __cdecl SceneExcelConfigMgr::rewriteSceneExcelConfig(
        SceneExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_set<unsigned int> *v5; // rdx
  int32_t result; // eax
  data::SceneExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false>::reference v8; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::SceneExcelConfig> >::type *scene_id; // [rsp+20h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SceneExcelConfig> >::type *scene_config; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SceneExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SceneExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:141 64 8 13 __for_end:141";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SceneExcelConfig>,false>::__node_type *)SceneExcelConfigMgr::rewriteSceneExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::set<unsigned int>::clear(&this->abandon_blockbin_persistent_dungeon_scene_set_);
  __for_range = &this->scene_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::SceneExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::SceneExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::SceneExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false>::operator*(v2 + 4);
    scene_id = std::get<0ul,unsigned int const,data::SceneExcelConfig>(v8);
    scene_config = (std::tuple_element<1,const std::pair<unsigned int const,data::SceneExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SceneExcelConfig>(v8);
    v5 = std::map<data::SceneType,std::unordered_set<unsigned int>>::operator[](
           &this->scenetype_to_sceneids_map_,
           &scene_config->type);
    std::unordered_set<unsigned int>::insert(v5, scene_id);
    if ( *(_BYTE *)(((unsigned __int64)&scene_config->subtype >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&scene_config->subtype >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&scene_config->subtype);
    }
    if ( scene_config->subtype == SCENE_SUB_TYPE_PERSISTENT_DUNGEON )
    {
      if ( *(char *)(((unsigned __int64)&scene_config->is_blockbin_abandoned >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&scene_config->is_blockbin_abandoned, scene_id, &scene_config->is_blockbin_abandoned);
      if ( scene_config->is_blockbin_abandoned )
        std::set<unsigned int>::insert(&this->abandon_blockbin_persistent_dungeon_scene_set_, scene_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SceneExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 153: range 000000000CAD70B6-000000000CAD905A
int32_t __cdecl SceneExcelConfigMgr::checkSceneExcelConfig(
        SceneExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  char *v6; // rsi
  unsigned __int64 v7; // rax
  char *v8; // rsi
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int v21; // edx
  char *v22; // rsi
  char *v23; // rsi
  unsigned int *v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // edx
  int v33; // eax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  char v38; // r14
  char v39; // r15
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rdx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  char v62; // [rsp+Bh] [rbp-575h]
  int32_t v63; // [rsp+Ch] [rbp-574h]
  DungeonExcelConfigMgr *dungeon_config_mgr; // [rsp+20h] [rbp-560h]
  data::SceneExcelConfigMap *__for_range; // [rsp+28h] [rbp-558h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false>::reference v67; // [rsp+30h] [rbp-550h]
  std::tuple_element<0,std::pair<unsigned int const,data::SceneExcelConfig> >::type *scene_id; // [rsp+38h] [rbp-548h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SceneExcelConfig> >::type *scene_config; // [rsp+40h] [rbp-540h]
  const std::set<unsigned int> *dungeon_id_set_ptr; // [rsp+48h] [rbp-538h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+58h] [rbp-528h]
  JsonConfigMgr *json_config_mgr; // [rsp+60h] [rbp-520h]
  data::SceneExcelConfigMap *__for_range_1; // [rsp+68h] [rbp-518h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false>::reference v74; // [rsp+70h] [rbp-510h]
  std::tuple_element<0,std::pair<unsigned int const,data::SceneExcelConfig> >::type *scene_id_0; // [rsp+78h] [rbp-508h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SceneExcelConfig> >::type *scene_config_0; // [rsp+80h] [rbp-500h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+88h] [rbp-4F8h]
  char v78[1264]; // [rsp+90h] [rbp-4F0h] BYREF

  v2 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1216LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "26 32 1 9 <unknown> 48 1 9 <unknown> 64 4 14 dungeon_id:168 80 4 13 avatar_id:191 96 8 15 __for_"
                        "begin:157 128 8 13 __for_end:157 160 8 15 __for_begin:168 192 8 13 __for_end:168 224 8 15 __for_"
                        "begin:187 256 8 13 __for_end:187 288 8 15 __for_begin:191 320 8 13 __for_end:191 352 12 9 <unkno"
                        "wn> 384 16 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknow"
                        "n> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown"
                        "> 992 32 9 <unknown> 1056 48 36 valid_abandon_blockbin_scene_set:154 1136 48 36 valid_abandon_sc"
                        "enebin_scene_set:155";
  *(_QWORD *)(v2 + 16) = SceneExcelConfigMgr::checkSceneExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -219020288;
  v4[536862732] = -219021312;
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
  v4[536862754] = -219021312;
  v4[536862755] = 62194;
  v4[536862757] = -202116109;
  if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 352, txt_config_mgr);
  *(_DWORD *)(v2 + 352) = 4;
  v5 = (((_BYTE)v2 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((v2 + 356) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 100) & 7) + 3) >= *(_BYTE *)(((v2 + 356) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 356, v5);
  }
  *(_DWORD *)(v2 + 356) = 7;
  if ( *(_BYTE *)(((v2 + 360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 360) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 360, v5);
  *(_DWORD *)(v2 + 360) = 9;
  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 48));
  v6 = (char *)(v2 + 352);
  std::set<unsigned int>::set(
    (std::set<unsigned int> *const)(v2 + 1056),
    (std::initializer_list<unsigned int>)__PAIR128__(3LL, v2 + 352),
    (const std::less<unsigned int> *)(v2 + 32),
    (const std::set<unsigned int>::allocator_type *)(v2 + 48));
  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -1800;
  v7 = ((v2 + 1136) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 1136));
  dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
  __for_range = &this->scene_excel_config_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v6);
  *(std::unordered_map<unsigned int,data::SceneExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::SceneExcelConfig>::begin(__for_range);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v6);
  *(std::unordered_map<unsigned int,data::SceneExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::SceneExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v8 = (char *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SceneExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SceneExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SceneExcelConfig>,false> *)(v2 + 128)) )
    {
      v12 = 1;
      goto LABEL_49;
    }
    v67 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false> *const)(v2 + 96));
    scene_id = std::get<0ul,unsigned int const,data::SceneExcelConfig>(v67);
    scene_config = (std::tuple_element<1,const std::pair<unsigned int const,data::SceneExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SceneExcelConfig>(v67);
    if ( *(_BYTE *)(((unsigned __int64)&scene_config->subtype >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&scene_config->subtype >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&scene_config->subtype);
    }
    if ( scene_config->subtype == SCENE_SUB_TYPE_PERSISTENT_DUNGEON )
      break;
LABEL_47:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false> *const)(v2 + 96));
  }
  if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(scene_id);
  }
  v9 = *scene_id;
  dungeon_id_set_ptr = DungeonExcelConfigMgr::findDungeonSetBySceneId(dungeon_config_mgr, v9);
  if ( dungeon_id_set_ptr )
  {
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v9);
    *(std::set<unsigned int>::iterator *)(v2 + 160) = std::set<unsigned int>::begin(dungeon_id_set_ptr);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v9);
    *(std::set<unsigned int>::iterator *)(v2 + 192) = std::set<unsigned int>::end(dungeon_id_set_ptr);
    while ( 1 )
    {
      v8 = (char *)(v2 + 192);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 160),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 192)) )
      {
        v21 = 1;
        goto LABEL_45;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
      v13 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 160));
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v8) = v16 != 0;
        __asan_report_store4(v2 + 64, v8);
      }
      *(_DWORD *)(v2 + 64) = v15;
      dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                             dungeon_config_mgr,
                             *(unsigned int *)(v2 + 64));
      if ( !dungeon_config_ptr )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->type);
      }
      if ( dungeon_config_ptr->type == DUNGEON_DREAMLAND )
      {
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 1056), scene_id);
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 1136), scene_id);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 160));
    }
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 480, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/SceneExcelConfig.cpp",
      "checkSceneExcelConfig",
      174);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 480),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v17,
            (const char (*)[24])"cannot find dungeon_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 64));
    v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])", scene_id:");
    v8 = (char *)scene_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, scene_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v63 = -1;
    v21 = 0;
LABEL_45:
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v21 != 1 )
    {
      v12 = 0;
      goto LABEL_49;
    }
    goto LABEL_47;
  }
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
    "./src/txt_data_manual/SceneExcelConfig.cpp",
    "checkSceneExcelConfig",
    165);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          v10,
          (const char (*)[32])"is not dungeon scene. scene_id:");
  v8 = (char *)scene_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, scene_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  v63 = -1;
  v12 = 0;
LABEL_49:
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v12 == 1 )
  {
    json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
    __for_range_1 = &this->scene_excel_config_map;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v8);
    *(std::unordered_map<unsigned int,data::SceneExcelConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::SceneExcelConfig>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, v8);
    *(std::unordered_map<unsigned int,data::SceneExcelConfig>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,data::SceneExcelConfig>::end(__for_range_1);
    while ( 1 )
    {
      v22 = (char *)(v2 + 256);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SceneExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SceneExcelConfig>,false> *)(v2 + 224),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SceneExcelConfig>,false> *)(v2 + 256)) )
      {
        v33 = 1;
        goto LABEL_146;
      }
      v74 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false> *const)(v2 + 224));
      scene_id_0 = std::get<0ul,unsigned int const,data::SceneExcelConfig>(v74);
      scene_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::SceneExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SceneExcelConfig>(v74);
      if ( !std::vector<unsigned int>::empty(&scene_config_0->specified_avatar_list) )
      {
        __for_range_2 = &scene_config_0->specified_avatar_list;
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 288, v22);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 288) = std::vector<unsigned int>::begin(__for_range_2);
        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 320, v22);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 320) = std::vector<unsigned int>::end(__for_range_2);
        while ( 1 )
        {
          v23 = (char *)(v2 + 320);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 288),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 320)) )
          {
            v32 = 1;
            goto LABEL_73;
          }
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
          v24 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 288));
          v25 = (int *)v24;
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v24);
          }
          v26 = *v25;
          v27 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
          if ( v27 != 0 && v27 <= 3 )
          {
            LOBYTE(v23) = v27 != 0;
            __asan_report_store4(v2 + 80, v23);
          }
          *(_DWORD *)(v2 + 80) = v26;
          if ( !data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(
                  &txt_config_mgr->avatar_config_mgr,
                  *(unsigned int *)(v2 + 80)) )
            break;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 288));
        }
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/SceneExcelConfig.cpp",
          "checkSceneExcelConfig",
          195);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v28, (const char (*)[50])byte_1A118C80);
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, scene_id_0);
        v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])" avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v63 = -1;
        v32 = 0;
LABEL_73:
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
        if ( v32 != 1 )
        {
          v33 = 0;
          goto LABEL_146;
        }
        if ( *(_BYTE *)(((unsigned __int64)&scene_config_0->max_specified_avatar_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&scene_config_0->max_specified_avatar_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&scene_config_0->max_specified_avatar_num);
        }
        if ( scene_config_0->max_specified_avatar_num > 4 || !scene_config_0->max_specified_avatar_num )
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
            "./src/txt_data_manual/SceneExcelConfig.cpp",
            "checkSceneExcelConfig",
            202);
          v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v35 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v34, (const char (*)[41])byte_1A118D20);
          v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, scene_id_0);
          v37 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v36, (const char (*)[13])" avatar_num:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v37,
            &scene_config_0->max_specified_avatar_num);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
          v63 = -1;
          v33 = 0;
          goto LABEL_146;
        }
      }
      v38 = 0;
      v39 = 0;
      if ( (unsigned __int8)std::string::empty() == 1 )
        goto LABEL_87;
      *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findLevelEntityConfig((const JsonConfigMgr *const)(v2 + 384), (const std::string *)json_config_mgr);
      v38 = 1;
      v39 = 1;
      if ( std::operator==<data::ConfigLevelEntity>(0LL, (const std::shared_ptr<data::ConfigLevelEntity> *)(v2 + 384)) )
        v62 = 1;
      else
LABEL_87:
        v62 = 0;
      if ( v39 )
        std::shared_ptr<data::ConfigLevelEntity>::~shared_ptr((std::shared_ptr<data::ConfigLevelEntity> *const)(v2 + 384));
      if ( v38 )
        *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -1800;
      if ( v62 )
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
          "./src/txt_data_manual/SceneExcelConfig.cpp",
          "checkSceneExcelConfig",
          208);
        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 672),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])"scene_id: ");
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, scene_id_0);
        v43 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v42, (const char (*)[10])byte_1A118E00);
        v44 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v43,
                &scene_config_0->level_entity_config);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v44, (const char (*)[7])byte_1A117C40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        v63 = -1;
        v33 = 0;
        goto LABEL_146;
      }
      if ( *(_BYTE *)(((unsigned __int64)&scene_config_0->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)scene_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_0->type >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&scene_config_0->type);
      }
      if ( scene_config_0->type != SCENE_WORLD )
      {
        if ( *(char *)(((unsigned __int64)&scene_config_0->is_allow_map_mark_point >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(
            &scene_config_0->is_allow_map_mark_point,
            (((_BYTE)scene_config_0 + 12) & 7u) + 3,
            &scene_config_0->is_allow_map_mark_point);
        if ( scene_config_0->is_allow_map_mark_point )
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 736, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 736),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/SceneExcelConfig.cpp",
            "checkSceneExcelConfig",
            213);
          v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 736),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v46 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v45, (const char (*)[58])byte_1A118E40);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, scene_id_0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          v63 = -1;
          v33 = 0;
          goto LABEL_146;
        }
      }
      v47 = ((unsigned __int8)scene_id_0 & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)scene_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)scene_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(scene_id_0);
      }
      if ( *scene_id_0 == 3 || *scene_id_0 == 5 )
      {
        v47 = ((_BYTE)scene_config_0 + 113) & 7;
        v48 = (*(_BYTE *)(((unsigned __int64)&scene_config_0->is_delete_map_mark_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v47 >= *(_BYTE *)(((unsigned __int64)&scene_config_0->is_delete_map_mark_point >> 3) + 0x7FFF8000));
        if ( (_BYTE)v48 )
          __asan_report_load1(&scene_config_0->is_delete_map_mark_point, v47, v48);
        if ( scene_config_0->is_delete_map_mark_point )
        {
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 800, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 800),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/SceneExcelConfig.cpp",
            "checkSceneExcelConfig",
            218);
          v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 800),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v50 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(v49, (const char (*)[83])byte_1A118EA0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, scene_id_0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          v63 = -1;
          v33 = 0;
          goto LABEL_146;
        }
      }
      if ( *(char *)(((unsigned __int64)&scene_config_0->is_blockbin_abandoned >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&scene_config_0->is_blockbin_abandoned, v47, &scene_config_0->is_blockbin_abandoned);
      if ( scene_config_0->is_blockbin_abandoned
        && !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              (std::set<unsigned int> *)(v2 + 1056),
              scene_id_0) )
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
          "./src/txt_data_manual/SceneExcelConfig.cpp",
          "checkSceneExcelConfig",
          223);
        v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 864),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v53 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v52, (const char (*)[44])byte_1A118F20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, scene_id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v63 = -1;
        v33 = 0;
        goto LABEL_146;
      }
      v54 = ((_BYTE)scene_config_0 - 111) & 7;
      v55 = (*(_BYTE *)(((unsigned __int64)&scene_config_0->is_scenebin_abandoned >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v54 >= *(_BYTE *)(((unsigned __int64)&scene_config_0->is_scenebin_abandoned >> 3) + 0x7FFF8000));
      if ( (_BYTE)v55 )
        __asan_report_load1(&scene_config_0->is_scenebin_abandoned, v54, v55);
      if ( scene_config_0->is_scenebin_abandoned
        && !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              (std::set<unsigned int> *)(v2 + 1136),
              scene_id_0) )
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
          "./src/txt_data_manual/SceneExcelConfig.cpp",
          "checkSceneExcelConfig",
          228);
        v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 928),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v58 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v57, (const char (*)[44])byte_1A118F80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, scene_id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
        *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
        v63 = -1;
        v33 = 0;
        goto LABEL_146;
      }
      if ( *(_BYTE *)(((unsigned __int64)&scene_config_0->subtype >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&scene_config_0->subtype >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&scene_config_0->subtype);
      }
      if ( scene_config_0->subtype == SCENE_SUB_TYPE_PERSISTENT_DUNGEON )
      {
        if ( *(_BYTE *)(((unsigned __int64)&scene_config_0->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)scene_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_0->type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&scene_config_0->type);
        }
        if ( scene_config_0->type != SCENE_DUNGEON )
          break;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneExcelConfig>,false,false> *const)(v2 + 224));
    }
    *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 992, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 992),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/SceneExcelConfig.cpp",
      "checkSceneExcelConfig",
      233);
    v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 992),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v60 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v59, (const char (*)[54])byte_1A118FE0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, scene_id_0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
    *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
    v63 = -1;
    v33 = 0;
LABEL_146:
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v33 == 1 )
      v63 = 0;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1136));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1056));
  if ( v78 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8094) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1216LL, v78);
  }
  return v63;
};

// Line 242: range 000000000CAD905C-000000000CAD9A26
int32_t __cdecl SceneExcelConfigMgr::checkWorldExcelConfig(
        SceneExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  SceneExcelConfigMgr *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  __int64 v13; // rsi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  int32_t result; // eax
  data::WorldExcelConfigMap *__for_range; // [rsp+18h] [rbp-1E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldExcelConfig>,false,false>::reference v33; // [rsp+20h] [rbp-1E0h]
  std::tuple_element<0,std::pair<unsigned int const,data::WorldExcelConfig> >::type *world_id; // [rsp+28h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WorldExcelConfig> >::type *world_config; // [rsp+30h] [rbp-1D0h]
  data::SceneExcelConfig *main_scene_config_ptr; // [rsp+38h] [rbp-1C8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1C0h]
  data::SceneExcelConfig *scene_config_ptr; // [rsp+48h] [rbp-1B8h]
  char v39[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 12 scene_id:257 64 8 15 __for_begin:243 96 8 13 __for_end:243 128 8 15 __for_begin:257 16"
                        "0 8 13 __for_end:257 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SceneExcelConfigMgr::checkWorldExcelConfig;
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
  __for_range = &this->world_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WorldExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::WorldExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WorldExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::WorldExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::WorldExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldExcelConfig>,false> *)(v3 + 96)) )
    {
      v12 = 1;
      goto LABEL_48;
    }
    v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldExcelConfig>,false,false> *const)(v3 + 64));
    world_id = std::get<0ul,unsigned int const,data::WorldExcelConfig>(v33);
    world_config = (std::tuple_element<1,const std::pair<unsigned int const,data::WorldExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WorldExcelConfig>(v33);
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)&world_config->main_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&world_config->main_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&world_config->main_scene_id);
    }
    main_scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(v6, world_config->main_scene_id);
    if ( !main_scene_config_ptr )
    {
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
        "./src/txt_data_manual/SceneExcelConfig.cpp",
        "checkWorldExcelConfig",
        248);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])"world_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, world_id);
      v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v9, (const char (*)[23])byte_1A119180);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &world_config->main_scene_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1A117C40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
      v12 = 0;
      goto LABEL_48;
    }
    v13 = (((_BYTE)main_scene_config_ptr + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&main_scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)main_scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_scene_config_ptr->type >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&main_scene_config_ptr->type);
    }
    if ( !SceneExcelConfigMgr::isWorldScene(main_scene_config_ptr->type) )
      break;
    __for_range_0 = &world_config->sub_scene_id_vec;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v13);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v13);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v19 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v30 = 1;
        goto LABEL_44;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v21 = (int *)v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      v22 = *v21;
      v23 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v23 != 0 && v23 <= 3 )
      {
        LOBYTE(v19) = v23 != 0;
        __asan_report_store4(v3 + 48, v19);
      }
      *(_DWORD *)(v3 + 48) = v22;
      scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(this, *(unsigned int *)(v3 + 48));
      if ( !scene_config_ptr )
        goto LABEL_36;
      if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&scene_config_ptr->type);
      }
      if ( SceneExcelConfigMgr::isRoomScene(scene_config_ptr->type) )
        v24 = 0;
      else
LABEL_36:
        v24 = 1;
      if ( v24 )
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
      "./src/txt_data_manual/SceneExcelConfig.cpp",
      "checkWorldExcelConfig",
      262);
    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])"world_id: ");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, world_id);
    v28 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v27, (const char (*)[22])byte_1A119200);
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v29, (const char (*)[34])byte_1A119240);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v30 = 0;
LABEL_44:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v30 != 1 )
    {
      v12 = 0;
      goto LABEL_48;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/SceneExcelConfig.cpp",
    "checkWorldExcelConfig",
    253);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])"world_id: ");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, world_id);
  v17 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v16, (const char (*)[23])byte_1A119180);
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &world_config->main_scene_id);
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v18, (const char (*)[23])byte_1A1191C0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  v2 = -1;
  v12 = 0;
LABEL_48:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
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

// Line 271: range 000000000CAD9A28-000000000CADA207
int32_t __cdecl SceneExcelConfigMgr::checkSceneTagConfig(
        SceneExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  SceneExcelConfigMgr *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  data::SceneTagConfigMap *__for_range; // [rsp+18h] [rbp-178h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneTagConfig>,false,false>::reference v29; // [rsp+20h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SceneTagConfig> >::type *config; // [rsp+30h] [rbp-160h]
  data::SceneExcelConfig *scene_config_ptr; // [rsp+38h] [rbp-158h]
  char v32[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 15 __for_begin:272 64 8 13 __for_end:272 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SceneExcelConfigMgr::checkSceneTagConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->scene_tag_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SceneTagConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::SceneTagConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SceneTagConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::SceneTagConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SceneTagConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SceneTagConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SceneTagConfig>,false> *)(v3 + 64)) )
    {
      v14 = 1;
      goto LABEL_36;
    }
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneTagConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneTagConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::SceneTagConfig>(v29);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::SceneTagConfig> >::type *)std::get<1ul,unsigned int const,data::SceneTagConfig>(v29);
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->scene_id);
    }
    scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(v6, config->scene_id);
    if ( !scene_config_ptr )
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
        "./src/txt_data_manual/SceneExcelConfig.cpp",
        "checkSceneTagConfig",
        277);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])"SceneTag ID:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->id);
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" name:");
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &config->scene_tag_name);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])byte_1A1193E0);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->scene_id);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])byte_1A119420);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v14 = 0;
      goto LABEL_36;
    }
    if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&scene_config_ptr->type);
    }
    if ( SceneExcelConfigMgr::isPlayerScene(scene_config_ptr->type) )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&scene_config_ptr->type);
    }
    if ( scene_config_ptr->type == SCENE_DUNGEON )
LABEL_23:
      v15 = 0;
    else
      v15 = 1;
    if ( v15 )
    {
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
        "./src/txt_data_manual/SceneExcelConfig.cpp",
        "checkSceneTagConfig",
        285);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])"SceneTag ID:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->id);
      v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" name:");
      v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &config->scene_tag_name);
      common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v20, (const char (*)[58])byte_1A119460);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v14 = 0;
      goto LABEL_36;
    }
    p_scene_config_mgr = &txt_config_mgr->scene_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->scene_id);
    }
    if ( SceneExcelConfigMgr::isPlayerWorldImageScene(p_scene_config_mgr, config->scene_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneTagConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SceneTagConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/SceneExcelConfig.cpp",
    "checkSceneTagConfig",
    291);
  v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])"SceneTag ID:");
  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &config->id);
  v25 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])" name:");
  v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &config->scene_tag_name);
  common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v26, (const char (*)[52])byte_1A1194C0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v14 = 0;
LABEL_36:
  if ( v14 == 1 )
    v2 = 0;
  result = v2;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 299: range 000000000CADA208-000000000CADA2D6
bool __cdecl SceneExcelConfigMgr::isSceneIgnoreTempOutputConfigCheck(
        const SceneExcelConfigMgr *const this,
        uint32_t scene_id)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+18h] [rbp-8h]

  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(this, scene_id);
  if ( !scene_config_ptr )
    return 0;
  v3 = ((_BYTE)scene_config_ptr + 100) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&scene_config_ptr->is_check_output_config >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->is_check_output_config >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&scene_config_ptr->is_check_output_config, v3, v4);
  if ( !scene_config_ptr->is_check_output_config )
    return 1;
  if ( *(char *)(((unsigned __int64)&scene_config_ptr->is_blockbin_abandoned >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&scene_config_ptr->is_blockbin_abandoned, v3, &scene_config_ptr->is_blockbin_abandoned);
  return scene_config_ptr->is_blockbin_abandoned;
};

// Line 309: range 000000000CADA2D8-000000000CADA346
bool __cdecl SceneExcelConfigMgr::isSceneAllowMapMarkPoint(const SceneExcelConfigMgr *const this, uint32_t scene_id)
{
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+18h] [rbp-8h]

  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(this, scene_id);
  if ( !scene_config_ptr )
    return 0;
  if ( *(char *)(((unsigned __int64)&scene_config_ptr->is_allow_map_mark_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &scene_config_ptr->is_allow_map_mark_point,
      scene_id,
      &scene_config_ptr->is_allow_map_mark_point);
  return scene_config_ptr->is_allow_map_mark_point;
};

// Line 319: range 000000000CADA348-000000000CADA3BB
bool __cdecl SceneExcelConfigMgr::isSceneDeleteMapMarkPoint(const SceneExcelConfigMgr *const this, uint32_t scene_id)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+18h] [rbp-8h]

  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(this, scene_id);
  if ( !scene_config_ptr )
    return 0;
  v3 = ((_BYTE)scene_config_ptr + 113) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&scene_config_ptr->is_delete_map_mark_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->is_delete_map_mark_point >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&scene_config_ptr->is_delete_map_mark_point, v3, v4);
  return scene_config_ptr->is_delete_map_mark_point;
};

// Line 329: range 000000000CADA3BC-000000000CADA42F
bool __cdecl SceneExcelConfigMgr::isSceneAbandonBlockbin(const SceneExcelConfigMgr *const this, uint32_t scene_id)
{
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+18h] [rbp-8h]

  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(this, scene_id);
  if ( !scene_config_ptr )
    return 0;
  if ( *(char *)(((unsigned __int64)&scene_config_ptr->is_blockbin_abandoned >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&scene_config_ptr->is_blockbin_abandoned, scene_id, &scene_config_ptr->is_blockbin_abandoned);
  return scene_config_ptr->is_blockbin_abandoned;
};

// Line 339: range 000000000CADA430-000000000CADA4A8
bool __cdecl SceneExcelConfigMgr::isSceneAbandonScenebin(const SceneExcelConfigMgr *const this, uint32_t scene_id)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+18h] [rbp-8h]

  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(this, scene_id);
  if ( !scene_config_ptr )
    return 0;
  v3 = ((_BYTE)scene_config_ptr - 111) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&scene_config_ptr->is_scenebin_abandoned >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->is_scenebin_abandoned >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&scene_config_ptr->is_scenebin_abandoned, v3, v4);
  return scene_config_ptr->is_scenebin_abandoned;
};

// Line 349: range 000000000CADA4AA-000000000CADA51D
bool __cdecl SceneExcelConfigMgr::isPersistentDungeonScene(const SceneExcelConfigMgr *const this, uint32_t scene_id)
{
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+18h] [rbp-8h]

  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(this, scene_id);
  if ( !scene_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->subtype >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&scene_config_ptr->subtype >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&scene_config_ptr->subtype);
  }
  return scene_config_ptr->subtype == SCENE_SUB_TYPE_PERSISTENT_DUNGEON;
};

// Line 359: range 000000000CADA51E-000000000CADA599
bool __cdecl SceneExcelConfigMgr::isPlayerWorldScene(const SceneExcelConfigMgr *const this, uint32_t scene_id)
{
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+18h] [rbp-8h]

  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(this, scene_id);
  if ( !scene_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&scene_config_ptr->type);
  }
  return scene_config_ptr->type == SCENE_WORLD;
};

// Line 370: range 000000000CADA59A-000000000CADA813
int32_t __cdecl SceneExcelConfigMgr::rewriteWorldLevelExcelConfig(
        SceneExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldLevelExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t *p_level; // rsi
  uint32_t *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  char v9; // al
  int32_t result; // eax
  data::WorldLevelExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldLevelExcelConfig>,false,false>::reference v12; // [rsp+18h] [rbp-98h]
  char v13[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldLevelExcelConfig>,false,false> *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldLevelExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldLevelExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldLevelExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:371 64 8 13 __for_end:371";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldLevelExcelConfig>,false>::__node_type *)SceneExcelConfigMgr::rewriteWorldLevelExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->world_level_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::WorldLevelExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::WorldLevelExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WorldLevelExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldLevelExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::WorldLevelExcelConfig>(v12);
    p_level = &std::get<1ul,unsigned int const,data::WorldLevelExcelConfig>(v12)->level;
    v6 = (uint32_t *)std::max<unsigned int>(&this->max_world_level_, p_level);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7;
    v9 = *(_BYTE *)(((unsigned __int64)&this->max_world_level_ >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(p_level) = v9 != 0;
      __asan_report_store4(&this->max_world_level_, p_level);
    }
    this->max_world_level_ = v8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WorldLevelExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldLevelExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 379: range 000000000CADA814-000000000CADA893
bool __cdecl SceneExcelConfigMgr::isPlayerWorldImageScene(const SceneExcelConfigMgr *const this, uint32_t scene_id)
{
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+18h] [rbp-8h]

  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(this, scene_id);
  if ( !scene_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->image_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)scene_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->image_scene_id >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(&scene_config_ptr->image_scene_id);
  }
  return scene_config_ptr->image_scene_id != 0;
};
