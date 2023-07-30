// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_play_comp.cpp

// Line 37: range 000000001753D4DC-000000001753DA45
int32_t __cdecl GadgetPlayComp::initByConfig(GadgetPlayComp *const this, const GadgetParam *gadget_param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  LuaConfigMgr *p_lua_config_mgr; // r15
  uint32_t config_id; // r14d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t GroupId; // eax
  Gadget *Gadget; // rax
  GadgetCruciblePlay *p_mp_play_id; // rdi
  uint32_t mp_play_id; // r8d
  uint32_t start_cd; // edx
  common::milog::MiLogStream *v14; // r12
  Gadget *v15; // rax
  int32_t result; // eax
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 crucible_ptr:54";
  *(_QWORD *)(v2 + 16) = GadgetPlayComp::initByConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<Group>(0LL, &gadget_param->group_ptr) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "initByConfig",
      40);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v19, (const char (*)[21])"group_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 32));
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&gadget_param->config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_param->config_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    config_id = gadget_param->config_id;
    v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)&gadget_param->group_ptr);
    GroupId = Group::getGroupId(v8);
    gadget_script_config_ptr = LuaConfigMgr::findGadgetScriptConfig(p_lua_config_mgr, GroupId, config_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
    if ( gadget_script_config_ptr )
    {
      if ( !std::vector<unsigned int>::empty(&gadget_script_config_ptr->crucible_config.progress_stage_vec) )
      {
        Gadget = GadgetCompBase::getGadget(this);
        common::tools::perf::make_shared<GadgetCruciblePlay,Gadget &>((Gadget *)(v2 + 32), Gadget);
        p_mp_play_id = std::__shared_ptr_access<GadgetCruciblePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCruciblePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->crucible_config.mp_play_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->crucible_config.mp_play_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_mp_play_id = (GadgetCruciblePlay *)&gadget_script_config_ptr->crucible_config.mp_play_id;
          __asan_report_load4();
        }
        mp_play_id = gadget_script_config_ptr->crucible_config.mp_play_id;
        if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->crucible_config.start_cd >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gadget_script_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->crucible_config.start_cd >> 3)
                                                                                  + 0x7FFF8000) )
        {
          p_mp_play_id = (GadgetCruciblePlay *)&gadget_script_config_ptr->crucible_config.start_cd;
          __asan_report_load4();
        }
        start_cd = gadget_script_config_ptr->crucible_config.start_cd;
        if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->crucible_config >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->crucible_config >> 3) + 0x7FFF8000) <= 3 )
        {
          p_mp_play_id = (GadgetCruciblePlay *)&gadget_script_config_ptr->crucible_config;
          __asan_report_load4();
        }
        if ( GadgetCruciblePlay::initCrucible(
               p_mp_play_id,
               gadget_script_config_ptr->crucible_config.duration,
               start_cd,
               &gadget_script_config_ptr->crucible_config.progress_stage_vec,
               mp_play_id) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget_play_comp.cpp",
            "initByConfig",
            60);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v19,
            (const char (*)[30])"GadgetCruciblePlay init fails");
          common::milog::MiLogStream::~MiLogStream(&v19);
          v5 = -1;
        }
        else
        {
          std::shared_ptr<GadgetPlayBase>::operator=<GadgetCruciblePlay>(
            &this->play_ptr_,
            (const std::shared_ptr<GadgetCruciblePlay> *)(v2 + 32));
          v5 = 0;
        }
        std::shared_ptr<GadgetCruciblePlay>::~shared_ptr((std::shared_ptr<GadgetCruciblePlay> *const)(v2 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_play_comp.cpp",
          "initByConfig",
          67);
        v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v19, (const char (*)[23])off_26127AC0);
        v15 = GadgetCompBase::getGadget(this);
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v14, v15);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v5 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "initByConfig",
        48);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v19,
        (const char (*)[29])"findGadgetScriptConfig fails");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = -1;
    }
  }
  result = v5;
  if ( v20 == (char *)v2 )
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

// Line 72: range 000000001753DA46-000000001753DAEE
int32_t __cdecl GadgetPlayComp::toClient(const GadgetPlayComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  proto::GadgetPlayInfo *play_info; // [rsp+18h] [rbp-8h]

  if ( !std::operator!=<GadgetPlayBase>(&this->play_ptr_, 0LL) )
    return 0;
  play_info = proto::SceneGadgetInfo::mutable_play_info(gadget_info);
  v2 = (unsigned __int64)std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  v3 = *(_QWORD *)v2 + 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  return (*(__int64 (__fastcall **)(unsigned __int64, proto::GadgetPlayInfo *))v3)(v2, play_info);
};

// Line 82: range 000000001753DAF0-000000001753DC12
void __cdecl GadgetPlayComp::onBeforeLeaveScene(GadgetPlayComp *const this, const VisionContext *context)
{
  std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream *v4; // rcx
  GadgetPlayBase *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator!=<GadgetPlayBase>(&this->play_ptr_, 0LL) )
  {
    v2 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    if ( GadgetPlayBase::isStarted(v2) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/gadget/gadget_play_comp.cpp",
        "onBeforeLeaveScene",
        87);
      v4 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v6,
             (const char (*)[37])"stop play because gadget leaveScene:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v6);
      v5 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
      GadgetPlayBase::stop(v5, 0);
    }
  }
};

// Line 93: range 000000001753DC14-000000001753DD6F
int32_t __cdecl GadgetPlayComp::startPlay(GadgetPlayComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  Gadget *Gadget; // rax
  std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  GadgetPlayBase *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "startPlay",
      96);
    v1 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v6,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v1, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    v4 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    if ( GadgetPlayBase::isStarted(v4) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "startPlay",
        101);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v6,
        (const char (*)[29])"play_ptr is already started!");
      common::milog::MiLogStream::~MiLogStream(&v6);
      return -1;
    }
    else
    {
      v5 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
      return GadgetPlayBase::start(v5);
    }
  }
};

// Line 108: range 000000001753DD70-000000001753DF57
int32_t __cdecl GadgetPlayComp::stopPlay(GadgetPlayComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  Gadget *Gadget; // rax
  std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  Gadget *v6; // rax
  GadgetPlayBase *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "stopPlay",
      111);
    v1 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v8,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v1, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    v4 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    if ( !GadgetPlayBase::isStarted(v4) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "stopPlay",
        116);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v8,
        (const char (*)[25])"play_ptr is not started!");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/gadget/gadget_play_comp.cpp",
        "stopPlay",
        119);
      v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v8,
             (const char (*)[22])"GadgetPlayComp::stop ");
      v6 = GadgetCompBase::getGadget(this);
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, v6);
      common::milog::MiLogStream::~MiLogStream(&v8);
      v7 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
      return GadgetPlayBase::stop(v7, 0);
    }
  }
};

// Line 124: range 000000001753DF58-000000001753E13B
int32_t __cdecl GadgetPlayComp::stopPlayByGm(GadgetPlayComp *const this, bool is_win)
{
  common::milog::MiLogStream *v2; // rbx
  Gadget *Gadget; // rax
  std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  GadgetPlayBase *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "stopPlayByGm",
      127);
    v2 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v8,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v2, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    if ( !GadgetPlayBase::isStarted(v5) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "stopPlayByGm",
        132);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v8,
        (const char (*)[25])"play_ptr is not started!");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/gadget/gadget_play_comp.cpp",
        "stopPlayByGm",
        135);
      v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v8,
             (const char (*)[21])"stopPlayByGm is_win:");
      common::milog::MiLogStream::operator<<(v6, is_win);
      common::milog::MiLogStream::~MiLogStream(&v8);
      v7 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
      return GadgetPlayBase::stop(v7, 1);
    }
  }
};

// Line 140: range 000000001753E13C-000000001753E2D8
int32_t __cdecl GadgetPlayComp::addProgress(GadgetPlayComp *const this, int32_t add_progress)
{
  common::milog::MiLogStream *v2; // rbx
  Gadget *Gadget; // rax
  std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  GadgetPlayBase *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "addProgress",
      143);
    v2 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v7,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v2, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    if ( !GadgetPlayBase::isStarted(v5) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "addProgress",
        148);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v7,
        (const char (*)[25])"play_ptr is not started!");
      common::milog::MiLogStream::~MiLogStream(&v7);
      return -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
      if ( add_progress < 0 )
        return GadgetPlayBase::subProgress(v6, abs32(add_progress));
      else
        return GadgetPlayBase::addProgress(v6, add_progress);
    }
  }
};

// Line 159: range 000000001753E2DA-000000001753E3A8
int32_t __cdecl GadgetPlayComp::getProgress(const GadgetPlayComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  const Gadget *Gadget; // rax
  std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "getProgress",
      162);
    v1 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v5,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v1, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    v4 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    return GadgetPlayBase::getProgress(v4);
  }
};

// Line 169: range 000000001753E3AA-000000001753E478
int32_t __cdecl GadgetPlayComp::getCurStage(const GadgetPlayComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  const Gadget *Gadget; // rax
  std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "getCurStage",
      172);
    v1 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v5,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v1, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    v4 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    return GadgetPlayBase::getCurStage(v4);
  }
};

// Line 179: range 000000001753E47A-000000001753E548
int32_t __cdecl GadgetPlayComp::getCurStageBeginProgress(const GadgetPlayComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  const Gadget *Gadget; // rax
  std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "getCurStageBeginProgress",
      182);
    v1 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v5,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v1, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    v4 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    return GadgetPlayBase::getCurStageBeginProgress(v4);
  }
};

// Line 189: range 000000001753E54A-000000001753E791
int32_t __cdecl GadgetPlayComp::getUidValue(GadgetPlayComp *const this, uint32_t uid, const std::string *key)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r13
  Gadget *Gadget; // rax
  int32_t result; // eax
  GadgetPlayBase *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 value:195";
  *(_QWORD *)(v3 + 16) = GadgetPlayComp::getUidValue;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "getUidValue",
      192);
    v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v13,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    *(_DWORD *)(v3 + 32) = GadgetPlayBase::getUidValue(v9, uid, key);
    if ( (unsigned int)std::numeric_limits<int>::max() >= *(_DWORD *)(v3 + 32) )
    {
      result = *(_DWORD *)(v3 + 32);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "getUidValue",
        199);
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v13, (const char (*)[7])"value:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        v11,
        (const char (*)[28])" larger than: int32_t.max()");
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = -1;
    }
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 206: range 000000001753E792-000000001753E9E7
__int64 __fastcall GadgetPlayComp::setUidValue(
        GadgetPlayComp *const this,
        uint32_t uid,
        const std::string *key,
        uint32_t value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // r13
  Gadget *Gadget; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  GadgetPlayBase *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 value:205";
  *(_QWORD *)(v4 + 16) = GadgetPlayComp::setUidValue;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = value;
  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "setUidValue",
      209);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v15,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  else if ( (unsigned int)std::numeric_limits<int>::max() >= *(_DWORD *)(v4 + 32) )
  {
    v12 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    GadgetPlayBase::setUidValue(v12, uid, key, *(_DWORD *)(v4 + 32));
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "setUidValue",
      215);
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v15, (const char (*)[7])"value:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v11,
      (const char (*)[28])" larger than: int32_t.max()");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 224: range 000000001753E9E8-000000001753EF5C
int32_t __cdecl GadgetPlayComp::notifyUidOp(
        GadgetPlayComp *const this,
        const std::vector<unsigned int> *uid_vec,
        uint32_t op,
        const std::string *param_str,
        const std::vector<unsigned int> *param_vec)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rbx
  Gadget *Gadget; // rax
  int32_t v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  google::protobuf::uint32 v13; // eax
  uint32_t EntityId; // eax
  google::protobuf::uint32 *v15; // rdx
  google::protobuf::uint32 *v16; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-110h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-108h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-100h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+80h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 88 10 notify:235";
  *(_QWORD *)(v5 + 16) = GadgetPlayComp::notifyUidOp;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "notifyUidOp",
      227);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v25,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v10 = -1;
  }
  else if ( std::vector<unsigned int>::empty(uid_vec) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "notifyUidOp",
      232);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v25, (const char (*)[19])"uid_vec is empty()");
    common::milog::MiLogStream::~MiLogStream(&v25);
    v10 = -1;
  }
  else
  {
    proto::GadgetPlayUidOpNotify::GadgetPlayUidOpNotify((proto::GadgetPlayUidOpNotify *const)(v5 + 32));
    v11 = (unsigned __int64)std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v12 = *(_QWORD *)v11 + 16LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v13 = (*(__int64 (__fastcall **)(unsigned __int64))v12)(v11);
    proto::GadgetPlayUidOpNotify::set_play_type((proto::GadgetPlayUidOpNotify *const)(v5 + 32), v13);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
    proto::GadgetPlayUidOpNotify::set_entity_id((proto::GadgetPlayUidOpNotify *const)(v5 + 32), EntityId);
    __for_range = uid_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v15 = (google::protobuf::uint32 *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::GadgetPlayUidOpNotify::add_uid_list((proto::GadgetPlayUidOpNotify *const)(v5 + 32), *v15);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    proto::GadgetPlayUidOpNotify::set_op((proto::GadgetPlayUidOpNotify *const)(v5 + 32), op);
    proto::GadgetPlayUidOpNotify::set_param_str((proto::GadgetPlayUidOpNotify *const)(v5 + 32), param_str);
    __for_range_0 = param_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(param_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v16 = (google::protobuf::uint32 *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::GadgetPlayUidOpNotify::add_param_list((proto::GadgetPlayUidOpNotify *const)(v5 + 32), *v16);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::notifyViewingPlayers<proto::GadgetPlayUidOpNotify>(
      (Entity *const)this->gadget_,
      (proto::GadgetPlayUidOpNotify *)(v5 + 32),
      1);
    v10 = 0;
    proto::GadgetPlayUidOpNotify::~GadgetPlayUidOpNotify((proto::GadgetPlayUidOpNotify *const)(v5 + 32));
  }
  result = v10;
  if ( v26 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 253: range 000000001753EF5E-000000001753F472
void __cdecl GadgetPlayComp::onCdTimer(GadgetPlayComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rbx
  Gadget *Gadget; // rax
  unsigned int ConfigId; // eax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  uint32_t *p_source_entity_id; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int32_t v14; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  int32_t *p_param1; // rax
  uint32_t v17; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  int32_t *p_param3; // rax
  Group *v21; // rax
  common::milog::MiLogStream v22; // [rsp+10h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 group_ptr:259 64 16 11 evt_ptr:262";
  *(_QWORD *)(v2 + 16) = GadgetPlayComp::onCdTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "onCdTimer",
      256);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v22,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getGroup((const Entity *const)(v2 + 32));
    if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 32), 0LL) )
    {
      EventUtil::createEvent((data::EventType)(v2 + 64));
      if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 64), 0LL) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ConfigId = Entity::getConfigId((const Entity *const)this->gadget_);
        std::to_string((std::string *)&v22, ConfigId);
        v8 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        std::string::operator=(&v8->source_name, &v22);
        std::string::~string(&v22);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
        v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        p_source_entity_id = &v10->source_entity_id;
        if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(p_source_entity_id);
        }
        v10->source_entity_id = EntityId;
        v12 = (unsigned __int64)std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        v13 = *(_QWORD *)v12 + 16LL;
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        v14 = (*(__int64 (__fastcall **)(unsigned __int64))v13)(v12);
        v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        p_param1 = &v15->param1;
        if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param1);
        }
        v15->param1 = v14;
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v17 = Entity::getConfigId((const Entity *const)this->gadget_);
        v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v18->param2 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v18->param2 >> 3) + 0x7FFF8000) <= 3 )
        {
          v18 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v18->param2);
        }
        v18->param2 = v17;
        v19 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        p_param3 = &v19->param3;
        if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param3);
        }
        v19->param3 = 0;
        v21 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        Group::handleEvent(v21, (EventPtr *)(v2 + 64));
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
  }
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 276: range 000000001753F474-000000001753F5CA
void __cdecl GadgetPlayComp::onStopTimer(GadgetPlayComp *const this, uint64_t now_ms)
{
  common::milog::MiLogStream *v2; // rbx
  Gadget *Gadget; // rax
  common::milog::MiLogStream *v4; // rbx
  Gadget *v5; // rax
  GadgetPlayBase *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<GadgetPlayBase>(0LL, &this->play_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "onStopTimer",
      279);
    v2 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v7,
           (const char (*)[23])"play_ptr_ is nullptr, ");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v2, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/gadget/gadget_play_comp.cpp",
      "onStopTimer",
      282);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v7,
           (const char (*)[29])"GadgetPlayComp::onStopTimer ");
    v5 = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, v5);
    common::milog::MiLogStream::~MiLogStream(&v7);
    v6 = std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->play_ptr_);
    GadgetPlayBase::stop(v6, 0);
  }
};

// Line 287: range 000000001753F5CC-000000001753F7C8
void __cdecl GadgetPlayBase::GadgetPlayBase(GadgetPlayBase *const this, Gadget *gadget)
{
  int (**v2)(...); // rdx

  std::enable_shared_from_this<GadgetPlayBase>::enable_shared_from_this(&this->std::enable_shared_from_this<GadgetPlayBase>);
  v2 = (int (**)(...))(&`vtable for'GadgetPlayBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetPlayBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->gadget_);
  this->gadget_ = gadget;
  std::map<unsigned int,std::map<std::string,unsigned int>>::map(&this->uid_value_map_);
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->cd_timer_ptr_);
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->stop_timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration_);
  }
  this->duration_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_cd_);
  }
  this->start_cd_ = 0;
  std::vector<unsigned int>::vector(&this->progress_stage_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->progress_);
  }
  this->progress_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_time_);
  }
  this->start_time_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->uid_score_map_);
  std::map<unsigned int,unsigned int>::map(&this->uid_watcher_map_);
};

// Line 292: range 000000001753F7CA-000000001753FA32
int32_t __cdecl GadgetPlayBase::toClient(const GadgetPlayBase *const this, proto::GadgetPlayInfo *play_info)
{
  unsigned __int64 v2; // rax
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 *v4; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 2);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  v3 = (*(__int64 (__fastcall **)(const GadgetPlayBase *const))v2)(this);
  proto::GadgetPlayInfo::set_play_type(play_info, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GadgetPlayInfo::set_duration(play_info, this->duration_);
  __for_range = &this->progress_stage_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->progress_stage_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->progress_stage_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v4 = (google::protobuf::uint32 *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GadgetPlayInfo::add_progress_stage_list(play_info, *v4);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GadgetPlayInfo::set_start_cd(play_info, this->start_cd_);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GadgetPlayInfo::set_progress(play_info, this->progress_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GadgetPlayInfo::set_start_time(play_info, this->start_time_);
  return 0;
};

// Line 307: range 000000001753FA34-000000001753FCF1
int32_t __cdecl GadgetPlayBase::init(
        GadgetPlayBase *const this,
        uint32_t duration,
        uint32_t start_cd,
        const std::vector<unsigned int> *progress_stage_vec)
{
  common::milog::MiLogStream *v4; // rcx
  std::vector<unsigned int>::const_reference v6; // rdx
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( duration )
  {
    if ( std::vector<unsigned int>::size(progress_stage_vec) > 1 )
    {
      v6 = std::vector<unsigned int>::front(progress_stage_vec);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *v6 )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_play_comp.cpp",
          "init",
          320);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v9,
          (const char (*)[35])"progress_stage_vec invalid, [0]!=0");
        common::milog::MiLogStream::~MiLogStream(&v9);
        return -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->duration_);
        }
        this->duration_ = duration;
        if ( *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->start_cd_);
        }
        this->start_cd_ = start_cd;
        std::vector<unsigned int>::operator=(&this->progress_stage_vec_, progress_stage_vec);
        return 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "init",
        315);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v9,
        (const char (*)[31])"progress_stage_vec invalid, <2");
      common::milog::MiLogStream::~MiLogStream(&v9);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "init",
      310);
    v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v9, (const char (*)[14])"duration is 0");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
};

// Line 330: range 000000001753FCF2-00000000175407C1
int32_t __cdecl GadgetPlayBase::start(GadgetPlayBase *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  int32_t v5; // r14d
  uint32_t Now; // edi
  unsigned __int64 v9; // rax
  google::protobuf::uint32 v10; // eax
  uint32_t EntityId; // eax
  unsigned int ConfigId; // eax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  unsigned __int64 v16; // rax
  int32_t v17; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  int32_t *p_param1; // rax
  uint32_t v20; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  int32_t *p_param3; // rax
  Group *v24; // rax
  unsigned __int64 v25; // rax
  common::milog::MiLogStream *v26; // r14
  unsigned __int64 v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-F8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-F4h]
  common::milog::MiLogStream v34; // [rsp+20h] [rbp-F0h] BYREF
  char v35[208]; // [rsp+40h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 13 group_ptr:360 64 16 11 evt_ptr:363 96 32 10 notify:354";
  *(_QWORD *)(v1 + 16) = GadgetPlayBase::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 5);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  ret = (*(__int64 (__fastcall **)(GadgetPlayBase *const))v4)(this);
  if ( ret )
  {
    v5 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->start_cd_ && GadgetPlayBase::startCdTimer(this) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "start",
        339);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v34, (const char (*)[19])"startCdTimer fails");
      common::milog::MiLogStream::~MiLogStream(&v34);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->duration_ && GadgetPlayBase::startStopTimer(this) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_play_comp.cpp",
          "start",
          344);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v34,
          (const char (*)[21])"startStopTimer fails");
        common::milog::MiLogStream::~MiLogStream(&v34);
        v5 = -1;
      }
      else
      {
        Now = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
        {
          Now = (_DWORD)this + 148;
          __asan_report_store4(&this->start_time_);
        }
        this->start_time_ = Now;
        if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->progress_);
        }
        this->progress_ = 0;
        std::map<unsigned int,unsigned int>::clear(&this->uid_score_map_);
        std::map<unsigned int,unsigned int>::clear(&this->uid_watcher_map_);
        proto::GadgetPlayStartNotify::GadgetPlayStartNotify((proto::GadgetPlayStartNotify *const)(v1 + 96));
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v9 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 2);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
        v10 = (*(__int64 (__fastcall **)(GadgetPlayBase *const))v9)(this);
        proto::GadgetPlayStartNotify::set_play_type((proto::GadgetPlayStartNotify *const)(v1 + 96), v10);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
        proto::GadgetPlayStartNotify::set_entity_id((proto::GadgetPlayStartNotify *const)(v1 + 96), EntityId);
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::GadgetPlayStartNotify::set_start_time((proto::GadgetPlayStartNotify *const)(v1 + 96), this->start_time_);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Entity::notifyViewingPlayers<proto::GadgetPlayStartNotify>(
          (Entity *const)this->gadget_,
          (proto::GadgetPlayStartNotify *)(v1 + 96),
          1);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Entity::getGroup((const Entity *const)(v1 + 32));
        if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v1 + 32), 0LL) )
        {
          EventUtil::createEvent((data::EventType)(v1 + 64));
          if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v1 + 64), 0LL) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            ConfigId = Entity::getConfigId((const Entity *const)this->gadget_);
            std::to_string((std::string *)&v34, ConfigId);
            v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            std::string::operator=(&v13->source_name, &v34);
            std::string::~string(&v34);
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v14 = Entity::getEntityId((const Entity *const)this->gadget_);
            v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v15->source_entity_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v15 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->source_entity_id >> 3)
                                                                + 0x7FFF8000) )
            {
              __asan_report_store4(&v15->source_entity_id);
            }
            v15->source_entity_id = v14;
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v16 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 2);
            if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
              v16 = __asan_report_load8();
            v17 = (*(__int64 (__fastcall **)(GadgetPlayBase *const))v16)(this);
            v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            p_param1 = &v18->param1;
            if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(p_param1);
            }
            v18->param1 = v17;
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v20 = Entity::getConfigId((const Entity *const)this->gadget_);
            v21 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v21->param2 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v21->param2 >> 3) + 0x7FFF8000) <= 3 )
            {
              v21 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v21->param2);
            }
            v21->param2 = v20;
            v22 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            p_param3 = &v22->param3;
            if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(p_param3);
            }
            v22->param3 = 0;
            v24 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
            Group::handleEvent(v24, (EventPtr *)(v1 + 64));
          }
          std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 64));
        }
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v25 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 6);
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          v25 = __asan_report_load8();
        (*(void (__fastcall **)(GadgetPlayBase *const))v25)(this);
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/gadget/gadget_play_comp.cpp",
          "start",
          377);
        v26 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v34,
                (const char (*)[29])"gadgetplay start, play_type:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v27 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 2);
        if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
          v27 = __asan_report_load8();
        val = (*(__int64 (__fastcall **)(GadgetPlayBase *const))v27)(this);
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
        v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v29, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v34);
        v5 = 0;
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
        proto::GadgetPlayStartNotify::~GadgetPlayStartNotify((proto::GadgetPlayStartNotify *const)(v1 + 96));
      }
    }
  }
  result = v5;
  if ( v35 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 382: range 0000000017540A12-0000000017540ED3
int32_t __cdecl GadgetPlayBase::startCdTimer(GadgetPlayBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rcx
  int32_t v5; // r14d
  SceneUnixTimer *p_start_cd; // rdi
  int32_t result; // eax
  std::shared_ptr<Gadget> __r; // [rsp+10h] [rbp-D0h] BYREF
  std::shared_ptr<Scene> v10; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:383 64 16 14 gadget_wtr:389";
  *(_QWORD *)(v1 + 16) = GadgetPlayBase::startCdTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "startCdTimer",
      386);
    v4 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v11,
           (const char (*)[22])"getScene ret nullptr ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Gadget>((Gadget *)&__r);
    std::weak_ptr<Gadget>::weak_ptr<Gadget,void>((std::weak_ptr<Gadget> *const)(v1 + 64), &__r);
    std::shared_ptr<Gadget>::~shared_ptr(&__r);
    std::weak_ptr<Gadget>::weak_ptr((std::weak_ptr<Gadget> *const)&__r, (const std::weak_ptr<Gadget> *)(v1 + 64));
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,GadgetPlayBase::startCdTimer(void)::{lambda(unsigned long)#1}>(
      &v10,
      (GadgetPlayBase::startCdTimer::<lambda(uint64_t)> *)(v1 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (GadgetPlayBase::startCdTimer::<lambda(uint64_t)> *)(v1 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(&this->cd_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v10);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v10);
    GadgetPlayBase::startCdTimer(void)::{lambda(unsigned long)#1}::~startCdTimer((GadgetPlayBase::startCdTimer::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneUnixTimer>(0LL, &this->cd_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "startCdTimer",
        392);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v11,
        (const char (*)[29])"cd_timer_ptr_ addtimer fails");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v5 = -1;
    }
    else
    {
      p_start_cd = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cd_timer_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) )
      {
        p_start_cd = (SceneUnixTimer *)&this->start_cd_;
        __asan_report_load4();
      }
      if ( SceneUnixTimer::startS(
             p_start_cd,
             this->start_cd_,
             0,
             "./src/gadget/gadget_play_comp.cpp",
             "startCdTimer",
             395) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_play_comp.cpp",
          "startCdTimer",
          397);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v11,
          (const char (*)[26])"cd_timer_ptr_ start fails");
        common::milog::MiLogStream::~MiLogStream(&v11);
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
    }
    std::weak_ptr<Gadget>::~weak_ptr((std::weak_ptr<Gadget> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v5;
  if ( v12 == (char *)v1 )
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

// Line 389: range 00000000175407C2-00000000175409F5
void __cdecl GadgetPlayBase::startCdTimer(void)::{lambda(unsigned long)#1}::operator()(
        const GadgetPlayBase::startCdTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<GadgetPlayComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:389 64 16 11 obj_ptr:389";
  *(_QWORD *)(v2 + 16) = GadgetPlayBase::startCdTimer(void)::{lambda(unsigned long)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "operator()",
      389);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"gadget is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetPlayComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<GadgetPlayComp>((const std::shared_ptr<GadgetPlayComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<GadgetPlayComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      GadgetPlayComp::onCdTimer(v5, now_ms);
    }
    std::shared_ptr<GadgetPlayComp>::~shared_ptr((std::shared_ptr<GadgetPlayComp> *const)(v2 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 389: range 000000001760BC5E-000000001760BC83
void __cdecl GadgetPlayBase::startCdTimer(void)::{lambda(unsigned long)#1}::startCdTimer(
        GadgetPlayBase::startCdTimer::<lambda(uint64_t)> *const this,
        GadgetPlayBase::startCdTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 389: range 000000001760D796-000000001760D7BB
void __cdecl GadgetPlayBase::startCdTimer(void)::{lambda(unsigned long)#1}::startCdTimer(
        GadgetPlayBase::startCdTimer::<lambda(uint64_t)> *const this,
        const GadgetPlayBase::startCdTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 389: range 00000000175409F6-0000000017540A10
void __cdecl GadgetPlayBase::startCdTimer(void)::{lambda(unsigned long)#1}::~startCdTimer(
        GadgetPlayBase::startCdTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 404: range 0000000017541124-000000001754162A
int32_t __cdecl GadgetPlayBase::startStopTimer(GadgetPlayBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rcx
  int32_t v5; // r14d
  SceneUnixTimer *p_duration; // rdi
  uint32_t duration; // ecx
  int32_t result; // eax
  std::shared_ptr<Gadget> __r; // [rsp+10h] [rbp-D0h] BYREF
  std::shared_ptr<Scene> v11; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:405 64 16 14 gadget_wtr:411";
  *(_QWORD *)(v1 + 16) = GadgetPlayBase::startStopTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "startStopTimer",
      408);
    v4 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v12,
           (const char (*)[22])"getScene ret nullptr ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Gadget>((Gadget *)&__r);
    std::weak_ptr<Gadget>::weak_ptr<Gadget,void>((std::weak_ptr<Gadget> *const)(v1 + 64), &__r);
    std::shared_ptr<Gadget>::~shared_ptr(&__r);
    std::weak_ptr<Gadget>::weak_ptr((std::weak_ptr<Gadget> *const)&__r, (const std::weak_ptr<Gadget> *)(v1 + 64));
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,GadgetPlayBase::startStopTimer(void)::{lambda(unsigned long)#1}>(
      &v11,
      (GadgetPlayBase::startStopTimer::<lambda(uint64_t)> *)(v1 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (GadgetPlayBase::startStopTimer::<lambda(uint64_t)> *)(v1 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(&this->stop_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v11);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v11);
    GadgetPlayBase::startStopTimer(void)::{lambda(unsigned long)#1}::~startStopTimer((GadgetPlayBase::startStopTimer::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneUnixTimer>(0LL, &this->stop_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "startStopTimer",
        414);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v12,
        (const char (*)[31])"stop_timer_ptr_ addtimer fails");
      common::milog::MiLogStream::~MiLogStream(&v12);
      v5 = -1;
    }
    else
    {
      p_duration = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stop_timer_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_duration = (SceneUnixTimer *)&this->duration_;
        __asan_report_load4();
      }
      duration = this->duration_;
      if ( *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) )
      {
        p_duration = (SceneUnixTimer *)&this->start_cd_;
        __asan_report_load4();
      }
      if ( SceneUnixTimer::startS(
             p_duration,
             duration + this->start_cd_,
             0,
             "./src/gadget/gadget_play_comp.cpp",
             "startStopTimer",
             418) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_play_comp.cpp",
          "startStopTimer",
          420);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v12,
          (const char (*)[28])"stop_timer_ptr_ start fails");
        common::milog::MiLogStream::~MiLogStream(&v12);
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
    }
    std::weak_ptr<Gadget>::~weak_ptr((std::weak_ptr<Gadget> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v5;
  if ( v13 == (char *)v1 )
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

// Line 411: range 0000000017540ED4-0000000017541107
void __cdecl GadgetPlayBase::startStopTimer(void)::{lambda(unsigned long)#1}::operator()(
        const GadgetPlayBase::startStopTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<GadgetPlayComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:411 64 16 11 obj_ptr:411";
  *(_QWORD *)(v2 + 16) = GadgetPlayBase::startStopTimer(void)::{lambda(unsigned long)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "operator()",
      411);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"gadget is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetPlayComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<GadgetPlayComp>((const std::shared_ptr<GadgetPlayComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<GadgetPlayComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      GadgetPlayComp::onStopTimer(v5, now_ms);
    }
    std::shared_ptr<GadgetPlayComp>::~shared_ptr((std::shared_ptr<GadgetPlayComp> *const)(v2 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 411: range 000000001760BF8A-000000001760BFAF
void __cdecl GadgetPlayBase::startStopTimer(void)::{lambda(unsigned long)#1}::startStopTimer(
        GadgetPlayBase::startStopTimer::<lambda(uint64_t)> *const this,
        GadgetPlayBase::startStopTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 411: range 000000001760D978-000000001760D99D
void __cdecl GadgetPlayBase::startStopTimer(void)::{lambda(unsigned long)#1}::startStopTimer(
        GadgetPlayBase::startStopTimer::<lambda(uint64_t)> *const this,
        const GadgetPlayBase::startStopTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 411: range 0000000017541108-0000000017541122
void __cdecl GadgetPlayBase::startStopTimer(void)::{lambda(unsigned long)#1}::~startStopTimer(
        GadgetPlayBase::startStopTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 427: range 000000001754162C-0000000017542364
int32_t __cdecl GadgetPlayBase::stop(GadgetPlayBase *const this, bool is_win)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t start_time; // ecx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  google::protobuf::uint32 v10; // eax
  uint32_t EntityId; // eax
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(GadgetPlayBase *const, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::GadgetPlayUidInfo *); // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  unsigned __int64 v15; // rax
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  unsigned int ConfigId; // eax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t v20; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  unsigned __int64 v22; // rax
  int32_t v23; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  int32_t *p_param1; // rax
  uint32_t v26; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  int32_t *p_param3; // rax
  Group *v30; // rax
  common::milog::MiLogStream *v31; // r14
  unsigned __int64 v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-188h] BYREF
  uint32_t cost_time; // [rsp+1Ch] [rbp-184h]
  uint32_t now; // [rsp+20h] [rbp-180h]
  uint32_t team_score; // [rsp+24h] [rbp-17Ch]
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+30h] [rbp-170h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+38h] [rbp-168h]
  std::shared_ptr<Player> *player_ptr; // [rsp+40h] [rbp-160h]
  proto::GadgetPlayUidInfo *uid_info; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v45; // [rsp+50h] [rbp-150h] BYREF
  char v46[304]; // [rsp+70h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 13 group_ptr:475 64 16 11 evt_ptr:478 96 24 18 player_ptr_vec:442 160 64 10 notify:445";
  *(_QWORD *)(v2 + 16) = GadgetPlayBase::stop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862727] = -202116109;
  if ( std::operator==<SceneUnixTimer>(0LL, &this->stop_timer_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "stop",
      430);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v45,
      (const char (*)[27])"stop_timer_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v45);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->duration_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    cost_time = this->duration_;
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    start_time = this->start_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_cd_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( now > start_time + this->start_cd_ )
      cost_time = now - (this->start_cd_ + this->start_time_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 10);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    team_score = (*(__int64 (__fastcall **)(GadgetPlayBase *const, _QWORD))v7)(this, cost_time);
    GadgetPlayBase::getPlayerVec((std::vector<std::shared_ptr<Player>> *)(v2 + 96), this);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 8);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    (*(void (__fastcall **)(GadgetPlayBase *const, unsigned __int64))v8)(this, v2 + 96);
    proto::GadgetPlayStopNotify::GadgetPlayStopNotify((proto::GadgetPlayStopNotify *const)(v2 + 160));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 2);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = (*(__int64 (__fastcall **)(GadgetPlayBase *const))v9)(this);
    proto::GadgetPlayStopNotify::set_play_type((proto::GadgetPlayStopNotify *const)(v2 + 160), v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
    proto::GadgetPlayStopNotify::set_entity_id((proto::GadgetPlayStopNotify *const)(v2 + 160), EntityId);
    proto::GadgetPlayStopNotify::set_is_win((proto::GadgetPlayStopNotify *const)(v2 + 160), is_win);
    proto::GadgetPlayStopNotify::set_cost_time((proto::GadgetPlayStopNotify *const)(v2 + 160), cost_time);
    proto::GadgetPlayStopNotify::set_score((proto::GadgetPlayStopNotify *const)(v2 + 160), team_score);
    __for_range = (std::vector<std::shared_ptr<Player>> *)(v2 + 96);
    __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v2 + 96))._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v2 + 96))._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
              &__for_begin,
              &__for_end) )
    {
      player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
      if ( !std::operator==<Player>(0LL, player_ptr) )
      {
        uid_info = proto::GadgetPlayStopNotify::add_uid_info_list((proto::GadgetPlayStopNotify *const)(v2 + 160));
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v12 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 9);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        v13 = *(void (__fastcall **)(GadgetPlayBase *const, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::GadgetPlayUidInfo *))v12;
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
        v13(this, v14, uid_info);
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::notifyViewingPlayers<proto::GadgetPlayStopNotify>(
      (Entity *const)this->gadget_,
      (proto::GadgetPlayStopNotify *)(v2 + 160),
      1);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 7);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8();
    (*(void (__fastcall **)(GadgetPlayBase *const, bool, _QWORD, _QWORD))v15)(this, is_win, cost_time, team_score);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->start_time_);
    }
    this->start_time_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->progress_);
    }
    this->progress_ = 0;
    v16 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stop_timer_ptr_);
    common::tools::MiTimer::cancel(v16);
    if ( std::operator!=<SceneUnixTimer>(&this->cd_timer_ptr_, 0LL) )
    {
      v17 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cd_timer_ptr_);
      common::tools::MiTimer::cancel(v17);
    }
    std::map<unsigned int,std::map<std::string,unsigned int>>::clear(&this->uid_value_map_);
    std::map<unsigned int,unsigned int>::clear(&this->uid_score_map_);
    std::map<unsigned int,unsigned int>::clear(&this->uid_watcher_map_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getGroup((const Entity *const)(v2 + 32));
    if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 32), 0LL) )
    {
      EventUtil::createEvent((data::EventType)(v2 + 64));
      if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 64), 0LL) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ConfigId = Entity::getConfigId((const Entity *const)this->gadget_);
        std::to_string((std::string *)&v45, ConfigId);
        v19 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        std::string::operator=(&v19->source_name, &v45);
        std::string::~string(&v45);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v20 = Entity::getEntityId((const Entity *const)this->gadget_);
        v21 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v21->source_entity_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v21 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->source_entity_id >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store4(&v21->source_entity_id);
        }
        v21->source_entity_id = v20;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v22 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 2);
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8();
        v23 = (*(__int64 (__fastcall **)(GadgetPlayBase *const))v22)(this);
        v24 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        p_param1 = &v24->param1;
        if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param1);
        }
        v24->param1 = v23;
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v26 = Entity::getConfigId((const Entity *const)this->gadget_);
        v27 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v27->param2 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v27->param2 >> 3) + 0x7FFF8000) <= 3 )
        {
          v27 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v27->param2);
        }
        v27->param2 = v26;
        v28 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        p_param3 = &v28->param3;
        if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param3);
        }
        v28->param3 = is_win;
        v30 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        Group::handleEvent(v30, (EventPtr *)(v2 + 64));
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
    }
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/gadget/gadget_play_comp.cpp",
      "stop",
      490);
    v31 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v45,
            (const char (*)[28])"gadgetplay stop, play_type:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v32 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 2);
    if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
      v32 = __asan_report_load8();
    val = (*(__int64 (__fastcall **)(GadgetPlayBase *const))v32)(this);
    v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
    v34 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v33, (const char (*)[9])" gadget:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v34, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v5 = 0;
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
    proto::GadgetPlayStopNotify::~GadgetPlayStopNotify((proto::GadgetPlayStopNotify *const)(v2 + 160));
    std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v2 + 96));
  }
  result = v5;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 495: range 00000000175423F8-000000001754275E
std::vector<std::shared_ptr<Player>> *__cdecl GadgetPlayBase::getPlayerVec(
        std::vector<std::shared_ptr<Player>> *retstr,
        GadgetPlayBase *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 scene_ptr:497 64 16 13 world_ptr:503";
  *(_QWORD *)(v2 + 16) = GadgetPlayBase::getPlayerVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::vector<std::shared_ptr<Player>>::vector(retstr);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "getPlayerVec",
      500);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v9, (const char (*)[15])"getScene fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v5 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    v6 = *(_QWORD *)v5 + 64LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v6)(v2 + 64, v5);
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "getPlayerVec",
        506);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v9,
        (const char (*)[24])"getOwnPlayerWorld fails");
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    else
    {
      v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      std::function<ForeachPolicy ()(Player &)>::function<GadgetPlayBase::getPlayerVec(void)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v9,
        (GadgetPlayBase::getPlayerVec::<lambda(Player&)>)retstr);
      World::foreachPlayer(v7, (std::function<ForeachPolicy(Player&)> *)&v9);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v9);
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 509: range 0000000017542366-00000000175423F6
ForeachPolicy __cdecl GadgetPlayBase::getPlayerVec(void)::{lambda(Player &)#1}::operator()(
        const GadgetPlayBase::getPlayerVec::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::vector<std::shared_ptr<Player>> *player_ptr_vec; // rbx
  std::shared_ptr<Player> v3; // rax
  std::shared_ptr<Player> v5; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player_ptr_vec = __closure->__player_ptr_vec;
  v3 = toThisPtr<Player>((Player *)&v5);
  std::vector<std::shared_ptr<Player>>::emplace_back<std::shared_ptr<Player>>(
    player_ptr_vec,
    &v5,
    (std::shared_ptr<Player> *)v3._M_refcount._M_pi);
  std::shared_ptr<Player>::~shared_ptr(&v5);
  return 0;
};

// Line 518: range 0000000017542760-00000000175429CE
void __cdecl GadgetPlayBase::fillPlayerInfo(
        GadgetPlayBase *const this,
        Player *player,
        proto::GadgetPlayUidInfo *uid_info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  google::protobuf::uint32 *v6; // rdx
  PlayerBasicComp *BasicComp; // rax
  const std::string *v8; // rdx
  google::protobuf::uint32 *v9; // rdx
  PlayerBasicComp *v10; // r13
  proto::ProfilePicture *v11; // rax
  std::string value; // [rsp+20h] [rbp-80h] BYREF
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:519";
  *(_QWORD *)(v3 + 16) = GadgetPlayBase::fillPlayerInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = Player::getUid(player);
  proto::GadgetPlayUidInfo::set_uid(uid_info, *(_DWORD *)(v3 + 32));
  v6 = std::map<unsigned int,unsigned int>::operator[](
         &this->uid_score_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GadgetPlayUidInfo::set_score(uid_info, *v6);
  BasicComp = Player::getBasicComp(player);
  v8 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
  proto::GadgetPlayUidInfo::set_nickname(uid_info, v8);
  Player::getOnlineId[abi:cxx11](&value, player);
  proto::GadgetPlayUidInfo::set_online_id(uid_info, &value);
  std::string::~string(&value);
  v9 = std::map<unsigned int,unsigned int>::operator[](
         &this->uid_watcher_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GadgetPlayUidInfo::set_battle_watcher_id(uid_info, *v9);
  v10 = Player::getBasicComp(player);
  v11 = proto::GadgetPlayUidInfo::mutable_profile_picture(uid_info);
  PlayerBasicComp::getProfilePictureToClient(v10, v11);
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 529: range 00000000175429D0-0000000017542F58
__int64 __fastcall GadgetPlayBase::addProgress(GadgetPlayBase *const this, uint32_t add_progress)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  unsigned int v6; // edx
  uint32_t v7; // edx
  uint32_t progress; // r14d
  std::vector<unsigned int>::reference v9; // rdx
  std::vector<unsigned int>::reference v10; // rdx
  uint32_t v11; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  bool is_finished; // [rsp+17h] [rbp-99h]
  int32_t old_stage; // [rsp+18h] [rbp-98h]
  int32_t cur_stage; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-90h] BYREF
  char v24[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 add_progress:528";
  *(_QWORD *)(v2 + 16) = GadgetPlayBase::addProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_progress;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( std::vector<unsigned int>::empty(&this->progress_stage_vec_) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "addProgress",
        536);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v23,
        (const char (*)[28])"progress_stage_vec_ empty()");
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      old_stage = GadgetPlayBase::getCurStage(this);
      v6 = *(_DWORD *)(v2 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v7 = SAFE_ADD<unsigned int,unsigned int>(this->progress_, v6);
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->progress_);
      }
      this->progress_ = v7;
      is_finished = 0;
      progress = this->progress_;
      v9 = std::vector<unsigned int>::back(&this->progress_stage_vec_);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( progress >= *v9 )
      {
        v10 = std::vector<unsigned int>::back(&this->progress_stage_vec_);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v11 = *v10;
        if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->progress_);
        }
        this->progress_ = v11;
        is_finished = 1;
      }
      cur_stage = GadgetPlayBase::getCurStage(this);
      if ( cur_stage != old_stage )
        GadgetPlayBase::onStageChange(this, old_stage, cur_stage);
      GadgetPlayBase::notifyViewingPlayersPlayData(this);
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/gadget_play_comp.cpp",
        "addProgress",
        554);
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v23, (const char (*)[14])"add_progress:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" now:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->progress_);
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" gadget:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v16, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      if ( is_finished )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/gadget/gadget_play_comp.cpp",
          "addProgress",
          558);
        v17 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v23,
                (const char (*)[39])"gadget player stop becausof progress_:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->progress_);
        v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])" ");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v19, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v23);
        GadgetPlayBase::stop(this, 1);
      }
      result = 0LL;
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v24 == (char *)v2 )
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

// Line 565: range 0000000017542F5A-0000000017543249
__int64 __fastcall GadgetPlayBase::subProgress(GadgetPlayBase *const this, uint32_t sub_progress)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  int32_t old_stage; // [rsp+18h] [rbp-88h]
  int32_t cur_stage; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 sub_progress:564";
  *(_QWORD *)(v2 + 16) = GadgetPlayBase::subProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_progress;
  if ( *(_DWORD *)(v2 + 32) )
  {
    old_stage = GadgetPlayBase::getCurStage(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->progress_ < *(_DWORD *)(v2 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->progress_);
      }
      this->progress_ = 0;
    }
    else
    {
      this->progress_ -= *(_DWORD *)(v2 + 32);
    }
    cur_stage = GadgetPlayBase::getCurStage(this);
    if ( cur_stage != old_stage )
      GadgetPlayBase::onStageChange(this, old_stage, cur_stage);
    GadgetPlayBase::notifyViewingPlayersPlayData(this);
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget_play_comp.cpp",
      "subProgress",
      587);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])"sub_progress:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" now:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->progress_);
    v10 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v9, (const char (*)[2])" ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v10, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v14 == (char *)v2 )
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

// Line 592: range 000000001754324A-0000000017543AB8
void __fastcall GadgetPlayBase::onStageChange(GadgetPlayBase *const this, uint32_t old_stage, uint32_t cur_stage)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  LuaScript *v7; // r14
  common::milog::MiLogStream *v8; // rcx
  ScriptContext *v9; // r14
  LuaScript *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  unsigned int *v18; // [rsp+0h] [rbp-1F0h]
  GadgetPlayBase *thisa; // [rsp+8h] [rbp-1E8h]
  unsigned int *v20; // [rsp+10h] [rbp-1E0h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-1D1h] BYREF
  ScriptContext *context; // [rsp+20h] [rbp-1D0h]
  ScriptContext *o; // [rsp+28h] [rbp-1C8h]
  std::shared_ptr<Gadget> __r; // [rsp+30h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-1B0h] BYREF
  char v26[400]; // [rsp+60h] [rbp-190h] BYREF

  v18 = (unsigned int *)__PAIR64__(old_stage, cur_stage);
  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 15 final_stage:614 64 4 13 old_stage:591 80 4 13 cur_stage:591 96 16 14 script_ptr:598 12"
                        "8 160 18 script_context:610";
  *(_QWORD *)(v3 + 16) = GadgetPlayBase::onStageChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862729] = -202116109;
  v5[536862730] = -202116109;
  *(_DWORD *)(v3 + 64) = old_stage;
  *(_DWORD *)(v3 + 80) = (_DWORD)v18;
  if ( std::vector<unsigned int>::empty(&this->progress_stage_vec_) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "onStageChange",
      595);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v25,
      (const char (*)[29])"progress_stage_vec_ is empty");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Gadget::getScript((const Gadget *const)(v3 + 96));
    if ( std::operator==<LuaScript>(0LL, (const std::shared_ptr<LuaScript> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "onStageChange",
        601);
      v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v25,
             (const char (*)[18])"getScript fails, ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      v7 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v25, "OnPlayStageChange", &__a);
      LOBYTE(v7) = !LuaScript::hasFunction(v7, (const std::string *)&v25);
      std::string::~string(&v25);
      std::allocator<char>::~allocator(&__a);
      if ( (_BYTE)v7 )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/gadget/gadget_play_comp.cpp",
          "onStageChange",
          606);
        v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(&v25, (const char (*)[36])off_26128C20);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      else
      {
        ScriptContext::ScriptContext((ScriptContext *const)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        toThisPtr<Gadget>((Gadget *)&__r);
        std::weak_ptr<Gadget>::operator=<Gadget>((std::weak_ptr<Gadget> *const)(v3 + 176), &__r);
        std::shared_ptr<Gadget>::~shared_ptr(&__r);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Entity::getScene((const Entity *const)&__r);
        ScriptContext::setSceneAndOwnerUid((ScriptContext *const)(v3 + 128), (ScenePtr *)&__r);
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&__r);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Entity::getGroup((const Entity *const)&__r);
        std::weak_ptr<Group>::operator=<Group>(
          (std::weak_ptr<Group> *const)(v3 + 144),
          (const std::shared_ptr<Group> *)&__r);
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)&__r);
        *(_DWORD *)(v3 + 48) = std::vector<unsigned int>::size(&this->progress_stage_vec_) - 1;
        o = (ScriptContext *)(v3 + 128);
        context = boost::addressof<ScriptContext>((ScriptContext *)(v3 + 128));
        v9 = context;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v25, "OnPlayStageChange", &__a);
        v10 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        ScriptLib::executeFuncWithErrorNotify<void,unsigned int &,unsigned int &,unsigned int &>(
          v10,
          (const std::string *)&v25,
          v9,
          (unsigned int *)(v3 + 64),
          (unsigned int *)(v3 + 80),
          (unsigned int *)(v3 + 48),
          v18,
          (unsigned int *)this,
          v20);
        std::string::~string(&v25);
        std::allocator<char>::~allocator(&__a);
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/gadget/gadget_play_comp.cpp",
          "onStageChange",
          616);
        v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v25,
                (const char (*)[26])"onStageChange, old_stage:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 64));
        v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])off_26128CC0);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 80));
        v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" final:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v17, thisa->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v25);
        ScriptContext::~ScriptContext((ScriptContext *const)(v3 + 128));
      }
    }
    std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v3 + 96));
  }
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 620: range 0000000017543ABA-0000000017543C3A
int32_t __cdecl GadgetPlayBase::getCurStage(const GadgetPlayBase *const this)
{
  uint32_t progress; // ebx
  std::vector<unsigned int>::const_reference v3; // rdx
  uint32_t idx; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::empty(&this->progress_stage_vec_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "getCurStage",
      623);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v5,
      (const char (*)[31])"progress_stage_vec_ is empty()");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    for ( idx = 1; idx < std::vector<unsigned int>::size(&this->progress_stage_vec_); ++idx )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      progress = this->progress_;
      v3 = std::vector<unsigned int>::operator[](&this->progress_stage_vec_, idx);
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( progress < *v3 )
        return idx - 1;
    }
    return std::vector<unsigned int>::size(&this->progress_stage_vec_) - 1;
  }
};

// Line 638: range 0000000017543C3C-0000000017543E46
int32_t __cdecl GadgetPlayBase::getCurStageBeginProgress(const GadgetPlayBase *const this)
{
  uint32_t progress; // ebx
  std::vector<unsigned int>::const_reference v3; // rdx
  int32_t *v4; // rdx
  int32_t *v5; // rdx
  uint32_t idx; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::empty(&this->progress_stage_vec_) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "getCurStageBeginProgress",
      641);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v7,
      (const char (*)[31])"progress_stage_vec_ is empty()");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    for ( idx = 1; idx < std::vector<unsigned int>::size(&this->progress_stage_vec_); ++idx )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      progress = this->progress_;
      v3 = std::vector<unsigned int>::operator[](&this->progress_stage_vec_, idx);
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( progress < *v3 )
      {
        v4 = (int32_t *)std::vector<unsigned int>::operator[](&this->progress_stage_vec_, idx - 1);
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        return *v4;
      }
    }
    v5 = (int32_t *)std::vector<unsigned int>::back(&this->progress_stage_vec_);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return *v5;
  }
};

// Line 656: range 0000000017543E48-000000001754405B
__int64 __fastcall GadgetPlayBase::getUidValue(GadgetPlayBase *const this, uint32_t uid, const std::string *key)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > >::pointer v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > >::pointer v8; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::pointer v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  char v12[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 uid:655 64 8 8 iter:657 96 8 14 value_iter:662";
  *(_QWORD *)(v3 + 16) = GadgetPlayBase::getUidValue;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  *(std::map<unsigned int,std::map<std::string,unsigned int>>::iterator *)(v3 + 64) = std::map<unsigned int,std::map<std::string,unsigned int>>::find(
                                                                                        &this->uid_value_map_,
                                                                                        (const std::map<unsigned int,std::map<std::string,unsigned int>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::map<std::string,unsigned int>>::end(&this->uid_value_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > >::_Self *)(v3 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > > *const)(v3 + 64));
    *(std::map<std::string,unsigned int>::iterator *)(v3 + 96) = std::map<std::string,unsigned int>::find(
                                                                   &v7->second,
                                                                   key);
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > > *const)(v3 + 64));
    __y._M_node = std::map<std::string,unsigned int>::end(&v8->second)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self *)(v3 + 96),
           (const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self *)&__y) )
    {
      result = 0LL;
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      result = v9->second;
    }
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
  return result;
};

// Line 671: range 000000001754405C-0000000017544195
void __fastcall GadgetPlayBase::setUidValue(
        GadgetPlayBase *const this,
        uint32_t uid,
        const std::string *key,
        uint32_t value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::map<std::string,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  std::map<unsigned int,std::map<std::string,unsigned int>>::mapped_type *value_map; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 7 uid:670";
  *(_QWORD *)(v4 + 16) = GadgetPlayBase::setUidValue;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = uid;
  value_map = std::map<unsigned int,std::map<std::string,unsigned int>>::operator[](
                &this->uid_value_map_,
                (const std::map<unsigned int,std::map<std::string,unsigned int>>::key_type *)(v4 + 32));
  v7 = std::map<std::string,unsigned int>::operator[](value_map, key);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = value;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 679: range 0000000017544196-00000000175444ED
void __cdecl GadgetPlayBase::notifyViewingPlayersPlayData(GadgetPlayBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rax
  google::protobuf::uint32 v5; // eax
  uint32_t EntityId; // eax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:680";
  *(_QWORD *)(v1 + 16) = GadgetPlayBase::notifyViewingPlayersPlayData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::GadgetPlayDataNotify::GadgetPlayDataNotify((proto::GadgetPlayDataNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 2);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  v5 = (*(__int64 (__fastcall **)(GadgetPlayBase *const))v4)(this);
  proto::GadgetPlayDataNotify::set_play_type((proto::GadgetPlayDataNotify *const)(v1 + 32), v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
  proto::GadgetPlayDataNotify::set_entity_id((proto::GadgetPlayDataNotify *const)(v1 + 32), EntityId);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GadgetPlayDataNotify::set_progress((proto::GadgetPlayDataNotify *const)(v1 + 32), this->progress_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_GadgetPlayBase + 4);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(GadgetPlayBase *const, unsigned __int64))v7)(this, v1 + 32) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "notifyViewingPlayersPlayData",
      686);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v8, (const char (*)[25])"fillPlayDetailData fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::notifyViewingPlayers<proto::GadgetPlayDataNotify>(
      (Entity *const)this->gadget_,
      (proto::GadgetPlayDataNotify *)(v1 + 32),
      1);
  }
  proto::GadgetPlayDataNotify::~GadgetPlayDataNotify((proto::GadgetPlayDataNotify *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 694: range 00000000175444EE-00000000175445E5
int32_t __cdecl GadgetCruciblePlay::initCrucible(
        GadgetCruciblePlay *const this,
        uint32_t duration,
        uint32_t start_cd,
        const std::vector<unsigned int> *progress_stage_vec,
        uint32_t mp_play_id)
{
  int v6; // eax
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( GadgetPlayBase::init(this, duration, start_cd, progress_stage_vec) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "initCrucible",
      697);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v8,
      (const char (*)[27])"GadgetPlayBase::init fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    v6 = *(unsigned __int8 *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000);
    if ( (_BYTE)v6 != 0 && (char)v6 <= 3 )
      __asan_report_store4(&this->mp_play_id_);
    this->mp_play_id_ = mp_play_id;
    return 0;
  }
};

// Line 705: range 00000000175445E6-00000000175448A8
int32_t __cdecl GadgetCruciblePlay::toClient(const GadgetCruciblePlay *const this, proto::GadgetPlayInfo *play_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t PrepareEndTime; // edx
  int32_t result; // eax
  proto::GadgetCrucibleInfo *crucible_info; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 mp_play_ptr:715";
  *(_QWORD *)(v2 + 16) = GadgetCruciblePlay::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( GadgetPlayBase::toClient(this, play_info) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "toClient",
      708);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v10,
      (const char (*)[31])"GadgetPlayBase::toClient fails");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    crucible_info = proto::GadgetPlayInfo::mutable_crucible_info(play_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::GadgetCrucibleInfo::set_mp_play_id(crucible_info, this->mp_play_id_);
    GadgetCruciblePlay::findMpPlayPtr((const GadgetCruciblePlay *const)(v2 + 32));
    if ( std::operator!=<BaseMpPlay>((const std::shared_ptr<BaseMpPlay> *)(v2 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      PrepareEndTime = BaseMpPlay::getPrepareEndTime(v6);
      proto::GadgetCrucibleInfo::set_prepare_end_time(crucible_info, PrepareEndTime);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "toClient",
        722);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v10, (const char (*)[20])"findMpPlayPtr fails");
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    v5 = 0;
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v2 + 32));
  }
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 728: range 00000000175448AA-00000000175448BC
int32_t __cdecl GadgetCruciblePlay::fillPlayDetailData(
        const GadgetCruciblePlay *const this,
        proto::GadgetPlayDataNotify *notify)
{
  return 0;
};

// Line 734: range 00000000175448BE-0000000017544AB3
int32_t __cdecl GadgetCruciblePlay::checkBattleStart(const GadgetCruciblePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 mp_play_ptr:735";
  *(_QWORD *)(v1 + 16) = GadgetCruciblePlay::checkBattleStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  GadgetCruciblePlay::findMpPlayPtr((const GadgetCruciblePlay *const)(v1 + 32));
  if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v1 + 32))
    || (v4 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
        BaseMpPlay::isClose(v4)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "checkBattleStart",
      739);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v9,
           (const char (*)[29])"findMpPlayPtr fails, gadget:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v1 + 32));
  result = v7;
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 746: range 0000000017544AB4-0000000017544E97
BaseMpPlayPtr __cdecl GadgetCruciblePlay::findMpPlayPtr(const GadgetCruciblePlay *const this)
{
  const GadgetCruciblePlay *v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  Player *v7; // rax
  uint32_t MpPlayComp; // esi
  BaseMpPlayPtr result; // rax
  const GadgetCruciblePlay *thisa; // [rsp+0h] [rbp-B0h]
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  thisa = v1;
  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 scene_ptr:747 64 16 20 owner_player_ptr:753";
  *(_QWORD *)(v2 + 16) = GadgetCruciblePlay::findMpPlayPtr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&v1->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "findMpPlayPtr",
      750);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v11,
           (const char (*)[25])"getScene fails, gadget_:");
    if ( *(_BYTE *)(((unsigned __int64)&v1->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, v1->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::shared_ptr<BaseMpPlay>::shared_ptr((std::shared_ptr<BaseMpPlay> *const)this, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Scene::getOwnPlayer((const Scene *const)(v2 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "findMpPlayPtr",
        756);
      v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v11,
             (const char (*)[42])"scene_ptr->getOwnerPlayer fails, gadget_:");
      if ( *(_BYTE *)(((unsigned __int64)&v1->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, v1->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v11);
      std::shared_ptr<BaseMpPlay>::shared_ptr((std::shared_ptr<BaseMpPlay> *const)this, 0LL);
    }
    else
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      MpPlayComp = (unsigned int)Player::getMpPlayComp(v7);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->mp_play_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store16(this);
      PlayerMpPlayComp::findMpPlayPtr((PlayerMpPlayComp *const)this, MpPlayComp);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<BaseMpPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 763: range 0000000017544E98-000000001754573F
void __cdecl GadgetCruciblePlay::onBattleStart(GadgetCruciblePlay *const this)
{
  unsigned __int64 p_M_start; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  BaseMpPlay *v7; // rax
  Player *v8; // rax
  Player *v9; // rax
  std::weak_ptr<GadgetCruciblePlay> *EventComp; // [rsp+10h] [rbp-1B0h]
  std::weak_ptr<GadgetCruciblePlay> *p_this_wtr; // [rsp+20h] [rbp-1A0h]
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+30h] [rbp-190h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+38h] [rbp-188h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+40h] [rbp-180h]
  std::shared_ptr<Player> *player_ptr; // [rsp+48h] [rbp-178h]
  PlayerEventComp v16; // [rsp+50h] [rbp-170h] BYREF

  p_M_start = (unsigned __int64)&v16.event_center_.context_.pending_que_.c._M_impl._M_start;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      p_M_start = v2;
  }
  *(_QWORD *)p_M_start = 1102416563LL;
  *(_QWORD *)(p_M_start + 8) = "6 32 16 13 scene_ptr:765 64 16 20 owner_player_ptr:771 96 16 15 mp_play_ptr:778 128 16 12"
                               " self_ptr:793 160 16 12 self_wtr:794 192 24 18 player_ptr_vec:798";
  *(_QWORD *)(p_M_start + 16) = GadgetCruciblePlay::onBattleStart;
  v3 = (_DWORD *)(p_M_start >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v16.event_center_,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget_play_comp.cpp",
    "onBattleStart",
    764);
  v4 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
         (common::milog::MiLogStream *const)&v16.event_center_,
         (const char (*)[22])"onBattleStart gadget:");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v16.event_center_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(p_M_start + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(p_M_start + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v16.event_center_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "onBattleStart",
      768);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           (common::milog::MiLogStream *const)&v16.event_center_,
           (const char (*)[25])"getScene fails, gadget_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, this->gadget_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v16.event_center_);
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_start + 32));
    Scene::getOwnPlayer((const Scene *const)(p_M_start + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(p_M_start + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v16.event_center_,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "onBattleStart",
        774);
      v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             (common::milog::MiLogStream *const)&v16.event_center_,
             (const char (*)[42])"scene_ptr->getOwnerPlayer fails, gadget_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v16.event_center_);
    }
    else
    {
      GadgetCruciblePlay::findMpPlayPtr((const GadgetCruciblePlay *const)(p_M_start + 96));
      if ( std::operator!=<BaseMpPlay>((const std::shared_ptr<BaseMpPlay> *)(p_M_start + 96), 0LL) )
      {
        v7 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_start + 96));
        BaseMpPlay::onBattleStart(v7);
      }
      if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->observer_wtr_) )
      {
        toThisPtr<GadgetCruciblePlay>((GadgetCruciblePlay *)(p_M_start + 128));
        std::weak_ptr<GadgetCruciblePlay>::weak_ptr<GadgetCruciblePlay,void>(
          (std::weak_ptr<GadgetCruciblePlay> *const)(p_M_start + 160),
          (const std::shared_ptr<GadgetCruciblePlay> *)(p_M_start + 128));
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_start + 64));
        p_this_wtr = (std::weak_ptr<GadgetCruciblePlay> *)Player::getEventComp(v8);
        std::weak_ptr<GadgetCruciblePlay>::weak_ptr(
          (std::weak_ptr<GadgetCruciblePlay> *const)&v16._M_weak_this._M_refcount,
          (const std::weak_ptr<GadgetCruciblePlay> *)(p_M_start + 160));
        PlayerEventComp::registerObserver<GadgetCruciblePlay,WorldPlayerChangeEvent>(
          &v16,
          p_this_wtr,
          (void (*)(GadgetCruciblePlay *, const WorldPlayerChangeEvent *))&v16._M_weak_this._M_refcount);
        std::weak_ptr<Observer>::operator=(&this->observer_wtr_, (std::weak_ptr<Observer> *)&v16);
        std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v16);
        std::weak_ptr<GadgetCruciblePlay>::~weak_ptr((std::weak_ptr<GadgetCruciblePlay> *const)&v16._M_weak_this._M_refcount);
        std::weak_ptr<GadgetCruciblePlay>::~weak_ptr((std::weak_ptr<GadgetCruciblePlay> *const)(p_M_start + 160));
        std::shared_ptr<GadgetCruciblePlay>::~shared_ptr((std::shared_ptr<GadgetCruciblePlay> *const)(p_M_start + 128));
      }
      if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->mp_mode_observer_wtr_) )
      {
        toThisPtr<GadgetCruciblePlay>((GadgetCruciblePlay *)(p_M_start + 128));
        std::weak_ptr<GadgetCruciblePlay>::weak_ptr<GadgetCruciblePlay,void>(
          (std::weak_ptr<GadgetCruciblePlay> *const)(p_M_start + 160),
          (const std::shared_ptr<GadgetCruciblePlay> *)(p_M_start + 128));
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_start + 64));
        EventComp = (std::weak_ptr<GadgetCruciblePlay> *)Player::getEventComp(v9);
        std::weak_ptr<GadgetCruciblePlay>::weak_ptr(
          (std::weak_ptr<GadgetCruciblePlay> *const)&v16,
          (const std::weak_ptr<GadgetCruciblePlay> *)(p_M_start + 160));
        PlayerEventComp::registerObserver<GadgetCruciblePlay,WorldMpModeChangeEvent>(
          (PlayerEventComp *const)&v16._M_weak_this._M_refcount,
          EventComp,
          (void (*)(GadgetCruciblePlay *, const WorldMpModeChangeEvent *))&v16);
        std::weak_ptr<Observer>::operator=(
          &this->mp_mode_observer_wtr_,
          (std::weak_ptr<Observer> *)&v16._M_weak_this._M_refcount);
        std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v16._M_weak_this._M_refcount);
        std::weak_ptr<GadgetCruciblePlay>::~weak_ptr((std::weak_ptr<GadgetCruciblePlay> *const)&v16);
        std::weak_ptr<GadgetCruciblePlay>::~weak_ptr((std::weak_ptr<GadgetCruciblePlay> *const)(p_M_start + 160));
        std::shared_ptr<GadgetCruciblePlay>::~shared_ptr((std::shared_ptr<GadgetCruciblePlay> *const)(p_M_start + 128));
      }
      GadgetPlayBase::getPlayerVec((std::vector<std::shared_ptr<Player>> *)(p_M_start + 192), this);
      __for_range = (std::vector<std::shared_ptr<Player>> *)(p_M_start + 192);
      __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(p_M_start + 192))._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(p_M_start + 192))._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                &__for_begin,
                &__for_end) )
      {
        player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
        std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)&v16._M_weak_this._M_refcount, player_ptr);
        GadgetCruciblePlay::onPlayerJoin(this, (PlayerPtr *)&v16._M_weak_this._M_refcount, 0);
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v16._M_weak_this._M_refcount);
        __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
      }
      std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(p_M_start + 192));
      std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(p_M_start + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_M_start + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(p_M_start + 32));
  if ( &v16.event_center_.context_.pending_que_.c._M_impl._M_start == (std::_Deque_base<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >>::iterator *)p_M_start )
  {
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_start = 1172321806LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 806: range 0000000017545740-0000000017545DD6
void __cdecl GadgetCruciblePlay::onWorldPlayerChangeEvent(
        GadgetCruciblePlay *const this,
        const WorldPlayerChangeEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t OwnerUid; // ecx
  char v7; // al
  GameserverService *v8; // rax
  uint32_t v9; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  GameserverService *v15; // rax
  uint32_t v16; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned int val; // [rsp+1Ch] [rbp-114h] BYREF
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-110h] BYREF
  MpPlayBattleResult result; // [rsp+40h] [rbp-F0h] BYREF
  char v24[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 scene_ptr:812 64 16 14 player_ptr:836 96 16 14 player_ptr:826";
  *(_QWORD *)(v2 + 16) = GadgetCruciblePlay::onWorldPlayerChangeEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( GadgetPlayBase::isStarted(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v2 + 32));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
      goto LABEL_11;
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    OwnerUid = Scene::getOwnerUid(v5);
    if ( *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( OwnerUid == event->owner_uid )
      v7 = 0;
    else
LABEL_11:
      v7 = 1;
    if ( !v7 )
    {
      if ( *(char *)(((unsigned __int64)&event->is_enter >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&event->is_enter);
      if ( !event->is_enter )
      {
        std::map<unsigned int,std::map<std::string,unsigned int>>::erase(&this->uid_value_map_, &event->change_uid);
        std::map<unsigned int,unsigned int>::erase(&this->uid_score_map_, &event->change_uid);
        std::map<unsigned int,unsigned int>::erase(&this->uid_watcher_map_, &event->change_uid);
        v8 = ServiceBox::findService<GameserverService>();
        v9 = (unsigned int)GameserverService::getGameThreadLocal(v8) + 16;
        if ( *(_BYTE *)(((unsigned __int64)&event->change_uid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->change_uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 96), v9);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
        {
          memset(&result, 0, sizeof(result));
          MpPlayBattleResult::MpPlayBattleResult(&result);
          GadgetCruciblePlay::onPlayerExit(this, (PlayerPtr *)(v2 + 96), &result);
          MpPlayBattleResult::~MpPlayBattleResult(&result);
        }
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/gadget_play_comp.cpp",
          "onWorldPlayerChangeEvent",
          831);
        v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v22, (const char (*)[6])"uid: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &event->change_uid);
        v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" exit owner:");
        v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        val = Scene::getOwnerUid(v13);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v14, (const char (*)[21])" and clear value_map");
        common::milog::MiLogStream::~MiLogStream(&v22);
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
      }
      else
      {
        v15 = ServiceBox::findService<GameserverService>();
        v16 = (unsigned int)GameserverService::getGameThreadLocal(v15) + 16;
        if ( *(_BYTE *)(((unsigned __int64)&event->change_uid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->change_uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), v16);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
        {
          std::shared_ptr<Player>::shared_ptr(
            (std::shared_ptr<Player> *const)(v2 + 96),
            (const std::shared_ptr<Player> *)(v2 + 64));
          GadgetCruciblePlay::onPlayerJoin(this, (PlayerPtr *)(v2 + 96), 1);
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
        }
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/gadget_play_comp.cpp",
          "onWorldPlayerChangeEvent",
          841);
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v22, (const char (*)[6])"uid: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &event->change_uid);
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" join owner:");
        v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        val = Scene::getOwnerUid(v20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        common::milog::MiLogStream::~MiLogStream(&v22);
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
  if ( v24 == (char *)v2 )
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
};

// Line 846: range 0000000017545DD8-00000000175460E1
void __cdecl GadgetCruciblePlay::onWorldMpModeChangeEvent(
        GadgetCruciblePlay *const this,
        const WorldMpModeChangeEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t OwnerUid; // ecx
  char v7; // al
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-90h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:852";
  *(_QWORD *)(v2 + 16) = GadgetCruciblePlay::onWorldMpModeChangeEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( GadgetPlayBase::isStarted(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v2 + 32));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
      goto LABEL_11;
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    OwnerUid = Scene::getOwnerUid(v5);
    if ( *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( OwnerUid == event->owner_uid )
      v7 = 0;
    else
LABEL_11:
      v7 = 1;
    if ( !v7 )
    {
      v8 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(_QWORD *)v8 + 392LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v9)(v8) != 1 )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/gadget/gadget_play_comp.cpp",
          "onWorldMpModeChangeEvent",
          860);
        v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v11,
                (const char (*)[39])"isInMpMode fails, stop crucible play! ");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v10, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v11);
        GadgetPlayBase::stop(this, 0);
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 866: range 00000000175460E2-0000000017546495
void __cdecl GadgetCruciblePlay::onBattleStop(
        GadgetCruciblePlay *const this,
        bool is_win,
        uint32_t cost_time,
        uint32_t team_score)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  BaseMpPlay *v8; // rax
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+30h] [rbp-130h]
  std::shared_ptr<Player> *player_ptr; // [rsp+38h] [rbp-128h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-120h] BYREF
  char v16[256]; // [rsp+60h] [rbp-100h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 15 mp_play_ptr:878 64 24 18 player_ptr_vec:884 128 64 10 result:870";
  *(_QWORD *)(v4 + 16) = GadgetCruciblePlay::onBattleStop;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862726] = -202116109;
  std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->observer_wtr_);
  std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->mp_mode_observer_wtr_);
  MpPlayBattleResult::MpPlayBattleResult((MpPlayBattleResult *const)(v4 + 128));
  *(_DWORD *)(v4 + 128) = cost_time;
  *(_DWORD *)(v4 + 132) = team_score;
  *(_DWORD *)(v4 + 136) = is_win;
  std::map<unsigned int,unsigned int>::operator=(
    (std::map<unsigned int,unsigned int> *const)(v4 + 144),
    &this->uid_score_map_);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget_play_comp.cpp",
    "onBattleStop",
    876);
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v15, (const char (*)[15])"uid_score_map:");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
    v7,
    (const std::map<unsigned int,unsigned int> *)(v4 + 144));
  common::milog::MiLogStream::~MiLogStream(&v15);
  GadgetCruciblePlay::findMpPlayPtr((const GadgetCruciblePlay *const)(v4 + 32));
  if ( std::operator!=<BaseMpPlay>((const std::shared_ptr<BaseMpPlay> *)(v4 + 32), 0LL) )
  {
    v8 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    BaseMpPlay::onBattleStop(v8, (const MpPlayBattleResult *)(v4 + 128));
  }
  GadgetPlayBase::getPlayerVec((std::vector<std::shared_ptr<Player>> *)(v4 + 64), this);
  __for_range = (std::vector<std::shared_ptr<Player>> *)(v4 + 64);
  __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v4 + 64))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v4 + 64))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
            &__for_begin,
            &__for_end) )
  {
    player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
    GadgetCruciblePlay::onPlayerExit(this, player_ptr, (const MpPlayBattleResult *)(v4 + 128));
    __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
  }
  std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v4 + 64));
  std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v4 + 32));
  MpPlayBattleResult::~MpPlayBattleResult((MpPlayBattleResult *const)(v4 + 128));
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 892: range 0000000017546496-0000000017547DB1
void __cdecl GadgetCruciblePlay::calculateBattleInfo(
        GadgetCruciblePlay *const this,
        std::vector<std::shared_ptr<Player>> *player_ptr_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const std::vector<std::string> *v6; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,unsigned int> >::pointer v11; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  uint32_t *v13; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  Player *v21; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  const std::string *v24; // rax
  unsigned int *v26; // rax
  unsigned int *v27; // r8
  unsigned int *v28; // r9
  Player *v29; // rax
  PlayerEventComp *v30; // r14
  common::milog::MiLogStream *v31; // r14
  const unsigned int *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  Player *v42; // rax
  PlayerEventComp *v43; // r14
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v45; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  Player *v47; // rax
  uint32_t WatcherComp; // eax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v52; // rax
  uint32_t *v53; // rdx
  int v54; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  WatcherExcelConfigMgr *p_watcher_config_mgr; // r14
  uint32_t *v57; // rdx
  char v58; // al
  int v59; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v60; // rax
  _DWORD *v61; // rdx
  char v62; // al
  int v63; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v64; // rax
  _DWORD *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  uint32_t element_score; // [rsp+24h] [rbp-33Ch]
  uint32_t ball_cnt; // [rsp+28h] [rbp-338h]
  uint32_t idx; // [rsp+2Ch] [rbp-334h]
  uint32_t watcher_id; // [rsp+30h] [rbp-330h]
  uint32_t uid; // [rsp+34h] [rbp-32Ch]
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+38h] [rbp-328h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+40h] [rbp-320h] BYREF
  std::vector<std::string>::const_iterator __for_begin_0; // [rsp+48h] [rbp-318h] BYREF
  std::vector<std::string>::const_iterator __for_end_0; // [rsp+50h] [rbp-310h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end_1; // [rsp+58h] [rbp-308h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+60h] [rbp-300h]
  std::vector<std::shared_ptr<Player>> *__for_range_1; // [rsp+68h] [rbp-2F8h]
  const std::vector<std::string> *__for_range_2; // [rsp+70h] [rbp-2F0h]
  std::vector<std::shared_ptr<Player>> *__for_range_3; // [rsp+78h] [rbp-2E8h]
  const std::vector<unsigned int> *watcher_id_vec; // [rsp+80h] [rbp-2E0h]
  const std::vector<unsigned int> *__for_range_4; // [rsp+88h] [rbp-2D8h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+90h] [rbp-2D0h]
  std::shared_ptr<Player> *player_ptr_2; // [rsp+98h] [rbp-2C8h]
  std::vector<std::shared_ptr<Player>> *__for_range_5; // [rsp+A0h] [rbp-2C0h]
  std::shared_ptr<Player> *player_ptr_3; // [rsp+A8h] [rbp-2B8h]
  const data::WatcherConfig *watcher_config_ptr_0; // [rsp+B0h] [rbp-2B0h]
  std::shared_ptr<Player> *player_ptr_1; // [rsp+B8h] [rbp-2A8h]
  const std::string *name; // [rsp+C0h] [rbp-2A0h]
  std::shared_ptr<Player> *player_ptr_0; // [rsp+C8h] [rbp-298h]
  std::shared_ptr<Player> *player_ptr; // [rsp+D0h] [rbp-290h]
  const std::map<std::string,unsigned int> *value_map; // [rsp+D8h] [rbp-288h]
  const std::vector<std::string> *__for_range_0; // [rsp+E0h] [rbp-280h]
  const std::string *element_name; // [rsp+E8h] [rbp-278h]
  common::milog::MiLogStream v97; // [rsp+F0h] [rbp-270h] BYREF
  char v98[592]; // [rsp+110h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v98;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 32 4 13 max_score:926 48 4 12 max_ball:957 64 4 9 value:966 80 4 8 uid:1031 96 8 8 iter:902 1"
                        "28 8 8 iter:914 160 16 20 score_player_ptr:925 192 16 19 ball_player_ptr:956 224 16 13 event_ptr"
                        ":984 256 16 16 watcher_ptr:1006 288 24 20 element_name_vec:894 352 24 20 element_ball_vec:946 41"
                        "6 24 20 element_type_vec:947 480 24 25 remain_player_ptr_vec:989";
  *(_QWORD *)(v2 + 16) = GadgetCruciblePlay::calculateBattleInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862731] = -234881024;
  v4[536862732] = -218959118;
  v4[536862733] = -234881024;
  v4[536862734] = -218959118;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 256));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
  v6 = ConstValueExcelConfigMgr::getElementNameVec[abi:cxx11](&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 288), v6);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 256));
  __for_range = player_ptr_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin(player_ptr_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Player>>::end(player_ptr_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
            &__for_begin,
            &__for_end) )
  {
    player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
    if ( !std::operator==<Player>(0LL, player_ptr) )
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
      *(_DWORD *)(v2 + 80) = Player::getUid(v7);
      *(std::map<unsigned int,std::map<std::string,unsigned int>>::iterator *)(v2 + 96) = std::map<unsigned int,std::map<std::string,unsigned int>>::find(
                                                                                            &this->uid_value_map_,
                                                                                            (const std::map<unsigned int,std::map<std::string,unsigned int>>::key_type *)(v2 + 80));
      __for_end_1._M_current = (std::shared_ptr<Player> *)std::map<unsigned int,std::map<std::string,unsigned int>>::end(&this->uid_value_map_)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > >::_Self *)(v2 + 96),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > >::_Self *)&__for_end_1) )
      {
        value_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > > *const)(v2 + 96))->second;
        common::milog::MiLogStream::create(
          &v97,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/gadget_play_comp.cpp",
          "calculateBattleInfo",
          908);
        v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v97, (const char (*)[5])"uid:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 80));
        v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" value_map:");
        common::milog::MiLogStream::operator<<<std::string,unsigned int>(v10, value_map);
        common::milog::MiLogStream::~MiLogStream(&v97);
        element_score = 0;
        __for_range_0 = (const std::vector<std::string> *)(v2 + 288);
        __for_begin_0._M_current = std::vector<std::string>::begin((const std::vector<std::string> *const)(v2 + 288))._M_current;
        __for_end_0._M_current = std::vector<std::string>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin_0, &__for_end_0) )
        {
          element_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin_0);
          *(std::map<std::string,unsigned int>::const_iterator *)(v2 + 128) = std::map<std::string,unsigned int>::find(
                                                                                value_map,
                                                                                element_name);
          __for_end_1._M_current = (std::shared_ptr<Player> *)std::map<std::string,unsigned int>::cend(value_map)._M_node;
          if ( std::operator!=(
                 (const std::_Rb_tree_const_iterator<std::pair<const std::string,unsigned int> >::_Self *)(v2 + 128),
                 (const std::_Rb_tree_const_iterator<std::pair<const std::string,unsigned int> >::_Self *)&__for_end_1) )
          {
            v11 = std::_Rb_tree_const_iterator<std::pair<std::string const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::string,unsigned int> > *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            element_score += v11->second;
          }
          __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin_0);
        }
        v12 = std::map<unsigned int,unsigned int>::operator[](
                &this->uid_score_map_,
                (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 80));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v12);
        }
        *v13 = element_score;
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
  }
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_DWORD *)(v2 + 32) = 0;
  __for_range_1 = player_ptr_vec;
  *(std::vector<std::shared_ptr<Player>>::iterator *)(v2 + 128) = std::vector<std::shared_ptr<Player>>::begin(player_ptr_vec);
  __for_end_1._M_current = std::vector<std::shared_ptr<Player>>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v2 + 128),
            &__for_end_1) )
  {
    player_ptr_0 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)(v2 + 128));
    if ( !std::operator==<Player>(0LL, player_ptr_0) )
    {
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr_0);
      *(_DWORD *)(v2 + 80) = Player::getUid(v14);
      v15 = std::map<unsigned int,unsigned int>::operator[](
              &this->uid_score_map_,
              (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *v15 > *(_DWORD *)(v2 + 32) )
      {
        std::shared_ptr<Player>::operator=((std::shared_ptr<Player> *const)(v2 + 160), player_ptr_0);
        v16 = std::map<unsigned int,unsigned int>::operator[](
                &this->uid_score_map_,
                (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = *v16;
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)(v2 + 128));
  }
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v97,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget_play_comp.cpp",
      "calculateBattleInfo",
      940);
    v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v97, (const char (*)[11])"max_score:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
    v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
    v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    *(_DWORD *)(v2 + 80) = Player::getUid(v20);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v97);
    common::tools::perf::make_shared<CrucibleMaxElementScore,unsigned int &,unsigned int &>(
      (unsigned int *)(v2 + 224),
      &this->mp_play_id_,
      (unsigned int *)(v2 + 32),
      &this->mp_play_id_);
    v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    EventComp = Player::getEventComp(v21);
    std::shared_ptr<BaseEvent>::shared_ptr<CrucibleMaxElementScore,void>(
      (std::shared_ptr<BaseEvent> *const)(v2 + 256),
      (const std::shared_ptr<CrucibleMaxElementScore> *)(v2 + 224));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 256));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 256));
    std::shared_ptr<CrucibleMaxElementScore>::~shared_ptr((std::shared_ptr<CrucibleMaxElementScore> *const)(v2 + 224));
  }
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 352));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 416));
  __for_range_2 = (const std::vector<std::string> *)(v2 + 288);
  *(std::vector<std::string>::const_iterator *)(v2 + 128) = std::vector<std::string>::begin((const std::vector<std::string> *const)(v2 + 288));
  __for_end_1._M_current = (std::shared_ptr<Player> *)std::vector<std::string>::end(__for_range_2)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 128),
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)&__for_end_1) )
  {
    name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 128));
    *(_DWORD *)(v2 + 64) = 0;
    if ( data::enumStrToVal(name, (data::ElementType *)(v2 + 64)) )
    {
      std::operator+<char>((std::string *)&v97, name, "_ball");
      std::vector<std::string>::emplace_back<std::string>(
        (std::vector<std::string> *const)(v2 + 352),
        (std::string *)&v97,
        (std::string *)&v97);
      std::string::~string(&v97);
      *(_DWORD *)(v2 + 80) = *(_DWORD *)(v2 + 64);
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v2 + 416),
        (std::vector<unsigned int>::value_type *)(v2 + 80));
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 128));
  }
  std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v2 + 192), 0LL);
  *(_DWORD *)(v2 + 48) = 0;
  __for_range_3 = player_ptr_vec;
  *(std::vector<std::shared_ptr<Player>>::iterator *)(v2 + 128) = std::vector<std::shared_ptr<Player>>::begin(player_ptr_vec);
  __for_end_1._M_current = std::vector<std::shared_ptr<Player>>::end(__for_range_3)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v2 + 128),
            &__for_end_1) )
  {
    player_ptr_1 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)(v2 + 128));
    if ( !std::operator==<Player>(0LL, player_ptr_1) )
    {
      v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr_1);
      uid = Player::getUid(v23);
      ball_cnt = 0;
      for ( idx = 0; idx < std::vector<std::string>::size((const std::vector<std::string> *const)(v2 + 352)); ++idx )
      {
        v24 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 352), idx);
        *(_DWORD *)(v2 + 64) = GadgetPlayBase::getUidValue(this, uid, v24);
        if ( *(_DWORD *)(v2 + 64)
          && idx < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 416)) )
        {
          ball_cnt += *(_DWORD *)(v2 + 64);
          v26 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 416), idx);
          common::tools::perf::make_shared<CrucibleSubmitBall,unsigned int &,unsigned int &,unsigned int &>(
            (unsigned int *)(v2 + 224),
            &this->mp_play_id_,
            v26,
            (unsigned int *)(v2 + 64),
            v27,
            v28);
          v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr_1);
          v30 = Player::getEventComp(v29);
          std::shared_ptr<BaseEvent>::shared_ptr<CrucibleSubmitBall,void>(
            (std::shared_ptr<BaseEvent> *const)(v2 + 256),
            (const std::shared_ptr<CrucibleSubmitBall> *)(v2 + 224));
          PlayerEventComp::notifyEvent(v30, (BaseEventPtr *)(v2 + 256));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 256));
          common::milog::MiLogStream::create(
            &v97,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/gadget/gadget_play_comp.cpp",
            "calculateBattleInfo",
            972);
          v31 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v97,
                  (const char (*)[21])"submit element_type:");
          v32 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 416), idx);
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, v32);
          v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])" ball_cnt:");
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v34,
                  (const unsigned int *)(v2 + 64));
          v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])" uid:");
          v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr_1);
          *(_DWORD *)(v2 + 80) = Player::getUid(v37);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v97);
          std::shared_ptr<CrucibleSubmitBall>::~shared_ptr((std::shared_ptr<CrucibleSubmitBall> *const)(v2 + 224));
        }
      }
      if ( ball_cnt > *(_DWORD *)(v2 + 48) )
      {
        std::shared_ptr<Player>::operator=((std::shared_ptr<Player> *const)(v2 + 192), player_ptr_1);
        *(_DWORD *)(v2 + 48) = ball_cnt;
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)(v2 + 128));
  }
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 192), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v97,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget_play_comp.cpp",
      "calculateBattleInfo",
      983);
    v38 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v97, (const char (*)[10])"max_ball:");
    v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v2 + 48));
    v40 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v39, (const char (*)[6])" uid:");
    v41 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
    *(_DWORD *)(v2 + 80) = Player::getUid(v41);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v97);
    common::tools::perf::make_shared<CrucibleSubmitMaxBall,unsigned int &,unsigned int &>(
      (unsigned int *)(v2 + 224),
      &this->mp_play_id_,
      (unsigned int *)(v2 + 48),
      &this->mp_play_id_);
    v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
    v43 = Player::getEventComp(v42);
    std::shared_ptr<BaseEvent>::shared_ptr<CrucibleSubmitMaxBall,void>(
      (std::shared_ptr<BaseEvent> *const)(v2 + 256),
      (const std::shared_ptr<CrucibleSubmitMaxBall> *)(v2 + 224));
    PlayerEventComp::notifyEvent(v43, (BaseEventPtr *)(v2 + 256));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 256));
    std::shared_ptr<CrucibleSubmitMaxBall>::~shared_ptr((std::shared_ptr<CrucibleSubmitMaxBall> *const)(v2 + 224));
  }
  std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v2 + 480), player_ptr_vec);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 256));
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256))->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  watcher_id_vec = MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(p_mp_play_config_mgr, this->mp_play_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 256));
  __for_range_4 = watcher_id_vec;
  __for_begin_0._M_current = (const std::string *)std::vector<unsigned int>::begin(watcher_id_vec)._M_current;
  __for_end_0._M_current = (const std::string *)std::vector<unsigned int>::end(__for_range_4)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin_0,
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end_0) )
  {
    v45 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin_0);
    if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    watcher_id = *v45;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 256));
    v46 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v46->design_config.txt_config_mgr.watcher_config_mgr,
                           watcher_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 256));
    if ( watcher_config_ptr )
    {
      *(std::vector<std::shared_ptr<Player>>::iterator *)(v2 + 128) = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v2 + 480));
      while ( 1 )
      {
        __for_end_1._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v2 + 480))._M_current;
        if ( !__gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v2 + 128),
                &__for_end_1) )
          break;
        player_ptr_2 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)(v2 + 128));
        if ( std::operator==<Player>(0LL, player_ptr_2) )
        {
          __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)(v2 + 128));
        }
        else
        {
          v47 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr_2);
          WatcherComp = (unsigned int)Player::getWatcherComp(v47);
          PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 256), WatcherComp);
          if ( std::operator!=<BaseWatcher>((const std::shared_ptr<BaseWatcher> *)(v2 + 256), 0LL)
            && (v49 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256)),
                BaseWatcher::isFinished(v49)) )
          {
            v51 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr_2);
            *(_DWORD *)(v2 + 80) = Player::getUid(v51);
            v52 = std::map<unsigned int,unsigned int>::operator[](
                    &this->uid_watcher_map_,
                    (std::map<unsigned int,unsigned int>::key_type *)(v2 + 80));
            v53 = v52;
            if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v52);
            }
            *v53 = watcher_id;
            __gnu_cxx::__normal_iterator<std::shared_ptr<Player> const*,std::vector<std::shared_ptr<Player>>>::__normal_iterator<std::shared_ptr<Player>*>(
              (__gnu_cxx::__normal_iterator<const std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_end_1,
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v2 + 128));
            *(std::vector<std::shared_ptr<Player>>::iterator *)(v2 + 128) = std::vector<std::shared_ptr<Player>>::erase(
                                                                              (std::vector<std::shared_ptr<Player>> *const)(v2 + 480),
                                                                              (std::vector<std::shared_ptr<Player>>::const_iterator)__for_end_1._M_current);
            v54 = 0;
          }
          else
          {
            __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)(v2 + 128));
            v54 = 1;
          }
          std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 256));
          if ( v54 != 1 )
            break;
        }
      }
      if ( std::vector<std::shared_ptr<Player>>::empty((const std::vector<std::shared_ptr<Player>> *const)(v2 + 480)) )
        break;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin_0);
  }
  std::map<unsigned int,unsigned int>::clear(&this->uid_watcher_value_map_);
  __for_range_5 = player_ptr_vec;
  *(std::vector<std::shared_ptr<Player>>::iterator *)(v2 + 128) = std::vector<std::shared_ptr<Player>>::begin(player_ptr_vec);
  __for_end_1._M_current = std::vector<std::shared_ptr<Player>>::end(__for_range_5)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v2 + 128),
            &__for_end_1) )
  {
    player_ptr_3 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)(v2 + 128));
    if ( !std::operator==<Player>(0LL, player_ptr_3) )
    {
      v55 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr_3);
      *(_DWORD *)(v2 + 80) = Player::getUid(v55);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 256));
      p_watcher_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256))->design_config.txt_config_mgr.watcher_config_mgr;
      v57 = std::map<unsigned int,unsigned int>::operator[](
              &this->uid_watcher_map_,
              (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      watcher_config_ptr_0 = WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, *v57);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 256));
      if ( !watcher_config_ptr_0 )
        goto LABEL_87;
      if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr_0->trigger_config.trigger_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr_0->trigger_config.trigger_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( watcher_config_ptr_0->trigger_config.trigger_type == TRIGGER_CRUCIBLE_MAX_SCORE
        && std::operator==<Player,Player>(player_ptr_3, (const std::shared_ptr<Player> *)(v2 + 160)) )
      {
        v58 = 1;
      }
      else
      {
LABEL_87:
        v58 = 0;
      }
      if ( v58 )
      {
        v59 = *(_DWORD *)(v2 + 32);
        v60 = std::map<unsigned int,unsigned int>::operator[](
                &this->uid_watcher_value_map_,
                (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 80));
        v61 = v60;
        if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v60 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v60);
        }
        *v61 = v59;
      }
      if ( !watcher_config_ptr_0 )
        goto LABEL_98;
      if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr_0->trigger_config.trigger_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr_0->trigger_config.trigger_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( watcher_config_ptr_0->trigger_config.trigger_type == TRIGGER_CRUCIBLE_MAX_BALL
        && std::operator==<Player,Player>(player_ptr_3, (const std::shared_ptr<Player> *)(v2 + 192)) )
      {
        v62 = 1;
      }
      else
      {
LABEL_98:
        v62 = 0;
      }
      if ( v62 )
      {
        v63 = *(_DWORD *)(v2 + 48);
        v64 = std::map<unsigned int,unsigned int>::operator[](
                &this->uid_watcher_value_map_,
                (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 80));
        v65 = v64;
        if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v64);
        }
        *v65 = v63;
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)(v2 + 128));
  }
  common::milog::MiLogStream::create(
    &v97,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget_play_comp.cpp",
    "calculateBattleInfo",
    1043);
  v66 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v97, (const char (*)[18])"uid_watcher_map_:");
  v67 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v66, &this->uid_watcher_map_);
  v68 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v67,
          (const char (*)[25])" uid_watcher_value_map_:");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v68, &this->uid_watcher_value_map_);
  common::milog::MiLogStream::~MiLogStream(&v97);
  std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v2 + 480));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 192));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 416));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 352));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 288));
  if ( v98 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
};

// Line 1048: range 0000000017547DB2-0000000017547FCE
__int64 __fastcall GadgetCruciblePlay::getBattleScore(const GadgetCruciblePlay *const this, uint32_t cost_time)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  uint32_t score; // [rsp+1Ch] [rbp-B4h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 param:1050 64 4 14 cost_time:1047";
  *(_QWORD *)(v2 + 16) = GadgetCruciblePlay::getBattleScore;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = cost_time;
  score = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  *(_DWORD *)(v2 + 48) = ConstValueExcelConfigMgr::getMpPlayCrucibleScoreParam(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( *(_DWORD *)(v2 + 48) < *(_DWORD *)(v2 + 64) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "getBattleScore",
      1057);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v12,
           (const char (*)[29])"getMpPlayCrucibleScoreParam:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" but cost_time:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    score = *(_DWORD *)(v2 + 48) - *(_DWORD *)(v2 + 64);
  }
  result = score;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 1063: range 0000000017547FD0-000000001754818B
void __cdecl GadgetCruciblePlay::fillPlayerInfo(
        GadgetCruciblePlay *const this,
        Player *player,
        proto::GadgetPlayUidInfo *uid_info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  std::map<unsigned int,unsigned int>::key_type __x; // [rsp+24h] [rbp-7Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-78h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 iter:1068";
  *(_QWORD *)(v3 + 16) = GadgetCruciblePlay::fillPlayerInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  GadgetPlayBase::fillPlayerInfo(this, player, uid_info);
  proto::GadgetPlayUidInfo::set_score(uid_info, 0);
  __x = Player::getUid(player);
  *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 32) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->uid_watcher_value_map_,
                                                                  &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->uid_watcher_value_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 32),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GadgetPlayUidInfo::set_score(uid_info, v6->second);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1076: range 000000001754818C-0000000017548A39
void __cdecl GadgetCruciblePlay::onPlayerJoin(GadgetCruciblePlay *const this, PlayerPtr *p_player_ptr, bool is_halfway)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rcx
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t PlayId; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  Player *v14; // rax
  uint32_t WatcherComp; // eax
  bool v16; // r14
  Player *v17; // rax
  PlayerWatcherComp *v18; // rax
  Player *v19; // rax
  PlayerWatcherComp *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  Player *v25; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  Player *v31; // r14
  std::string v32; // [rsp+0h] [rbp-140h]
  bool is_halfwaya; // [rsp+Ch] [rbp-134h]
  PlayerPtr *p_player_ptra; // [rsp+10h] [rbp-130h]
  GadgetCruciblePlay *thisa; // [rsp+18h] [rbp-128h]
  unsigned int val; // [rsp+24h] [rbp-11Ch] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  const std::vector<unsigned int> *watcher_id_vec; // [rsp+38h] [rbp-108h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-100h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<BaseWatcher> __a; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v43; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v44; // [rsp+70h] [rbp-D0h] BYREF
  char v45[176]; // [rsp+90h] [rbp-B0h] BYREF

  *(&v32._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v32._anon_0._M_allocated_capacity = (std::string::size_type)p_player_ptr;
  BYTE4(v32._M_string_length) = is_halfway;
  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 11 holder:1109 48 4 15 watcher_id:1091 64 16 16 mp_play_ptr:1082 96 16 12 log_ptr:1110";
  *(_QWORD *)(v3 + 16) = GadgetCruciblePlay::onPlayerJoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( std::operator==<Player>(0LL, p_player_ptr) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "onPlayerJoin",
      1079);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v44, (const char (*)[22])"player_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v44);
  }
  else
  {
    GadgetCruciblePlay::findMpPlayPtr((const GadgetCruciblePlay *const)(v3 + 64));
    if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "onPlayerJoin",
        1085);
      v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v44,
             (const char (*)[30])"findMpPlayPtr fails, gagdget:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v43);
      p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.mp_play_config_mgr;
      v8 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      PlayId = BaseMpPlay::getPlayId(v8);
      watcher_id_vec = MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(p_mp_play_config_mgr, PlayId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
      __for_range = watcher_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(watcher_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(watcher_id_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = *v10;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v43);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
        watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                               &v11->design_config.txt_config_mgr.watcher_config_mgr,
                               *(_DWORD *)(v3 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
        if ( watcher_config_ptr )
        {
          v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          WatcherComp = (unsigned int)Player::getWatcherComp(v14);
          PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&__a, WatcherComp);
          v16 = std::operator!=<BaseWatcher>(0LL, &__a);
          std::shared_ptr<BaseWatcher>::~shared_ptr(&__a);
          if ( v16 )
          {
            v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
            v18 = Player::getWatcherComp(v17);
            PlayerWatcherComp::delWatcher(v18, *(_DWORD *)(v3 + 48));
          }
          v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          v20 = Player::getWatcherComp(v19);
          PlayerWatcherComp::addWatcher(
            (PlayerWatcherComp *const)&v43,
            (const WatcherConfig *)v20,
            (uint32_t)watcher_config_ptr);
          std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v43);
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/gadget_play_comp.cpp",
            "onPlayerJoin",
            1105);
          v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                  &v44,
                  (const char (*)[13])"add_watcher:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v3 + 48));
          v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
          v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          val = Player::getUid(v24);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget_play_comp.cpp",
            "onPlayerJoin",
            1096);
          v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v44,
                  (const char (*)[30])"findWatcherConfig watcher_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      BasicComp = Player::getBasicComp(v25);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v44, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xB0Fu, v32);
      std::string::~string(&v44);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyMpPlayJoin>();
      v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->mp_play_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyMpPlayJoin::set_mp_play_id(v27, thisa->mp_play_id_);
      v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v29 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      BaseMpPlay::getTransactionNo[abi:cxx11]((std::string *)&v44, v29);
      proto_log::PlayerLogBodyMpPlayJoin::set_transaction_no(v28, (std::string *)&v44);
      std::string::~string(&v44);
      v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayJoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::PlayerLogBodyMpPlayJoin::set_is_halfway(v30, is_halfwaya);
      v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptra);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v43, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMpPlayJoin,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&__a,
        (const std::shared_ptr<proto_log::PlayerLogBodyMpPlayJoin> *)(v3 + 96));
      Player::printStatLog(v31, (MessagePtr *)&__a, &v43, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__a);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v43);
      std::shared_ptr<proto_log::PlayerLogBodyMpPlayJoin>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMpPlayJoin> *const)(v3 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    }
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v3 + 64));
  }
  if ( v45 == (char *)v3 )
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
};

// Line 1118: range 0000000017548A9C-000000001754941A
void __cdecl GadgetCruciblePlay::onPlayerExit(
        GadgetCruciblePlay *const this,
        PlayerPtr *player_ptr,
        const MpPlayBattleResult *result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rcx
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t PlayId; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Player *v12; // rax
  uint32_t WatcherComp; // eax
  bool v14; // r14
  Player *v15; // rax
  PlayerWatcherComp *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  Player *v21; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rcx
  Player *v29; // rax
  PlayerAvatarComp *AvatarComp; // r14
  Player *v31; // r14
  std::string v32; // [rsp+0h] [rbp-140h]
  const MpPlayBattleResult *resulta; // [rsp+8h] [rbp-138h]
  PlayerPtr *player_ptra; // [rsp+10h] [rbp-130h]
  GadgetCruciblePlay *thisa; // [rsp+18h] [rbp-128h]
  unsigned int val; // [rsp+24h] [rbp-11Ch] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  const std::vector<unsigned int> *watcher_id_vec; // [rsp+38h] [rbp-108h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-100h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v43; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v44; // [rsp+70h] [rbp-D0h] BYREF
  char v45[176]; // [rsp+90h] [rbp-B0h] BYREF

  *(&v32._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v32._anon_0._M_allocated_capacity = (std::string::size_type)player_ptr;
  v32._M_string_length = (std::string::size_type)result;
  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 11 holder:1148 48 4 15 watcher_id:1133 64 16 16 mp_play_ptr:1124 96 16 12 log_ptr:1149";
  *(_QWORD *)(v3 + 16) = GadgetCruciblePlay::onPlayerExit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( std::operator==<Player>(0LL, player_ptr) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_play_comp.cpp",
      "onPlayerExit",
      1121);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v44, (const char (*)[22])"player_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v44);
  }
  else
  {
    GadgetCruciblePlay::findMpPlayPtr((const GadgetCruciblePlay *const)(v3 + 64));
    if ( std::operator==<BaseMpPlay>(0LL, (const std::shared_ptr<BaseMpPlay> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_play_comp.cpp",
        "onPlayerExit",
        1127);
      v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v44,
             (const char (*)[30])"findMpPlayPtr fails, gagdget:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v43);
      p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.mp_play_config_mgr;
      v8 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      PlayId = BaseMpPlay::getPlayId(v8);
      watcher_id_vec = MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(p_mp_play_config_mgr, PlayId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
      __for_range = watcher_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(watcher_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(watcher_id_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = *v10;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v43);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
        watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                               &v11->design_config.txt_config_mgr.watcher_config_mgr,
                               *(_DWORD *)(v3 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
        if ( watcher_config_ptr )
        {
          v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
          WatcherComp = (unsigned int)Player::getWatcherComp(v12);
          PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v43, WatcherComp);
          v14 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v43);
          std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v43);
          if ( v14 )
          {
            v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
            v16 = Player::getWatcherComp(v15);
            PlayerWatcherComp::delWatcher(v16, *(_DWORD *)(v3 + 48));
          }
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/gadget_play_comp.cpp",
            "onPlayerExit",
            1144);
          v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                  &v44,
                  (const char (*)[13])"del_watcher:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 48));
          v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
          v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
          val = Player::getUid(v20);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
      BasicComp = Player::getBasicComp(v21);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v44, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xB10u, v32);
      std::string::~string(&v44);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyMpPlayBattleStop>();
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->mp_play_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyMpPlayBattleStop::set_mp_play_id(v23, thisa->mp_play_id_);
      v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v25 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      BaseMpPlay::getTransactionNo[abi:cxx11]((std::string *)&v44, v25);
      proto_log::PlayerLogBodyMpPlayBattleStop::set_transaction_no(v24, (std::string *)&v44);
      std::string::~string(&v44);
      v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)resulta >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)resulta >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyMpPlayBattleStop::set_cost_time(v26, resulta->cost_time);
      v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&resulta->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)resulta + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&resulta->score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyMpPlayBattleStop::set_team_score(v27, resulta->score);
      v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&resulta->is_win >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&resulta->is_win >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyMpPlayBattleStop::set_is_win(v28, resulta->is_win != 0);
      v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptra);
      AvatarComp = Player::getAvatarComp(v29);
      std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop>::shared_ptr(
        (std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop> *const)&v43,
        (const std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop> *)(v3 + 96));
      std::function<ForeachPolicy ()(Avatar &)>::function<GadgetCruciblePlay::onPlayerExit(std::shared_ptr<Player> &,MpPlayBattleResult const&)::{lambda(Avatar &)#1},void,void>(
        (std::function<ForeachPolicy(Avatar&)> *const)&v44,
        (GadgetCruciblePlay::onPlayerExit::<lambda(Avatar&)> *)&v43);
      PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v44);
      std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v44);
      GadgetCruciblePlay::onPlayerExit(std::shared_ptr<Player> &,MpPlayBattleResult const&)::{lambda(Avatar &)#1}::~Avatar((GadgetCruciblePlay::onPlayerExit::<lambda(Avatar&)> *const)&v43);
      v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptra);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v43, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop> *)(v3 + 96));
      Player::printStatLog(v31, &p_body_ptr, &v43, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v43);
      std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop> *const)(v3 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    }
    std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v3 + 64));
  }
  if ( v45 == (char *)v3 )
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
};

// Line 1155: range 0000000017548A3A-0000000017548A7E
ForeachPolicy __cdecl GadgetCruciblePlay::onPlayerExit(std::shared_ptr<Player> &,MpPlayBattleResult const&)::{lambda(Avatar &)#1}::operator()(
        const GadgetCruciblePlay::onPlayerExit::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  uint32_t AvatarId; // eax

  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::PlayerLogBodyMpPlayBattleStop::add_avatar_id_list(v2, AvatarId);
  return 0;
};

// Line 1155: range 0000000017602A42-0000000017602A67
void __cdecl GadgetCruciblePlay::onPlayerExit(std::shared_ptr<Player> &,MpPlayBattleResult const&)::{lambda(Avatar &)#1}::Avatar(
        GadgetCruciblePlay::onPlayerExit::<lambda(Avatar&)> *const this,
        GadgetCruciblePlay::onPlayerExit::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 1155: range 0000000017602B32-0000000017602B57
void __cdecl GadgetCruciblePlay::onPlayerExit(std::shared_ptr<Player> &,MpPlayBattleResult const&)::{lambda(Avatar &)#1}::Avatar(
        GadgetCruciblePlay::onPlayerExit::<lambda(Avatar&)> *const this,
        const GadgetCruciblePlay::onPlayerExit::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 1155: range 0000000017548A80-0000000017548A9A
void __cdecl GadgetCruciblePlay::onPlayerExit(std::shared_ptr<Player> &,MpPlayBattleResult const&)::{lambda(Avatar &)#1}::~Avatar(
        GadgetCruciblePlay::onPlayerExit::<lambda(Avatar&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleStop>::~shared_ptr(&this->__log_ptr);
};
