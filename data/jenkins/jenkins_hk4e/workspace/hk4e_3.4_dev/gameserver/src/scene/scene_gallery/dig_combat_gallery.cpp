// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/dig_combat_gallery.cpp

// Line 22: range 00000000179DAD14-00000000179DB19B
void __cdecl DigCombatGallery::onStart(DigCombatGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  DigCombatGallery *v4; // rdx
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDigGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDigGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *v11; // rax
  PlayerAvatarComp *AvatarComp; // r14
  Player *v13; // r14
  std::string v14; // [rsp+0h] [rbp-110h]
  DigCombatGallery *thisa; // [rsp+8h] [rbp-108h]
  const data::GalleryExcelConfig *config_ptr; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+60h] [rbp-B0h] BYREF

  v14._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 holder:30 64 16 19 owner_player_ptr:23 96 16 10 log_ptr:31";
  *(_QWORD *)(v1 + 16) = DigCombatGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, DigCombatGallery *))v5)(v1 + 64, v4);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/dig_combat_gallery.cpp",
      "onStart",
      26);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v19,
           (const char (*)[39])"owner_player_ptr is null. gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v7);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDC5u, v14);
    std::string::~string(&v19);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyDigGalleryStart>();
    config_ptr = BaseGallery::getGalleryExcelConfig(thisa);
    if ( config_ptr )
    {
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyDigGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDigGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyDigGalleryStart::set_group_id(v9, config_ptr->control_group_id);
    }
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyDigGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDigGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    proto_log::PlayerLogBodyDigGalleryStart::set_transaction(v10, &thisa->transaction_);
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    AvatarComp = Player::getAvatarComp(v11);
    std::function<ForeachPolicy ()(Avatar &)>::function<DigCombatGallery::onStart(void)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v19,
      (DigCombatGallery::onStart::<lambda(Avatar&)>)(v1 + 96));
    PlayerAvatarComp::foreachAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v19);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v19);
    v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDigGalleryStart,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyDigGalleryStart> *)(v1 + 96));
    Player::printStatLog(v13, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyDigGalleryStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDigGalleryStart> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v20 == (char *)v1 )
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

// Line 38: range 00000000179DAC88-00000000179DAD12
ForeachPolicy __cdecl DigCombatGallery::onStart(void)::{lambda(Avatar &)#1}::operator()(
        const DigCombatGallery::onStart::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyDigGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t AvatarId; // edx
  uint32_t Level; // edx
  proto_log::CombatAvatarLog *avatar_log; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyDigGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDigGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__log_ptr);
  avatar_log = proto_log::PlayerLogBodyDigGalleryStart::add_avatar_list(v2);
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::CombatAvatarLog::set_avatar_id(avatar_log, AvatarId);
  Level = Creature::getLevel(avatar);
  proto_log::CombatAvatarLog::set_avatar_level(avatar_log, Level);
  return 0;
};
