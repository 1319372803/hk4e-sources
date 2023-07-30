// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_transfer_awaiter.cpp

// Line 23: range 0000000015CF6C10-0000000015CF6E7F
void __cdecl SceneTransferAwaiter::start(SceneTransferAwaiter *const this)
{
  SceneUnixTimer *p_timeout; // rdi
  void (__fastcall **vptr_SceneTransferAwaiter)(SceneTransferAwaiter *const); // rax
  SceneTransferAwaiter::start::<lambda(uint64_t)> v4; // [rsp+10h] [rbp-50h] BYREF
  SceneTransferAwaiter::start::<lambda(uint64_t)> v5; // [rsp+30h] [rbp-30h] BYREF

  if ( SceneTransferAwaiter::isActive(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::enable_shared_from_this<Scene>::weak_from_this((std::enable_shared_from_this<Scene> *const)&v5);
    std::enable_shared_from_this<SceneTransferAwaiter>::weak_from_this((std::enable_shared_from_this<SceneTransferAwaiter> *const)&v5.__this_wtr);
    std::enable_shared_from_this<Scene>::shared_from_this((std::enable_shared_from_this<Scene> *const)&v4);
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene>,SceneTransferAwaiter::start(void)::{lambda(unsigned long)#1}>(
      (std::shared_ptr<Scene> *)&v4.__this_wtr,
      &v4,
      (std::shared_ptr<Scene> *)&v5,
      &v4);
    std::shared_ptr<SceneUnixTimer>::operator=(&this->timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v4.__this_wtr);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v4.__this_wtr);
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&v4);
    SceneTransferAwaiter::start(void)::{lambda(unsigned long)#1}::~start(&v5);
    if ( std::operator==<SceneUnixTimer>(&this->timer_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v5,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "start",
        45);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        (common::milog::MiLogStream *const)&v5,
        (const char (*)[24])"create timer ptr failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v5);
    }
    else
    {
      p_timeout = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_timeout = (SceneUnixTimer *)&this->timeout_;
        __asan_report_load4();
      }
      SceneUnixTimer::startS(p_timeout, this->timeout_, 0, "./src/scene/scene_transfer_awaiter.cpp", "start", 48);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      vptr_SceneTransferAwaiter = (void (__fastcall **)(SceneTransferAwaiter *const))this->_vptr_SceneTransferAwaiter;
      if ( *(_BYTE *)(((unsigned __int64)this->_vptr_SceneTransferAwaiter >> 3) + 0x7FFF8000) )
        vptr_SceneTransferAwaiter = (void (__fastcall **)(SceneTransferAwaiter *const))__asan_report_load8();
      (*vptr_SceneTransferAwaiter)(this);
    }
  }
};

// Line 26: range 0000000015CF6976-0000000015CF6BE2
void __cdecl SceneTransferAwaiter::start(void)::{lambda(unsigned long)#1}::operator()(
        const SceneTransferAwaiter::start::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // r14
  SceneTransferAwaiter *v6; // rdx
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 this_ptr:35";
  *(_QWORD *)(v2 + 16) = SceneTransferAwaiter::start(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v2 + 32));
  v5 = std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v7,
      (const char (*)[51])"[TRANSFER_AWAITER] scene_ptr is null after timeout");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    std::weak_ptr<SceneTransferAwaiter>::lock((const std::weak_ptr<SceneTransferAwaiter> *const)(v2 + 32));
    if ( std::operator==<SceneTransferAwaiter>((const std::shared_ptr<SceneTransferAwaiter> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "operator()",
        38);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        &v7,
        (const char (*)[50])"[TRANSFER_AWAITER] this_ptr is null after timeout");
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
    else
    {
      v6 = std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      SceneTransferAwaiter::timeout(v6, now_ms);
    }
    std::shared_ptr<SceneTransferAwaiter>::~shared_ptr((std::shared_ptr<SceneTransferAwaiter> *const)(v2 + 32));
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 26: range 0000000015D25B0A-0000000015D25B4A
void __cdecl SceneTransferAwaiter::start(void)::{lambda(unsigned long)#1}::start(
        SceneTransferAwaiter::start::<lambda(uint64_t)> *const this,
        SceneTransferAwaiter::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Scene>::weak_ptr(&this->__scene_wtr, &a2->__scene_wtr);
  std::weak_ptr<SceneTransferAwaiter>::weak_ptr(&this->__this_wtr, &a2->__this_wtr);
};

// Line 26: range 0000000015D2732A-0000000015D2736A
void __cdecl SceneTransferAwaiter::start(void)::{lambda(unsigned long)#1}::start(
        SceneTransferAwaiter::start::<lambda(uint64_t)> *const this,
        const SceneTransferAwaiter::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Scene>::weak_ptr(&this->__scene_wtr, &a2->__scene_wtr);
  std::weak_ptr<SceneTransferAwaiter>::weak_ptr(&this->__this_wtr, &a2->__this_wtr);
};

// Line 26: range 0000000015CF6BE4-0000000015CF6C0E
void __cdecl SceneTransferAwaiter::start(void)::{lambda(unsigned long)#1}::~start(
        SceneTransferAwaiter::start::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<SceneTransferAwaiter>::~weak_ptr(&this->__this_wtr);
  std::weak_ptr<Scene>::~weak_ptr(&this->__scene_wtr);
};

// Line 53: range 0000000015CF6E80-0000000015CF6F90
void __cdecl SceneTransferAwaiter::reset(SceneTransferAwaiter *const this)
{
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  unsigned __int64 v2; // rax

  if ( std::operator!=<SceneUnixTimer>(&this->timer_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    common::tools::MiTimer::cancel(v1);
    std::__shared_ptr<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2>::reset(&this->timer_ptr_);
  }
  std::set<unsigned int>::clear(&this->player_uid_set_);
  std::set<unsigned int>::clear(&this->arrived_uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timeout_, 0LL, (_BYTE)this - 80);
  }
  this->timeout_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_SceneTransferAwaiter + 1);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(SceneTransferAwaiter *const))v2)(this);
};

// Line 68: range 0000000015CF6F92-0000000015CF6FCB
void __cdecl SceneTransferAwaiter::checkAllPlayerArrived(SceneTransferAwaiter *const this)
{
  if ( std::operator==<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
         &this->arrived_uid_set_,
         &this->player_uid_set_) )
  {
    SceneTransferAwaiter::allPlayerArrived(this);
  }
};

// Line 76: range 0000000015CF6FCC-0000000015CF727C
void __cdecl SceneTransferAwaiter::playerPostEnterScene(SceneTransferAwaiter *const this, Player *player)
{
  uint32_t Uid; // edx
  common::milog::MiLogStream *v3; // rbx
  unsigned __int64 v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  Uid = Player::getUid(player);
  if ( SceneTransferAwaiter::isPlayerEnterTimeout(this, Uid) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "playerPostEnterScene",
      79);
    v3 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v9,
           (const char (*)[46])"[TRANSFER_AWAITER] timeout player enter, uid:");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = (unsigned __int64)(this->_vptr_SceneTransferAwaiter + 5);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    (*(void (__fastcall **)(SceneTransferAwaiter *const, Player *))v4)(this, player);
    val = Player::getUid(player);
    std::set<unsigned int>::erase(&this->timeout_uid_set_, &val);
  }
  else if ( SceneTransferAwaiter::isActive(this) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "playerPostEnterScene",
      85);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v9,
           (const char (*)[48])"[TRANSFER_AWAITER] player PostEnterScene, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    val = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->player_uid_set_, &val) )
    {
      val = Player::getUid(player);
      std::set<unsigned int>::emplace<unsigned int>(&this->arrived_uid_set_, &val, v6);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = (unsigned __int64)(this->_vptr_SceneTransferAwaiter + 4);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      (*(void (__fastcall **)(SceneTransferAwaiter *const, Player *))v7)(this, player);
      SceneTransferAwaiter::checkAllPlayerArrived(this);
    }
  }
};

// Line 97: range 0000000015CF727E-0000000015CF744D
void __cdecl SceneTransferAwaiter::playerLeaveScene(SceneTransferAwaiter *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( SceneTransferAwaiter::isActive(this) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "playerLeaveScene",
      102);
    v2 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v6,
           (const char (*)[44])"[TRANSFER_AWAITER] player LeaveScene, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = (unsigned __int64)(this->_vptr_SceneTransferAwaiter + 6);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    (*(void (__fastcall **)(SceneTransferAwaiter *const, Player *))v3)(this, player);
    val = Player::getUid(player);
    std::set<unsigned int>::erase(&this->player_uid_set_, &val);
    val = Player::getUid(player);
    std::set<unsigned int>::erase(&this->arrived_uid_set_, &val);
    if ( std::set<unsigned int>::empty(&this->player_uid_set_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v4 = (unsigned __int64)(this->_vptr_SceneTransferAwaiter + 7);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8();
      (*(void (__fastcall **)(SceneTransferAwaiter *const))v4)(this);
    }
  }
};

// Line 113: range 0000000015CF744E-0000000015CF7561
void __cdecl SceneTransferAwaiter::timeout(SceneTransferAwaiter *const this, uint64_t now_ms)
{
  std::set<unsigned int>::iterator v2; // rax
  std::insert_iterator<std::set<unsigned int> > v3; // rax
  std::set<unsigned int> *container; // r12
  const std::_Rb_tree_node_base *M_node; // r13
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v6; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v7; // r14
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v8; // rbx
  std::set<unsigned int>::iterator v9; // rax
  std::insert_iterator<std::set<unsigned int> > v10; // r8
  unsigned __int64 v11; // rax

  v2._M_node = std::set<unsigned int>::begin(&this->timeout_uid_set_)._M_node;
  v3 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(&this->timeout_uid_set_, v2);
  container = v3.container;
  M_node = v3.iter._M_node;
  v6 = std::set<unsigned int>::end(&this->arrived_uid_set_)._M_node;
  v7 = std::set<unsigned int>::begin(&this->arrived_uid_set_)._M_node;
  v8 = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
  v9._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
  v10.container = container;
  v10.iter._M_node = M_node;
  std::set_difference<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<unsigned int>>>(
    v9,
    (std::_Rb_tree_const_iterator<unsigned int>)v8,
    (std::_Rb_tree_const_iterator<unsigned int>)v7,
    (std::_Rb_tree_const_iterator<unsigned int>)v6,
    v10);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v11 = (unsigned __int64)(this->_vptr_SceneTransferAwaiter + 3);
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8();
  (*(void (__fastcall **)(SceneTransferAwaiter *const, uint64_t))v11)(this, now_ms);
};

// Line 120: range 0000000015CF7562-0000000015CF7958
void __cdecl GallerySceneTransferAwaiter::onStart(GallerySceneTransferAwaiter *const this)
{
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v4; // rdx
  common::milog::MiLogStream *v5; // rax
  __int64 Now; // rsi
  uint32_t v7; // ecx
  char v8; // dl
  bool v9; // dl
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  _BOOL4 revise_level; // [rsp+14h] [rbp-4Ch]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.gallery_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, this->gallery_id_);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( gallery_config_ptr )
  {
    if ( *(char *)(((unsigned __int64)&gallery_config_ptr->is_disable_group_default_revise_level >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&gallery_config_ptr->is_disable_group_default_revise_level);
    revise_level = !gallery_config_ptr->is_disable_group_default_revise_level;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(this->scene_);
    if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8();
    v4 = *(_QWORD *)BlockGroupComp + 96LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::vector<unsigned int> *, _BOOL4, _QWORD))v4)(
           BlockGroupComp,
           &gallery_config_ptr->transfer_pre_register_group_id_list,
           revise_level,
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "onStart",
        130);
      v5 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
             &v16,
             (const char (*)[70])"[TRANSFER_AWAITER] register groups before transfer failed, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int>(v5, &gallery_config_ptr->transfer_pre_register_group_id_list);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      Now = (unsigned int)common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v7 = Now + this->timeout_;
      v8 = *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000);
      LOBYTE(Now) = v8 != 0;
      v9 = v8 != 0 && (char)((((_BYTE)this - 52) & 7) + 3) >= v8;
      if ( v9 )
        __asan_report_store4(&this->prepare_end_time_, Now, v9);
      this->prepare_end_time_ = v7;
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "onStart",
        134);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v16,
              (const char (*)[41])"[TRANSFER_AWAITER] pre register groups: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int>(
              v10,
              &gallery_config_ptr->transfer_pre_register_group_id_list);
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v11,
              (const char (*)[21])", prepare_end_time: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->prepare_end_time_);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "onStart",
      124);
    v2 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v16,
           (const char (*)[39])"gallery config not found, gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
};

// Line 138: range 0000000015CF795A-0000000015CF79B9
void __cdecl GallerySceneTransferAwaiter::onTimeout(GallerySceneTransferAwaiter *const this, uint64_t now_ms)
{
  GallerySceneTransferAwaiter::notifyAllArrivedPlayerCountdownEnd(this);
  if ( std::set<unsigned int>::size(&this->arrived_uid_set_) <= 1 )
    GallerySceneTransferAwaiter::galleryStartFailed(this);
  else
    GallerySceneTransferAwaiter::initAndStartGallery(this);
  SceneTransferAwaiter::reset(this);
};

// Line 154: range 0000000015CF79BA-0000000015CF79C4
void __cdecl GallerySceneTransferAwaiter::onAllPlayerArrived(GallerySceneTransferAwaiter *const this)
{
  ;
};

// Line 159: range 0000000015CF79C6-0000000015CF7C30
void __cdecl GallerySceneTransferAwaiter::onPlayerArrived(GallerySceneTransferAwaiter *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  proto::GalleryStartSource v6; // eax
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 10 notify:161";
  *(_QWORD *)(v2 + 16) = GallerySceneTransferAwaiter::onPlayerArrived;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::GalleryWillStartCountdownNotify::GalleryWillStartCountdownNotify((proto::GalleryWillStartCountdownNotify *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GalleryWillStartCountdownNotify::set_end_time(
    (proto::GalleryWillStartCountdownNotify *const)(v2 + 48),
    this->prepare_end_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GalleryWillStartCountdownNotify::set_gallery_id(
    (proto::GalleryWillStartCountdownNotify *const)(v2 + 48),
    this->gallery_id_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_SceneTransferAwaiter + 16);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = (*(unsigned int (__fastcall **)(GallerySceneTransferAwaiter *const))v5)(this);
  proto::GalleryWillStartCountdownNotify::set_start_source((proto::GalleryWillStartCountdownNotify *const)(v2 + 48), v6);
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 48));
  proto::GalleryWillStartCountdownNotify::~GalleryWillStartCountdownNotify((proto::GalleryWillStartCountdownNotify *const)(v2 + 48));
  if ( v7 == (char *)v2 )
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

// Line 169: range 0000000015CF7C32-0000000015CF7C58
void __cdecl GallerySceneTransferAwaiter::onAllPlayerLeave(GallerySceneTransferAwaiter *const this)
{
  GallerySceneTransferAwaiter::galleryStartFailed(this);
  SceneTransferAwaiter::reset(this);
};

// Line 176: range 0000000015CF7C5A-0000000015CF7F25
void __cdecl GallerySceneTransferAwaiter::initAndStartGallery(GallerySceneTransferAwaiter *const this)
{
  common::milog::MiLogStream *v1; // rax
  unsigned __int64 v2; // rax
  SceneGalleryComp *scene_gallery_comp; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_transfer_awaiter.cpp",
    "initAndStartGallery",
    177);
  v1 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         &v4,
         (const char (*)[35])"[TRANSFER_AWAITER] start gallery: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->gallery_id_);
  common::milog::MiLogStream::~MiLogStream(&v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_gallery_comp = Scene::getGalleryComp(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( (unsigned int)SceneGalleryComp::initGallery(scene_gallery_comp, this->gallery_id_, &this->arrived_uid_set_) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "initAndStartGallery",
      182);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v4, (const char (*)[20])"init gallery failed");
    common::milog::MiLogStream::~MiLogStream(&v4);
    GallerySceneTransferAwaiter::galleryStartFailed(this);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = (unsigned __int64)(this->_vptr_SceneTransferAwaiter + 14);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    (*(void (__fastcall **)(GallerySceneTransferAwaiter *const))v2)(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( (unsigned int)SceneGalleryComp::startGallery(scene_gallery_comp, this->gallery_id_) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "initAndStartGallery",
        189);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v4, (const char (*)[21])"start gallery failed");
      common::milog::MiLogStream::~MiLogStream(&v4);
      GallerySceneTransferAwaiter::galleryStartFailed(this);
    }
  }
};

// Line 196: range 0000000015CF7F26-0000000015CF864A
void __cdecl GallerySceneTransferAwaiter::galleryStartFailed(GallerySceneTransferAwaiter *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  SceneBlockGroupComp *BlockGroupComp; // rcx
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  uint32_t gallery_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  char v12; // cl
  Group *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+20h] [rbp-D0h]
  const std::vector<unsigned int> *group_id_vec; // [rsp+28h] [rbp-C8h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-C0h]
  const unsigned int *group_id; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 group_ptr:211 64 16 13 event_ptr:217";
  *(_QWORD *)(v2 + 16) = GallerySceneTransferAwaiter::galleryStartFailed;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_start_failed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_start_failed_, v1, &this->is_start_failed_);
  this->is_start_failed_ = 1;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.gallery_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, this->gallery_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( gallery_config_ptr )
  {
    group_id_vec = &gallery_config_ptr->transfer_pre_register_group_id_list;
    if ( std::vector<unsigned int>::empty(&gallery_config_ptr->transfer_pre_register_group_id_list) )
      goto LABEL_45;
    __for_range = group_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(group_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(group_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      group_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BlockGroupComp = Scene::getBlockGroupComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      SceneBlockGroupComp::getActiveGroup((SceneBlockGroupComp *const)(v2 + 32), (__int64)BlockGroupComp, *group_id);
      if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_transfer_awaiter.cpp",
          "galleryStartFailed",
          214);
        v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v24,
               (const char (*)[32])"group is not active, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, group_id);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        EventUtil::createEvent((data::EventType)(v2 + 64));
        v9 = 0LL;
        if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 64), 0LL) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          gallery_id = this->gallery_id_;
          v11 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v12 = *(_BYTE *)(((unsigned __int64)&v11->param1 >> 3) + 0x7FFF8000);
          if ( v12 != 0 && (char)((((_BYTE)v11 + 44) & 7) + 3) >= v12 )
          {
            LOBYTE(v9) = v12 != 0;
            __asan_report_store4(&v11->param1, v9, (_BYTE)v11);
          }
          v11->param1 = gallery_id;
          v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          Group::handleEvent(v13, (EventPtr *)(v2 + 64));
        }
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)Scene::getBlockGroupComp(this->scene_);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8();
    v15 = *(_QWORD *)v14 + 104LL;
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, const std::vector<unsigned int> *, __int64))v15)(
           v14,
           group_id_vec,
           1LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "galleryStartFailed",
        227);
      v16 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
              &v24,
              (const char (*)[78])"[TRANSFER_AWAITER] unregister transfer pre register groups failed, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int>(v16, group_id_vec);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
LABEL_45:
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = (unsigned __int64)(this->_vptr_SceneTransferAwaiter + 15);
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_load8();
      (*(void (__fastcall **)(GallerySceneTransferAwaiter *const))v17)(this);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "galleryStartFailed",
      202);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v24,
           (const char (*)[39])"gallery config not found, gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  if ( v25 == (char *)v2 )
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

// Line 235: range 0000000015CF864C-0000000015CF8A77
void __cdecl GallerySceneTransferAwaiter::notifyAllArrivedPlayerCountdownEnd(GallerySceneTransferAwaiter *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  proto::GalleryStartSource v5; // eax
  Scene *scene; // rcx
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+20h] [rbp-100h]
  const unsigned int *uid; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 14 player_ptr:242 80 40 10 notify:236";
  *(_QWORD *)(v1 + 16) = GallerySceneTransferAwaiter::notifyAllArrivedPlayerCountdownEnd;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  proto::GalleryWillStartCountdownNotify::GalleryWillStartCountdownNotify((proto::GalleryWillStartCountdownNotify *const)(v1 + 80));
  proto::GalleryWillStartCountdownNotify::set_is_end((proto::GalleryWillStartCountdownNotify *const)(v1 + 80), 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GalleryWillStartCountdownNotify::set_gallery_id(
    (proto::GalleryWillStartCountdownNotify *const)(v1 + 80),
    this->gallery_id_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_SceneTransferAwaiter + 16);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  v5 = (*(unsigned int (__fastcall **)(GallerySceneTransferAwaiter *const))v4)(this);
  proto::GalleryWillStartCountdownNotify::set_start_source((proto::GalleryWillStartCountdownNotify *const)(v1 + 80), v5);
  __for_range = &this->arrived_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->arrived_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->arrived_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    uid = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v1 + 48), (__int64)scene, *uid);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "notifyAllArrivedPlayerCountdownEnd",
        245);
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v13,
             (const char (*)[24])"player not found, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, uid);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      Player::sendProto(v8, (const google::protobuf::Message *)(v1 + 80));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 48));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  proto::GalleryWillStartCountdownNotify::~GalleryWillStartCountdownNotify((proto::GalleryWillStartCountdownNotify *const)(v1 + 80));
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 253: range 0000000015CF8A78-0000000015CF8C24
__int64 __fastcall GallerySceneTransferAwaiter::checkJumpToSceneValid(
        const GallerySceneTransferAwaiter *const this,
        uint32_t uid,
        unsigned __int64 reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:252";
  *(_QWORD *)(v3 + 16) = GallerySceneTransferAwaiter::checkJumpToSceneValid;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
          &this->arrived_uid_set_,
          (const unsigned int *)(v3 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_start_failed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_start_failed_);
    if ( this->is_start_failed_ )
    {
      result = 0LL;
    }
    else
    {
      if ( *(_BYTE *)((reason >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((reason >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4();
      if ( *(_DWORD *)reason == 32
        || *(_DWORD *)reason == 53
        || *(_DWORD *)reason == 51
        || *(_DWORD *)reason == 21
        || *(_DWORD *)reason == 83
        || *(_DWORD *)reason == 58 )
      {
        result = 0LL;
      }
      else
      {
        result = 529LL;
      }
    }
  }
  if ( v8 == (char *)v3 )
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

// Line 279: range 0000000015CF8C26-0000000015CF8C34
uint32_t __cdecl GallerySceneTransferAwaiter::getGalleryStartSource(const GallerySceneTransferAwaiter *const this)
{
  return 0;
};

// Line 284: range 0000000015CF8C36-0000000015CF93AF
int32_t __cdecl GallerySceneTransferAwaiter::findRebornPosAndRot(
        const GallerySceneTransferAwaiter *const this,
        Vector3 *pos,
        Vector3 *rot)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<unsigned int>::const_reference v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-A8h]
  const GroupScriptConfig *group_config_ptr; // [rsp+30h] [rbp-A0h]
  const PointScriptConfig *point_config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v23; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-80h] BYREF
  char v25[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 19 point_config_id:304";
  *(_QWORD *)(v3 + 16) = GallerySceneTransferAwaiter::findRebornPosAndRot;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.gallery_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, this->gallery_id_);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( gallery_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->transfer_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gallery_config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->transfer_group_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    group_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, gallery_config_ptr->transfer_group_id);
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( group_config_ptr )
    {
      if ( std::vector<unsigned int>::empty(&gallery_config_ptr->transfer_config_id_list) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_transfer_awaiter.cpp",
          "findRebornPosAndRot",
          301);
        v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v24, (const char (*)[13])"gallery_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->gallery_id_);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          v14,
          (const char (*)[32])", transfer_config_id_list empty");
        common::milog::MiLogStream::~MiLogStream(&v24);
        result = -1;
      }
      else
      {
        v15 = std::vector<unsigned int>::front(&gallery_config_ptr->transfer_config_id_list);
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 32) = *v15;
        point_config_ptr = GroupScriptConfig::findPointConfig(group_config_ptr, *(_DWORD *)(v3 + 32));
        if ( point_config_ptr )
        {
          if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(pos, 12LL);
          }
          if ( (((unsigned __int8)point_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_config_ptr->pos >> 3)
                                                                         + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&point_config_ptr->pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z
                                                                            + 3) >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_config_ptr->pos, 12LL);
          }
          *pos = point_config_ptr->pos;
          if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(rot, 12LL);
          }
          if ( *(char *)(((unsigned __int64)&point_config_ptr->rot >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&point_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_ptr->rot.z
                                                                            + 3) >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_config_ptr->rot, 12LL);
          }
          *(_QWORD *)&rot->x = *(_QWORD *)&point_config_ptr->rot.x;
          rot->z = point_config_ptr->rot.z;
          result = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_transfer_awaiter.cpp",
            "findRebornPosAndRot",
            308);
          v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                  &v24,
                  (const char (*)[13])"gallery_id: ");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->gallery_id_);
          v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  v17,
                  (const char (*)[28])", point_config_id invalid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v24);
          result = -1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "findRebornPosAndRot",
        296);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v24, (const char (*)[12])"galley_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
      v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              v11,
              (const char (*)[30])", transfer_group_id invalid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v12,
        &gallery_config_ptr->transfer_group_id);
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "findRebornPosAndRot",
      290);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v24,
           (const char (*)[20])"invalid galley_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = -1;
  }
  if ( v25 == (char *)v3 )
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

// Line 316: range 0000000015CF93B0-0000000015CF9D5C
std::optional<std::pair<Vector3,Vector3> > *__cdecl MatchGallerySceneTransferAwaiter::getRewriteTransferLocation(
        std::optional<std::pair<Vector3,Vector3> > *retstr,
        MatchGallerySceneTransferAwaiter *const this,
        Player *player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t OwnerUid; // r14d
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  uint32_t pos_index; // eax
  int v13; // r14d
  char *v14; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  char v17; // cl
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::vector<unsigned int>::reference v21; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  MatchGallerySceneTransferAwaiter *thisa; // [rsp+10h] [rbp-150h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-138h]
  const GroupScriptConfig *group_config_ptr; // [rsp+30h] [rbp-130h]
  const PointScriptConfig *point_config_ptr; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v33; // [rsp+40h] [rbp-120h] BYREF
  std::pair<Vector3,Vector3> __t; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+90h] [rbp-D0h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 group_id:331 64 4 17 cur_pos_index:341 80 4 13 config_id:351 96 24 17 config_id_vec:332";
  *(_QWORD *)(v3 + 16) = MatchGallerySceneTransferAwaiter::getRewriteTransferLocation;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( !SceneTransferAwaiter::isActive(this) )
    goto LABEL_11;
  *(_DWORD *)(v3 + 80) = Player::getUid(player);
  LOBYTE(this) = v3 + 80;
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &thisa->player_uid_set_,
          (const unsigned int *)(v3 + 80)) )
    goto LABEL_11;
  *(_DWORD *)(v3 + 80) = Player::getUid(player);
  LOBYTE(this) = v3 + 80;
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &thisa->arrived_uid_set_,
         (const unsigned int *)(v3 + 80)) )
  {
    goto LABEL_11;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OwnerUid = Scene::getOwnerUid(thisa->scene_);
  if ( OwnerUid == Player::getUid(player) )
  {
LABEL_11:
    std::optional<std::pair<Vector3,Vector3>>::optional(retstr, (std::nullopt_t)this);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                           p_gallery_config_mgr,
                           thisa->gallery_id_);
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( gallery_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->transfer_group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gallery_config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->transfer_group_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = gallery_config_ptr->transfer_group_id;
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v3 + 96),
        &gallery_config_ptr->transfer_config_id_list);
      *(_DWORD *)(v3 + 80) = Player::getUid(player);
      if ( common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
             &thisa->uid_pos_index_map_,
             (const unsigned int *)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_transfer_awaiter.cpp",
          "getRewriteTransferLocation",
          337);
        v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v35,
               (const char (*)[37])"duplicate join player scene, owner: ");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 64) = Scene::getOwnerUid(thisa->scene_);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v3 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])", uid: ");
        *(_DWORD *)(v3 + 80) = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v35);
        std::optional<std::pair<Vector3,Vector3>>::optional(retstr, (std::nullopt_t)(v3 + 80));
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->pos_index_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)thisa - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->pos_index_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        pos_index = thisa->pos_index_;
        thisa->pos_index_ = pos_index + 1;
        *(_DWORD *)(v3 + 64) = pos_index;
        v13 = *(_DWORD *)(v3 + 64);
        *(_DWORD *)(v3 + 80) = Player::getUid(player);
        v14 = (char *)(v3 + 80);
        v15 = std::map<unsigned int,unsigned int>::operator[](
                &thisa->uid_pos_index_map_,
                (std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
        v16 = v15;
        v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
        if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
        {
          LOBYTE(v14) = v17 != 0;
          __asan_report_store4(v15, v14, (_BYTE)v15);
        }
        *v16 = v13;
        if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 96)) > *(unsigned int *)(v3 + 64) )
        {
          v21 = std::vector<unsigned int>::operator[](
                  (std::vector<unsigned int> *const)(v3 + 96),
                  *(unsigned int *)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 80) = *v21;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v33);
          v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
          group_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                               &v22->design_config.lua_config_mgr,
                               *(_DWORD *)(v3 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v33);
          if ( group_config_ptr )
          {
            point_config_ptr = GroupScriptConfig::findPointConfig(group_config_ptr, *(_DWORD *)(v3 + 80));
            if ( point_config_ptr )
            {
              std::pair<Vector3,Vector3>::pair<Vector3,Vector3,true>(
                &__t,
                &point_config_ptr->pos,
                &point_config_ptr->rot);
              std::optional<std::pair<Vector3,Vector3>>::optional<std::pair<Vector3,Vector3>,true>(retstr, &__t);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v35,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_transfer_awaiter.cpp",
                "getRewriteTransferLocation",
                361);
              v24 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v35,
                      (const char (*)[35])"point config not found, group_id: ");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      (const unsigned int *)(v3 + 48));
              v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v25,
                      (const char (*)[14])", config_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v3 + 80));
              common::milog::MiLogStream::~MiLogStream(&v35);
              std::optional<std::pair<Vector3,Vector3>>::optional(retstr, (std::nullopt_t)(v3 + 80));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_transfer_awaiter.cpp",
              "getRewriteTransferLocation",
              355);
            v23 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v35,
                    (const char (*)[35])"group config not found, group_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v35);
            std::optional<std::pair<Vector3,Vector3>>::optional(retstr, (std::nullopt_t)(v3 + 48));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_transfer_awaiter.cpp",
            "getRewriteTransferLocation",
            347);
          v18 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(&v35, (const char (*)[36])off_259E24C0);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v3 + 64));
          v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v19,
                  (const char (*)[15])", gallery_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &thisa->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v35);
          std::optional<std::pair<Vector3,Vector3>>::optional(retstr, (std::nullopt_t)((_BYTE)thisa - 56));
        }
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "getRewriteTransferLocation",
        327);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v35,
             (const char (*)[39])"gallery config not found, gallery_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &thisa->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v35);
      std::optional<std::pair<Vector3,Vector3>>::optional(retstr, (std::nullopt_t)((_BYTE)thisa - 56));
    }
  }
  if ( v36 == (char *)v3 )
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
  return retstr;
};

// Line 368: range 0000000015CF9D5E-0000000015CF9F98
void __cdecl MatchGallerySceneTransferAwaiter::onGalleryInitSuccess(MatchGallerySceneTransferAwaiter *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  SceneGalleryComp *GalleryComp; // rcx
  common::milog::MiLogStream *v5; // rax
  BaseGallery *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 gallery_ptr:369";
  *(_QWORD *)(v1 + 16) = MatchGallerySceneTransferAwaiter::onGalleryInitSuccess;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = Scene::getGalleryComp(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v1 + 32), (__int64)GalleryComp, this->gallery_id_);
  if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "onGalleryInitSuccess",
      372);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v7,
           (const char (*)[32])"gallery not found, gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v6 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BaseGallery::setGalleryStartSource(v6, GALLERY_START_BY_MATCH);
  }
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 379: range 0000000015CF9F9A-0000000015CF9FA8
uint32_t __cdecl MatchGallerySceneTransferAwaiter::getGalleryStartSource(
        const MatchGallerySceneTransferAwaiter *const this)
{
  return 1;
};

// Line 384: range 0000000015CF9FAA-0000000015CFA1E4
void __cdecl DraftGallerySceneTransferAwaiter::onGalleryInitSuccess(DraftGallerySceneTransferAwaiter *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  SceneGalleryComp *GalleryComp; // rcx
  common::milog::MiLogStream *v5; // rax
  BaseGallery *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 gallery_ptr:385";
  *(_QWORD *)(v1 + 16) = DraftGallerySceneTransferAwaiter::onGalleryInitSuccess;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = Scene::getGalleryComp(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v1 + 32), (__int64)GalleryComp, this->gallery_id_);
  if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "onGalleryInitSuccess",
      388);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v7,
           (const char (*)[32])"gallery not found, gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v6 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BaseGallery::setGalleryStartSource(v6, GALLERY_START_BY_DRAFT);
  }
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 395: range 0000000015CFA1E6-0000000015CFA1F4
uint32_t __cdecl DraftGallerySceneTransferAwaiter::getGalleryStartSource(
        const DraftGallerySceneTransferAwaiter *const this)
{
  return 2;
};

// Line 400: range 0000000015CFA1F6-0000000015CFAE76
void __cdecl IslandPartyMatchGallerySceneTransferAwaiter::onGalleryStartFailed(
        IslandPartyMatchGallerySceneTransferAwaiter *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::vector<unsigned int>::size_type v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::vector<unsigned int>::const_reference v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned int v21; // r14d
  common::milog::MiLogStream *v22; // rax
  Player *v23; // rax
  PlayerSceneComp *SceneComp; // r14
  Vector3 *p_rot; // rcx
  Vector3 *p_pos; // rdx
  bool v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  unsigned __int64 v34; // rax
  unsigned int (__fastcall *v35)(std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r8
  common::milog::MiLogStream *v36; // rax
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rcx
  unsigned __int64 v38; // rax
  void (__fastcall *v39)(std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, __int64); // r8
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-1B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-1B0h] BYREF
  unsigned __int64 val; // [rsp+28h] [rbp-1A8h] BYREF
  const data::ActivityIslandPartyOverallExcelConfig *overall_config; // [rsp+30h] [rbp-1A0h]
  const std::vector<unsigned int> *point_config_id_vec; // [rsp+38h] [rbp-198h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+40h] [rbp-190h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-188h]
  const unsigned int *uid; // [rsp+50h] [rbp-180h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+58h] [rbp-178h]
  common::milog::MiLogStream v49; // [rsp+60h] [rbp-170h] BYREF
  common::milog::MiLogStream v50; // [rsp+80h] [rbp-150h] BYREF
  common::milog::MiLogStream v51; // [rsp+A0h] [rbp-130h] BYREF
  TransferReason p_reason; // [rsp+C0h] [rbp-110h] BYREF
  char v53[208]; // [rsp+100h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 12 group_id:411 64 4 7 idx:418 80 4 19 point_config_id:427 96 16 13 world_ptr:401 128 16 "
                        "18 own_player_ptr:438";
  *(_QWORD *)(v1 + 16) = IslandPartyMatchGallerySceneTransferAwaiter::onGalleryStartFailed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v6 = *p_vptr_DescribalBase + 56LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v6)(v1 + 96, scene);
  if ( std::operator==<World>((const std::shared_ptr<World> *)(v1 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "onGalleryStartFailed",
      404);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v51,
           (const char (*)[28])"world not found, scene_id: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 64) = Scene::getSceneId(this->scene_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", owner_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 80) = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 80));
    common::milog::MiLogStream::~MiLogStream(&v51);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 128));
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
    overall_config = ActivityIslandPartyExcelConfigMgr::getOverallConfig(&v10->design_config.txt_config_mgr.activity_island_party_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 128));
    point_config_id_vec = &overall_config->settle_transfer_config_id_list;
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = overall_config->settle_transfer_group_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 128));
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                &v11->design_config.lua_config_mgr,
                                *(_DWORD *)(v1 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 128));
    if ( group_script_config_ptr )
    {
      *(_DWORD *)(v1 + 64) = 0;
      __for_range = &this->player_uid_set_;
      __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        uid = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v13 = *(int *)(v1 + 64);
        if ( v13 >= std::vector<unsigned int>::size(point_config_id_vec) )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_transfer_awaiter.cpp",
            "onGalleryStartFailed",
            424);
          v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v49,
                  (const char (*)[42])"point config id vec not enough, cur idx: ");
          v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v1 + 64));
          v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])", vec size: ");
          val = std::vector<unsigned int>::size(point_config_id_vec);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v16, &val);
          common::milog::MiLogStream::~MiLogStream(&v49);
          break;
        }
        v17 = std::vector<unsigned int>::operator[](point_config_id_vec, *(int *)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 80) = *v17;
        ++*(_DWORD *)(v1 + 64);
        point_script_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, *(_DWORD *)(v1 + 80));
        if ( point_script_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v21 = *uid;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( v21 == Scene::getOwnerUid(this->scene_) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Scene::getOwnPlayer((const Scene *const)(v1 + 128));
            if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v51,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_transfer_awaiter.cpp",
                "onGalleryStartFailed",
                441);
              v22 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      &v51,
                      (const char (*)[34])"host player not found, owner_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, uid);
              common::milog::MiLogStream::~MiLogStream(&v51);
            }
            else
            {
              v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
              SceneComp = Player::getSceneComp(v23);
              TransferReason::TransferReason(&p_reason, ENTER_REASON_ISLAND_PARTY_GALLERY_START_FAILED);
              p_rot = &point_script_config_ptr->rot;
              p_pos = &point_script_config_ptr->pos;
              if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v27 = PlayerSceneComp::jumpToScene(SceneComp, this->scene_, p_pos, p_rot, 0, &p_reason) != 0;
              TransferReason::~TransferReason(&p_reason);
              if ( v27 )
              {
                common::milog::MiLogStream::create(
                  &v51,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_transfer_awaiter.cpp",
                  "onGalleryStartFailed",
                  446);
                v28 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                        &v51,
                        (const char (*)[40])"host player jump to scene failed, uid: ");
                v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, uid);
                v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v29,
                        (const char (*)[13])", group_id: ");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        (const unsigned int *)(v1 + 48));
                v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v31,
                        (const char (*)[14])", config_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v1 + 80));
                common::milog::MiLogStream::~MiLogStream(&v51);
              }
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
          }
          else
          {
            v33 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v34 = (unsigned __int64)(v33->_vptr_World + 13);
            if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
              v34 = __asan_report_load8();
            v35 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v34;
            if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( v35(v33, *uid) )
            {
              common::milog::MiLogStream::create(
                &v51,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_transfer_awaiter.cpp",
                "onGalleryStartFailed",
                456);
              v36 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v51,
                      (const char (*)[31])"check kick player failed, uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, uid);
              common::milog::MiLogStream::~MiLogStream(&v51);
            }
            else
            {
              v37 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v38 = (unsigned __int64)(v37->_vptr_World + 14);
              if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
                v38 = __asan_report_load8();
              v39 = *(void (__fastcall **)(std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, __int64))v38;
              if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v39(v37, *uid, 10LL);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_transfer_awaiter.cpp",
            "onGalleryStartFailed",
            432);
          v18 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v50,
                  (const char (*)[43])"point script config not found, config id: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v1 + 80));
          v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])", group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v50);
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "onGalleryStartFailed",
        415);
      v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v51,
              (const char (*)[42])"group script config not found, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v51);
    }
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 96));
  if ( v53 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 465: range 0000000015CFAE78-0000000015CFB937
void __cdecl IslandPartyMatchGallerySceneTransferAwaiter::onTimeoutPlayerEnter(
        IslandPartyMatchGallerySceneTransferAwaiter *const this,
        Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::vector<unsigned int>::const_reference v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Player *v13; // rax
  PlayerSceneComp *SceneComp; // r14
  const Vector3 *p_rot; // rcx
  const Vector3 *p_pos; // rdx
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  common::milog::MiLogStream *v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  const data::ActivityIslandPartyOverallExcelConfig *overall_config; // [rsp+10h] [rbp-130h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+20h] [rbp-120h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v37; // [rsp+30h] [rbp-110h] BYREF
  TransferReason p_reason; // [rsp+50h] [rbp-F0h] BYREF
  char v39[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:466 64 4 19 point_config_id:477 80 4 12 group_id:479 96 16 13 world_ptr:508";
  *(_QWORD *)(v2 + 16) = IslandPartyMatchGallerySceneTransferAwaiter::onTimeoutPlayerEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Scene::getOwnerUid(this->scene_) == *(_DWORD *)(v2 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 96));
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    overall_config = ActivityIslandPartyExcelConfigMgr::getOverallConfig(&v5->design_config.txt_config_mgr.activity_island_party_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
    if ( std::vector<unsigned int>::empty(&overall_config->settle_transfer_config_id_list) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "onTimeoutPlayerEnter",
        474);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v37,
        (const char (*)[29])"point config id vec is empty");
      common::milog::MiLogStream::~MiLogStream(&v37);
    }
    else
    {
      v6 = std::vector<unsigned int>::front(&overall_config->settle_transfer_config_id_list);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 64) = *v6;
      if ( *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 80) = overall_config->settle_transfer_group_id;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 96));
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                  &v7->design_config.lua_config_mgr,
                                  *(_DWORD *)(v2 + 80));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
      if ( group_script_config_ptr )
      {
        point_script_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, *(_DWORD *)(v2 + 64));
        if ( point_script_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Scene::getOwnPlayer((const Scene *const)(v2 + 96));
          if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_transfer_awaiter.cpp",
              "onTimeoutPlayerEnter",
              495);
            v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v37,
                    (const char (*)[33])off_259E2BE0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v37);
          }
          else
          {
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            SceneComp = Player::getSceneComp(v13);
            TransferReason::TransferReason(&p_reason, ENTER_REASON_ISLAND_PARTY_GALLERY_START_FAILED);
            p_rot = &point_script_config_ptr->rot;
            p_pos = &point_script_config_ptr->pos;
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v17 = PlayerSceneComp::jumpToScene(SceneComp, this->scene_, p_pos, p_rot, 0, &p_reason) != 0;
            TransferReason::~TransferReason(&p_reason);
            if ( v17 )
            {
              common::milog::MiLogStream::create(
                &v37,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_transfer_awaiter.cpp",
                "onTimeoutPlayerEnter",
                501);
              v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      &v37,
                      (const char (*)[40])"host player jump to scene failed, uid: ");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v18,
                      (const unsigned int *)(v2 + 48));
              v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v19,
                      (const char (*)[13])", group_id: ");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v2 + 80));
              v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v21,
                      (const char (*)[14])", config_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v2 + 64));
              common::milog::MiLogStream::~MiLogStream(&v37);
            }
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_transfer_awaiter.cpp",
            "onTimeoutPlayerEnter",
            489);
          v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                 &v37,
                 (const char (*)[43])"point script config not found, config id: ");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v2 + 64));
          v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])", group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v37);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_transfer_awaiter.cpp",
          "onTimeoutPlayerEnter",
          483);
        v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v37,
               (const char (*)[42])"group script config not found, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v37);
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v25 = *p_vptr_DescribalBase + 56LL;
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      v25 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Scene *))v25)(v2 + 96, scene);
    if ( std::operator==<World>((const std::shared_ptr<World> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "onTimeoutPlayerEnter",
        511);
      v26 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v37,
              (const char (*)[28])"world not found, scene_id: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 64) = Scene::getSceneId(this->scene_);
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 64));
      v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v27, (const char (*)[14])", owner_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 80) = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v37);
    }
    else
    {
      v29 = (unsigned __int64)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        v29 = __asan_report_load8();
      v30 = *(_QWORD *)v29 + 104LL;
      if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
        v29 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD))v30)(v29, *(unsigned int *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_transfer_awaiter.cpp",
          "onTimeoutPlayerEnter",
          516);
        v31 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v37,
                (const char (*)[31])"check kick player failed, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v37);
      }
      else
      {
        v32 = (unsigned __int64)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
          v32 = __asan_report_load8();
        v33 = *(_QWORD *)v32 + 112LL;
        if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
          v32 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))v33)(v32, *(unsigned int *)(v2 + 48), 10LL);
      }
    }
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 96));
  }
  if ( v39 == (char *)v2 )
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

// Line 525: range 0000000015CFB938-0000000015CFBC16
void __cdecl IslandPartyMatchGallerySceneTransferAwaiter::onPlayerLeave(
        IslandPartyMatchGallerySceneTransferAwaiter *const this,
        Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  ActivityIslandPartyExcelConfigMgr *p_activity_island_party_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  PlayerMatchComp *MatchComp; // rcx
  unsigned int val; // [rsp+10h] [rbp-50h] BYREF
  unsigned int value; // [rsp+14h] [rbp-4Ch] BYREF
  const data::ActivityIslandPartyStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  value = Scene::getOwnerUid(this->scene_);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->player_uid_set_, &value) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "onPlayerLeave",
      529);
    v2 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v12,
           (const char (*)[25])"host already leave, uid:");
    val = Player::getUid(player);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])", host: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    value = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &value);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    p_activity_island_party_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_island_party_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    stage_config_ptr = ActivityIslandPartyExcelConfigMgr::findConfigByGalleryId(
                         p_activity_island_party_mgr,
                         this->gallery_id_);
    std::shared_ptr<Config>::~shared_ptr(&v11);
    if ( stage_config_ptr )
    {
      MatchComp = Player::getMatchComp(player);
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->match_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->match_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerMatchComp::matchPunish(MatchComp, stage_config_ptr->match_id);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_awaiter.cpp",
        "onPlayerLeave",
        535);
      v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v12,
             (const char (*)[37])"stage config not found, gallery_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
  }
};

// Line 542: range 0000000015CFBC18-0000000015CFC44D
void __cdecl IslandPartyDraftGallerySceneTransferAwaiter::onGalleryStartFailed(
        IslandPartyDraftGallerySceneTransferAwaiter *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::vector<unsigned int>::size_type v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  std::vector<unsigned int>::const_reference v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Scene *scene; // rcx
  common::milog::MiLogStream *v16; // rax
  Player *v17; // rax
  PlayerSceneComp *SceneComp; // r14
  Vector3 *p_rot; // rcx
  Vector3 *p_pos; // rdx
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-178h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 val; // [rsp+28h] [rbp-168h] BYREF
  const data::ActivityIslandPartyOverallExcelConfig *overall_config; // [rsp+30h] [rbp-160h]
  const std::vector<unsigned int> *point_config_id_vec; // [rsp+38h] [rbp-158h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+40h] [rbp-150h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-148h]
  const unsigned int *uid; // [rsp+50h] [rbp-140h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-130h] BYREF
  common::milog::MiLogStream v37; // [rsp+80h] [rbp-110h] BYREF
  TransferReason p_reason; // [rsp+A0h] [rbp-F0h] BYREF
  char v39[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 12 group_id:547 64 4 7 idx:554 80 4 19 point_config_id:563 96 16 14 player_ptr:572";
  *(_QWORD *)(v1 + 16) = IslandPartyDraftGallerySceneTransferAwaiter::onGalleryStartFailed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 96));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
  overall_config = ActivityIslandPartyExcelConfigMgr::getOverallConfig(&v4->design_config.txt_config_mgr.activity_island_party_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
  point_config_id_vec = &overall_config->settle_transfer_config_id_list;
  if ( *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v1 + 48) = overall_config->settle_transfer_group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 96));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
  group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v5->design_config.lua_config_mgr, *(_DWORD *)(v1 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
  if ( group_script_config_ptr )
  {
    *(_DWORD *)(v1 + 64) = 0;
    __for_range = &this->player_uid_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      uid = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v7 = *(int *)(v1 + 64);
      if ( v7 >= std::vector<unsigned int>::size(point_config_id_vec) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_transfer_awaiter.cpp",
          "onGalleryStartFailed",
          560);
        v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v36,
               (const char (*)[42])"point config id vec not enough, cur idx: ");
        v9 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v1 + 64));
        v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])", vec size: ");
        val = std::vector<unsigned int>::size(point_config_id_vec);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v36);
        break;
      }
      v11 = std::vector<unsigned int>::operator[](point_config_id_vec, *(int *)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 80) = *v11;
      ++*(_DWORD *)(v1 + 64);
      point_script_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, *(_DWORD *)(v1 + 80));
      if ( point_script_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene = this->scene_;
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v1 + 96), (__int64)scene, *uid);
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_transfer_awaiter.cpp",
            "onGalleryStartFailed",
            576);
          v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v37,
                  (const char (*)[24])"player not found, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, uid);
          common::milog::MiLogStream::~MiLogStream(&v37);
        }
        else
        {
          v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          SceneComp = Player::getSceneComp(v17);
          TransferReason::TransferReason(&p_reason, ENTER_REASON_ISLAND_PARTY_GALLERY_START_FAILED);
          p_rot = &point_script_config_ptr->rot;
          p_pos = &point_script_config_ptr->pos;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v21 = PlayerSceneComp::jumpToScene(SceneComp, this->scene_, p_pos, p_rot, 0, &p_reason) != 0;
          TransferReason::~TransferReason(&p_reason);
          if ( v21 )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_transfer_awaiter.cpp",
              "onGalleryStartFailed",
              581);
            v22 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v37,
                    (const char (*)[35])"player jump to scene failed, uid: ");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, uid);
            v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v23,
                    (const char (*)[13])", group_id: ");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v1 + 48));
            v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v25,
                    (const char (*)[14])", config_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v1 + 80));
            common::milog::MiLogStream::~MiLogStream(&v37);
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_transfer_awaiter.cpp",
          "onGalleryStartFailed",
          568);
        v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v37,
                (const char (*)[43])"point script config not found, config id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v1 + 80));
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v37);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_awaiter.cpp",
      "onGalleryStartFailed",
      551);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v37,
           (const char (*)[42])"group script config not found, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v37);
  }
  if ( v39 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 586: range 0000000015D27B6C-0000000015D27B80
void __cdecl GLOBAL__sub_I_merge_merge_player_view_mgr_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 586: range 0000000015D27560-0000000015D27B6B
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  __int64 v7; // rsi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  char v18; // dl
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  char v22; // dl
  __int64 v23; // rdx
  const char *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  char v27; // dl
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  char v31; // dl
  __int64 v32; // rdx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  char v35; // dl
  __int64 v36; // rdx
  const char *v37; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_player_view_mgr.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      v7 = 5LL;
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   5LL);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  5LL);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     5LL);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 5LL);
      boost::asio::error::misc_category = misc_category;
      v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v7,
            v15);
        *v13 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v7 = (__int64)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v16 )
      {
        v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v18 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v7,
            v19);
        *v17 = 1;
        v7 = (__int64)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v20 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v22 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v22 != 0;
        v23 = (v22 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v22);
        if ( (_BYTE)v23 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v7,
            v23);
        *v21 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v24;
      }
      v25 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v27 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v27 != 0;
        v28 = (v27 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v27);
        if ( (_BYTE)v28 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v7,
            v28);
        *v26 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v29 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v29 )
      {
        v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v31 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v31 != 0;
        v32 = (v31 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v31);
        if ( (_BYTE)v32 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v7,
            v32);
        *v30 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v33 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v33 )
      {
        v34 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v35 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v35 != 0;
        v36 = (v35 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v35);
        if ( (_BYTE)v36 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v7,
            v36);
        *v34 = 1;
        v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v37;
      }
    }
    __asan_after_dynamic_init();
  }
};
