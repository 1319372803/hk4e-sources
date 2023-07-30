// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/base_gallery.cpp

// Line 29: range 0000000017FB1152-0000000017FB14EA
void __cdecl BaseGallery::BaseGallery(BaseGallery *const this, Scene *scene, uint32_t gallery_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  bool v7; // dl
  __int64 v8; // rsi
  bool v9; // dl
  __int64 v10; // rsi
  bool v11; // dl

  std::enable_shared_from_this<BaseGallery>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseGallery>);
  v3 = (int (**)(...))(&`vtable for'BaseGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_BaseGallery = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->scene_, scene);
  this->scene_ = scene;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id_, scene, (_BYTE)this + 32);
  }
  this->gallery_id_ = gallery_id;
  v4 = ((_BYTE)this + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_single_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_single_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_single_, v4, v5);
  this->is_single_ = 0;
  std::shared_ptr<ExhibitionTemporaryData>::shared_ptr(&this->exhibition_temporary_data_ptr_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_, 0LL, (_BYTE)this + 56);
  }
  this->stage_ = NONE_2;
  std::string::basic_string(&this->transaction_);
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->end_time_, 0LL, (_BYTE)this + 96);
  }
  this->end_time_ = 0;
  v6 = (((_BYTE)this + 100) & 7u) + 3;
  v7 = *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->prepare_end_time_, v6, v7);
  this->prepare_end_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time_, v6, (_BYTE)this + 104);
  }
  this->start_time_ = 0;
  v8 = (((_BYTE)this + 108) & 7u) + 3;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_gallery_timeout_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_gallery_timeout_ >> 3)
                                                         + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->is_gallery_timeout_, v8, v9);
  this->is_gallery_timeout_ = 0;
  std::shared_ptr<SceneTimer>::shared_ptr(&this->gallery_timer_ptr_);
  std::shared_ptr<SceneTimer>::shared_ptr(&this->gallery_prestart_ptr_);
  std::map<unsigned int,proto::OnlinePlayerInfo>::map(&this->player_info_map_);
  std::map<std::string,std::shared_ptr<GalleryProgress>>::map(&this->gallery_progress_map_);
  std::set<unsigned int>::set(&this->player_uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revive_point_group_id_, v8, (_BYTE)this + 32);
  }
  this->revive_point_group_id_ = 0;
  v10 = (((_BYTE)this + 36) & 7u) + 3;
  v11 = *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id_ >> 3)
                                                         + 0x7FFF8000);
  if ( v11 )
    __asan_report_store4(&this->revive_point_config_id_, v10, v11);
  this->revive_point_config_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_source_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_source_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_source_, v10, (_BYTE)this + 40);
  }
  this->start_source_ = GALLERY_START_BY_NONE;
};

// Line 36: range 0000000017FB15CA-0000000017FB1F6A
int32_t __cdecl BaseGallery::init(BaseGallery *const this, const std::set<unsigned int> *uid_set)
{
  std::map<unsigned int,proto::OnlinePlayerInfo> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  std::vector<unsigned int> *gallery_id; // rsi
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // r13
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v15; // rdx
  common::milog::MiLogStream *v16; // rax
  __int64 v17; // rsi
  uint32_t revive_point_group_id; // ecx
  char v19; // al
  uint32_t revive_point_config_id; // ecx
  char v21; // dl
  bool v22; // dl
  unsigned __int64 v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  Scene *scene; // [rsp+8h] [rbp-108h]
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  uint32_t revise_level; // [rsp+24h] [rbp-ECh]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v33; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (std::map<unsigned int,proto::OnlinePlayerInfo> *)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,proto::OnlinePlayerInfo> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 13 player_map:65";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::init;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.gallery_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gallery_id = (std::vector<unsigned int> *)this->gallery_id_;
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                         p_gallery_config_mgr,
                         (uint32_t)gallery_id);
  std::shared_ptr<Config>::~shared_ptr(&v33);
  if ( gallery_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(this->_vptr_BaseGallery + 14);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    if ( (*(unsigned __int8 (__fastcall **)(BaseGallery *const))v9)(this) != 1 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "init",
        46);
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v34,
              (const char (*)[42])"[GALLERY] scene_id invalid, cur_scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v34);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Scene::getSceneType(this->scene_) != SCENE_WORLD
        || std::vector<unsigned int>::empty(&gallery_config_ptr->group_id) )
      {
        goto LABEL_33;
      }
      if ( *(char *)(((unsigned __int64)&gallery_config_ptr->is_disable_group_default_revise_level >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&gallery_config_ptr->is_disable_group_default_revise_level);
      revise_level = !gallery_config_ptr->is_disable_group_default_revise_level;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(this->scene_);
      if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      v15 = *(_QWORD *)BlockGroupComp + 96LL;
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      gallery_id = &gallery_config_ptr->group_id;
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::vector<unsigned int> *, _QWORD, _QWORD))v15)(
             BlockGroupComp,
             &gallery_config_ptr->group_id,
             revise_level,
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "init",
          56);
        v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v34,
                (const char (*)[45])"[GALLERY] registerGroups failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v34);
        v8 = -1;
      }
      else
      {
LABEL_33:
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->stage_, gallery_id, (_BYTE)this + 56);
        }
        this->stage_ = INIT;
        BaseGallery::createTransation[abi:cxx11]((std::string *)&v34, this);
        std::string::operator=(&this->transaction_, &v34);
        std::string::~string(&v34);
        std::map<unsigned int,proto::OnlinePlayerInfo>::map(v2 + 1);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene = this->scene_;
        std::function<ForeachPolicy ()(Player &)>::function<BaseGallery::init(std::set<unsigned int> const&)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v34,
          (BaseGallery::init::<lambda(Player&)>)__PAIR128__((unsigned __int64)uid_set, (unsigned __int64)&v2[1]));
        Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v34);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v34);
        std::map<unsigned int,proto::OnlinePlayerInfo>::swap(&this->player_info_map_, v2 + 1);
        std::set<unsigned int>::operator=(&this->player_uid_set_, uid_set);
        v17 = (((_BYTE)gallery_config_ptr + 100) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gallery_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        revive_point_group_id = gallery_config_ptr->revive_point_group_id;
        v19 = *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000);
        if ( v19 != 0 && v19 <= 3 )
        {
          LOBYTE(v17) = v19 != 0;
          __asan_report_store4(&this->revive_point_group_id_, v17, (_BYTE)this + 32);
        }
        this->revive_point_group_id_ = revive_point_group_id;
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_config_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_config_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        revive_point_config_id = gallery_config_ptr->revive_point_config_id;
        v21 = *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id_ >> 3) + 0x7FFF8000);
        LOBYTE(v17) = v21 != 0;
        v22 = v21 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v21;
        if ( v22 )
          __asan_report_store4(&this->revive_point_config_id_, v17, v22);
        this->revive_point_config_id_ = revive_point_config_id;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = (unsigned __int64)(this->_vptr_BaseGallery + 10);
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          v23 = __asan_report_load8();
        (*(void (__fastcall **)(BaseGallery *const))v23)(this);
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "init",
          83);
        v24 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v34,
                (const char (*)[35])"[GALLERY] gallery int, gallery_id:");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->gallery_id_);
        v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])", uid_set:");
        common::milog::MiLogStream::operator<<<unsigned int>(v26, &this->player_uid_set_);
        common::milog::MiLogStream::~MiLogStream(&v34);
        v8 = 0;
        std::map<unsigned int,proto::OnlinePlayerInfo>::~map(v2 + 1);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "init",
      40);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v34,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v8 = -1;
  }
  result = v8;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 66: range 0000000017FB14EC-0000000017FB15C9
ForeachPolicy __cdecl BaseGallery::init(std::set<unsigned int> const&)::{lambda(Player &)#1}::operator()(
        const BaseGallery::init::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::map<unsigned int,proto::OnlinePlayerInfo> *player_map; // rbx
  PlayerMpComp *MpComp; // rax
  unsigned int value; // [rsp+14h] [rbp-1Ch] BYREF
  proto::OnlinePlayerInfo *online_player_info; // [rsp+18h] [rbp-18h]

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_set >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(__closure->__uid_set, &value) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player_map = __closure->__player_map;
  value = Player::getUid(player);
  online_player_info = std::map<unsigned int,proto::OnlinePlayerInfo>::operator[](player_map, &value);
  MpComp = Player::getMpComp(player);
  PlayerMpComp::fillOnlinePlayerInfo(MpComp, online_player_info);
  return 0;
};

// Line 88: range 0000000017FB1F6C-0000000017FB2049
bool __cdecl BaseGallery::isCanStart(const BaseGallery *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == INIT )
    return 1;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_gallery/base_gallery.cpp",
    "isCanStart",
    91);
  v1 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v3,
         (const char (*)[46])"[GALLERY] gallery stage not INIT, gallery_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->gallery_id_);
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 98: range 0000000017FB204A-0000000017FB2789
int32_t __cdecl BaseGallery::start(BaseGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rax
  Player *v9; // rax
  PlayerMpComp *MpComp; // rax
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-90h] BYREF
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 20 owner_player_ptr:111";
  *(_QWORD *)(v1 + 16) = BaseGallery::start;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_BaseGallery + 9);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(BaseGallery *const))v4)(this) != 1 )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "start",
      101);
    v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v19,
           (const char (*)[50])"[GALLERY] gallery stage cannot start, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
    goto LABEL_41;
  }
  gallery_config_ptr = BaseGallery::getGalleryExcelConfig(this);
  if ( !gallery_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "start",
      107);
    v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v19,
           (const char (*)[48])"[GALLERY] gallery config not found, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, BaseGallery *const))v8)(v1 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "start",
      114);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v19,
      (const char (*)[35])"[GALLERY] owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    MpComp = Player::getMpComp(v9);
    LOBYTE(v11) = PlayerMpComp::isInMpMode(MpComp);
    v12 = v11 ^ 1u;
    v13 = (*(_BYTE *)(((unsigned __int64)&this->is_single_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_single_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v13 )
      __asan_report_store1(&this->is_single_, v12, v13);
    this->is_single_ = v12;
    if ( this->is_single_ )
    {
      if ( *(char *)(((unsigned __int64)&gallery_config_ptr->is_enable_single_prepare >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&gallery_config_ptr->is_enable_single_prepare);
      if ( gallery_config_ptr->is_enable_single_prepare )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->single_prepare_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gallery_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->single_prepare_time >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( BaseGallery::preStart(this, gallery_config_ptr->single_prepare_time) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/base_gallery.cpp",
            "start",
            125);
          v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v19,
                  (const char (*)[47])"[GALLERY] gallery preStart failed, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v19);
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
        goto LABEL_40;
      }
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&gallery_config_ptr->is_enable_mp_prepare >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&gallery_config_ptr->is_enable_mp_prepare);
      if ( gallery_config_ptr->is_enable_mp_prepare )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->mp_prepare_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gallery_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->mp_prepare_time >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( BaseGallery::preStart(this, gallery_config_ptr->mp_prepare_time) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/base_gallery.cpp",
            "start",
            137);
          v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v19,
                  (const char (*)[47])"[GALLERY] gallery preStart failed, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v19);
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
        goto LABEL_40;
      }
    }
    if ( BaseGallery::doStart(this) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "start",
        146);
      v16 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v19,
              (const char (*)[46])"[GALLERY] gallery doStart failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = -1;
    }
    else
    {
      v6 = 0;
    }
  }
LABEL_40:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
LABEL_41:
  result = v6;
  if ( v20 == (char *)v1 )
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

// Line 154: range 0000000017FB278A-0000000017FB29DA
void __cdecl BaseGallery::onPrepareTimer(BaseGallery *const this, uint64_t now_ms)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/base_gallery.cpp",
    "onPrepareTimer",
    155);
  v2 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v8,
         (const char (*)[37])"[GALLERY] onPrepareTimer gallery_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->gallery_id_);
  common::milog::MiLogStream::~MiLogStream(&v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == PRESTART )
  {
    if ( BaseGallery::doStart(this) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "onPrepareTimer",
        165);
      v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v8,
             (const char (*)[46])"[GALLERY] gallery doStart failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "onPrepareTimer",
      159);
    v3 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v8,
           (const char (*)[50])"[GALLERY] onPrepareTimer stage incorrect, stage_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_;
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v4, (const char (*)[13])" gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 172: range 0000000017FB2BAA-0000000017FB368C
__int64 __fastcall BaseGallery::preStart(BaseGallery *const this, uint32_t duration)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  SceneTimer *v11; // rax
  __int64 v12; // rsi
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // ecx
  char v15; // dl
  bool v16; // dl
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t *p_gallery_id; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  char v25; // dl
  bool v26; // dl
  uint32_t gallery_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  char v29; // cl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  __int64 result; // rax
  BaseGallery::preStart::<lambda(uint64_t)> __args_1; // [rsp+10h] [rbp-130h] BYREF
  std::enable_shared_from_this<BaseGallery> v34; // [rsp+20h] [rbp-120h] BYREF
  common::milog::MiLogStream v35; // [rsp+30h] [rbp-110h] BYREF
  char v36[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 7 now:183 48 4 12 duration:171 64 16 15 gallery_wtr:184 96 16 13 event_ptr:213 128 32 10 notify:219";
  *(_QWORD *)(v2 + 16) = BaseGallery::preStart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == INIT )
  {
    if ( *(_DWORD *)(v2 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 32) = Scene::getSceneTimeSeconds(this->scene_);
      std::enable_shared_from_this<BaseGallery>::shared_from_this(&v34);
      std::weak_ptr<BaseGallery>::weak_ptr<BaseGallery,void>(
        (std::weak_ptr<BaseGallery> *const)(v2 + 64),
        (const std::shared_ptr<BaseGallery> *)&v34);
      std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)&v34);
      std::weak_ptr<BaseGallery>::weak_ptr(
        (std::weak_ptr<BaseGallery> *const)(v2 + 96),
        (const std::weak_ptr<BaseGallery> *)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      toPtr<Scene,Scene>((Scene *)&__args_1);
      common::tools::perf::make_shared<SceneTimer,std::shared_ptr<Scene>,BaseGallery::preStart(unsigned int)::{lambda(unsigned long)#1}>(
        (std::shared_ptr<Scene> *)&v34,
        &__args_1,
        (std::shared_ptr<Scene> *)(v2 + 96),
        &__args_1);
      std::shared_ptr<SceneTimer>::operator=(&this->gallery_prestart_ptr_, (std::shared_ptr<SceneTimer> *)&v34);
      std::shared_ptr<SceneTimer>::~shared_ptr((std::shared_ptr<SceneTimer> *const)&v34);
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&__args_1);
      BaseGallery::preStart(unsigned int)::{lambda(unsigned long)#1}::~preStart((BaseGallery::preStart::<lambda(uint64_t)> *const)(v2 + 96));
      if ( std::operator==<SceneTimer>(&this->gallery_prestart_ptr_, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "preStart",
          198);
        v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v35,
                (const char (*)[50])"[GALLERY] gallery_timer_ptr_ is null, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v8 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gallery_prestart_ptr_);
        v12 = *(unsigned int *)(v2 + 48);
        if ( SceneTimer::startS(v11, v12, 0, "./src/scene/scene_gallery/base_gallery.cpp", "preStart", 201) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/base_gallery.cpp",
            "preStart",
            203);
          v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v35,
                  (const char (*)[50])"[GALLERY] gallery timer start failed, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v35);
          v8 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->stage_, v12, (_BYTE)this + 56);
          }
          this->stage_ = PRESTART;
          v14 = *(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 48);
          v15 = *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000);
          LOBYTE(v12) = v15 != 0;
          v16 = v15 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v15;
          if ( v16 )
            __asan_report_store4(&this->prepare_end_time_, v12, v16);
          this->prepare_end_time_ = v14;
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_gallery/base_gallery.cpp",
            "preStart",
            209);
          v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v35,
                  (const char (*)[29])"[GALLERY] preStart duration:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v2 + 48));
          v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" now:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v2 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" gallery_id:");
          p_gallery_id = &this->gallery_id_;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v35);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v23 = (unsigned __int64)(this->_vptr_BaseGallery + 12);
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            v23 = __asan_report_load8();
          (*(void (__fastcall **)(BaseGallery *const))v23)(this);
          common::tools::perf::make_shared<Event>();
          v24 = (unsigned __int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
          LOBYTE(p_gallery_id) = v25 != 0;
          v26 = v25 != 0 && v25 <= 3;
          if ( v26 )
            v24 = __asan_report_store4(v24, p_gallery_id, v26);
          *(_DWORD *)v24 = 3300;
          if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          gallery_id = this->gallery_id_;
          v28 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          v29 = *(_BYTE *)(((unsigned __int64)&v28->param1 >> 3) + 0x7FFF8000);
          if ( v29 != 0 && (char)((((_BYTE)v28 + 44) & 7) + 3) >= v29 )
          {
            LOBYTE(p_gallery_id) = v29 != 0;
            __asan_report_store4(&v28->param1, p_gallery_id, (_BYTE)v28);
          }
          v28->param1 = gallery_id;
          v30 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          std::string::operator=(&v30->param_str1, &this->transaction_);
          std::shared_ptr<Event>::shared_ptr(
            (std::shared_ptr<Event> *const)&v34,
            (const std::shared_ptr<Event> *)(v2 + 96));
          BaseGallery::notifyGroupEvent(this, (EventPtr *)&v34);
          std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)&v34);
          proto::GalleryPreStartNotify::GalleryPreStartNotify((proto::GalleryPreStartNotify *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto::GalleryPreStartNotify::set_gallery_id(
            (proto::GalleryPreStartNotify *const)(v2 + 128),
            this->gallery_id_);
          if ( *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::GalleryPreStartNotify::set_pre_start_end_time(
            (proto::GalleryPreStartNotify *const)(v2 + 128),
            this->prepare_end_time_);
          BaseGallery::notifyToGalleryPlayers<proto::GalleryPreStartNotify>(
            this,
            (proto::GalleryPreStartNotify *)(v2 + 128));
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_gallery/base_gallery.cpp",
            "preStart",
            223);
          v31 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v35,
                  (const char (*)[40])"[GALLERY] gallery prestart, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v35);
          v8 = 0;
          proto::GalleryPreStartNotify::~GalleryPreStartNotify((proto::GalleryPreStartNotify *const)(v2 + 128));
          std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 96));
        }
      }
      std::weak_ptr<BaseGallery>::~weak_ptr((std::weak_ptr<BaseGallery> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "preStart",
        180);
      v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v35,
             (const char (*)[46])"[GALLERY] preStart duration is 0, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "preStart",
      175);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v35,
           (const char (*)[44])"[GALLERY] preStart stage incorrect, stage_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = this->stage_;
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])" gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v8 = -1;
  }
  result = v8;
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 185: range 0000000017FB29DC-0000000017FB2B8D
void __cdecl BaseGallery::preStart(unsigned int)::{lambda(unsigned long)#1}::operator()(
        const BaseGallery::preStart::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseGallery *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 gallery_ptr:187";
  *(_QWORD *)(v2 + 16) = BaseGallery::preStart(unsigned int)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<BaseGallery>::lock((const std::weak_ptr<BaseGallery> *const)(v2 + 32));
  if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "operator()",
      190);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v6,
      (const char (*)[42])"base gallery is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BaseGallery::onPrepareTimer(v5, now_ms);
  }
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 185: range 00000000180946D8-00000000180946FD
void __cdecl BaseGallery::preStart(unsigned int)::{lambda(unsigned long)#1}::preStart(
        BaseGallery::preStart::<lambda(uint64_t)> *const this,
        BaseGallery::preStart::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseGallery>::weak_ptr(&this->__gallery_wtr, &a2->__gallery_wtr);
};

// Line 185: range 00000000180952F4-0000000018095319
void __cdecl BaseGallery::preStart(unsigned int)::{lambda(unsigned long)#1}::preStart(
        BaseGallery::preStart::<lambda(uint64_t)> *const this,
        const BaseGallery::preStart::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseGallery>::weak_ptr(&this->__gallery_wtr, &a2->__gallery_wtr);
};

// Line 185: range 0000000017FB2B8E-0000000017FB2BA8
void __cdecl BaseGallery::preStart(unsigned int)::{lambda(unsigned long)#1}::~preStart(
        BaseGallery::preStart::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<BaseGallery>::~weak_ptr(&this->__gallery_wtr);
};

// Line 228: range 0000000017FB3946-0000000017FB485B
int32_t __cdecl BaseGallery::doStart(BaseGallery *const this)
{
  uint32_t *p_gallery_id; // rsi
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  SceneTimer *p_duration; // rdi
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  char v13; // al
  GalleryProgress *v14; // rdx
  unsigned __int64 v15; // rax
  Scene *scene; // r14
  unsigned __int64 v17; // rax
  char v18; // dl
  common::milog::MiLogStream *v19; // rsi
  bool v20; // dl
  uint32_t gallery_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  char v23; // cl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  uint32_t PlayerCount; // eax
  unsigned __int64 v27; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t Uid; // eax
  unsigned __int64 v30; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-1B0h] BYREF
  uint32_t now; // [rsp+14h] [rbp-1ACh]
  std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator __for_begin; // [rsp+18h] [rbp-1A8h] BYREF
  std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator __for_end; // [rsp+20h] [rbp-1A0h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-198h]
  std::map<std::string,std::shared_ptr<GalleryProgress>> *__for_range; // [rsp+30h] [rbp-190h]
  const std::pair<const std::string,std::shared_ptr<GalleryProgress> > *v39; // [rsp+38h] [rbp-188h]
  std::tuple_element<0,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *key; // [rsp+40h] [rbp-180h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *gallery_progress_ptr; // [rsp+48h] [rbp-178h]
  BaseGallery::doStart::<lambda(Player&)> v42; // [rsp+50h] [rbp-170h] BYREF
  common::milog::MiLogStream v43; // [rsp+70h] [rbp-150h] BYREF
  char v44[304]; // [rsp+90h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 16 15 gallery_wtr:244 64 16 19 start_event_ptr:284 96 16 13 event_ptr:295 128 16 20 owner_p"
                        "layer_ptr:308 160 56 10 notify:303";
  *(_QWORD *)(v3 + 16) = BaseGallery::doStart;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == INIT || this->stage_ == PRESTART )
  {
    gallery_config_ptr = BaseGallery::getGalleryExcelConfig(this);
    if ( gallery_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      now = Scene::getSceneTimeSeconds(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( !gallery_config_ptr->duration )
        goto LABEL_28;
      std::enable_shared_from_this<BaseGallery>::shared_from_this((std::enable_shared_from_this<BaseGallery> *const)(v3 + 128));
      std::weak_ptr<BaseGallery>::weak_ptr<BaseGallery,void>(
        (std::weak_ptr<BaseGallery> *const)(v3 + 32),
        (const std::shared_ptr<BaseGallery> *)(v3 + 128));
      std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 128));
      std::weak_ptr<BaseGallery>::weak_ptr(
        (std::weak_ptr<BaseGallery> *const)(v3 + 96),
        (const std::weak_ptr<BaseGallery> *)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      toPtr<Scene,Scene>((Scene *)(v3 + 64));
      common::tools::perf::make_shared<SceneTimer,std::shared_ptr<Scene>,BaseGallery::doStart(void)::{lambda(unsigned long)#1}>(
        (std::shared_ptr<Scene> *)(v3 + 128),
        (BaseGallery::doStart::<lambda(uint64_t)> *)(v3 + 64),
        (std::shared_ptr<Scene> *)(v3 + 96),
        (BaseGallery::doStart::<lambda(uint64_t)> *)(v3 + 64));
      std::shared_ptr<SceneTimer>::operator=(&this->gallery_timer_ptr_, (std::shared_ptr<SceneTimer> *)(v3 + 128));
      std::shared_ptr<SceneTimer>::~shared_ptr((std::shared_ptr<SceneTimer> *const)(v3 + 128));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
      BaseGallery::doStart(void)::{lambda(unsigned long)#1}::~doStart((BaseGallery::doStart::<lambda(uint64_t)> *const)(v3 + 96));
      if ( std::operator==<SceneTimer>(&this->gallery_timer_ptr_, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "doStart",
          258);
        v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               &v43,
               (const char (*)[50])"[GALLERY] gallery_timer_ptr_ is null, gallery_id:");
        p_gallery_id = &this->gallery_id_;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v43);
        v2 = -1;
        v9 = 0;
      }
      else
      {
        p_duration = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gallery_timer_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) <= 3 )
        {
          p_duration = (SceneTimer *)&gallery_config_ptr->duration;
          __asan_report_load4();
        }
        p_gallery_id = (uint32_t *)gallery_config_ptr->duration;
        if ( SceneTimer::startS(
               p_duration,
               (uint32_t)p_gallery_id,
               0,
               "./src/scene/scene_gallery/base_gallery.cpp",
               "doStart",
               261) )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/base_gallery.cpp",
            "doStart",
            263);
          v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v43,
                  (const char (*)[50])"[GALLERY] gallery timer start failed, gallery_id:");
          p_gallery_id = &this->gallery_id_;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v43);
          v2 = -1;
          v9 = 0;
        }
        else
        {
          v9 = 1;
        }
      }
      std::weak_ptr<BaseGallery>::~weak_ptr((std::weak_ptr<BaseGallery> *const)(v3 + 32));
      if ( v9 == 1 )
      {
LABEL_28:
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->stage_, p_gallery_id, (_BYTE)this + 56);
        }
        this->stage_ = START;
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->start_time_, p_gallery_id, (_BYTE)this + 104);
        }
        this->start_time_ = now;
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v12 = gallery_config_ptr->duration + now;
        v13 = *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000);
        if ( v13 != 0 && v13 <= 3 )
        {
          LOBYTE(p_gallery_id) = v13 != 0;
          __asan_report_store4(&this->end_time_, p_gallery_id, (_BYTE)this + 96);
        }
        this->end_time_ = v12;
        __for_range = &this->gallery_progress_map_;
        __for_begin._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::begin(&this->gallery_progress_map_)._M_node;
        __for_end._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end(&this->gallery_progress_map_)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v39 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator*(&__for_begin);
          key = std::get<0ul,std::string const,std::shared_ptr<GalleryProgress>>(v39);
          gallery_progress_ptr = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *)std::get<1ul,std::string const,std::shared_ptr<GalleryProgress>>(v39);
          if ( !std::operator==<GalleryProgress>(gallery_progress_ptr, 0LL) )
          {
            v14 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_progress_ptr);
            GalleryProgress::onGalleryStart(v14, this);
          }
          std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator++(&__for_begin);
        }
        BaseGallery::addAbilityGroupToAllPlayer(this);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v15 = (unsigned __int64)(this->_vptr_BaseGallery + 11);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8();
        (*(void (__fastcall **)(BaseGallery *const))v15)(this);
        common::tools::perf::make_shared<GalleryStartEvent,unsigned int &>(
          (unsigned int *)(v3 + 64),
          &this->gallery_id_);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene = this->scene_;
        std::shared_ptr<GalleryStartEvent>::shared_ptr(
          &v42.__start_event_ptr,
          (const std::shared_ptr<GalleryStartEvent> *)(v3 + 64));
        v42.__this = this;
        std::function<ForeachPolicy ()(Player &)>::function<BaseGallery::doStart(void)::{lambda(Player &)#2},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v43,
          &v42);
        v19 = &v43;
        Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v43);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v43);
        BaseGallery::doStart(void)::{lambda(Player &)#2}::~Player(&v42);
        common::tools::perf::make_shared<Event>();
        v17 = (unsigned __int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v18 = *(_BYTE *)((v17 >> 3) + 0x7FFF8000);
        LOBYTE(v19) = v18 != 0;
        v20 = v18 != 0 && v18 <= 3;
        if ( v20 )
          v17 = __asan_report_store4(v17, v19, v20);
        *(_DWORD *)v17 = 70;
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        gallery_id = this->gallery_id_;
        v22 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v23 = *(_BYTE *)(((unsigned __int64)&v22->param1 >> 3) + 0x7FFF8000);
        if ( v23 != 0 && (char)((((_BYTE)v22 + 44) & 7) + 3) >= v23 )
        {
          LOBYTE(v19) = v23 != 0;
          __asan_report_store4(&v22->param1, v19, (_BYTE)v22);
        }
        v22->param1 = gallery_id;
        v24 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        std::string::operator=(&v24->param_str1, &this->transaction_);
        std::shared_ptr<Event>::shared_ptr(
          (std::shared_ptr<Event> *const)(v3 + 128),
          (const std::shared_ptr<Event> *)(v3 + 96));
        BaseGallery::notifyGroupEvent(this, (EventPtr *)(v3 + 128));
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 128));
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "doStart",
          301);
        v25 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v43,
                (const char (*)[37])"[GALLERY] gallery start, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v43);
        proto::GalleryStartNotify::GalleryStartNotify((proto::GalleryStartNotify *const)(v3 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryStartNotify::set_gallery_id((proto::GalleryStartNotify *const)(v3 + 160), this->gallery_id_);
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryStartNotify::set_start_time((proto::GalleryStartNotify *const)(v3 + 160), this->start_time_);
        if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryStartNotify::set_end_time((proto::GalleryStartNotify *const)(v3 + 160), this->end_time_);
        PlayerCount = BaseGallery::getPlayerCount(this);
        proto::GalleryStartNotify::set_player_count((proto::GalleryStartNotify *const)(v3 + 160), PlayerCount);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v27 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
        if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
          v27 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, BaseGallery *const))v27)(v3 + 128, this);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 128), 0LL) )
        {
          v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          Uid = Player::getUid(v28);
          proto::GalleryStartNotify::set_owner_uid((proto::GalleryStartNotify *const)(v3 + 160), Uid);
        }
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v30 = (unsigned __int64)(this->_vptr_BaseGallery + 16);
        if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
          v30 = __asan_report_load8();
        (*(void (__fastcall **)(BaseGallery *const, unsigned __int64))v30)(this, v3 + 160);
        BaseGallery::notifyToGalleryPlayers<proto::GalleryStartNotify>(this, (proto::GalleryStartNotify *)(v3 + 160));
        BaseGallery::notifyGalleryInfo(this);
        v2 = 0;
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
        proto::GalleryStartNotify::~GalleryStartNotify((proto::GalleryStartNotify *const)(v3 + 160));
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 96));
        std::shared_ptr<GalleryStartEvent>::~shared_ptr((std::shared_ptr<GalleryStartEvent> *const)(v3 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "doStart",
        237);
      v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v43,
             (const char (*)[48])"[GALLERY] gallery config not found, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v43);
      v2 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "doStart",
      231);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v43,
           (const char (*)[43])"[GALLERY] doStart stage incorrect, stage_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v2 = -1;
  }
  result = v2;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 245: range 0000000018094A04-0000000018094A29
void __cdecl BaseGallery::doStart(void)::{lambda(unsigned long)#1}::doStart(
        BaseGallery::doStart::<lambda(uint64_t)> *const this,
        BaseGallery::doStart::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseGallery>::weak_ptr(&this->__gallery_wtr, &a2->__gallery_wtr);
};

// Line 245: range 00000000180954D6-00000000180954FB
void __cdecl BaseGallery::doStart(void)::{lambda(unsigned long)#1}::doStart(
        BaseGallery::doStart::<lambda(uint64_t)> *const this,
        const BaseGallery::doStart::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseGallery>::weak_ptr(&this->__gallery_wtr, &a2->__gallery_wtr);
};

// Line 245: range 0000000017FB368E-0000000017FB383F
void __cdecl BaseGallery::doStart(void)::{lambda(unsigned long)#1}::operator()(
        const BaseGallery::doStart::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseGallery *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 gallery_ptr:247";
  *(_QWORD *)(v2 + 16) = BaseGallery::doStart(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<BaseGallery>::lock((const std::weak_ptr<BaseGallery> *const)(v2 + 32));
  if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "operator()",
      250);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v6,
      (const char (*)[42])"base gallery is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BaseGallery::onGalleryTimer(v5, now_ms);
  }
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 245: range 0000000017FB3840-0000000017FB385A
void __cdecl BaseGallery::doStart(void)::{lambda(unsigned long)#1}::~doStart(
        BaseGallery::doStart::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<BaseGallery>::~weak_ptr(&this->__gallery_wtr);
};

// Line 285: range 0000000017FB385C-0000000017FB3929
ForeachPolicy __cdecl BaseGallery::doStart(void)::{lambda(Player &)#2}::operator()(
        const BaseGallery::doStart::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerEventComp *EventComp; // rbx
  unsigned int value; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-20h] BYREF

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
         &__closure->__this->player_info_map_,
         &value) )
  {
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr<GalleryStartEvent,void>(&p_event_ptr, &__closure->__start_event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  }
  return 0;
};

// Line 285: range 00000000180864B2-0000000018086531
void __cdecl BaseGallery::doStart(void)::{lambda(Player &)#2}::Player(
        BaseGallery::doStart::<lambda(Player&)> *const this,
        BaseGallery::doStart::<lambda(Player&)> *a2)
{
  BaseGallery *v2; // rdx

  std::shared_ptr<GalleryStartEvent>::shared_ptr(&this->__start_event_ptr, &a2->__start_event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 285: range 00000000180865FC-000000001808667B
void __cdecl BaseGallery::doStart(void)::{lambda(Player &)#2}::Player(
        BaseGallery::doStart::<lambda(Player&)> *const this,
        const BaseGallery::doStart::<lambda(Player&)> *a2)
{
  BaseGallery *v2; // rdx

  std::shared_ptr<GalleryStartEvent>::shared_ptr(&this->__start_event_ptr, &a2->__start_event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 285: range 0000000017FB392A-0000000017FB3944
void __cdecl BaseGallery::doStart(void)::{lambda(Player &)#2}::~Player(
        BaseGallery::doStart::<lambda(Player&)> *const this)
{
  std::shared_ptr<GalleryStartEvent>::~shared_ptr(&this->__start_event_ptr);
};

// Line 323: range 0000000017FB485C-0000000017FB4EE3
int32_t __cdecl BaseGallery::clear(BaseGallery *const this)
{
  __int64 v1; // rsi
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  __int64 v14; // rsi
  bool v15; // dl
  bool v16; // dl
  common::milog::MiLogStream *v17; // rax
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_, v1, (_BYTE)this + 56);
  }
  this->stage_ = NONE_2;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.gallery_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, this->gallery_id_);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( !gallery_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "clear",
      328);
    v3 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v20,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Scene::getSceneType(this->scene_) != SCENE_WORLD
    || std::vector<unsigned int>::empty(&gallery_config_ptr->group_id) )
  {
    goto LABEL_47;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(this->scene_);
  if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
    BlockGroupComp = __asan_report_load8();
  v7 = *(_QWORD *)BlockGroupComp + 104LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    BlockGroupComp = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::vector<unsigned int> *, __int64))v7)(
         BlockGroupComp,
         &gallery_config_ptr->group_id,
         1LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "clear",
      336);
    v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v20,
           (const char (*)[47])"[GALLERY] unregisterGroups failed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = (unsigned __int64)Scene::getBlockGroupComp(this->scene_);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8();
  v10 = *(_QWORD *)v9 + 104LL;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::vector<unsigned int> *, __int64))v10)(
         v9,
         &gallery_config_ptr->transfer_pre_register_group_id_list,
         1LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "clear",
      342);
    v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v20,
            (const char (*)[47])"[GALLERY] unregisterGroups failed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
LABEL_47:
    if ( std::operator!=<SceneTimer>(&this->gallery_timer_ptr_, 0LL) )
    {
      v12 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gallery_timer_ptr_);
      common::tools::MiTimer::cancel(v12);
    }
    if ( std::operator!=<SceneTimer>(&this->gallery_prestart_ptr_, 0LL) )
    {
      v13 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gallery_prestart_ptr_);
      common::tools::MiTimer::cancel(v13);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->end_time_, 0LL, (_BYTE)this + 96);
    }
    this->end_time_ = 0;
    v14 = (((_BYTE)this + 100) & 7u) + 3;
    v15 = *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3)
                                                            + 0x7FFF8000);
    if ( v15 )
      __asan_report_store4(&this->prepare_end_time_, v14, v15);
    this->prepare_end_time_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->start_time_, v14, (_BYTE)this + 104);
    }
    this->start_time_ = 0;
    std::map<unsigned int,proto::OnlinePlayerInfo>::clear(&this->player_info_map_);
    std::string::clear(&this->transaction_);
    if ( *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->revive_point_group_id_, v14, (_BYTE)this + 32);
    }
    this->revive_point_group_id_ = 0;
    v16 = *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id_ >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id_ >> 3)
                                                           + 0x7FFF8000);
    if ( v16 )
      __asan_report_store4(&this->revive_point_config_id_, (((_BYTE)this + 36) & 7u) + 3, v16);
    this->revive_point_config_id_ = 0;
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "clear",
      363);
    v17 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v20,
            (const char (*)[37])"[GALLERY] gallery clear, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return 0;
  }
};

// Line 368: range 0000000017FB4EE4-0000000017FB58EC
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl BaseGallery::stop(BaseGallery *const this, bool is_interrupt, proto::GalleryStopReason reason)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GalleryProgress *v6; // rdx
  uint32_t v7; // eax
  Scene *scene; // rcx
  Player *v9; // rax
  PlayerExhibitionComp *ExhibitionComp; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rsi
  bool v15; // dl
  uint32_t gallery_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // dl
  bool v21; // dl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  char v23; // cl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned __int64 v26; // rax
  int32_t result; // eax
  uint32_t now; // [rsp+18h] [rbp-148h]
  uint32_t last_time; // [rsp+1Ch] [rbp-144h]
  std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  std::map<std::string,std::shared_ptr<GalleryProgress>> *__for_range; // [rsp+30h] [rbp-130h]
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range_0; // [rsp+38h] [rbp-128h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v36; // [rsp+40h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+50h] [rbp-110h]
  const std::pair<const std::string,std::shared_ptr<GalleryProgress> > *v39; // [rsp+58h] [rbp-108h]
  std::tuple_element<0,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *key; // [rsp+60h] [rbp-100h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *gallery_progress_ptr; // [rsp+68h] [rbp-F8h]
  common::milog::MiLogStream v42; // [rsp+70h] [rbp-F0h] BYREF
  char v43[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 13 event_ptr:405 64 16 14 player_ptr:395 96 24 10 notify:415";
  *(_QWORD *)(v3 + 16) = BaseGallery::stop;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START || this->stage_ == INIT || this->stage_ == PRESTART )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->stage_, is_interrupt, (_BYTE)this + 56);
    }
    this->stage_ = STOP;
    __for_range = &this->gallery_progress_map_;
    __for_begin._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::begin(&this->gallery_progress_map_)._M_node;
    __for_end._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end(&this->gallery_progress_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v39 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator*(&__for_begin);
      key = std::get<0ul,std::string const,std::shared_ptr<GalleryProgress>>(v39);
      gallery_progress_ptr = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *)std::get<1ul,std::string const,std::shared_ptr<GalleryProgress>>(v39);
      if ( !std::operator==<GalleryProgress>(gallery_progress_ptr, 0LL) )
      {
        v6 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_progress_ptr);
        GalleryProgress::onGalleryStop(v6, this);
      }
      std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator++(&__for_begin);
    }
    BaseGallery::delAbilityGroupToAllPlayer(this);
    BaseGallery::flushExhibitionTemporaryDataOnGalleryStop(this, reason);
    if ( reason == GALLERY_STOP_LUA_INTERRUPT_SUCCESS )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      now = Scene::getSceneTimeSeconds(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( now >= this->end_time_ )
        v7 = 0;
      else
        v7 = this->end_time_ - now;
      last_time = v7;
      __for_range_0 = &this->player_info_map_;
      __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&__for_begin,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&__for_end) )
      {
        v36 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&__for_begin);
        uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v36);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v36);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene = this->scene_;
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)scene, *uid);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
        {
          v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          ExhibitionComp = Player::getExhibitionComp(v9);
          if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          PlayerExhibitionComp::triggerGallerySuccLastTimeOnStop(ExhibitionComp, this->gallery_id_, last_time);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&__for_begin);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned __int64)(this->_vptr_BaseGallery + 13);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v14 = (unsigned int)reason;
    (*(void (__fastcall **)(BaseGallery *const, _QWORD))v11)(this, (unsigned int)reason);
    common::tools::perf::make_shared<Event>();
    v12 = (unsigned __int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v13 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v13 != 0;
    v15 = v13 != 0 && v13 <= 3;
    if ( v15 )
      v12 = __asan_report_store4(v12, v14, v15);
    *(_DWORD *)v12 = 71;
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    gallery_id = this->gallery_id_;
    v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v18 = *(_BYTE *)(((unsigned __int64)&v17->param1 >> 3) + 0x7FFF8000);
    if ( v18 != 0 && (char)((((_BYTE)v17 + 44) & 7) + 3) >= v18 )
    {
      LOBYTE(v14) = v18 != 0;
      __asan_report_store4(&v17->param1, v14, (_BYTE)v17);
    }
    v17->param1 = gallery_id;
    v19 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v20 = *(_BYTE *)(((unsigned __int64)(v19 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v20 != 0;
    v21 = v20 != 0 && v20 <= 3;
    if ( v21 )
      v19 = __asan_report_store4(v19 + 48, v14, v21);
    *(_DWORD *)(v19 + 48) = is_interrupt;
    v22 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v23 = *(_BYTE *)(((unsigned __int64)&v22->param3 >> 3) + 0x7FFF8000);
    if ( v23 != 0 && (char)((((_BYTE)v22 + 52) & 7) + 3) >= v23 )
    {
      LOBYTE(v14) = v23 != 0;
      __asan_report_store4(&v22->param3, v14, (_BYTE)v22);
    }
    v22->param3 = reason;
    v24 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    std::string::operator=(&v24->param_str1, &this->transaction_);
    std::shared_ptr<Event>::shared_ptr(
      (std::shared_ptr<Event> *const)(v3 + 64),
      (const std::shared_ptr<Event> *)(v3 + 32));
    BaseGallery::notifyGroupEvent(this, (EventPtr *)(v3 + 64));
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 64));
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "stop",
      414);
    v25 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v42,
            (const char (*)[28])"[GALLERY] stop, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v42);
    proto::GalleryStopNotify::GalleryStopNotify((proto::GalleryStopNotify *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::GalleryStopNotify::set_gallery_id((proto::GalleryStopNotify *const)(v3 + 96), this->gallery_id_);
    BaseGallery::notifyToGalleryPlayers<proto::GalleryStopNotify>(this, (proto::GalleryStopNotify *)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v26 = (unsigned __int64)(this->_vptr_BaseGallery + 2);
    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      v26 = __asan_report_load8();
    (*(void (__fastcall **)(BaseGallery *const))v26)(this);
    proto::GalleryStopNotify::~GalleryStopNotify((proto::GalleryStopNotify *const)(v3 + 96));
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "stop",
      371);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v42,
      (const char (*)[26])"[GALLERY] stage not right");
    common::milog::MiLogStream::~MiLogStream(&v42);
  }
  result = 0;
  if ( v43 == (char *)v3 )
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

// Line 424: range 0000000017FB59D8-0000000017FB5DB2
void __cdecl BaseGallery::onGalleryTimer(BaseGallery *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  bool v6; // dl
  Scene *scene; // r14
  SceneGalleryComp *GalleryComp; // rdi
  common::milog::MiLogStream *v9; // rax
  BaseGallery::onGalleryTimer::<lambda(Player&)> v11; // [rsp+10h] [rbp-B0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 event_ptr:429";
  *(_QWORD *)(v2 + 16) = BaseGallery::onGalleryTimer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/base_gallery.cpp",
    "onGalleryTimer",
    425);
  v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
         &v12,
         (const char (*)[47])"[GALLERY] onGalleryTimer time out, gallery_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
  common::milog::MiLogStream::~MiLogStream(&v12);
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_gallery_timeout_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_gallery_timeout_ >> 3)
                                                         + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->is_gallery_timeout_, (((_BYTE)this + 108) & 7u) + 3, v6);
  this->is_gallery_timeout_ = 1;
  common::tools::perf::make_shared<GalleryTimeUpEvent,unsigned int &>((unsigned int *)(v2 + 32), &this->gallery_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  std::shared_ptr<GalleryTimeUpEvent>::shared_ptr(
    &v11.__event_ptr,
    (const std::shared_ptr<GalleryTimeUpEvent> *)(v2 + 32));
  v11.__this = this;
  std::function<ForeachPolicy ()(Player &)>::function<BaseGallery::onGalleryTimer(unsigned long)::{lambda(Player &)#1},void,void>(
    (std::function<ForeachPolicy(Player&)> *const)&v12,
    &v11);
  Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v12);
  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v12);
  BaseGallery::onGalleryTimer(unsigned long)::{lambda(Player &)#1}::~Player(&v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = Scene::getGalleryComp(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    GalleryComp = (SceneGalleryComp *)&this->gallery_id_;
    __asan_report_load4();
  }
  if ( SceneGalleryComp::forceStopAndClearGallery(GalleryComp, this->gallery_id_, 0, GALLERY_STOP_TIMEUP) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "onGalleryTimer",
      442);
    v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v12,
           (const char (*)[35])"[GALLERY] fail failed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  std::shared_ptr<GalleryTimeUpEvent>::~shared_ptr((std::shared_ptr<GalleryTimeUpEvent> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 430: range 0000000017FB58EE-0000000017FB59BB
ForeachPolicy __cdecl BaseGallery::onGalleryTimer(unsigned long)::{lambda(Player &)#1}::operator()(
        const BaseGallery::onGalleryTimer::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerEventComp *EventComp; // rbx
  unsigned int value; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<BaseEvent> v5; // [rsp+20h] [rbp-20h] BYREF

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
         &__closure->__this->player_info_map_,
         &value) )
  {
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr<GalleryTimeUpEvent,void>(&v5, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &v5);
    std::shared_ptr<BaseEvent>::~shared_ptr(&v5);
  }
  return 0;
};

// Line 430: range 000000001808676E-00000000180867ED
void __cdecl BaseGallery::onGalleryTimer(unsigned long)::{lambda(Player &)#1}::Player(
        BaseGallery::onGalleryTimer::<lambda(Player&)> *const this,
        BaseGallery::onGalleryTimer::<lambda(Player&)> *a2)
{
  BaseGallery *v2; // rdx

  std::shared_ptr<GalleryTimeUpEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 430: range 00000000180868B8-0000000018086937
void __cdecl BaseGallery::onGalleryTimer(unsigned long)::{lambda(Player &)#1}::Player(
        BaseGallery::onGalleryTimer::<lambda(Player&)> *const this,
        const BaseGallery::onGalleryTimer::<lambda(Player&)> *a2)
{
  BaseGallery *v2; // rdx

  std::shared_ptr<GalleryTimeUpEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 430: range 0000000017FB59BC-0000000017FB59D6
void __cdecl BaseGallery::onGalleryTimer(unsigned long)::{lambda(Player &)#1}::~Player(
        BaseGallery::onGalleryTimer::<lambda(Player&)> *const this)
{
  std::shared_ptr<GalleryTimeUpEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 448: range 0000000017FB5DB4-0000000017FB610F
void __cdecl BaseGallery::notifyGroupEvent(BaseGallery *const this, EventPtr *p_event_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Group *v11; // rdx
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 20 control_group_id:454 64 16 13 group_ptr:460";
  *(_QWORD *)(v2 + 16) = BaseGallery::notifyGroupEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( std::operator==<Event>(p_event_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "notifyGroupEvent",
      451);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v12,
           (const char (*)[41])"[GALLERY] event_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(this->_vptr_BaseGallery + 15);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    *(_DWORD *)(v2 + 48) = (*(__int64 (__fastcall **)(BaseGallery *const))v6)(this);
    if ( *(_DWORD *)(v2 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findGroup((Scene *const)(v2 + 64), (uint32_t)this->scene_);
      if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "notifyGroupEvent",
          463);
        v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               &v12,
               (const char (*)[20])"[GALLERY] group_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
        v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" handle event:");
        v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_event_ptr);
        common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(v9, &v10->event_type);
        common::milog::MiLogStream::~MiLogStream(&v12);
        v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Group::handleEvent(v11, p_event_ptr);
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 64));
    }
  }
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
};

// Line 471: range 0000000017FB6110-0000000017FB61C9
const data::GalleryExcelConfig *__cdecl BaseGallery::getGalleryExcelConfig(const BaseGallery *const this)
{
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  const data::GalleryExcelConfig *GalleryExcelConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.gallery_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  GalleryExcelConfig = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, this->gallery_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return GalleryExcelConfig;
};

// Line 476: range 0000000017FB61CA-0000000017FB62B4
uint32_t __cdecl BaseGallery::getControlGroupId(const BaseGallery *const this)
{
  common::milog::MiLogStream *v1; // rax
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  gallery_config_ptr = BaseGallery::getGalleryExcelConfig(this);
  if ( gallery_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    return gallery_config_ptr->control_group_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "getControlGroupId",
      480);
    v1 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v4,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 0;
  }
};

// Line 487: range 0000000017FB62B6-0000000017FB63E8
bool __cdecl BaseGallery::isCurSceneValid(const BaseGallery *const this)
{
  common::milog::MiLogStream *v1; // rax
  uint32_t SceneId; // ecx
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  gallery_config_ptr = BaseGallery::getGalleryExcelConfig(this);
  if ( gallery_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneId = Scene::getSceneId(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gallery_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->scene_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return SceneId == gallery_config_ptr->scene_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "isCurSceneValid",
      491);
    v1 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v5,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 498: range 0000000017FB63EA-0000000017FB645D
PlayerPtr __cdecl BaseGallery::getOwner(const BaseGallery *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = Scene::getOwnPlayer((const Scene *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 503: range 0000000017FB645E-0000000017FB658D
void __cdecl BaseGallery::fillControlGroupSet(BaseGallery *const this, std::set<unsigned int> *group_id_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 20 control_group_id:504";
  *(_QWORD *)(v2 + 16) = BaseGallery::fillControlGroupSet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_BaseGallery + 15);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  *(_DWORD *)(v2 + 32) = (*(__int64 (__fastcall **)(BaseGallery *const))v5)(this);
  if ( *(_DWORD *)(v2 + 32) )
    std::set<unsigned int>::insert(group_id_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
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

// Line 512: range 0000000017FB658E-0000000017FB69AB
void __cdecl BaseGallery::addAbilityGroupToAllPlayer(BaseGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rax
  Scene *scene; // rcx
  Player *v7; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  Player *v9; // rax
  PlayerAbilityGroupComp *v10; // rax
  Player *v11; // rax
  PlayerAbilityGroupComp *v12; // rax
  Player *v13; // rax
  PlayerAbilityGroupComp *v14; // rax
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const data::GalleryExcelConfig *config_ptr; // [rsp+28h] [rbp-A8h]
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+30h] [rbp-A0h]
  std::pair<unsigned int const,proto::OnlinePlayerInfo> *__in; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+48h] [rbp-88h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-80h] BYREF
  char v23[96]; // [rsp+70h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:525";
  *(_QWORD *)(v1 + 16) = BaseGallery::addAbilityGroupToAllPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  config_ptr = BaseGallery::getGalleryExcelConfig(this);
  if ( config_ptr )
  {
    if ( !std::vector<std::string>::empty(&config_ptr->ability_group_list)
      || !std::vector<std::string>::empty(&config_ptr->team_ability_group_list) )
    {
      __for_range = &this->player_info_map_;
      __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
        uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(__in);
        _ = std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(__in);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene = this->scene_;
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v1 + 32), (__int64)scene, *uid);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
        {
          v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          AbilityGroupComp = Player::getAbilityGroupComp(v7);
          if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          PlayerAbilityGroupComp::markAbilityGroupSource(
            AbilityGroupComp,
            ABILITY_GROUP_SOURCE_GALLERY,
            this->gallery_id_);
          v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          v10 = Player::getAbilityGroupComp(v9);
          PlayerAbilityGroupComp::addTeamAbilityGroup(v10, &config_ptr->team_ability_group_list, 0);
          v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          v12 = Player::getAbilityGroupComp(v11);
          PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v12, &config_ptr->ability_group_list, 0);
          v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          v14 = Player::getAbilityGroupComp(v13);
          PlayerAbilityGroupComp::tryRefreshAbilityGroup(v14);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "addAbilityGroupToAllPlayer",
      516);
    v4 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v22,
           (const char (*)[48])"[GALLERY] gallery config not found, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 537: range 0000000017FB69AC-0000000017FB6BE9
void __cdecl BaseGallery::delAbilityGroupToAllPlayer(BaseGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  Scene *scene; // rcx
  Player *v5; // rdx
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+20h] [rbp-80h]
  std::pair<unsigned int const,proto::OnlinePlayerInfo> *__in; // [rsp+28h] [rbp-78h]
  std::tuple_element<0,std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+30h] [rbp-70h]
  std::tuple_element<1,std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+38h] [rbp-68h]
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:540";
  *(_QWORD *)(v1 + 16) = BaseGallery::delAbilityGroupToAllPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(__in);
    _ = std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v1 + 32), (__int64)scene, *uid);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
    {
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      BaseGallery::dellAllAbilityGroups(this, v5);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
  }
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 549: range 0000000017FB6BEA-0000000017FB6FF5
void __cdecl BaseGallery::dellAllAbilityGroups(BaseGallery *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  const std::string *M_current; // r15
  const std::string *v7; // r14
  const std::string *v8; // r15
  const std::string *v9; // r14
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  PlayerAbilityGroupComp *v11; // rax
  PlayerAbilityGroupComp *v12; // rax
  PlayerAbilityGroupComp *v13; // rax
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > __i; // [rsp+28h] [rbp-108h] BYREF
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > __position; // [rsp+30h] [rbp-100h] BYREF
  const data::GalleryExcelConfig *config_ptr; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 21 ability_group_vec:557 96 24 26 team_ability_group_vec:559";
  *(_QWORD *)(v2 + 16) = BaseGallery::dellAllAbilityGroups;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  config_ptr = BaseGallery::getGalleryExcelConfig(this);
  if ( config_ptr )
  {
    std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 32), &config_ptr->ability_group_list);
    M_current = std::vector<std::string>::end(&config_ptr->selectable_ability_groups)._M_current;
    v7 = std::vector<std::string>::begin(&config_ptr->selectable_ability_groups)._M_current;
    __i._M_current = std::vector<std::string>::end((std::vector<std::string> *const)(v2 + 32))._M_current;
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::__normal_iterator<std::string*>(
      &__position,
      &__i);
    std::vector<std::string>::insert<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,void>(
      (std::vector<std::string> *const)(v2 + 32),
      __position,
      (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v7,
      (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)M_current);
    std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 96), &config_ptr->team_ability_group_list);
    v8 = std::vector<std::string>::end(&config_ptr->selectable_team_ability_group_list)._M_current;
    v9 = std::vector<std::string>::begin(&config_ptr->selectable_team_ability_group_list)._M_current;
    __i._M_current = std::vector<std::string>::end((std::vector<std::string> *const)(v2 + 96))._M_current;
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::__normal_iterator<std::string*>(
      &__position,
      &__i);
    std::vector<std::string>::insert<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,void>(
      (std::vector<std::string> *const)(v2 + 96),
      __position,
      (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v9,
      (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v8);
    AbilityGroupComp = Player::getAbilityGroupComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerAbilityGroupComp::markAbilityGroupSource(AbilityGroupComp, ABILITY_GROUP_SOURCE_GALLERY, this->gallery_id_);
    v11 = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::delTeamAbilityGroup(v11, (const std::vector<std::string> *)(v2 + 96));
    v12 = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v12, (const std::vector<std::string> *)(v2 + 32));
    v13 = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v13);
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 96));
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "dellAllAbilityGroups",
      553);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v17,
           (const char (*)[48])"[GALLERY] gallery config not found, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  if ( v18 == (char *)v2 )
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
};

// Line 568: range 0000000017FB6FF6-0000000017FB7940
void __cdecl BaseGallery::onPlayerLeaveScene(BaseGallery *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t SceneId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  char v15; // cl
  __int64 v16; // rax
  char v17; // dl
  bool v18; // dl
  __int64 v19; // rsi
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t v21; // r14d
  __int64 v22; // rax
  char v23; // dl
  bool v24; // dl
  std::shared_ptr<Event> *v25; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint32_t v27; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  SceneGalleryComp *GalleryComp; // rdi
  common::milog::MiLogStream *v31; // rax
  unsigned int value; // [rsp+1Ch] [rbp-124h] BYREF
  PlayerSceneComp *scene_comp; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v37; // [rsp+30h] [rbp-110h] BYREF
  char v38[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 20 owner_player_ptr:587 64 16 17 cur_scene_ptr:588 96 16 13 event_ptr:594 128 16 18 dest"
                        "_scene_ptr:600 160 16 18 dest_scene_ptr:613";
  *(_QWORD *)(v2 + 16) = BaseGallery::onPlayerLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( BaseGallery::isStart(this) )
  {
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
           &this->player_info_map_,
           &value) )
    {
      if ( BaseGallery::getGalleryExcelConfig(this) )
      {
        BaseGallery::dellAllAbilityGroups(this, player);
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "onPlayerLeaveScene",
          585);
        v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v37,
               (const char (*)[42])"[GALLERY] onPlayerLeaveScene, player_uid:");
        value = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &value);
        common::milog::MiLogStream::~MiLogStream(&v37);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v7 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, BaseGallery *const))v7)(v2 + 32, this);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        toPtr<Scene,Scene>((Scene *)(v2 + 64));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/base_gallery.cpp",
            "onPlayerLeaveScene",
            591);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v37,
            (const char (*)[32])"[GALLERY] cur_scene_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v37);
        }
        else
        {
          EventUtil::createEvent((data::EventType)(v2 + 96));
          v8 = 0LL;
          if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 96), 0LL) )
          {
            Uid = Player::getUid(player);
            v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->uid >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (char)((((_BYTE)v10 + 60) & 7) + 3) >= v11 )
            {
              LOBYTE(v8) = v11 != 0;
              __asan_report_store4(&v10->uid, v8, (_BYTE)v10);
            }
            v10->uid = Uid;
            v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            SceneId = Scene::getSceneId(v12);
            v14 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v15 = *(_BYTE *)(((unsigned __int64)&v14->param1 >> 3) + 0x7FFF8000);
            if ( v15 != 0 && (char)((((_BYTE)v14 + 44) & 7) + 3) >= v15 )
            {
              LOBYTE(v8) = v15 != 0;
              __asan_report_store4(&v14->param1, v8, (_BYTE)v14);
            }
            v14->param1 = SceneId;
            v16 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v17 = *(_BYTE *)(((unsigned __int64)(v16 + 48) >> 3) + 0x7FFF8000);
            LOBYTE(v8) = v17 != 0;
            v18 = v17 != 0 && v17 <= 3;
            if ( v18 )
              v16 = __asan_report_store4(v16 + 48, v8, v18);
            *(_DWORD *)(v16 + 48) = 0;
            Player::getSceneComp(player);
            PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v2 + 128));
            v19 = 0LL;
            if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 128), 0LL) )
            {
              v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              v21 = Scene::getSceneId(v20);
              v22 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              v23 = *(_BYTE *)(((unsigned __int64)(v22 + 48) >> 3) + 0x7FFF8000);
              LOBYTE(v19) = v23 != 0;
              v24 = v23 != 0 && v23 <= 3;
              if ( v24 )
                v22 = __asan_report_store4(v22 + 48, v19, v24);
              *(_DWORD *)(v22 + 48) = v21;
            }
            v25 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v2 + 96));
            std::shared_ptr<Event>::shared_ptr((std::shared_ptr<Event> *const)(v2 + 160), v25);
            BaseGallery::notifyGroupEvent(this, (EventPtr *)(v2 + 160));
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 160));
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
          }
          if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
          {
            v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            v27 = Player::getUid(v26);
            if ( v27 == Player::getUid(player) )
            {
              scene_comp = Player::getSceneComp(player);
              PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v2 + 160));
              if ( std::operator!=<Scene,Scene>(
                     (const std::shared_ptr<Scene> *)(v2 + 160),
                     (const std::shared_ptr<Scene> *)(v2 + 64)) )
              {
                v28 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                if ( Scene::getSceneType(v28) != SCENE_DUNGEON )
                {
                  common::milog::MiLogStream::create(
                    &v37,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/scene/scene_gallery/base_gallery.cpp",
                    "onPlayerLeaveScene",
                    616);
                  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v37,
                    (const char (*)[43])"[GALLERY] owner leave cur_scene, then stop");
                  common::milog::MiLogStream::~MiLogStream(&v37);
                  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  GalleryComp = Scene::getGalleryComp(this->scene_);
                  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    GalleryComp = (SceneGalleryComp *)&this->gallery_id_;
                    __asan_report_load4();
                  }
                  if ( SceneGalleryComp::forceStopAndClearGallery(
                         GalleryComp,
                         this->gallery_id_,
                         1,
                         GALLERY_STOP_OWNER_LEAVE_SCENE) )
                  {
                    common::milog::MiLogStream::create(
                      &v37,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/scene/scene_gallery/base_gallery.cpp",
                      "onPlayerLeaveScene",
                      619);
                    v31 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            &v37,
                            (const char (*)[45])"forceStopAndClearGallery failed, gallery_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->gallery_id_);
                    common::milog::MiLogStream::~MiLogStream(&v37);
                  }
                }
              }
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 160));
            }
          }
          std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 96));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "onPlayerLeaveScene",
          580);
        v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               &v37,
               (const char (*)[48])"[GALLERY] gallery config not found, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v37);
      }
    }
  }
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 627: range 0000000017FB7942-0000000017FB7D44
std::string *__cdecl BaseGallery::createTransation[abi:cxx11](std::string *retstr, BaseGallery *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  unsigned __int64 v5; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t Uid; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  time_t Now; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-251h] BYREF
  char v17[592]; // [rsp+20h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 20 owner_player_ptr:629 80 392 6 ss:634";
  *(_QWORD *)(v2 + 16) = BaseGallery::createTransation[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, BaseGallery *const))v5)(v2 + 48, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 48), 0LL) )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, byte_2641E100, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 80);
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    Uid = Player::getUid(v6);
    v8 = std::ostream::operator<<(v2 + 96, Uid);
    v9 = std::operator<<<std::char_traits<char>>(v8, "-");
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v10 = std::ostream::operator<<(v9, this->gallery_id_);
    v11 = std::operator<<<std::char_traits<char>>(v10, "-");
    Now = common::tools::TimeUtils::getNow();
    v13 = std::ostream::operator<<(v11, Now);
    v14 = std::operator<<<std::char_traits<char>>(v13, "-");
    std::ostream::operator<<(v14, ++BaseGallery::createTransation[abi:cxx11](void)::transaction_id);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 80);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 80);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 48));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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
  return retstr;
};

// Line 640: range 0000000017FB7D46-0000000017FB8278
void __cdecl BaseGallery::toClient(BaseGallery *const this, proto::SceneGalleryInfo *client_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  GalleryStage stage; // eax
  std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  proto::SceneGalleryProgressInfo *v7; // rax
  google::protobuf::uint32 v8; // edx
  unsigned __int64 v9; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t Uid; // edx
  std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::map<std::string,std::shared_ptr<GalleryProgress>> *__for_range; // [rsp+20h] [rbp-B0h]
  const std::pair<const std::string,std::shared_ptr<GalleryProgress> > *v15; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *key; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *gallery_progress_ptr; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 20 owner_player_ptr:667";
  *(_QWORD *)(v2 + 16) = BaseGallery::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryInfo::set_gallery_id(client_info, this->gallery_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryInfo::set_end_time(client_info, this->end_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage = this->stage_;
  if ( stage == PRESTART )
  {
    proto::SceneGalleryInfo::set_stage(client_info, GALLERY_PRESTART);
    if ( *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SceneGalleryInfo::set_pre_start_end_time(client_info, this->prepare_end_time_);
  }
  else if ( stage == START )
  {
    proto::SceneGalleryInfo::set_stage(client_info, GALLERY_START);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SceneGalleryInfo::set_start_time(client_info, this->start_time_);
    if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SceneGalleryInfo::set_end_time(client_info, this->end_time_);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "toClient",
      655);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v18,
      (const char (*)[26])"[GALLERY] stage incorrect");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  __for_range = &this->gallery_progress_map_;
  __for_begin._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::begin(&this->gallery_progress_map_)._M_node;
  __for_end._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end(&this->gallery_progress_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator*(&__for_begin);
    key = std::get<0ul,std::string const,std::shared_ptr<GalleryProgress>>(v15);
    gallery_progress_ptr = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *)std::get<1ul,std::string const,std::shared_ptr<GalleryProgress>>(v15);
    if ( !std::operator==<GalleryProgress>(gallery_progress_ptr, 0LL) )
    {
      v6 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_progress_ptr);
      v7 = proto::SceneGalleryInfo::add_progress_info_list(client_info);
      GalleryProgress::toClient(v6, v7);
    }
    std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator++(&__for_begin);
  }
  v8 = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
  proto::SceneGalleryInfo::set_player_count(client_info, v8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, BaseGallery *const))v9)(v2 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(v10);
    proto::SceneGalleryInfo::set_owner_uid(client_info, Uid);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 675: range 0000000017FB827A-0000000017FB85E2
__int64 __fastcall BaseGallery::setRevivePoint(
        BaseGallery *const this,
        uint32_t revive_point_group_id,
        uint32_t revive_point_config_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  uint32_t v11; // ecx
  char v12; // al
  uint32_t v13; // ecx
  char v14; // dl
  bool v15; // dl
  const GroupScriptConfig *group_script_config_ptr; // [rsp+10h] [rbp-C0h]
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 25 revive_point_group_id:674 64 4 26 revive_point_config_id:674";
  *(_QWORD *)(v3 + 16) = BaseGallery::setRevivePoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = revive_point_group_id;
  *(_DWORD *)(v3 + 64) = revive_point_config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
  group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v6->design_config.lua_config_mgr, *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( group_script_config_ptr )
  {
    v9 = *(unsigned int *)(v3 + 64);
    if ( GroupScriptConfig::findPointConfig(group_script_config_ptr, v9) )
    {
      v11 = *(_DWORD *)(v3 + 48);
      v12 = *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v9) = v12 != 0;
        __asan_report_store4(&this->revive_point_group_id_, v9, (_BYTE)this + 32);
      }
      this->revive_point_group_id_ = v11;
      v13 = *(_DWORD *)(v3 + 64);
      v14 = *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id_ >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v14 != 0;
      v15 = v14 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v14;
      if ( v15 )
        __asan_report_store4(&this->revive_point_config_id_, v9, v15);
      this->revive_point_config_id_ = v13;
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "setRevivePoint",
        687);
      v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v19,
              (const char (*)[44])"[DRAFT] findPointConfig failed, config_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "setRevivePoint",
      680);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v19,
           (const char (*)[49])"[DRAFT] findGroupScriptConfig failed, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 696: range 0000000017FB85E4-0000000017FB8B61
int32_t __cdecl BaseGallery::findGalleryRevivePoint(BaseGallery *const this, Vector3 *reborn_pos, Vector3 *reborn_rot)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v5; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-50h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v12; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  if ( BaseGallery::getGalleryExcelConfig(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->revive_point_group_id_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v12);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, this->revive_point_group_id_);
      std::shared_ptr<Config>::~shared_ptr(&v12);
      if ( group_script_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        point_script_config_ptr = GroupScriptConfig::findPointConfig(
                                    group_script_config_ptr,
                                    this->revive_point_config_id_);
        if ( point_script_config_ptr )
        {
          if ( ((unsigned __int8)reborn_pos & 7) >= *(_BYTE *)(((unsigned __int64)reborn_pos >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)reborn_pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&reborn_pos->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)reborn_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&reborn_pos->z + 3) >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_store_n(reborn_pos, 12LL);
          }
          if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                                + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
          }
          *reborn_pos = point_script_config_ptr->pos;
          if ( ((unsigned __int8)reborn_rot & 7) >= *(_BYTE *)(((unsigned __int64)reborn_rot >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)reborn_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&reborn_rot->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)reborn_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&reborn_rot->z + 3) >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_store_n(reborn_rot, 12LL);
          }
          if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
          }
          *(_QWORD *)&reborn_rot->x = *(_QWORD *)&point_script_config_ptr->rot.x;
          reborn_rot->z = point_script_config_ptr->rot.z;
          return 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/base_gallery.cpp",
            "findGalleryRevivePoint",
            720);
          v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                 &v13,
                 (const char (*)[44])"[DRAFT] findPointConfig failed, config_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->revive_point_config_id_);
          common::milog::MiLogStream::~MiLogStream(&v13);
          return -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "findGalleryRevivePoint",
          713);
        v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v13,
               (const char (*)[49])"[DRAFT] findGroupScriptConfig failed, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->revive_point_group_id_);
        common::milog::MiLogStream::~MiLogStream(&v13);
        return -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "findGalleryRevivePoint",
        706);
      v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v13,
             (const char (*)[56])"[GALLERY] no gallery revive_point_group_id, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "findGalleryRevivePoint",
      700);
    v3 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v13,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
};

// Line 729: range 0000000017FB8B62-0000000017FB91A0
int32_t __cdecl BaseGallery::backRevivePoint(BaseGallery *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerSceneComp *SceneComp; // rax
  PlayerSceneComp *v7; // r14
  Scene *v8; // rax
  __int64 v9; // rsi
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  char v12; // cl
  uint32_t revive_point_group_id; // r14d
  __int64 v14; // rax
  char v15; // dl
  bool v16; // dl
  __int64 v17; // rsi
  uint32_t revive_point_config_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  char v20; // cl
  std::shared_ptr<Event> *v21; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-144h]
  std::shared_ptr<Event> p_event_ptr; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-130h] BYREF
  TransferReason p_reason; // [rsp+50h] [rbp-110h] BYREF
  char v28[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 12 14 reborn_pos:742 64 12 14 reborn_rot:742 96 16 17 cur_scene_ptr:730 128 16 13 event_ptr:756";
  *(_QWORD *)(v2 + 16) = BaseGallery::backRevivePoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Scene,Scene>((Scene *)(v2 + 96));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "backRevivePoint",
      733);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v26,
      (const char (*)[32])"[GALLERY] cur_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v5 = -1;
  }
  else
  {
    SceneComp = Player::getSceneComp(player);
    if ( PlayerSceneComp::isInTransfer(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "backRevivePoint",
        738);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v26,
        (const char (*)[30])"[GALLERY] player in transfer.");
      common::milog::MiLogStream::~MiLogStream(&v26);
      v5 = 0;
    }
    else
    {
      Vector3::Vector3((Vector3 *const)(v2 + 32), 0.0, 0.0, 0.0);
      Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
      if ( BaseGallery::findGalleryRevivePoint(this, (Vector3 *)(v2 + 32), (Vector3 *)(v2 + 64)) )
      {
        v5 = 0;
      }
      else
      {
        v7 = Player::getSceneComp(player);
        TransferReason::TransferReason(&p_reason, ENTER_REASON_GALLERY_BACK);
        v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        ret = PlayerSceneComp::jumpToScene(v7, v8, (const Vector3 *)(v2 + 32), (const Vector3 *)(v2 + 64), 0, &p_reason);
        TransferReason::~TransferReason(&p_reason);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/base_gallery.cpp",
            "backRevivePoint",
            752);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v26, (const char (*)[18])"jumpToScene fails");
          common::milog::MiLogStream::~MiLogStream(&v26);
          v5 = ret;
        }
        else
        {
          EventUtil::createEvent((data::EventType)(v2 + 128));
          v9 = 0LL;
          if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 128), 0LL) )
          {
            Uid = Player::getUid(player);
            v11 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v12 = *(_BYTE *)(((unsigned __int64)&v11->param1 >> 3) + 0x7FFF8000);
            if ( v12 != 0 && (char)((((_BYTE)v11 + 44) & 7) + 3) >= v12 )
            {
              LOBYTE(v9) = v12 != 0;
              __asan_report_store4(&v11->param1, v9, (_BYTE)v11);
            }
            v11->param1 = Uid;
            if ( *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            revive_point_group_id = this->revive_point_group_id_;
            v14 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v15 = *(_BYTE *)(((unsigned __int64)(v14 + 48) >> 3) + 0x7FFF8000);
            LOBYTE(v9) = v15 != 0;
            v16 = v15 != 0 && v15 <= 3;
            if ( v16 )
              v14 = __asan_report_store4(v14 + 48, v9, v16);
            *(_DWORD *)(v14 + 48) = revive_point_group_id;
            v17 = (((_BYTE)this + 36) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            revive_point_config_id = this->revive_point_config_id_;
            v19 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v20 = *(_BYTE *)(((unsigned __int64)&v19->param3 >> 3) + 0x7FFF8000);
            if ( v20 != 0 && (char)((((_BYTE)v19 + 52) & 7) + 3) >= v20 )
            {
              LOBYTE(v17) = v20 != 0;
              __asan_report_store4(&v19->param3, v17, (_BYTE)v19);
            }
            v19->param3 = revive_point_config_id;
            v21 = std::move<std::shared_ptr<Event> &>((std::shared_ptr<Event> *)(v2 + 128));
            std::shared_ptr<Event>::shared_ptr(&p_event_ptr, v21);
            BaseGallery::notifyGroupEvent(this, &p_event_ptr);
            std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
          }
          v5 = 0;
          std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 128));
        }
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  result = v5;
  if ( v28 == (char *)v2 )
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

// Line 769: range 0000000017FB91A2-0000000017FB9341
int32_t __cdecl BaseGallery::getAbilityGroup(
        BaseGallery *const this,
        uint32_t ability_group_index,
        std::string *ability_group_str)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v5; // rbx
  std::vector<std::string>::const_reference v6; // rdx
  unsigned __int64 val; // [rsp+20h] [rbp-40h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  gallery_config_ptr = BaseGallery::getGalleryExcelConfig(this);
  if ( gallery_config_ptr )
  {
    if ( ability_group_index < std::vector<std::string>::size(&gallery_config_ptr->selectable_ability_groups) )
    {
      v6 = std::vector<std::string>::operator[](&gallery_config_ptr->selectable_ability_groups, ability_group_index);
      std::string::operator=(ability_group_str, v6);
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "getAbilityGroup",
        779);
      v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v10,
             (const char (*)[47])"ability_group_index out of range, config size:");
      val = std::vector<std::string>::size(&gallery_config_ptr->selectable_ability_groups);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "getAbilityGroup",
      773);
    v3 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v10,
           (const char (*)[40])"gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 787: range 0000000017FB9438-0000000017FB9C3D
__int64 __fastcall BaseGallery::attachAbilityGroup(
        BaseGallery *const this,
        const std::vector<unsigned int> *uid_vec,
        uint32_t ability_group_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v11; // rax
  uint32_t *v12; // rdx
  Player *v13; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  Player *v15; // rax
  PlayerAbilityGroupComp *v16; // r14
  common::milog::MiLogStream *i; // r14
  Player *v18; // rax
  PlayerAbilityGroupComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 result; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-1A0h]
  std::vector<unsigned int> *__result; // [rsp+20h] [rbp-190h]
  std::allocator<char> __a; // [rsp+43h] [rbp-16Dh] BYREF
  uint32_t uid; // [rsp+44h] [rbp-16Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-168h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-160h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-158h]
  std::vector<unsigned int> __x; // [rsp+60h] [rbp-150h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-130h] BYREF
  char v34[272]; // [rsp+A0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 23 ability_group_index:786 64 16 14 player_ptr:813 96 24 17 apply_uid_vec:799 160 32 21 a"
                        "bility_group_str:793";
  *(_QWORD *)(v3 + 16) = BaseGallery::attachAbilityGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = ability_group_index;
  if ( !BaseGallery::isStart(this) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "attachAbilityGroup",
      790);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v33, (const char (*)[20])"gallery not started");
    common::milog::MiLogStream::~MiLogStream(&v33);
    v6 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 160), byte_2641E100, &__a);
    std::allocator<char>::~allocator(&__a);
    if ( BaseGallery::getAbilityGroup(this, *(_DWORD *)(v3 + 48), (std::string *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "attachAbilityGroup",
        796);
      v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v33,
             (const char (*)[43])"getAbilityGroup fail. ability_group_index:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v6 = -1;
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( std::vector<unsigned int>::empty(uid_vec) )
      {
        common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,proto::OnlinePlayerInfo>>(
          &__x,
          &this->player_info_map_);
        std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v3 + 96), &__x);
        std::vector<unsigned int>::~vector(&__x);
      }
      else
      {
        __result = std::back_inserter<std::vector<unsigned int>>((std::vector<unsigned int> *)(v3 + 96)).container;
        M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
        v11._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
        std::copy_if<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::back_insert_iterator<std::vector<unsigned int>>,BaseGallery::attachAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}>(
          v11,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
          (std::back_insert_iterator<std::vector<unsigned int> >)__result,
          (BaseGallery::attachAbilityGroup::<lambda(uint32_t)>)this);
      }
      if ( (unsigned __int8)std::string::empty(v3 + 160) != 1 )
      {
        __for_range = (std::vector<unsigned int> *)(v3 + 96);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          uid = *v12;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, uid);
          if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
          {
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            AbilityGroupComp = Player::getAbilityGroupComp(v13);
            if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            PlayerAbilityGroupComp::markAbilityGroupSource(
              AbilityGroupComp,
              ABILITY_GROUP_SOURCE_GALLERY,
              this->gallery_id_);
            v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v16 = Player::getAbilityGroupComp(v15);
            std::string::basic_string(&v33, v3 + 160);
            __l._M_array = (std::initializer_list<std::string >::iterator)&v33;
            __l._M_len = 1LL;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)&__a);
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)&__x,
              __l,
              (const std::vector<std::string>::allocator_type *)&__a);
            PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v16, (const std::vector<std::string> *)&__x, 0);
            std::vector<std::string>::~vector((std::vector<std::string> *const)&__x);
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)&__a);
            for ( i = (common::milog::MiLogStream *)v34; i != &v33; std::string::~string(i) )
              --i;
            v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v19 = Player::getAbilityGroupComp(v18);
            PlayerAbilityGroupComp::tryRefreshAbilityGroup(v19);
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "attachAbilityGroup",
          821);
        v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v33,
                (const char (*)[29])"[GALLERY] add ability_group:");
        v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v3 + 160));
        v22 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v21, (const char (*)[5])" to:");
        common::milog::MiLogStream::operator<<<unsigned int>(v22, (const std::vector<unsigned int> *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      v6 = 0;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    }
    std::string::~string((void *)(v3 + 160));
  }
  result = v6;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 807: range 0000000017FB9342-0000000017FB9437
bool __fastcall BaseGallery::attachAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:807";
  *(_QWORD *)(v2 + 16) = BaseGallery::attachAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
             (std::map<unsigned int,proto::OnlinePlayerInfo> *)(*(_QWORD *)__closure + 144LL),
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 827: range 0000000017FB9D34-0000000017FBA534
__int64 __fastcall BaseGallery::delAbilityGroup(
        BaseGallery *const this,
        const std::vector<unsigned int> *uid_vec,
        uint32_t ability_group_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v11; // rax
  uint32_t *v12; // rdx
  Player *v13; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  Player *v15; // rax
  PlayerAbilityGroupComp *v16; // r14
  common::milog::MiLogStream *i; // r14
  Player *v18; // rax
  PlayerAbilityGroupComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 result; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-1A0h]
  std::vector<unsigned int> *__result; // [rsp+20h] [rbp-190h]
  std::allocator<char> __a; // [rsp+43h] [rbp-16Dh] BYREF
  uint32_t uid; // [rsp+44h] [rbp-16Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-168h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-160h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-158h]
  std::vector<unsigned int> __x; // [rsp+60h] [rbp-150h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-130h] BYREF
  char v34[272]; // [rsp+A0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 23 ability_group_index:826 64 16 14 player_ptr:854 96 24 17 apply_uid_vec:840 160 32 21 a"
                        "bility_group_str:834";
  *(_QWORD *)(v3 + 16) = BaseGallery::delAbilityGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = ability_group_index;
  if ( !BaseGallery::isStart(this) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "delAbilityGroup",
      830);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v33, (const char (*)[20])"gallery not started");
    common::milog::MiLogStream::~MiLogStream(&v33);
    v6 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 160), byte_2641E100, &__a);
    std::allocator<char>::~allocator(&__a);
    if ( BaseGallery::getAbilityGroup(this, *(_DWORD *)(v3 + 48), (std::string *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "delAbilityGroup",
        837);
      v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v33,
             (const char (*)[43])"getAbilityGroup fail. ability_group_index:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v6 = -1;
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( std::vector<unsigned int>::empty(uid_vec) )
      {
        common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,proto::OnlinePlayerInfo>>(
          &__x,
          &this->player_info_map_);
        std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v3 + 96), &__x);
        std::vector<unsigned int>::~vector(&__x);
      }
      else
      {
        __result = std::back_inserter<std::vector<unsigned int>>((std::vector<unsigned int> *)(v3 + 96)).container;
        M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
        v11._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
        std::copy_if<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::back_insert_iterator<std::vector<unsigned int>>,BaseGallery::delAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}>(
          v11,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
          (std::back_insert_iterator<std::vector<unsigned int> >)__result,
          (BaseGallery::delAbilityGroup::<lambda(uint32_t)>)this);
      }
      if ( (unsigned __int8)std::string::empty(v3 + 160) != 1 )
      {
        __for_range = (std::vector<unsigned int> *)(v3 + 96);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          uid = *v12;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, uid);
          if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
          {
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            AbilityGroupComp = Player::getAbilityGroupComp(v13);
            if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            PlayerAbilityGroupComp::markAbilityGroupSource(
              AbilityGroupComp,
              ABILITY_GROUP_SOURCE_GALLERY,
              this->gallery_id_);
            v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v16 = Player::getAbilityGroupComp(v15);
            std::string::basic_string(&v33, v3 + 160);
            __l._M_array = (std::initializer_list<std::string >::iterator)&v33;
            __l._M_len = 1LL;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)&__a);
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)&__x,
              __l,
              (const std::vector<std::string>::allocator_type *)&__a);
            PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v16, (const std::vector<std::string> *)&__x);
            std::vector<std::string>::~vector((std::vector<std::string> *const)&__x);
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)&__a);
            for ( i = (common::milog::MiLogStream *)v34; i != &v33; std::string::~string(i) )
              --i;
            v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v19 = Player::getAbilityGroupComp(v18);
            PlayerAbilityGroupComp::tryRefreshAbilityGroup(v19);
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "delAbilityGroup",
          862);
        v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v33,
                (const char (*)[29])"[GALLERY] del ability_group:");
        v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v3 + 160));
        v22 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v21, (const char (*)[5])" to:");
        common::milog::MiLogStream::operator<<<unsigned int>(v22, (const std::vector<unsigned int> *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      v6 = 0;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    }
    std::string::~string((void *)(v3 + 160));
  }
  result = v6;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 848: range 0000000017FB9C3E-0000000017FB9D33
bool __fastcall BaseGallery::delAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:848";
  *(_QWORD *)(v2 + 16) = BaseGallery::delAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
             (std::map<unsigned int,proto::OnlinePlayerInfo> *)(*(_QWORD *)__closure + 144LL),
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 868: range 0000000017FBA62C-0000000017FBAE31
__int64 __fastcall BaseGallery::attachTeamAbilityGroup(
        BaseGallery *const this,
        const std::vector<unsigned int> *uid_vec,
        uint32_t ability_group_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v11; // rax
  uint32_t *v12; // rdx
  Player *v13; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  Player *v15; // rax
  PlayerAbilityGroupComp *v16; // r14
  common::milog::MiLogStream *i; // r14
  Player *v18; // rax
  PlayerAbilityGroupComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 result; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-1A0h]
  std::vector<unsigned int> *__result; // [rsp+20h] [rbp-190h]
  std::allocator<char> __a; // [rsp+43h] [rbp-16Dh] BYREF
  uint32_t uid; // [rsp+44h] [rbp-16Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-168h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-160h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-158h]
  std::vector<unsigned int> __x; // [rsp+60h] [rbp-150h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-130h] BYREF
  char v34[272]; // [rsp+A0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 23 ability_group_index:867 64 16 14 player_ptr:894 96 24 17 apply_uid_vec:880 160 32 21 a"
                        "bility_group_str:874";
  *(_QWORD *)(v3 + 16) = BaseGallery::attachTeamAbilityGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = ability_group_index;
  if ( !BaseGallery::isStart(this) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "attachTeamAbilityGroup",
      871);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v33, (const char (*)[20])"gallery not started");
    common::milog::MiLogStream::~MiLogStream(&v33);
    v6 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 160), byte_2641E100, &__a);
    std::allocator<char>::~allocator(&__a);
    if ( BaseGallery::getTeamAbilityGroup(this, *(_DWORD *)(v3 + 48), (std::string *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "attachTeamAbilityGroup",
        877);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v33,
             (const char (*)[47])"getTeamAbilityGroup fail. ability_group_index:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v6 = -1;
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( std::vector<unsigned int>::empty(uid_vec) )
      {
        common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,proto::OnlinePlayerInfo>>(
          &__x,
          &this->player_info_map_);
        std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v3 + 96), &__x);
        std::vector<unsigned int>::~vector(&__x);
      }
      else
      {
        __result = std::back_inserter<std::vector<unsigned int>>((std::vector<unsigned int> *)(v3 + 96)).container;
        M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
        v11._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
        std::copy_if<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::back_insert_iterator<std::vector<unsigned int>>,BaseGallery::attachTeamAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}>(
          v11,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
          (std::back_insert_iterator<std::vector<unsigned int> >)__result,
          (BaseGallery::attachTeamAbilityGroup::<lambda(uint32_t)>)this);
      }
      if ( (unsigned __int8)std::string::empty(v3 + 160) != 1 )
      {
        __for_range = (std::vector<unsigned int> *)(v3 + 96);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          uid = *v12;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, uid);
          if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
          {
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            AbilityGroupComp = Player::getAbilityGroupComp(v13);
            if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            PlayerAbilityGroupComp::markAbilityGroupSource(
              AbilityGroupComp,
              ABILITY_GROUP_SOURCE_GALLERY,
              this->gallery_id_);
            v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v16 = Player::getAbilityGroupComp(v15);
            std::string::basic_string(&v33, v3 + 160);
            __l._M_array = (std::initializer_list<std::string >::iterator)&v33;
            __l._M_len = 1LL;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)&__a);
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)&__x,
              __l,
              (const std::vector<std::string>::allocator_type *)&__a);
            PlayerAbilityGroupComp::addTeamAbilityGroup(v16, (const std::vector<std::string> *)&__x, 0);
            std::vector<std::string>::~vector((std::vector<std::string> *const)&__x);
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)&__a);
            for ( i = (common::milog::MiLogStream *)v34; i != &v33; std::string::~string(i) )
              --i;
            v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v19 = Player::getAbilityGroupComp(v18);
            PlayerAbilityGroupComp::tryRefreshAbilityGroup(v19);
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "attachTeamAbilityGroup",
          902);
        v20 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v33,
                (const char (*)[34])"[GALLERY] add team_ability_group:");
        v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v3 + 160));
        v22 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v21, (const char (*)[5])" to:");
        common::milog::MiLogStream::operator<<<unsigned int>(v22, (const std::vector<unsigned int> *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      v6 = 0;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    }
    std::string::~string((void *)(v3 + 160));
  }
  result = v6;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 888: range 0000000017FBA536-0000000017FBA62B
bool __fastcall BaseGallery::attachTeamAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:888";
  *(_QWORD *)(v2 + 16) = BaseGallery::attachTeamAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
             (std::map<unsigned int,proto::OnlinePlayerInfo> *)(*(_QWORD *)__closure + 144LL),
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 908: range 0000000017FBAF28-0000000017FBB728
__int64 __fastcall BaseGallery::delTeamAbilityGroup(
        BaseGallery *const this,
        const std::vector<unsigned int> *uid_vec,
        uint32_t ability_group_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v11; // rax
  uint32_t *v12; // rdx
  Player *v13; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  Player *v15; // rax
  PlayerAbilityGroupComp *v16; // r14
  common::milog::MiLogStream *i; // r14
  Player *v18; // rax
  PlayerAbilityGroupComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 result; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-1A0h]
  std::vector<unsigned int> *__result; // [rsp+20h] [rbp-190h]
  std::allocator<char> __a; // [rsp+43h] [rbp-16Dh] BYREF
  uint32_t uid; // [rsp+44h] [rbp-16Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-168h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-160h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-158h]
  std::vector<unsigned int> __x; // [rsp+60h] [rbp-150h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-130h] BYREF
  char v34[272]; // [rsp+A0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 23 ability_group_index:907 64 16 14 player_ptr:935 96 24 17 apply_uid_vec:921 160 32 21 a"
                        "bility_group_str:915";
  *(_QWORD *)(v3 + 16) = BaseGallery::delTeamAbilityGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = ability_group_index;
  if ( !BaseGallery::isStart(this) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "delTeamAbilityGroup",
      911);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v33, (const char (*)[20])"gallery not started");
    common::milog::MiLogStream::~MiLogStream(&v33);
    v6 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 160), byte_2641E100, &__a);
    std::allocator<char>::~allocator(&__a);
    if ( BaseGallery::getTeamAbilityGroup(this, *(_DWORD *)(v3 + 48), (std::string *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "delTeamAbilityGroup",
        918);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v33,
             (const char (*)[47])"getTeamAbilityGroup fail. ability_group_index:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v6 = -1;
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( std::vector<unsigned int>::empty(uid_vec) )
      {
        common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,proto::OnlinePlayerInfo>>(
          &__x,
          &this->player_info_map_);
        std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v3 + 96), &__x);
        std::vector<unsigned int>::~vector(&__x);
      }
      else
      {
        __result = std::back_inserter<std::vector<unsigned int>>((std::vector<unsigned int> *)(v3 + 96)).container;
        M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
        v11._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
        std::copy_if<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::back_insert_iterator<std::vector<unsigned int>>,BaseGallery::delTeamAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}>(
          v11,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
          (std::back_insert_iterator<std::vector<unsigned int> >)__result,
          (BaseGallery::delTeamAbilityGroup::<lambda(uint32_t)>)this);
      }
      if ( (unsigned __int8)std::string::empty(v3 + 160) != 1 )
      {
        __for_range = (std::vector<unsigned int> *)(v3 + 96);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          uid = *v12;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, uid);
          if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
          {
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            AbilityGroupComp = Player::getAbilityGroupComp(v13);
            if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            PlayerAbilityGroupComp::markAbilityGroupSource(
              AbilityGroupComp,
              ABILITY_GROUP_SOURCE_GALLERY,
              this->gallery_id_);
            v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v16 = Player::getAbilityGroupComp(v15);
            std::string::basic_string(&v33, v3 + 160);
            __l._M_array = (std::initializer_list<std::string >::iterator)&v33;
            __l._M_len = 1LL;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)&__a);
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)&__x,
              __l,
              (const std::vector<std::string>::allocator_type *)&__a);
            PlayerAbilityGroupComp::delTeamAbilityGroup(v16, (const std::vector<std::string> *)&__x);
            std::vector<std::string>::~vector((std::vector<std::string> *const)&__x);
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)&__a);
            for ( i = (common::milog::MiLogStream *)v34; i != &v33; std::string::~string(i) )
              --i;
            v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v19 = Player::getAbilityGroupComp(v18);
            PlayerAbilityGroupComp::tryRefreshAbilityGroup(v19);
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "delTeamAbilityGroup",
          943);
        v20 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v33,
                (const char (*)[34])"[GALLERY] del team_ability_group:");
        v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v3 + 160));
        v22 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v21, (const char (*)[5])" to:");
        common::milog::MiLogStream::operator<<<unsigned int>(v22, (const std::vector<unsigned int> *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      v6 = 0;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    }
    std::string::~string((void *)(v3 + 160));
  }
  result = v6;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 929: range 0000000017FBAE32-0000000017FBAF27
bool __fastcall BaseGallery::delTeamAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:929";
  *(_QWORD *)(v2 + 16) = BaseGallery::delTeamAbilityGroup(std::vector<unsigned int> const&,unsigned int)::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
             (std::map<unsigned int,proto::OnlinePlayerInfo> *)(*(_QWORD *)__closure + 144LL),
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 949: range 0000000017FBB72A-0000000017FBB8C9
int32_t __cdecl BaseGallery::getTeamAbilityGroup(
        BaseGallery *const this,
        uint32_t ability_group_index,
        std::string *ability_group_str)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v5; // rbx
  std::vector<std::string>::const_reference v6; // rdx
  unsigned __int64 val; // [rsp+20h] [rbp-40h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  gallery_config_ptr = BaseGallery::getGalleryExcelConfig(this);
  if ( gallery_config_ptr )
  {
    if ( ability_group_index < std::vector<std::string>::size(&gallery_config_ptr->selectable_team_ability_group_list) )
    {
      v6 = std::vector<std::string>::operator[](
             &gallery_config_ptr->selectable_team_ability_group_list,
             ability_group_index);
      std::string::operator=(ability_group_str, v6);
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "getTeamAbilityGroup",
        959);
      v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v10,
             (const char (*)[47])"ability_group_index out of range, config size:");
      val = std::vector<std::string>::size(&gallery_config_ptr->selectable_team_ability_group_list);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "getTeamAbilityGroup",
      953);
    v3 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v10,
           (const char (*)[40])"gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 967: range 0000000017FBB972-0000000017FBBBB0
void __cdecl BaseGallery::notifyGalleryInfo(BaseGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  proto::SceneGalleryInfo *v5; // rsi
  Scene *v6; // [rsp+10h] [rbp-C0h]
  Scene *scene; // [rsp+10h] [rbp-C0h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:968";
  *(_QWORD *)(v1 + 16) = BaseGallery::notifyGalleryInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::SceneGalleryInfoNotify::SceneGalleryInfoNotify((proto::SceneGalleryInfoNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_BaseGallery + 4);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  v6 = *(Scene **)v4;
  v5 = proto::SceneGalleryInfoNotify::mutable_gallery_info((proto::SceneGalleryInfoNotify *const)(v1 + 32));
  ((void (__fastcall *)(BaseGallery *const, proto::SceneGalleryInfo *))v6)(this, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  std::function<ForeachPolicy ()(Player &)>::function<BaseGallery::notifyGalleryInfo(void)::{lambda(Player &)#1},void,void>(
    &p_func,
    (BaseGallery::notifyGalleryInfo::<lambda(Player&)>)__PAIR128__((unsigned __int64)this, v1 + 32));
  Scene::foreachPlayer(scene, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  proto::SceneGalleryInfoNotify::~SceneGalleryInfoNotify((proto::SceneGalleryInfoNotify *const)(v1 + 32));
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

// Line 971: range 0000000017FBB8CA-0000000017FBB970
ForeachPolicy __cdecl BaseGallery::notifyGalleryInfo(void)::{lambda(Player &)#1}::operator()(
        const BaseGallery::notifyGalleryInfo::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned int value; // [rsp+1Ch] [rbp-4h] BYREF

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
         &__closure->__this->player_info_map_,
         &value) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, __closure->__notify);
  }
  return 0;
};

// Line 983: range 0000000017FBBBB2-0000000017FBC0D7
int32_t __cdecl BaseGallery::createGalleryProgress(
        BaseGallery *const this,
        const std::string *key,
        const std::vector<unsigned int> *progress_stage_vec,
        data::GalleryProgressScoreUIType ui_form,
        data::GalleryProgressScoreType progress_type,
        uint32_t init_progress)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t v12; // r14d
  GalleryProgress *v13; // rdi
  std::shared_ptr<GalleryProgress> *v14; // r8
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  GalleryProgress *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+34h] [rbp-BCh] BYREF
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Self __y; // [rsp+38h] [rbp-B8h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+60h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 8 iter:984 64 16 24 gallery_progress_ptr:990";
  *(_QWORD *)(v6 + 16) = BaseGallery::createGalleryProgress;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -202178560;
  *(std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator *)(v6 + 32) = std::map<std::string,std::shared_ptr<GalleryProgress>>::find(
                                                                                     &this->gallery_progress_map_,
                                                                                     key);
  __y._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end(&this->gallery_progress_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Self *)(v6 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "createGalleryProgress",
      987);
    v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v32,
           (const char (*)[32])"gallery progress is exist. key:");
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, key);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v12 = -1;
  }
  else
  {
    common::tools::perf::make_shared<GalleryProgress,BaseGallery &>((BaseGallery *)(v6 + 64), this);
    if ( std::operator==<GalleryProgress>((const std::shared_ptr<GalleryProgress> *)(v6 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "createGalleryProgress",
        993);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v32,
        (const char (*)[27])"createGalleryProgress fail");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v12 = -1;
    }
    else
    {
      v13 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( GalleryProgress::init(v13, key, progress_stage_vec, ui_form, progress_type) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/base_gallery.cpp",
          "createGalleryProgress",
          998);
        v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v32,
                (const char (*)[35])"create gallery progress fail. key:");
        v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, key);
        v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])", gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v32);
        v12 = -1;
      }
      else
      {
        std::map<std::string,std::shared_ptr<GalleryProgress>>::emplace<std::string const&,std::shared_ptr<GalleryProgress>&>(
          &this->gallery_progress_map_,
          key,
          (std::shared_ptr<GalleryProgress> *)(v6 + 64),
          (const std::string *)&this->gallery_progress_map_,
          v14);
        if ( init_progress
          && (v18 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64)),
              init_progress != GalleryProgress::getProgress(v18)) )
        {
          v20 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
          GalleryProgress::setProgress(v20, init_progress);
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_gallery/base_gallery.cpp",
            "createGalleryProgress",
            1006);
          v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v32,
                  (const char (*)[15])"init progress:");
          v22 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
          val = GalleryProgress::getProgress(v22);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
          common::milog::MiLogStream::~MiLogStream(&v32);
        }
        else
        {
          v23 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
          if ( GalleryProgress::isHasUI(v23) )
            BaseGallery::notifyGalleryInfo(this);
        }
        v12 = 0;
      }
    }
    std::shared_ptr<GalleryProgress>::~shared_ptr((std::shared_ptr<GalleryProgress> *const)(v6 + 64));
  }
  result = v12;
  if ( v33 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1016: range 0000000017FBC0D8-0000000017FBC349
int32_t __cdecl BaseGallery::AddGalleryProgressScore(BaseGallery *const this, const std::string *key, int32_t score)
{
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v6; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v12; // rax
  GalleryProgress *v13; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-80h] BYREF
  char v17[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *)v4;
  }
  v3->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)1102416563;
  v3[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)"1 32 8 9 iter:1017";
  v3[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)BaseGallery::AddGalleryProgressScore;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  v3[4]._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::find(&this->gallery_progress_map_, key)._M_node;
  __y._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end(&this->gallery_progress_map_)._M_node;
  if ( std::operator==(v3 + 4, &__y)
    || (v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->(v3 + 4),
        std::operator==<GalleryProgress>(&v6->second, 0LL)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "AddGalleryProgressScore",
      1020);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v16,
           (const char (*)[36])"gallery progress is not exist. key:");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, key);
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = -1;
  }
  else
  {
    v12 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->(v3 + 4);
    v13 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12->second);
    if ( score <= 0 )
      result = GalleryProgress::subProgress(v13, abs32(score));
    else
      result = GalleryProgress::addProgress(v13, score);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1030: range 0000000017FBC34A-0000000017FBC57A
int32_t __cdecl BaseGallery::SetGalleryProgressScore(BaseGallery *const this, const std::string *key, uint32_t score)
{
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v6; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v12; // rax
  GalleryProgress *v13; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-80h] BYREF
  char v17[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *)v4;
  }
  v3->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)1102416563;
  v3[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)"1 32 8 9 iter:1031";
  v3[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)BaseGallery::SetGalleryProgressScore;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  v3[4]._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::find(&this->gallery_progress_map_, key)._M_node;
  __y._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end(&this->gallery_progress_map_)._M_node;
  if ( std::operator==(v3 + 4, &__y)
    || (v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->(v3 + 4),
        std::operator==<GalleryProgress>(&v6->second, 0LL)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "SetGalleryProgressScore",
      1034);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v16,
           (const char (*)[36])"gallery progress is not exist. key:");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, key);
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = -1;
  }
  else
  {
    v12 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->(v3 + 4);
    v13 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12->second);
    result = GalleryProgress::setProgress(v13, score);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1041: range 0000000017FBC57C-0000000017FBC795
uint32_t __cdecl BaseGallery::GetGalleryProgressScore(const BaseGallery *const this, const std::string *key)
{
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v5; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v11; // rax
  std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)"1 32 8 9 iter:1042";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)BaseGallery::GetGalleryProgressScore;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v2[4]._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::find(&this->gallery_progress_map_, key)._M_node;
  __y._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end(&this->gallery_progress_map_)._M_node;
  if ( std::operator==(v2 + 4, &__y)
    || (v5 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->(v2 + 4),
        std::operator==<GalleryProgress>(&v5->second, 0LL)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "GetGalleryProgressScore",
      1045);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v14,
           (const char (*)[36])"gallery progress is not exist. key:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, key);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0;
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->(v2 + 4);
    v12 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11->second);
    result = GalleryProgress::getProgress(v12);
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1052: range 0000000017FBC796-0000000017FBCD44
void __cdecl BaseGallery::onGalleryProgressStageChange(
        BaseGallery *const this,
        const std::string *key,
        uint32_t old_stage,
        uint32_t cur_stage)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v9; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::string *p_source_name; // rdx
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  char v16; // cl
  __int64 v17; // rax
  char v18; // dl
  bool v19; // dl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  char v21; // cl
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  char v25; // cl
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  std::shared_ptr<Event> p_event_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 9 iter:1059 64 16 21 owner_player_ptr:1053 96 16 12 evt_ptr:1065";
  *(_QWORD *)(v4 + 16) = BaseGallery::onGalleryProgressStageChange;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, BaseGallery *const))v7)(v4 + 64, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "onGalleryProgressStageChange",
      1056);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v30,
           (const char (*)[34])"owner player is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    *(std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator *)(v4 + 32) = std::map<std::string,std::shared_ptr<GalleryProgress>>::find(
                                                                                       &this->gallery_progress_map_,
                                                                                       key);
    __y._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end(&this->gallery_progress_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Self *)(v4 + 32),
           &__y)
      || (v9 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *const)(v4 + 32)),
          std::operator==<GalleryProgress>(&v9->second, 0LL)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_gallery.cpp",
        "onGalleryProgressStageChange",
        1062);
      v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v30,
              (const char (*)[36])"gallery progress is not exist. key:");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, key);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      EventUtil::createEvent((data::EventType)(v4 + 96));
      if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v4 + 96), 0LL) )
      {
        p_source_name = &std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96))->source_name;
        std::string::operator=(p_source_name, key);
        v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        v16 = *(_BYTE *)(((unsigned __int64)&v15->param1 >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)((((_BYTE)v15 + 44) & 7) + 3) >= v16 )
        {
          LOBYTE(key) = v16 != 0;
          __asan_report_store4(&v15->param1, key, (_BYTE)v15);
        }
        v15->param1 = cur_stage;
        v17 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        v18 = *(_BYTE *)(((unsigned __int64)(v17 + 48) >> 3) + 0x7FFF8000);
        LOBYTE(key) = v18 != 0;
        v19 = v18 != 0 && v18 <= 3;
        if ( v19 )
          v17 = __asan_report_store4(v17 + 48, key, v19);
        *(_DWORD *)(v17 + 48) = cur_stage >= old_stage;
        v20 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        v21 = *(_BYTE *)(((unsigned __int64)&v20->param3 >> 3) + 0x7FFF8000);
        if ( v21 != 0 && (char)((((_BYTE)v20 + 52) & 7) + 3) >= v21 )
        {
          LOBYTE(key) = v21 != 0;
          __asan_report_store4(&v20->param3, key, (_BYTE)v20);
        }
        v20->param3 = old_stage;
        v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        Uid = Player::getUid(v22);
        v24 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        v25 = *(_BYTE *)(((unsigned __int64)&v24->uid >> 3) + 0x7FFF8000);
        if ( v25 != 0 && (char)((((_BYTE)v24 + 60) & 7) + 3) >= v25 )
        {
          LOBYTE(key) = v25 != 0;
          __asan_report_store4(&v24->uid, key, (_BYTE)v24);
        }
        v24->uid = Uid;
        std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v4 + 96));
        BaseGallery::notifyGroupEvent(this, &p_event_ptr);
        std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 96));
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1078: range 0000000017FBCD46-0000000017FBD382
void __cdecl BaseGallery::onGalleryProgressScoreChange(
        BaseGallery *const this,
        const std::string *key,
        uint32_t cur_score)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v8; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v13; // rax
  std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::string *v15; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t v17; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  char v19; // cl
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v20; // rax
  std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::string *p_source_name; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  char v26; // cl
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  std::shared_ptr<Event> p_event_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 9 iter:1085 64 16 21 owner_player_ptr:1079 96 16 12 evt_ptr:1109";
  *(_QWORD *)(v3 + 16) = BaseGallery::onGalleryProgressScoreChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, BaseGallery *const))v6)(v3 + 64, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "onGalleryProgressScoreChange",
      1082);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v30,
           (const char (*)[34])"owner player is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v30);
    goto LABEL_30;
  }
  *(std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator *)(v3 + 32) = std::map<std::string,std::shared_ptr<GalleryProgress>>::find(
                                                                                     &this->gallery_progress_map_,
                                                                                     key);
  __y._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end(&this->gallery_progress_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Self *)(v3 + 32),
         &__y)
    || (v8 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *const)(v3 + 32)),
        std::operator==<GalleryProgress>(&v8->second, 0LL)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "onGalleryProgressScoreChange",
      1088);
    v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v30,
            (const char (*)[36])"gallery progress is not exist. key:");
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, key);
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v30);
    goto LABEL_30;
  }
  v13 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *const)(v3 + 32));
  v14 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13->second);
  if ( GalleryProgress::isHasUI(v14) )
    BaseGallery::notifyGalleryInfo(this);
  if ( cur_score )
  {
    v20 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *const)(v3 + 32));
    v21 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20->second);
    if ( cur_score != GalleryProgress::getTotalProgress(v21) )
      goto LABEL_30;
    EventUtil::createEvent((data::EventType)(v3 + 96));
    if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 96), 0LL) )
    {
      p_source_name = &std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->source_name;
      std::string::operator=(p_source_name, key);
      v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      Uid = Player::getUid(v23);
      v25 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v26 = *(_BYTE *)(((unsigned __int64)&v25->uid >> 3) + 0x7FFF8000);
      if ( v26 != 0 && (char)((((_BYTE)v25 + 60) & 7) + 3) >= v26 )
      {
        LOBYTE(key) = v26 != 0;
        __asan_report_store4(&v25->uid, key, (_BYTE)v25);
      }
      v25->uid = Uid;
      std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v3 + 96));
      BaseGallery::notifyGroupEvent(this, &p_event_ptr);
      std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
    }
  }
  else
  {
    EventUtil::createEvent((data::EventType)(v3 + 96));
    if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 96), 0LL) )
    {
      v15 = &std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->source_name;
      std::string::operator=(v15, key);
      v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v17 = Player::getUid(v16);
      v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v19 = *(_BYTE *)(((unsigned __int64)&v18->uid >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)((((_BYTE)v18 + 60) & 7) + 3) >= v19 )
      {
        LOBYTE(key) = v19 != 0;
        __asan_report_store4(&v18->uid, key, (_BYTE)v18);
      }
      v18->uid = v17;
      std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v3 + 96));
      BaseGallery::notifyGroupEvent(this, &p_event_ptr);
      std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
    }
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 96));
LABEL_30:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v31 == (char *)v3 )
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

// Line 1120: range 0000000017FBD384-0000000017FBD3C6
uint64_t __cdecl BaseGallery::getSceneTimeMs(BaseGallery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return Scene::getSceneTimeMs(this->scene_);
};

// Line 1125: range 0000000017FBD3C8-0000000017FBD5F8
int32_t __cdecl BaseGallery::forceSetStage(BaseGallery *const this, const std::string *key, uint32_t stage)
{
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v6; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::pointer v12; // rax
  GalleryProgress *v13; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-80h] BYREF
  char v17[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *)v4;
  }
  v3->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)1102416563;
  v3[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)"1 32 8 9 iter:1126";
  v3[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)BaseGallery::forceSetStage;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  v3[4]._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::find(&this->gallery_progress_map_, key)._M_node;
  __y._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end(&this->gallery_progress_map_)._M_node;
  if ( std::operator==(v3 + 4, &__y)
    || (v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->(v3 + 4),
        std::operator==<GalleryProgress>(&v6->second, 0LL)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "forceSetStage",
      1129);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v16,
           (const char (*)[36])"gallery progress is not exist. key:");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, key);
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = -1;
  }
  else
  {
    v12 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator->(v3 + 4);
    v13 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12->second);
    result = GalleryProgress::forceSetStage(v13, stage);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1136: range 0000000017FBD5FA-0000000017FBD68C
std::vector<unsigned int> *__cdecl BaseGallery::getPlayerUidVec(
        std::vector<unsigned int> *retstr,
        const BaseGallery *const this)
{
  std::map<unsigned int,proto::OnlinePlayerInfo> *p_player_info_map; // rsi

  p_player_info_map = &this->player_info_map_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_player_info_map = (std::map<unsigned int,proto::OnlinePlayerInfo> *)24;
    __asan_report_store_n(retstr, 24LL);
  }
  common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,proto::OnlinePlayerInfo>>(retstr, p_player_info_map);
  return retstr;
};

// Line 1142: range 0000000017FBD68E-0000000017FBD900
void __cdecl BaseGallery::flushExhibitionTemporaryDataOnGalleryStop(
        BaseGallery *const this,
        proto::GalleryStopReason reason)
{
  std::shared_ptr<ExhibitionTemporaryData> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  ExhibitionTemporaryData *p_scene; // rdi
  std::set<unsigned int> *p_player_uid_set; // rdx
  unsigned int value; // [rsp+14h] [rbp-9Ch] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<ExhibitionTemporaryData> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<ExhibitionTemporaryData> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<ExhibitionTemporaryData,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 34 exhibition_temporary_data_ptr:1153";
  v2[1]._M_ptr = (std::__shared_ptr<ExhibitionTemporaryData,(__gnu_cxx::_Lock_policy)2>::element_type *)BaseGallery::flushExhibitionTemporaryDataOnGalleryStop;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  gallery_config_ptr = BaseGallery::getGalleryExcelConfig(this);
  if ( gallery_config_ptr )
  {
    value = reason;
    if ( common::tools::MiscUtils::isContains<unsigned int>(&gallery_config_ptr->success_gallery_stop_reasons, &value) )
    {
      std::shared_ptr<ExhibitionTemporaryData>::shared_ptr(v2 + 2, &this->exhibition_temporary_data_ptr_);
      if ( !std::operator==<ExhibitionTemporaryData>(0LL, v2 + 2) )
      {
        p_scene = std::__shared_ptr_access<ExhibitionTemporaryData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ExhibitionTemporaryData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
        p_player_uid_set = &this->player_uid_set_;
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        {
          p_scene = (ExhibitionTemporaryData *)&this->scene_;
          __asan_report_load8();
        }
        ExhibitionTemporaryData::flushTemporaryData(p_scene, this->scene_, p_player_uid_set);
      }
      std::shared_ptr<ExhibitionTemporaryData>::~shared_ptr(v2 + 2);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/base_gallery.cpp",
      "flushExhibitionTemporaryDataOnGalleryStop",
      1146);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v11,
           (const char (*)[40])"gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<ExhibitionTemporaryData,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
