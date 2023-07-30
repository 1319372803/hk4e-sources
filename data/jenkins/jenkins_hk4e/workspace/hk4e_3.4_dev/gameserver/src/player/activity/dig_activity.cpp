// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/dig_activity.cpp

// Line 29: range 00000000165B6C54-00000000165B6CF1
int32_t __cdecl DigActivity::SearchingGadgetInfo::toClient(
        const DigActivity::SearchingGadgetInfo *const this,
        proto::DigMarkPoint *proto)
{
  proto::Vector *v2; // rax
  proto::Vector *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DigMarkPoint::set_bundle_id(proto, this->bundle_id);
  v2 = proto::DigMarkPoint::mutable_pos(proto);
  Vector3::toClient(&this->pos, v2);
  v3 = proto::DigMarkPoint::mutable_rot(proto);
  Vector3::toClient(&this->rot, v3);
  return 0;
};

// Line 37: range 00000000165B6CF2-00000000165B6E93
int32_t __cdecl DigActivity::toClient(DigActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  proto::DigMarkPoint *v4; // rax
  unsigned int val; // [rsp+14h] [rbp-5Ch] BYREF
  std::vector<DigActivity::SearchingGadgetInfo>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::vector<DigActivity::SearchingGadgetInfo>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  proto::DigActivityDetailInfo *dig_info; // [rsp+28h] [rbp-48h]
  std::vector<DigActivity::SearchingGadgetInfo> *__for_range; // [rsp+30h] [rbp-40h]
  const DigActivity::SearchingGadgetInfo *gadget_info; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dig_activity.cpp",
      "toClient",
      40);
    v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v11,
           (const char (*)[43])"[DIG] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    dig_info = proto::ActivityInfo::mutable_dig_info(activity_info);
    __for_range = &this->gadget_vec_;
    __for_begin._M_current = std::vector<DigActivity::SearchingGadgetInfo>::begin(&this->gadget_vec_)._M_current;
    __for_end._M_current = std::vector<DigActivity::SearchingGadgetInfo>::end(&this->gadget_vec_)._M_current;
    while ( __gnu_cxx::operator!=<DigActivity::SearchingGadgetInfo *,std::vector<DigActivity::SearchingGadgetInfo>>(
              &__for_begin,
              &__for_end) )
    {
      gadget_info = __gnu_cxx::__normal_iterator<DigActivity::SearchingGadgetInfo *,std::vector<DigActivity::SearchingGadgetInfo>>::operator*(&__for_begin);
      if ( !std::__weak_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::expired(&gadget_info->gadget_wtr) )
      {
        v4 = proto::DigActivityDetailInfo::add_dig_mark_point_list(dig_info);
        DigActivity::SearchingGadgetInfo::toClient(gadget_info, v4);
      }
      __gnu_cxx::__normal_iterator<DigActivity::SearchingGadgetInfo *,std::vector<DigActivity::SearchingGadgetInfo>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 55: range 00000000165B6E94-00000000165B6EF1
int32_t __cdecl DigActivity::init(DigActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    DigActivity::registerObserver(this);
  return 0;
};

// Line 65: range 00000000165B6EF2-00000000165B6F0C
void __cdecl DigActivity::onStart(DigActivity *const this)
{
  DigActivity::registerObserver(this);
};

// Line 70: range 00000000165B6F0E-00000000165B6F28
void __cdecl DigActivity::onSettle(DigActivity *const this)
{
  DigActivity::unregisterObserver(this);
};

// Line 75: range 00000000165B6F2A-00000000165B6F34
void __cdecl DigActivity::onLogin(DigActivity *const this)
{
  ;
};

// Line 79: range 00000000165B6F36-00000000165B71C6
void __cdecl DigActivity::registerObserver(DigActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::weak_ptr<DigActivity> *p_this_wtr; // [rsp+10h] [rbp-C0h]
  std::weak_ptr<DigActivity> v5; // [rsp+20h] [rbp-B0h] BYREF
  std::enable_shared_from_this<BaseActivity> v6; // [rsp+30h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 11 this_ptr:80 64 16 11 this_wtr:81";
  *(_QWORD *)(v1 + 16) = DigActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<DigActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<DigActivity>::weak_ptr<DigActivity,void>(
    (std::weak_ptr<DigActivity> *const)(v1 + 64),
    (const std::shared_ptr<DigActivity> *)(v1 + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->group_bundle_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<DigActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<DigActivity>::weak_ptr(&v5, (const std::weak_ptr<DigActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<DigActivity,GroupBundleFinishEvent>(
      (PlayerEventComp *const)&v6,
      p_this_wtr,
      (void (*)(DigActivity *, const GroupBundleFinishEvent *))&v5);
    std::weak_ptr<Observer>::operator=(&this->group_bundle_obs_wtr_, (std::weak_ptr<Observer> *)&v6);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6);
    std::weak_ptr<DigActivity>::~weak_ptr(&v5);
  }
  std::weak_ptr<DigActivity>::~weak_ptr((std::weak_ptr<DigActivity> *const)(v1 + 64));
  std::shared_ptr<DigActivity>::~shared_ptr((std::shared_ptr<DigActivity> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
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

// Line 89: range 00000000165B71C8-00000000165B724E
void __cdecl DigActivity::unregisterObserver(DigActivity *const this)
{
  PlayerEventComp *EventComp; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->group_bundle_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->group_bundle_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->group_bundle_obs_wtr_);
  }
};

// Line 97: range 00000000165B7250-00000000165B7400
bool __cdecl DigActivity::checkCondIsMeet(DigActivity *const this, const data::NewActivityCond *cond)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  uint32_t *v6; // rdx
  unsigned __int64 val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type != NEW_ACTIVITY_COND_FINISH_DIG_ACTIVITY )
    return BaseActivity::checkCondIsMeet(this, cond);
  if ( std::vector<int>::size(&cond->param) )
  {
    v6 = (uint32_t *)std::vector<int>::operator[](&cond->param, 0LL);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return DigActivity::isStageFinished(this, *v6);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/dig_activity.cpp",
      "checkCondIsMeet",
      104);
    v2 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v8, (const char (*)[12])"cond_type: ");
    v3 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
           v2,
           &cond->type);
    v4 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v3, (const char (*)[21])" param num invalid: ");
    val = std::vector<int>::size(&cond->param);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return 0;
  }
};

// Line 117: range 00000000165B7402-00000000165B742E
void __cdecl DigActivity::onClear(DigActivity *const this)
{
  std::map<unsigned int,DigActivity::SearchingTarget>::clear(&this->searching_target_map_);
  DigActivity::clearSearchingGadget(this);
};

// Line 123: range 00000000165B7430-00000000165B7EE1
__int64 __fastcall DigActivity::setSearchingTarget(DigActivity *const this, uint32_t group_id, uint32_t config_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t v20; // ecx
  uint32_t v21; // ecx
  uint32_t v22; // ecx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  LuaConfigMgr *lua_config_mgr; // [rsp+10h] [rbp-F0h]
  const GadgetScriptConfig *gadget_config_ptr; // [rsp+18h] [rbp-E8h]
  DigActivity::SearchingTarget *target_info; // [rsp+20h] [rbp-E0h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<Config> v37; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v38; // [rsp+40h] [rbp-C0h] BYREF
  char v39[160]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 bundle_id:124 64 4 17 hint_group_id:143 80 4 12 group_id:122 96 4 13 config_id:122";
  *(_QWORD *)(v3 + 16) = DigActivity::setSearchingTarget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  *(_DWORD *)(v3 + 80) = group_id;
  *(_DWORD *)(v3 + 96) = config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  *(_DWORD *)(v3 + 48) = ActivityGroupLinksExcelConfigMgr::getBundleIdByGroupId(
                           &v6->design_config.txt_config_mgr.activity_group_links_config_mgr,
                           *(_DWORD *)(v3 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( *(_DWORD *)(v3 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.lua_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v37);
    gadget_config_ptr = LuaConfigMgr::findGadgetScriptConfig(lua_config_mgr, *(_DWORD *)(v3 + 80), *(_DWORD *)(v3 + 96));
    if ( gadget_config_ptr )
    {
      target_info = std::map<unsigned int,DigActivity::SearchingTarget>::operator[](
                      &this->searching_target_map_,
                      (const std::map<unsigned int,DigActivity::SearchingTarget>::key_type *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)target_info >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)target_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_info >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( target_info->group_id != *(_DWORD *)(v3 + 80) )
        goto LABEL_19;
      if ( *(_BYTE *)(((unsigned __int64)&target_info->config_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)target_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&target_info->config_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( target_info->config_id == *(_DWORD *)(v3 + 96) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/dig_activity.cpp",
          "setSearchingTarget",
          140);
        v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v38,
                (const char (*)[29])"[DIG]same target. group_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 80));
        v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" config_id: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v16, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v38);
        result = 0LL;
      }
      else
      {
LABEL_19:
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v37);
        v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
        *(_DWORD *)(v3 + 64) = ActivityGroupLinksExcelConfigMgr::getGroupBundleHintGroupId(
                                 &v17->design_config.txt_config_mgr.activity_group_links_config_mgr,
                                 *(_DWORD *)(v3 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v37);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v37);
        v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
        group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(
                                  &v18->design_config.lua_config_mgr,
                                  *(_DWORD *)(v3 + 64));
        std::shared_ptr<Config>::~shared_ptr(&v37);
        if ( group_info_config_ptr )
        {
          v20 = *(_DWORD *)(v3 + 80);
          if ( *(_BYTE *)(((unsigned __int64)target_info >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)target_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_info >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_store4(target_info);
          }
          target_info->group_id = v20;
          v21 = *(_DWORD *)(v3 + 96);
          if ( *(_BYTE *)(((unsigned __int64)&target_info->config_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)target_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&target_info->config_id >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_store4(&target_info->config_id);
          }
          target_info->config_id = v21;
          v22 = *(_DWORD *)(v3 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&target_info->bundle_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)target_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&target_info->bundle_id >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_store4(&target_info->bundle_id);
          }
          target_info->bundle_id = v22;
          if ( (((unsigned __int8)target_info + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&target_info->pos >> 3)
                                                                     + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&target_info->pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&target_info->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)target_info + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&target_info->pos.z + 3) >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_store_n(&target_info->pos, 12LL);
          }
          if ( (((unsigned __int8)gadget_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->pos >> 3)
                                                                           + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&gadget_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)gadget_config_ptr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&gadget_config_ptr->pos.z
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load_n(&gadget_config_ptr->pos, 12LL);
          }
          *(_QWORD *)&target_info->pos.x = *(_QWORD *)&gadget_config_ptr->pos.x;
          target_info->pos.z = gadget_config_ptr->pos.z;
          if ( (((unsigned __int8)target_info + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&target_info->center >> 3)
                                                                     + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&target_info->center >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&target_info->center.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)target_info + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&target_info->center.z + 3) >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_store_n(&target_info->center, 12LL);
          }
          if ( *(char *)(((unsigned __int64)&group_info_config_ptr->pos >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&group_info_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)group_info_config_ptr + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&group_info_config_ptr->pos.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load_n(&group_info_config_ptr->pos, 12LL);
          }
          *(_QWORD *)&target_info->center.x = *(_QWORD *)&group_info_config_ptr->pos.x;
          target_info->center.z = group_info_config_ptr->pos.z;
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/dig_activity.cpp",
            "setSearchingTarget",
            155);
          v23 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v38,
                  (const char (*)[36])"[DIG]setSearchingTarget: group_id: ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v3 + 80));
          v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v24, (const char (*)[13])" config_id: ");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v3 + 96));
          v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])" bundle_id: ");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v3 + 48));
          v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" center: ");
          v30 = operator<<(v29, &target_info->center);
          v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v30, (const char (*)[7])" pos: ");
          operator<<(v31, &target_info->pos);
          common::milog::MiLogStream::~MiLogStream(&v38);
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/dig_activity.cpp",
            "setSearchingTarget",
            147);
          v19 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v38,
                  (const char (*)[45])"[DIG]findGroupScriptConfig fail. group_id : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v38);
          result = 5LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/dig_activity.cpp",
        "setSearchingTarget",
        134);
      v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v38,
             (const char (*)[45])"[DIG]findGadgetScriptConfig fail. group_id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" config_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v12, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v38);
      result = 5LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/dig_activity.cpp",
      "setSearchingTarget",
      127);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v38,
           (const char (*)[50])"[DIG]finishGroupBundleByGroupId fail. group id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = 5LL;
  }
  if ( v39 == (char *)v3 )
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

// Line 161: range 00000000165B7EE2-00000000165B81EE
void __fastcall DigActivity::getSearchingTarget(
        DigActivity *const this,
        uint32_t bundle_id,
        unsigned __int64 group_id,
        unsigned __int64 config_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t v7; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget> >::pointer v8; // rdx
  uint32_t v9; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget> >::pointer v10; // rdx
  uint32_t v11; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget> >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 bundle_id:160 64 8 8 iter:163";
  *(_QWORD *)(v4 + 16) = DigActivity::getSearchingTarget;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = bundle_id;
  if ( *(_BYTE *)((config_id >> 3) + 0x7FFF8000) != 0
    && (char)((config_id & 7) + 3) >= *(_BYTE *)((config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(config_id);
  }
  *(_DWORD *)config_id = 0;
  v7 = *(_DWORD *)config_id;
  if ( *(_BYTE *)((group_id >> 3) + 0x7FFF8000) != 0
    && (char)((group_id & 7) + 3) >= *(_BYTE *)((group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(group_id);
  }
  *(_DWORD *)group_id = v7;
  *(std::map<unsigned int,DigActivity::SearchingTarget>::iterator *)(v4 + 64) = std::map<unsigned int,DigActivity::SearchingTarget>::find(
                                                                                  &this->searching_target_map_,
                                                                                  (const std::map<unsigned int,DigActivity::SearchingTarget>::key_type *)(v4 + 48));
  __y._M_node = std::map<unsigned int,DigActivity::SearchingTarget>::end(&this->searching_target_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget> >::_Self *)(v4 + 64),
          &__y) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget> > *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v9 = v8->second.group_id;
    if ( *(_BYTE *)((group_id >> 3) + 0x7FFF8000) != 0
      && (char)((group_id & 7) + 3) >= *(_BYTE *)((group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(group_id);
    }
    *(_DWORD *)group_id = v9;
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget> > *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v10->second.config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v10 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second.config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v11 = v10->second.config_id;
    if ( *(_BYTE *)((config_id >> 3) + 0x7FFF8000) != 0
      && (char)((config_id & 7) + 3) >= *(_BYTE *)((config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(config_id);
    }
    *(_DWORD *)config_id = v11;
  }
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 174: range 00000000165B81F0-00000000165B8847
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall DigActivity::calcWidgetRot(const DigActivity *const this, Vector3 pos, Vector3 *rot)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  float z; // xmm0_4
  int v18; // edi
  int rand_degree; // [rsp+20h] [rbp-E0h]
  common::tools::transcribe_cv_t_23 *target_info_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-C0h] BYREF
  char v23[160]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 bundle_id:176 64 12 7 dir:188 96 12 7 pos:173";
  *(_QWORD *)(v3 + 16) = DigActivity::calcWidgetRot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219020288;
  v5[536862723] = -202177536;
  *(Vector3 *)(v3 + 96) = pos;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  rand_degree = ConstValueExcelConfigMgr::getDigActivityHintRandDegree(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  *(_DWORD *)(v3 + 48) = DigActivity::findNearestTarget(this, *(const Vector3 *)(v3 + 96));
  if ( !*(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dig_activity.cpp",
      "calcWidgetRot",
      179);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v22,
           (const char (*)[30])"[DIG]findNearestTarget fail. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 10016LL;
    goto LABEL_23;
  }
  target_info_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,DigActivity::SearchingTarget> const>(
                      &this->searching_target_map_,
                      (const std::map<unsigned int,DigActivity::SearchingTarget>::key_type *)(v3 + 48));
  if ( !target_info_ptr )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/dig_activity.cpp",
      "calcWidgetRot",
      185);
    v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v22,
           (const char (*)[50])"[DIG]find searching_target_map_ fail. bundle_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  *(Vector3 *)(v3 + 64) = operator-(&target_info_ptr->pos, (const Vector3 *)(v3 + 96));
  *(_DWORD *)(v3 + 68) = 0;
  if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(rot, 12LL);
  }
  *rot = lookAt((const Vector3 *)(v3 + 64));
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/dig_activity.cpp",
    "calcWidgetRot",
    192);
  v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v22, (const char (*)[18])"[DIG]target pos: ");
  v11 = operator<<(v10, &target_info_ptr->pos);
  v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" source pos: ");
  v13 = operator<<(v12, (const Vector3 *)(v3 + 96));
  v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" dir: ");
  v15 = operator<<(v14, (const Vector3 *)(v3 + 64));
  v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" rot: ");
  operator<<(v16, rot);
  common::milog::MiLogStream::~MiLogStream(&v22);
  if ( *(_BYTE *)(((unsigned __int64)&rot->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rot + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rot->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&rot->z);
  }
  rot->z = 0.0;
  z = rot->z;
  if ( *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rot & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(rot);
  }
  rot->x = z;
  if ( rand_degree )
  {
    v18 = common::tools::RandomUtils::rand<int>(-rand_degree, rand_degree);
    if ( *(_BYTE *)(((unsigned __int64)&rot->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rot + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rot->y >> 3) + 0x7FFF8000) )
    {
      v18 = (_DWORD)rot + 4;
      __asan_report_load4();
    }
    rot->y = (float)v18 + rot->y;
  }
  result = 0LL;
LABEL_23:
  if ( v23 == (char *)v3 )
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

// Line 203: range 00000000165B8848-00000000165B8B66
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall DigActivity::findNearestTarget(const DigActivity *const this, Vector3 pos)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  __int64 result; // rax
  __m128i v7; // xmm0
  float select_distance; // [rsp+24h] [rbp-BCh]
  uint32_t target_bundle_id; // [rsp+28h] [rbp-B8h]
  float distance; // [rsp+2Ch] [rbp-B4h]
  std::map<unsigned int,DigActivity::SearchingTarget>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  std::map<unsigned int,DigActivity::SearchingTarget>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const std::map<unsigned int,DigActivity::SearchingTarget> *__for_range; // [rsp+40h] [rbp-A0h]
  const std::pair<unsigned int const,DigActivity::SearchingTarget> *v14; // [rsp+48h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,DigActivity::SearchingTarget> >::type *bundle_id; // [rsp+50h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,DigActivity::SearchingTarget> >::type *target_info; // [rsp+58h] [rbp-88h]
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-80h] BYREF
  char v18[96]; // [rsp+80h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 7 pos:202";
  *(_QWORD *)(v2 + 16) = DigActivity::findNearestTarget;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  *(Vector3 *)(v2 + 32) = pos;
  if ( std::map<unsigned int,DigActivity::SearchingTarget>::empty(&this->searching_target_map_) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dig_activity.cpp",
      "findNearestTarget",
      206);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v17,
           (const char (*)[38])"[DIG]searching_target_map_ is empty. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0LL;
  }
  else
  {
    v7 = (__m128i)0x7F7FFFFFu;
    select_distance = 3.4028235e38;
    target_bundle_id = 0;
    __for_range = &this->searching_target_map_;
    __for_begin._M_node = std::map<unsigned int,DigActivity::SearchingTarget>::begin(&this->searching_target_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,DigActivity::SearchingTarget>::end(&this->searching_target_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget>>::operator*(&__for_begin);
      bundle_id = std::get<0ul,unsigned int const,DigActivity::SearchingTarget>(v14);
      target_info = (std::tuple_element<1,const std::pair<unsigned int const,DigActivity::SearchingTarget> >::type *)std::get<1ul,unsigned int const,DigActivity::SearchingTarget>(v14);
      *(float *)v7.m128i_i32 = getDistance(&target_info->center, (const Vector3 *)(v2 + 32));
      distance = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
      v7 = (__m128i)LODWORD(select_distance);
      if ( select_distance > distance )
      {
        v7 = (__m128i)LODWORD(distance);
        select_distance = distance;
        if ( *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) )
        {
          *(double *)v7.m128i_i64 = __asan_report_load4();
        }
        target_bundle_id = *bundle_id;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget>>::operator++(&__for_begin);
    }
    result = target_bundle_id;
  }
  if ( v18 == (char *)v2 )
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

// Line 224: range 00000000165B8E46-00000000165B90E8
void __cdecl DigActivity::updateSearchingGadget(DigActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v4; // rdx
  PlayerWidgetComp *WidgetComp; // rax
  WidgetGadgetMgr *WidgetGadgetMgr; // r14
  uint32_t material_id; // [rsp+14h] [rbp-CCh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  std::function<ForeachPolicy(const WidgetGadgetData&)> p_func; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 19 material_id_vec:226";
  *(_QWORD *)(v1 + 16) = DigActivity::updateSearchingGadget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<DigActivity::SearchingGadgetInfo>::clear(&this->gadget_vec_);
  DigActivity::getDigWidgetMaterialIdVec((std::vector<unsigned int> *)(v1 + 32), this);
  __for_range = (std::vector<unsigned int> *)(v1 + 32);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 32))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 32))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    material_id = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WidgetComp = Player::getWidgetComp(this->player_);
    WidgetGadgetMgr = PlayerWidgetComp::getWidgetGadgetMgr(WidgetComp);
    std::function<ForeachPolicy ()(WidgetGadgetData const&)>::function<DigActivity::updateSearchingGadget(void)::{lambda(WidgetGadgetData const&)#1},void,void>(
      &p_func,
      (DigActivity::updateSearchingGadget::<lambda(const WidgetGadgetData&)>)this);
    WidgetGadgetMgr::foreachWidgetGadgetData(WidgetGadgetMgr, material_id, &p_func);
    std::function<ForeachPolicy ()(WidgetGadgetData const&)>::~function(&p_func);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  DigActivity::notifyDigMarkPoint(this);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
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
};

// Line 229: range 00000000165B8B68-00000000165B8E44
ForeachPolicy __cdecl DigActivity::updateSearchingGadget(void)::{lambda(WidgetGadgetData const&)#1}::operator()(
        const DigActivity::updateSearchingGadget::<lambda(const WidgetGadgetData&)> *const __closure,
        const WidgetGadgetData *data)
{
  DigActivity *this; // rsi
  uint32_t NearestTarget; // edx
  std::vector<DigActivity::SearchingGadgetInfo>::reference gadget_info; // [rsp+18h] [rbp-8h]

  if ( !std::__weak_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::expired(&data->gadget_wtr) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    gadget_info = std::vector<DigActivity::SearchingGadgetInfo>::emplace_back<>(&__closure->__this->gadget_vec_);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    if ( *(char *)(((unsigned __int64)&data->pos >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&data->pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)data + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&data->pos.z + 3) >> 3) + 0x7FFF8000) )
    {
      this = (DigActivity *)12;
      __asan_report_load_n(&data->pos, 12LL);
    }
    NearestTarget = DigActivity::findNearestTarget(this, data->pos);
    if ( *(_BYTE *)(((unsigned __int64)gadget_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)gadget_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(gadget_info);
    }
    gadget_info->bundle_id = NearestTarget;
    if ( (((unsigned __int8)gadget_info + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_info->pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&gadget_info->pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&gadget_info->pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)gadget_info + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&gadget_info->pos.z + 3) >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store_n(&gadget_info->pos, 12LL);
    }
    *(_QWORD *)&gadget_info->pos.x = *(_QWORD *)&data->pos.x;
    gadget_info->pos.z = data->pos.z;
    if ( *(char *)(((unsigned __int64)&gadget_info->rot >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&gadget_info->rot.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)gadget_info + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&gadget_info->rot.z + 3) >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store_n(&gadget_info->rot, 12LL);
    }
    if ( (((unsigned __int8)data + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&data->rot >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&data->rot >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&data->rot.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)data + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&data->rot.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(&data->rot, 12LL);
    }
    *(_QWORD *)&gadget_info->rot.x = *(_QWORD *)&data->rot.x;
    gadget_info->rot.z = data->rot.z;
    std::weak_ptr<Gadget>::operator=(&gadget_info->gadget_wtr, &data->gadget_wtr);
  }
  return 0;
};

// Line 246: range 00000000165B914E-00000000165B920A
std::vector<unsigned int> *__cdecl DigActivity::getDigWidgetMaterialIdVec(
        std::vector<unsigned int> *retstr,
        DigActivity *const this)
{
  PlayerWidgetComp *WidgetComp; // rbx
  std::function<ForeachPolicy(WidgetDigScanner&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::vector<unsigned int>::vector(retstr);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WidgetComp = Player::getWidgetComp(this->player_);
  std::function<ForeachPolicy ()(WidgetDigScanner &)>::function<DigActivity::getDigWidgetMaterialIdVec(void)::{lambda(WidgetDigScanner &)#1},void,void>(
    &p_func,
    (DigActivity::getDigWidgetMaterialIdVec::<lambda(WidgetDigScanner&)>)retstr);
  PlayerWidgetComp::foreachWidget<WidgetDigScanner>(WidgetComp, &p_func);
  std::function<ForeachPolicy ()(WidgetDigScanner &)>::~function(&p_func);
  return retstr;
};

// Line 249: range 00000000165B90EA-00000000165B914C
ForeachPolicy __cdecl DigActivity::getDigWidgetMaterialIdVec(void)::{lambda(WidgetDigScanner &)#1}::operator()(
        const DigActivity::getDigWidgetMaterialIdVec::<lambda(WidgetDigScanner&)> *const __closure,
        WidgetDigScanner *widget)
{
  std::vector<unsigned int> *material_id_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  material_id_vec = __closure->__material_id_vec;
  __x[0] = WidgetBase::getMaterialId(widget);
  std::vector<unsigned int>::push_back(material_id_vec, __x);
  return 0;
};

// Line 258: range 00000000165B920C-00000000165B9464
void __cdecl DigActivity::clearSearchingGadget(DigActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v4; // rdx
  PlayerWidgetComp *WidgetComp; // rax
  WidgetGadgetMgr *WidgetGadgetMgr; // rax
  uint32_t material_id; // [rsp+14h] [rbp-9Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 19 material_id_vec:260";
  *(_QWORD *)(v1 + 16) = DigActivity::clearSearchingGadget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<DigActivity::SearchingGadgetInfo>::clear(&this->gadget_vec_);
  DigActivity::getDigWidgetMaterialIdVec((std::vector<unsigned int> *)(v1 + 32), this);
  __for_range = (std::vector<unsigned int> *)(v1 + 32);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 32))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 32))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    material_id = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WidgetComp = Player::getWidgetComp(this->player_);
    WidgetGadgetMgr = PlayerWidgetComp::getWidgetGadgetMgr(WidgetComp);
    WidgetGadgetMgr::destroyGadgetByMaterialId(WidgetGadgetMgr, material_id);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  DigActivity::notifyDigMarkPoint(this);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
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

// Line 269: range 00000000165B9466-00000000165B9611
void __cdecl DigActivity::onGroupBundleFinish(DigActivity *const this, const GroupBundleFinishEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 bundle_id:270 64 8 8 iter:271";
  *(_QWORD *)(v2 + 16) = DigActivity::onGroupBundleFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&event->bundle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->bundle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = event->bundle_id;
  *(std::map<unsigned int,DigActivity::SearchingTarget>::iterator *)(v2 + 64) = std::map<unsigned int,DigActivity::SearchingTarget>::find(
                                                                                  &this->searching_target_map_,
                                                                                  (const std::map<unsigned int,DigActivity::SearchingTarget>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,DigActivity::SearchingTarget>::end(&this->searching_target_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,DigActivity::SearchingTarget> >::_Self *)(v2 + 64),
          &__y) )
  {
    std::map<unsigned int,DigActivity::SearchingTarget>::erase[abi:cxx11](
      &this->searching_target_map_,
      *(std::map<unsigned int,DigActivity::SearchingTarget>::iterator *)(v2 + 64));
    DigActivity::clearSearchingGadget(this);
  }
  if ( v6 == (char *)v2 )
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

// Line 281: range 00000000165B9612-00000000165B9634
void __cdecl DigActivity::setStageOpen(DigActivity *const this, uint32_t stage_id)
{
  BaseActivity::notifyClientData(this, 0);
};

// Line 286: range 00000000165B9636-00000000165B9B46
__int64 __fastcall DigActivity::isStageFinished(DigActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v9; // rdx
  uint32_t v10; // edx
  common::milog::MiLogStream *v11; // rax
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const ActivityDigExcelConfigMgr *activity_dig_config_mgr; // [rsp+20h] [rbp-D0h]
  const std::unordered_set<unsigned int> *group_link_set_ptr; // [rsp+28h] [rbp-C8h]
  PlayerGroupLinkComp *group_link_comp; // [rsp+30h] [rbp-C0h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 group_bundle_id:302 64 4 12 stage_id:285";
  *(_QWORD *)(v2 + 16) = DigActivity::isStageFinished;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  activity_dig_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_dig_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v18);
  group_link_set_ptr = ActivityDigExcelConfigMgr::getGroupBundleIdSet(activity_dig_config_mgr, *(_DWORD *)(v2 + 64));
  if ( !group_link_set_ptr )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/dig_activity.cpp",
      "isStageFinished",
      292);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v19,
           (const char (*)[37])"getGroupBundleIdSet fail. stage_id: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0LL;
    goto LABEL_24;
  }
  if ( std::unordered_set<unsigned int>::empty(group_link_set_ptr) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/dig_activity.cpp",
      "isStageFinished",
      298);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v19,
           (const char (*)[33])"group_link_set empty. stage_id: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  group_link_comp = Player::getGroupLinkComp(this->player_);
  __for_range = group_link_set_ptr;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(group_link_set_ptr)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(group_link_set_ptr)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v9 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v9;
    v10 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !PlayerGroupLinkComp::isGroupBundleFinish(group_link_comp, this->activity_id_, v10) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/dig_activity.cpp",
        "isStageFinished",
        306);
      v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v19,
              (const char (*)[42])"[DIG]group bundle not finish. bundle_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0LL;
      goto LABEL_24;
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  result = 1LL;
LABEL_24:
  if ( v20 == (char *)v2 )
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

// Line 314: range 00000000165B9B48-00000000165B9D6C
void __cdecl DigActivity::notifyDigMarkPoint(DigActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::DigMarkPoint *v4; // rax
  std::vector<DigActivity::SearchingGadgetInfo>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<DigActivity::SearchingGadgetInfo>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<DigActivity::SearchingGadgetInfo> *__for_range; // [rsp+20h] [rbp-B0h]
  const DigActivity::SearchingGadgetInfo *gadget_info; // [rsp+28h] [rbp-A8h]
  char v9[160]; // [rsp+30h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:315";
  *(_QWORD *)(v1 + 16) = DigActivity::notifyDigMarkPoint;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::DigActivityMarkPointChangeNotify::DigActivityMarkPointChangeNotify((proto::DigActivityMarkPointChangeNotify *const)(v1 + 48));
  __for_range = &this->gadget_vec_;
  __for_begin._M_current = std::vector<DigActivity::SearchingGadgetInfo>::begin(&this->gadget_vec_)._M_current;
  __for_end._M_current = std::vector<DigActivity::SearchingGadgetInfo>::end(&this->gadget_vec_)._M_current;
  while ( __gnu_cxx::operator!=<DigActivity::SearchingGadgetInfo *,std::vector<DigActivity::SearchingGadgetInfo>>(
            &__for_begin,
            &__for_end) )
  {
    gadget_info = __gnu_cxx::__normal_iterator<DigActivity::SearchingGadgetInfo *,std::vector<DigActivity::SearchingGadgetInfo>>::operator*(&__for_begin);
    if ( !std::__weak_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::expired(&gadget_info->gadget_wtr) )
    {
      v4 = proto::DigActivityMarkPointChangeNotify::add_dig_mark_point_list((proto::DigActivityMarkPointChangeNotify *const)(v1 + 48));
      DigActivity::SearchingGadgetInfo::toClient(gadget_info, v4);
    }
    __gnu_cxx::__normal_iterator<DigActivity::SearchingGadgetInfo *,std::vector<DigActivity::SearchingGadgetInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::DigActivityMarkPointChangeNotify::~DigActivityMarkPointChangeNotify((proto::DigActivityMarkPointChangeNotify *const)(v1 + 48));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
