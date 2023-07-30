// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WatcherExcelConfig.cpp

// Line 21: range 000000000EFBEB9C-000000000EFBEC0E
int32_t __cdecl WatcherExcelConfigMgr::rewriteConfig(WatcherExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  if ( WatcherExcelConfigMgr::rewriteWatcherData(this, txt_config_mgr)
    || WatcherExcelConfigMgr::rewriteGlobalWatcherData(this, txt_config_mgr)
    || WatcherExcelConfigMgr::rewritePushTipsData(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 32: range 000000000EFBEC10-000000000EFBEC82
int32_t __cdecl WatcherExcelConfigMgr::checkConfig(
        WatcherExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  if ( WatcherExcelConfigMgr::checkWatcherData(this, txt_config_mgr)
    || WatcherExcelConfigMgr::checkGlobalWatcherData(this, txt_config_mgr)
    || WatcherExcelConfigMgr::checkPushTipsData(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 43: range 000000000EFBEC84-000000000EFBF1FB
__int64 __fastcall WatcherExcelConfigMgr::addWatcherConfig(
        WatcherExcelConfigMgr *const this,
        uint32_t watcher_id,
        data::WatcherConfig *watcher_config_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  char *v9; // rsi
  data::WatcherConfig **v10; // r8
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 v14; // rax
  char v15; // dl
  _BOOL8 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  char v20[320]; // [rsp+20h] [rbp-140h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 watcher_id:42 64 8 21 watcher_config_ptr:42 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WatcherExcelConfigMgr::addWatcherConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = watcher_id;
  *(_QWORD *)(v3 + 64) = watcher_config_ptr;
  if ( *(_QWORD *)(v3 + 64) )
  {
    v9 = (char *)(v3 + 48);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WatcherConfig *>,unsigned int>(
           &this->disused_watcher_config_map,
           (const unsigned int *)(v3 + 48))
      || (v9 = (char *)(v3 + 48),
          common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WatcherConfig *>,unsigned int>(
            &this->watcher_config_map,
            (const unsigned int *)(v3 + 48))) )
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
        "./src/txt_data_manual/WatcherExcelConfig.cpp",
        "addWatcherConfig",
        51);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v12,
              (const char (*)[22])"duplicate watcher_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v14 = *(_QWORD *)(v3 + 64);
      v15 = *(_BYTE *)(((unsigned __int64)(v14 + 104) >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v15 != 0;
      v16 = v15 < 0;
      if ( v16 )
        v14 = __asan_report_load1(v14 + 104, v9, v16);
      if ( *(_BYTE *)(v14 + 104) )
      {
        std::unordered_map<unsigned int,data::WatcherConfig *>::emplace<unsigned int &,data::WatcherConfig *&>(
          &this->disused_watcher_config_map,
          (unsigned int *)(v3 + 48),
          (data::WatcherConfig **)(v3 + 64),
          (unsigned int *)&this->disused_watcher_config_map,
          v10);
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/WatcherExcelConfig.cpp",
          "addWatcherConfig",
          57);
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[12])"watcher_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" is disused");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      }
      else
      {
        std::unordered_map<unsigned int,data::WatcherConfig *>::emplace<unsigned int &,data::WatcherConfig *&>(
          &this->watcher_config_map,
          (unsigned int *)(v3 + 48),
          (data::WatcherConfig **)(v3 + 64),
          (unsigned int *)&this->watcher_config_map,
          v10);
      }
      result = 0LL;
    }
  }
  else
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
      "./src/txt_data_manual/WatcherExcelConfig.cpp",
      "addWatcherConfig",
      46);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           v6,
           (const char (*)[43])"watcher_config_ptr is nullptr, watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    result = 0xFFFFFFFFLL;
  }
  if ( v20 == (char *)v3 )
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

// Line 68: range 000000000EFBF1FC-000000000EFBF3D8
const WatcherConfig *__fastcall WatcherExcelConfigMgr::findWatcherConfig(
        const WatcherExcelConfigMgr *const this,
        __int64 watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::WatcherConfig*> *p_watcher_config_map; // rdx
  std::unordered_map<unsigned int,data::WatcherConfig*> *v6; // rdx
  bool v7; // al
  const WatcherConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WatcherConfig*>,false,false>::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 watcher_id:67 64 8 7 iter:69 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WatcherExcelConfigMgr::findWatcherConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = watcher_id;
  p_watcher_config_map = &this->watcher_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, watcher_id);
  *(std::unordered_map<unsigned int,data::WatcherConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WatcherConfig *>::find(
                                                                                          p_watcher_config_map,
                                                                                          (const std::unordered_map<unsigned int,data::WatcherConfig*>::key_type *)(v2 + 48));
  v6 = &this->watcher_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::WatcherConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::WatcherConfig *>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::WatcherConfig *>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WatcherConfig *>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WatcherConfig*>,false,false> *const)(v2 + 64));
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

// Line 82: range 000000000EFBF3DA-000000000EFBF6CC
const WatcherConfig *__fastcall WatcherExcelConfigMgr::findWatcherConfigIncludingDisused(
        const WatcherExcelConfigMgr *const this,
        __int64 watcher_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,data::WatcherConfig*> *p_watcher_config_map; // rdx
  std::unordered_map<unsigned int,data::WatcherConfig*> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WatcherConfig*>,false,false>::pointer v8; // rax
  const WatcherConfig *result; // rax
  std::unordered_map<unsigned int,data::WatcherConfig*> *p_disused_watcher_config_map; // rdx
  std::unordered_map<unsigned int,data::WatcherConfig*> *v11; // rdx
  bool v12; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WatcherConfig*>,false,false>::pointer v13; // rax
  char v14[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 watcher_id:81 64 8 7 iter:83 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WatcherExcelConfigMgr::findWatcherConfigIncludingDisused;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  *(_DWORD *)(v2 + 48) = watcher_id;
  p_watcher_config_map = &this->watcher_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, watcher_id);
  *(std::unordered_map<unsigned int,data::WatcherConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WatcherConfig *>::find(
                                                                                          p_watcher_config_map,
                                                                                          (const std::unordered_map<unsigned int,data::WatcherConfig*>::key_type *)(v2 + 48));
  v6 = &this->watcher_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::WatcherConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::WatcherConfig *>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::WatcherConfig *>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WatcherConfig *>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WatcherConfig*>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v8->second);
    result = v8->second;
  }
  else
  {
    p_disused_watcher_config_map = &this->disused_watcher_config_map;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v2 + 96);
    *(std::unordered_map<unsigned int,data::WatcherConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WatcherConfig *>::find(
                                                                                            p_disused_watcher_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::WatcherConfig*>::key_type *)(v2 + 48));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v11 = &this->disused_watcher_config_map;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v2 + 48);
    *(std::unordered_map<unsigned int,data::WatcherConfig*>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::WatcherConfig *>::end(v11);
    v12 = std::__detail::operator!=<std::pair<unsigned int const,data::WatcherConfig *>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WatcherConfig *>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WatcherConfig*>,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v13->second);
      result = v13->second;
    }
    else
    {
      result = 0LL;
    }
  }
  if ( v14 == (char *)v2 )
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

// Line 97: range 000000000EFBF6CE-000000000EFBF79F
bool __fastcall WatcherExcelConfigMgr::isWatcherDisused(const WatcherExcelConfigMgr *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 watcher_id:96";
  *(_QWORD *)(v2 + 16) = WatcherExcelConfigMgr::isWatcherDisused;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = watcher_id;
  result = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WatcherConfig *> const,unsigned int>(
             &this->disused_watcher_config_map,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 103: range 000000000EFBF7A0-000000000EFBF7B2
int32_t __cdecl WatcherExcelConfigMgr::rewriteWatcherData(
        WatcherExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 113: range 000000000EFBF7B4-000000000EFBFCEF
int32_t __cdecl WatcherExcelConfigMgr::checkWatcherData(
        WatcherExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,std::pair<unsigned int const,data::WatcherConfig*> >::type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-13Ch]
  std::unordered_map<unsigned int,data::WatcherConfig*> *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WatcherConfig*>,false,false>::reference __in; // [rsp+28h] [rbp-128h]
  const unsigned int *watcher_id; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,data::WatcherConfig*> >::type *watcher_config_ptr; // [rsp+38h] [rbp-118h]
  char v18[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:117 64 8 13 __for_end:117 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WatcherExcelConfigMgr::checkWatcherData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  ret = 0;
  __for_range = &this->watcher_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WatcherConfig*>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::WatcherConfig *>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WatcherConfig*>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::WatcherConfig *>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::WatcherConfig *>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_24;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WatcherConfig *>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WatcherConfig*>,false,false> *const)(v3 + 32));
    watcher_id = std::get<0ul,unsigned int const,data::WatcherConfig *>(__in);
    v6 = std::get<1ul,unsigned int const,data::WatcherConfig *>(__in);
    watcher_config_ptr = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    if ( !*watcher_config_ptr )
      break;
    if ( *(_BYTE *)(((unsigned __int64)watcher_config_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(watcher_config_ptr);
    if ( WatcherExcelConfigMgr::rewriteAndCheckWatcherParam(this, (TxtConfigMgr *)txt_config_mgr, *watcher_config_ptr) )
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WatcherExcelConfig.cpp",
        "checkWatcherData",
        126);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              v10,
              (const char (*)[46])"rewriteAndCheckWatcherParam fail, watcher_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, watcher_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WatcherConfig *>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WatcherConfig*>,false,false> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
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
    "./src/txt_data_manual/WatcherExcelConfig.cpp",
    "checkWatcherData",
    121);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         v7,
         (const char (*)[43])"watcher_config_ptr == nullptr, watcher_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, watcher_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_24:
  if ( v9 == 1 )
    v2 = ret;
  result = v2;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 135: range 000000000EFBFCF0-000000000EFBFEFA
int32_t __cdecl WatcherExcelConfigMgr::rewritePushTipsData(
        WatcherExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int> *v5; // rdx
  int32_t result; // eax
  data::PushTipsConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  const std::vector<unsigned int>::value_type *push_tips_id; // [rsp+20h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,data::PushTipsConfig> >::type *push_tips_config; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsConfig>,false>::__node_type *)"2 32 8 15 __for_begin:137 64 8 13 __for_end:137";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsConfig>,false>::__node_type *)WatcherExcelConfigMgr::rewritePushTipsData;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->push_tips_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::PushTipsConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::PushTipsConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::PushTipsConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsConfig>,false,false>::operator*(v2 + 4);
    push_tips_id = std::get<0ul,unsigned int const,data::PushTipsConfig>(__in);
    push_tips_config = std::get<1ul,unsigned int const,data::PushTipsConfig>(__in);
    v5 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->watcher_push_tips_map,
           &push_tips_config->watcher_id);
    std::vector<unsigned int>::push_back(v5, push_tips_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 146: range 000000000EFBFEFC-000000000EFC0D62
int32_t __cdecl WatcherExcelConfigMgr::checkPushTipsData(
        const WatcherExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  data::PushTipsConfigMap *__for_range; // [rsp+10h] [rbp-270h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PushTipsConfig>,false,false>::reference v23; // [rsp+18h] [rbp-268h]
  std::tuple_element<0,std::pair<unsigned int const,data::PushTipsConfig> >::type *push_tips_id; // [rsp+20h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,data::PushTipsConfig> >::type *push_tips_config; // [rsp+28h] [rbp-258h]
  char v26[592]; // [rsp+30h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 15 __for_begin:148 64 8 13 __for_end:148 96 24 17 reward_id_vec:147 160 32 9 <unknown> 22"
                        "4 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WatcherExcelConfigMgr::checkPushTipsData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
  __for_range = &this->push_tips_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PushTipsConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::PushTipsConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PushTipsConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::PushTipsConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::PushTipsConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_60;
    }
    v23 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PushTipsConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PushTipsConfig>,false,false> *const)(v3 + 32));
    push_tips_id = std::get<0ul,unsigned int const,data::PushTipsConfig>(v23);
    push_tips_config = (std::tuple_element<1,const std::pair<unsigned int const,data::PushTipsConfig> >::type *)std::get<1ul,unsigned int const,data::PushTipsConfig>(v23);
    if ( *(_BYTE *)(((unsigned __int64)&push_tips_config->codex_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&push_tips_config->codex_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&push_tips_config->codex_type);
    }
    if ( push_tips_config->codex_type != CODEX_UNRECORDED && push_tips_config->codex_type != CODEX_ARANARA )
    {
      if ( *(_BYTE *)(((unsigned __int64)&push_tips_config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&push_tips_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&push_tips_config->reward_id);
      }
      if ( !push_tips_config->reward_id )
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
          "./src/txt_data_manual/WatcherExcelConfig.cpp",
          "checkPushTipsData",
          152);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v6, (const char (*)[45])byte_1A47BA00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, push_tips_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v8 = 0;
        goto LABEL_60;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&push_tips_config->watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)push_tips_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&push_tips_config->watcher_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&push_tips_config->watcher_id);
    }
    if ( !push_tips_config->watcher_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&push_tips_config->codex_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&push_tips_config->codex_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&push_tips_config->codex_type);
      }
      if ( push_tips_config->codex_type != CODEX_UNRECORDED )
      {
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
          "./src/txt_data_manual/WatcherExcelConfig.cpp",
          "checkPushTipsData",
          157);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 224),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v9, (const char (*)[49])byte_1A47BA60);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, push_tips_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v8 = 0;
        goto LABEL_60;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&push_tips_config->codex_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&push_tips_config->codex_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&push_tips_config->codex_type);
    }
    if ( push_tips_config->codex_type == CODEX_UNRECORDED )
    {
      if ( *(_BYTE *)(((unsigned __int64)&push_tips_config->watcher_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)push_tips_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&push_tips_config->watcher_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&push_tips_config->watcher_id);
      }
      if ( push_tips_config->watcher_id )
        goto LABEL_71;
      if ( *(_BYTE *)(((unsigned __int64)&push_tips_config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&push_tips_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&push_tips_config->reward_id);
      }
      if ( push_tips_config->reward_id )
      {
LABEL_71:
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
          "./src/txt_data_manual/WatcherExcelConfig.cpp",
          "checkPushTipsData",
          164);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(v11, (const char (*)[72])byte_1A47BAC0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, push_tips_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v8 = 0;
        goto LABEL_60;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&push_tips_config->codex_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&push_tips_config->codex_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&push_tips_config->codex_type);
    }
    if ( push_tips_config->codex_type == CODEX_ARANARA )
    {
      if ( *(_BYTE *)(((unsigned __int64)&push_tips_config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&push_tips_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&push_tips_config->reward_id);
      }
      if ( push_tips_config->reward_id )
      {
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
          "./src/txt_data_manual/WatcherExcelConfig.cpp",
          "checkPushTipsData",
          170);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v13, (const char (*)[63])byte_1A47BB40);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, push_tips_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v8 = 0;
        goto LABEL_60;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&push_tips_config->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&push_tips_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&push_tips_config->reward_id);
    }
    if ( push_tips_config->reward_id )
      break;
LABEL_58:
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PushTipsConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PushTipsConfig>,false,false> *const)(v3 + 32));
  }
  if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                          txt_config_mgr,
                          push_tips_config->reward_id,
                          ITEM_LIMIT_PUSH_TIPS_REWARD) == 1 )
  {
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 96), &push_tips_config->reward_id);
    goto LABEL_58;
  }
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
    "./src/txt_data_manual/WatcherExcelConfig.cpp",
    "checkPushTipsData",
    177);
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 416),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v15, (const char (*)[28])byte_1A47BBA0);
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &push_tips_config->reward_id);
  v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])byte_1A47BBE0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, push_tips_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
  *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v8 = 0;
LABEL_60:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v8 == 1 )
  {
    if ( TxtConfigMgr::checkMergeRewardIds(
           txt_config_mgr,
           (const std::vector<unsigned int> *)(v3 + 96),
           ITEM_LIMIT_PUSH_TIPS_REWARD) )
    {
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WatcherExcelConfig.cpp",
        "checkPushTipsData",
        186);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v20 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              v19,
              (const char (*)[41])"checkMergeRewardIds fail, reward_id_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v20, (const std::vector<unsigned int> *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      v2 = 0;
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 193: range 000000000EFC0D64-000000000EFC1641
int32_t __cdecl WatcherExcelConfigMgr::rewriteGlobalWatcherData(
        WatcherExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rax
  std::vector<unsigned int>::reference v11; // rax
  _DWORD *v12; // rdx
  char v13; // al
  std::pair<std::__detail::_Node_iterator<data::WatcherPredicateConfig,true,false>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // edx
  std::vector<unsigned int> *v18; // rdx
  _BOOL4 v19; // r15d
  unsigned __int64 v20; // rax
  int32_t result; // eax
  data::GlobalWatcherConfigMap *__for_range; // [rsp+28h] [rbp-1E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false>::reference __in; // [rsp+30h] [rbp-1E0h]
  const std::vector<unsigned int>::value_type *global_watcher_id; // [rsp+38h] [rbp-1D8h]
  std::tuple_element<1,std::pair<unsigned int const,data::GlobalWatcherConfig> >::type *watcher_config; // [rsp+40h] [rbp-1D0h]
  std::vector<data::WatcherPredicateConfig> *__for_range_0; // [rsp+50h] [rbp-1C0h]
  data::WatcherPredicateConfig *predicate_config; // [rsp+58h] [rbp-1B8h]
  char v28[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:194 64 8 13 __for_end:194 96 8 15 __for_begin:211 128 8 13 __for_end:211 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 56 17 predicate_set:210";
  *(_QWORD *)(v3 + 16) = WatcherExcelConfigMgr::rewriteGlobalWatcherData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  __for_range = &this->global_watcher_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GlobalWatcherConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::GlobalWatcherConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GlobalWatcherConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GlobalWatcherConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GlobalWatcherConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GlobalWatcherConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GlobalWatcherConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_44;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false> *const)(v3 + 32));
    global_watcher_id = std::get<0ul,unsigned int const,data::GlobalWatcherConfig>(__in);
    watcher_config = std::get<1ul,unsigned int const,data::GlobalWatcherConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)global_watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)global_watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)global_watcher_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(global_watcher_id);
    }
    v6 = *global_watcher_id;
    if ( (unsigned int)WatcherExcelConfigMgr::addWatcherConfig(this, v6, watcher_config) )
      break;
    if ( *(char *)(((unsigned __int64)&watcher_config->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&watcher_config->is_disuse, v6, &watcher_config->is_disuse);
    if ( !watcher_config->is_disuse )
    {
      common::tools::MiscUtils::removeEmptyElement<data::WatcherPredicateConfig,data::WatcherPredicateType data::WatcherPredicateConfig::*>(
        &watcher_config->predicate_configs,
        (data::WatcherPredicateType *)8);
      v10 = ((v3 + 288) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_WORD *)(v10 + 4) = 0;
      *(_BYTE *)(v10 + 6) = 0;
      std::unordered_set<data::WatcherPredicateConfig>::unordered_set((std::unordered_set<data::WatcherPredicateConfig> *const)(v3 + 288));
      __for_range_0 = &watcher_config->predicate_configs;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, 8LL);
      *(std::vector<data::WatcherPredicateConfig>::iterator *)(v3 + 96) = std::vector<data::WatcherPredicateConfig>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, 8LL);
      *(std::vector<data::WatcherPredicateConfig>::iterator *)(v3 + 128) = std::vector<data::WatcherPredicateConfig>::end(__for_range_0);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::WatcherPredicateConfig *,std::vector<data::WatcherPredicateConfig>>(
                (const __gnu_cxx::__normal_iterator<data::WatcherPredicateConfig*,std::vector<data::WatcherPredicateConfig> > *)(v3 + 96),
                (const __gnu_cxx::__normal_iterator<data::WatcherPredicateConfig*,std::vector<data::WatcherPredicateConfig> > *)(v3 + 128)) )
        {
          v17 = 1;
          goto LABEL_40;
        }
        for ( predicate_config = __gnu_cxx::__normal_iterator<data::WatcherPredicateConfig *,std::vector<data::WatcherPredicateConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::WatcherPredicateConfig*,std::vector<data::WatcherPredicateConfig> > *const)(v3 + 96));
              ;
              std::vector<unsigned int>::pop_back(&predicate_config->param_list) )
        {
          if ( std::vector<unsigned int>::empty(&predicate_config->param_list) )
            goto LABEL_31;
          v11 = std::vector<unsigned int>::back(&predicate_config->param_list);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          if ( *v12 )
LABEL_31:
            v13 = 0;
          else
            v13 = 1;
          if ( !v13 )
            break;
        }
        v14 = std::unordered_set<data::WatcherPredicateConfig>::insert(
                (std::unordered_set<data::WatcherPredicateConfig> *const)(v3 + 288),
                predicate_config);
        if ( !v14.second )
          break;
        v18 = std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::operator[](
                &this->predicate_global_watcher_map,
                predicate_config);
        std::vector<unsigned int>::push_back(v18, global_watcher_id);
        __gnu_cxx::__normal_iterator<data::WatcherPredicateConfig *,std::vector<data::WatcherPredicateConfig>>::operator++((__gnu_cxx::__normal_iterator<data::WatcherPredicateConfig*,std::vector<data::WatcherPredicateConfig> > *const)(v3 + 96));
      }
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
        "./src/txt_data_manual/WatcherExcelConfig.cpp",
        "rewriteGlobalWatcherData",
        220);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v15, (const char (*)[40])byte_1A47BDE0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, global_watcher_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v17 = 0;
LABEL_40:
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      v19 = v17 == 1;
      std::unordered_set<data::WatcherPredicateConfig>::~unordered_set((std::unordered_set<data::WatcherPredicateConfig> *const)(v3 + 288));
      v20 = ((v3 + 288) >> 3) + 2147450880;
      *(_DWORD *)v20 = -117901064;
      *(_WORD *)(v20 + 4) = -1800;
      *(_BYTE *)(v20 + 6) = -8;
      if ( !v19 )
      {
        v9 = 0;
        goto LABEL_44;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/WatcherExcelConfig.cpp",
    "rewriteGlobalWatcherData",
    198);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         v7,
         (const char (*)[44])"addWatcherConfig failed, global_watcher_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, global_watcher_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v9 = 0;
LABEL_44:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 233: range 000000000EFC1642-000000000EFC2601
int32_t __cdecl WatcherExcelConfigMgr::checkGlobalWatcherData(
        const WatcherExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  int predicate_type; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  std::vector<unsigned int>::const_reference v18; // rax
  _DWORD *v19; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v20; // rax
  uint32_t *v21; // rdx
  char v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v29; // rax
  uint32_t *v30; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int32_t result; // eax
  uint32_t level; // [rsp+1Ch] [rbp-2C4h]
  data::GlobalWatcherConfigMap *__for_range; // [rsp+20h] [rbp-2C0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false>::reference v39; // [rsp+28h] [rbp-2B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GlobalWatcherConfig> >::type *global_watcher_id; // [rsp+30h] [rbp-2B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GlobalWatcherConfig> >::type *watcher_config; // [rsp+38h] [rbp-2A8h]
  const std::vector<data::WatcherPredicateConfig> *__for_range_0; // [rsp+40h] [rbp-2A0h]
  const data::WatcherPredicateConfig *predicate_config; // [rsp+48h] [rbp-298h]
  char v44[656]; // [rsp+50h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 8 15 __for_begin:234 64 8 13 __for_end:234 96 8 15 __for_begin:247 128 8 13 __for_end:247 "
                        "160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 4"
                        "80 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WatcherExcelConfigMgr::checkGlobalWatcherData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -202116109;
  __for_range = &this->global_watcher_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GlobalWatcherConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::GlobalWatcherConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GlobalWatcherConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GlobalWatcherConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GlobalWatcherConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GlobalWatcherConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GlobalWatcherConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_73;
    }
    v39 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false> *const)(v3 + 32));
    global_watcher_id = std::get<0ul,unsigned int const,data::GlobalWatcherConfig>(v39);
    watcher_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GlobalWatcherConfig> >::type *)std::get<1ul,unsigned int const,data::GlobalWatcherConfig>(v39);
    if ( *(char *)(((unsigned __int64)&watcher_config->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&watcher_config->is_disuse, v3 + 64, &watcher_config->is_disuse);
    if ( watcher_config->is_disuse )
      goto LABEL_71;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WatcherConfig *> const,unsigned int>(
            &this->watcher_config_map,
            global_watcher_id) )
      break;
    __for_range_0 = &watcher_config->predicate_configs;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, global_watcher_id);
    *(std::vector<data::WatcherPredicateConfig>::const_iterator *)(v3 + 96) = std::vector<data::WatcherPredicateConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, global_watcher_id);
    *(std::vector<data::WatcherPredicateConfig>::const_iterator *)(v3 + 128) = std::vector<data::WatcherPredicateConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::WatcherPredicateConfig const*,std::vector<data::WatcherPredicateConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::WatcherPredicateConfig*,std::vector<data::WatcherPredicateConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::WatcherPredicateConfig*,std::vector<data::WatcherPredicateConfig> > *)(v3 + 128)) )
      {
        v14 = 1;
        goto LABEL_69;
      }
      predicate_config = __gnu_cxx::__normal_iterator<data::WatcherPredicateConfig const*,std::vector<data::WatcherPredicateConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::WatcherPredicateConfig*,std::vector<data::WatcherPredicateConfig> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&predicate_config->predicate_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&predicate_config->predicate_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&predicate_config->predicate_type);
      }
      predicate_type = predicate_config->predicate_type;
      if ( predicate_type == 3 )
        break;
      if ( predicate_type > 3 )
        goto LABEL_64;
      if ( predicate_type == 1 )
      {
        if ( std::vector<unsigned int>::size(&predicate_config->param_list) != 1 )
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
            "./src/txt_data_manual/WatcherExcelConfig.cpp",
            "checkGlobalWatcherData",
            254);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v11,
                  (const char (*)[19])"global watcher_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, global_watcher_id);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v13, (const char (*)[32])byte_1A47C060);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
          *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
          goto LABEL_69;
        }
      }
      else
      {
        if ( predicate_type != 2 )
        {
LABEL_64:
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
            3u,
            "./src/txt_data_manual/WatcherExcelConfig.cpp",
            "checkGlobalWatcherData",
            288);
          v35 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[31])byte_1A47C140);
          common::milog::MiLogStream::operator<<<data::WatcherPredicateType,(data::WatcherPredicateType*)0>(
            v35,
            &predicate_config->predicate_type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          goto LABEL_67;
        }
        if ( std::vector<unsigned int>::size(&predicate_config->param_list) != 2 )
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
            "./src/txt_data_manual/WatcherExcelConfig.cpp",
            "checkGlobalWatcherData",
            262);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v15,
                  (const char (*)[19])"global watcher_id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, global_watcher_id);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v17, (const char (*)[32])byte_1A47C060);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
          goto LABEL_69;
        }
        v18 = std::vector<unsigned int>::operator[](&predicate_config->param_list, 0LL);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        if ( !*v19 )
          goto LABEL_44;
        v20 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &predicate_config->param_list,
                                                                                                    0LL);
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        if ( data::isValidAvatarFilterType(*v21) )
          v22 = 0;
        else
LABEL_44:
          v22 = 1;
        if ( v22 )
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
            "./src/txt_data_manual/WatcherExcelConfig.cpp",
            "checkGlobalWatcherData",
            267);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v24 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v23,
                  (const char (*)[19])"global watcher_id:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, global_watcher_id);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v25, (const char (*)[38])byte_1A47C0A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
          goto LABEL_69;
        }
      }
LABEL_67:
      __gnu_cxx::__normal_iterator<data::WatcherPredicateConfig const*,std::vector<data::WatcherPredicateConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::WatcherPredicateConfig*,std::vector<data::WatcherPredicateConfig> > *const)(v3 + 96));
    }
    if ( std::vector<unsigned int>::size(&predicate_config->param_list) != 1 )
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
        "./src/txt_data_manual/WatcherExcelConfig.cpp",
        "checkGlobalWatcherData",
        276);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v26,
              (const char (*)[19])"global watcher_id:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, global_watcher_id);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v28, (const char (*)[32])byte_1A47C060);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
      goto LABEL_69;
    }
    v29 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                &predicate_config->param_list,
                                                                                                0LL);
    v30 = v29;
    if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v29);
    }
    if ( *v30 )
    {
      level = *v30;
      if ( level <= GCGGrowthExcelConfigMgr::getMaxLevel(&txt_config_mgr->gcg_growth_config_mgr) )
        goto LABEL_67;
    }
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
      "./src/txt_data_manual/WatcherExcelConfig.cpp",
      "checkGlobalWatcherData",
      282);
    v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 480),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v33 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v32, (const char (*)[19])"global watcher_id:");
    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, global_watcher_id);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v34, (const char (*)[32])byte_1A47C100);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v14 = 0;
LABEL_69:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v14 != 1 )
    {
      v9 = 0;
      goto LABEL_73;
    }
LABEL_71:
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/WatcherExcelConfig.cpp",
    "checkGlobalWatcherData",
    242);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])"global_watcher_id:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, global_watcher_id);
  common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v8, (const char (*)[48])byte_1A47BFC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v9 = 0;
LABEL_73:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
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
  return result;
};

// Line 299: range 000000000EFC2602-000000000EFC363C
int32_t __cdecl WatcherExcelConfigMgr::rewriteAndCheckGadgetIdSet(
        WatcherExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr,
        const std::vector<std::string> *param_vec,
        uint32_t param_index,
        std::unordered_set<unsigned int> *gadget_id_set)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  const std::string *v10; // rax
  const char *v11; // rsi
  bool v12; // r15
  unsigned __int64 v13; // rax
  char *i; // r14
  _DWORD *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const std::string *v18; // rax
  common::milog::MiLogStream *v19; // rax
  char *v20; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v21; // rax
  int *v22; // rdx
  int v23; // ecx
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  unsigned __int64 v27; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v29; // rax
  unsigned __int64 v30; // rax
  std::unordered_set<unsigned int>::size_type v31; // r14
  common::milog::MiLogStream *v32; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+44h] [rbp-39Ch]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-398h]
  char v40[912]; // [rsp+50h] [rbp-390h] BYREF

  v5 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(864LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 4 13 gadget_id:317 160 8 15 __for_begin:317 192 8 13 __for_end:317 224 24 17 gadg"
                        "et_id_vec:305 288 24 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32"
                        " 9 <unknown> 608 32 9 <unknown> 672 56 9 <unknown> 768 64 9 <unknown>";
  *(_QWORD *)(v5 + 16) = WatcherExcelConfigMgr::rewriteAndCheckGadgetIdSet;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -234753535;
  v7[536862723] = -234753535;
  v7[536862724] = -234556927;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -234881024;
  v7[536862728] = -218959118;
  v7[536862729] = -234881024;
  v7[536862730] = -218959118;
  v7[536862732] = -218959118;
  v7[536862734] = -218959118;
  v7[536862736] = -218959118;
  v7[536862738] = -218959118;
  v7[536862740] = -218959118;
  v7[536862742] = -234881024;
  v7[536862743] = -218959118;
  v7[536862746] = -202116109;
  if ( param_index < std::vector<std::string>::size(param_vec) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 224));
    std::allocator<char>::allocator(v5 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v5 + 768),
      ",",
      (const std::allocator<char> *)(v5 + 48));
    std::allocator<char>::allocator(v5 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v5 + 800),
      ";",
      (const std::allocator<char> *)(v5 + 64));
    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v5 + 80));
    std::vector<std::string>::vector(
      (std::vector<std::string> *const)(v5 + 288),
      (std::initializer_list<std::string >)__PAIR128__(2LL, v5 + 768),
      (const std::vector<std::string>::allocator_type *)(v5 + 80));
    v10 = std::vector<std::string>::operator[](param_vec, param_index);
    v11 = (const char *)(v5 + 288);
    v12 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
            v10,
            (const std::vector<std::string> *)(v5 + 288),
            (std::vector<unsigned int> *)(v5 + 224),
            0) != 0;
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 288));
    v13 = ((v5 + 288) >> 3) + 2147450880;
    *(_WORD *)v13 = -1800;
    *(_BYTE *)(v13 + 2) = -8;
    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v5 + 80));
    *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) = -8;
    for ( i = (char *)(v5 + 832); i != (char *)(v5 + 768); std::string::~string(i) )
      i -= 32;
    v15 = (_DWORD *)(((v5 + 768) >> 3) + 2147450880);
    *v15 = -117901064;
    v15[1] = -117901064;
    std::allocator<char>::~allocator(v5 + 64);
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
    std::allocator<char>::~allocator(v5 + 48);
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      *(_DWORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 65) & 7) >= *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WatcherExcelConfig.cpp",
        "rewriteAndCheckGadgetIdSet",
        308);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              v16,
              (const char (*)[31])"splitToListBySeps fail, param:");
      v18 = std::vector<std::string>::operator[](param_vec, param_index);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, v18);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 416));
      *(_DWORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v9 = -1;
    }
    else
    {
      ret = 0;
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v5 + 224)) )
      {
        *(_DWORD *)(((v5 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 1) & 7) >= *(_BYTE *)(((v5 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WatcherExcelConfig.cpp",
          "rewriteAndCheckGadgetIdSet",
          314);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = byte_1A47C3C0;
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v19, (const char (*)[22])byte_1A47C3C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 480));
        *(_DWORD *)(((v5 + 480) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __for_range = (std::vector<unsigned int> *)(v5 + 224);
      *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 160, v11);
      *(std::vector<unsigned int>::iterator *)(v5 + 160) = std::vector<unsigned int>::begin(__for_range);
      *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 192, v11);
      *(std::vector<unsigned int>::iterator *)(v5 + 192) = std::vector<unsigned int>::end(__for_range);
      while ( 1 )
      {
        v20 = (char *)(v5 + 192);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v5 + 160),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v5 + 192)) )
          break;
        *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = 4;
        v21 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v5 + 160));
        v22 = (int *)v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        v23 = *v22;
        v24 = *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000);
        if ( v24 != 0 && v24 <= 3 )
        {
          LOBYTE(v20) = v24 != 0;
          __asan_report_store4(v5 + 144, v20);
        }
        *(_DWORD *)(v5 + 144) = v23;
        if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                &txt_config_mgr->gadget_config_mgr,
                *(unsigned int *)(v5 + 144)) )
        {
          *(_DWORD *)(((v5 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 63) & 7) >= *(_BYTE *)(((v5 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WatcherExcelConfig.cpp",
            "rewriteAndCheckGadgetIdSet",
            321);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  v25,
                  (const char (*)[39])"findGadgetExcelConfig fail, gadget_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v5 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 544));
          *(_DWORD *)(((v5 + 544) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v5 + 160));
      }
      *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
      v27 = ((v5 + 672) >> 3) + 2147450880;
      *(_DWORD *)v27 = 0;
      *(_WORD *)(v27 + 4) = 0;
      *(_BYTE *)(v27 + 6) = 0;
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v5 + 128));
      *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = 1;
      M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v5 + 224))._M_current;
      v29._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 224))._M_current;
      std::unordered_set<unsigned int>::unordered_set<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
        (std::unordered_set<unsigned int> *const)(v5 + 672),
        v29,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
        0LL,
        (const std::unordered_set<unsigned int>::hasher *)(v5 + 96),
        (const std::unordered_set<unsigned int>::key_equal *)(v5 + 112),
        (const std::unordered_set<unsigned int>::allocator_type *)(v5 + 128));
      std::unordered_set<unsigned int>::operator=(gadget_id_set, (std::unordered_set<unsigned int> *)(v5 + 672));
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v5 + 672));
      v30 = ((v5 + 672) >> 3) + 2147450880;
      *(_DWORD *)v30 = -117901064;
      *(_WORD *)(v30 + 4) = -1800;
      *(_BYTE *)(v30 + 6) = -8;
      *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = -8;
      std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v5 + 128));
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
      v31 = std::unordered_set<unsigned int>::size(gadget_id_set);
      if ( v31 != std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 224)) )
      {
        *(_DWORD *)(((v5 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 127) & 7) >= *(_BYTE *)(((v5 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 608, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 608),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WatcherExcelConfig.cpp",
          "rewriteAndCheckGadgetIdSet",
          328);
        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v32, (const char (*)[19])byte_1A47C460);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 608));
        *(_DWORD *)(((v5 + 608) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v9 = ret;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 224));
  }
  else
  {
    if ( *(char *)(((v5 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 127) & 7) >= *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 352, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 352),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/WatcherExcelConfig.cpp",
      "rewriteAndCheckGadgetIdSet",
      302);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v5 + 352),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])byte_1A47C340);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 352));
    v9 = -1;
  }
  result = v9;
  if ( v40 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8068) = 0;
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 337: range 000000000EFC363E-000000000F00B634
int32_t __cdecl WatcherExcelConfigMgr::rewriteAndCheckWatcherParam(WatcherExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr, WatcherConfig *watcher_config);

// Line 3730: range 000000000F00B636-000000000F00B853
const std::unordered_set<unsigned int> *__fastcall WatcherExcelConfigMgr::getGCGChallengeIdSetByWatcherId(
        const WatcherExcelConfigMgr *const this,
        const std::unordered_set<unsigned int> *watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::unordered_set<unsigned int>> *p_watcher_id_challenge_id_set_map; // rdx
  std::map<unsigned int,std::unordered_set<unsigned int>> *v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 15 watcher_id:3729 64 8 9 iter:3732 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = WatcherExcelConfigMgr::getGCGChallengeIdSetByWatcherId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)watcher_id;
  if ( !(_BYTE)`guard variable for'WatcherExcelConfigMgr::getGCGChallengeIdSetByWatcherId(unsigned int)::empty_set
    && __cxa_guard_acquire(&`guard variable for'WatcherExcelConfigMgr::getGCGChallengeIdSetByWatcherId(unsigned int)::empty_set) )
  {
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)&WatcherExcelConfigMgr::getGCGChallengeIdSetByWatcherId(unsigned int)const::empty_set);
    __cxa_guard_release(&`guard variable for'WatcherExcelConfigMgr::getGCGChallengeIdSetByWatcherId(unsigned int)::empty_set);
    watcher_id = &WatcherExcelConfigMgr::getGCGChallengeIdSetByWatcherId(unsigned int)const::empty_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_set<unsigned int>::~unordered_set,
      (void *)&WatcherExcelConfigMgr::getGCGChallengeIdSetByWatcherId(unsigned int)const::empty_set,
      &_dso_handle);
  }
  p_watcher_id_challenge_id_set_map = &this->watcher_id_challenge_id_set_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, watcher_id);
  *(std::map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::unordered_set<unsigned int>>::find(
                                                                                            p_watcher_id_challenge_id_set_map,
                                                                                            (const std::map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->watcher_id_challenge_id_set_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::unordered_set<unsigned int>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > > *const)(v2 + 64))->second;
  else
    result = &WatcherExcelConfigMgr::getGCGChallengeIdSetByWatcherId(unsigned int)const::empty_set;
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

// Line 3745: range 000000000F00F258-000000000F00F26C
void __cdecl GLOBAL__sub_I_merge_single_NewActivityExcelConfig_gen_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 3745: range 000000000F00EB00-000000000F00F257
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  __int64 v9; // rsi
  char *i; // r14
  _BYTE *v11; // rcx
  char v12; // dl
  const std::unordered_set<std::string> *v13; // rsi
  __int64 v14; // rdx
  _BYTE *v15; // rcx
  char v16; // dl
  __int64 v17; // rdx
  const char *v18; // rcx
  std::initializer_list<unsigned int> __l; // [rsp+0h] [rbp-150h]
  char v20[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9 "
                        "<unknown> 144 1 9 <unknown> 160 12 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = __static_initialization_and_destruction_0;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -219020288;
  v4[536862727] = -202116109;
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_NewActivityExcelConfig.gen.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)&std::__ioinit);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   &std::__ioinit);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  &std::__ioinit);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     &std::__ioinit);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 &std::__ioinit);
      boost::asio::error::misc_category = misc_category;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, &std::__ioinit);
      *(_DWORD *)(v2 + 160) = 19065;
      v9 = (((_BYTE)v2 - 96 + 4) & 7u) + 3;
      if ( *(_BYTE *)(((v2 + 164) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 96 + 4) & 7) + 3) >= *(_BYTE *)(((v2 + 164) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 164, v9);
      }
      *(_DWORD *)(v2 + 164) = 19064;
      if ( *(_BYTE *)(((v2 + 168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 168, v9);
      *(_DWORD *)(v2 + 168) = 19066;
      __l._M_array = (std::initializer_list<unsigned int>::iterator)(v2 + 160);
      __l._M_len = 3LL;
      std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 80));
      std::unordered_set<unsigned int>::unordered_set(
        &QuestExcelConfigMgr::coop_parent_quest_white_set,
        __l,
        0LL,
        (const std::unordered_set<unsigned int>::hasher *)(v2 + 48),
        (const std::unordered_set<unsigned int>::key_equal *)(v2 + 64),
        (const std::unordered_set<unsigned int>::allocator_type *)(v2 + 80));
      std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_set<unsigned int>::~unordered_set,
        &QuestExcelConfigMgr::coop_parent_quest_white_set,
        &_dso_handle);
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 192),
        "SceneObj_Storm_Lightning",
        (const std::allocator<char> *)(v2 + 96));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 144));
      std::unordered_set<std::string>::unordered_set(
        (std::unordered_set<std::string> *const)&CurAvatarHurtBySpecificAbilityWatcherParam::ALLOW_ABILITY_NAME_SET[abi:cxx11],
        (std::initializer_list<std::string >)__PAIR128__(1LL, v2 + 192),
        0LL,
        (const std::unordered_set<std::string>::hasher *)(v2 + 112),
        (const std::unordered_set<std::string>::key_equal *)(v2 + 128),
        (const std::unordered_set<std::string>::allocator_type *)(v2 + 144));
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 144));
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 224); i != (char *)(v2 + 192); std::string::~string(i) )
        i -= 32;
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      v13 = &CurAvatarHurtBySpecificAbilityWatcherParam::ALLOW_ABILITY_NAME_SET[abi:cxx11];
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_set<std::string>::~unordered_set,
        (void *)&CurAvatarHurtBySpecificAbilityWatcherParam::ALLOW_ABILITY_NAME_SET[abi:cxx11],
        &_dso_handle);
      v11 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      v12 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                     + 0x7FFF8000);
      LOBYTE(v13) = v12 != 0;
      v14 = (v12 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v12);
      if ( (_BYTE)v14 )
        __asan_report_load1(
          &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
          v13,
          v14);
      if ( !*v11 )
      {
        v15 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v16 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v13) = v16 != 0;
        v17 = (v16 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v16);
        if ( (_BYTE)v17 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v13,
            v17);
        *v15 = 1;
        v18 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v13);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v18;
      }
    }
    __asan_after_dynamic_init();
  }
  if ( v20 == (char *)v2 )
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
};
