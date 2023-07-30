// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GCGDeckExcelConfig.cpp

// Line 20: range 00000000144022DA-000000001440274F
int32_t __cdecl GCGDeckExcelConfigMgr::rewriteConfig(GCGDeckExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)GCGDeckExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( GCGDeckExcelConfigMgr::rewriteDeckCardFaceConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
      "rewriteConfig",
      21);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v5,
      (const char (*)[34])"rewriteDeckCardFaceConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( GCGDeckExcelConfigMgr::rewriteDeckCardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
      "rewriteConfig",
      22);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v7,
      (const char (*)[30])"rewriteDeckCardConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( GCGDeckExcelConfigMgr::rewriteProficiencyRewardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
      "rewriteConfig",
      23);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v8,
      (const char (*)[39])"rewriteProficiencyRewardConfig failed.");
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

// Line 28: range 0000000014402750-0000000014402E40
int32_t __cdecl GCGDeckExcelConfigMgr::checkConfig(
        GCGDeckExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  char v11[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (common::milog::MiLogStream *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"5 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)GCGDeckExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( GCGDeckExcelConfigMgr::checkDeckStorageConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
      "checkConfig",
      29);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v5,
      (const char (*)[31])"checkDeckStorageConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( GCGDeckExcelConfigMgr::checkDeckBackConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
      "checkConfig",
      30);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v7,
      (const char (*)[28])"checkDeckBackConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( GCGDeckExcelConfigMgr::checkDeckFieldConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
      "checkConfig",
      31);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v8,
      (const char (*)[29])"checkDeckFieldConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( GCGDeckExcelConfigMgr::checkDeckCardFaceConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
      "checkConfig",
      32);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v9,
      (const char (*)[32])"checkDeckCardFaceConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( GCGDeckExcelConfigMgr::checkDeckCardConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
      "checkConfig",
      33);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v10,
      (const char (*)[28])"checkDeckCardConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 38: range 0000000014402E42-0000000014402E6E
bool __cdecl GCGDeckExcelConfigMgr::isCardFaceTypeValid(
        const GCGDeckExcelConfigMgr *const this,
        uint32_t card_id,
        data::GCGCardFaceType face_type)
{
  return GCGDeckExcelConfigMgr::getCardFaceTypeConfigId(this, card_id, face_type) != 0;
};

// Line 43: range 0000000014402E70-0000000014402EAB
const data::GCGCardFaceExcelConfig *__cdecl GCGDeckExcelConfigMgr::findGCGCardFaceTypeExcelConfig(
        const GCGDeckExcelConfigMgr *const this,
        uint32_t card_id,
        data::GCGCardFaceType face_type)
{
  uint32_t CardFaceTypeConfigId; // eax

  CardFaceTypeConfigId = GCGDeckExcelConfigMgr::getCardFaceTypeConfigId(this, card_id, face_type);
  return data::GCGDeckExcelConfigMgrBase::findGCGCardFaceExcelConfig(this, CardFaceTypeConfigId);
};

// Line 48: range 0000000014402EAC-00000000144030C9
const std::map<data::GCGTagType,unsigned int> *__fastcall GCGDeckExcelConfigMgr::getCardRelatedTagCountMap(
        const GCGDeckExcelConfigMgr *const this,
        const std::map<data::GCGTagType,unsigned int> *card_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<data::GCGTagType,unsigned int>> *p_card_related_tag_map; // rdx
  std::map<unsigned int,std::map<data::GCGTagType,unsigned int>> *v6; // rdx
  bool v7; // al
  const std::map<data::GCGTagType,unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 10 card_id:47 64 8 7 iter:50 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGDeckExcelConfigMgr::getCardRelatedTagCountMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)card_id;
  if ( !(_BYTE)`guard variable for'GCGDeckExcelConfigMgr::getCardRelatedTagCountMap(unsigned int)::temp_map
    && __cxa_guard_acquire(&`guard variable for'GCGDeckExcelConfigMgr::getCardRelatedTagCountMap(unsigned int)::temp_map) )
  {
    std::map<data::GCGTagType,unsigned int>::map((std::map<data::GCGTagType,unsigned int> *const)&GCGDeckExcelConfigMgr::getCardRelatedTagCountMap(unsigned int)const::temp_map);
    __cxa_guard_release(&`guard variable for'GCGDeckExcelConfigMgr::getCardRelatedTagCountMap(unsigned int)::temp_map);
    card_id = &GCGDeckExcelConfigMgr::getCardRelatedTagCountMap(unsigned int)const::temp_map;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::GCGTagType,unsigned int>::~map,
      (void *)&GCGDeckExcelConfigMgr::getCardRelatedTagCountMap(unsigned int)const::temp_map,
      &_dso_handle);
  }
  p_card_related_tag_map = &this->card_related_tag_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, card_id);
  *(std::map<unsigned int,std::map<data::GCGTagType,unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<data::GCGTagType,unsigned int>>::find(
                                                                                                   p_card_related_tag_map,
                                                                                                   (const std::map<unsigned int,std::map<data::GCGTagType,unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->card_related_tag_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<data::GCGTagType,unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<data::GCGTagType,unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::GCGTagType,unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::GCGTagType,unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &GCGDeckExcelConfigMgr::getCardRelatedTagCountMap(unsigned int)const::temp_map;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::GCGTagType,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::GCGTagType,unsigned int> > > *const)(v2 + 64))->second;
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

// Line 59: range 00000000144030CA-000000001440564D
bool __cdecl GCGDeckExcelConfigMgr::isDeckValid(
        const GCGDeckExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<unsigned int> *character_card_vec,
        const std::vector<unsigned int> *card_vec)
{
  bool v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t GCGDeckCardLimitSize; // edx
  char v9; // al
  uint32_t GCGDeckCharacterLimitSize; // edx
  char v11; // al
  char *v12; // rsi
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  std::map<unsigned int,unsigned int>::size_type v18; // rcx
  common::milog::MiLogStream *v19; // r14
  std::map<unsigned int,unsigned int>::size_type v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::vector<unsigned int>::size_type v23; // rcx
  char v24; // al
  common::milog::MiLogStream *v25; // r14
  std::vector<unsigned int>::size_type v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned __int64 v29; // rax
  uint32_t *p_limit; // rsi
  const GCGDeckExcelConfigMgr *v31; // rcx
  common::milog::MiLogStream *v32; // rdx
  int v33; // eax
  common::milog::MiLogStream *v34; // rdx
  unsigned int v35; // ecx
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  __int64 v41; // rsi
  char *v42; // rsi
  data::GCGTagType *v43; // rax
  int *v44; // rdx
  int v45; // ecx
  char v46; // al
  std::map<data::GCGTagType,unsigned int>::mapped_type *v47; // rax
  unsigned __int64 v48; // rax
  char *v49; // rsi
  unsigned int *v50; // rax
  int *v51; // rdx
  int v52; // ecx
  char v53; // al
  std::map<unsigned int,unsigned int>::mapped_type *v54; // rax
  const GCGDeckExcelConfigMgr *v55; // rcx
  common::milog::MiLogStream *v56; // rdx
  int v57; // eax
  common::milog::MiLogStream *v58; // rdx
  unsigned int v59; // ecx
  common::milog::MiLogStream *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  const std::map<data::GCGTagType,unsigned int> *v68; // rsi
  std::map<data::GCGTagType,unsigned int>::mapped_type *v69; // rax
  std::tuple_element<1,const std::pair<const data::GCGTagType,unsigned int> >::type *v70; // rdx
  std::tuple_element<1,const std::pair<const data::GCGTagType,unsigned int> >::type v71; // ecx
  common::milog::MiLogStream *v72; // r14
  __int64 v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rdx
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // r14
  std::map<data::GCGTagType,unsigned int>::mapped_type *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rdx
  int v81; // edx
  ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+28h] [rbp-688h]
  GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+30h] [rbp-680h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-670h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference __in; // [rsp+48h] [rbp-668h]
  uint32_t *card_id; // [rsp+50h] [rbp-660h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+58h] [rbp-658h]
  const data::GCGDeckCardExcelConfig *card_config_ptr; // [rsp+60h] [rbp-650h]
  const std::set<data::GCGTagType> *__for_range_1; // [rsp+68h] [rbp-648h]
  std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+78h] [rbp-638h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v94; // [rsp+80h] [rbp-630h]
  const unsigned int *card_id_0; // [rsp+88h] [rbp-628h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+90h] [rbp-620h]
  const data::GCGDeckCardExcelConfig *card_config_ptr_0; // [rsp+98h] [rbp-618h]
  const std::map<data::GCGTagType,unsigned int> *__for_range_4; // [rsp+A0h] [rbp-610h]
  std::_Rb_tree_const_iterator<std::pair<const data::GCGTagType,unsigned int> >::reference v99; // [rsp+A8h] [rbp-608h]
  std::tuple_element<0,std::pair<const data::GCGTagType,unsigned int> >::type *tag; // [rsp+B0h] [rbp-600h]
  std::tuple_element<1,const std::pair<const data::GCGTagType,unsigned int> >::type *num_1; // [rsp+B8h] [rbp-5F8h]
  char v102[1520]; // [rsp+C0h] [rbp-5F0h] BYREF

  v5 = (unsigned __int64)v102;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_5(1472LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "33 32 4 22 deck_card_num_limit:62 48 4 27 character_card_num_limit:63 64 4 10 card_id:65 80 4 7 "
                        "tag:102 96 4 11 card_id:108 112 8 14 __for_begin:65 144 8 12 __for_end:65 176 8 9 <unknown> 208 "
                        "8 9 <unknown> 240 8 14 __for_begin:80 272 8 12 __for_end:80 304 8 15 __for_begin:102 336 8 13 __"
                        "for_end:102 368 8 15 __for_begin:108 400 8 13 __for_end:108 432 8 15 __for_begin:113 464 8 13 __"
                        "for_end:113 496 8 15 __for_begin:144 528 8 13 __for_end:144 560 8 9 <unknown> 592 32 9 <unknown>"
                        " 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> 912 32 9 <unknown> "
                        "976 32 9 <unknown> 1040 32 9 <unknown> 1104 32 9 <unknown> 1168 32 9 <unknown> 1232 48 27 charac"
                        "ter_card_count_map:64 1312 48 26 character_tag_count_map:79 1392 48 18 card_count_map:107";
  *(_QWORD *)(v5 + 16) = GCGDeckExcelConfigMgr::isDeckValid;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = 61956;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862724] = -234881024;
  v7[536862725] = 62194;
  v7[536862725] = -234881024;
  v7[536862726] = 62194;
  v7[536862726] = -234881024;
  v7[536862727] = 62194;
  v7[536862727] = -234881024;
  v7[536862728] = 62194;
  v7[536862728] = -234881024;
  v7[536862729] = 62194;
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
  v7[536862736] = -234881024;
  v7[536862737] = 62194;
  v7[536862737] = -234881024;
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
  v7[536862760] = -218959118;
  v7[536862762] = -219021312;
  v7[536862763] = 62194;
  v7[536862765] = -202116109;
  const_value_config_mgr = &txt_config_mgr->const_value_config_mgr;
  gcg_game_config_mgr = &txt_config_mgr->gcg_game_config_mgr;
  GCGDeckCardLimitSize = ConstValueExcelConfigMgr::getGCGDeckCardLimitSize(&txt_config_mgr->const_value_config_mgr);
  v9 = *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(txt_config_mgr) = v9 != 0;
    __asan_report_store4(v5 + 32, txt_config_mgr);
  }
  *(_DWORD *)(v5 + 32) = GCGDeckCardLimitSize;
  GCGDeckCharacterLimitSize = ConstValueExcelConfigMgr::getGCGDeckCharacterLimitSize(const_value_config_mgr);
  v11 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(txt_config_mgr) = v11 != 0;
  if ( v11 != 0 && v11 <= 3 )
    __asan_report_store4(v5 + 48, txt_config_mgr);
  *(_DWORD *)(v5 + 48) = GCGDeckCharacterLimitSize;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 1232));
  if ( *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 112, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v5 + 112) = std::vector<unsigned int>::begin(character_card_vec);
  if ( *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 144, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v5 + 144) = std::vector<unsigned int>::end(character_card_vec);
  while ( 1 )
  {
    v12 = (char *)(v5 + 144);
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 112),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 144)) )
      break;
    v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 112));
    v14 = (int *)v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    v15 = *v14;
    v16 = *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v12) = v16 != 0;
      __asan_report_store4(v5 + 64, v12);
    }
    *(_DWORD *)(v5 + 64) = v15;
    v17 = std::map<unsigned int,unsigned int>::operator[](
            (std::map<unsigned int,unsigned int> *const)(v5 + 1232),
            (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    ++*v17;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 112));
  }
  *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = -8;
  v18 = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v5 + 1232));
  if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v5 + 48);
  if ( v18 == *(_DWORD *)(v5 + 48) )
  {
    v23 = std::vector<unsigned int>::size(card_vec);
    v24 = *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000);
    LOBYTE(v12) = v24 != 0;
    if ( v24 != 0 && v24 <= 3 )
      __asan_report_load4(v5 + 32);
    if ( v23 == *(_DWORD *)(v5 + 32) )
    {
      v29 = ((v5 + 1312) >> 3) + 2147450880;
      *(_DWORD *)v29 = 0;
      *(_WORD *)(v29 + 4) = 0;
      std::map<data::GCGTagType,unsigned int>::map((std::map<data::GCGTagType,unsigned int> *const)(v5 + 1312));
      __for_range_0 = (std::map<unsigned int,unsigned int> *)(v5 + 1232);
      *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 240, v12);
      *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 240) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 272, v12);
      *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 272) = std::map<unsigned int,unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        p_limit = (uint32_t *)(v5 + 272);
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 240),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 272)) )
        {
          v33 = 1;
          goto LABEL_80;
        }
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 240));
        card_id = std::get<0ul,unsigned int const,unsigned int>(__in);
        num = std::get<1ul,unsigned int const,unsigned int>(__in);
        v31 = this;
        if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(card_id);
        }
        card_config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(v31, *card_id);
        if ( !card_config_ptr )
        {
          *(_DWORD *)(((v5 + 720) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 720) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 751) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 47) & 7) >= *(_BYTE *)(((v5 + 751) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 720, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 720),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
            "isDeckValid",
            86);
          v32 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  (common::milog::MiLogStream *const)(v5 + 720),
                  (const char (*)[43])"findGCGDeckCardExcelConfig fail. card_id: ");
          p_limit = card_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, card_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 720));
          *(_DWORD *)(((v5 + 720) >> 3) + 0x7FFF8000) = -117901064;
          v4 = 0;
          v33 = 0;
          goto LABEL_80;
        }
        if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(card_id);
        }
        if ( GCGGameExcelConfigMgr::getCardType(gcg_game_config_mgr, *card_id) != GCG_CARD_CHARACTER )
        {
          *(_DWORD *)(((v5 + 784) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 784) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 815) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 111) & 7) >= *(_BYTE *)(((v5 + 815) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 784, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 784),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
            "isDeckValid",
            92);
          v34 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  (common::milog::MiLogStream *const)(v5 + 784),
                  (const char (*)[51])"card type error, must be character card. card_id: ");
          p_limit = card_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, card_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 784));
          *(_DWORD *)(((v5 + 784) >> 3) + 0x7FFF8000) = -117901064;
          v4 = 0;
          v33 = 0;
          goto LABEL_80;
        }
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(num);
        }
        v35 = *num;
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&card_config_ptr->limit);
        }
        if ( v35 > card_config_ptr->limit )
          break;
        if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(card_id);
        }
        v41 = *card_id;
        __for_range_1 = GCGGameExcelConfigMgr::getCardTagSet(gcg_game_config_mgr, v41);
        *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 304, v41);
        *(std::set<data::GCGTagType>::iterator *)(v5 + 304) = std::set<data::GCGTagType>::begin(__for_range_1);
        *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 336, v41);
        *(std::set<data::GCGTagType>::iterator *)(v5 + 336) = std::set<data::GCGTagType>::end(__for_range_1);
        while ( 1 )
        {
          v42 = (char *)(v5 + 336);
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<data::GCGTagType>::_Self *)(v5 + 304),
                  (const std::_Rb_tree_const_iterator<data::GCGTagType>::_Self *)(v5 + 336)) )
            break;
          *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) = 4;
          v43 = (data::GCGTagType *)std::_Rb_tree_const_iterator<data::GCGTagType>::operator*((const std::_Rb_tree_const_iterator<data::GCGTagType> *const)(v5 + 304));
          v44 = (int *)v43;
          if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v43);
          }
          v45 = *v44;
          v46 = *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000);
          if ( v46 != 0 && v46 <= 3 )
          {
            LOBYTE(v42) = v46 != 0;
            __asan_report_store4(v5 + 80, v42);
          }
          *(_DWORD *)(v5 + 80) = v45;
          v47 = std::map<data::GCGTagType,unsigned int>::operator[](
                  (std::map<data::GCGTagType,unsigned int> *const)(v5 + 1312),
                  (const std::map<data::GCGTagType,unsigned int>::key_type *)(v5 + 80));
          if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v47);
          }
          ++*v47;
          std::_Rb_tree_const_iterator<data::GCGTagType>::operator++((std::_Rb_tree_const_iterator<data::GCGTagType> *const)(v5 + 304));
        }
        *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) = -8;
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 240));
      }
      *(_DWORD *)(((v5 + 848) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 848) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 879) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 879) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 848, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 848),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
        "isDeckValid",
        98);
      v36 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)(v5 + 848),
              (const char (*)[33])"card num exceed limit. card_id: ");
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, card_id);
      v38 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v37, (const char (*)[7])" num: ");
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, num);
      v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v39, (const char (*)[9])" limit: ");
      p_limit = &card_config_ptr->limit;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &card_config_ptr->limit);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 848));
      *(_DWORD *)(((v5 + 848) >> 3) + 0x7FFF8000) = -117901064;
      v4 = 0;
      v33 = 0;
LABEL_80:
      *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = -8;
      if ( v33 == 1 )
      {
        v48 = ((v5 + 1392) >> 3) + 2147450880;
        *(_DWORD *)v48 = 0;
        *(_WORD *)(v48 + 4) = 0;
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 1392));
        *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 368, p_limit);
        *(std::vector<unsigned int>::const_iterator *)(v5 + 368) = std::vector<unsigned int>::begin(card_vec);
        *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 400, p_limit);
        *(std::vector<unsigned int>::const_iterator *)(v5 + 400) = std::vector<unsigned int>::end(card_vec);
        while ( 1 )
        {
          v49 = (char *)(v5 + 400);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 368),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 400)) )
            break;
          *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = 4;
          v50 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 368));
          v51 = (int *)v50;
          if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v50);
          }
          v52 = *v51;
          v53 = *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000);
          if ( v53 != 0 && v53 <= 3 )
          {
            LOBYTE(v49) = v53 != 0;
            __asan_report_store4(v5 + 96, v49);
          }
          *(_DWORD *)(v5 + 96) = v52;
          v54 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v5 + 1392),
                  (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 96));
          if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v54);
          }
          ++*v54;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 368));
        }
        *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) = -8;
        __for_range_3 = (std::map<unsigned int,unsigned int> *)(v5 + 1392);
        *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 432, v49);
        *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 432) = std::map<unsigned int,unsigned int>::begin(__for_range_3);
        *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 464, v49);
        *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 464) = std::map<unsigned int,unsigned int>::end(__for_range_3);
        while ( 1 )
        {
          if ( !std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 432),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 464)) )
          {
            v57 = 1;
            goto LABEL_153;
          }
          v94 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 432));
          card_id_0 = std::get<0ul,unsigned int const,unsigned int>(v94);
          num_0 = std::get<1ul,unsigned int const,unsigned int>(v94);
          v55 = this;
          if ( *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)card_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(card_id_0);
          }
          card_config_ptr_0 = data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(v55, *card_id_0);
          if ( !card_config_ptr_0 )
          {
            *(_DWORD *)(((v5 + 912) >> 3) + 0x7FFF8000) = 0;
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
              "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
              "isDeckValid",
              119);
            v56 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    (common::milog::MiLogStream *const)(v5 + 912),
                    (const char (*)[43])"findGCGDeckCardExcelConfig fail. card_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, card_id_0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 912));
            *(_DWORD *)(((v5 + 912) >> 3) + 0x7FFF8000) = -117901064;
            v4 = 0;
            v57 = 0;
            goto LABEL_153;
          }
          if ( *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)card_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(card_id_0);
          }
          if ( GCGGameExcelConfigMgr::getCardType(gcg_game_config_mgr, *card_id_0) == GCG_CARD_CHARACTER )
          {
            *(_DWORD *)(((v5 + 976) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 976) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 1007) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 64 + 47) & 7) >= *(_BYTE *)(((v5 + 1007) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 976, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 976),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
              "isDeckValid",
              125);
            v58 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    (common::milog::MiLogStream *const)(v5 + 976),
                    (const char (*)[52])"card type error, can't be character card. card_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, card_id_0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 976));
            *(_DWORD *)(((v5 + 976) >> 3) + 0x7FFF8000) = -117901064;
            v4 = 0;
            v57 = 0;
            goto LABEL_153;
          }
          if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(num_0);
          }
          v59 = *num_0;
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr_0->limit >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr_0->limit >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&card_config_ptr_0->limit);
          }
          if ( v59 > card_config_ptr_0->limit )
          {
            *(_DWORD *)(((v5 + 1040) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 1040) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 1071) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 64 + 111) & 7) >= *(_BYTE *)(((v5 + 1071) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 1040, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 1040),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
              "isDeckValid",
              131);
            v60 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    (common::milog::MiLogStream *const)(v5 + 1040),
                    (const char (*)[33])"card num exceed limit. card_id: ");
            v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, card_id_0);
            v62 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v61, (const char (*)[7])" num: ");
            v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, num_0);
            v64 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v63, (const char (*)[9])" limit: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &card_config_ptr_0->limit);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1040));
            *(_DWORD *)(((v5 + 1040) >> 3) + 0x7FFF8000) = -117901064;
            v4 = 0;
            v57 = 0;
            goto LABEL_153;
          }
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr_0->related_character_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&card_config_ptr_0->related_character_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&card_config_ptr_0->related_character_id);
          }
          if ( card_config_ptr_0->related_character_id
            && !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
                  (std::map<unsigned int,unsigned int> *)(v5 + 1232),
                  &card_config_ptr_0->related_character_id) )
          {
            break;
          }
          if ( *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)card_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(card_id_0);
          }
          v68 = (const std::map<data::GCGTagType,unsigned int> *)*card_id_0;
          __for_range_4 = GCGDeckExcelConfigMgr::getCardRelatedTagCountMap(this, v68);
          *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 496, v68);
          *(std::map<data::GCGTagType,unsigned int>::const_iterator *)(v5 + 496) = std::map<data::GCGTagType,unsigned int>::begin(__for_range_4);
          *(_BYTE *)(((v5 + 528) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 528) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 528, v68);
          *(std::map<data::GCGTagType,unsigned int>::const_iterator *)(v5 + 528) = std::map<data::GCGTagType,unsigned int>::end(__for_range_4);
          while ( 1 )
          {
            if ( !std::operator!=(
                    (const std::_Rb_tree_const_iterator<std::pair<const data::GCGTagType,unsigned int> >::_Self *)(v5 + 496),
                    (const std::_Rb_tree_const_iterator<std::pair<const data::GCGTagType,unsigned int> >::_Self *)(v5 + 528)) )
            {
              v81 = 1;
              goto LABEL_149;
            }
            v99 = std::_Rb_tree_const_iterator<std::pair<data::GCGTagType const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::GCGTagType,unsigned int> > *const)(v5 + 496));
            tag = std::get<0ul,data::GCGTagType const,unsigned int>(v99);
            num_1 = (std::tuple_element<1,const std::pair<const data::GCGTagType,unsigned int> >::type *)std::get<1ul,data::GCGTagType const,unsigned int>(v99);
            v69 = std::map<data::GCGTagType,unsigned int>::operator[](
                    (std::map<data::GCGTagType,unsigned int> *const)(v5 + 1312),
                    tag);
            v70 = v69;
            if ( *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v69 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v69);
            }
            v71 = *v70;
            if ( *(_BYTE *)(((unsigned __int64)num_1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)num_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(num_1);
            }
            if ( v71 < *num_1 )
              break;
            std::_Rb_tree_const_iterator<std::pair<data::GCGTagType const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::GCGTagType,unsigned int> > *const)(v5 + 496));
          }
          *(_DWORD *)(((v5 + 1168) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 1168) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 1199) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 1199) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 1168, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 1168),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
            "isDeckValid",
            148);
          v72 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  (common::milog::MiLogStream *const)(v5 + 1168),
                  (const char (*)[36])"related tag count not enough. tag: ");
          *(_BYTE *)(((v5 + 560) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(tag);
          }
          v73 = (__int64)data::enumValToStr(*tag);
          if ( *(_BYTE *)(((v5 + 560) >> 3) + 0x7FFF8000) )
            v73 = __asan_report_store8(v5 + 560, ((unsigned __int8)tag & 7u) + 3);
          *(_QWORD *)(v5 + 560) = v73;
          v74 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v72,
                  (const char *const *)(v5 + 560));
          v75 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v74, (const char (*)[8])" need: ");
          v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, num_1);
          v77 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v76, (const char (*)[8])" have: ");
          v78 = std::map<data::GCGTagType,unsigned int>::operator[](
                  (std::map<data::GCGTagType,unsigned int> *const)(v5 + 1312),
                  tag);
          v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, v78);
          v80 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v79, (const char (*)[11])" card_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, card_id_0);
          *(_BYTE *)(((v5 + 560) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1168));
          *(_DWORD *)(((v5 + 1168) >> 3) + 0x7FFF8000) = -117901064;
          v4 = 0;
          v81 = 0;
LABEL_149:
          *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v5 + 528) >> 3) + 0x7FFF8000) = -8;
          if ( v81 != 1 )
          {
            v57 = 0;
            goto LABEL_153;
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 432));
        }
        *(_DWORD *)(((v5 + 1104) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 1104) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 1135) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 1135) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 1104, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 1104),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
          "isDeckValid",
          139);
        v65 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                (common::milog::MiLogStream *const)(v5 + 1104),
                (const char (*)[31])"card need character. card_id: ");
        v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, card_id_0);
        v67 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v66,
                (const char (*)[18])" need character: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v67,
          &card_config_ptr_0->related_character_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1104));
        *(_DWORD *)(((v5 + 1104) >> 3) + 0x7FFF8000) = -117901064;
        v4 = 0;
        v57 = 0;
LABEL_153:
        *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) = -8;
        if ( v57 == 1 )
          v4 = 1;
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 1392));
      }
      std::map<data::GCGTagType,unsigned int>::~map((std::map<data::GCGTagType,unsigned int> *const)(v5 + 1312));
    }
    else
    {
      *(_DWORD *)(((v5 + 656) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 656) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 687) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 687) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 656, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 656),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
        "isDeckValid",
        76);
      v25 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              (common::milog::MiLogStream *const)(v5 + 656),
              (const char (*)[28])"card size not match. size: ");
      *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = 0;
      v26 = std::vector<unsigned int>::size(card_vec);
      if ( *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) )
        v26 = __asan_report_store8(v5 + 208, "card size not match. size: ");
      *(_QWORD *)(v5 + 208) = v26;
      v27 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v25,
              (const unsigned __int64 *)(v5 + 208));
      v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" limit: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v5 + 32));
      *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 656));
      *(_DWORD *)(((v5 + 656) >> 3) + 0x7FFF8000) = -117901064;
      v4 = 0;
    }
  }
  else
  {
    *(_DWORD *)(((v5 + 592) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 592) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 623) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 623) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 592, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 592),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
      "isDeckValid",
      71);
    v19 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)(v5 + 592),
            (const char (*)[38])"character card size not match. size: ");
    *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = 0;
    v20 = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v5 + 1232));
    if ( *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) )
      v20 = __asan_report_store8(v5 + 176, "character card size not match. size: ");
    *(_QWORD *)(v5 + 176) = v20;
    v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v19,
            (const unsigned __int64 *)(v5 + 176));
    v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" limit: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v5 + 48));
    *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 592));
    *(_DWORD *)(((v5 + 592) >> 3) + 0x7FFF8000) = -117901064;
    v4 = 0;
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 1232));
  if ( v102 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - (((_DWORD)v7 + 2147450888) & 0xFFFFFFF8) + 156) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v5 >> 3) + 0x7FFF80A0) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF80A8) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF80B4) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_5(v5, 1472LL, v102);
  }
  return v4;
};

// Line 157: range 000000001440564E-000000001440597A
__int64 __fastcall GCGDeckExcelConfigMgr::getCardFaceTypeConfigId(
        const GCGDeckExcelConfigMgr *const this,
        __int64 card_id,
        data::GCGCardFaceType face_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>> *p_card_face_config_index_map; // rdx
  std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  bool v10; // al
  std::_Rb_tree_const_iterator<std::pair<const data::GCGCardFaceType,unsigned int> >::pointer v11; // rdx
  unsigned int *p_second; // rax
  std::map<data::GCGCardFaceType,unsigned int> *face_type_map; // [rsp+18h] [rbp-E8h]
  char v15[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 11 card_id:156 48 4 13 face_type:156 64 8 8 iter:158 96 8 9 <unknown> 128 8 18 face_type_"
                        "iter:164 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGDeckExcelConfigMgr::getCardFaceTypeConfigId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = card_id;
  *(_DWORD *)(v3 + 48) = face_type;
  p_card_face_config_index_map = &this->card_face_config_index_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, card_id);
  *(std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::find(p_card_face_config_index_map, (const std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->card_face_config_index_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    face_type_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<data::GCGCardFaceType,unsigned int>::const_iterator *)(v3 + 128) = std::map<data::GCGCardFaceType,unsigned int>::find(
                                                                                    face_type_map,
                                                                                    (const std::map<data::GCGCardFaceType,unsigned int>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<data::GCGCardFaceType,unsigned int>::const_iterator *)(v3 + 160) = std::map<data::GCGCardFaceType,unsigned int>::end(face_type_map);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<const data::GCGCardFaceType,unsigned int> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<const data::GCGCardFaceType,unsigned int> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      result = 0LL;
    }
    else
    {
      v11 = std::_Rb_tree_const_iterator<std::pair<data::GCGCardFaceType const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GCGCardFaceType,unsigned int> > *const)(v3 + 128));
      p_second = &v11->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      result = v11->second;
    }
  }
  if ( v15 == (char *)v3 )
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

// Line 173: range 000000001440597C-0000000014405DFA
int32_t __cdecl GCGDeckExcelConfigMgr::rewriteDeckCardFaceConfig(
        GCGDeckExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<data::GCGCardFaceType,unsigned int> *v5; // rdi
  const unsigned int *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const data::GCGCardFaceType,unsigned int> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  data::GCGCardFaceExcelConfigMap *__for_range; // [rsp+20h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-108h]
  const unsigned int *index; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGCardFaceExcelConfig> >::type *config; // [rsp+38h] [rbp-F8h]
  char v21[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:175 64 8 13 __for_end:175 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGDeckExcelConfigMgr::rewriteDeckCardFaceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  ret = 0;
  __for_range = &this->gcg_card_face_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCardFaceExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGCardFaceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCardFaceExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGCardFaceExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false,false> *const)(v2 + 32));
    index = std::get<0ul,unsigned int const,data::GCGCardFaceExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGCardFaceExcelConfig>(__in);
    v5 = std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::operator[](
           &this->card_face_config_index_map,
           &config->card_id);
    v7 = std::map<data::GCGCardFaceType,unsigned int>::emplace<data::GCGCardFaceType&,unsigned int const&>(
           v5,
           &config->card_face_type,
           index,
           &config->card_face_type,
           v6);
    if ( !v7.second )
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
        "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
        "rewriteDeckCardFaceConfig",
        179);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v8, (const char (*)[37])byte_1AD6A900);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->card_id);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])byte_1AD6A960);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      v12 = (((_BYTE)config + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->card_face_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->card_face_type >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->card_face_type);
      }
      v13 = (__int64)data::enumValToStr(config->card_face_type, v12);
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        v13 = __asan_report_store8(v2 + 96, v12);
      *(_QWORD *)(v2 + 96) = v13;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v21 == (char *)v2 )
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

// Line 188: range 0000000014405DFC-00000000144063C3
int32_t __cdecl GCGDeckExcelConfigMgr::rewriteDeckCardConfig(
        GCGDeckExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGGameExcelConfigMgr *p_gcg_game_config_mgr; // rcx
  __int64 v6; // rsi
  char *v7; // rsi
  char *v8; // rsi
  __gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> >::reference v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  std::map<data::GCGTagType,unsigned int> *v13; // rax
  std::map<data::GCGTagType,unsigned int>::mapped_type *v14; // rax
  int32_t result; // eax
  uint32_t limit; // [rsp+14h] [rbp-10Ch]
  data::GCGDeckCardExcelConfigMap *__for_range; // [rsp+18h] [rbp-108h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-100h]
  const std::map<unsigned int,std::map<data::GCGTagType,unsigned int>>::key_type *card_id; // [rsp+28h] [rbp-F8h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGDeckCardExcelConfig> >::type *config; // [rsp+30h] [rbp-F0h]
  std::vector<data::GCGTagType> *__for_range_0; // [rsp+38h] [rbp-E8h]
  char v23[224]; // [rsp+40h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 9 <unknown> 48 4 7 tag:202 64 8 15 __for_begin:190 96 8 13 __for_end:190 128 8 15 __for_b"
                        "egin:202 160 8 13 __for_end:202";
  *(_QWORD *)(v2 + 16) = GCGDeckExcelConfigMgr::rewriteDeckCardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  limit = ConstValueExcelConfigMgr::getGCGCardLimit(&txt_config_mgr->const_value_config_mgr);
  __for_range = &this->gcg_deck_card_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false> *const)(v2 + 64));
    card_id = std::get<0ul,unsigned int const,data::GCGDeckCardExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGDeckCardExcelConfig>(__in);
    p_gcg_game_config_mgr = &txt_config_mgr->gcg_game_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_id);
    }
    if ( data::GCGGameExcelConfigMgrBase::findGCGCharExcelConfig(p_gcg_game_config_mgr, *card_id) )
    {
      v6 = (((_BYTE)config + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->limit >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&config->limit, v6);
      }
      config->limit = 1;
    }
    else
    {
      v6 = (((_BYTE)config + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->limit >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&config->limit, v6);
      }
      config->limit = limit;
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 32, v6);
    *(_DWORD *)(v2 + 32) = 0;
    v7 = (char *)(v2 + 32);
    common::tools::MiscUtils::removeValues<std::vector<data::GCGTagType>,data::GCGTagType>(
      &config->related_character_tag_list,
      (const data::GCGTagType *)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    __for_range_0 = &config->related_character_tag_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v7);
    *(std::vector<data::GCGTagType>::iterator *)(v2 + 128) = std::vector<data::GCGTagType>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v7);
    *(std::vector<data::GCGTagType>::iterator *)(v2 + 160) = std::vector<data::GCGTagType>::end(__for_range_0);
    while ( 1 )
    {
      v8 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<data::GCGTagType *,std::vector<data::GCGTagType>>(
              (const __gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v9 = __gnu_cxx::__normal_iterator<data::GCGTagType *,std::vector<data::GCGTagType>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> > *const)(v2 + 128));
      v10 = (int *)v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = *v10;
      v12 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v8) = v12 != 0;
        __asan_report_store4(v2 + 48, v8);
      }
      *(_DWORD *)(v2 + 48) = v11;
      v13 = std::map<unsigned int,std::map<data::GCGTagType,unsigned int>>::operator[](
              &this->card_related_tag_map_,
              card_id);
      v14 = std::map<data::GCGTagType,unsigned int>::operator[](
              v13,
              (const std::map<data::GCGTagType,unsigned int>::key_type *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      ++*v14;
      __gnu_cxx::__normal_iterator<data::GCGTagType *,std::vector<data::GCGTagType>>::operator++((__gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = 0;
  if ( v23 == (char *)v2 )
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

// Line 211: range 00000000144063C4-0000000014406CB8
int32_t __cdecl GCGDeckExcelConfigMgr::rewriteProficiencyRewardConfig(
        GCGDeckExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGGameExcelConfigMgr *p_gcg_game_config_mgr; // rcx
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1B4h]
  data::GCGProficiencyRewardExcelConfigMap *__for_range; // [rsp+20h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGProficiencyRewardExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-1A8h]
  const unsigned int *card_id; // [rsp+30h] [rbp-1A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGProficiencyRewardExcelConfig> >::type *config; // [rsp+38h] [rbp-198h]
  std::vector<data::GCGProficiencyReward> *__for_range_0; // [rsp+40h] [rbp-190h]
  data::GCGProficiencyReward *proficiency_reward; // [rsp+48h] [rbp-188h]
  char v24[384]; // [rsp+50h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:213 64 8 13 __for_end:213 96 8 15 __for_begin:220 128 8 13 __for_end:220 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGDeckExcelConfigMgr::rewriteProficiencyRewardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->gcg_proficiency_reward_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGProficiencyRewardExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGProficiencyRewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGProficiencyRewardExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGProficiencyRewardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGProficiencyRewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGProficiencyRewardExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGProficiencyRewardExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGProficiencyRewardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGProficiencyRewardExcelConfig>,false,false> *const)(v2 + 32));
    card_id = std::get<0ul,unsigned int const,data::GCGProficiencyRewardExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGProficiencyRewardExcelConfig>(__in);
    p_gcg_game_config_mgr = &txt_config_mgr->gcg_game_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_id);
    }
    v6 = *card_id;
    if ( !data::GCGGameExcelConfigMgrBase::findGCGCharExcelConfig(p_gcg_game_config_mgr, v6) )
    {
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
        "rewriteProficiencyRewardConfig",
        217);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v7, (const char (*)[41])byte_1AD6AB00);
      v6 = (__int64)card_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, card_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &config->proficiency_reward_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v6);
    *(std::vector<data::GCGProficiencyReward>::iterator *)(v2 + 96) = std::vector<data::GCGProficiencyReward>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v6);
    *(std::vector<data::GCGProficiencyReward>::iterator *)(v2 + 128) = std::vector<data::GCGProficiencyReward>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::GCGProficiencyReward *,std::vector<data::GCGProficiencyReward>>(
              (const __gnu_cxx::__normal_iterator<data::GCGProficiencyReward*,std::vector<data::GCGProficiencyReward> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<data::GCGProficiencyReward*,std::vector<data::GCGProficiencyReward> > *)(v2 + 128)) )
    {
      proficiency_reward = __gnu_cxx::__normal_iterator<data::GCGProficiencyReward *,std::vector<data::GCGProficiencyReward>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGProficiencyReward*,std::vector<data::GCGProficiencyReward> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&proficiency_reward->proficiency >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&proficiency_reward->proficiency >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&proficiency_reward->proficiency);
      }
      if ( proficiency_reward->proficiency )
      {
        if ( *(_BYTE *)(((unsigned __int64)&proficiency_reward->reward_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)proficiency_reward + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proficiency_reward->reward_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&proficiency_reward->reward_id);
        }
        if ( !proficiency_reward->reward_id )
        {
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 224, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 224),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
            "rewriteProficiencyRewardConfig",
            229);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 224),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v9, (const char (*)[47])byte_1AD6AB60);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, card_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( *(_BYTE *)(((unsigned __int64)&proficiency_reward->reward_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)proficiency_reward + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proficiency_reward->reward_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&proficiency_reward->reward_id);
        }
        if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                txt_config_mgr,
                                proficiency_reward->reward_id,
                                ITEM_LIMIT_GCG_PROFICIENCY_REWARD) != 1 )
        {
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
            "rewriteProficiencyRewardConfig",
            234);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v11, (const char (*)[57])byte_1AD6ABC0);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, card_id);
          v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])byte_1AD6AC20);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &proficiency_reward->reward_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      __gnu_cxx::__normal_iterator<data::GCGProficiencyReward *,std::vector<data::GCGProficiencyReward>>::operator++((__gnu_cxx::__normal_iterator<data::GCGProficiencyReward*,std::vector<data::GCGProficiencyReward> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    common::tools::MiscUtils::removeEmptyElement<data::GCGProficiencyReward,unsigned int data::GCGProficiencyReward::*>(
      &config->proficiency_reward_list,
      (unsigned int *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGProficiencyRewardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGProficiencyRewardExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v24 == (char *)v2 )
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

// Line 245: range 0000000014406CBA-00000000144073B1
int32_t __cdecl GCGDeckExcelConfigMgr::checkDeckStorageConfig(
        const GCGDeckExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GCGDeckUnlockCondition *p_unlock_cond; // rax
  __int64 v6; // rsi
  data::GCGDeckUnlockCondition unlock_cond; // eax
  uint32_t unlock_param; // ecx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-174h]
  data::GCGDeckStorageExcelConfigMap *__for_range; // [rsp+20h] [rbp-170h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckStorageExcelConfig>,false,false>::reference v24; // [rsp+28h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGDeckStorageExcelConfig> >::type *id; // [rsp+30h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckStorageExcelConfig> >::type *config; // [rsp+38h] [rbp-158h]
  char v27[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 9 level:257 64 8 15 __for_begin:247 96 8 13 __for_end:247 128 8 9 <unknown> 160 32 9 <unk"
                        "nown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGDeckExcelConfigMgr::checkDeckStorageConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->gcg_deck_storage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckStorageExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGDeckStorageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckStorageExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGDeckStorageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGDeckStorageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckStorageExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckStorageExcelConfig>,false> *)(v2 + 96)) )
  {
    v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckStorageExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckStorageExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::GCGDeckStorageExcelConfig>(v24);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckStorageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGDeckStorageExcelConfig>(v24);
    p_unlock_cond = &config->unlock_cond;
    v6 = (((_BYTE)config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_unlock_cond >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_unlock_cond & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_unlock_cond >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_unlock_cond);
    }
    unlock_cond = config->unlock_cond;
    if ( unlock_cond )
    {
      if ( unlock_cond == DUEL_LEVEL )
      {
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->unlock_param);
        }
        unlock_param = config->unlock_param;
        v9 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v9 != 0 && v9 <= 3 )
        {
          LOBYTE(v6) = v9 != 0;
          __asan_report_store4(v2 + 48, v6);
        }
        *(_DWORD *)(v2 + 48) = unlock_param;
        if ( !data::GCGGrowthExcelConfigMgrBase::findGCGLevelExcelConfig(
                &txt_config_mgr->gcg_growth_config_mgr,
                *(unsigned int *)(v2 + 48)) )
        {
          *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 160, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 160),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
            "checkDeckStorageConfig",
            260);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 160),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v10, (const char (*)[48])byte_1AD6AD20);
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v2 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
          *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
          "checkDeckStorageConfig",
          267);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v14,
                (const char (*)[22])"unsupport cond type. ");
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        v16 = (((_BYTE)config + 12) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->unlock_cond);
        }
        v17 = (__int64)data::enumValToStr(config->unlock_cond, v16);
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          v17 = __asan_report_store8(v2 + 128, v16);
        *(_QWORD *)(v2 + 128) = v17;
        v18 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)(v2 + 128));
        v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckStorageExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckStorageExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 277: range 00000000144073B2-0000000014407945
int32_t __cdecl GCGDeckExcelConfigMgr::checkDeckBackConfig(
        const GCGDeckExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  uint32_t *p_item_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-12Ch]
  data::GCGDeckBackExcelConfigMap *__for_range; // [rsp+18h] [rbp-128h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckBackExcelConfig>,false,false>::reference v16; // [rsp+20h] [rbp-120h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGDeckBackExcelConfig> >::type *id; // [rsp+28h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckBackExcelConfig> >::type *config; // [rsp+30h] [rbp-110h]
  const data::MaterialExcelConfig *material_confing_ptr; // [rsp+38h] [rbp-108h]
  char v20[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:279 64 8 13 __for_end:279 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGDeckExcelConfigMgr::checkDeckBackConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->gcg_deck_back_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckBackExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGDeckBackExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckBackExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGDeckBackExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGDeckBackExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckBackExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckBackExcelConfig>,false> *)(v2 + 64)) )
  {
    v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckBackExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckBackExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGDeckBackExcelConfig>(v16);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckBackExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGDeckBackExcelConfig>(v16);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    p_item_id = &config->item_id;
    if ( *(_BYTE *)(((unsigned __int64)p_item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_item_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_item_id);
    }
    material_confing_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                             p_material_config_mgr,
                             config->item_id);
    if ( material_confing_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&material_confing_ptr->material_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)material_confing_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_confing_ptr->material_type >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&material_confing_ptr->material_type);
      }
      if ( material_confing_ptr->material_type != MATERIAL_GCG_CARD_BACK )
      {
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
          "checkDeckBackConfig",
          290);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v11, (const char (*)[53])byte_1AD6AF20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
        "checkDeckBackConfig",
        284);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v7, (const char (*)[29])byte_1AD6AEA0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->item_id);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckBackExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckBackExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 300: range 0000000014407946-0000000014407ED9
int32_t __cdecl GCGDeckExcelConfigMgr::checkDeckFieldConfig(
        const GCGDeckExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  uint32_t *p_item_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-12Ch]
  data::GCGDeckFieldExcelConfigMap *__for_range; // [rsp+18h] [rbp-128h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckFieldExcelConfig>,false,false>::reference v16; // [rsp+20h] [rbp-120h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGDeckFieldExcelConfig> >::type *id; // [rsp+28h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckFieldExcelConfig> >::type *config; // [rsp+30h] [rbp-110h]
  const data::MaterialExcelConfig *material_confing_ptr; // [rsp+38h] [rbp-108h]
  char v20[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:302 64 8 13 __for_end:302 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGDeckExcelConfigMgr::checkDeckFieldConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->gcg_deck_field_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckFieldExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGDeckFieldExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckFieldExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGDeckFieldExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGDeckFieldExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckFieldExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckFieldExcelConfig>,false> *)(v2 + 64)) )
  {
    v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckFieldExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckFieldExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGDeckFieldExcelConfig>(v16);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckFieldExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGDeckFieldExcelConfig>(v16);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    p_item_id = &config->item_id;
    if ( *(_BYTE *)(((unsigned __int64)p_item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_item_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_item_id);
    }
    material_confing_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                             p_material_config_mgr,
                             config->item_id);
    if ( material_confing_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&material_confing_ptr->material_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)material_confing_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_confing_ptr->material_type >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&material_confing_ptr->material_type);
      }
      if ( material_confing_ptr->material_type != MATERIAL_GCG_FIELD )
      {
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
          "checkDeckFieldConfig",
          313);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v11, (const char (*)[53])byte_1AD6B020);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
        "checkDeckFieldConfig",
        307);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v7, (const char (*)[29])byte_1AD6AEA0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->item_id);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckFieldExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckFieldExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 322: range 0000000014407EDA-000000001440947A
int32_t __cdecl GCGDeckExcelConfigMgr::checkDeckCardFaceConfig(
        const GCGDeckExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  GCGGameExcelConfigMgr *p_gcg_game_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  char *v9; // rsi
  MaterialExcelConfigMgr *p_material_config_mgr; // rdi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int v15; // eax
  uint32_t v16; // ecx
  __int64 v17; // rsi
  data::GCGCardFaceType card_face_type; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  const char *v25; // rsi
  common::milog::MiLogStream *v26; // rcx
  data::GCGCardFaceType v27; // edi
  char v28; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  const char *v32; // rsi
  common::milog::MiLogStream *v33; // rcx
  int v34; // edi
  char v35; // al
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  char *v38; // rsi
  unsigned int *v39; // rax
  int *v40; // rdx
  int v41; // ecx
  char v42; // al
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  uint32_t item_id; // ecx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  data::ShopPrecondition precondition; // ecx
  uint32_t precondition_param; // ecx
  char v58; // al
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  int32_t ret; // [rsp+14h] [rbp-33Ch]
  const data::ShopGoodsExcelConfig *temp_goods_config_ptr; // [rsp+18h] [rbp-338h]
  std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>> *__for_range; // [rsp+20h] [rbp-330h]
  data::GCGCardFaceExcelConfigMap *__for_range_0; // [rsp+28h] [rbp-328h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false,false>::reference v71; // [rsp+30h] [rbp-320h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGCardFaceExcelConfig> >::type *id; // [rsp+38h] [rbp-318h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGCardFaceExcelConfig> >::type *config; // [rsp+40h] [rbp-310h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-308h]
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+50h] [rbp-300h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int> >,false,false>::reference v76; // [rsp+58h] [rbp-2F8h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int> > >::type *card_id; // [rsp+60h] [rbp-2F0h]
  char v78[736]; // [rsp+70h] [rbp-2E0h] BYREF

  v2 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 48 4 11 card_id:335 64 4 13 card_face:336 80 4 9 <unknown> 96 4 9 <unknown> 112 4 12 goods_id"
                        ":355 128 8 15 __for_begin:324 160 8 13 __for_end:324 192 8 15 __for_begin:333 224 8 13 __for_end"
                        ":333 256 8 15 __for_begin:355 288 8 13 __for_end:355 320 32 9 <unknown> 384 32 9 <unknown> 448 3"
                        "2 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGDeckExcelConfigMgr::checkDeckCardFaceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -202116109;
  ret = 0;
  __for_range = &this->card_face_config_index_map;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::const_iterator *)(v2 + 160) = std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 160);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int> >,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int> >,false> *)(v2 + 160)) )
      break;
    v76 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int> >,false,false> *const)(v2 + 128));
    card_id = std::get<0ul,unsigned int const,std::map<data::GCGCardFaceType,unsigned int>>(v76);
    std::get<1ul,unsigned int const,std::map<data::GCGCardFaceType,unsigned int>>(v76);
    p_gcg_game_config_mgr = &txt_config_mgr->gcg_game_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_id);
    }
    if ( !GCGGameExcelConfigMgr::findCardConfig(p_gcg_game_config_mgr, *card_id) )
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
        "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
        "checkDeckCardFaceConfig",
        328);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v7, (const char (*)[41])byte_1AD6B240);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, card_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::GCGCardFaceType,unsigned int> >,false,false> *const)(v2 + 128));
  }
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->gcg_card_face_excel_config_map;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v5);
  *(std::unordered_map<unsigned int,data::GCGCardFaceExcelConfig>::const_iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::GCGCardFaceExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v5);
  *(std::unordered_map<unsigned int,data::GCGCardFaceExcelConfig>::const_iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::GCGCardFaceExcelConfig>::end(__for_range_0);
  while ( 1 )
  {
    v9 = (char *)(v2 + 224);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false> *)(v2 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false> *)(v2 + 224)) )
      break;
    v71 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false,false> *const)(v2 + 192));
    id = std::get<0ul,unsigned int const,data::GCGCardFaceExcelConfig>(v71);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGCardFaceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGCardFaceExcelConfig>(v71);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v9);
    *(_DWORD *)(v2 + 48) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64, v9);
    *(_DWORD *)(v2 + 64) = 0;
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->item_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->item_id >> 3) + 0x7FFF8000) )
    {
      p_material_config_mgr = (MaterialExcelConfigMgr *)&config->item_id;
      __asan_report_load4(&config->item_id);
    }
    if ( MaterialExcelConfigMgr::findGCGCardFaceByMaterial(
           p_material_config_mgr,
           config->item_id,
           (uint32_t *)(v2 + 48),
           (data::GCGCardFaceType *)(v2 + 64)) )
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
        "checkDeckCardFaceConfig",
        340);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v11, (const char (*)[50])byte_1AD6B2A0);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->item_id);
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      v15 = *(unsigned __int8 *)(((unsigned __int64)&config->card_id >> 3) + 0x7FFF8000);
      if ( (_BYTE)v15 != 0 && (char)v15 <= 3 )
        __asan_report_load4(&config->card_id);
      v16 = config->card_id;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      if ( v16 != *(_DWORD *)(v2 + 48) )
        goto LABEL_43;
      v17 = (((_BYTE)config + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->card_face_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->card_face_type >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->card_face_type);
      }
      card_face_type = config->card_face_type;
      v19 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
      LOBYTE(v17) = v19 != 0;
      if ( v19 != 0 && v19 <= 3 )
        __asan_report_load4(v2 + 64);
      if ( card_face_type == *(_DWORD *)(v2 + 64) )
      {
        temp_goods_config_ptr = 0LL;
        __for_range_1 = &config->shop_good_id_list;
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 256, v17);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 256) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 288, v17);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 288) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v38 = (char *)(v2 + 288);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 256),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 288)) )
            break;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
          v39 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 256));
          v40 = (int *)v39;
          if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v39);
          }
          v41 = *v40;
          v42 = *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000);
          if ( v42 != 0 && v42 <= 3 )
          {
            LOBYTE(v38) = v42 != 0;
            __asan_report_store4(v2 + 112, v38);
          }
          *(_DWORD *)(v2 + 112) = v41;
          goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
                               &txt_config_mgr->shop_config_mgr,
                               *(unsigned int *)(v2 + 112));
          if ( goods_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&goods_config_ptr->item_id);
            }
            item_id = goods_config_ptr->item_id;
            if ( *(_BYTE *)(((unsigned __int64)&config->item_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->item_id >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->item_id);
            }
            if ( item_id == config->item_id )
            {
              if ( temp_goods_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&temp_goods_config_ptr->precondition >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)temp_goods_config_ptr - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&temp_goods_config_ptr->precondition >> 3)
                                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4(&temp_goods_config_ptr->precondition);
                }
                precondition = temp_goods_config_ptr->precondition;
                if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->precondition >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)goods_config_ptr - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->precondition >> 3)
                                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load4(&goods_config_ptr->precondition);
                }
                if ( precondition != goods_config_ptr->precondition )
                  goto LABEL_89;
                if ( *(_BYTE *)(((unsigned __int64)&temp_goods_config_ptr->precondition_param >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&temp_goods_config_ptr->precondition_param >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&temp_goods_config_ptr->precondition_param);
                }
                precondition_param = temp_goods_config_ptr->precondition_param;
                if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->precondition_param >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->precondition_param >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&goods_config_ptr->precondition_param);
                }
                if ( precondition_param == goods_config_ptr->precondition_param
                  && !std::operator!=<std::string,std::allocator<std::string>>(
                        &temp_goods_config_ptr->precondition_param_list,
                        &goods_config_ptr->precondition_param_list) )
                {
                  v58 = 0;
                }
                else
                {
LABEL_89:
                  v58 = 1;
                }
                if ( v58 )
                {
                  ret = -1;
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
                    "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
                    "checkDeckCardFaceConfig",
                    379);
                  v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 640),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v60 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                          v59,
                          (const char (*)[53])byte_1AD6B4C0);
                  v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v60,
                          (const unsigned int *)(v2 + 112));
                  v62 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v61,
                          (const char (*)[12])byte_1AD6B420);
                  v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &config->item_id);
                  v64 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v63, (const char (*)[6])" ID: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
                  *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
                }
              }
              else
              {
                temp_goods_config_ptr = goods_config_ptr;
              }
            }
            else
            {
              ret = -1;
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
                "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
                "checkDeckCardFaceConfig",
                367);
              v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 576),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v51 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      v50,
                      (const char (*)[55])byte_1AD6B460);
              v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v51,
                      (const unsigned int *)(v2 + 112));
              v53 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v52,
                      (const char (*)[12])byte_1AD6B420);
              v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &config->item_id);
              v55 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v54, (const char (*)[6])" ID: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
              *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
          {
            ret = -1;
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
              "checkDeckCardFaceConfig",
              361);
            v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v44 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v43,
                    (const char (*)[36])byte_1AD6B3C0);
            v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v44,
                    (const unsigned int *)(v2 + 112));
            v46 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v45,
                    (const char (*)[12])byte_1AD6B420);
            v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &config->item_id);
            v48 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v47, (const char (*)[6])" ID: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 256));
        }
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
LABEL_43:
        ret = -1;
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
          "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
          "checkDeckCardFaceConfig",
          346);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v20, (const char (*)[50])byte_1AD6B2A0);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &config->item_id);
        v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])byte_1AD6B300);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &config->card_id);
        v25 = byte_1AD6B340;
        v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])byte_1AD6B340);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)&config->card_face_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->card_face_type >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->card_face_type);
        }
        v27 = config->card_face_type;
        v28 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
        if ( v28 != 0 && v28 <= 3 )
        {
          v27 = v2 + 80;
          LOBYTE(v25) = v28 != 0;
          __asan_report_store4(v2 + 80, v25);
        }
        *(_DWORD *)(v2 + 80) = v27;
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v2 + 80));
        v30 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v29, (const char (*)[26])byte_1AD6B380);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v2 + 48));
        v32 = byte_1AD6B340;
        v33 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])byte_1AD6B340);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 64);
        v34 = *(_DWORD *)(v2 + 64);
        v35 = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
        if ( v35 != 0 && v35 <= 3 )
        {
          v34 = v2 + 96;
          LOBYTE(v32) = v35 != 0;
          __asan_report_store4(v2 + 96, v32);
        }
        *(_DWORD *)(v2 + 96) = v34;
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v33,
                (const unsigned int *)(v2 + 96));
        v37 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v36, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, id);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardFaceExcelConfig>,false,false> *const)(v2 + 192));
  }
  if ( v78 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return ret;
};

// Line 388: range 000000001440947C-0000000014409E4A
int32_t __cdecl GCGDeckExcelConfigMgr::checkDeckCardConfig(
        const GCGDeckExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGGameExcelConfigMgr *p_gcg_game_config_mgr; // rcx
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  unsigned int v15; // r14d
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+10h] [rbp-1C0h]
  uint32_t item_id; // [rsp+14h] [rbp-1BCh]
  data::GCGDeckCardExcelConfigMap *__for_range; // [rsp+18h] [rbp-1B8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false>::reference v25; // [rsp+20h] [rbp-1B0h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGDeckCardExcelConfig> >::type *card_id; // [rsp+28h] [rbp-1A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckCardExcelConfig> >::type *config; // [rsp+30h] [rbp-1A0h]
  const data::GCGCardConfig *card_config_ptr; // [rsp+38h] [rbp-198h]
  char v29[400]; // [rsp+40h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:390 64 8 13 __for_end:390 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGDeckExcelConfigMgr::checkDeckCardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->gcg_deck_card_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false> *)(v2 + 64)) )
  {
    v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false> *const)(v2 + 32));
    card_id = std::get<0ul,unsigned int const,data::GCGDeckCardExcelConfig>(v25);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckCardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGDeckCardExcelConfig>(v25);
    p_gcg_game_config_mgr = &txt_config_mgr->gcg_game_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_id);
    }
    v6 = *card_id;
    card_config_ptr = GCGGameExcelConfigMgr::findCardConfig(p_gcg_game_config_mgr, v6);
    if ( card_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&card_config_ptr->is_can_obtain >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&card_config_ptr->is_can_obtain, v6, &card_config_ptr->is_can_obtain);
      if ( !card_config_ptr->is_can_obtain )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
          "checkDeckCardConfig",
          402);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v9, (const char (*)[43])byte_1AD6B620);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, card_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->related_character_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->related_character_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->related_character_id);
        }
        if ( !config->related_character_id
          || data::GCGGameExcelConfigMgrBase::findGCGCharExcelConfig(
               &txt_config_mgr->gcg_game_config_mgr,
               config->related_character_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->shop_good_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->shop_good_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->shop_good_id);
          }
          if ( config->shop_good_id )
          {
            item_id = ShopExcelConfigMgr::getItemIdByGoodsId(&txt_config_mgr->shop_config_mgr, config->shop_good_id);
            if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(card_id);
            }
            v15 = *card_id;
            if ( v15 != MaterialExcelConfigMgr::findGCGCardIdByMaterial(&txt_config_mgr->material_config_mgr, item_id) )
            {
              ret = -1;
              *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 288, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 288),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
                "checkDeckCardConfig",
                420);
              v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 288),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v17 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                      v16,
                      (const char (*)[65])byte_1AD6B720);
              v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->shop_good_id);
              v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])byte_1AD6B6E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, card_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
              *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
        }
        else
        {
          ret = -1;
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 224, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 224),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
            "checkDeckCardConfig",
            410);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v11, (const char (*)[51])byte_1AD6B680);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  &config->related_character_id);
          v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])byte_1AD6B6E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, card_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
    }
    else
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGDeckExcelConfig.cpp",
        "checkDeckCardConfig",
        396);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AD6B5E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, card_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v29 == (char *)v2 )
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
