// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_camera.cpp

// Line 24: range 0000000016200538-00000000162006C7
int32_t __cdecl WidgetCamera::init(WidgetCamera *const this, data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 20 camera_config_ptr:25";
  *(_QWORD *)(v2 + 16) = WidgetCamera::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigWidgetToyCamera,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  if ( std::operator!=<data::ConfigWidgetToyCamera>(
         (const std::shared_ptr<data::ConfigWidgetToyCamera> *)(v2 + 32),
         0LL) )
  {
    v5 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_camera.cpp",
      "init",
      30);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v7,
      (const char (*)[42])"convert ConfigWidgetToyCamera ptr failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = 5;
  }
  std::shared_ptr<data::ConfigWidgetToyCamera>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyCamera> *const)(v2 + 32));
  result = v5;
  if ( v8 == (char *)v2 )
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

// Line 36: range 00000000162006C8-0000000016201279
int32_t __cdecl WidgetCamera::onQuickUse(
        WidgetCamera *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  std::__shared_ptr_access<const data::ConfigWidgetToyCamera,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerWidgetComp *WidgetComp; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r15
  const proto::WidgetCameraInfo *v18; // rax
  google::protobuf::uint32 v19; // eax
  Entity *v20; // rax
  WidgetCameraExcelConfigMgr *p_widget_camera_config_mgr; // r14
  std::__shared_ptr_access<const data::ConfigWidgetToyCamera,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  char *v23; // rsi
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  char v27; // cl
  std::__shared_ptr_access<const data::ConfigWidgetToyCamera,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  int32_t camera_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  char v31; // cl
  __int64 v32; // rax
  char v33; // dl
  bool v34; // dl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  char v36; // cl
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rdx
  char v39; // cl
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rcx
  Group *v56; // rax
  PlayerWidgetComp *v57; // rax
  int32_t result; // eax
  uint32_t cd_group_id; // [rsp+20h] [rbp-120h]
  int32_t ret; // [rsp+24h] [rbp-11Ch]
  uint32_t entity_config_id; // [rsp+28h] [rbp-118h]
  uint32_t scan_id; // [rsp+2Ch] [rbp-114h]
  common::milog::MiLogStream v64; // [rsp+30h] [rbp-110h] BYREF
  char v65[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 16 13 config_ptr:42 64 16 12 scene_ptr:59 96 16 13 entity_ptr:65 128 16 10 evt_ptr:71 160 1"
                        "6 12 group_ptr:85";
  *(_QWORD *)(v3 + 16) = WidgetCamera::onQuickUse;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( proto::QuickUseWidgetReq::param_case(req) == kCameraInfo )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 160));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    WidgetJsonNewConfig::findWidgetConfigById<data::ConfigWidgetToyCamera>(
      (const WidgetJsonNewConfig *const)(v3 + 32),
      WidgetNewConfig);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
    if ( std::operator==<data::ConfigWidgetToyCamera const>(
           0LL,
           (const std::shared_ptr<const data::ConfigWidgetToyCamera> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v64,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_camera.cpp",
        "onQuickUse",
        45);
      v9 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
             &v64,
             (const char (*)[70])"findWidgetConfigById<ConfigWidgetToyCamera> fail, widget_material_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->material_id_);
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v64);
      v6 = 5;
    }
    else
    {
      v12 = std::__shared_ptr_access<data::ConfigWidgetToyCamera const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyCamera,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v12->cd_group >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->cd_group >> 3) + 0x7FFF8000) <= 3 )
      {
        v12 = (std::__shared_ptr_access<const data::ConfigWidgetToyCamera,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->cd_group);
      }
      cd_group_id = v12->cd_group;
      if ( !cd_group_id )
        goto LABEL_70;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WidgetComp = Player::getWidgetComp(this->player_);
      ret = PlayerWidgetComp::checkWidgetGroupCoolDown(WidgetComp, cd_group_id);
      if ( ret )
      {
        v6 = ret;
      }
      else
      {
LABEL_70:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
        {
          v6 = -1;
        }
        else
        {
          v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v15 = v14;
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v14);
          v16 = (unsigned __int64)(v15->_vptr_DescribalBase + 15);
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8(v15->_vptr_DescribalBase + 15);
          v17 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v16;
          v18 = proto::QuickUseWidgetReq::camera_info(req);
          v19 = proto::WidgetCameraInfo::target_entity_id(v18);
          v17(v3 + 96, v15, v19);
          if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v3 + 96)) )
          {
            v6 = 504;
          }
          else
          {
            EventUtil::createEvent((data::EventType)(v3 + 128));
            if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v3 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v64,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/widget/widget_camera.cpp",
                "onQuickUse",
                74);
              common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v64,
                (const char (*)[17])"createEvent fail");
              common::milog::MiLogStream::~MiLogStream(&v64);
              v6 = 1;
            }
            else
            {
              v20 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              entity_config_id = Entity::getIdForEntityLog(v20);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v3 + 160));
              p_widget_camera_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->design_config.txt_config_mgr.widget_camera_config_mgr;
              v22 = std::__shared_ptr_access<data::ConfigWidgetToyCamera const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyCamera,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
              if ( *(_BYTE *)(((unsigned __int64)&v22->camera_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v22->camera_id >> 3) + 0x7FFF8000) <= 3 )
              {
                v22 = (std::__shared_ptr_access<const data::ConfigWidgetToyCamera,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v22->camera_id);
              }
              scan_id = WidgetCameraExcelConfigMgr::findCameraScanId(
                          p_widget_camera_config_mgr,
                          v22->camera_id,
                          entity_config_id);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
              if ( scan_id )
              {
                std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                Entity::getGroup((const Entity *const)(v3 + 160));
                v23 = (char *)(v3 + 160);
                if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 160)) )
                {
                  v6 = 513;
                }
                else
                {
                  v24 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  EntityId = Entity::getEntityId(v24);
                  v26 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  v27 = *(_BYTE *)(((unsigned __int64)&v26->source_entity_id >> 3) + 0x7FFF8000);
                  if ( v27 != 0 && (char)((((_BYTE)v26 + 4) & 7) + 3) >= v27 )
                  {
                    LOBYTE(v23) = v27 != 0;
                    __asan_report_store4(&v26->source_entity_id, v23, (_BYTE)v26);
                  }
                  v26->source_entity_id = EntityId;
                  v28 = std::__shared_ptr_access<data::ConfigWidgetToyCamera const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyCamera,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
                  if ( *(_BYTE *)(((unsigned __int64)&v28->camera_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v28->camera_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v28 = (std::__shared_ptr_access<const data::ConfigWidgetToyCamera,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v28->camera_id);
                  }
                  camera_id = v28->camera_id;
                  v30 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  v31 = *(_BYTE *)(((unsigned __int64)&v30->param1 >> 3) + 0x7FFF8000);
                  if ( v31 != 0 && (char)((((_BYTE)v30 + 44) & 7) + 3) >= v31 )
                  {
                    LOBYTE(v23) = v31 != 0;
                    __asan_report_store4(&v30->param1, v23, (_BYTE)v30);
                  }
                  v30->param1 = camera_id;
                  v32 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  v33 = *(_BYTE *)(((unsigned __int64)(v32 + 48) >> 3) + 0x7FFF8000);
                  LOBYTE(v23) = v33 != 0;
                  v34 = v33 != 0 && v33 <= 3;
                  if ( v34 )
                    v32 = __asan_report_store4(v32 + 48, v23, v34);
                  *(_DWORD *)(v32 + 48) = scan_id;
                  v35 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  v36 = *(_BYTE *)(((unsigned __int64)&v35->param3 >> 3) + 0x7FFF8000);
                  if ( v36 != 0 && (char)((((_BYTE)v35 + 52) & 7) + 3) >= v36 )
                  {
                    LOBYTE(v23) = v36 != 0;
                    __asan_report_store4(&v35->param3, v23, (_BYTE)v35);
                  }
                  v35->param3 = entity_config_id;
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  Uid = Player::getUid(this->player_);
                  v38 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  v39 = *(_BYTE *)(((unsigned __int64)&v38->uid >> 3) + 0x7FFF8000);
                  if ( v39 != 0 && (char)((((_BYTE)v38 + 60) & 7) + 3) >= v39 )
                  {
                    LOBYTE(v23) = v39 != 0;
                    __asan_report_store4(&v38->uid, v23, (_BYTE)v38);
                  }
                  v38->uid = Uid;
                  common::milog::MiLogStream::create(
                    &v64,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/widget/widget_camera.cpp",
                    "onQuickUse",
                    97);
                  v40 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          &v64,
                          (const char (*)[49])"notify EVENT_USE_WIDGET_TOY_FOX_CAMERA to group:");
                  v41 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  v42 = operator<<(v40, v41);
                  v43 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                          v42,
                          (const char (*)[19])" source_entity_id:");
                  v44 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v43,
                          &v44->source_entity_id);
                  v46 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v45,
                          (const char (*)[12])" camera_id:");
                  v47 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  v48 = common::milog::MiLogStream::operator<<<int,(int *)0>(v46, &v47->param1);
                  v49 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v48,
                          (const char (*)[10])" scan_id:");
                  v50 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  v51 = common::milog::MiLogStream::operator<<<int,(int *)0>(v49, &v50->param2);
                  v52 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                          v51,
                          (const char (*)[19])" entity_config_id:");
                  v53 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  v54 = common::milog::MiLogStream::operator<<<int,(int *)0>(v52, &v53->param3);
                  v55 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v54,
                          (const char (*)[9])" player:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  operator<<(v55, this->player_);
                  common::milog::MiLogStream::~MiLogStream(&v64);
                  v56 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  Group::handleEvent(v56, (EventPtr *)(v3 + 128));
                  if ( cd_group_id )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    v57 = Player::getWidgetComp(this->player_);
                    PlayerWidgetComp::updateWidgetGroupCoolDown(v57, cd_group_id, 1);
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&this->material_id_);
                  }
                  proto::QuickUseWidgetRsp::set_material_id(rsp_0, this->material_id_);
                  v6 = 0;
                }
                std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 160));
              }
              else
              {
                v6 = 1586;
              }
            }
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 128));
          }
          std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 96));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
      }
    }
    std::shared_ptr<data::ConfigWidgetToyCamera const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetToyCamera> *const)(v3 + 32));
  }
  else
  {
    v6 = 1585;
  }
  result = v6;
  if ( v65 == (char *)v3 )
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
