// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/network/network_mgr.cpp

// Line 29: range 000000000C74D830-000000000C74DA2B
void __cdecl NetworkMgr::NetworkMgr(NetworkMgr *const this)
{
  int (**v1)(...); // rdx
  std::shared_ptr<common::minet::KcpServerMgr<PlayerSession> > __r; // [rsp+10h] [rbp-60h] BYREF
  std::shared_ptr<common::minet::AClientMgr<GameserverConnect> > v3; // [rsp+20h] [rbp-50h] BYREF
  std::shared_ptr<common::minet::AClientMgr<DispatchConnect> > v4; // [rsp+30h] [rbp-40h] BYREF
  std::shared_ptr<common::minet::AClientMgr<PathfindingserverConnect> > v5; // [rsp+40h] [rbp-30h] BYREF
  std::shared_ptr<common::minet::AClientMgr<TothemoonserverConnect> > v6; // [rsp+50h] [rbp-20h] BYREF

  NetworkMgrBase::NetworkMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NetworkMgrBase = v1;
  std::shared_ptr<common::minet::KcpServerMgrBase>::shared_ptr(&this->player_server_ptr_);
  std::shared_ptr<common::minet::AClientMgr<GameserverConnect>>::shared_ptr(&this->gameserver_ptr_);
  std::shared_ptr<common::minet::AClientBase>::shared_ptr(&this->dispatch_ptr_);
  std::shared_ptr<common::minet::AClientMgr<PathfindingserverConnect>>::shared_ptr(&this->pathfinding_ptr_);
  std::shared_ptr<common::minet::AClientMgr<TothemoonserverConnect>>::shared_ptr(&this->tothemoon_ptr_);
  common::tools::perf::make_shared<common::minet::KcpServerMgr<PlayerSession>>();
  std::shared_ptr<common::minet::KcpServerMgrBase>::operator=<common::minet::KcpServerMgr<PlayerSession>>(
    &this->player_server_ptr_,
    &__r);
  std::shared_ptr<common::minet::KcpServerMgr<PlayerSession>>::~shared_ptr(&__r);
  common::tools::perf::make_shared<common::minet::AClientMgr<GameserverConnect>>();
  std::shared_ptr<common::minet::AClientMgr<GameserverConnect>>::operator=(&this->gameserver_ptr_, &v3);
  std::shared_ptr<common::minet::AClientMgr<GameserverConnect>>::~shared_ptr(&v3);
  common::tools::perf::make_shared<common::minet::AClientMgr<DispatchConnect>>();
  std::shared_ptr<common::minet::AClientBase>::operator=<common::minet::AClientMgr<DispatchConnect>>(
    &this->dispatch_ptr_,
    &v4);
  std::shared_ptr<common::minet::AClientMgr<DispatchConnect>>::~shared_ptr(&v4);
  common::tools::perf::make_shared<common::minet::AClientMgr<PathfindingserverConnect>>();
  std::shared_ptr<common::minet::AClientMgr<PathfindingserverConnect>>::operator=(&this->pathfinding_ptr_, &v5);
  std::shared_ptr<common::minet::AClientMgr<PathfindingserverConnect>>::~shared_ptr(&v5);
  common::tools::perf::make_shared<common::minet::AClientMgr<TothemoonserverConnect>>();
  std::shared_ptr<common::minet::AClientMgr<TothemoonserverConnect>>::operator=(&this->tothemoon_ptr_, &v6);
  std::shared_ptr<common::minet::AClientMgr<TothemoonserverConnect>>::~shared_ptr(&v6);
};

// Line 43: range 000000000C74DA2C-000000000C74EE7F
int32_t __cdecl NetworkMgr::init(NetworkMgr *const this, common::tools::PTree *pt)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GateserverApp *v6; // rax
  _BOOL4 v7; // r15d
  GateserverApp *v8; // rax
  GateserverApp *v9; // r15
  GateserverApp *v10; // rax
  uint32_t AppId; // eax
  common::minet::KcpServerMgrBase *v12; // rax
  _BOOL4 v13; // r15d
  Json::Value_0 *v14; // rax
  bool v15; // r15
  _BOOL4 v16; // r15d
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r15
  unsigned __int64 v19; // rax
  GateserverApp *v20; // rax
  __int64 v21; // rsi
  Json::Value_0 *v22; // rax
  bool v23; // r15
  _BOOL4 v24; // r15d
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r15
  unsigned __int64 v27; // rax
  GateserverApp *v28; // rax
  __int64 v29; // rsi
  Json::Value_0 *v30; // rax
  bool v31; // r15
  _BOOL4 v32; // r15d
  std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // r15
  unsigned __int64 v35; // rax
  GateserverApp *v36; // rax
  __int64 v37; // rsi
  Json::Value_0 *v38; // rax
  bool v39; // r15
  int v40; // r15d
  std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // r15
  unsigned __int64 v43; // rax
  GateserverApp *v44; // rax
  __int64 v45; // rsi
  int32_t result; // eax
  std::string v47; // [rsp+0h] [rbp-1C0h]
  unsigned int (__fastcall *v48)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-1B8h]
  unsigned int (__fastcall *v49)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-1B8h]
  unsigned int (__fastcall *v50)(std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-1B8h]
  unsigned int (__fastcall *v51)(std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-1B8h]
  std::allocator<char> __a; // [rsp+22h] [rbp-19Eh] BYREF
  bool rewrite_with_remote_json; // [rsp+23h] [rbp-19Dh]
  uint32_t port_player; // [rsp+24h] [rbp-19Ch]
  std::string value; // [rsp+30h] [rbp-190h] BYREF
  common::milog::MiLogStream v56; // [rsp+50h] [rbp-170h] BYREF
  char v57[336]; // [rsp+70h] [rbp-150h] BYREF

  *(&v47._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v47._anon_0._M_allocated_capacity = (std::string::size_type)pt;
  v3 = (unsigned __int64)v57;
  v47._M_dataplus._M_p = v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 8 12 player_pt:72 80 8 8 gs_pt:82 112 8 8 dp_pt:98 144 8 9 pf_pt:114 176 8 9 tm_pt:130 208 "
                        "40 16 remote_config:48";
  *(_QWORD *)(v3 + 16) = NetworkMgr::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  rewrite_with_remote_json = 0;
  Json::Value::Value(v3 + 208, 0LL);
  if ( !NetworkMgrBase::getCMDBConfigFromPTree(pt, (Json::Value *)(v3 + 208)) )
    rewrite_with_remote_json = 1;
  if ( !rewrite_with_remote_json )
    goto LABEL_11;
  v6 = Singleton<GateserverApp>::instance();
  if ( AppBase::rewriteServerConfig((AppBase *const)v6, (const Json::Value *)(v3 + 208)) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      58);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v56,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v56);
    v2 = -1;
    v7 = 0;
    goto LABEL_55;
  }
  v8 = Singleton<GateserverApp>::instance();
  if ( AppBase::rewriteAppHostConfig((AppBase *const)v8, (const Json::Value *)(v3 + 208)) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      63);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v56,
      (const char (*)[28])"rewriteAppHostConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v56);
    v2 = -1;
    v7 = 0;
  }
  else
  {
LABEL_11:
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v56, "Root.NetConf.PlayerServerConf", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v56);
    std::string::~string(&v56);
    std::allocator<char>::~allocator(&__a);
    v9 = Singleton<GateserverApp>::instance();
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v56, "port_player", &__a);
    v10 = Singleton<GateserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v10);
    port_player = AppBase::findAppPort((AppBase *const)v9, AppId, v47);
    std::string::~string(&v56);
    std::allocator<char>::~allocator(&__a);
    std::to_string(&value, port_player);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v56, "ListenPort.<xmlattr>.value", &__a);
    common::tools::PTree::putValue((common::tools::PTree *const)(v3 + 48), (const std::string *)&v56, &value);
    std::string::~string(&v56);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    v12 = std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v47._anon_0._M_allocated_capacity + 1) + 8));
    if ( common::minet::KcpServerMgrBase::init(v12, (const common::tools::PTree *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/network_mgr.cpp",
        "init",
        78);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        &v56,
        (const char (*)[47])"init with Root.NetConf.PlayerServerConf failed");
      common::milog::MiLogStream::~MiLogStream(&v56);
      v2 = -1;
      v13 = 0;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v56,
        "Root.NetConf.GameserverClientConf",
        &__a);
      common::tools::PTree::getChild(
        (const common::tools::PTree *const)v47._anon_0._M_allocated_capacity,
        (const std::string *)&v56);
      std::string::~string(&v56);
      std::allocator<char>::~allocator(&__a);
      if ( rewrite_with_remote_json
        && (std::allocator<char>::allocator(&__a),
            std::string::basic_string<std::allocator<char>>((std::string *const)&v56, "port_gt", &__a),
            v14 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 208), "gameserver"),
            v15 = NetworkMgrBase::convertConnectionListJsonToPTree(
                    (const Json::Value *)v14,
                    (const std::string *)&v56,
                    (common::tools::PTree *)(v3 + 80)) != 0,
            std::string::~string(&v56),
            std::allocator<char>::~allocator(&__a),
            v15) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/network_mgr.cpp",
          "init",
          87);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v56,
          (const char (*)[33])"convert gameserver config failed");
        common::milog::MiLogStream::~MiLogStream(&v56);
        v2 = -1;
        v16 = 0;
      }
      else
      {
        v17 = std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v47._anon_0._M_allocated_capacity + 1) + 24));
        v18 = v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v17);
        v19 = (unsigned __int64)(v18->_vptr_AClientBase + 1);
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v18->_vptr_AClientBase + 1);
        v48 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v19;
        v20 = Singleton<GateserverApp>::instance();
        v21 = AppBase::getAppId((AppBase *const)v20);
        if ( v48(v18, v21, v3 + 80) )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/network_mgr.cpp",
            "init",
            93);
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v56,
            (const char (*)[46])"init Root.NetConf.GameserverClientConf failed");
          common::milog::MiLogStream::~MiLogStream(&v56);
          v2 = -1;
          v16 = 0;
        }
        else
        {
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)&v56,
            "Root.NetConf.DispatchClientConf",
            &__a);
          common::tools::PTree::getChild(
            (const common::tools::PTree *const)v47._anon_0._M_allocated_capacity,
            (const std::string *)&v56);
          std::string::~string(&v56);
          std::allocator<char>::~allocator(&__a);
          if ( rewrite_with_remote_json
            && (std::allocator<char>::allocator(&__a),
                std::string::basic_string<std::allocator<char>>((std::string *const)&v56, "port_gt", &__a),
                v22 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 208), "dispatch"),
                v23 = NetworkMgrBase::convertConnectionListJsonToPTree(
                        (const Json::Value *)v22,
                        (const std::string *)&v56,
                        (common::tools::PTree *)(v3 + 112)) != 0,
                std::string::~string(&v56),
                std::allocator<char>::~allocator(&__a),
                v23) )
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/network/network_mgr.cpp",
              "init",
              103);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v56,
              (const char (*)[31])"convert dispatch config failed");
            common::milog::MiLogStream::~MiLogStream(&v56);
            v2 = -1;
            v24 = 0;
          }
          else
          {
            v25 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v47._anon_0._M_allocated_capacity + 1) + 40));
            v26 = v25;
            if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v25);
            v27 = (unsigned __int64)(v26->_vptr_AClientBase + 1);
            if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v26->_vptr_AClientBase + 1);
            v49 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v27;
            v28 = Singleton<GateserverApp>::instance();
            v29 = AppBase::getAppId((AppBase *const)v28);
            if ( v49(v26, v29, v3 + 112) )
            {
              common::milog::MiLogStream::create(
                &v56,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/network/network_mgr.cpp",
                "init",
                109);
              common::milog::MiLogStream::operator()(&v56, "init dispatch failed");
              common::milog::MiLogStream::~MiLogStream(&v56);
              v2 = -1;
              v24 = 0;
            }
            else
            {
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)&v56,
                "Root.NetConf.PathfindingClientConf",
                &__a);
              common::tools::PTree::getChild(
                (const common::tools::PTree *const)v47._anon_0._M_allocated_capacity,
                (const std::string *)&v56);
              std::string::~string(&v56);
              std::allocator<char>::~allocator(&__a);
              if ( rewrite_with_remote_json
                && (std::allocator<char>::allocator(&__a),
                    std::string::basic_string<std::allocator<char>>((std::string *const)&v56, "port_gt", &__a),
                    v30 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 208), "pathfindingserver"),
                    v31 = NetworkMgrBase::convertConnectionListJsonToPTree(
                            (const Json::Value *)v30,
                            (const std::string *)&v56,
                            (common::tools::PTree *)(v3 + 144)) != 0,
                    std::string::~string(&v56),
                    std::allocator<char>::~allocator(&__a),
                    v31) )
              {
                common::milog::MiLogStream::create(
                  &v56,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/network/network_mgr.cpp",
                  "init",
                  119);
                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v56,
                  (const char (*)[34])"convert pathfinding config failed");
                common::milog::MiLogStream::~MiLogStream(&v56);
                v2 = -1;
                v32 = 0;
              }
              else
              {
                v33 = std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v47._anon_0._M_allocated_capacity + 1) + 56));
                v34 = v33;
                if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v33);
                v35 = (unsigned __int64)(v34->_vptr_AClientBase + 1);
                if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v34->_vptr_AClientBase + 1);
                v50 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v35;
                v36 = Singleton<GateserverApp>::instance();
                v37 = AppBase::getAppId((AppBase *const)v36);
                if ( v50(v34, v37, v3 + 144) )
                {
                  common::milog::MiLogStream::create(
                    &v56,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/network/network_mgr.cpp",
                    "init",
                    125);
                  common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v56,
                    (const char (*)[47])"init Root.NetConf.PathfindingClientConf failed");
                  common::milog::MiLogStream::~MiLogStream(&v56);
                  v2 = -1;
                  v32 = 0;
                }
                else
                {
                  std::allocator<char>::allocator(&__a);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)&v56,
                    "Root.NetConf.TothemoonClientConf",
                    &__a);
                  common::tools::PTree::getChild(
                    (const common::tools::PTree *const)v47._anon_0._M_allocated_capacity,
                    (const std::string *)&v56);
                  std::string::~string(&v56);
                  std::allocator<char>::~allocator(&__a);
                  if ( rewrite_with_remote_json
                    && (std::allocator<char>::allocator(&__a),
                        std::string::basic_string<std::allocator<char>>((std::string *const)&v56, "port_gt", &__a),
                        v38 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 208), "tothemoonserver"),
                        v39 = NetworkMgrBase::convertConnectionListJsonToPTree(
                                (const Json::Value *)v38,
                                (const std::string *)&v56,
                                (common::tools::PTree *)(v3 + 176)) != 0,
                        std::string::~string(&v56),
                        std::allocator<char>::~allocator(&__a),
                        v39) )
                  {
                    common::milog::MiLogStream::create(
                      &v56,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/network/network_mgr.cpp",
                      "init",
                      135);
                    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v56,
                      (const char (*)[32])"convert tothemoon config failed");
                    common::milog::MiLogStream::~MiLogStream(&v56);
                    v2 = -1;
                    v40 = 0;
                  }
                  else
                  {
                    v41 = std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v47._anon_0._M_allocated_capacity + 1) + 72));
                    v42 = v41;
                    if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
                      __asan_report_load8(v41);
                    v43 = (unsigned __int64)(v42->_vptr_AClientBase + 1);
                    if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
                      __asan_report_load8(v42->_vptr_AClientBase + 1);
                    v51 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v43;
                    v44 = Singleton<GateserverApp>::instance();
                    v45 = AppBase::getAppId((AppBase *const)v44);
                    if ( v51(v42, v45, v3 + 176) )
                    {
                      common::milog::MiLogStream::create(
                        &v56,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/network/network_mgr.cpp",
                        "init",
                        141);
                      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        &v56,
                        (const char (*)[45])"init Root.NetConf.TothemoonClientConf failed");
                      common::milog::MiLogStream::~MiLogStream(&v56);
                      v2 = -1;
                      v40 = 0;
                    }
                    else
                    {
                      v40 = 1;
                    }
                  }
                  common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 176));
                  v32 = v40 == 1;
                }
              }
              common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 144));
              v24 = v32;
            }
          }
          common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 112));
          v16 = v24;
        }
      }
      common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 80));
      v13 = v16;
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 48));
    v7 = v13;
  }
LABEL_55:
  Json::Value::~Value((Json::Value_0 *const)(v3 + 208));
  if ( v7 )
    v2 = 0;
  result = v2;
  if ( v47._M_dataplus._M_p == (std::string::pointer)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 158: range 000000000C74EE80-000000000C7500B8
int32_t __cdecl NetworkMgr::reload(NetworkMgr *const this, common::tools::PTree *pt)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GateserverApp *v6; // rax
  _BOOL4 v7; // r15d
  common::minet::KcpServerMgrBase *v8; // rax
  _BOOL4 v9; // r15d
  Json::Value_0 *v10; // rax
  bool v11; // r15
  _BOOL4 v12; // r15d
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r15
  unsigned __int64 v15; // rax
  GateserverApp *v16; // rax
  __int64 AppId; // rsi
  Json::Value_0 *v18; // rax
  bool v19; // r15
  _BOOL4 v20; // r15d
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r15
  unsigned __int64 v23; // rax
  GateserverApp *v24; // rax
  __int64 v25; // rsi
  Json::Value_0 *v26; // rax
  bool v27; // r15
  _BOOL4 v28; // r15d
  std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r15
  unsigned __int64 v31; // rax
  GateserverApp *v32; // rax
  __int64 v33; // rsi
  Json::Value_0 *v34; // rax
  bool v35; // r15
  int v36; // r15d
  std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // r15
  unsigned __int64 v39; // rax
  GateserverApp *v40; // rax
  __int64 v41; // rsi
  int32_t result; // eax
  unsigned int (__fastcall *v43)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-198h]
  unsigned int (__fastcall *v44)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-198h]
  unsigned int (__fastcall *v45)(std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-198h]
  unsigned int (__fastcall *v46)(std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-198h]
  std::allocator<char> __a; // [rsp+26h] [rbp-17Ah] BYREF
  bool rewrite_with_remote_json; // [rsp+27h] [rbp-179h]
  common::milog::MiLogStream v50; // [rsp+30h] [rbp-170h] BYREF
  char v51[336]; // [rsp+50h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 8 13 player_pt:181 80 8 9 gs_pt:189 112 8 9 dp_pt:205 144 8 9 pf_pt:221 176 8 9 tm_pt:237 2"
                        "08 40 17 remote_config:163";
  *(_QWORD *)(v3 + 16) = NetworkMgr::reload;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  rewrite_with_remote_json = 0;
  Json::Value::Value(v3 + 208, 0LL);
  if ( !NetworkMgrBase::getCMDBConfigFromPTree(pt, (Json::Value *)(v3 + 208)) )
    rewrite_with_remote_json = 1;
  if ( rewrite_with_remote_json
    && (v6 = Singleton<GateserverApp>::instance(),
        AppBase::rewriteServerConfig((AppBase *const)v6, (const Json::Value *)(v3 + 208))) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "reload",
      174);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v50,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v50);
    v2 = -1;
    v7 = 0;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v50, "Root.NetConf.PlayerServerConf", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v50);
    std::string::~string(&v50);
    std::allocator<char>::~allocator(&__a);
    v8 = std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_server_ptr_);
    if ( common::minet::KcpServerMgrBase::reload(v8, (const common::tools::PTree *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/network_mgr.cpp",
        "reload",
        184);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        &v50,
        (const char (*)[49])"reload with Root.NetConf.PlayerServerConf failed");
      common::milog::MiLogStream::~MiLogStream(&v50);
      v2 = -1;
      v9 = 0;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v50,
        "Root.NetConf.GameserverClientConf",
        &__a);
      common::tools::PTree::getChild(pt, (const std::string *)&v50);
      std::string::~string(&v50);
      std::allocator<char>::~allocator(&__a);
      if ( rewrite_with_remote_json
        && (std::allocator<char>::allocator(&__a),
            std::string::basic_string<std::allocator<char>>((std::string *const)&v50, "port_gt", &__a),
            v10 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 208), "gameserver"),
            v11 = NetworkMgrBase::convertConnectionListJsonToPTree(
                    (const Json::Value *)v10,
                    (const std::string *)&v50,
                    (common::tools::PTree *)(v3 + 80)) != 0,
            std::string::~string(&v50),
            std::allocator<char>::~allocator(&__a),
            v11) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/network_mgr.cpp",
          "reload",
          194);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v50,
          (const char (*)[33])"convert gameserver config failed");
        common::milog::MiLogStream::~MiLogStream(&v50);
        v2 = -1;
        v12 = 0;
      }
      else
      {
        v13 = std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gameserver_ptr_);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v13);
        v15 = (unsigned __int64)(v14->_vptr_AClientBase + 2);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v14->_vptr_AClientBase + 2);
        v43 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v15;
        v16 = Singleton<GateserverApp>::instance();
        AppId = AppBase::getAppId((AppBase *const)v16);
        if ( v43(v14, AppId, v3 + 80) )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/network_mgr.cpp",
            "reload",
            200);
          common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v50,
            (const char (*)[48])"reload Root.NetConf.GameserverClientConf failed");
          common::milog::MiLogStream::~MiLogStream(&v50);
          v2 = -1;
          v12 = 0;
        }
        else
        {
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)&v50,
            "Root.NetConf.DispatchClientConf",
            &__a);
          common::tools::PTree::getChild(pt, (const std::string *)&v50);
          std::string::~string(&v50);
          std::allocator<char>::~allocator(&__a);
          if ( rewrite_with_remote_json
            && (std::allocator<char>::allocator(&__a),
                std::string::basic_string<std::allocator<char>>((std::string *const)&v50, "port_gt", &__a),
                v18 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 208), "dispatch"),
                v19 = NetworkMgrBase::convertConnectionListJsonToPTree(
                        (const Json::Value *)v18,
                        (const std::string *)&v50,
                        (common::tools::PTree *)(v3 + 112)) != 0,
                std::string::~string(&v50),
                std::allocator<char>::~allocator(&__a),
                v19) )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/network/network_mgr.cpp",
              "reload",
              210);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v50,
              (const char (*)[31])"convert dispatch config failed");
            common::milog::MiLogStream::~MiLogStream(&v50);
            v2 = -1;
            v20 = 0;
          }
          else
          {
            v21 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->dispatch_ptr_);
            v22 = v21;
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v21);
            v23 = (unsigned __int64)(v22->_vptr_AClientBase + 2);
            if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v22->_vptr_AClientBase + 2);
            v44 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v23;
            v24 = Singleton<GateserverApp>::instance();
            v25 = AppBase::getAppId((AppBase *const)v24);
            if ( v44(v22, v25, v3 + 112) )
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/network/network_mgr.cpp",
                "reload",
                216);
              common::milog::MiLogStream::operator()(&v50, "reload dispatch failed");
              common::milog::MiLogStream::~MiLogStream(&v50);
              v2 = -1;
              v20 = 0;
            }
            else
            {
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)&v50,
                "Root.NetConf.PathfindingClientConf",
                &__a);
              common::tools::PTree::getChild(pt, (const std::string *)&v50);
              std::string::~string(&v50);
              std::allocator<char>::~allocator(&__a);
              if ( rewrite_with_remote_json
                && (std::allocator<char>::allocator(&__a),
                    std::string::basic_string<std::allocator<char>>((std::string *const)&v50, "port_gt", &__a),
                    v26 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 208), "pathfindingserver"),
                    v27 = NetworkMgrBase::convertConnectionListJsonToPTree(
                            (const Json::Value *)v26,
                            (const std::string *)&v50,
                            (common::tools::PTree *)(v3 + 144)) != 0,
                    std::string::~string(&v50),
                    std::allocator<char>::~allocator(&__a),
                    v27) )
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/network/network_mgr.cpp",
                  "reload",
                  226);
                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v50,
                  (const char (*)[34])"convert pathfinding config failed");
                common::milog::MiLogStream::~MiLogStream(&v50);
                v2 = -1;
                v28 = 0;
              }
              else
              {
                v29 = std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->pathfinding_ptr_);
                v30 = v29;
                if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v29);
                v31 = (unsigned __int64)(v30->_vptr_AClientBase + 2);
                if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v30->_vptr_AClientBase + 2);
                v45 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v31;
                v32 = Singleton<GateserverApp>::instance();
                v33 = AppBase::getAppId((AppBase *const)v32);
                if ( v45(v30, v33, v3 + 144) )
                {
                  common::milog::MiLogStream::create(
                    &v50,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/network/network_mgr.cpp",
                    "reload",
                    232);
                  common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v50,
                    (const char (*)[49])"reload Root.NetConf.PathfindingClientConf failed");
                  common::milog::MiLogStream::~MiLogStream(&v50);
                  v2 = -1;
                  v28 = 0;
                }
                else
                {
                  std::allocator<char>::allocator(&__a);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)&v50,
                    "Root.NetConf.TothemoonClientConf",
                    &__a);
                  common::tools::PTree::getChild(pt, (const std::string *)&v50);
                  std::string::~string(&v50);
                  std::allocator<char>::~allocator(&__a);
                  if ( rewrite_with_remote_json
                    && (std::allocator<char>::allocator(&__a),
                        std::string::basic_string<std::allocator<char>>((std::string *const)&v50, "port_gt", &__a),
                        v34 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 208), "tothemoonserver"),
                        v35 = NetworkMgrBase::convertConnectionListJsonToPTree(
                                (const Json::Value *)v34,
                                (const std::string *)&v50,
                                (common::tools::PTree *)(v3 + 176)) != 0,
                        std::string::~string(&v50),
                        std::allocator<char>::~allocator(&__a),
                        v35) )
                  {
                    common::milog::MiLogStream::create(
                      &v50,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/network/network_mgr.cpp",
                      "reload",
                      242);
                    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v50,
                      (const char (*)[32])"convert tothemoon config failed");
                    common::milog::MiLogStream::~MiLogStream(&v50);
                    v2 = -1;
                    v36 = 0;
                  }
                  else
                  {
                    v37 = std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->tothemoon_ptr_);
                    v38 = v37;
                    if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
                      __asan_report_load8(v37);
                    v39 = (unsigned __int64)(v38->_vptr_AClientBase + 2);
                    if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
                      __asan_report_load8(v38->_vptr_AClientBase + 2);
                    v46 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v39;
                    v40 = Singleton<GateserverApp>::instance();
                    v41 = AppBase::getAppId((AppBase *const)v40);
                    if ( v46(v38, v41, v3 + 176) )
                    {
                      common::milog::MiLogStream::create(
                        &v50,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/network/network_mgr.cpp",
                        "reload",
                        248);
                      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        &v50,
                        (const char (*)[47])"reload Root.NetConf.TothemoonClientConf failed");
                      common::milog::MiLogStream::~MiLogStream(&v50);
                      v2 = -1;
                      v36 = 0;
                    }
                    else
                    {
                      v36 = 1;
                    }
                  }
                  common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 176));
                  v28 = v36 == 1;
                }
              }
              common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 144));
              v20 = v28;
            }
          }
          common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 112));
          v12 = v20;
        }
      }
      common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 80));
      v9 = v12;
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 48));
    v7 = v9;
  }
  Json::Value::~Value((Json::Value_0 *const)(v3 + 208));
  if ( v7 )
    v2 = 0;
  result = v2;
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 262: range 000000000C7500BA-000000000C7505A1
int32_t __cdecl NetworkMgr::start(NetworkMgr *const this)
{
  common::minet::KcpServerMgrBase *v1; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rdx
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rdx
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  int32_t ret; // [rsp+18h] [rbp-38h]
  int32_t reta; // [rsp+18h] [rbp-38h]
  int32_t retb; // [rsp+18h] [rbp-38h]
  int32_t retc; // [rsp+18h] [rbp-38h]
  int32_t retd; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-30h] BYREF

  v1 = std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_server_ptr_);
  ret = common::minet::KcpServerMgrBase::start(v1);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "start",
      266);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v18,
      (const char (*)[31])"player_server_ptr start failed");
    common::milog::MiLogStream::~MiLogStream(&v18);
    return ret;
  }
  else
  {
    v3 = std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gameserver_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3);
    v4 = (unsigned __int64)(v3->_vptr_AClientBase + 3);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3->_vptr_AClientBase + 3);
    reta = (*(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v4)(v3);
    if ( reta )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/network_mgr.cpp",
        "start",
        272);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v18,
        (const char (*)[29])"game_server_ptr start failed");
      common::milog::MiLogStream::~MiLogStream(&v18);
      return reta;
    }
    else
    {
      v5 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->dispatch_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v5);
      v6 = (unsigned __int64)(v5->_vptr_AClientBase + 3);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v5->_vptr_AClientBase + 3);
      retb = (*(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v6)(v5);
      if ( retb )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/network_mgr.cpp",
          "start",
          278);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v18,
          (const char (*)[29])"gate_server_ptr start failed");
        common::milog::MiLogStream::~MiLogStream(&v18);
        return retb;
      }
      else
      {
        v7 = std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->pathfinding_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v7);
        v8 = (unsigned __int64)(v7->_vptr_AClientBase + 3);
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v7->_vptr_AClientBase + 3);
        retc = (*(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v8)(v7);
        if ( retc )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/network_mgr.cpp",
            "start",
            285);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v18,
            (const char (*)[30])"pathfinding_ptr_ start failed");
          common::milog::MiLogStream::~MiLogStream(&v18);
          return retc;
        }
        else
        {
          v9 = std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->tothemoon_ptr_);
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v9);
          v10 = (unsigned __int64)(v9->_vptr_AClientBase + 3);
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v9->_vptr_AClientBase + 3);
          retd = (*(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v10)(v9);
          if ( retd )
          {
            common::milog::MiLogStream::create(
              &v18,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/network/network_mgr.cpp",
              "start",
              292);
            common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v18,
              (const char (*)[28])"tothemoon_ptr_ start failed");
            common::milog::MiLogStream::~MiLogStream(&v18);
            return retd;
          }
          else
          {
            v11 = std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gameserver_ptr_);
            if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v11);
            v12 = (unsigned __int64)(v11->_vptr_AClientBase + 8);
            if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v11->_vptr_AClientBase + 8);
            if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12)(v11) )
            {
              return 0;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v18,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/network/network_mgr.cpp",
                "start",
                299);
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v18,
                (const char (*)[41])"gameserver_ptr_->getConnectNum return 0!");
              common::milog::MiLogStream::~MiLogStream(&v18);
              return -1;
            }
          }
        }
      }
    }
  }
};

// Line 308: range 000000000C7505A2-000000000C75070B
bool __cdecl NetworkMgr::isRun(NetworkMgr *const this)
{
  common::minet::KcpServerMgrBase *v1; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  unsigned __int64 v3; // rdx
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rdx
  std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx

  v1 = std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_server_ptr_);
  if ( !common::minet::KcpServerMgrBase::isRun(v1) )
    return 0;
  v2 = std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gameserver_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2);
  v3 = (unsigned __int64)(v2->_vptr_AClientBase + 7);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2->_vptr_AClientBase + 7);
  if ( !(*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v3)(v2) )
    return 0;
  v4 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->dispatch_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v4);
  v5 = (unsigned __int64)(v4->_vptr_AClientBase + 7);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v4->_vptr_AClientBase + 7);
  if ( !(*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v5)(v4) )
    return 0;
  v6 = std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->pathfinding_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6);
  v7 = (unsigned __int64)(v6->_vptr_AClientBase + 7);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6->_vptr_AClientBase + 7);
  return (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6) != 0;
};

// Line 314: range 000000000C75070C-000000000C75078D
int32_t __cdecl NetworkMgr::stop(NetworkMgr *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/network/network_mgr.cpp",
    "stop",
    315);
  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
    &v2,
    (const char (*)[31])"Cannot invoke NetworkMgr::stop");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return -1;
};

// Line 320: range 000000000C75078E-000000000C7507FB
int32_t __cdecl NetworkMgr::stopDispatchClient(NetworkMgr *const this)
{
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->dispatch_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1);
  v2 = (unsigned __int64)(v1->_vptr_AClientBase + 6);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1->_vptr_AClientBase + 6);
  return (*(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v2)(v1);
};

// Line 325: range 000000000C7507FC-000000000C750826
int32_t __cdecl NetworkMgr::stopPlayerServer(NetworkMgr *const this)
{
  common::minet::KcpServerMgrBase *v1; // rax

  v1 = std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_server_ptr_);
  common::minet::KcpServerMgrBase::stop(v1);
  return 0;
};

// Line 336: range 000000000C750828-000000000C750895
int32_t __cdecl NetworkMgr::stopGameserverClient(NetworkMgr *const this)
{
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gameserver_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1);
  v2 = (unsigned __int64)(v1->_vptr_AClientBase + 6);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1->_vptr_AClientBase + 6);
  return (*(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v2)(v1);
};

// Line 341: range 000000000C750896-000000000C750903
int32_t __cdecl NetworkMgr::stopPathfindingClient(NetworkMgr *const this)
{
  std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->pathfinding_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1);
  v2 = (unsigned __int64)(v1->_vptr_AClientBase + 6);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1->_vptr_AClientBase + 6);
  return (*(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v2)(v1);
};

// Line 346: range 000000000C750904-000000000C750971
int32_t __cdecl NetworkMgr::stopTothemoonClient(NetworkMgr *const this)
{
  std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->tothemoon_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1);
  v2 = (unsigned __int64)(v1->_vptr_AClientBase + 6);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1->_vptr_AClientBase + 6);
  return (*(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v2)(v1);
};

// Line 352: range 000000000C750972-000000000C7516FE
int32_t __cdecl NetworkMgr::sendPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r12d
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t TargetService; // eax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r12
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  common::minet::Packet *v16; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rbx
  unsigned __int64 v19; // rax
  __int64 (__fastcall *v20)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD); // r12
  common::minet::Packet *v21; // rax
  uint32_t TargetAppId; // r15d
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rbx
  unsigned __int64 v25; // rax
  common::minet::Packet *v26; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  int v28; // r15d
  common::minet::Packet *v29; // rax
  std::vector<unsigned int>::reference v30; // rax
  uint32_t *v31; // rdx
  std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rbx
  unsigned __int64 v34; // rax
  __int64 (__fastcall *v35)(std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD); // r12
  common::minet::Packet *v36; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  int v38; // r15d
  common::minet::Packet *v39; // rax
  std::vector<unsigned int>::reference v40; // rax
  uint32_t *v41; // rdx
  std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rbx
  unsigned __int64 v44; // rax
  __int64 (__fastcall *v45)(std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD); // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  common::minet::Packet *v47; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  __int64 (__fastcall *v51)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD, __int64); // r12
  common::minet::Packet *v52; // rax
  uint32_t SendOffset; // r15d
  int32_t result; // eax
  uint32_t target_app_id; // [rsp+28h] [rbp-118h]
  uint32_t target_app_id_0; // [rsp+2Ch] [rbp-114h]
  uint32_t size_0; // [rsp+30h] [rbp-110h]
  uint32_t index_0; // [rsp+34h] [rbp-10Ch]
  uint32_t size; // [rsp+38h] [rbp-108h]
  uint32_t index; // [rsp+3Ch] [rbp-104h]
  std::shared_ptr<common::minet::Packet> v61; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v62; // [rsp+50h] [rbp-F0h] BYREF
  char v63[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 session_id:364 64 16 15 session_ptr:365 96 24 21 target_app_id_vec:415";
  *(_QWORD *)(v3 + 16) = NetworkMgr::sendPacket;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "sendPacket",
      355);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v62, (const char (*)[22])"packet_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v62);
    v2 = -1;
    goto LABEL_75;
  }
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  TargetService = common::minet::Packet::getTargetService(v6);
  if ( TargetService == 19 )
  {
    v36 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    target_app_id_0 = common::minet::Packet::getTargetAppId(v36);
    if ( target_app_id_0 )
      goto LABEL_53;
    v37 = std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->tothemoon_ptr_);
    common::minet::AClientMgr<TothemoonserverConnect>::getAllConnTargetAppIdVec(
      (std::vector<unsigned int> *)(v3 + 96),
      v37);
    size_0 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 96));
    if ( size_0 )
    {
      v39 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      index_0 = common::minet::Packet::getSendOffset(v39) % size_0;
      v40 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 96), index_0);
      v41 = v40;
      if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v40);
      }
      target_app_id_0 = *v41;
      v38 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/network_mgr.cpp",
        "sendPacket",
        419);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v62,
        (const char (*)[23])"getConnectNum return 0");
      common::milog::MiLogStream::~MiLogStream(&v62);
      v2 = -1;
      v38 = 0;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    if ( v38 == 1 )
    {
LABEL_53:
      if ( target_app_id_0 )
      {
        v42 = std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->tothemoon_ptr_);
        v43 = v42;
        if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v42);
        v44 = (unsigned __int64)(v43->_vptr_AClientBase + 10);
        if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v43->_vptr_AClientBase + 10);
        v45 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<TothemoonserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD))v44;
        std::shared_ptr<common::minet::Packet>::shared_ptr(&v61, p_packet_ptr);
        v2 = v45(v43, &v61, target_app_id_0);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v61);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/network_mgr.cpp",
          "sendPacket",
          434);
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          &v62,
          (const char (*)[47])"target_app_id is 0 when find SERVICE_TOTHEMOON");
        common::milog::MiLogStream::~MiLogStream(&v62);
        v2 = -1;
      }
    }
  }
  else
  {
    if ( TargetService > 0x13 )
      goto LABEL_60;
    if ( TargetService == 14 )
    {
      v26 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      target_app_id = common::minet::Packet::getTargetAppId(v26);
      if ( target_app_id )
        goto LABEL_39;
      v27 = std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->pathfinding_ptr_);
      common::minet::AClientMgr<PathfindingserverConnect>::getAllConnTargetAppIdVec(
        (std::vector<unsigned int> *)(v3 + 96),
        v27);
      size = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 96));
      if ( size )
      {
        v29 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        index = common::minet::Packet::getSendOffset(v29) % size;
        v30 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 96), index);
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        target_app_id = *v31;
        v28 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/network_mgr.cpp",
          "sendPacket",
          391);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v62,
          (const char (*)[23])"getConnectNum return 0");
        common::milog::MiLogStream::~MiLogStream(&v62);
        v2 = -1;
        v28 = 0;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( v28 == 1 )
      {
LABEL_39:
        if ( target_app_id )
        {
          v32 = std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->pathfinding_ptr_);
          v33 = v32;
          if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v32);
          v34 = (unsigned __int64)(v33->_vptr_AClientBase + 10);
          if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v33->_vptr_AClientBase + 10);
          v35 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD))v34;
          std::shared_ptr<common::minet::Packet>::shared_ptr(&v61, p_packet_ptr);
          v2 = v35(v33, &v61, target_app_id);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v61);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v62,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/network_mgr.cpp",
            "sendPacket",
            406);
          common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v62,
            (const char (*)[49])"target_app_id is 0 when find SERVICE_PATHFINDING");
          common::milog::MiLogStream::~MiLogStream(&v62);
          v2 = -1;
        }
      }
    }
    else
    {
      if ( TargetService > 0xE )
        goto LABEL_60;
      if ( TargetService != 2 )
      {
        if ( TargetService == 7 )
        {
          v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          if ( common::minet::Packet::getTargetAppId(v16) )
          {
            v17 = (std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->dispatch_ptr_);
            v18 = v17;
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v17);
            v19 = (unsigned __int64)(v18->_vptr_AClientBase + 10);
            if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v18->_vptr_AClientBase + 10);
            goto LABEL_26;
          }
          v23 = (std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->dispatch_ptr_);
          v24 = v23;
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v23);
          v25 = (unsigned __int64)(v24->_vptr_AClientBase + 11);
          if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v24->_vptr_AClientBase + 11);
          goto LABEL_74;
        }
LABEL_60:
        v46 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        if ( common::minet::Packet::getTargetService(v46) == 3 )
        {
          v47 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          if ( common::minet::Packet::getTargetAppId(v47) )
          {
            v49 = std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gameserver_ptr_);
            v18 = v49;
            if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v49);
            v19 = (unsigned __int64)(v18->_vptr_AClientBase + 10);
            if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v18->_vptr_AClientBase + 10);
LABEL_26:
            v20 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD))v19;
            v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
            TargetAppId = common::minet::Packet::getTargetAppId(v21);
            std::shared_ptr<common::minet::Packet>::shared_ptr(&v61, p_packet_ptr);
            v2 = v20(v18, &v61, TargetAppId);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&v61);
            goto LABEL_75;
          }
        }
        v50 = std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gameserver_ptr_);
        v24 = v50;
        if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v50);
        v25 = (unsigned __int64)(v24->_vptr_AClientBase + 11);
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v24->_vptr_AClientBase + 11);
LABEL_74:
        v51 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD, __int64))v25;
        v52 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        SendOffset = common::minet::Packet::getSendOffset(v52);
        std::shared_ptr<common::minet::Packet>::shared_ptr(&v61, p_packet_ptr);
        v2 = v51(v24, &v61, SendOffset, 1LL);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v61);
        goto LABEL_75;
      }
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      *(_DWORD *)(v3 + 48) = common::minet::Packet::getUserSessionId(v8);
      v9 = (unsigned int)ServiceBox::findService<GateserverService>();
      GateserverService::findPlayerSession((GateserverService *const)(v3 + 64), v9);
      if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/network_mgr.cpp",
          "sendPacket",
          368);
        v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v62,
                (const char (*)[20])"findPlayerSession: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v62);
        v2 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v12);
        v14 = (unsigned __int64)(v13->_vptr_KcpSession + 5);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v13->_vptr_KcpSession + 5);
        v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
        std::shared_ptr<common::minet::Packet>::shared_ptr(&v61, p_packet_ptr);
        v2 = v15(v13, &v61);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v61);
      }
      std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v3 + 64));
    }
  }
LABEL_75:
  result = v2;
  if ( v63 == (char *)v3 )
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

// Line 480: range 000000000C751700-000000000C751785
int32_t __cdecl NetworkMgr::broadcastPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/network/network_mgr.cpp",
    "broadcastPacket",
    481);
  common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
    &v3,
    (const char (*)[46])"Not support broadcastPacketToTargetService...");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 487: range 000000000C751786-000000000C751804
// local variable allocation has failed, the output may be wrong!
PlayerSessionPtr __cdecl NetworkMgr::findPlayerSession(NetworkMgr *const this, uint32_t session_id)
{
  uint32_t v2; // edx
  common::minet::KcpServerMgrBase *v3; // rsi
  PlayerSessionPtr result; // rax
  uint32_t session_ida; // [rsp+Ch] [rbp-24h]
  std::shared_ptr<common::minet::KcpSession> v6; // [rsp+20h] [rbp-10h] BYREF

  session_ida = v2;
  v3 = std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(_QWORD *)&session_id + 8LL));
  common::minet::KcpServerMgrBase::findSession((unsigned __int64)&v6, v3, session_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<PlayerSession,common::minet::KcpSession>((const std::shared_ptr<common::minet::KcpSession> *)this);
  std::shared_ptr<common::minet::KcpSession>::~shared_ptr(&v6);
  result._M_ptr = (std::__shared_ptr<PlayerSession,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 502: range 000000000C751806-000000000C75182B
uint32_t __cdecl NetworkMgr::getPlayerSessionNum(NetworkMgr *const this)
{
  common::minet::KcpServerMgrBase *v1; // rax

  v1 = std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_server_ptr_);
  return common::minet::KcpServerMgrBase::getSessionNum(v1);
};

// Line 512: range 000000000C75182C-000000000C751851
uint32_t __cdecl NetworkMgr::getPlayerListenPort(NetworkMgr *const this)
{
  common::minet::KcpServerMgrBase *v1; // rax

  v1 = std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_server_ptr_);
  return common::minet::KcpServerMgrBase::getListenPort(v1);
};

// Line 519: range 000000000C751852-000000000C75189B
int32_t __cdecl NetworkMgr::disconnect(
        NetworkMgr *const this,
        PlayerSession *session,
        uint32_t reason,
        uint32_t timeout)
{
  common::minet::KcpServerMgrBase *v4; // rax
  uint32_t session_id; // [rsp+2Ch] [rbp-4h]

  session_id = common::minet::KcpSession::getSessionId(session);
  v4 = std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_server_ptr_);
  return common::minet::KcpServerMgrBase::disconnect(v4, session_id, reason);
};

// Line 530: range 000000000C75189C-000000000C7519A9
std::string *__cdecl NetworkMgr::getGameServerDesc[abi:cxx11](
        std::string *retstr,
        NetworkMgr *const this,
        uint32_t app_id)
{
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rsi
  std::allocator<char> __a; // [rsp+2Fh] [rbp-11h] BYREF

  if ( std::__shared_ptr<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->gameserver_ptr_) )
  {
    v3 = std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gameserver_ptr_);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      v3 = (std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)32;
      __asan_report_store_n(retstr, 32LL);
    }
    common::minet::AClientMgr<GameserverConnect>::getDescByAppId[abi:cxx11](retstr, v3, app_id);
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, "null", &__a);
    std::allocator<char>::~allocator(&__a);
  }
  return retstr;
};

// Line 539: range 000000000C7519AA-000000000C751D38
void __cdecl NetworkMgr::monitorReport(NetworkMgr *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rbx
  std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rdx
  common::milog::MiLogStream *v5; // rbx
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rbx
  std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-30h] BYREF

  if ( std::__shared_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->player_server_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      542);
    v1 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v12,
           (const char (*)[26])"ConnectionNum Client num:");
    val = NetworkMgr::getPlayerSessionNum(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  if ( std::__shared_ptr<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->gameserver_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      546);
    v2 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v12,
           (const char (*)[24])"ConnectionNum Game num:");
    v3 = std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gameserver_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3);
    v4 = (unsigned __int64)(v3->_vptr_AClientBase + 9);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3->_vptr_AClientBase + 9);
    val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<GameserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v4)(v3);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  if ( std::__shared_ptr<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->dispatch_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      550);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v12,
           (const char (*)[28])"ConnectionNum Dispatch num:");
    v6 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->dispatch_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    v7 = (unsigned __int64)(v6->_vptr_AClientBase + 9);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6->_vptr_AClientBase + 9);
    val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  if ( std::__shared_ptr<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->pathfinding_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      554);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v12,
           (const char (*)[31])"ConnectionNum Pathfinding num:");
    v9 = std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->pathfinding_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9);
    v10 = (unsigned __int64)(v9->_vptr_AClientBase + 9);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9->_vptr_AClientBase + 9);
    val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientMgr<PathfindingserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v10)(v9);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
};
