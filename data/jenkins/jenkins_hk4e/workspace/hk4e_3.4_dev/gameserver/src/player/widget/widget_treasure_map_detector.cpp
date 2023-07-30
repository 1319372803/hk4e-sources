// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_treasure_map_detector.cpp

// Line 31: range 000000001621EA3C-000000001621EAFE
int32_t __cdecl WidgetTreasureMapDetector::init(
        WidgetTreasureMapDetector *const this,
        data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  bool v2; // bl
  std::shared_ptr<data::ConfigBaseWidgetToy> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  std::dynamic_pointer_cast<data::ConfigWidgetToyTreasureMapDetector,data::ConfigBaseWidgetToy>(&__r);
  v2 = std::operator==<data::ConfigWidgetToyTreasureMapDetector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyTreasureMapDetector> *)&__r);
  std::shared_ptr<data::ConfigWidgetToyTreasureMapDetector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyTreasureMapDetector> *const)&__r);
  if ( !v2 )
    return 0;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/widget_treasure_map_detector.cpp",
    "init",
    34);
  common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
    &v5,
    (const char (*)[62])"convert to ConfigWidgetToyTreasureMapDetector pointer failed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 5;
};

// Line 41: range 000000001621EB00-000000001621EB26
void __cdecl WidgetTreasureMapDetector::onLogout(WidgetTreasureMapDetector *const this)
{
  WidgetBase::onLogout(this);
  WidgetTreasureMapDetector::killTreasureDetectorEntity(this);
};

// Line 47: range 000000001621EB28-000000001621EC97
void __cdecl WidgetTreasureMapDetector::onPostQuickUse(
        const WidgetTreasureMapDetector *const this,
        const std::string *trans_no)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 activity_ptr:49";
  *(_QWORD *)(v2 + 16) = WidgetTreasureMapDetector::onPostQuickUse;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  WidgetBase::onPostQuickUse(this, trans_no);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getActivityComp(this->player_);
  PlayerActivityComp::findOpenningActivity<TreasureMapActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator!=<TreasureMapActivity>(0LL, (const std::shared_ptr<TreasureMapActivity> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    TreasureMapActivity::setDetectTransactionNo(v5, trans_no);
  }
  std::shared_ptr<TreasureMapActivity>::~shared_ptr((std::shared_ptr<TreasureMapActivity> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000001621EC98-000000001621F0F7
int32_t __cdecl WidgetTreasureMapDetector::onClearActionPanel(WidgetTreasureMapDetector *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  Scene *v10; // r14
  uint32_t Uid; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 13 config_ptr:58 64 16 13 entity_ptr:66 96 16 12 scene_ptr:71";
  *(_QWORD *)(v1 + 16) = WidgetTreasureMapDetector::onClearActionPanel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  WidgetTreasureMapDetector::getConfig((const WidgetTreasureMapDetector *const)(v1 + 32));
  if ( std::operator==<data::ConfigWidgetToyTreasureMapDetector const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetToyTreasureMapDetector> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_treasure_map_detector.cpp",
      "onClearActionPanel",
      61);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v14,
           (const char (*)[29])"getConfig fail, material_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->material_id_);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = 5;
  }
  else
  {
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v1 + 64));
    if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v1 + 64)) )
    {
      v7 = 0;
    }
    else
    {
      std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      Entity::getScene((const Entity *const)(v1 + 96));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/widget_treasure_map_detector.cpp",
          "onClearActionPanel",
          74);
        v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v14, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" getScene fails");
        common::milog::MiLogStream::~MiLogStream(&v14);
        v7 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        Scene::delPlayTeamEntity(v10, Uid, (EntityPtr *)(v1 + 64));
        std::__weak_ptr<Entity,(__gnu_cxx::_Lock_policy)2>::reset(&this->treasure_detector_entity_wtr_);
        if ( common::tools::MiTimer::isActive(&this->treasure_detector_timer_) )
          common::tools::MiTimer::cancel(&this->treasure_detector_timer_);
        v7 = 0;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 96));
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 64));
  }
  std::shared_ptr<data::ConfigWidgetToyTreasureMapDetector const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetToyTreasureMapDetector> *const)(v1 + 32));
  result = v7;
  if ( v15 == (char *)v1 )
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
  return result;
};

// Line 89: range 000000001621F0F8-000000001621FC8F
int32_t __cdecl WidgetTreasureMapDetector::onQuickUse(
        WidgetTreasureMapDetector *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int32_t v9; // r14d
  std::__shared_ptr_access<const data::ConfigWidgetToyTreasureMapDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t ItemComp; // eax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdi
  uint32_t v14; // ecx
  std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // rsi
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  PlayerUnixTimer *p_treasure_detector_timer; // rdi
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  PlayerWidgetComp *widget_comp; // rcx
  bool v22; // dl
  int32_t result; // eax
  bool v24; // [rsp+10h] [rbp-1C0h]
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // [rsp+10h] [rbp-1C0h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-195h] BYREF
  unsigned int __l[5]; // [rsp+3Ch] [rbp-194h] BYREF
  std::shared_ptr<PlayTeamEntity> __r; // [rsp+50h] [rbp-180h] BYREF
  std::vector<unsigned int> entity_id_vec; // [rsp+60h] [rbp-170h] BYREF
  common::milog::MiLogStream v31; // [rsp+80h] [rbp-150h] BYREF
  char v32[304]; // [rsp+A0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 16 13 config_ptr:90 64 16 13 scene_ptr:105 96 16 14 avatar_ptr:115 128 16 16 activity_ptr:1"
                        "21 160 16 14 entity_ptr:141 192 32 10 notify:133";
  *(_QWORD *)(v3 + 16) = WidgetTreasureMapDetector::onQuickUse;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862727] = -202116109;
  WidgetTreasureMapDetector::getConfig((const WidgetTreasureMapDetector *const)(v3 + 32));
  if ( std::operator==<data::ConfigWidgetToyTreasureMapDetector const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetToyTreasureMapDetector> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_treasure_map_detector.cpp",
      "onQuickUse",
      93);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v31,
           (const char (*)[29])"getConfig fail, material_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v9 = 5;
  }
  else
  {
    *(_QWORD *)&__l[3] = std::__shared_ptr_access<data::ConfigWidgetToyTreasureMapDetector const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const data::ConfigWidgetToyTreasureMapDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v10 = std::__shared_ptr_access<data::ConfigWidgetToyTreasureMapDetector const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyTreasureMapDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v10->material_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->material_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<const data::ConfigWidgetToyTreasureMapDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->material_id);
    }
    __l[1] = v10->material_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = (unsigned int)Player::getItemComp(this->player_);
    PlayerItemComp::findMaterial((PlayerItemComp *const)(v3 + 160), ItemComp);
    v24 = std::operator==<Material>(0LL, (const std::shared_ptr<Material> *)(v3 + 160));
    std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v3 + 160));
    if ( v24 )
    {
      v9 = 647;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/widget_treasure_map_detector.cpp",
          "onQuickUse",
          108);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v31,
          (const char (*)[27])"getCurScene return nullptr");
        common::milog::MiLogStream::~MiLogStream(&v31);
        v9 = 103;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        SceneComp = Player::getSceneComp(this->player_);
        if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
        {
          v9 = 512;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::getAvatarComp(this->player_);
          PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 96));
          if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 96)) )
          {
            v9 = 103;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::getActivityComp(this->player_);
            PlayerActivityComp::findOpenningActivity<TreasureMapActivity>((PlayerActivityComp *const)(v3 + 128));
            if ( std::operator==<TreasureMapActivity>(0LL, (const std::shared_ptr<TreasureMapActivity> *)(v3 + 128)) )
            {
              v9 = 860;
            }
            else
            {
              WidgetTreasureMapDetector::killTreasureDetectorEntity(this);
              __l[2] = 0;
              proto::TreasureMapDetectorDataNotify::TreasureMapDetectorDataNotify((proto::TreasureMapDetectorDataNotify *const)(v3 + 192));
              v13 = std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 80LL) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 80LL) >> 3) + 0x7FFF8000) <= 3 )
              {
                v13 = (std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)(*(_QWORD *)&__l[3] + 80LL);
                __asan_report_load4(*(_QWORD *)&__l[3] + 80LL);
              }
              v14 = *(_DWORD *)(*(_QWORD *)&__l[3] + 80LL);
              if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 76LL) >> 3) + 0x7FFF8000) != 0
                && (char)(((LOBYTE(__l[3]) + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 76LL) >> 3)
                                                                       + 0x7FFF8000) )
              {
                v13 = (std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)(*(_QWORD *)&__l[3] + 76LL);
                __asan_report_load4(*(_QWORD *)&__l[3] + 76LL);
              }
              __l[2] = TreasureMapActivity::detectTreasureSpot(
                         v13,
                         (proto::TreasureMapDetectorDataNotify *)(v3 + 192),
                         *(_DWORD *)(*(_QWORD *)&__l[3] + 76LL),
                         v14);
              if ( !__l[2] )
              {
                v15 = std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                TreasureMapActivity::worldBroadcastProto(v15, (const google::protobuf::Message *)(v3 + 192));
                v16 = (Player *)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 72LL) >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 72LL) >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(*(_QWORD *)&__l[3] + 72LL);
                }
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                Scene::addPlayTeamEntity((Scene *const)&__r, v16, (uint32_t)this->player_);
                std::shared_ptr<Entity>::shared_ptr<PlayTeamEntity,void>(
                  (std::shared_ptr<Entity> *const)(v3 + 160),
                  &__r);
                std::shared_ptr<PlayTeamEntity>::~shared_ptr(&__r);
                if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v3 + 160), 0LL) )
                {
                  std::weak_ptr<Entity>::operator=<Entity>(
                    &this->treasure_detector_entity_wtr_,
                    (const std::shared_ptr<Entity> *)(v3 + 160));
                  v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                  v17 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  __l[0] = Entity::getEntityId(v17);
                  std::allocator<unsigned int>::allocator(&__a);
                  std::vector<unsigned int>::vector(
                    &entity_id_vec,
                    (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
                    &__a);
                  Scene::notifyPlayTeamEntity(v25, &entity_id_vec);
                  std::vector<unsigned int>::~vector(&entity_id_vec);
                  std::allocator<unsigned int>::~allocator(&__a);
                  if ( common::tools::MiTimer::isActive(&this->treasure_detector_timer_) )
                    common::tools::MiTimer::cancel(&this->treasure_detector_timer_);
                  p_treasure_detector_timer = &this->treasure_detector_timer_;
                  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 84LL) >> 3) + 0x7FFF8000) != 0
                    && (char)(((LOBYTE(__l[3]) + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3]
                                                                                               + 84LL) >> 3)
                                                                           + 0x7FFF8000) )
                  {
                    p_treasure_detector_timer = (PlayerUnixTimer *)(*(_QWORD *)&__l[3] + 84LL);
                    __asan_report_load4(*(_QWORD *)&__l[3] + 84LL);
                  }
                  if ( PlayerUnixTimer::startS(
                         p_treasure_detector_timer,
                         *(_DWORD *)(*(_QWORD *)&__l[3] + 84LL),
                         0,
                         "./src/player/widget/widget_treasure_map_detector.cpp",
                         "onQuickUse",
                         152) )
                  {
                    common::milog::MiLogStream::create(
                      &v31,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/widget/widget_treasure_map_detector.cpp",
                      "onQuickUse",
                      154);
                    v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                            &v31,
                            (const char (*)[17])"[TREASURE] uid: ");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    __l[0] = Player::getUid(this->player_);
                    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, __l);
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v20,
                      (const char (*)[39])" treasure_detector_timer_ startS fails");
                    common::milog::MiLogStream::~MiLogStream(&v31);
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v31,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/widget/widget_treasure_map_detector.cpp",
                    "onQuickUse",
                    162);
                  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    &v31,
                    (const char (*)[24])"addPlayTeamEntity fails");
                  common::milog::MiLogStream::~MiLogStream(&v31);
                }
                std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 160));
              }
              proto::TreasureMapDetectorDataNotify::~TreasureMapDetectorDataNotify((proto::TreasureMapDetectorDataNotify *const)(v3 + 192));
              if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->widget_comp_);
              widget_comp = this->widget_comp_;
              v22 = __l[2] == 0;
              if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 32LL) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 32LL) >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(*(_QWORD *)&__l[3] + 32LL);
              }
              PlayerWidgetComp::updateWidgetGroupCoolDown(widget_comp, *(_DWORD *)(*(_QWORD *)&__l[3] + 32LL), v22);
              v9 = __l[2];
            }
            std::shared_ptr<TreasureMapActivity>::~shared_ptr((std::shared_ptr<TreasureMapActivity> *const)(v3 + 128));
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
    }
  }
  std::shared_ptr<data::ConfigWidgetToyTreasureMapDetector const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetToyTreasureMapDetector> *const)(v3 + 32));
  result = v9;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 173: range 000000001621FC90-000000001621FDEF
std::shared_ptr<const data::ConfigWidgetToyTreasureMapDetector> __cdecl WidgetTreasureMapDetector::getConfig(
        const WidgetTreasureMapDetector *const this)
{
  const WidgetTreasureMapDetector *v1; // rsi
  common::milog::MiLogStream *v2; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  const WidgetJsonNewConfig *WidgetNewConfig; // rsi
  std::shared_ptr<const data::ConfigWidgetToyTreasureMapDetector> result; // rax
  const WidgetTreasureMapDetector *thisa; // [rsp+0h] [rbp-50h]
  std::shared_ptr<Config> v7; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  thisa = v1;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_treasure_map_detector.cpp",
    "getConfig",
    174);
  v2 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v8, (const char (*)[13])"material_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &v1->material_id_);
  common::milog::MiLogStream::~MiLogStream(&v8);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
  WidgetNewConfig = JsonConfigMgr::getWidgetNewConfig(&v3->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->material_id_);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, WidgetNewConfig);
  WidgetJsonNewConfig::findWidgetConfigById<data::ConfigWidgetToyTreasureMapDetector const>(
    (const WidgetJsonNewConfig *const)this,
    (uint32_t)WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  result._M_ptr = (std::__shared_ptr<const data::ConfigWidgetToyTreasureMapDetector,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 179: range 000000001621FDF0-0000000016220124
void __cdecl WidgetTreasureMapDetector::killTreasureDetectorEntity(WidgetTreasureMapDetector *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  Scene *v6; // r14
  uint32_t Uid; // eax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 entity_ptr:180 64 16 13 scene_ptr:185";
  *(_QWORD *)(v1 + 16) = WidgetTreasureMapDetector::killTreasureDetectorEntity;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v1 + 32));
  if ( !std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v1 + 32)) )
  {
    std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Entity::getScene((const Entity *const)(v1 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_treasure_map_detector.cpp",
        "killTreasureDetectorEntity",
        188);
      v4 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v9, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" getScene fails");
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    else
    {
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      Scene::delPlayTeamEntity(v6, Uid, (EntityPtr *)(v1 + 32));
      std::__weak_ptr<Entity,(__gnu_cxx::_Lock_policy)2>::reset(&this->treasure_detector_entity_wtr_);
      if ( common::tools::MiTimer::isActive(&this->treasure_detector_timer_) )
        common::tools::MiTimer::cancel(&this->treasure_detector_timer_);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
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

// Line 201: range 0000000016220126-0000000016220144
void __cdecl WidgetTreasureMapDetector::onTreasureDetectorTimer(WidgetTreasureMapDetector *const this, uint64_t now_ms)
{
  WidgetTreasureMapDetector::killTreasureDetectorEntity(this);
};
