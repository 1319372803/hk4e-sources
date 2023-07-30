// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/widget_gadget_comp.cpp

// Line 22: range 0000000015CCBB74-0000000015CCBD8F
void __cdecl WidgetGadgetComp::WidgetGadgetComp(
        WidgetGadgetComp *const this,
        Gadget *gadget,
        const WidgetGadgetParam *param)
{
  int (**v3)(...); // rdx
  uint32_t owner_uid; // ecx
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+28h] [rbp-38h] BYREF
  unsigned int EntityId; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  GadgetCompBase::GadgetCompBase(this, gadget);
  v3 = (int (**)(...))(&`vtable for'WidgetGadgetComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  owner_uid = param->owner_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_uid_);
  }
  this->owner_uid_ = owner_uid;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/widget_gadget_comp.cpp",
    "WidgetGadgetComp",
    25);
  v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v13,
         (const char (*)[33])"widget gadget create, gadget id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Gadget::getGadgetId(this->gadget_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" entity id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &EntityId);
  v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" owner_uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->owner_uid_);
  common::milog::MiLogStream::~MiLogStream(&v13);
};

// Line 29: range 0000000015CCBD90-0000000015CCC230
void __cdecl WidgetGadgetComp::onDie(WidgetGadgetComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t v4; // ecx
  Player *v5; // rax
  PlayerWidgetComp *WidgetComp; // rax
  WidgetGadgetMgr *WidgetGadgetMgr; // r14
  uint32_t EntityId; // eax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned int GadgetId; // [rsp+18h] [rbp-B8h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 scene_ptr:31 64 16 19 owner_player_ptr:34";
  *(_QWORD *)(v1 + 16) = WidgetGadgetComp::onDie;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    v4 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v1 + 64), v4);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      WidgetComp = Player::getWidgetComp(v5);
      WidgetGadgetMgr = PlayerWidgetComp::getWidgetGadgetMgr(WidgetComp);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
      WidgetGadgetMgr::onGadgetDie(WidgetGadgetMgr, EntityId);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/widget_gadget_comp.cpp",
        "onDie",
        41);
      v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v19,
             (const char (*)[62])"player leave scene, but widget gadget don't leave, gadget id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Gadget::getGadgetId(this->gadget_);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" owner_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->owner_uid_);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/widget_gadget_comp.cpp",
    "onDie",
    44);
  v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v19,
          (const char (*)[30])"widget gadget die, gadget id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GadgetId = Gadget::getGadgetId(this->gadget_);
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &GadgetId);
  v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" entity id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Entity::getEntityId((const Entity *const)this->gadget_);
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
  v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" owner_uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->owner_uid_);
  common::milog::MiLogStream::~MiLogStream(&v19);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v20 == (char *)v1 )
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
