// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MaterialExcelConfig.cpp

// Line 22: range 00000000145EA260-00000000145EA488
int32_t __cdecl MaterialExcelConfigMgr::rewriteConfig(MaterialExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = MaterialExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( MaterialExcelConfigMgr::rewriteMaterialExcelConfig(this, txt_config_mgr)
    || MaterialExcelConfigMgr::rewriteAvatarCardChangeExcelConfig(this, txt_config_mgr)
    || MaterialExcelConfigMgr::rewriteMaterialDeleteExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "rewriteConfig",
      28);
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

// Line 36: range 00000000145EA48A-00000000145EA6B2
int32_t __cdecl MaterialExcelConfigMgr::checkConfig(
        MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = MaterialExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( MaterialExcelConfigMgr::checkMaterialExcelConfig(this, txt_config_mgr)
    || MaterialExcelConfigMgr::checkAvatarCardChangeExcelConfig(this, txt_config_mgr)
    || MaterialExcelConfigMgr::checkMaterialDeleteExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "checkConfig",
      42);
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

// Line 51: range 00000000145EA6B4-00000000145EA875
const std::set<unsigned int> *__fastcall MaterialExcelConfigMgr::findMaterialsInCdGroup(
        const MaterialExcelConfigMgr *const this,
        __int64 cd_group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_material_cd_group_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 cd_group_id:50 64 8 5 it:52 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MaterialExcelConfigMgr::findMaterialsInCdGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = cd_group_id;
  p_material_cd_group_map = &this->material_cd_group_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, cd_group_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_material_cd_group_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->material_cd_group_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 59: range 00000000145EA876-00000000145EAA18
_BOOL8 __fastcall MaterialExcelConfigMgr::isStackable(const MaterialExcelConfigMgr *const this, __int64 item_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v6; // rdx
  _BOOL8 result; // rax
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 10 item_id:58 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MaterialExcelConfigMgr::isStackable;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = item_id;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, item_id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(p_material_excel_config_map);
  v6 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, item_id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               v6,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v2 + 96));
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

// Line 72: range 00000000145EAA74-00000000145EAC12
bool __cdecl MaterialExcelConfigMgr::isMaterialVecEmpty(
        const MaterialExcelConfigMgr *const this,
        const std::vector<data::IdCountConfig> *material_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const data::IdCountConfig *M_current; // r14
  const data::IdCountConfig *v6; // rcx
  MaterialExcelConfigMgr::isMaterialVecEmpty::<lambda(const data::IdCountConfig&)> v7; // dl
  bool result; // al
  char v9[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 if_func:73 64 8 7 iter:77 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MaterialExcelConfigMgr::isMaterialVecEmpty;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  M_current = std::vector<data::IdCountConfig>::cend(material_vec)._M_current;
  v6 = std::vector<data::IdCountConfig>::cbegin(material_vec)._M_current;
  v7.gap0[0] = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
  if ( v7.gap0[0] )
    __asan_report_store8(v2 + 64, material_vec);
  *(__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 64) = std::find_if<__gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>,MaterialExcelConfigMgr::isMaterialVecEmpty(std::vector<data::IdCountConfig> const&)::{lambda(data::IdCountConfig const&)#1}>((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> >)v6, (__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> >)M_current, v7);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, M_current);
  *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 96) = std::vector<data::IdCountConfig>::cend(material_vec);
  result = __gnu_cxx::operator==<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
             (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 64),
             (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 96));
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

// Line 73: range 00000000145EAA1A-00000000145EAA72
bool __cdecl MaterialExcelConfigMgr::isMaterialVecEmpty(std::vector<data::IdCountConfig> const&)const::{lambda(data::IdCountConfig const&)#1}::operator()(
        const MaterialExcelConfigMgr::isMaterialVecEmpty::<lambda(const data::IdCountConfig&)> *const __closure,
        const data::IdCountConfig *config)
{
  if ( *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->count);
  }
  return config->count != 0;
};

// Line 83: range 00000000145EAC14-00000000145EAE02
__int64 __fastcall MaterialExcelConfigMgr::findCdGroupTime(
        const MaterialExcelConfigMgr *const this,
        __int64 cd_group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_cd_group_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 cd_group_id:82 64 8 7 iter:84 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MaterialExcelConfigMgr::findCdGroupTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = cd_group_id;
  p_cd_group_map = &this->cd_group_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, cd_group_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_cd_group_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->cd_group_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96)) )
  {
    result = 0LL;
  }
  else
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
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

// Line 91: range 00000000145EAE04-00000000145EB249
const std::vector<data::IdCountConfig> *__fastcall MaterialExcelConfigMgr::findAvatarRepeatAward(
        const MaterialExcelConfigMgr *const this,
        __int64 avatar_id,
        uint32_t repeat_times)
{
  const std::vector<data::IdCountConfig> *p_item_vec; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  data::AvatarCardChangeExcelConfigMap *p_avatar_card_change_excel_config_map; // rdx
  data::AvatarCardChangeExcelConfigMap *v8; // rdx
  bool v9; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false>::pointer v10; // rax
  uint32_t *p_repeat_count_max; // rax
  __int64 v12; // rsi
  int v13; // eax
  const std::vector<data::IdCountConfig> *result; // rax
  const data::AvatarCardChangeExcelConfig *avatar_change_config; // [rsp+10h] [rbp-110h]
  const data::AvatarCardRepeatConfig *last_repeat_config; // [rsp+18h] [rbp-108h]
  const std::vector<data::AvatarCardRepeatConfig> *__for_range; // [rsp+20h] [rbp-100h]
  const data::AvatarCardRepeatConfig *repeat_config; // [rsp+28h] [rbp-F8h]
  char v20[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 12 avatar_id:90 64 8 7 iter:92 96 8 9 <unknown> 128 8 15 __for_begin:110 160 8 13 __for_end:110";
  *(_QWORD *)(v4 + 16) = MaterialExcelConfigMgr::findAvatarRepeatAward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 48) = avatar_id;
  p_avatar_card_change_excel_config_map = &this->avatar_card_change_excel_config_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, avatar_id);
  *(std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::find(p_avatar_card_change_excel_config_map, (const std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::key_type *)(v4 + 48));
  v8 = &this->avatar_card_change_excel_config_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    p_item_vec = 0LL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false> *const)(v4 + 64));
    avatar_change_config = &v10->second;
    if ( std::vector<data::AvatarCardRepeatConfig>::empty(&v10->second.repeat_transfer_list) )
    {
      p_item_vec = 0LL;
    }
    else
    {
      last_repeat_config = std::vector<data::AvatarCardRepeatConfig>::back(&avatar_change_config->repeat_transfer_list);
      p_repeat_count_max = &last_repeat_config->repeat_count_max;
      v12 = (((_BYTE)last_repeat_config + 68) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)p_repeat_count_max >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_repeat_count_max & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_repeat_count_max >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(p_repeat_count_max);
      }
      if ( repeat_times < last_repeat_config->repeat_count_max )
      {
        __for_range = &avatar_change_config->repeat_transfer_list;
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 128, v12);
        *(std::vector<data::AvatarCardRepeatConfig>::const_iterator *)(v4 + 128) = std::vector<data::AvatarCardRepeatConfig>::begin(__for_range);
        *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 160, v12);
        *(std::vector<data::AvatarCardRepeatConfig>::const_iterator *)(v4 + 160) = std::vector<data::AvatarCardRepeatConfig>::end(__for_range);
        while ( __gnu_cxx::operator!=<data::AvatarCardRepeatConfig const*,std::vector<data::AvatarCardRepeatConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *)(v4 + 128),
                  (const __gnu_cxx::__normal_iterator<const data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *)(v4 + 160)) )
        {
          repeat_config = __gnu_cxx::__normal_iterator<data::AvatarCardRepeatConfig const*,std::vector<data::AvatarCardRepeatConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *const)(v4 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_min >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_min >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&repeat_config->repeat_count_min);
          }
          if ( repeat_times >= repeat_config->repeat_count_min )
          {
            if ( *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_max >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)repeat_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_max >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(&repeat_config->repeat_count_max);
            }
            if ( repeat_times <= repeat_config->repeat_count_max )
            {
              p_item_vec = &repeat_config->item_vec;
              v13 = 0;
              goto LABEL_31;
            }
          }
          __gnu_cxx::__normal_iterator<data::AvatarCardRepeatConfig const*,std::vector<data::AvatarCardRepeatConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *const)(v4 + 128));
        }
        v13 = 1;
LABEL_31:
        if ( v13 == 1 )
          p_item_vec = 0LL;
      }
      else
      {
        p_item_vec = &last_repeat_config->item_vec;
      }
    }
  }
  result = p_item_vec;
  if ( v20 == (char *)v4 )
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

// Line 123: range 00000000145EB24A-00000000145EB639
__int64 __fastcall MaterialExcelConfigMgr::findAvatarIdByAvatarMaterial(
        const MaterialExcelConfigMgr *const this,
        __int64 item_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  int v10; // eax
  __int64 result; // rax
  std::vector<data::ItemUseConfig> *__for_range; // [rsp+20h] [rbp-100h]
  const data::ItemUseConfig *use_config; // [rsp+28h] [rbp-F8h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 13 avatar_id:134 48 4 11 item_id:122 64 8 8 iter:124 96 8 9 <unknown> 128 8 15 __for_begi"
                        "n:130 160 8 13 __for_end:130";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::findAvatarIdByAvatarMaterial;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = item_id;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, item_id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               p_material_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v2 = 0;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 64))->second.item_use;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 128) = std::vector<data::ItemUseConfig>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 160) = std::vector<data::ItemUseConfig>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 160)) )
      {
        v10 = 1;
        goto LABEL_26;
      }
      use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&use_config->use_op);
      }
      if ( use_config->use_op == ITEM_USE_GAIN_AVATAR )
        break;
      __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, v3 + 160);
    *(_DWORD *)(v3 + 32) = 0;
    common::tools::StringUtils::strVecToNum<0u,unsigned int>(&use_config->use_param, (unsigned int *)(v3 + 32));
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    v2 = *(_DWORD *)(v3 + 32);
    v10 = 0;
LABEL_26:
    if ( v10 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 144: range 00000000145EB63A-00000000145EBA29
__int64 __fastcall MaterialExcelConfigMgr::findFurnitureIdByFurnitureFormulaMaterial(
        const MaterialExcelConfigMgr *const this,
        __int64 item_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  int v10; // eax
  __int64 result; // rax
  std::vector<data::ItemUseConfig> *__for_range; // [rsp+20h] [rbp-100h]
  const data::ItemUseConfig *use_config; // [rsp+28h] [rbp-F8h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 16 furniture_id:155 48 4 11 item_id:143 64 8 8 iter:145 96 8 9 <unknown> 128 8 15 __for_b"
                        "egin:151 160 8 13 __for_end:151";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::findFurnitureIdByFurnitureFormulaMaterial;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = item_id;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, item_id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               p_material_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v2 = 0;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 64))->second.item_use;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 128) = std::vector<data::ItemUseConfig>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 160) = std::vector<data::ItemUseConfig>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 160)) )
      {
        v10 = 1;
        goto LABEL_26;
      }
      use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&use_config->use_op);
      }
      if ( use_config->use_op == ITEM_USE_UNLOCK_FURNITURE_FORMULA )
        break;
      __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, v3 + 160);
    *(_DWORD *)(v3 + 32) = 0;
    common::tools::StringUtils::strVecToNum<0u,unsigned int>(&use_config->use_param, (unsigned int *)(v3 + 32));
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    v2 = *(_DWORD *)(v3 + 32);
    v10 = 0;
LABEL_26:
    if ( v10 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 164: range 00000000145EBA2A-00000000145EBE19
__int64 __fastcall MaterialExcelConfigMgr::findCostumeIdByCostumeMaterial(
        const MaterialExcelConfigMgr *const this,
        __int64 item_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  int v10; // eax
  __int64 result; // rax
  std::vector<data::ItemUseConfig> *__for_range; // [rsp+20h] [rbp-100h]
  const data::ItemUseConfig *use_config; // [rsp+28h] [rbp-F8h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 14 costume_id:175 48 4 11 item_id:163 64 8 8 iter:165 96 8 9 <unknown> 128 8 15 __for_beg"
                        "in:171 160 8 13 __for_end:171";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::findCostumeIdByCostumeMaterial;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = item_id;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, item_id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               p_material_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v2 = 0;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 64))->second.item_use;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 128) = std::vector<data::ItemUseConfig>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 160) = std::vector<data::ItemUseConfig>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 160)) )
      {
        v10 = 1;
        goto LABEL_26;
      }
      use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&use_config->use_op);
      }
      if ( use_config->use_op == ITEM_USE_GAIN_COSTUME )
        break;
      __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, v3 + 160);
    *(_DWORD *)(v3 + 32) = 0;
    common::tools::StringUtils::strVecToNum<0u,unsigned int>(&use_config->use_param, (unsigned int *)(v3 + 32));
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    v2 = *(_DWORD *)(v3 + 32);
    v10 = 0;
LABEL_26:
    if ( v10 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 184: range 00000000145EBE1A-00000000145EC322
std::vector<unsigned int> *__fastcall MaterialExcelConfigMgr::findBgmListByBgmMaterial(
        std::vector<unsigned int> *retstr,
        const MaterialExcelConfigMgr *const this,
        uint32_t item_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  const std::string *v10; // rax
  std::vector<data::ItemUseConfig> *__for_range; // [rsp+30h] [rbp-140h]
  const data::ItemUseConfig *use_config; // [rsp+38h] [rbp-138h]
  char v15[304]; // [rsp+40h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 1 9 <unknown> 48 4 11 item_id:183 64 8 8 iter:186 96 8 9 <unknown> 128 8 15 __for_begin:192"
                        " 160 8 13 __for_end:192 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::findBgmListByBgmMaterial;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = item_id;
  std::vector<unsigned int>::vector(retstr);
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               p_material_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( !v9 )
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 64))->second.item_use;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 128) = std::vector<data::ItemUseConfig>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 160) = std::vector<data::ItemUseConfig>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 160)) )
    {
      use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&use_config->use_op);
      }
      if ( use_config->use_op == ITEM_USE_UNLOCK_HOME_BGM )
      {
        if ( !std::vector<std::string>::empty(&use_config->use_param) )
        {
          *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 32);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 192),
            ";",
            (const std::allocator<char> *)(v3 + 32));
          v10 = std::vector<std::string>::operator[](&use_config->use_param, 0LL);
          common::tools::StringUtils::splitToList<unsigned int>(v10, (const std::string *)(v3 + 192), retstr, 0);
          std::string::~string((void *)(v3 + 192));
          *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 32);
        }
        break;
      }
      __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
    }
  }
  if ( v15 == (char *)v3 )
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
  return retstr;
};

// Line 211: range 00000000145EC324-00000000145EC735
__int64 __fastcall MaterialExcelConfigMgr::findGCGCardIdByMaterial(
        const MaterialExcelConfigMgr *const this,
        __int64 item_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  int v10; // eax
  __int64 result; // rax
  std::vector<data::ItemUseConfig> *__for_range; // [rsp+20h] [rbp-100h]
  const data::ItemUseConfig *use_config; // [rsp+28h] [rbp-F8h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 11 card_id:226 48 4 11 item_id:210 64 8 8 iter:212 96 8 9 <unknown> 128 8 15 __for_begin:"
                        "218 160 8 13 __for_end:218";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::findGCGCardIdByMaterial;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = item_id;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, item_id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               p_material_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v2 = 0;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 64))->second.item_use;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 128) = std::vector<data::ItemUseConfig>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 160) = std::vector<data::ItemUseConfig>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 160)) )
      {
        v10 = 1;
        goto LABEL_29;
      }
      use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&use_config->use_op);
      }
      if ( use_config->use_op == ITEM_USE_GAIN_GCG_CARD )
        break;
      __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
    }
    if ( std::vector<std::string>::empty(&use_config->use_param) )
    {
      v2 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32, v3 + 160);
      *(_DWORD *)(v3 + 32) = 0;
      common::tools::StringUtils::strVecToNum<0u,unsigned int>(&use_config->use_param, (unsigned int *)(v3 + 32));
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v2 = *(_DWORD *)(v3 + 32);
    }
    v10 = 0;
LABEL_29:
    if ( v10 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 235: range 00000000145EC736-00000000145ECB47
__int64 __fastcall MaterialExcelConfigMgr::findGCGCardBackIdByMaterial(
        const MaterialExcelConfigMgr *const this,
        __int64 item_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  int v10; // eax
  __int64 result; // rax
  std::vector<data::ItemUseConfig> *__for_range; // [rsp+20h] [rbp-100h]
  const data::ItemUseConfig *use_config; // [rsp+28h] [rbp-F8h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 16 card_back_id:250 48 4 11 item_id:234 64 8 8 iter:236 96 8 9 <unknown> 128 8 15 __for_b"
                        "egin:242 160 8 13 __for_end:242";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::findGCGCardBackIdByMaterial;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = item_id;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, item_id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               p_material_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v2 = 0;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 64))->second.item_use;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 128) = std::vector<data::ItemUseConfig>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 160) = std::vector<data::ItemUseConfig>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 160)) )
      {
        v10 = 1;
        goto LABEL_29;
      }
      use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&use_config->use_op);
      }
      if ( use_config->use_op == ITEM_USE_GAIN_GCG_CARD_BACK )
        break;
      __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
    }
    if ( std::vector<std::string>::empty(&use_config->use_param) )
    {
      v2 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32, v3 + 160);
      *(_DWORD *)(v3 + 32) = 0;
      common::tools::StringUtils::strVecToNum<0u,unsigned int>(&use_config->use_param, (unsigned int *)(v3 + 32));
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v2 = *(_DWORD *)(v3 + 32);
    }
    v10 = 0;
LABEL_29:
    if ( v10 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 259: range 00000000145ECB48-00000000145ECF59
__int64 __fastcall MaterialExcelConfigMgr::findGCGFieldIdByMaterial(
        const MaterialExcelConfigMgr *const this,
        __int64 item_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  int v10; // eax
  __int64 result; // rax
  std::vector<data::ItemUseConfig> *__for_range; // [rsp+20h] [rbp-100h]
  const data::ItemUseConfig *use_config; // [rsp+28h] [rbp-F8h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 12 field_id:274 48 4 11 item_id:258 64 8 8 iter:260 96 8 9 <unknown> 128 8 15 __for_begin"
                        ":266 160 8 13 __for_end:266";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::findGCGFieldIdByMaterial;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = item_id;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, item_id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               p_material_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v2 = 0;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 64))->second.item_use;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 128) = std::vector<data::ItemUseConfig>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v3 + 160) = std::vector<data::ItemUseConfig>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v3 + 160)) )
      {
        v10 = 1;
        goto LABEL_29;
      }
      use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&use_config->use_op);
      }
      if ( use_config->use_op == ITEM_USE_GAIN_GCG_CARD_FIELD )
        break;
      __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v3 + 128));
    }
    if ( std::vector<std::string>::empty(&use_config->use_param) )
    {
      v2 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32, v3 + 160);
      *(_DWORD *)(v3 + 32) = 0;
      common::tools::StringUtils::strVecToNum<0u,unsigned int>(&use_config->use_param, (unsigned int *)(v3 + 32));
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v2 = *(_DWORD *)(v3 + 32);
    }
    v10 = 0;
LABEL_29:
    if ( v10 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 283: range 00000000145ECF5A-00000000145ED370
__int64 __fastcall MaterialExcelConfigMgr::findGCGCardFaceByMaterial(
        const MaterialExcelConfigMgr *const this,
        __int64 item_id,
        uint32_t *card_id,
        data::GCGCardFaceType *card_face)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v9; // rdx
  char *v10; // rsi
  bool v11; // al
  int v12; // eax
  const std::string *v13; // rax
  const std::string *v14; // rax
  __int64 result; // rax
  std::vector<data::ItemUseConfig> *__for_range; // [rsp+30h] [rbp-100h]
  const data::ItemUseConfig *use_config; // [rsp+38h] [rbp-F8h]
  char v20[240]; // [rsp+40h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 48 4 11 item_id:282 64 8 8 iter:284 96 8 9 <unknown> 128 8 15 __for_begin:290 160 8 13 __for_end:290";
  *(_QWORD *)(v5 + 16) = MaterialExcelConfigMgr::findGCGCardFaceByMaterial;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -202116352;
  *(_DWORD *)(v5 + 48) = item_id;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, item_id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               p_material_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v5 + 48));
  v9 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, v5 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v9);
  v10 = (char *)(v5 + 96);
  v11 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v5 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v5 + 96));
  *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v11 )
  {
    v4 = -1;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v5 + 64))->second.item_use;
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, v10);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v5 + 128) = std::vector<data::ItemUseConfig>::begin(__for_range);
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v10);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v5 + 160) = std::vector<data::ItemUseConfig>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v5 + 128),
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v5 + 160)) )
      {
        v12 = 1;
        goto LABEL_29;
      }
      use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v5 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&use_config->use_op);
      }
      if ( use_config->use_op == ITEM_USE_GAIN_GCG_CARD_FACE )
        break;
      __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v5 + 128));
    }
    if ( std::vector<std::string>::size(&use_config->use_param) > 1 )
    {
      v13 = std::vector<std::string>::operator[](&use_config->use_param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v13, card_id, 1) )
      {
        v4 = -1;
        v12 = 0;
      }
      else
      {
        v14 = std::vector<std::string>::operator[](&use_config->use_param, 1uLL);
        if ( common::tools::StringUtils::strToEnum<data::GCGCardFaceType>(v14, card_face) )
          v4 = -1;
        else
          v4 = 0;
        v12 = 0;
      }
    }
    else
    {
      v4 = -1;
      v12 = 0;
    }
LABEL_29:
    if ( v12 == 1 )
      v4 = -1;
  }
  result = v4;
  if ( v20 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 314: range 00000000145ED372-00000000145EE017
int32_t __cdecl MaterialExcelConfigMgr::rewriteMaterialExcelConfig(
        MaterialExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t *p_cd_group; // rax
  std::set<unsigned int> *v8; // rdx
  std::map<unsigned int,unsigned int> *p_cd_group_map; // rdx
  const std::map<unsigned int,unsigned int>::key_type *v10; // rcx
  __int64 v11; // rsi
  const std::map<unsigned int,unsigned int>::key_type *v12; // rsi
  std::map<unsigned int,unsigned int> *v13; // rdx
  bool v14; // al
  uint32_t v15; // r15d
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v16; // rdx
  char v17; // cl
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int v27; // edx
  uint32_t cd_time; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v29; // rax
  uint32_t *v30; // rdx
  char v31; // cl
  int v32; // edx
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_material_item_ids_map; // rcx
  __int64 material_type; // rsi
  std::set<unsigned int> *v35; // rdx
  std::unordered_set<unsigned int> *v36; // rdx
  uint32_t rank_level; // ecx
  data::ItemConfig *v38; // rdi
  data::ItemConfig **v39; // r8
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  int v42; // eax
  int32_t result; // eax
  data::MaterialExcelConfigMap *__for_range; // [rsp+28h] [rbp-1F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-1F0h]
  const std::set<unsigned int>::value_type *item_id; // [rsp+38h] [rbp-1E8h]
  std::tuple_element<1,std::pair<unsigned int const,data::MaterialExcelConfig> >::type *material_config; // [rsp+40h] [rbp-1E0h]
  data::MaterialExcelConfigMap *__for_range_0; // [rsp+50h] [rbp-1D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::reference v50; // [rsp+58h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::MaterialExcelConfig> >::type *item_id_0; // [rsp+60h] [rbp-1C0h]
  std::tuple_element<1,std::pair<unsigned int const,data::MaterialExcelConfig> >::type *material_config_0; // [rsp+68h] [rbp-1B8h]
  char v53[432]; // [rsp+70h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 9 <unknown> 64 8 15 __for_begin:315 96 8 13 __for_end:315 128 8 8 iter:326 160 8 9 <unkno"
                        "wn> 192 8 15 __for_begin:355 224 8 13 __for_end:355 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::rewriteMaterialExcelConfig;
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
  v5[536862731] = -202116109;
  __for_range = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 64));
    item_id = std::get<0ul,unsigned int const,data::MaterialExcelConfig>(__in);
    material_config = std::get<1ul,unsigned int const,data::MaterialExcelConfig>(__in);
    p_cd_group = &material_config->cd_group;
    if ( *(_BYTE *)(((unsigned __int64)p_cd_group >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_cd_group & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cd_group >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_cd_group);
    }
    if ( material_config->cd_group )
    {
      v8 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
             &this->material_cd_group_map,
             &material_config->cd_group);
      std::set<unsigned int>::insert(v8, item_id);
    }
    common::tools::MiscUtils::removeEmptyElement<data::ItemUseConfig,data::ItemUseOp data::ItemUseConfig::*>(
      &material_config->item_use,
      (data::ItemUseOp *)8);
    if ( *(_BYTE *)(((unsigned __int64)&material_config->cd_group >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->cd_group >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&material_config->cd_group);
    }
    if ( !material_config->cd_group )
      goto LABEL_41;
    if ( *(_BYTE *)(((unsigned __int64)&material_config->cd_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&material_config->cd_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&material_config->cd_time);
    }
    if ( !material_config->cd_time )
      goto LABEL_41;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_cd_group_map = &this->cd_group_map_;
    v10 = &material_config->cd_group;
    v11 = *(unsigned __int8 *)(((v3 + 128) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v11 )
      __asan_report_store8(v3 + 128, v11);
    v12 = v10;
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                     p_cd_group_map,
                                                                     v10);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v13 = &this->cd_group_map_;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v12);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 160) = std::map<unsigned int,unsigned int>::end(v13);
    v6 = (char *)(v3 + 160);
    v14 = std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( !v14 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&material_config->cd_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&material_config->cd_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&material_config->cd_time);
      }
      cd_time = material_config->cd_time;
      v6 = (char *)&material_config->cd_group;
      v29 = std::map<unsigned int,unsigned int>::operator[](&this->cd_group_map_, &material_config->cd_group);
      v30 = v29;
      v31 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v31 != 0;
      if ( v31 != 0 && (char)(((unsigned __int8)v29 & 7) + 3) >= v31 )
        __asan_report_store4(v29, v6);
      *v30 = cd_time;
LABEL_38:
      v27 = 1;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(((unsigned __int64)&material_config->cd_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&material_config->cd_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&material_config->cd_time);
    }
    v15 = material_config->cd_time;
    v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 128));
    v17 = *(_BYTE *)(((unsigned __int64)&v16->second >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v17 != 0;
    if ( v17 != 0 && (char)((((_BYTE)v16 + 4) & 7) + 3) >= v17 )
      __asan_report_load4(&v16->second);
    if ( v15 == v16->second )
      goto LABEL_38;
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
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "rewriteMaterialExcelConfig",
      331);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])"cd_group:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &material_config->cd_group);
    v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])" cd_time:");
    v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 128));
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v22->second);
    v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v23, (const char (*)[17])" item's cd_time:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &material_config->cd_time);
    v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])" item_id:");
    v6 = (char *)item_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, item_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v27 = 0;
LABEL_39:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v27 != 1 )
    {
      v32 = 0;
      goto LABEL_51;
    }
LABEL_41:
    if ( *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&material_config->material_type);
    }
    if ( material_config->material_type == MATERIAL_NAMECARD )
      std::unordered_set<unsigned int>::insert(&this->name_card_set, item_id);
    p_material_item_ids_map = &this->material_item_ids_map;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&material_config->material_type);
    }
    material_type = (unsigned int)material_config->material_type;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, material_type);
    *(_DWORD *)(v3 + 48) = material_type;
    v35 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
            p_material_item_ids_map,
            (std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
    std::set<unsigned int>::insert(v35, item_id);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    v36 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
            &this->set_to_item_ids_map,
            &material_config->set_id);
    std::unordered_set<unsigned int>::insert(v36, item_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 64));
  }
  v32 = 1;
LABEL_51:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v32 == 1 )
  {
    __for_range_0 = &this->material_excel_config_map;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v6);
    *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 224)) )
      {
        v42 = 1;
        goto LABEL_68;
      }
      v50 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 192));
      item_id_0 = std::get<0ul,unsigned int const,data::MaterialExcelConfig>(v50);
      material_config_0 = std::get<1ul,unsigned int const,data::MaterialExcelConfig>(v50);
      if ( *(_BYTE *)(((unsigned __int64)&material_config_0->rank_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&material_config_0->rank_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&material_config_0->rank_level);
      }
      rank_level = material_config_0->rank_level;
      v38 = (data::ItemConfig *)material_config_0;
      v39 = (data::ItemConfig **)(((unsigned __int8)item_id_0 & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) )
      {
        v38 = (data::ItemConfig *)item_id_0;
        __asan_report_load4(item_id_0);
      }
      if ( (unsigned int)ItemExcelConfigMgr::addItemConfig(
                           &txt_config_mgr->item_config_mgr,
                           *item_id_0,
                           v38,
                           rank_level,
                           v39) )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 192));
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
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "rewriteMaterialExcelConfig",
      359);
    v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v41 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            v40,
            (const char (*)[39])"addMaterialBaseConfig failed, item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, item_id_0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    v2 = -1;
    v42 = 0;
LABEL_68:
    if ( v42 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v53 == (char *)v3 )
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

// Line 368: range 00000000145EE018-00000000145EF1FB
int32_t __cdecl MaterialExcelConfigMgr::rewriteAvatarCardChangeExcelConfig(
        MaterialExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  __int64 v7; // rsi
  std::vector<unsigned int>::reference v8; // rax
  uint32_t *v9; // rdx
  uint32_t v10; // ecx
  char v11; // al
  __int64 v12; // rsi
  std::vector<unsigned int>::reference v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  char v16; // dl
  __int64 v17; // rsi
  std::vector<unsigned int>::reference v18; // rax
  uint32_t *v19; // rdx
  uint32_t v20; // ecx
  char v21; // al
  __int64 v22; // rsi
  std::vector<unsigned int>::reference v23; // rax
  uint32_t *v24; // rdx
  uint32_t v25; // ecx
  char v26; // dl
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  _BOOL4 v29; // edx
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  bool v32; // r15
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  int v37; // r15d
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  __int64 *v42; // rdx
  __int64 v43; // rsi
  std::vector<unsigned int>::reference v44; // rax
  int *v45; // rdx
  int v46; // ecx
  char v47; // al
  std::vector<unsigned int>::size_type v48; // rsi
  std::vector<unsigned int>::reference v49; // rax
  int *v50; // rdx
  int v51; // ecx
  char v52; // dl
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  uint32_t repeat_count_max; // ecx
  char v55; // al
  unsigned __int64 v56; // rax
  int v57; // edx
  int v58; // eax
  uint32_t idx; // [rsp+24h] [rbp-2CCh]
  data::AvatarCardChangeExcelConfigMap *__for_range; // [rsp+28h] [rbp-2C8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-2C0h]
  const unsigned int *avatar_id; // [rsp+38h] [rbp-2B8h]
  std::tuple_element<1,std::pair<unsigned int const,data::AvatarCardChangeExcelConfig> >::type *avatar_change_config; // [rsp+40h] [rbp-2B0h]
  std::vector<data::AvatarCardRepeatConfig> *__for_range_0; // [rsp+48h] [rbp-2A8h]
  data::AvatarCardRepeatConfig *repeat_config; // [rsp+50h] [rbp-2A0h]
  data::MaterialExcelConfig *material_config_ptr; // [rsp+58h] [rbp-298h]
  char v69[656]; // [rsp+60h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 8 15 __for_begin:369 96 8 13 __for_end:369 128 8 15 __fo"
                        "r_begin:371 160 8 13 __for_end:371 192 16 19 id_count_config:402 224 24 11 tmp_vec:389 288 32 9 "
                        "<unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::rewriteAvatarCardChangeExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -219021312;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -202116109;
  __for_range = &this->avatar_card_change_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false> *const)(v3 + 64));
    avatar_id = std::get<0ul,unsigned int const,data::AvatarCardChangeExcelConfig>(__in);
    avatar_change_config = std::get<1ul,unsigned int const,data::AvatarCardChangeExcelConfig>(__in);
    __for_range_0 = &avatar_change_config->repeat_transfer_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::AvatarCardRepeatConfig>::iterator *)(v3 + 128) = std::vector<data::AvatarCardRepeatConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<data::AvatarCardRepeatConfig>::iterator *)(v3 + 160) = std::vector<data::AvatarCardRepeatConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::AvatarCardRepeatConfig *,std::vector<data::AvatarCardRepeatConfig>>(
              (const __gnu_cxx::__normal_iterator<data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *)(v3 + 160)) )
    {
      repeat_config = __gnu_cxx::__normal_iterator<data::AvatarCardRepeatConfig *,std::vector<data::AvatarCardRepeatConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *const)(v3 + 128));
      if ( std::vector<unsigned int>::size(&repeat_config->count_interval) == 1 )
      {
        v7 = 0LL;
        v8 = std::vector<unsigned int>::operator[](&repeat_config->count_interval, 0LL);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        v10 = *v9;
        v11 = *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_min >> 3) + 0x7FFF8000);
        if ( v11 != 0 && v11 <= 3 )
        {
          LOBYTE(v7) = v11 != 0;
          __asan_report_store4(&repeat_config->repeat_count_min, v7);
        }
        repeat_config->repeat_count_min = v10;
        v12 = 0LL;
        v13 = std::vector<unsigned int>::operator[](&repeat_config->count_interval, 0LL);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        v15 = *v14;
        v16 = *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_max >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)((((_BYTE)repeat_config + 68) & 7) + 3) >= v16 )
        {
          LOBYTE(v12) = v16 != 0;
          __asan_report_store4(&repeat_config->repeat_count_max, v12);
        }
        repeat_config->repeat_count_max = v15;
LABEL_39:
        v30 = ((v3 + 224) >> 3) + 2147450880;
        *(_WORD *)v30 = 0;
        *(_BYTE *)(v30 + 2) = 0;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 224));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 48);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 416),
          ":",
          (const std::allocator<char> *)(v3 + 48));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 32);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 352),
          ";",
          (const std::allocator<char> *)(v3 + 32));
        v31 = v3 + 352;
        v32 = common::tools::StringUtils::splitToList<unsigned int>(
                &repeat_config->trasfer_item,
                (const std::string *)(v3 + 352),
                (const std::string *)(v3 + 416),
                2u,
                (std::vector<unsigned int> *)(v3 + 224),
                0) != 0;
        std::string::~string((void *)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 32);
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
        std::string::~string((void *)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 48);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v32 )
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
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "rewriteAvatarCardChangeExcelConfig",
            392);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v34 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v33, (const char (*)[52])byte_1ADBB100);
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, avatar_id);
          v36 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v35, (const char (*)[15])byte_1ADBB160);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, &repeat_config->trasfer_item);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v37 = 0;
        }
        else if ( (std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 224)) & 1) != 0 )
        {
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
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "rewriteAvatarCardChangeExcelConfig",
            397);
          v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v39 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v38, (const char (*)[52])byte_1ADBB100);
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, avatar_id);
          v41 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v40, (const char (*)[15])byte_1ADBB160);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v41, &repeat_config->trasfer_item);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v37 = 0;
        }
        else
        {
          for ( idx = 0; idx < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 224)); idx += 2 )
          {
            *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
            v42 = &`vtable for'data::IdCountConfig + 2;
            if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 192, v31);
            *(_QWORD *)(v3 + 192) = v42;
            if ( *(_BYTE *)(((v3 + 200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 200) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 200, v31);
            *(_DWORD *)(v3 + 200) = 0;
            if ( *(_BYTE *)(((v3 + 204) >> 3) + 0x7FFF8000) != 0
              && (char)(((v3 - 52) & 7) + 3) >= *(_BYTE *)(((v3 + 204) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v3 + 204, (((_BYTE)v3 - 52) & 7u) + 3);
            }
            *(_DWORD *)(v3 + 204) = 0;
            v43 = idx;
            v44 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 224), idx);
            v45 = (int *)v44;
            if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v44);
            }
            v46 = *v45;
            v47 = *(_BYTE *)(((v3 + 200) >> 3) + 0x7FFF8000);
            if ( v47 != 0 && v47 <= 3 )
            {
              LOBYTE(v43) = v47 != 0;
              __asan_report_store4(v3 + 200, v43);
            }
            *(_DWORD *)(v3 + 200) = v46;
            v48 = idx + 1;
            v49 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 224), v48);
            v50 = (int *)v49;
            if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v49);
            }
            v51 = *v50;
            v52 = *(_BYTE *)(((v3 + 204) >> 3) + 0x7FFF8000);
            if ( v52 != 0 && (char)(((v3 - 52) & 7) + 3) >= v52 )
            {
              LOBYTE(v48) = v52 != 0;
              __asan_report_store4(v3 + 204, v48);
            }
            *(_DWORD *)(v3 + 204) = v51;
            std::vector<data::IdCountConfig>::emplace_back<data::IdCountConfig&>(
              &repeat_config->item_vec,
              (data::IdCountConfig *)(v3 + 192),
              (data::IdCountConfig *)&repeat_config->item_vec);
            p_material_config_mgr = &txt_config_mgr->material_config_mgr;
            if ( *(_BYTE *)(((v3 + 200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 200) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 200);
            v31 = *(unsigned int *)(v3 + 200);
            material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, v31);
            if ( material_config_ptr )
            {
              v31 = (((_BYTE)material_config_ptr + 76) & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4(&material_config_ptr->material_type);
              }
              if ( material_config_ptr->material_type == MATERIAL_TALENT )
              {
                v31 = (((_BYTE)repeat_config + 68) & 7u) + 3;
                if ( *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_max >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)repeat_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_max >> 3)
                                                                               + 0x7FFF8000) )
                {
                  __asan_report_load4(&repeat_config->repeat_count_max);
                }
                repeat_count_max = repeat_config->repeat_count_max;
                v55 = *(_BYTE *)(((unsigned __int64)&avatar_change_config->last_talent_item_count >> 3) + 0x7FFF8000);
                LOBYTE(v31) = v55 != 0;
                if ( v55 != 0 && v55 <= 3 )
                  __asan_report_store4(&avatar_change_config->last_talent_item_count, v31);
                avatar_change_config->last_talent_item_count = repeat_count_max;
              }
            }
            data::IdCountConfig::~IdCountConfig((data::IdCountConfig *const)(v3 + 192));
            *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -1800;
          }
          v37 = 1;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 224));
        v29 = v37 == 1;
        goto LABEL_77;
      }
      if ( std::vector<unsigned int>::size(&repeat_config->count_interval) == 2 )
      {
        v17 = 0LL;
        v18 = std::vector<unsigned int>::operator[](&repeat_config->count_interval, 0LL);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        v20 = *v19;
        v21 = *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_min >> 3) + 0x7FFF8000);
        if ( v21 != 0 && v21 <= 3 )
        {
          LOBYTE(v17) = v21 != 0;
          __asan_report_store4(&repeat_config->repeat_count_min, v17);
        }
        repeat_config->repeat_count_min = v20;
        v22 = 1LL;
        v23 = std::vector<unsigned int>::operator[](&repeat_config->count_interval, 1uLL);
        v24 = v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        v25 = *v24;
        v26 = *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_max >> 3) + 0x7FFF8000);
        if ( v26 != 0 && (char)((((_BYTE)repeat_config + 68) & 7) + 3) >= v26 )
        {
          LOBYTE(v22) = v26 != 0;
          __asan_report_store4(&repeat_config->repeat_count_max, v22);
        }
        repeat_config->repeat_count_max = v25;
        goto LABEL_39;
      }
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
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "rewriteAvatarCardChangeExcelConfig",
        385);
      v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v28 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v27, (const char (*)[52])byte_1ADBB0A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, avatar_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v29 = 0;
LABEL_77:
      v56 = ((v3 + 224) >> 3) + 2147450880;
      *(_WORD *)v56 = -1800;
      *(_BYTE *)(v56 + 2) = -8;
      if ( !v29 )
      {
        v57 = 0;
        goto LABEL_81;
      }
      __gnu_cxx::__normal_iterator<data::AvatarCardRepeatConfig *,std::vector<data::AvatarCardRepeatConfig>>::operator++((__gnu_cxx::__normal_iterator<data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *const)(v3 + 128));
    }
    v57 = 1;
LABEL_81:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v57 != 1 )
    {
      v58 = 0;
      goto LABEL_85;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false> *const)(v3 + 64));
  }
  v58 = 1;
LABEL_85:
  if ( v58 == 1 )
    v2 = 0;
  if ( v69 == (char *)v3 )
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

// Line 420: range 00000000145EF1FC-00000000145F0379
int32_t __cdecl MaterialExcelConfigMgr::rewriteMaterialDeleteExcelConfig(
        MaterialExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MaterialExpireType *p_expire_type; // rax
  __int64 v7; // rsi
  data::MaterialExpireType expire_type; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  const std::string *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  const std::string *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // eax
  const std::string *v30; // rax
  __int64 TimeByStr; // rsi
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int v36; // edx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int v41; // eax
  int v42; // eax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  data::MaterialDeleteExcelConfigMap *__for_range; // [rsp+10h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-2A8h]
  const unsigned int *material_id; // [rsp+20h] [rbp-2A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::MaterialDeleteExcelConfig> >::type *config; // [rsp+28h] [rbp-298h]
  char v52[656]; // [rsp+30h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 4 8 week:428 48 4 8 time:429 64 4 8 time:462 80 4 8 time:480 96 8 15 __for_begin:421 128 8"
                        " 13 __for_end:421 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 41"
                        "6 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::rewriteMaterialDeleteExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -202116109;
  __for_range = &this->material_delete_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false> *)(v3 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false> *const)(v3 + 96));
    material_id = std::get<0ul,unsigned int const,data::MaterialDeleteExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::MaterialDeleteExcelConfig>(__in);
    p_expire_type = &config->expire_type;
    v7 = (((_BYTE)config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_expire_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_expire_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_expire_type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_expire_type);
    }
    expire_type = config->expire_type;
    if ( expire_type == DateTime )
    {
      std::vector<unsigned int>::clear(&config->expire_time_param_vec);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 64, v7);
      *(_DWORD *)(v3 + 64) = 0;
      if ( !std::vector<std::string>::empty(&config->expire_time_param_str_list) )
      {
        v30 = std::vector<std::string>::operator[](&config->expire_time_param_str_list, 0LL);
        TimeByStr = (unsigned int)common::tools::TimeUtils::getTimeByStr(v30);
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64, TimeByStr);
        *(_DWORD *)(v3 + 64) = TimeByStr;
      }
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 64);
      if ( *(_DWORD *)(v3 + 64) )
      {
        std::vector<unsigned int>::push_back(
          &config->expire_time_param_vec,
          (const std::vector<unsigned int>::value_type *)(v3 + 64));
        v36 = 1;
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
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "rewriteMaterialDeleteExcelConfig",
          469);
        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v33 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v32, (const char (*)[48])byte_1ADBB300);
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, material_id);
        v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])byte_1ADBB360);
        common::milog::MiLogStream::operator<<<std::string>(v35, &config->expire_time_param_str_list);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v36 = 0;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !v36 )
      {
        v29 = 0;
        goto LABEL_72;
      }
    }
    else if ( expire_type == DelayWeekCountDown )
    {
      std::vector<unsigned int>::clear(&config->expire_time_param_vec);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32, v7);
      *(_DWORD *)(v3 + 32) = 0;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48, v7);
      *(_DWORD *)(v3 + 48) = 0;
      if ( std::vector<std::string>::size(&config->expire_time_param_str_list) > 1 )
      {
        v14 = std::vector<std::string>::operator[](&config->expire_time_param_str_list, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v14, (unsigned int *)(v3 + 32), 1) )
        {
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
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "rewriteMaterialDeleteExcelConfig",
            438);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v15, (const char (*)[54])byte_1ADBB3A0);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, material_id);
          v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])byte_1ADBB360);
          common::milog::MiLogStream::operator<<<std::string>(v18, &config->expire_time_param_str_list);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
          *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v13 = 0;
        }
        else
        {
          v19 = *(unsigned __int8 *)(((v3 + 32) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v19 != 0 && (char)v19 <= 3 )
            __asan_report_load4(v3 + 32);
          if ( *(_DWORD *)(v3 + 32) && *(_DWORD *)(v3 + 32) <= 0x36u )
          {
            v24 = std::vector<std::string>::operator[](&config->expire_time_param_str_list, 1uLL);
            if ( common::tools::StringUtils::strToNum<unsigned int>(v24, (unsigned int *)(v3 + 48), 1) )
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
                "./src/txt_data_manual/MaterialExcelConfig.cpp",
                "rewriteMaterialDeleteExcelConfig",
                451);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 352),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v26 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                      v25,
                      (const char (*)[54])byte_1ADBB3A0);
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, material_id);
              v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])byte_1ADBB360);
              common::milog::MiLogStream::operator<<<std::string>(v28, &config->expire_time_param_str_list);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
              *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v13 = 0;
            }
            else
            {
              std::vector<unsigned int>::push_back(
                &config->expire_time_param_vec,
                (const std::vector<unsigned int>::value_type *)(v3 + 32));
              std::vector<unsigned int>::push_back(
                &config->expire_time_param_vec,
                (const std::vector<unsigned int>::value_type *)(v3 + 48));
              v13 = 1;
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
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "rewriteMaterialDeleteExcelConfig",
              445);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    v20,
                    (const char (*)[57])byte_1ADBB400);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, material_id);
            v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])byte_1ADBB360);
            common::milog::MiLogStream::operator<<<std::string>(v23, &config->expire_time_param_str_list);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
            *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v13 = 0;
          }
        }
      }
      else
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
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "rewriteMaterialDeleteExcelConfig",
          432);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v9, (const char (*)[48])byte_1ADBB300);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, material_id);
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])byte_1ADBB360);
        common::milog::MiLogStream::operator<<<std::string>(v12, &config->expire_time_param_str_list);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( !v13 )
      {
        v29 = 0;
        goto LABEL_72;
      }
    }
    else
    {
      std::vector<unsigned int>::clear(&config->expire_time_param_vec);
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80, v7);
      *(_DWORD *)(v3 + 80) = 0;
      if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(
             &config->expire_time_param_str_list,
             (unsigned int *)(v3 + 80)) )
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
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "rewriteMaterialDeleteExcelConfig",
          483);
        v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v38 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v37, (const char (*)[54])byte_1ADBB3A0);
        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, material_id);
        v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v39, (const char (*)[9])byte_1ADBB360);
        common::milog::MiLogStream::operator<<<std::string>(v40, &config->expire_time_param_str_list);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v41 = 0;
      }
      else
      {
        v42 = *(unsigned __int8 *)(((v3 + 80) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v42 != 0 && (char)v42 <= 3 )
          __asan_report_load4(v3 + 80);
        if ( *(_DWORD *)(v3 + 80) )
        {
          std::vector<unsigned int>::push_back(
            &config->expire_time_param_vec,
            (const std::vector<unsigned int>::value_type *)(v3 + 80));
          v41 = 1;
        }
        else
        {
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
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "rewriteMaterialDeleteExcelConfig",
            489);
          v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v44 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v43, (const char (*)[57])byte_1ADBB400);
          v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, material_id);
          v46 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v45, (const char (*)[9])byte_1ADBB360);
          common::milog::MiLogStream::operator<<<std::string>(v46, &config->expire_time_param_str_list);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v41 = 0;
        }
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( !v41 )
      {
        v29 = 0;
        goto LABEL_72;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false> *const)(v3 + 96));
  }
  v29 = 1;
LABEL_72:
  if ( v29 == 1 )
    v2 = 0;
  if ( v52 == (char *)v3 )
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

// Line 503: range 00000000145F037A-00000000145F2E8B
int32_t __cdecl MaterialExcelConfigMgr::checkMaterialExcelConfig(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const data::ItemUseConfig *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  const char *v17; // rsi
  data::ItemType item_type; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rsi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  const std::set<data::MaterialType> *CanNotDestroyMaterialTypeSet; // rax
  char v42; // al
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  common::milog::MiLogStream *v51; // rax
  std::vector<unsigned int>::size_type v52; // rax
  common::milog::MiLogStream *v53; // rax
  std::vector<unsigned int>::size_type v54; // rax
  __int64 v55; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v56; // rax
  int *v57; // rdx
  int v58; // ecx
  char v59; // al
  const MaterialExcelConfigMgr *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  __int64 v68; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v69; // rax
  int *v70; // rdx
  int v71; // ecx
  char v72; // al
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  const std::string *v75; // rax
  common::milog::MiLogStream *v76; // rax
  const std::string *v77; // rax
  int v78; // eax
  unsigned int v79; // ecx
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  std::unordered_map<unsigned int,data::MaterialExcelConfig>::size_type v84; // r14
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *value; // [rsp+0h] [rbp-6E0h]
  data::MaterialType *valuec; // [rsp+0h] [rbp-6E0h]
  common::milog::MiLogStream *valuea; // [rsp+0h] [rbp-6E0h]
  common::milog::MiLogStream *valueb; // [rsp+0h] [rbp-6E0h]
  common::milog::MiLogStream *valued; // [rsp+0h] [rbp-6E0h]
  int32_t ret; // [rsp+20h] [rbp-6C0h]
  uint32_t i; // [rsp+24h] [rbp-6BCh]
  data::MaterialExcelConfigMap *__for_range; // [rsp+28h] [rbp-6B8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::reference v96; // [rsp+30h] [rbp-6B0h]
  std::tuple_element<0,std::pair<unsigned int const,data::MaterialExcelConfig> >::type *material_id; // [rsp+38h] [rbp-6A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MaterialExcelConfig> >::type *material_config; // [rsp+40h] [rbp-6A0h]
  const std::vector<data::ItemUseConfig> *__for_range_0; // [rsp+48h] [rbp-698h]
  data::ItemConfig *item_config_ptr; // [rsp+50h] [rbp-690h]
  const data::ConstValueExcelConfig *const_value_conf_ptr; // [rsp+58h] [rbp-688h]
  const std::vector<std::string> *const_value_string_vec; // [rsp+60h] [rbp-680h]
  char v103[1648]; // [rsp+70h] [rbp-670h] BYREF

  v2 = (unsigned __int64)v103;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1600LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "31 32 1 9 <unknown> 48 4 13 return_id:606 64 4 16 return_count:625 80 4 16 return_limit:644 96 8"
                        " 15 __for_begin:505 128 8 13 __for_end:505 160 8 15 __for_begin:508 192 8 13 __for_end:508 224 8"
                        " 9 <unknown> 256 8 9 <unknown> 288 8 9 <unknown> 320 28 9 <unknown> 384 32 9 <unknown> 448 32 9 "
                        "<unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <"
                        "unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 "
                        "<unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 3"
                        "2 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MaterialExcelConfigMgr::checkMaterialExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = 0x4000000;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -202116109;
  ret = 0;
  __for_range = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v2 + 128)) )
      break;
    v96 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v2 + 96));
    material_id = std::get<0ul,unsigned int const,data::MaterialExcelConfig>(v96);
    material_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MaterialExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MaterialExcelConfig>(v96);
    __for_range_0 = &material_config->item_use;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v2 + 160) = std::vector<data::ItemUseConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v5);
    *(std::vector<data::ItemUseConfig>::const_iterator *)(v2 + 192) = std::vector<data::ItemUseConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v2 + 160),
              (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v2 + 192)) )
    {
      v6 = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v2 + 160));
      if ( !MaterialExcelConfigMgr::isUseConfigValid(this, txt_config_mgr, material_config, v6) )
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
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "checkMaterialExcelConfig",
          512);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])byte_1ADBB720);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, material_id);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v9, (const char (*)[35])byte_1ADBB760);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v2 + 160));
    }
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig> const,unsigned int>(
            &this->material_source_data_excel_config_map,
            material_id) )
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "checkMaterialExcelConfig",
        518);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])"material_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, material_id);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v12, (const char (*)[28])byte_1ADBB800);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&material_config->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&material_config->item_type);
    }
    if ( material_config->item_type != ITEM_VIRTUAL )
      goto LABEL_33;
    if ( *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)material_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(material_id);
    }
    if ( !*material_id || !proto::VirtualItem_IsValid(*material_id) )
      v13 = 1;
    else
LABEL_33:
      v13 = 0;
    if ( v13 )
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "checkMaterialExcelConfig",
        524);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])"material_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, material_id);
      common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(v16, (const char (*)[75])byte_1ADBB840);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v17 = (const char *)((((_BYTE)material_config + 12) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)&material_config->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&material_config->item_type);
    }
    item_type = material_config->item_type;
    if ( item_type == ITEM_VIRTUAL )
    {
      if ( *(_BYTE *)(((unsigned __int64)&material_config->stack_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&material_config->stack_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&material_config->stack_limit);
      }
      if ( material_config->stack_limit )
      {
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 576),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "checkMaterialExcelConfig",
          533);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                v19,
                (const char (*)[60])"item_type is virtual but stack_limit is not 0! material_id:");
        v17 = (const char *)material_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, material_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else if ( item_type == ITEM_MATERIAL )
    {
      if ( *(_BYTE *)(((unsigned __int64)&material_config->stack_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&material_config->stack_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&material_config->stack_limit);
      }
      if ( !material_config->stack_limit )
      {
        if ( !(_BYTE)`guard variable for'MaterialExcelConfigMgr::checkMaterialExcelConfig(TxtConfigMgr const&)::legacy_deprecated_material_id_vec
          && __cxa_guard_acquire(&`guard variable for'MaterialExcelConfigMgr::checkMaterialExcelConfig(TxtConfigMgr const&)::legacy_deprecated_material_id_vec) )
        {
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0x4000000;
          if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 320, v17);
          *(_DWORD *)(v2 + 320) = 103;
          v21 = (((_BYTE)v2 + 68) & 7u) + 3;
          if ( *(_BYTE *)(((v2 + 324) >> 3) + 0x7FFF8000) != 0
            && (char)(((v2 + 68) & 7) + 3) >= *(_BYTE *)(((v2 + 324) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v2 + 324, v21);
          }
          *(_DWORD *)(v2 + 324) = 104;
          if ( *(_BYTE *)(((v2 + 328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 328) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 328, v21);
          *(_DWORD *)(v2 + 328) = 101106;
          v22 = (((_BYTE)v2 + 76) & 7u) + 3;
          if ( *(_BYTE *)(((v2 + 332) >> 3) + 0x7FFF8000) != 0
            && (char)(((v2 + 76) & 7) + 3) >= *(_BYTE *)(((v2 + 332) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v2 + 332, v22);
          }
          *(_DWORD *)(v2 + 332) = 101107;
          if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 336, v22);
          *(_DWORD *)(v2 + 336) = 101108;
          v23 = (((_BYTE)v2 + 84) & 7u) + 3;
          if ( *(_BYTE *)(((v2 + 340) >> 3) + 0x7FFF8000) != 0
            && (char)(((v2 + 84) & 7) + 3) >= *(_BYTE *)(((v2 + 340) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v2 + 340, v23);
          }
          *(_DWORD *)(v2 + 340) = 101109;
          if ( *(_BYTE *)(((v2 + 344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 344) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 344, v23);
          *(_DWORD *)(v2 + 344) = 101110;
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
          std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 32));
          std::vector<unsigned int>::vector(
            &MaterialExcelConfigMgr::checkMaterialExcelConfig(TxtConfigMgr const&)const::legacy_deprecated_material_id_vec,
            (std::initializer_list<unsigned int>)__PAIR128__(7LL, v2 + 320),
            (const std::vector<unsigned int>::allocator_type *)(v2 + 32));
          __cxa_guard_release(&`guard variable for'MaterialExcelConfigMgr::checkMaterialExcelConfig(TxtConfigMgr const&)::legacy_deprecated_material_id_vec);
          __cxa_atexit(
            (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
            &MaterialExcelConfigMgr::checkMaterialExcelConfig(TxtConfigMgr const&)const::legacy_deprecated_material_id_vec,
            &_dso_handle);
          std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 32));
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        }
        v17 = (const char *)material_id;
        if ( !common::tools::MiscUtils::isContains<unsigned int>(
                &MaterialExcelConfigMgr::checkMaterialExcelConfig(TxtConfigMgr const&)const::legacy_deprecated_material_id_vec,
                material_id) )
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 640, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 640),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "checkMaterialExcelConfig",
            553);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  v24,
                  (const char (*)[57])"item_type is material but stack_limit is 0! material_id:");
          v17 = (const char *)material_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, material_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "checkMaterialExcelConfig",
        559);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
              v26,
              (const char (*)[67])"item_type is not virtual or material in MaterialData! material_id:");
      v17 = (const char *)material_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, material_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( !std::vector<unsigned int>::empty(&material_config->satiation_params) )
    {
      if ( std::vector<unsigned int>::size(&material_config->satiation_params) != 2 )
      {
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 768, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 768),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "checkMaterialExcelConfig",
          568);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 768),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v28, (const char (*)[13])"material_id:");
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, material_id);
        v17 = byte_1ADBBA00;
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v30, (const char (*)[29])byte_1ADBBA00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(char *)(((unsigned __int64)&material_config->use_on_gain >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&material_config->use_on_gain, v17, &material_config->use_on_gain);
      if ( material_config->use_on_gain )
      {
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 832, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 832),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "checkMaterialExcelConfig",
          573);
        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 832),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v31, (const char (*)[13])"material_id:");
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, material_id);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v33, (const char (*)[37])byte_1ADBBA40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&material_config->use_target >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)material_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->use_target >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&material_config->use_target);
      }
      if ( material_config->use_target == ITEM_USE_TARGET_NONE )
      {
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 896, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 896),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "checkMaterialExcelConfig",
          578);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v34, (const char (*)[13])"material_id:");
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, material_id);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v36, (const char (*)[40])byte_1ADBBAA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&material_config->destroy_rule >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&material_config->destroy_rule >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&material_config->destroy_rule);
    }
    if ( !data::isValidMaterialDestroyType(material_config->destroy_rule) )
    {
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 960, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 960),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "checkMaterialExcelConfig",
        585);
      v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 960),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v37, (const char (*)[13])"material_id:");
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, material_id);
      v40 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v39, (const char (*)[28])byte_1ADBBB00);
      common::milog::MiLogStream::operator<<<data::MaterialDestroyType,(data::MaterialDestroyType*)0>(
        v40,
        &material_config->destroy_rule);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    CanNotDestroyMaterialTypeSet = ConstValueExcelConfigMgr::getCanNotDestroyMaterialTypeSet(&txt_config_mgr->const_value_config_mgr);
    if ( !common::tools::MiscUtils::isContains<std::set<data::MaterialType> const,data::MaterialType>(
            CanNotDestroyMaterialTypeSet,
            &material_config->material_type) )
      goto LABEL_104;
    if ( *(_BYTE *)(((unsigned __int64)&material_config->destroy_rule >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&material_config->destroy_rule >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&material_config->destroy_rule);
    }
    if ( material_config->destroy_rule == DESTROY_RETURN_MATERIAL )
      v42 = 1;
    else
LABEL_104:
      v42 = 0;
    if ( v42 )
    {
      *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1024, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1024),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "checkMaterialExcelConfig",
        591);
      v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1024),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v44 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v43, (const char (*)[13])"material_id:");
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, material_id);
      value = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v45,
                (const char (*)[16])" material_type:");
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      v46 = (((_BYTE)material_config + 76) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)material_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&material_config->material_type);
      }
      v47 = (__int64)data::enumValToStr(material_config->material_type, v46);
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        v47 = __asan_report_store8(v2 + 224, v46);
      *(_QWORD *)(v2 + 224) = v47;
      v48 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(value, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v48, (const char (*)[13])byte_1ADBBB80);
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
      *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    valuec = (data::MaterialType *)std::vector<unsigned int>::size(&material_config->destroy_return_material);
    if ( valuec == (data::MaterialType *)std::vector<unsigned int>::size(&material_config->destroy_return_material_count) )
    {
      for ( i = 0; i < std::vector<unsigned int>::size(&material_config->destroy_return_material); ++i )
      {
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v55 = i;
        v56 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &material_config->destroy_return_material,
                                                                                                    i);
        v57 = (int *)v56;
        if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v56);
        }
        v58 = *v57;
        v59 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v59 != 0 && v59 <= 3 )
        {
          LOBYTE(v55) = v59 != 0;
          __asan_report_store4(v2 + 48, v55);
        }
        *(_DWORD *)(v2 + 48) = v58;
        if ( *(_DWORD *)(v2 + 48) )
        {
          v60 = this;
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(v60, *(unsigned int *)(v2 + 48)) )
          {
            p_item_config_mgr = &txt_config_mgr->item_config_mgr;
            if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 48);
            item_config_ptr = ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *(unsigned int *)(v2 + 48));
            if ( item_config_ptr )
            {
              *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
              v68 = i;
              v69 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&material_config->destroy_return_material_count, i);
              v70 = (int *)v69;
              if ( *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v69 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v69);
              }
              v71 = *v70;
              v72 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
              if ( v72 != 0 && v72 <= 3 )
              {
                LOBYTE(v68) = v72 != 0;
                __asan_report_store4(v2 + 64, v68);
              }
              *(_DWORD *)(v2 + 64) = v71;
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
                    *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1344) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1344, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1344),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/MaterialExcelConfig.cpp",
                      "checkMaterialExcelConfig",
                      639);
                    v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1344),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                      v74,
                      (const char (*)[69])byte_1ADBBDC0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
                    *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  else
                  {
                    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
                    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(v2 + 80, 181LL);
                    }
                    *(_DWORD *)(v2 + 80) = 0;
                    v75 = std::vector<std::string>::operator[](const_value_string_vec, 0LL);
                    if ( common::tools::StringUtils::strToNum<unsigned int>(v75, (unsigned int *)(v2 + 80), 1) )
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
                        "./src/txt_data_manual/MaterialExcelConfig.cpp",
                        "checkMaterialExcelConfig",
                        647);
                      v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1408),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      valued = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                                 v76,
                                 (const char (*)[78])byte_1ADBBE40);
                      v77 = std::vector<std::string>::operator[](const_value_string_vec, 0LL);
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(valued, v77);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                      *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                    else
                    {
                      v78 = *(unsigned __int8 *)(((v2 + 64) >> 3) + 0x7FFF8000);
                      if ( (_BYTE)v78 != 0 && (char)v78 <= 3 )
                        __asan_report_load4(v2 + 64);
                      v79 = *(_DWORD *)(v2 + 64);
                      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(v2 + 80);
                      }
                      if ( v79 > *(_DWORD *)(v2 + 80) )
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
                          "./src/txt_data_manual/MaterialExcelConfig.cpp",
                          "checkMaterialExcelConfig",
                          654);
                        v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1472),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v81 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                v80,
                                (const char (*)[11])"return_id:");
                        v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v81,
                                (const unsigned int *)(v2 + 48));
                        v83 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                v82,
                                (const char (*)[52])byte_1ADBBEC0);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v83,
                          (const unsigned int *)(v2 + 64));
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                        *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                        ret = -1;
                      }
                    }
                  }
                }
                else
                {
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1280, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1280),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/MaterialExcelConfig.cpp",
                    "checkMaterialExcelConfig",
                    631);
                  v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1280),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                    v73,
                    (const char (*)[66])byte_1ADBBD40);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
                *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
              }
            }
            else
            {
              *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1216) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1216, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1216),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/MaterialExcelConfig.cpp",
                "checkMaterialExcelConfig",
                620);
              v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1216),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v66 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v65,
                      (const char (*)[11])"return_id:");
              v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v66,
                      (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v67, (const char (*)[10])byte_1ADBBD00);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
              *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1152) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1152, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1152),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "checkMaterialExcelConfig",
              612);
            v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1152),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v62 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v61, (const char (*)[11])"return_id:");
            v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v62,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v63, (const char (*)[13])byte_1ADBBCC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
            *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1088) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1088, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1088),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "checkMaterialExcelConfig",
        597);
      v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1088),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v50 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v49, (const char (*)[13])"material_id:");
      v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, material_id);
      valuea = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(v51, (const char (*)[80])byte_1ADBBBC0);
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      v52 = std::vector<unsigned int>::size(&material_config->destroy_return_material);
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
        v52 = __asan_report_store8(v2 + 256, byte_1ADBBBC0);
      *(_QWORD *)(v2 + 256) = v52;
      v53 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              valuea,
              (const unsigned __int64 *)(v2 + 256));
      valueb = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v53, (const char (*)[30])byte_1ADBBC40);
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      v54 = std::vector<unsigned int>::size(&material_config->destroy_return_material_count);
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
        v54 = __asan_report_store8(v2 + 288, byte_1ADBBC40);
      *(_QWORD *)(v2 + 288) = v54;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        valueb,
        (const unsigned __int64 *)(v2 + 288));
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
      *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  v84 = std::unordered_map<unsigned int,data::MaterialExcelConfig>::size(&this->material_excel_config_map);
  if ( v84 != std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::size(&this->material_source_data_excel_config_map) )
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
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "checkMaterialExcelConfig",
      664);
    v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1536),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v85, (const char (*)[49])byte_1ADBBF20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
    ret = -1;
  }
  if ( v103 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 192) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C4) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1600LL, v103);
  }
  return ret;
};

// Line 671: range 00000000145F2E8C-00000000145F3C20
int32_t __cdecl MaterialExcelConfigMgr::checkMaterialDeleteExcelConfig(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const MaterialExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::reference v14; // rdx
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-264h]
  data::MaterialDeleteExcelConfigMap *__for_range; // [rsp+20h] [rbp-260h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false>::reference v34; // [rsp+28h] [rbp-258h]
  std::tuple_element<0,std::pair<unsigned int const,data::MaterialDeleteExcelConfig> >::type *material_id; // [rsp+30h] [rbp-250h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MaterialDeleteExcelConfig> >::type *delete_config; // [rsp+38h] [rbp-248h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+40h] [rbp-240h]
  const std::map<unsigned int,float> *__for_range_0; // [rsp+48h] [rbp-238h]
  std::tuple_element<0,std::pair<unsigned int const,float> >::type *item_id; // [rsp+50h] [rbp-230h]
  std::tuple_element<1,const std::pair<unsigned int const,float> >::type *convert_ration; // [rsp+58h] [rbp-228h]
  char v41[544]; // [rsp+60h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 8 15 __for_begin:673 64 8 13 __for_end:673 96 8 9 <unknown> 128 8 15 __for_begin:688 160 8"
                        " 13 __for_end:688 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 44"
                        "8 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MaterialExcelConfigMgr::checkMaterialDeleteExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  ret = 0;
  __for_range = &this->material_delete_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false> *)(v2 + 64)) )
  {
    v34 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false> *const)(v2 + 32));
    material_id = std::get<0ul,unsigned int const,data::MaterialDeleteExcelConfig>(v34);
    delete_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MaterialDeleteExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MaterialDeleteExcelConfig>(v34);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)material_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(material_id);
    }
    material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(v5, *material_id);
    if ( material_config_ptr )
    {
      v9 = (((_BYTE)material_config_ptr + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)material_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->item_type >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&material_config_ptr->item_type);
      }
      if ( material_config_ptr->item_type == ITEM_MATERIAL )
      {
        __for_range_0 = &delete_config->return_item_map;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, v9);
        *(std::map<unsigned int,float>::const_iterator *)(v2 + 128) = std::map<unsigned int,float>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 160, v9);
        *(std::map<unsigned int,float>::const_iterator *)(v2 + 160) = std::map<unsigned int,float>::end(__for_range_0);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 128),
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 160)) )
        {
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
          v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v2 + 128));
          if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 96, v2 + 160);
          if ( ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v14->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v14 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v14->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v14, 8LL);
          }
          *(std::pair<unsigned int const,float> *)(v2 + 96) = *v14;
          item_id = std::get<0ul,unsigned int const,float>((const std::pair<unsigned int const,float> *)(v2 + 96));
          convert_ration = (std::tuple_element<1,const std::pair<unsigned int const,float> >::type *)std::get<1ul,unsigned int const,float>((const std::pair<unsigned int const,float> *)(v2 + 96));
          p_item_config_mgr = &txt_config_mgr->item_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(item_id);
          }
          if ( ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *item_id) )
          {
            if ( *(_BYTE *)(((unsigned __int64)convert_ration >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)convert_ration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)convert_ration >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(convert_ration);
            }
            if ( *convert_ration < 0.0 )
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
                "./src/txt_data_manual/MaterialExcelConfig.cpp",
                "checkMaterialDeleteExcelConfig",
                698);
              v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 384),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v21,
                      (const char (*)[11])byte_1ADBB720);
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, material_id);
              v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v23,
                      (const char (*)[15])byte_1ADBC140);
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, item_id);
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v25, (const char (*)[21])byte_1ADBC1C0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
              *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
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
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "checkMaterialDeleteExcelConfig",
              692);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v16,
                    (const char (*)[11])byte_1ADBB720);
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, material_id);
            v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v18,
                    (const char (*)[15])byte_1ADBC140);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, item_id);
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v20, (const char (*)[17])byte_1ADBC180);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v2 + 128));
        }
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&material_config_ptr->material_type);
        }
        if ( material_config_ptr->material_type == MATERIAL_HOME_SEED
          && !std::map<unsigned int,float>::empty(&delete_config->return_item_map) )
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
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "checkMaterialDeleteExcelConfig",
            705);
          v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v27, (const char (*)[15])byte_1ADBC200);
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, material_id);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v29, (const char (*)[23])byte_1ADBC240);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "checkMaterialDeleteExcelConfig",
          684);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])byte_1ADBB720);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, material_id);
        v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v12, (const char (*)[34])byte_1ADBC0E0);
        common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(v13, &material_config_ptr->item_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "checkMaterialDeleteExcelConfig",
        678);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])byte_1ADBB720);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, material_id);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v8, (const char (*)[23])byte_1ADBC0A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v41 == (char *)v2 )
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

// Line 714: range 00000000145F3C22-00000000145F95C8
bool __cdecl MaterialExcelConfigMgr::isUseConfigValid(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::MaterialExcelConfig *material_config,
        const data::ItemUseConfig *use_config)
{
  bool v4; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // eax
  common::milog::MiLogStream *v34; // rax
  const HK4EDesignConfig *Config; // rax
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rcx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  int v40; // eax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  int v42; // eax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  HomeWorldExcelConfigMgr *v45; // rcx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  uint32_t rank_level; // ecx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  int v52; // eax
  HomeWorldExcelConfigMgr *v53; // rcx
  int v54; // eax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  int v58; // eax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  int v61; // eax
  AvatarFashionExcelConfigMgr *p_avatar_fashion_config_mgr; // rcx
  int v63; // eax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  int v68; // eax
  HomeWorldExcelConfigMgr *v69; // rcx
  int v70; // eax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rdx
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  char *v77; // rsi
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  _BOOL4 v80; // eax
  char v81; // r15
  const std::string *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  _BOOL4 v85; // r15d
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  unsigned __int64 v88; // rax
  char *v89; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v90; // rax
  int *v91; // rdx
  int v92; // ecx
  char v93; // al
  std::map<unsigned int,unsigned int>::mapped_type *v94; // rax
  std::vector<std::string> *p_use_param; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v96; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rdx
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  int v102; // edx
  _BOOL4 v103; // r15d
  char *v104; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v105; // rax
  int *v106; // rdx
  int v107; // ecx
  char v108; // al
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  int v111; // eax
  __int64 v112; // rsi
  __int64 v113; // rdx
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  int v119; // eax
  const std::string *v120; // rax
  common::milog::MiLogStream *v121; // rax
  common::milog::MiLogStream *v122; // r13
  const std::string *v123; // rax
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  common::milog::MiLogStream *v127; // rax
  int v128; // eax
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rax
  common::milog::MiLogStream *v132; // rax
  int v133; // eax
  GCGDeckExcelConfigMgr *p_gcg_deck_config_mgr; // rcx
  int v135; // eax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  int v140; // eax
  const std::string *v141; // rax
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  const std::string *v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  int v147; // eax
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  GCGDeckExcelConfigMgr *v150; // rdi
  data::GCGCardFaceType v151; // edx
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
  common::milog::MiLogStream *v154; // rax
  common::milog::MiLogStream *v155; // rax
  int v156; // eax
  GCGDeckExcelConfigMgr *v157; // rcx
  int v158; // eax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  common::milog::MiLogStream *v161; // rax
  common::milog::MiLogStream *v162; // rax
  int v163; // eax
  GCGDeckExcelConfigMgr *v164; // rcx
  int v165; // eax
  common::milog::MiLogStream *v166; // rax
  common::milog::MiLogStream *v167; // rax
  char v169; // [rsp+Ch] [rbp-1054h]
  char v170; // [rsp+Dh] [rbp-1053h]
  char v171; // [rsp+Eh] [rbp-1052h]
  char v172; // [rsp+Fh] [rbp-1051h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-1018h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-1010h]
  const unsigned int *bgm_id; // [rsp+58h] [rbp-1008h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+60h] [rbp-1000h]
  std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-FF8h]
  const data::HomeWorldBgmExcelConfig *bgm_config_ptr; // [rsp+70h] [rbp-FF0h]
  const data::HomeworldModuleExcelConfig *module_config_ptr; // [rsp+78h] [rbp-FE8h]
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+80h] [rbp-FE0h]
  const data::ProductCardDetailConfig *config_ptr; // [rsp+88h] [rbp-FD8h]
  char v185[4048]; // [rsp+90h] [rbp-FD0h] BYREF

  v5 = (unsigned __int64)v185;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_6(4000LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "77 48 1 9 <unknown> 64 4 13 config_id:829 80 4 16 furniture_id:849 96 4 22 furniture_suite_id:87"
                        "5 112 4 7 exp:891 128 4 14 costume_id:901 144 4 13 module_id:916 160 4 10 bgm_id:954 176 4 10 bg"
                        "m_id:966 192 4 26 regional_play_var_type:989 208 4 15 delta_value:995 224 4 12 card_id:1010 240 "
                        "4 12 card_id:1025 256 4 14 face_type:1026 272 4 17 card_back_id:1056 288 4 13 field_id:1072 304 "
                        "8 15 __for_begin:954 336 8 13 __for_end:954 368 8 9 <unknown> 400 8 15 __for_begin:958 432 8 13 "
                        "__for_end:958 464 8 15 __for_begin:966 496 8 13 __for_end:966 528 24 19 home_bgm_id_vec:942 592 "
                        "32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> 912 3"
                        "2 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 32 9 <unknown> 1168 32 9 <unknown> 123"
                        "2 32 9 <unknown> 1296 32 9 <unknown> 1360 32 9 <unknown> 1424 32 9 <unknown> 1488 32 9 <unknown>"
                        " 1552 32 9 <unknown> 1616 32 9 <unknown> 1680 32 9 <unknown> 1744 32 9 <unknown> 1808 32 9 <unkn"
                        "own> 1872 32 9 <unknown> 1936 32 9 <unknown> 2000 32 9 <unknown> 2064 32 9 <unknown> 2128 32 9 <"
                        "unknown> 2192 32 9 <unknown> 2256 32 9 <unknown> 2320 32 9 <unknown> 2384 32 9 <unknown> 2448 32"
                        " 9 <unknown> 2512 32 9 <unknown> 2576 32 9 <unknown> 2640 32 9 <unknown> 2704 32 9 <unknown> 276"
                        "8 32 9 <unknown> 2832 32 9 <unknown> 2896 32 9 <unknown> 2960 32 9 <unknown> 3024 32 9 <unknown>"
                        " 3088 32 9 <unknown> 3152 32 9 <unknown> 3216 32 9 <unknown> 3280 32 9 <unknown> 3344 32 9 <unkn"
                        "own> 3408 32 9 <unknown> 3472 32 9 <unknown> 3536 32 9 <unknown> 3600 32 9 <unknown> 3664 32 9 <"
                        "unknown> 3728 32 9 <unknown> 3792 32 9 <unknown> 3856 32 9 <unknown> 3920 48 17 bgm_count_map:953";
  *(_QWORD *)(v5 + 16) = MaterialExcelConfigMgr::isUseConfigValid;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -234556924;
  v7[536862723] = -234556924;
  v7[536862724] = -234556924;
  v7[536862725] = -234556924;
  v7[536862726] = -234556924;
  v7[536862727] = -234556924;
  v7[536862728] = -234556924;
  v7[536862729] = 61956;
  v7[536862729] = -234881024;
  v7[536862730] = 62194;
  v7[536862730] = -234881024;
  v7[536862731] = 62194;
  v7[536862731] = -234881024;
  v7[536862732] = 62194;
  v7[536862732] = -234881024;
  v7[536862733] = 62194;
  v7[536862733] = -234881024;
  v7[536862734] = 62194;
  v7[536862734] = -234881024;
  v7[536862735] = 62194;
  v7[536862735] = -234881024;
  v7[536862736] = 62194;
  v7[536862737] = -218959360;
  v7[536862738] = 62194;
  v7[536862739] = -219021312;
  v7[536862740] = 62194;
  v7[536862741] = -219021312;
  v7[536862742] = 62194;
  v7[536862743] = -219021312;
  v7[536862744] = 62194;
  v7[536862745] = -219021312;
  v7[536862746] = 62194;
  v7[536862747] = -219021312;
  v7[536862748] = 62194;
  v7[536862749] = -219021312;
  v7[536862750] = 62194;
  v7[536862751] = -219021312;
  v7[536862752] = 62194;
  v7[536862753] = -219021312;
  v7[536862754] = 62194;
  v7[536862755] = -219021312;
  v7[536862756] = 62194;
  v7[536862757] = -219021312;
  v7[536862758] = 62194;
  v7[536862759] = -219021312;
  v7[536862760] = 62194;
  v7[536862761] = -219021312;
  v7[536862762] = 62194;
  v7[536862763] = -219021312;
  v7[536862764] = 62194;
  v7[536862765] = -219021312;
  v7[536862766] = 62194;
  v7[536862767] = -219021312;
  v7[536862768] = 62194;
  v7[536862769] = -219021312;
  v7[536862770] = 62194;
  v7[536862771] = -219021312;
  v7[536862772] = 62194;
  v7[536862773] = -219021312;
  v7[536862774] = 62194;
  v7[536862775] = -219021312;
  v7[536862776] = 62194;
  v7[536862777] = -219021312;
  v7[536862778] = 62194;
  v7[536862779] = -219021312;
  v7[536862780] = 62194;
  v7[536862781] = -219021312;
  v7[536862782] = 62194;
  v7[536862783] = -219021312;
  v7[536862784] = 62194;
  v7[536862785] = -219021312;
  v7[536862786] = 62194;
  v7[536862787] = -219021312;
  v7[536862788] = 62194;
  v7[536862789] = -219021312;
  v7[536862790] = 62194;
  v7[536862791] = -219021312;
  v7[536862792] = 62194;
  v7[536862793] = -219021312;
  v7[536862794] = 62194;
  v7[536862795] = -219021312;
  v7[536862796] = 62194;
  v7[536862797] = -219021312;
  v7[536862798] = 62194;
  v7[536862799] = -219021312;
  v7[536862800] = 62194;
  v7[536862801] = -219021312;
  v7[536862802] = 62194;
  v7[536862803] = -219021312;
  v7[536862804] = 62194;
  v7[536862805] = -219021312;
  v7[536862806] = 62194;
  v7[536862807] = -219021312;
  v7[536862808] = 62194;
  v7[536862809] = -219021312;
  v7[536862810] = 62194;
  v7[536862811] = -219021312;
  v7[536862812] = 62194;
  v7[536862813] = -219021312;
  v7[536862814] = 62194;
  v7[536862815] = -219021312;
  v7[536862816] = 62194;
  v7[536862817] = -219021312;
  v7[536862818] = 62194;
  v7[536862819] = -219021312;
  v7[536862820] = 62194;
  v7[536862821] = -219021312;
  v7[536862822] = 62194;
  v7[536862823] = -219021312;
  v7[536862824] = 62194;
  v7[536862825] = -219021312;
  v7[536862826] = 62194;
  v7[536862827] = -219021312;
  v7[536862828] = 62194;
  v7[536862829] = -219021312;
  v7[536862830] = 62194;
  v7[536862831] = -219021312;
  v7[536862832] = 62194;
  v7[536862833] = -219021312;
  v7[536862834] = 62194;
  v7[536862835] = -219021312;
  v7[536862836] = 62194;
  v7[536862837] = -219021312;
  v7[536862838] = 62194;
  v7[536862839] = -219021312;
  v7[536862840] = 62194;
  v7[536862841] = -219021312;
  v7[536862842] = 62194;
  v7[536862844] = -202116109;
  v8 = (((_BYTE)material_config + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)material_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&material_config->material_type);
  }
  if ( material_config->material_type != MATERIAL_AVATAR )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&use_config->use_op);
  }
  if ( use_config->use_op != ITEM_USE_GAIN_AVATAR )
  {
    if ( *(char *)(((v5 + 592) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 623) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 623) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 592, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 592),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isUseConfigValid",
      720);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v5 + 592),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v9, (const char (*)[35])byte_1ADBC940);
    v11 = common::milog::MiLogStream::operator<<<data::ItemUseOp,(data::ItemUseOp*)0>(v10, &use_config->use_op);
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])byte_1ADBC9A0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &material_config->id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 592));
    v4 = 0;
    goto LABEL_387;
  }
  if ( std::vector<data::ItemUseConfig>::size(&material_config->item_use) == 1 )
  {
LABEL_17:
    if ( *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&use_config->use_op);
    }
    switch ( use_config->use_op )
    {
      case ITEM_USE_GAIN_AVATAR:
        if ( *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)material_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&material_config->material_type);
        }
        if ( material_config->material_type == MATERIAL_AVATAR )
          goto LABEL_386;
        if ( *(char *)(((v5 + 912) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 943) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 943) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 912, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 912),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUseConfigValid",
          757);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 912),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v19, (const char (*)[52])byte_1ADBCB40);
        common::milog::MiLogStream::operator<<<data::MaterialType,(data::MaterialType*)0>(
          v20,
          &material_config->material_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 912));
        v4 = 0;
        break;
      case ITEM_USE_ADD_DUNGEON_COND_TIME:
        if ( MaterialExcelConfigMgr::isAddDungeonCondTimeValid(this, &use_config->use_param) )
          goto LABEL_386;
        if ( *(char *)(((v5 + 720) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 751) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 751) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 720, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 720),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUseConfigValid",
          734);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 720),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v15, (const char (*)[47])byte_1ADBCA20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 720));
        v4 = 0;
        break;
      case ITEM_USE_ADD_WEAPON_EXP:
      case ITEM_USE_ADD_RELIQUARY_EXP:
        if ( *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 112, v8);
        *(_DWORD *)(v5 + 112) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(
               &use_config->use_param,
               (unsigned int *)(v5 + 112)) )
        {
          if ( *(char *)(((v5 + 2128) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 2159) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 2159) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 2128, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 2128),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            894);
          v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 2128),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            v57,
            (const char (*)[45])"ITEM_USE_ADD_RELIQUARY_EXP param check fail,");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2128));
          v4 = 0;
          v58 = 0;
        }
        else
        {
          v58 = 1;
        }
        if ( v58 )
          goto LABEL_386;
        break;
      case ITEM_USE_UNLOCK_COOK_RECIPE:
        if ( MaterialExcelConfigMgr::isUnlockCookRecipeValid(this, txt_config_mgr, &use_config->use_param) )
          goto LABEL_386;
        if ( *(char *)(((v5 + 784) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 815) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 815) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 784, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 784),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUseConfigValid",
          741);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 784),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v16, (const char (*)[44])byte_1ADBCA80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 784));
        v4 = 0;
        break;
      case ITEM_USE_OPEN_RANDOM_CHEST:
        if ( !MaterialExcelConfigMgr::isOpenRandomChestValid(this, txt_config_mgr, &use_config->use_param) )
          goto LABEL_32;
        if ( *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)material_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&material_config->material_type);
        }
        if ( material_config->material_type == MATERIAL_CHEST )
          v17 = 0;
        else
LABEL_32:
          v17 = 1;
        if ( !v17 )
          goto LABEL_386;
        if ( *(char *)(((v5 + 848) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 879) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 879) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 848, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 848),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUseConfigValid",
          749);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 848),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v18, (const char (*)[43])byte_1ADBCAE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 848));
        v4 = 0;
        break;
      case ITEM_USE_MAKE_GADGET:
        if ( *(_BYTE *)(((unsigned __int64)&material_config->max_use_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)material_config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->max_use_count >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&material_config->max_use_count);
        }
        if ( material_config->max_use_count <= 1 )
        {
          if ( MaterialExcelConfigMgr::isMakeGadgetParamValid(this, txt_config_mgr, &use_config->use_param) )
            goto LABEL_386;
          if ( *(char *)(((v5 + 1040) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 1071) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 1071) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 1040, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 1040),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            769);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 1040),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v22, (const char (*)[40])byte_1ADBCC00);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1040));
          v4 = 0;
        }
        else
        {
          if ( *(char *)(((v5 + 976) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 1007) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 1007) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 976, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 976),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            764);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 976),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v21, (const char (*)[45])byte_1ADBCBA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 976));
          v4 = 0;
        }
        break;
      case ITEM_USE_ADD_ITEM:
        if ( MaterialExcelConfigMgr::isAddItemValid(this, txt_config_mgr, &use_config->use_param) )
          goto LABEL_386;
        if ( *(char *)(((v5 + 1104) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 1135) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 1135) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 1104, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 1104),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUseConfigValid",
          776);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 1104),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v23, (const char (*)[34])byte_1ADBCC60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1104));
        v4 = 0;
        break;
      case ITEM_USE_GRANT_SELECT_REWARD:
        if ( MaterialExcelConfigMgr::isGrantSelectRewardValid(this, txt_config_mgr, &use_config->use_param) )
          goto LABEL_386;
        if ( *(char *)(((v5 + 1168) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 1199) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 1199) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 1168, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 1168),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUseConfigValid",
          783);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 1168),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v24, (const char (*)[45])byte_1ADBCCC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1168));
        v4 = 0;
        break;
      case ITEM_USE_ADD_SELECT_ITEM:
        if ( MaterialExcelConfigMgr::isAddSelectItemValid(this, txt_config_mgr, &use_config->use_param) )
          goto LABEL_386;
        if ( *(char *)(((v5 + 1232) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 1263) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 1263) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 1232, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 1232),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUseConfigValid",
          790);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 1232),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v25, (const char (*)[41])byte_1ADBCD20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1232));
        v4 = 0;
        break;
      case ITEM_USE_GAIN_FLYCLOAK:
        if ( MaterialExcelConfigMgr::isFlycloakValid(this, txt_config_mgr, &use_config->use_param) )
          goto LABEL_386;
        if ( *(char *)(((v5 + 1296) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 1327) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 1327) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 1296, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 1296),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUseConfigValid",
          797);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 1296),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v26, (const char (*)[39])byte_1ADBCD80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1296));
        v4 = 0;
        break;
      case ITEM_USE_GAIN_CARD_PRODUCT:
        if ( *(_BYTE *)(((unsigned __int64)&material_config->max_use_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)material_config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->max_use_count >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&material_config->max_use_count);
        }
        if ( material_config->max_use_count <= 1 )
          goto LABEL_386;
        if ( *(char *)(((v5 + 1360) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 1391) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 1391) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 1360, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 1360),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUseConfigValid",
          804);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 1360),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v27, (const char (*)[55])byte_1ADBCDE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1360));
        v4 = 0;
        break;
      case ITEM_USE_UNLOCK_CODEX:
        if ( MaterialExcelConfigMgr::isUnlockCodexValid(this, txt_config_mgr, material_config, &use_config->use_param) )
          goto LABEL_386;
        if ( *(char *)(((v5 + 1424) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 1455) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 1455) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 1424, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 1424),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUseConfigValid",
          811);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 1424),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v28, (const char (*)[50])byte_1ADBCE40);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &material_config->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1424));
        v4 = 0;
        break;
      case ITEM_USE_CHEST_SELECT_ITEM:
        if ( MaterialExcelConfigMgr::isChestSelectItemValid(this, txt_config_mgr, &use_config->use_param) )
          goto LABEL_386;
        if ( *(char *)(((v5 + 1488) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 1519) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 1519) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 1488, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 1488),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUseConfigValid",
          818);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 1488),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v31 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v30, (const char (*)[55])byte_1ADBCEA0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &material_config->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1488));
        v4 = 0;
        break;
      case ITEM_USE_GAIN_RESIN_CARD_PRODUCT:
        if ( *(_BYTE *)(((unsigned __int64)&material_config->max_use_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)material_config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->max_use_count >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&material_config->max_use_count);
        }
        if ( material_config->max_use_count <= 1 )
        {
          if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v5 + 64, (((_BYTE)material_config + 92) & 7u) + 3);
          *(_DWORD *)(v5 + 64) = 0;
          if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(
                 &use_config->use_param,
                 (unsigned int *)(v5 + 64)) )
          {
            if ( *(char *)(((v5 + 1616) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 1647) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 1647) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 1616, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 1616),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              832);
            v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 1616),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v34, (const char (*)[55])byte_1ADBCF60);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1616));
            v4 = 0;
            v33 = 0;
          }
          else
          {
            Config = TxtConfigMgr::getConfig(txt_config_mgr);
            if ( HK4EDesignConfig::isAudit(Config) )
              goto LABEL_106;
            p_shopmall_config_mgr = &txt_config_mgr->shopmall_config_mgr;
            if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v5 + 64);
            config_ptr = data::ShopmallExcelConfigMgrBase::findProductCardDetailConfig(
                           p_shopmall_config_mgr,
                           *(unsigned int *)(v5 + 64));
            if ( !config_ptr )
              goto LABEL_393;
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->card_product_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config_ptr->card_product_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config_ptr->card_product_type);
            }
            if ( config_ptr->card_product_type == CARD_PRODUCT_TYPE_RESIN )
            {
LABEL_106:
              v33 = 1;
            }
            else
            {
LABEL_393:
              if ( *(char *)(((v5 + 1680) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 1711) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 1711) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 1680, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 1680),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/MaterialExcelConfig.cpp",
                "isUseConfigValid",
                841);
              v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v5 + 1680),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v38 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                      v37,
                      (const char (*)[77])byte_1ADBCFC0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v38,
                (const unsigned int *)(v5 + 64));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1680));
              v4 = 0;
              v33 = 0;
            }
          }
        }
        else
        {
          if ( *(char *)(((v5 + 1552) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 1583) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 1583) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 1552, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 1552),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            826);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 1552),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v32, (const char (*)[61])byte_1ADBCF00);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1552));
          v4 = 0;
          v33 = 0;
        }
        if ( v33 )
          goto LABEL_386;
        break;
      case ITEM_USE_UNLOCK_FURNITURE_FORMULA:
        if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 80, v8);
        *(_DWORD *)(v5 + 80) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(&use_config->use_param, (unsigned int *)(v5 + 80)) )
        {
          if ( *(char *)(((v5 + 1744) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 1775) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 1775) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 1744, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 1744),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            852);
          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 1744),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v39, (const char (*)[50])byte_1ADBD040);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1744));
          v4 = 0;
          v40 = 0;
        }
        else
        {
          p_home_config_mgr = &txt_config_mgr->home_config_mgr;
          v42 = *(unsigned __int8 *)(((v5 + 80) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v42 != 0 && (char)v42 <= 3 )
            __asan_report_load4(v5 + 80);
          furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                                   p_home_config_mgr,
                                   *(unsigned int *)(v5 + 80));
          if ( furniture_config_ptr )
          {
            v45 = &txt_config_mgr->home_config_mgr;
            if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v5 + 80);
            if ( !HomeWorldExcelConfigMgr::isFurnitureCanMake(v45, *(unsigned int *)(v5 + 80)) )
            {
              if ( *(char *)(((v5 + 1872) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 1903) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 1903) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 1872, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 1872),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/MaterialExcelConfig.cpp",
                "isUseConfigValid",
                863);
              v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v5 + 1872),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v47 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
                      v46,
                      (const char (*)[79])byte_1ADBD120);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v47,
                (const unsigned int *)(v5 + 80));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1872));
              v4 = 0;
              v40 = 0;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)furniture_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->rank_level >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&furniture_config_ptr->rank_level);
              }
              rank_level = furniture_config_ptr->rank_level;
              if ( *(_BYTE *)(((unsigned __int64)&material_config->rank_level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&material_config->rank_level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&material_config->rank_level);
              }
              if ( rank_level == material_config->rank_level )
              {
                v40 = 1;
              }
              else
              {
                if ( *(char *)(((v5 + 1936) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v5 + 1967) >> 3) + 0x7FFF8000) != 0
                  && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 1967) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v5 + 1936, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v5 + 1936),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/MaterialExcelConfig.cpp",
                  "isUseConfigValid",
                  868);
                v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v5 + 1936),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v50 = common::milog::MiLogStream::operator<<<char [88],(char *[88])0>(
                        v49,
                        (const char (*)[88])byte_1ADBD1A0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v50,
                  (const unsigned int *)(v5 + 80));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1936));
                v4 = 0;
                v40 = 0;
              }
            }
          }
          else
          {
            if ( *(char *)(((v5 + 1808) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 1839) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 1839) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 1808, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 1808),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              858);
            v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 1808),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v44 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                    v43,
                    (const char (*)[76])byte_1ADBD0A0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v5 + 80));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1808));
            v4 = 0;
            v40 = 0;
          }
        }
        if ( v40 )
          goto LABEL_386;
        break;
      case ITEM_USE_UNLOCK_FURNITURE_SUITE:
        if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 96, v8);
        *(_DWORD *)(v5 + 96) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(&use_config->use_param, (unsigned int *)(v5 + 96)) )
        {
          if ( *(char *)(((v5 + 2000) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 2031) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 2031) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 2000, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 2000),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            878);
          v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 2000),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v51, (const char (*)[48])byte_1ADBD220);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2000));
          v4 = 0;
          v52 = 0;
        }
        else
        {
          v53 = &txt_config_mgr->home_config_mgr;
          v54 = *(unsigned __int8 *)(((v5 + 96) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v54 != 0 && (char)v54 <= 3 )
            __asan_report_load4(v5 + 96);
          if ( data::HomeWorldExcelConfigMgrBase::findFurnitureSuiteExcelConfig(v53, *(unsigned int *)(v5 + 96)) )
          {
            v52 = 1;
          }
          else
          {
            if ( *(char *)(((v5 + 2064) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 2095) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 2095) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 2064, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 2064),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              883);
            v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 2064),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v56 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v55,
                    (const char (*)[39])"findFurnitureSuiteExcelConfig failed: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, (const unsigned int *)(v5 + 96));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2064));
            v4 = 0;
            v52 = 0;
          }
        }
        if ( v52 )
          goto LABEL_386;
        break;
      case ITEM_USE_GAIN_COSTUME:
        if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 128, v8);
        *(_DWORD *)(v5 + 128) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(
               &use_config->use_param,
               (unsigned int *)(v5 + 128)) )
        {
          if ( *(char *)(((v5 + 2192) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 2223) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 2223) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 2192, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 2192),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            904);
          v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 2192),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v60 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  v59,
                  (const char (*)[29])"strVecToNum fail, use_param:");
          common::milog::MiLogStream::operator<<<std::string>(v60, &use_config->use_param);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2192));
          v4 = 0;
          v61 = 0;
        }
        else
        {
          p_avatar_fashion_config_mgr = &txt_config_mgr->avatar_fashion_config_mgr;
          v63 = *(unsigned __int8 *)(((v5 + 128) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v63 != 0 && (char)v63 <= 3 )
            __asan_report_load4(v5 + 128);
          if ( data::AvatarFashionExcelConfigMgrBase::findAvatarCostumeExcelConfig(
                 p_avatar_fashion_config_mgr,
                 *(unsigned int *)(v5 + 128)) )
          {
            v61 = 1;
          }
          else
          {
            if ( *(char *)(((v5 + 2256) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 2287) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 2287) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 2256, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 2256),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              909);
            v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 2256),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v65 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    v64,
                    (const char (*)[62])byte_1ADBD380);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v65,
              (const unsigned int *)(v5 + 128));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2256));
            v4 = 0;
            v61 = 0;
          }
        }
        if ( v61 )
          goto LABEL_386;
        break;
      case ITEM_USE_UNLOCK_HOME_MODULE:
        if ( *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 144, v8);
        *(_DWORD *)(v5 + 144) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(
               &use_config->use_param,
               (unsigned int *)(v5 + 144)) )
        {
          if ( *(char *)(((v5 + 2320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 2351) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 2351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 2320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 2320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            919);
          v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 2320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v67 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  v66,
                  (const char (*)[29])"strVecToNum fail, use_param:");
          common::milog::MiLogStream::operator<<<std::string>(v67, &use_config->use_param);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2320));
          v4 = 0;
          v68 = 0;
        }
        else
        {
          v69 = &txt_config_mgr->home_config_mgr;
          v70 = *(unsigned __int8 *)(((v5 + 144) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v70 != 0 && (char)v70 <= 3 )
            __asan_report_load4(v5 + 144);
          module_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeworldModuleExcelConfig(
                                v69,
                                *(unsigned int *)(v5 + 144));
          if ( module_config_ptr )
          {
            v73 = ((_BYTE)module_config_ptr + 12) & 7;
            v74 = (*(_BYTE *)(((unsigned __int64)&module_config_ptr->is_free >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v73 >= *(_BYTE *)(((unsigned __int64)&module_config_ptr->is_free >> 3) + 0x7FFF8000));
            if ( (_BYTE)v74 )
              __asan_report_load1(&module_config_ptr->is_free, v73, v74);
            if ( module_config_ptr->is_free )
            {
              if ( *(char *)(((v5 + 2448) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 2479) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 2479) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 2448, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 2448),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/MaterialExcelConfig.cpp",
                "isUseConfigValid",
                930);
              v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v5 + 2448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v76 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                      v75,
                      (const char (*)[62])byte_1ADBD460);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v76,
                (const unsigned int *)(v5 + 144));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2448));
              v4 = 0;
              v68 = 0;
            }
            else
            {
              v68 = 1;
            }
          }
          else
          {
            if ( *(char *)(((v5 + 2384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 2415) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 2415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 2384, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 2384),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              925);
            v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 2384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v72 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                    v71,
                    (const char (*)[68])byte_1ADBD3E0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v72,
              (const unsigned int *)(v5 + 144));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2384));
            v4 = 0;
            v68 = 0;
          }
        }
        if ( v68 )
          goto LABEL_386;
        break;
      case ITEM_USE_UNLOCK_HOME_BGM:
        v77 = (char *)((((_BYTE)material_config + 76) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)material_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config->material_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&material_config->material_type);
        }
        if ( material_config->material_type == MATERIAL_BGM )
        {
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 528));
          v81 = 0;
          v172 = 0;
          v171 = 0;
          v170 = 0;
          if ( std::vector<std::string>::empty(&use_config->use_param) )
            goto LABEL_206;
          std::allocator<char>::allocator(v5 + 48);
          v81 = 1;
          v172 = 1;
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v5 + 2576),
            ";",
            (const std::allocator<char> *)(v5 + 48));
          v171 = 1;
          v170 = 1;
          v82 = std::vector<std::string>::operator[](&use_config->use_param, 0LL);
          v77 = (char *)(v5 + 2576);
          if ( common::tools::StringUtils::splitToList<unsigned int>(
                 v82,
                 (const std::string *)(v5 + 2576),
                 (std::vector<unsigned int> *)(v5 + 528),
                 0) )
          {
LABEL_206:
            v169 = 1;
          }
          else
          {
            v169 = 0;
          }
          if ( v170 )
            std::string::~string((void *)(v5 + 2576));
          if ( v171 )
            *(_DWORD *)(((v5 + 2576) >> 3) + 0x7FFF8000) = -117901064;
          if ( v172 )
            std::allocator<char>::~allocator(v5 + 48);
          if ( v81 )
            *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v169 )
          {
            *(_DWORD *)(((v5 + 2640) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 2640) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 2671) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 2671) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 2640, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 2640),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              945);
            v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 2640),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v84 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    v83,
                    (const char (*)[34])"parse bgm_id_vec fail, use_param:");
            common::milog::MiLogStream::operator<<<std::string>(v84, &use_config->use_param);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2640));
            *(_DWORD *)(((v5 + 2640) >> 3) + 0x7FFF8000) = -117901064;
            v4 = 0;
            v85 = 0;
          }
          else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v5 + 528)) )
          {
            *(_DWORD *)(((v5 + 2704) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 2704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 2735) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 2735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 2704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 2704),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              950);
            v86 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 2704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v87 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    v86,
                    (const char (*)[32])"bgm_id_vec is empty, use_param:");
            common::milog::MiLogStream::operator<<<std::string>(v87, &use_config->use_param);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2704));
            *(_DWORD *)(((v5 + 2704) >> 3) + 0x7FFF8000) = -117901064;
            v4 = 0;
            v85 = 0;
          }
          else
          {
            v88 = ((v5 + 3920) >> 3) + 2147450880;
            *(_DWORD *)v88 = 0;
            *(_WORD *)(v88 + 4) = 0;
            std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 3920));
            __for_range = (std::vector<unsigned int> *)(v5 + 528);
            *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v5 + 304, v77);
            *(std::vector<unsigned int>::iterator *)(v5 + 304) = std::vector<unsigned int>::begin(__for_range);
            *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v5 + 336, v77);
            *(std::vector<unsigned int>::iterator *)(v5 + 336) = std::vector<unsigned int>::end(__for_range);
            while ( 1 )
            {
              v89 = (char *)(v5 + 336);
              if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v5 + 304),
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v5 + 336)) )
                break;
              *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 4;
              v90 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v5 + 304));
              v91 = (int *)v90;
              if ( *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v90 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v90);
              }
              v92 = *v91;
              v93 = *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000);
              if ( v93 != 0 && v93 <= 3 )
              {
                LOBYTE(v89) = v93 != 0;
                __asan_report_store4(v5 + 160, v89);
              }
              *(_DWORD *)(v5 + 160) = v92;
              v94 = std::map<unsigned int,unsigned int>::operator[](
                      (std::map<unsigned int,unsigned int> *const)(v5 + 3920),
                      (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 160));
              if ( *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v94 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v94);
              }
              ++*v94;
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v5 + 304));
            }
            *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) = -8;
            __for_range_0 = (std::map<unsigned int,unsigned int> *)(v5 + 3920);
            *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v5 + 400, v89);
            *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 400) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
            *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v5 + 432, v89);
            *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 432) = std::map<unsigned int,unsigned int>::end(__for_range_0);
            while ( 1 )
            {
              p_use_param = (std::vector<std::string> *)(v5 + 432);
              if ( !std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 400),
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 432)) )
              {
                v102 = 1;
                goto LABEL_255;
              }
              *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) = 0;
              v96 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 400));
              if ( *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v5 + 368, p_use_param);
              if ( ((unsigned __int8)v96 & 7) >= *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&v96->second + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)v96 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v96->second + 3) >> 3)
                                                                + 0x7FFF8000) )
              {
                __asan_report_load_n(v96, 8LL);
              }
              *(std::pair<unsigned int const,unsigned int> *)(v5 + 368) = *v96;
              bgm_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v5 + 368));
              v97 = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v5 + 368));
              count = v97;
              if ( *(_BYTE *)(((unsigned __int64)v97 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v97 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v97 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v97);
              }
              if ( *count > 1 )
                break;
              std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 400));
            }
            *(_DWORD *)(((v5 + 2768) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 2768) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 2799) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 2799) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 2768, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 2768),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              962);
            v98 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 2768),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v99 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v98,
                    (const char (*)[33])"bgm_id_vec has duplicate bgm_id:");
            v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v99, bgm_id);
            v101 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                     v100,
                     (const char (*)[12])" use_param:");
            p_use_param = &use_config->use_param;
            common::milog::MiLogStream::operator<<<std::string>(v101, &use_config->use_param);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2768));
            *(_DWORD *)(((v5 + 2768) >> 3) + 0x7FFF8000) = -117901064;
            v4 = 0;
            v102 = 0;
LABEL_255:
            *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) = -8;
            if ( v102 == 1 )
            {
              __for_range_1 = (std::vector<unsigned int> *)(v5 + 528);
              *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v5 + 464, p_use_param);
              *(std::vector<unsigned int>::iterator *)(v5 + 464) = std::vector<unsigned int>::begin(__for_range_1);
              *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v5 + 496, p_use_param);
              *(std::vector<unsigned int>::iterator *)(v5 + 496) = std::vector<unsigned int>::end(__for_range_1);
              while ( 1 )
              {
                v104 = (char *)(v5 + 496);
                if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v5 + 464),
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v5 + 496)) )
                {
                  v111 = 1;
                  goto LABEL_279;
                }
                *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = 4;
                v105 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v5 + 464));
                v106 = (int *)v105;
                if ( *(_BYTE *)(((unsigned __int64)v105 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v105 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v105 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v105);
                }
                v107 = *v106;
                v108 = *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000);
                if ( v108 != 0 && v108 <= 3 )
                {
                  LOBYTE(v104) = v108 != 0;
                  __asan_report_store4(v5 + 176, v104);
                }
                *(_DWORD *)(v5 + 176) = v107;
                bgm_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldBgmExcelConfig(
                                   &txt_config_mgr->home_config_mgr,
                                   *(unsigned int *)(v5 + 176));
                if ( !bgm_config_ptr )
                {
                  *(_DWORD *)(((v5 + 2832) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v5 + 2832) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v5 + 2863) >> 3) + 0x7FFF8000) != 0
                    && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 2863) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v5 + 2832, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v5 + 2832),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/MaterialExcelConfig.cpp",
                    "isUseConfigValid",
                    971);
                  v109 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v5 + 2832),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v110 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                           v109,
                           (const char (*)[32])"findHomeBgmConfig fail, bgm_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v110,
                    (const unsigned int *)(v5 + 176));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2832));
                  *(_DWORD *)(((v5 + 2832) >> 3) + 0x7FFF8000) = -117901064;
                  v4 = 0;
                  v111 = 0;
                  goto LABEL_279;
                }
                v112 = ((_BYTE)bgm_config_ptr + 12) & 7;
                v113 = (*(_BYTE *)(((unsigned __int64)&bgm_config_ptr->is_default_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v112 >= *(_BYTE *)(((unsigned __int64)&bgm_config_ptr->is_default_unlock >> 3) + 0x7FFF8000));
                if ( (_BYTE)v113 )
                  __asan_report_load1(&bgm_config_ptr->is_default_unlock, v112, v113);
                if ( bgm_config_ptr->is_default_unlock )
                  break;
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v5 + 464));
              }
              *(_DWORD *)(((v5 + 2896) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v5 + 2896) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 2927) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 2927) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 2896, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 2896),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/MaterialExcelConfig.cpp",
                "isUseConfigValid",
                976);
              v114 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v5 + 2896),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v115 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v114, (const char (*)[8])"bgm_id:");
              v116 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v115,
                       (const unsigned int *)(v5 + 176));
              common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                v116,
                (const char (*)[43])" is default unlocked, no need to unlock it");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2896));
              *(_DWORD *)(((v5 + 2896) >> 3) + 0x7FFF8000) = -117901064;
              v4 = 0;
              v111 = 0;
LABEL_279:
              *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) = -8;
              v103 = v111 == 1;
            }
            else
            {
              v103 = 0;
            }
            std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 3920));
            v85 = v103;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 528));
          v80 = v85;
        }
        else
        {
          if ( *(char *)(((v5 + 2512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 2543) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 2543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 2512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 2512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            939);
          v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 2512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v79 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(v78, (const char (*)[89])byte_1ADBD4C0);
          common::milog::MiLogStream::operator<<<data::MaterialType,(data::MaterialType*)0>(
            v79,
            &material_config->material_type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2512));
          v4 = 0;
          v80 = 0;
        }
        if ( v80 )
          goto LABEL_386;
        break;
      case ITEM_USE_ADD_REGIONAL_PLAY_VAR:
        if ( std::vector<std::string>::size(&use_config->use_param) > 1 )
        {
          if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v5 + 192, v8);
          *(_DWORD *)(v5 + 192) = 2500;
          v120 = std::vector<std::string>::operator[](&use_config->use_param, 0LL);
          if ( !data::enumStrToVal(v120, (data::RegionalPlayVarType *)(v5 + 192)) )
          {
            if ( *(char *)(((v5 + 3024) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 3055) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 3055) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 3024, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 3024),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              992);
            v121 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v5 + 3024),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v122 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                     v121,
                     (const char (*)[32])"invalid regional_play_var_type:");
            v123 = std::vector<std::string>::operator[](&use_config->use_param, 0LL);
            v124 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v122, v123);
            v125 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                     v124,
                     (const char (*)[12])" use_param:");
            common::milog::MiLogStream::operator<<<std::string>(v125, &use_config->use_param);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3024));
            v4 = 0;
            v119 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v5 + 208, v5 + 192);
            *(_DWORD *)(v5 + 208) = 0;
            if ( common::tools::StringUtils::strVecToNum<1u,float>(&use_config->use_param, (float *)(v5 + 208)) )
            {
              if ( *(char *)(((v5 + 3088) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 3119) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 3119) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 3088, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 3088),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/MaterialExcelConfig.cpp",
                "isUseConfigValid",
                998);
              v126 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v5 + 3088),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v127 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                       v126,
                       (const char (*)[29])"strVecToNum fail, use_param:");
              common::milog::MiLogStream::operator<<<std::string>(v127, &use_config->use_param);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3088));
              v4 = 0;
              v119 = 0;
            }
            else
            {
              v128 = *(unsigned __int8 *)(((v5 + 208) >> 3) + 0x7FFF8000);
              if ( (_BYTE)v128 != 0 && (char)v128 <= 3 )
                __asan_report_load4(v5 + 208);
              if ( *(float *)(v5 + 208) == 0.0 )
              {
                if ( *(char *)(((v5 + 3152) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v5 + 3183) >> 3) + 0x7FFF8000) != 0
                  && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 3183) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v5 + 3152, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v5 + 3152),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/MaterialExcelConfig.cpp",
                  "isUseConfigValid",
                  1003);
                v129 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v5 + 3152),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v130 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                         v129,
                         (const char (*)[29])"delta_value is 0! use_param:");
                common::milog::MiLogStream::operator<<<std::string>(v130, &use_config->use_param);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3152));
                v4 = 0;
                v119 = 0;
              }
              else
              {
                v119 = 1;
              }
            }
          }
        }
        else
        {
          if ( *(char *)(((v5 + 2960) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 2991) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 2991) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 2960, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 2960),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            986);
          v117 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 2960),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v118 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                   v117,
                   (const char (*)[44])"use_param's size is less than 2! use_param:");
          common::milog::MiLogStream::operator<<<std::string>(v118, &use_config->use_param);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2960));
          v4 = 0;
          v119 = 0;
        }
        if ( v119 )
          goto LABEL_386;
        break;
      case ITEM_USE_GAIN_GCG_CARD:
        if ( *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 224, v8);
        *(_DWORD *)(v5 + 224) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(
               &use_config->use_param,
               (unsigned int *)(v5 + 224)) )
        {
          if ( *(char *)(((v5 + 3216) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 3247) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 3247) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 3216, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 3216),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            1013);
          v131 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 3216),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v132 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   v131,
                   (const char (*)[29])"strVecToNum fail, use_param:");
          common::milog::MiLogStream::operator<<<std::string>(v132, &use_config->use_param);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3216));
          v4 = 0;
          v133 = 0;
        }
        else
        {
          p_gcg_deck_config_mgr = &txt_config_mgr->gcg_deck_config_mgr;
          v135 = *(unsigned __int8 *)(((v5 + 224) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v135 != 0 && (char)v135 <= 3 )
            __asan_report_load4(v5 + 224);
          if ( data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(
                 p_gcg_deck_config_mgr,
                 *(unsigned int *)(v5 + 224)) )
          {
            v133 = 1;
          }
          else
          {
            if ( *(char *)(((v5 + 3280) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 3311) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 3311) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 3280, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 3280),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              1018);
            v136 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v5 + 3280),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v137 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                     v136,
                     (const char (*)[55])byte_1ADBD840);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v137,
              (const unsigned int *)(v5 + 224));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3280));
            v4 = 0;
            v133 = 0;
          }
        }
        if ( v133 )
          goto LABEL_386;
        break;
      case ITEM_USE_GAIN_GCG_CARD_FACE:
        if ( *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 240, v8);
        *(_DWORD *)(v5 + 240) = 0;
        if ( *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 256, v8);
        *(_DWORD *)(v5 + 256) = 0;
        if ( std::vector<std::string>::size(&use_config->use_param) > 1 )
        {
          v141 = std::vector<std::string>::operator[](&use_config->use_param, 0LL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v141, (unsigned int *)(v5 + 240), 1) )
          {
            if ( *(char *)(((v5 + 3408) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 3439) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 3439) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 3408, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 3408),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              1034);
            v142 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v5 + 3408),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v143 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                     v142,
                     (const char (*)[29])"strVecToNum fail, use_param:");
            common::milog::MiLogStream::operator<<<std::string>(v143, &use_config->use_param);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3408));
            v4 = 0;
            v140 = 0;
          }
          else
          {
            v144 = std::vector<std::string>::operator[](&use_config->use_param, 1uLL);
            if ( common::tools::StringUtils::strToEnum<data::GCGCardFaceType>(v144, (data::GCGCardFaceType *)(v5 + 256)) )
            {
              if ( *(char *)(((v5 + 3472) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 3503) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 3503) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 3472, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 3472),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/MaterialExcelConfig.cpp",
                "isUseConfigValid",
                1039);
              v145 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v5 + 3472),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v146 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                       v145,
                       (const char (*)[27])"strToEnum fail, use_param:");
              common::milog::MiLogStream::operator<<<std::string>(v146, &use_config->use_param);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3472));
              v4 = 0;
              v140 = 0;
            }
            else
            {
              v147 = *(unsigned __int8 *)(((v5 + 256) >> 3) + 0x7FFF8000);
              if ( (_BYTE)v147 != 0 && (char)v147 <= 3 )
                __asan_report_load4(v5 + 256);
              if ( *(_DWORD *)(v5 + 256) )
              {
                v150 = &txt_config_mgr->gcg_deck_config_mgr;
                if ( *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) <= 3 )
                {
                  v150 = (GCGDeckExcelConfigMgr *)(v5 + 256);
                  __asan_report_load4(v5 + 256);
                }
                v151 = *(_DWORD *)(v5 + 256);
                if ( *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) <= 3 )
                {
                  v150 = (GCGDeckExcelConfigMgr *)(v5 + 240);
                  __asan_report_load4(v5 + 240);
                }
                if ( !GCGDeckExcelConfigMgr::isCardFaceTypeValid(v150, *(_DWORD *)(v5 + 240), v151) )
                {
                  if ( *(char *)(((v5 + 3600) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v5 + 3631) >> 3) + 0x7FFF8000) != 0
                    && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 3631) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v5 + 3600, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v5 + 3600),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/MaterialExcelConfig.cpp",
                    "isUseConfigValid",
                    1049);
                  v152 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v5 + 3600),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v153 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                           v152,
                           (const char (*)[77])byte_1ADBD940);
                  common::milog::MiLogStream::operator<<<std::string>(v153, &use_config->use_param);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3600));
                  v4 = 0;
                  v140 = 0;
                }
                else
                {
                  v140 = 1;
                }
              }
              else
              {
                if ( *(char *)(((v5 + 3536) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v5 + 3567) >> 3) + 0x7FFF8000) != 0
                  && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 3567) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v5 + 3536, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v5 + 3536),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/MaterialExcelConfig.cpp",
                  "isUseConfigValid",
                  1044);
                v148 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v5 + 3536),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v149 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                         v148,
                         (const char (*)[37])byte_1ADBD8E0);
                common::milog::MiLogStream::operator<<<std::string>(v149, &use_config->use_param);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3536));
                v4 = 0;
                v140 = 0;
              }
            }
          }
        }
        else
        {
          if ( *(char *)(((v5 + 3344) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 3375) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 3375) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 3344, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 3344),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            1029);
          v138 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 3344),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v139 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                   v138,
                   (const char (*)[44])"use_param's size is less than 2! use_param:");
          common::milog::MiLogStream::operator<<<std::string>(v139, &use_config->use_param);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3344));
          v4 = 0;
          v140 = 0;
        }
        if ( v140 )
          goto LABEL_386;
        break;
      case ITEM_USE_GAIN_GCG_CARD_BACK:
        if ( *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 272, v8);
        *(_DWORD *)(v5 + 272) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(
               &use_config->use_param,
               (unsigned int *)(v5 + 272)) )
        {
          if ( *(char *)(((v5 + 3664) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 3695) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 3695) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 3664, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 3664),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            1059);
          v154 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 3664),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v155 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   v154,
                   (const char (*)[29])"strVecToNum fail, use_param:");
          common::milog::MiLogStream::operator<<<std::string>(v155, &use_config->use_param);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3664));
          v4 = 0;
          v156 = 0;
        }
        else
        {
          v157 = &txt_config_mgr->gcg_deck_config_mgr;
          v158 = *(unsigned __int8 *)(((v5 + 272) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v158 != 0 && (char)v158 <= 3 )
            __asan_report_load4(v5 + 272);
          if ( data::GCGDeckExcelConfigMgrBase::findGCGDeckBackExcelConfig(v157, *(unsigned int *)(v5 + 272)) )
          {
            v156 = 1;
          }
          else
          {
            if ( *(char *)(((v5 + 3728) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 3759) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 3759) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 3728, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 3728),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              1065);
            v159 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v5 + 3728),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v160 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                     v159,
                     (const char (*)[74])byte_1ADBD9C0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v160,
              (const unsigned int *)(v5 + 272));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3728));
            v4 = 0;
            v156 = 0;
          }
        }
        if ( v156 )
          goto LABEL_386;
        break;
      case ITEM_USE_GAIN_GCG_CARD_FIELD:
        if ( *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 288, v8);
        *(_DWORD *)(v5 + 288) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(
               &use_config->use_param,
               (unsigned int *)(v5 + 288)) )
        {
          if ( *(char *)(((v5 + 3792) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 3823) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 3823) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 3792, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 3792),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUseConfigValid",
            1075);
          v161 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 3792),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v162 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   v161,
                   (const char (*)[29])"strVecToNum fail, use_param:");
          common::milog::MiLogStream::operator<<<std::string>(v162, &use_config->use_param);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3792));
          v4 = 0;
          v163 = 0;
        }
        else
        {
          v164 = &txt_config_mgr->gcg_deck_config_mgr;
          v165 = *(unsigned __int8 *)(((v5 + 288) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v165 != 0 && (char)v165 <= 3 )
            __asan_report_load4(v5 + 288);
          if ( data::GCGDeckExcelConfigMgrBase::findGCGDeckFieldExcelConfig(v164, *(unsigned int *)(v5 + 288)) )
          {
            v163 = 1;
          }
          else
          {
            if ( *(char *)(((v5 + 3856) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 3887) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 3887) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 3856, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 3856),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUseConfigValid",
              1081);
            v166 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v5 + 3856),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v167 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                     v166,
                     (const char (*)[71])byte_1ADBDA40);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v167,
              (const unsigned int *)(v5 + 288));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3856));
            v4 = 0;
            v163 = 0;
          }
        }
        if ( v163 )
          goto LABEL_386;
        break;
      default:
LABEL_386:
        v4 = 1;
        break;
    }
  }
  else
  {
    if ( *(char *)(((v5 + 656) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 687) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 687) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 656, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 656),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isUseConfigValid",
      725);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 656),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v13, (const char (*)[31])byte_1ADBC9E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &material_config->id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 656));
    v4 = 0;
  }
LABEL_387:
  if ( v185 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF81E4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - (((_DWORD)v7 + 2147450888) & 0xFFFFFFF8) + 492) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v5 >> 3) + 0x7FFF81F0) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_6(v5, 4000LL, v185);
  }
  return v4;
};

// Line 1093: range 00000000145F95CA-00000000145F98EB
bool __cdecl MaterialExcelConfigMgr::isAddDungeonCondTimeValid(
        const MaterialExcelConfigMgr *const this,
        const std::vector<std::string> *use_param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  bool result; // al
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MaterialExcelConfigMgr::isAddDungeonCondTimeValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( std::vector<std::string>::size(use_param) > 1 )
  {
    v7 = std::vector<std::string>::operator[](use_param, 1uLL);
    if ( std::operator==<char>(v7, "0") )
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
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isAddDungeonCondTimeValid",
        1101);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v8, (const char (*)[51])byte_1ADBDC80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      result = 0;
    }
    else
    {
      result = 1;
    }
  }
  else
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
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isAddDungeonCondTimeValid",
      1096);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v5, (const char (*)[56])byte_1ADBDBE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  if ( v9 == (char *)v2 )
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

// Line 1108: range 00000000145F98EC-00000000145F9CBE
bool __cdecl MaterialExcelConfigMgr::isUnlockCookRecipeValid(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<std::string> *use_param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  bool result; // al
  CookExcelConfigMgr *p_cook_config_mgr; // rcx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 recipe_id:1109 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::isUnlockCookRecipeValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, txt_config_mgr);
  *(_DWORD *)(v3 + 48) = 0;
  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(use_param, (unsigned int *)(v3 + 48)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isUnlockCookRecipeValid",
      1112);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])"strVecToNum fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = 0;
  }
  else
  {
    p_cook_config_mgr = &txt_config_mgr->cook_config_mgr;
    v9 = *(unsigned __int8 *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
      __asan_report_load4(v3 + 48);
    if ( data::CookExcelConfigMgrBase::findCookRecipeExcelConfig(p_cook_config_mgr, *(unsigned int *)(v3 + 48)) )
    {
      result = 1;
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
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isUnlockCookRecipeValid",
        1117);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              v10,
              (const char (*)[35])"findCookRecipeExcelConfig failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      result = 0;
    }
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
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

// Line 1125: range 00000000145F9CC0-00000000145FA08C
bool __cdecl MaterialExcelConfigMgr::isOpenRandomChestValid(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<std::string> *use_param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  bool result; // al
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  char v12[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 drop_id:1126 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::isOpenRandomChestValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, txt_config_mgr);
  *(_DWORD *)(v3 + 48) = 0;
  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(use_param, (unsigned int *)(v3 + 48)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isOpenRandomChestValid",
      1129);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])"strVecToNum fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = 0;
  }
  else
  {
    v8 = *(unsigned __int8 *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 != 0 && (char)v8 <= 3 )
      __asan_report_load4(v3 + 48);
    if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                            txt_config_mgr,
                            *(_DWORD *)(v3 + 48),
                            ITEM_LIMIT_RANDOM_CHEST) != 1 )
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
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isOpenRandomChestValid",
        1134);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v9, (const char (*)[51])byte_1ADBDE80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      result = 0;
    }
    else
    {
      result = 1;
    }
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
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

// Line 1141: range 00000000145FA08E-00000000145FA5EC
bool __cdecl MaterialExcelConfigMgr::isAvatarTalentValid(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<std::string> *use_param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  bool result; // al
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char v14[288]; // [rsp+20h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 14 avatar_id:1142 48 4 14 point_num:1143 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::isAvatarTalentValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32, txt_config_mgr);
  *(_DWORD *)(v3 + 32) = 0;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, txt_config_mgr);
  *(_DWORD *)(v3 + 48) = 0;
  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &>(
         use_param,
         (unsigned int *)(v3 + 32),
         (unsigned int *)(v3 + 48),
         (unsigned int *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isAvatarTalentValid",
      1146);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])"strVecToNum fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = 0;
  }
  else
  {
    p_avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
    v9 = *(unsigned __int8 *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
      __asan_report_load4(v3 + 32);
    if ( data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, *(unsigned int *)(v3 + 32)) )
    {
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( *(_DWORD *)(v3 + 48) )
      {
        result = 1;
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
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isAvatarTalentValid",
          1156);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])"point_num is 0");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        result = 0;
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
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isAvatarTalentValid",
        1151);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              v10,
              (const char (*)[31])"findAvatarExcelConfig failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      result = 0;
    }
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 1163: range 00000000145FA5EE-00000000145FA9CF
bool __cdecl MaterialExcelConfigMgr::isMakeGadgetParamValid(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<std::string> *use_param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  bool result; // al
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char v14[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 gadget_id:1164 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::isMakeGadgetParamValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, txt_config_mgr);
  *(_DWORD *)(v3 + 48) = 0;
  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(use_param, (unsigned int *)(v3 + 48)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isMakeGadgetParamValid",
      1167);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])"strVecToNum fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = 0;
  }
  else
  {
    p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
    v9 = *(unsigned __int8 *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
      __asan_report_load4(v3 + 48);
    if ( data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, *(unsigned int *)(v3 + 48)) )
    {
      result = 1;
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
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isMakeGadgetParamValid",
        1172);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])"gadget_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      result = 0;
    }
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
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

// Line 1179: range 00000000145FA9D0-00000000145FB2FC
bool __cdecl MaterialExcelConfigMgr::isAddItemValid(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<std::string> *use_param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  bool result; // al
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v11; // rdx
  bool v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::pointer v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  char v22[480]; // [rsp+30h] [rbp-1E0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 12 item_id:1180 48 4 15 item_count:1181 64 8 9 iter:1192 96 8 9 <unknown> 128 32 9 <unkno"
                        "wn> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::isAddItemValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32, txt_config_mgr);
  *(_DWORD *)(v3 + 32) = 0;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, txt_config_mgr);
  *(_DWORD *)(v3 + 48) = 0;
  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &>(
         use_param,
         (unsigned int *)(v3 + 32),
         (unsigned int *)(v3 + 48),
         (unsigned int *)(v3 + 32)) )
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
      4u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isAddItemValid",
      1184);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])"strVecToNum fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0;
  }
  else
  {
    v8 = *(unsigned __int8 *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 != 0 && (char)v8 <= 3 )
      __asan_report_load4(v3 + 48);
    if ( *(_DWORD *)(v3 + 48) )
    {
      p_material_excel_config_map = &this->material_excel_config_map;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 64, v3 + 32);
      *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                                   p_material_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v3 + 32));
      v11 = &this->material_excel_config_map;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v3 + 32);
      *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v11);
      v12 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v3 + 96));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v12 )
      {
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isAddItemValid",
          1195);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                v13,
                (const char (*)[39])"findMaterialExcelConfig fail, item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        result = 0;
      }
      else
      {
        v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v3 + 64));
        if ( !std::vector<data::ItemUseConfig>::empty(&v15->second.item_use) )
        {
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
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isAddItemValid",
            1201);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v16, (const char (*)[43])byte_1ADBE280);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          result = 0;
        }
        else
        {
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, *(_DWORD *)(v3 + 32), ITEM_LIMIT_USE_ITEM) )
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
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isAddItemValid",
              1206);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v18,
                    (const char (*)[12])byte_1AD741E0);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v20, (const char (*)[46])byte_1ADBE2E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
            result = 0;
          }
          else
          {
            result = 1;
          }
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
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isAddItemValid",
        1189);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v9, (const char (*)[23])byte_1ADBE1E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      result = 0;
    }
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 1213: range 00000000145FB2FE-00000000145FBD1B
bool __cdecl MaterialExcelConfigMgr::isGrantSelectRewardValid(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<std::string> *use_param)
{
  bool v3; // r15
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  const std::string *v8; // rax
  char *v9; // rsi
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // edx
  bool result; // al
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-238h]
  char v25[560]; // [rsp+30h] [rbp-230h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 1 9 <unknown> 48 4 14 reward_id:1230 64 8 16 __for_begin:1230 96 8 14 __for_end:1230 128 2"
                        "4 18 reward_id_vec:1219 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unkno"
                        "wn> 448 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = MaterialExcelConfigMgr::isGrantSelectRewardValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -202116109;
  if ( std::vector<std::string>::empty(use_param) )
  {
    if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isGrantSelectRewardValid",
      1216);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v7, (const char (*)[31])byte_1ADBE460);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v3 = 0;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 128));
    std::allocator<char>::allocator(v4 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v4 + 256),
      ",",
      (const std::allocator<char> *)(v4 + 32));
    v8 = std::vector<std::string>::operator[](use_param, 0LL);
    v9 = (char *)(v4 + 256);
    v10 = common::tools::StringUtils::splitToList<unsigned int>(
            v8,
            (const std::string *)(v4 + 256),
            (std::vector<unsigned int> *)(v4 + 128),
            1) != 0;
    std::string::~string((void *)(v4 + 256));
    *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v4 + 32);
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isGrantSelectRewardValid",
        1222);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1ADBE4A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
      *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 0;
    }
    else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 128)) )
    {
      *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isGrantSelectRewardValid",
        1227);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v12, (const char (*)[28])byte_1ADBE500);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
      *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 0;
    }
    else
    {
      __for_range = (std::vector<unsigned int> *)(v4 + 128);
      *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 64, v9);
      *(std::vector<unsigned int>::iterator *)(v4 + 64) = std::vector<unsigned int>::begin(__for_range);
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 96, v9);
      *(std::vector<unsigned int>::iterator *)(v4 + 96) = std::vector<unsigned int>::end(__for_range);
      while ( 1 )
      {
        v13 = (char *)(v4 + 96);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 64),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 96)) )
        {
          v20 = 1;
          goto LABEL_32;
        }
        *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
        v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 64));
        v15 = (int *)v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        v16 = *v15;
        v17 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
        if ( v17 != 0 && v17 <= 3 )
        {
          LOBYTE(v13) = v17 != 0;
          __asan_report_store4(v4 + 48, v13);
        }
        *(_DWORD *)(v4 + 48) = v16;
        if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                txt_config_mgr,
                                *(_DWORD *)(v4 + 48),
                                ITEM_LIMIT_USE_ITEM_REWARD) != 1 )
          break;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 64));
      }
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isGrantSelectRewardValid",
        1234);
      v18 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)(v4 + 448),
              (const char (*)[34])byte_1ADBE540);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v19, (const char (*)[55])byte_1ADBE5A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 0;
      v20 = 0;
LABEL_32:
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v20 == 1 )
        v3 = 1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 128));
  }
  result = v3;
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1242: range 00000000145FBD1C-00000000145FC8C1
bool __cdecl MaterialExcelConfigMgr::isAddSelectItemValid(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<std::string> *use_param)
{
  bool v3; // r15
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  const std::string *v8; // rax
  char *v9; // rsi
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v13; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  bool result; // al
  std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-280h]
  const unsigned int *item_id; // [rsp+28h] [rbp-278h]
  char v26[624]; // [rsp+30h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 1 9 <unknown> 64 8 16 __for_begin:1259 96 8 14 __for_end:1259 128 24 16 item_id_vec:1248 1"
                        "92 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 51"
                        "2 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = MaterialExcelConfigMgr::isAddSelectItemValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
  if ( std::vector<std::string>::empty(use_param) )
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
      4u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isAddSelectItemValid",
      1245);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v7, (const char (*)[31])byte_1ADBE720);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v3 = 0;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 128));
    std::allocator<char>::allocator(v4 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v4 + 256),
      ",",
      (const std::allocator<char> *)(v4 + 48));
    v8 = std::vector<std::string>::operator[](use_param, 0LL);
    v9 = (char *)(v4 + 256);
    v10 = common::tools::StringUtils::splitToList<unsigned int>(
            v8,
            (const std::string *)(v4 + 256),
            (std::vector<unsigned int> *)(v4 + 128),
            1) != 0;
    std::string::~string((void *)(v4 + 256));
    *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v4 + 48);
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isAddSelectItemValid",
        1251);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1ADBE760);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
      *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 0;
    }
    else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 128)) )
    {
      *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isAddSelectItemValid",
        1256);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v12, (const char (*)[27])byte_1ADBE7C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
      *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 0;
    }
    else
    {
      __for_range = (std::vector<unsigned int> *)(v4 + 128);
      *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 64, v9);
      *(std::vector<unsigned int>::iterator *)(v4 + 64) = std::vector<unsigned int>::begin(__for_range);
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 96, v9);
      *(std::vector<unsigned int>::iterator *)(v4 + 96) = std::vector<unsigned int>::end(__for_range);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 64),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 96)) )
        {
          v17 = 1;
          goto LABEL_36;
        }
        v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 64));
        item_id = v13;
        p_item_config_mgr = &txt_config_mgr->item_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *item_id) )
        {
          *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isAddSelectItemValid",
            1263);
          v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                  (common::milog::MiLogStream *const)(v4 + 448),
                  (const char (*)[9])"item id:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, item_id);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])byte_1ADBE840);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
          *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v3 = 0;
          v17 = 0;
          goto LABEL_36;
        }
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, *item_id, ITEM_LIMIT_USE_ITEM) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 64));
      }
      *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isAddSelectItemValid",
        1268);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])byte_1AD741E0);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, item_id);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v20, (const char (*)[46])byte_1ADBE2E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
      *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 0;
      v17 = 0;
LABEL_36:
      *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v17 == 1 )
        v3 = 1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 128));
  }
  result = v3;
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8044) = 0;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1276: range 00000000145FC8C2-00000000145FCE4E
bool __cdecl MaterialExcelConfigMgr::isFlycloakValid(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<std::string> *use_param)
{
  bool v3; // r15
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // eax
  AvatarFashionExcelConfigMgr *p_avatar_fashion_config_mgr; // rcx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  bool result; // al
  const std::string *param_str; // [rsp+30h] [rbp-140h]
  char v17[304]; // [rsp+40h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 16 flycloak_id:1283 64 8 16 __for_begin:1277 96 8 14 __for_end:1277 128 32 9 <unknown> 19"
                        "2 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = MaterialExcelConfigMgr::isFlycloakValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862725] = -218959118;
  v6[536862727] = -202116109;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, txt_config_mgr);
  *(std::vector<std::string>::const_iterator *)(v4 + 64) = std::vector<std::string>::begin(use_param);
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, txt_config_mgr);
  *(std::vector<std::string>::const_iterator *)(v4 + 96) = std::vector<std::string>::end(use_param);
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v4 + 64),
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v4 + 96)) )
  {
    param_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v4 + 64));
    if ( (unsigned __int8)std::string::empty() )
    {
      v7 = 0;
    }
    else
    {
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 48, v4 + 96);
      *(_DWORD *)(v4 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(param_str, (unsigned int *)(v4 + 48), 1) )
      {
        *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 128, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isFlycloakValid",
          1286);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
          (common::milog::MiLogStream *const)(v4 + 128),
          (const char (*)[19])byte_1ADBE940);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
        *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -117901064;
        v3 = 0;
        v7 = 1;
      }
      else
      {
        p_avatar_fashion_config_mgr = &txt_config_mgr->avatar_fashion_config_mgr;
        v9 = *(unsigned __int8 *)(((v4 + 48) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
          __asan_report_load4(v4 + 48);
        if ( data::AvatarFashionExcelConfigMgrBase::findAvatarFlycloakExcelConfig(
               p_avatar_fashion_config_mgr,
               *(unsigned int *)(v4 + 48)) )
        {
          v7 = 2;
        }
        else
        {
          *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 192, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 192),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isFlycloakValid",
            1293);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 192),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])byte_1ADBE980);
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])byte_1ADBE9C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
          *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -117901064;
          v3 = 0;
          v7 = 1;
        }
      }
    }
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v7 && v7 != 2 )
    {
      v13 = 0;
      goto LABEL_30;
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v4 + 64));
  }
  v13 = 1;
LABEL_30:
  if ( v13 == 1 )
    v3 = 1;
  result = v3;
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1301: range 00000000145FCE50-00000000145FD7B1
bool __cdecl MaterialExcelConfigMgr::isUnlockCodexValid(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::MaterialExcelConfig *material_config,
        const std::vector<std::string> *use_param)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  bool result; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  CodexExcelConfigMgr *p_codex_config_mgr; // rcx
  int v17; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 v23; // rsi
  uint32_t material_id; // ecx
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  const data::BooksCodexExcelConfig *books_codex_config_ptr; // [rsp+28h] [rbp-1A8h]
  char v39[416]; // [rsp+30h] [rbp-1A0h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 13 codex_id:1307 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknow"
                        "n> 320 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = MaterialExcelConfigMgr::isUnlockCodexValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862723] = -218959118;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -202116109;
  if ( std::vector<data::ItemUseConfig>::size(&material_config->item_use) == 1 )
  {
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 48, txt_config_mgr);
    *(_DWORD *)(v4 + 48) = 0;
    if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(use_param, (unsigned int *)(v4 + 48)) )
    {
      if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isUnlockCodexValid",
        1310);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])byte_1AD741E0);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &material_config->id);
      v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1ADBEB20);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])byte_1ADBEB80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
      result = 0;
    }
    else
    {
      p_codex_config_mgr = &txt_config_mgr->codex_config_mgr;
      v17 = *(unsigned __int8 *)(((v4 + 48) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v17 != 0 && (char)v17 <= 3 )
        __asan_report_load4(v4 + 48);
      books_codex_config_ptr = data::CodexExcelConfigMgrBase::findBooksCodexExcelConfig(
                                 p_codex_config_mgr,
                                 *(unsigned int *)(v4 + 48));
      if ( books_codex_config_ptr )
      {
        v23 = (((_BYTE)books_codex_config_ptr + 12) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&books_codex_config_ptr->material_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)books_codex_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&books_codex_config_ptr->material_id >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&books_codex_config_ptr->material_id);
        }
        material_id = books_codex_config_ptr->material_id;
        v25 = *(_BYTE *)(((unsigned __int64)&material_config->id >> 3) + 0x7FFF8000);
        LOBYTE(v23) = v25 != 0;
        if ( v25 != 0 && v25 <= 3 )
          __asan_report_load4(&material_config->id);
        if ( material_id == material_config->id )
        {
          if ( *(char *)(((unsigned __int64)&material_config->use_on_gain >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&material_config->use_on_gain, v23, &material_config->use_on_gain);
          if ( !material_config->use_on_gain )
          {
            if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 320, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 320),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "isUnlockCodexValid",
              1326);
            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v4 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v33,
                    (const char (*)[12])byte_1AD741E0);
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &material_config->id);
            common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v35, (const char (*)[55])byte_1ADBEC80);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
            result = 0;
          }
          else
          {
            result = 1;
          }
        }
        else
        {
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
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isUnlockCodexValid",
            1321);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])byte_1AD741E0);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &material_config->id);
          v29 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v28, (const char (*)[33])byte_1ADBEB20);
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v4 + 48));
          v31 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v30, (const char (*)[21])byte_1ADBEC00);
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v31,
                  &books_codex_config_ptr->material_id);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v32, (const char (*)[10])byte_1ADBEC40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
          result = 0;
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
          4u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "isUnlockCodexValid",
          1316);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])byte_1AD741E0);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &material_config->id);
        v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v20, (const char (*)[33])byte_1ADBEB20);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v22, (const char (*)[28])byte_1ADBEBC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        result = 0;
      }
    }
  }
  else
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isUnlockCodexValid",
      1304);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])byte_1AD741E0);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &material_config->id);
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v9, (const char (*)[56])byte_1ADBEAC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = 0;
  }
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 1334: range 00000000145FD7B2-00000000145FE57D
int32_t __cdecl MaterialExcelConfigMgr::checkAvatarCardChangeExcelConfig(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  uint32_t repeat_count_min; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  uint32_t v16; // ecx
  char v17; // dl
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // eax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  __int64 v33; // rsi
  uint32_t repeat_count_max; // ecx
  char v35; // al
  int v36; // eax
  int32_t result; // eax
  ItemExcelConfigMgr *item_config_mgr; // [rsp+18h] [rbp-278h]
  data::AvatarCardChangeExcelConfigMap *__for_range; // [rsp+20h] [rbp-270h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false>::reference v40; // [rsp+28h] [rbp-268h]
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarCardChangeExcelConfig> >::type *avatar_id; // [rsp+30h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarCardChangeExcelConfig> >::type *avatar_change_config; // [rsp+38h] [rbp-258h]
  const std::vector<data::AvatarCardRepeatConfig> *__for_range_0; // [rsp+40h] [rbp-250h]
  const data::AvatarCardRepeatConfig *repeat_config; // [rsp+48h] [rbp-248h]
  const std::vector<data::IdCountConfig> *__for_range_1; // [rsp+50h] [rbp-240h]
  const data::IdCountConfig *award_item; // [rsp+58h] [rbp-238h]
  char v47[560]; // [rsp+60h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 4 19 last_count_max:1338 64 8 16 __for_begin:1336 96 8 14 __for_end:1336 128 8 16 __for_be"
                        "gin:1339 160 8 14 __for_end:1339 192 8 16 __for_begin:1353 224 8 14 __for_end:1353 256 32 9 <unk"
                        "nown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::checkAvatarCardChangeExcelConfig;
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
  v5[536862735] = -202116109;
  item_config_mgr = &txt_config_mgr->item_config_mgr;
  __for_range = &this->avatar_card_change_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false> *)(v3 + 96)) )
      break;
    v40 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false> *const)(v3 + 64));
    avatar_id = std::get<0ul,unsigned int const,data::AvatarCardChangeExcelConfig>(v40);
    avatar_change_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarCardChangeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarCardChangeExcelConfig>(v40);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, v6);
    *(_DWORD *)(v3 + 48) = 0;
    __for_range_0 = &avatar_change_config->repeat_transfer_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::AvatarCardRepeatConfig>::const_iterator *)(v3 + 128) = std::vector<data::AvatarCardRepeatConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<data::AvatarCardRepeatConfig>::const_iterator *)(v3 + 160) = std::vector<data::AvatarCardRepeatConfig>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<data::AvatarCardRepeatConfig const*,std::vector<data::AvatarCardRepeatConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *)(v3 + 160)) )
      {
        v15 = 1;
        goto LABEL_62;
      }
      repeat_config = __gnu_cxx::__normal_iterator<data::AvatarCardRepeatConfig const*,std::vector<data::AvatarCardRepeatConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_min >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_min >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&repeat_config->repeat_count_min);
      }
      repeat_count_min = repeat_config->repeat_count_min;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( repeat_count_min != *(_DWORD *)(v3 + 48) + 1 )
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
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "checkAvatarCardChangeExcelConfig",
          1343);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 256),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(v9, (const char (*)[76])byte_1ADBEE40);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, avatar_id);
        v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v11,
                (const char (*)[17])" last_count_max:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v13,
                (const char (*)[19])" repeat_count_min:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &repeat_config->repeat_count_min);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
        goto LABEL_62;
      }
      if ( *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_min >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_min >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&repeat_config->repeat_count_min);
      }
      v16 = repeat_config->repeat_count_min;
      v17 = *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_max >> 3) + 0x7FFF8000);
      LOBYTE(v7) = v17 != 0;
      if ( v17 != 0 && (char)((((_BYTE)repeat_config + 68) & 7) + 3) >= v17 )
        __asan_report_load4(&repeat_config->repeat_count_max);
      if ( v16 > repeat_config->repeat_count_max )
        break;
      __for_range_1 = &repeat_config->item_vec;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v7);
      *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 192) = std::vector<data::IdCountConfig>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v7);
      *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 224) = std::vector<data::IdCountConfig>::end(__for_range_1);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 192),
                (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 224)) )
        {
          v28 = 1;
          goto LABEL_54;
        }
        award_item = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 192));
        if ( *(_BYTE *)(((unsigned __int64)&award_item->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&award_item->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&award_item->id);
        }
        if ( !ItemExcelConfigMgr::findItemConfig(item_config_mgr, award_item->id) )
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
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "checkAvatarCardChangeExcelConfig",
            1357);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v24, (const char (*)[52])byte_1ADBB0A0);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, avatar_id);
          v27 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v26, (const char (*)[24])byte_1ADBF000);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &award_item->id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v28 = 0;
          goto LABEL_54;
        }
        if ( *(_BYTE *)(((unsigned __int64)&award_item->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)award_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&award_item->count >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&award_item->count);
        }
        if ( !award_item->count )
          break;
        __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 192));
      }
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "checkAvatarCardChangeExcelConfig",
        1362);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v29, (const char (*)[52])byte_1ADBB0A0);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, avatar_id);
      v32 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v31, (const char (*)[25])byte_1ADBF040);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &award_item->count);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v28 = 0;
LABEL_54:
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v28 != 1 )
      {
        v15 = 0;
        goto LABEL_62;
      }
      v33 = (((_BYTE)repeat_config + 68) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_max >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)repeat_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&repeat_config->repeat_count_max >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&repeat_config->repeat_count_max);
      }
      repeat_count_max = repeat_config->repeat_count_max;
      v35 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v35 != 0 && v35 <= 3 )
      {
        LOBYTE(v33) = v35 != 0;
        __asan_report_store4(v3 + 48, v33);
      }
      *(_DWORD *)(v3 + 48) = repeat_count_max;
      __gnu_cxx::__normal_iterator<data::AvatarCardRepeatConfig const*,std::vector<data::AvatarCardRepeatConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::AvatarCardRepeatConfig*,std::vector<data::AvatarCardRepeatConfig> > *const)(v3 + 128));
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
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "checkAvatarCardChangeExcelConfig",
      1349);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v18, (const char (*)[82])byte_1ADBEF40);
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, avatar_id);
    v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v20, (const char (*)[19])" repeat_count_min:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &repeat_config->repeat_count_min);
    v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v22, (const char (*)[19])" repeat_count_max:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &repeat_config->repeat_count_max);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v15 = 0;
LABEL_62:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v15 != 1 )
    {
      v36 = 0;
      goto LABEL_66;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false> *const)(v3 + 64));
  }
  v36 = 1;
LABEL_66:
  if ( v36 == 1 )
    v2 = 0;
  result = v2;
  if ( v47 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 1373: range 00000000145FE57E-00000000145FE769
std::optional<std::unordered_set<unsigned int> > *__fastcall MaterialExcelConfigMgr::queryItemIDsInSet(
        std::optional<std::unordered_set<unsigned int> > *retstr,
        const MaterialExcelConfigMgr *const this,
        uint32_t set_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *p_set_to_item_ids_map; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::pointer v9; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 set_id:1372 64 8 9 iter:1374 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MaterialExcelConfigMgr::queryItemIDsInSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = set_id;
  p_set_to_item_ids_map = &this->set_to_item_ids_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(p_set_to_item_ids_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->set_to_item_ids_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    std::optional<std::unordered_set<unsigned int>>::optional(retstr, (std::nullopt_t)(v3 + 96));
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 64));
    std::optional<std::unordered_set<unsigned int>>::optional<std::unordered_set<unsigned int> const&,true>(
      retstr,
      &v9->second);
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
  return retstr;
};

// Line 1384: range 00000000145FE76A-00000000145FE79C
int32_t __cdecl MaterialExcelConfigMgr::findReliquaryExpByMaterialId(
        const MaterialExcelConfigMgr *const this,
        uint32_t item_id,
        uint32_t *exp)
{
  return MaterialExcelConfigMgr::internalFindEquipExpByMaterialId(
           this,
           item_id,
           exp,
           MATERIAL_RELIQUARY_MATERIAL,
           ITEM_USE_ADD_RELIQUARY_EXP);
};

// Line 1389: range 00000000145FE79E-00000000145FE7D0
int32_t __cdecl MaterialExcelConfigMgr::findWeaponExpByMaterialId(
        const MaterialExcelConfigMgr *const this,
        uint32_t item_id,
        uint32_t *exp)
{
  return MaterialExcelConfigMgr::internalFindEquipExpByMaterialId(
           this,
           item_id,
           exp,
           MATERIAL_WEAPON_EXP_STONE,
           ITEM_USE_ADD_WEAPON_EXP);
};

// Line 1394: range 00000000145FE7D2-00000000145FF18C
__int64 __fastcall MaterialExcelConfigMgr::internalFindEquipExpByMaterialId(
        const MaterialExcelConfigMgr *const this,
        __int64 item_id,
        uint32_t *exp,
        data::MaterialType material_type,
        data::ItemUseOp item_use_op)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v9; // rdx
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::pointer v13; // rax
  data::MaterialType *p_material_type; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::vector<data::ItemUseConfig>::const_reference v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::vector<data::ItemUseConfig>::const_reference v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::vector<data::ItemUseConfig>::const_reference v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  const data::MaterialExcelConfig *material_config; // [rsp+28h] [rbp-218h]
  char v32[528]; // [rsp+30h] [rbp-210h] BYREF

  v5 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(480LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 48 4 12 item_id:1393 64 4 18 material_type:1393 80 4 16 item_use_op:1393 96 8 9 iter:1395 128"
                        " 8 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = MaterialExcelConfigMgr::internalFindEquipExpByMaterialId;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862726] = -218959118;
  v7[536862728] = -218959118;
  v7[536862730] = -218959118;
  v7[536862732] = -218959118;
  v7[536862734] = -202116109;
  *(_DWORD *)(v5 + 48) = item_id;
  *(_DWORD *)(v5 + 64) = material_type;
  *(_DWORD *)(v5 + 80) = item_use_op;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, item_id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               p_material_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v5 + 48));
  v9 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 128, v5 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v5 + 128) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v9);
  v10 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v5 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v5 + 128));
  *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    *(_DWORD *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 96 + 31) & 7) >= *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "internalFindEquipExpByMaterialId",
      1398);
    v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            (common::milog::MiLogStream *const)(v5 + 160),
            (const char (*)[45])"findMaterialExcelConfig failed, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 160));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v5 + 96));
    material_config = &v13->second;
    p_material_type = &v13->second.material_type;
    if ( *(_BYTE *)(((unsigned __int64)p_material_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_material_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_material_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_material_type);
    }
    if ( material_config->material_type == *(_DWORD *)(v5 + 64) )
    {
      if ( std::vector<data::ItemUseConfig>::size(&material_config->item_use) == 1 )
      {
        v19 = std::vector<data::ItemUseConfig>::operator[](&material_config->item_use, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)&v19->use_op >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v19->use_op >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v19->use_op);
        }
        if ( v19->use_op == *(_DWORD *)(v5 + 80) )
        {
          v23 = std::vector<data::ItemUseConfig>::operator[](&material_config->item_use, 0LL);
          if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(&v23->use_param, exp) )
          {
            *(_DWORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 96 + 31) & 7) >= *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 416, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 416),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MaterialExcelConfig.cpp",
              "internalFindEquipExpByMaterialId",
              1423);
            v24 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    (common::milog::MiLogStream *const)(v5 + 416),
                    (const char (*)[31])"strVecToNum fails, use_params:");
            v25 = std::vector<data::ItemUseConfig>::operator[](&material_config->item_use, 0LL);
            v26 = common::milog::MiLogStream::operator<<<std::string>(v24, &v25->use_param);
            v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])" item_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v5 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 416));
            result = 0xFFFFFFFFLL;
          }
          else
          {
            result = 0LL;
          }
        }
        else
        {
          *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 352) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 127) & 7) >= *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 352, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 352),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "internalFindEquipExpByMaterialId",
            1417);
          v20 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)(v5 + 352),
                  (const char (*)[34])"Material UseConfig use_op is not ");
          v21 = common::milog::MiLogStream::operator<<<data::ItemUseOp,(data::ItemUseOp*)0>(
                  v20,
                  (const data::ItemUseOp *)(v5 + 80));
          v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])", item_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 352));
          result = 0xFFFFFFFFLL;
        }
      }
      else
      {
        *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 32 + 95) & 7) >= *(_BYTE *)(((v5 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/MaterialExcelConfig.cpp",
          "internalFindEquipExpByMaterialId",
          1411);
        v18 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                (common::milog::MiLogStream *const)(v5 + 288),
                (const char (*)[43])"Material UseConfig is not size 1, item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 288));
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 32 + 31) & 7) >= *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "internalFindEquipExpByMaterialId",
        1405);
      v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v5 + 224),
              (const char (*)[21])"MaterialType is not ");
      v16 = common::milog::MiLogStream::operator<<<data::MaterialType,(data::MaterialType*)0>(
              v15,
              (const data::MaterialType *)(v5 + 64));
      v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])", item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 224));
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v32 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 1432: range 00000000145FF18E-00000000145FF3E1
__int64 __fastcall MaterialExcelConfigMgr::getMaterialTypeByItemId(
        const MaterialExcelConfigMgr *const this,
        __int64 item_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::pointer v9; // rdx
  data::ItemType *p_item_type; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::pointer v11; // rdx
  data::MaterialType *p_material_type; // rax
  char v13[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 item_id:1431 64 8 9 iter:1433 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MaterialExcelConfigMgr::getMaterialTypeByItemId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = item_id;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, item_id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               p_material_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v2 + 64));
    p_item_type = &v9->second.item_type;
    if ( *(_BYTE *)(((unsigned __int64)p_item_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_item_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_item_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_item_type);
    }
    if ( v9->second.item_type == ITEM_MATERIAL )
    {
      v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v2 + 64));
      p_material_type = &v11->second.material_type;
      if ( *(_BYTE *)(((unsigned __int64)p_material_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_material_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_material_type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(p_material_type);
      }
      result = (unsigned int)v11->second.material_type;
    }
    else
    {
      result = 0LL;
    }
  }
  if ( v13 == (char *)v2 )
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

// Line 1446: range 00000000145FF3E2-00000000146002E1
bool __cdecl MaterialExcelConfigMgr::isChestSelectItemValid(
        const MaterialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<std::string> *use_param)
{
  bool v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  const std::string *v8; // rax
  char *v9; // rsi
  bool v10; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-330h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v27; // [rsp+28h] [rbp-328h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+30h] [rbp-320h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count; // [rsp+38h] [rbp-318h]
  char v30[784]; // [rsp+40h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 8 16 __for_begin:1463 112 8 14 __for_end:1463 144 32 9 <"
                        "unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <u"
                        "nknown> 528 32 9 <unknown> 592 32 9 <unknown> 656 48 19 item_count_map:1452";
  *(_QWORD *)(v4 + 16) = MaterialExcelConfigMgr::isChestSelectItemValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61953;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862729] = -219021312;
  v6[536862730] = 62194;
  v6[536862731] = -219021312;
  v6[536862732] = 62194;
  v6[536862733] = -219021312;
  v6[536862734] = 62194;
  v6[536862735] = -219021312;
  v6[536862736] = 62194;
  v6[536862737] = -219021312;
  v6[536862738] = 62194;
  v6[536862739] = -219021312;
  v6[536862740] = 62194;
  v6[536862742] = -202116109;
  if ( std::vector<std::string>::empty(use_param) )
  {
    if ( *(char *)(((v4 + 144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 175) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 112 + 31) & 7) >= *(_BYTE *)(((v4 + 175) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 144, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 144),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MaterialExcelConfig.cpp",
      "isChestSelectItemValid",
      1449);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 144),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1ADBF580);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 144));
    v3 = 0;
  }
  else
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 656));
    std::allocator<char>::allocator(v4 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v4 + 272),
      ":",
      (const std::allocator<char> *)(v4 + 64));
    std::allocator<char>::allocator(v4 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v4 + 208),
      ",",
      (const std::allocator<char> *)(v4 + 48));
    v8 = std::vector<std::string>::operator[](use_param, 0LL);
    v9 = (char *)(v4 + 208);
    v10 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
            v8,
            (const std::string *)(v4 + 208),
            (const std::string *)(v4 + 272),
            (std::map<unsigned int,unsigned int> *)(v4 + 656),
            1) != 0;
    std::string::~string((void *)(v4 + 208));
    *(_DWORD *)(((v4 + 208) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v4 + 48);
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v4 + 272));
    *(_DWORD *)(((v4 + 272) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v4 + 64);
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      *(_DWORD *)(((v4 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 111) & 7) >= *(_BYTE *)(((v4 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 336, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isChestSelectItemValid",
        1455);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 336),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v11, (const char (*)[54])byte_1ADBF5E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 336));
      *(_DWORD *)(((v4 + 336) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 0;
    }
    else if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v4 + 656)) )
    {
      *(_DWORD *)(((v4 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 112 + 31) & 7) >= *(_BYTE *)(((v4 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isChestSelectItemValid",
        1460);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 400),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v12, (const char (*)[48])byte_1ADBF640);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 400));
      *(_DWORD *)(((v4 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 0;
    }
    else
    {
      __for_range = (std::map<unsigned int,unsigned int> *)(v4 + 656);
      *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 80, v9);
      *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 80) = std::map<unsigned int,unsigned int>::begin(__for_range);
      *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 112, v9);
      *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 112) = std::map<unsigned int,unsigned int>::end(__for_range);
      while ( 1 )
      {
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 80),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 112)) )
        {
          v16 = 1;
          goto LABEL_42;
        }
        v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 80));
        item_id = std::get<0ul,unsigned int const,unsigned int>(v27);
        item_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v27);
        p_item_config_mgr = &txt_config_mgr->item_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *item_id) )
        {
          *(_DWORD *)(((v4 + 464) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 464) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 495) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 48 + 31) & 7) >= *(_BYTE *)(((v4 + 495) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 464, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 464),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isChestSelectItemValid",
            1467);
          v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                  (common::milog::MiLogStream *const)(v4 + 464),
                  (const char (*)[9])"item id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, item_id);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])byte_1ADBE840);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 464));
          *(_DWORD *)(((v4 + 464) >> 3) + 0x7FFF8000) = -117901064;
          v3 = 0;
          v16 = 0;
          goto LABEL_42;
        }
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, *item_id, ITEM_LIMIT_USE_ITEM) )
        {
          *(_DWORD *)(((v4 + 528) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 528) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 559) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 32 + 79) & 7) >= *(_BYTE *)(((v4 + 559) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 528, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 528),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MaterialExcelConfig.cpp",
            "isChestSelectItemValid",
            1472);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 528),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])byte_1AD741E0);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, item_id);
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v19, (const char (*)[46])byte_1ADBE2E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 528));
          *(_DWORD *)(((v4 + 528) >> 3) + 0x7FFF8000) = -117901064;
          v3 = 0;
          v16 = 0;
          goto LABEL_42;
        }
        if ( *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_count);
        }
        if ( !*item_count )
          break;
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 80));
      }
      *(_DWORD *)(((v4 + 592) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 592) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 623) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 111) & 7) >= *(_BYTE *)(((v4 + 623) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 592, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 592),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MaterialExcelConfig.cpp",
        "isChestSelectItemValid",
        1477);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 592),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])byte_1AD741E0);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, item_id);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v22, (const char (*)[24])byte_1ADBF6A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 592));
      *(_DWORD *)(((v4 + 592) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 1;
      v16 = 0;
LABEL_42:
      *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( v16 == 1 )
        v3 = 1;
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 656));
  }
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = 0;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v3;
};
