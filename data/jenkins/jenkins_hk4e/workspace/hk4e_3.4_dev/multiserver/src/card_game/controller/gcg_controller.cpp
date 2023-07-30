// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/controller/gcg_controller.cpp

// Line 21: range 000000000DEE1442-000000000DEE16B4
std::shared_ptr<GCGControllerBase> *__fastcall GCGControllerFactory::createController(
        std::shared_ptr<GCGControllerBase> *game_mode,
        proto::GCGControllerValue *controller_id,
        int is_ai,
        char a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::shared_ptr<GCGAIController> __r; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 16 controller_id:20";
  *(_QWORD *)(v4 + 16) = GCGControllerFactory::createController;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = is_ai;
  if ( a4 )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/controller/gcg_controller.cpp",
      "createController",
      24);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v13,
           (const char (*)[35])"createController ai controller_id:");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v7,
      (const proto::GCGControllerValue *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    common::tools::perf::make_shared<GCGAIController,GCGGameMode &,proto::GCGControllerValue &>(
      (GCGGameMode *)&__r,
      controller_id,
      (GCGGameMode *)(v4 + 32),
      controller_id);
    std::shared_ptr<GCGControllerBase>::shared_ptr<GCGAIController,void>(game_mode, &__r);
    std::shared_ptr<GCGAIController>::~shared_ptr(&__r);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/controller/gcg_controller.cpp",
      "createController",
      29);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v13,
           (const char (*)[39])"createController normal controller_id:");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v8,
      (const proto::GCGControllerValue *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    common::tools::perf::make_shared<GCGPlayerController,GCGGameMode &,proto::GCGControllerValue &>(
      (GCGGameMode *)&__r,
      controller_id,
      (GCGGameMode *)(v4 + 32),
      controller_id);
    std::shared_ptr<GCGControllerBase>::shared_ptr<GCGPlayerController,void>(
      game_mode,
      (std::shared_ptr<GCGPlayerController> *)&__r);
    std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)&__r);
  }
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return game_mode;
};

// Line 35: range 000000000DEE16B6-000000000DEE1739
void __cdecl GCGControllerBase::toClient(const GCGControllerBase *const this, proto::GCGDuel *proto)
{
  GCGControllerValue ControllerId; // edx
  proto::ProfilePicture *v3; // rax
  const GCGControllerShowData *show_data; // [rsp+10h] [rbp-10h]
  proto::GCGControllerShowInfo *proto_show_info; // [rsp+18h] [rbp-8h]

  show_data = GCGControllerBase::getShowData(this);
  proto_show_info = proto::GCGDuel::add_show_info_list(proto);
  ControllerId = GCGControllerBase::getControllerId(this);
  proto::GCGControllerShowInfo::set_controller_id(proto_show_info, ControllerId);
  proto::GCGControllerShowInfo::set_nick_name(proto_show_info, &show_data->nick_name);
  v3 = proto::GCGControllerShowInfo::mutable_profile_picture(proto_show_info);
  proto::ProfilePicture::CopyFrom(v3, &show_data->profile_picture);
};

// Line 44: range 000000000DEE173A-000000000DEE176B
int32_t __cdecl GCGControllerBase::init(GCGControllerBase *const this, const GCGControllerParam *param)
{
  GCGControllerShowData::operator=(&this->show_data_, &param->show_data);
  return 0;
};

// Line 50: range 000000000DEE176C-000000000DEE1C4D
void __cdecl GCGControllerBase::setReady(GCGControllerBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rdx
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  GCGPhaseBase *v9; // r14
  GCGControllerValue ControllerId; // eax
  GCGControllerValue v11; // r14d
  std::__shared_ptr_access<GCGOperationStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  GCGGameMode *game_mode; // r14
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 16 cur_phase_ptr:51 64 16 16 operation_ptr:67";
  *(_QWORD *)(v1 + 16) = GCGControllerBase::setReady;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 32));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_controller.cpp",
      "setReady",
      54);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v16,
      (const char (*)[27])"cur_phase_ptr is nullptr. ");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    v4 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4);
    v5 = (unsigned __int64)(v4->_vptr_GCGPhaseBase + 3);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4->_vptr_GCGPhaseBase + 3);
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v5)(v4) == 1 )
    {
      v9 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      ControllerId = GCGControllerBase::getControllerId(this);
      if ( !GCGPhaseBase::isAllowController(v9, ControllerId) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/controller/gcg_controller.cpp",
          "setReady",
          64);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v16,
          (const char (*)[22])"controller not allow.");
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
      else
      {
        common::tools::perf::make_shared<GCGOperationStart>();
        v11 = GCGControllerBase::getControllerId(this);
        v12 = std::__shared_ptr_access<GCGOperationStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v12->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::__shared_ptr_access<GCGOperationStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v12->controller_id);
        }
        v12->controller_id = v11;
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        game_mode = this->game_mode_;
        std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationStart,void>(
          &p_operation_ptr,
          (const std::shared_ptr<GCGOperationStart> *)(v1 + 64));
        GCGGameMode::process(game_mode, &p_operation_ptr);
        std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
        std::shared_ptr<GCGOperationStart>::~shared_ptr((std::shared_ptr<GCGOperationStart> *const)(v1 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/controller/gcg_controller.cpp",
        "setReady",
        59);
      v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v16, (const char (*)[33])off_1BB5D3E0);
      v7 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7);
      v8 = (unsigned __int64)(v7->_vptr_GCGPhaseBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7->_vptr_GCGPhaseBase + 3);
      val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v8)(v7);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 32));
  if ( v17 == (char *)v1 )
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

// Line 73: range 000000000DEE1C4E-000000000DEE2341
void __cdecl GCGControllerBase::doDefaultOp(GCGControllerBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  GCGPhaseBase *v5; // r14
  GCGControllerValue ControllerId; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rdx
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  GCGControllerValue v19; // r14d
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  unsigned __int64 v26; // rdx
  GCGGameMode *game_mode; // r14
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<GCGOperationBase> p_operation_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 phase_ptr:74 64 16 16 operation_ptr:85";
  *(_QWORD *)(v1 + 16) = GCGControllerBase::doDefaultOp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 32));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/controller/gcg_controller.cpp",
      "doDefaultOp",
      77);
    v4 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v30,
           (const char (*)[64])"do default operation fail. phase_ptr is nullptr controller_id_:");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v4,
      &this->controller_id_);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v5 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    ControllerId = GCGControllerBase::getControllerId(this);
    if ( !GCGPhaseBase::isAllowController(v5, ControllerId) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/controller/gcg_controller.cpp",
        "doDefaultOp",
        82);
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v30,
             (const char (*)[53])"do default operation fail. not allow controller_id_:");
      v8 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
             v7,
             &this->controller_id_);
      v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" phase:");
      v10 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      v11 = (unsigned __int64)(v10->_vptr_GCGPhaseBase + 3);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10->_vptr_GCGPhaseBase + 3);
      val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11)(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      v12 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v12);
      v13 = (unsigned __int64)(v12->_vptr_GCGPhaseBase + 4);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v12->_vptr_GCGPhaseBase + 4);
      (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v13)(
        v1 + 64,
        v12);
      if ( std::operator==<GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v1 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/controller/gcg_controller.cpp",
          "doDefaultOp",
          88);
        v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v30,
                (const char (*)[42])"defaultOperation is nullptr. phase type: ");
        v15 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15);
        v16 = (unsigned __int64)(v15->_vptr_GCGPhaseBase + 3);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15->_vptr_GCGPhaseBase + 3);
        val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v16)(v15);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v17,
                (const char (*)[17])" controller_id_:");
        common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
          v18,
          &this->controller_id_);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      else
      {
        v19 = GCGControllerBase::getControllerId(this);
        v20 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v20->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v20->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v20 = (std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v20->controller_id);
        }
        v20->controller_id = v19;
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/controller/gcg_controller.cpp",
          "doDefaultOp",
          92);
        v21 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v30,
                (const char (*)[36])"do default operation controller_id:");
        v22 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v23 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v21,
                &v22->controller_id);
        v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])" phase_type:");
        v25 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v25);
        v26 = (unsigned __int64)(v25->_vptr_GCGPhaseBase + 3);
        if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v25->_vptr_GCGPhaseBase + 3);
        val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v26)(v25);
        common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)&val);
        common::milog::MiLogStream::~MiLogStream(&v30);
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        game_mode = this->game_mode_;
        std::shared_ptr<GCGOperationBase>::shared_ptr(
          &p_operation_ptr,
          (const std::shared_ptr<GCGOperationBase> *)(v1 + 64));
        GCGGameMode::process(game_mode, &p_operation_ptr);
        std::shared_ptr<GCGOperationBase>::~shared_ptr(&p_operation_ptr);
      }
      std::shared_ptr<GCGOperationBase>::~shared_ptr((std::shared_ptr<GCGOperationBase> *const)(v1 + 64));
    }
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 32));
  if ( v31 == (char *)v1 )
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

// Line 98: range 000000000DEE2342-000000000DEE23A8
void __cdecl GCGControllerBase::settleGame(GCGControllerBase *const this)
{
  void (__fastcall **v1)(GCGControllerBase *const); // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (void (__fastcall **)(GCGControllerBase *const))(this->_vptr_GCGControllerBase + 4);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_GCGControllerBase + 4);
  (*v1)(this);
};
