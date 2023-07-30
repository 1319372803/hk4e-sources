// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/gateserver_mgr.cpp

// Line 27: range 000000000C60EFE2-000000000C60F19E
int32_t __cdecl GateserverMgr::init(GateserverMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  GateserverMgrConfig *p_gateserver_mgr_config; // rdx
  int v5; // r14d
  int32_t result; // eax
  ServerLBMgrConfig init_config; // [rsp+14h] [rbp-9Ch] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 7 lock:29 64 16 13 config_ptr:31";
  *(_QWORD *)(v1 + 16) = GateserverMgr::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v1 + 32), &this->mu_);
  ServiceBox::findService<DispatchService>();
  DispatchService::getConfig((DispatchService *const)(v1 + 64));
  p_gateserver_mgr_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->gateserver_mgr_config;
  init_config = GateserverMgr::getLBConfigFromSelfConfig(this, p_gateserver_mgr_config);
  v5 = ServerLBMgr::init(&this->lb_mgr_, &init_config);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v1 + 32));
  result = v5;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 36: range 000000000C60F1A0-000000000C60F356
void __cdecl GateserverMgr::onReloadConfig(GateserverMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  GateserverMgrConfig *p_gateserver_mgr_config; // rdx
  ServerLBMgrConfig new_config; // [rsp+14h] [rbp-9Ch] BYREF
  char v6[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 7 lock:38 64 16 13 config_ptr:40";
  *(_QWORD *)(v1 + 16) = GateserverMgr::onReloadConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v1 + 32), &this->mu_);
  ServiceBox::findService<DispatchService>();
  DispatchService::getConfig((DispatchService *const)(v1 + 64));
  p_gateserver_mgr_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->gateserver_mgr_config;
  new_config = GateserverMgr::getLBConfigFromSelfConfig(this, p_gateserver_mgr_config);
  ServerLBMgr::onReloadConfig(&this->lb_mgr_, &new_config);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 48: range 000000000C60F358-000000000C60F96D
__int64 __fastcall GateserverMgr::addGateserver(
        GateserverMgr *const this,
        uint32_t app_id,
        const std::string *inner_ip,
        const std::string *outer_ip,
        uint16_t listen_port,
        char use_domain_name,
        const std::string *domain_name,
        int load)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  const char *v11; // rax
  unsigned int v12; // r14d
  const char *v13; // rax
  GateserverInfo *v14; // rax
  const char *v15; // r14
  __int64 v16; // r15
  const char *v17; // rax
  __int64 result; // rax
  const char *v19; // [rsp+8h] [rbp-228h]
  const char *v20; // [rsp+10h] [rbp-220h]
  const char *v21; // [rsp+18h] [rbp-218h]
  unsigned int v22; // [rsp+24h] [rbp-20Ch]
  unsigned int v23; // [rsp+28h] [rbp-208h]
  int ret; // [rsp+54h] [rbp-1DCh]
  std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo> >::_Self __y; // [rsp+58h] [rbp-1D8h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-1D0h] BYREF
  char v31[432]; // [rsp+80h] [rbp-1B0h] BYREF

  v8 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(384LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "5 32 4 9 app_id:46 48 8 7 lock:63 80 8 5 it:66 112 32 13 app_id_str:49 176 144 7 info:53";
  *(_QWORD *)(v8 + 16) = GateserverMgr::addGateserver;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = 61956;
  v10[536862721] = -234881024;
  v10[536862722] = 62194;
  v10[536862722] = -234881024;
  v10[536862723] = 62194;
  v10[536862724] = -219021312;
  v10[536862725] = 62194;
  v10[536862730] = -202116109;
  v10[536862731] = -202116109;
  *(_DWORD *)(v8 + 32) = app_id;
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v8 + 112), *(_DWORD *)(v8 + 32));
  GateserverInfo::GateserverInfo((GateserverInfo *const)(v8 + 176));
  *(_DWORD *)(v8 + 176) = *(_DWORD *)(v8 + 32);
  *(_WORD *)(v8 + 280) = listen_port;
  std::string::operator=(v8 + 216, inner_ip);
  std::string::operator=(v8 + 248, outer_ip);
  std::string::operator=(v8 + 184, v8 + 112);
  *(_BYTE *)(v8 + 282) = use_domain_name;
  std::string::operator=(v8 + 288, domain_name);
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v8 + 48), &this->mu_);
  *(std::map<unsigned int,GateserverInfo>::iterator *)(v8 + 80) = std::map<unsigned int,GateserverInfo>::find(
                                                                    &this->gateserver_map_,
                                                                    (const std::map<unsigned int,GateserverInfo>::key_type *)(v8 + 32));
  __y._M_node = std::map<unsigned int,GateserverInfo>::end(&this->gateserver_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo> >::_Self *)(v8 + 80),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gateserver_mgr.cpp",
      "addGateserver",
      69);
    v11 = (const char *)std::string::c_str(v8 + 112);
    common::milog::MiLogStream::operator()(&v30, "repeat gateserver app_id=%s", v11);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v12 = 1;
  }
  else
  {
    ret = ServerLBMgr::addServer(&this->lb_mgr_, *(_DWORD *)(v8 + 32), load);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gateserver_mgr.cpp",
        "addGateserver",
        76);
      v13 = (const char *)std::string::c_str(v8 + 112);
      common::milog::MiLogStream::operator()(&v30, "add gateserver failed. app_id=%s", v13);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v12 = ret;
    }
    else
    {
      v14 = std::map<unsigned int,GateserverInfo>::operator[](
              &this->gateserver_map_,
              (const std::map<unsigned int,GateserverInfo>::key_type *)(v8 + 32));
      GateserverInfo::operator=(v14, (const GateserverInfo *)(v8 + 176));
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/gateserver_mgr.cpp",
        "addGateserver",
        83);
      v23 = std::map<unsigned int,GateserverInfo>::size(&this->gateserver_map_);
      v15 = (const char *)std::string::c_str(v8 + 288);
      v22 = *(unsigned __int8 *)(v8 + 282);
      v16 = *(unsigned __int16 *)(v8 + 280);
      v21 = (const char *)std::string::c_str(v8 + 248);
      v20 = (const char *)std::string::c_str(v8 + 216);
      v19 = (const char *)std::string::c_str(v8 + 184);
      v17 = (const char *)std::string::c_str(v8 + 112);
      common::milog::MiLogStream::operator()(
        &v30,
        "add gateserver app_id=%s name=%s, inner_ip=%s, outer_ip=%s, listen_port=%u use_domain_name=%u domain_name=%s. cu"
        "r_total_server_count=%d",
        v17,
        v19,
        v20,
        v21,
        v16,
        v22,
        v15,
        v23);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v12 = 0;
    }
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v8 + 48));
  GateserverInfo::~GateserverInfo((GateserverInfo *const)(v8 + 176));
  std::string::~string((void *)(v8 + 112));
  result = v12;
  if ( v31 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 90: range 000000000C60F96E-000000000C60FEA0
__int64 __fastcall GateserverMgr::delGateserver(GateserverMgr *const this, uint32_t app_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const char *v5; // rax
  unsigned int v6; // r14d
  const char *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo> >::pointer v8; // rax
  __int64 v9; // r14
  const char *v10; // r15
  const char *v11; // rax
  __int64 result; // rax
  const char *v13; // [rsp+10h] [rbp-200h]
  const char *v14; // [rsp+18h] [rbp-1F8h]
  unsigned int v15; // [rsp+20h] [rbp-1F0h]
  int ret; // [rsp+34h] [rbp-1DCh]
  std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo> >::_Self __y; // [rsp+38h] [rbp-1D8h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-1D0h] BYREF
  char v19[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 app_id:89 48 8 7 lock:92 80 8 5 it:96 112 32 13 app_id_str:94 176 144 8 info:111";
  *(_QWORD *)(v2 + 16) = GateserverMgr::delGateserver;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862730] = -202116109;
  v4[536862731] = -202116109;
  *(_DWORD *)(v2 + 32) = app_id;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 48), &this->mu_);
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v2 + 112), *(_DWORD *)(v2 + 32));
  *(std::map<unsigned int,GateserverInfo>::iterator *)(v2 + 80) = std::map<unsigned int,GateserverInfo>::find(
                                                                    &this->gateserver_map_,
                                                                    (const std::map<unsigned int,GateserverInfo>::key_type *)(v2 + 32));
  __y._M_node = std::map<unsigned int,GateserverInfo>::end(&this->gateserver_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo> >::_Self *)(v2 + 80),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gateserver_mgr.cpp",
      "delGateserver",
      99);
    v5 = (const char *)std::string::c_str(v2 + 112);
    common::milog::MiLogStream::operator()(&v18, "fail to find gateserver app_id=%s", v5);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v6 = 1;
  }
  else
  {
    ret = ServerLBMgr::delServer(&this->lb_mgr_, *(_DWORD *)(v2 + 32));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gateserver_mgr.cpp",
        "delGateserver",
        106);
      v7 = (const char *)std::string::c_str(v2 + 112);
      common::milog::MiLogStream::operator()(&v18, "lb_mgr_ del gateserver failed. app_id=%s", v7);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v6 = ret;
    }
    else
    {
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo> > *const)(v2 + 80));
      GateserverInfo::GateserverInfo((GateserverInfo *const)(v2 + 176), &v8->second);
      std::map<unsigned int,GateserverInfo>::erase[abi:cxx11](
        &this->gateserver_map_,
        *(std::map<unsigned int,GateserverInfo>::iterator *)(v2 + 80));
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/gateserver_mgr.cpp",
        "delGateserver",
        116);
      v15 = std::map<unsigned int,GateserverInfo>::size(&this->gateserver_map_);
      v9 = *(unsigned __int16 *)(v2 + 280);
      v14 = (const char *)std::string::c_str(v2 + 248);
      v13 = (const char *)std::string::c_str(v2 + 216);
      v10 = (const char *)std::string::c_str(v2 + 184);
      v11 = (const char *)std::string::c_str(v2 + 112);
      common::milog::MiLogStream::operator()(
        &v18,
        "del gateserver app_id=%s name=%s, inner_ip=%s, outer_ip=%s, listen_port=%u. cur_total_server_count=%d",
        v11,
        v10,
        v13,
        v14,
        v9,
        v15);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v6 = 0;
      GateserverInfo::~GateserverInfo((GateserverInfo *const)(v2 + 176));
    }
  }
  std::string::~string((void *)(v2 + 112));
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 48));
  result = v6;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 126: range 000000000C60FEA2-000000000C61030A
int __cdecl GateserverMgr::grabGateserver(GateserverMgr *const this, uint32_t uid, GateserverInfo *info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // r14d
  const char *v7; // rax
  GateserverInfo *p_second; // rdx
  const char *v9; // rax
  int result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo> >::_Self __y; // [rsp+28h] [rbp-118h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-110h] BYREF
  char v14[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 18 choosed_app_id:136 64 8 8 lock:128 96 8 6 it:145 128 32 14 app_id_str:143";
  *(_QWORD *)(v3 + 16) = GateserverMgr::grabGateserver;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64), &this->mu_);
  if ( std::map<unsigned int,GateserverInfo>::empty(&this->gateserver_map_) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gateserver_mgr.cpp",
      "grabGateserver",
      132);
    common::milog::MiLogStream::operator()(&v13, "gateserver_map_ is empty, can not grab gateserver now.");
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = 1;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = ServerLBMgr::chooseServer(&this->lb_mgr_);
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v3 + 128), *(_DWORD *)(v3 + 48));
      *(std::map<unsigned int,GateserverInfo>::iterator *)(v3 + 96) = std::map<unsigned int,GateserverInfo>::find(
                                                                        &this->gateserver_map_,
                                                                        (const std::map<unsigned int,GateserverInfo>::key_type *)(v3 + 48));
      __y._M_node = std::map<unsigned int,GateserverInfo>::end(&this->gateserver_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo> >::_Self *)(v3 + 96),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/gateserver_mgr.cpp",
          "grabGateserver",
          148);
        v7 = (const char *)std::string::c_str(v3 + 128);
        common::milog::MiLogStream::operator()(&v13, "gateserver app_id:%s in lb_mgr_, but not int gateserver_map_", v7);
        common::milog::MiLogStream::~MiLogStream(&v13);
        v6 = 1;
      }
      else
      {
        p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo> > *const)(v3 + 96))->second;
        GateserverInfo::operator=(info, p_second);
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gateserver_mgr.cpp",
          "grabGateserver",
          154);
        v9 = (const char *)std::string::c_str(v3 + 128);
        common::milog::MiLogStream::operator()(&v13, "grab gateserver %s app_id: to uid=%u", v9, uid);
        common::milog::MiLogStream::~MiLogStream(&v13);
        v6 = 0;
      }
      std::string::~string((void *)(v3 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gateserver_mgr.cpp",
        "grabGateserver",
        139);
      common::milog::MiLogStream::operator()(&v13, "failed to choose a gate server");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v6 = 1;
    }
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64));
  result = v6;
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

// Line 160: range 000000000C61030C-000000000C61059C
__int64 __fastcall GateserverMgr::syncGateserverLoad(GateserverMgr *const this, uint32_t app_id, int load)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const char *v6; // rax
  unsigned int v7; // r14d
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo> >::_Self __y; // [rsp+18h] [rbp-F8h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-F0h] BYREF
  std::string v12; // [rsp+40h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 app_id:159 64 8 8 lock:162 96 8 6 it:164";
  *(_QWORD *)(v3 + 16) = GateserverMgr::syncGateserverLoad;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = app_id;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64), &this->mu_);
  *(std::map<unsigned int,GateserverInfo>::iterator *)(v3 + 96) = std::map<unsigned int,GateserverInfo>::find(
                                                                    &this->gateserver_map_,
                                                                    (const std::map<unsigned int,GateserverInfo>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,GateserverInfo>::end(&this->gateserver_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GateserverInfo> >::_Self *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gateserver_mgr.cpp",
      "syncGateserverLoad",
      167);
    common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v12, *(_DWORD *)(v3 + 48));
    v6 = (const char *)std::string::c_str(&v12);
    common::milog::MiLogStream::operator()(&v11, "fail to find gateserver app_id=%s", v6);
    std::string::~string(&v12);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v7 = 1;
  }
  else
  {
    ServerLBMgr::updateLoad(&this->lb_mgr_, *(_DWORD *)(v3 + 48), load);
    v7 = 0;
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64));
  result = v7;
  if ( v13 == (char *)v3 )
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
  return result;
};

// Line 178: range 000000000C61059E-000000000C610749
ServerLBMgrConfig __cdecl GateserverMgr::getLBConfigFromSelfConfig(
        GateserverMgr *const this,
        const GateserverMgrConfig *self_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  ServerLBMgrConfig v5; // rax
  char v6[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 lb_config:181";
  *(_QWORD *)(v2 + 16) = GateserverMgr::getLBConfigFromSelfConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  ServerLBMgrConfig::ServerLBMgrConfig((ServerLBMgrConfig *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)self_config >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)self_config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)self_config >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(self_config);
  }
  *(_DWORD *)(v2 + 32) = self_config->threshold_load_0;
  if ( *(_BYTE *)(((unsigned __int64)&self_config->threshold_load_1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)self_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&self_config->threshold_load_1 >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&self_config->threshold_load_1);
  }
  *(_DWORD *)(v2 + 36) = self_config->threshold_load_1;
  if ( *(_BYTE *)(((unsigned __int64)&self_config->choose_add_load >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)self_config + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&self_config->choose_add_load >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&self_config->choose_add_load);
  }
  *(_DWORD *)(v2 + 40) = self_config->choose_add_load;
  *(_QWORD *)v5.threshold = *(_QWORD *)(v2 + 32);
  v5.choose_add_load = *(_DWORD *)(v2 + 40);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};
