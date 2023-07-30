// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/ability_mixin.cpp

// Line 37: range 000000001370B824-000000001370B8A0
void __cdecl AbilityDebugMixin::onAdded(AbilityDebugMixin *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    0x11u,
    "./src/ability/ability_mixin.cpp",
    "onAdded",
    38);
  common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v1, (const char (*)[20])"[DEBUG_MIXIN] added");
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 42: range 000000001370B8A2-000000001370B91E
void __cdecl AbilityDebugMixin::onRemoved(AbilityDebugMixin *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    0x11u,
    "./src/ability/ability_mixin.cpp",
    "onRemoved",
    43);
  common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v1, (const char (*)[22])"[DEBUG_MIXIN] removed");
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 50: range 000000001370B920-000000001370C4F0
void __cdecl AbilityAvatarSteerByCameraMixin::handleMixinInvokeEntry(
        AbilityAvatarSteerByCameraMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const proto::Vector *v11; // rax
  const proto::Vector *v12; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  Entity *v19; // rax
  Scene *v20; // r14
  Entity *v21; // rax
  Player *v22; // rax
  std::__shared_ptr_access<data::AvatarSteerByCameraMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  bool *p_can_revive_stamina; // rax
  uint64_t v25; // rdx
  const std::string *ability_data_str; // [rsp+30h] [rbp-1E0h]
  PlayerBasicComp *basic_comp; // [rsp+38h] [rbp-1D8h]
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-1D0h] BYREF
  char v29[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 12 6 pos:94 80 12 6 dir:95 112 12 7 rot:106 144 16 12 actor_ptr:59 176 16 13 avatar_ptr:65 "
                        "208 16 13 player_ptr:76 240 16 12 scene_ptr:82 272 16 28 steer_by_camera_mixin_ptr:88 304 40 38 "
                        "meta_ability_avatar_steer_by_camera:53";
  *(_QWORD *)(v3 + 16) = AbilityAvatarSteerByCameraMixin::handleMixinInvokeEntry;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = 0x4000000;
  v5[536862722] = 62194;
  v5[536862722] = 0x4000000;
  v5[536862723] = 62194;
  v5[536862723] = 0x4000000;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = 62194;
  v5[536862729] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  proto::AbilityInvokeEntry::head(entry);
  ability_data_str = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  proto::AbilityMixinAvatarSteerByCamera::AbilityMixinAvatarSteerByCamera((proto::AbilityMixinAvatarSteerByCamera *const)(v3 + 304));
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 304, ability_data_str) != 1 )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      56);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v28, (const char (*)[22])"ParseFromString fails");
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v3 + 144));
    if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v3 + 144), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        62);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v28, (const char (*)[18])"actor_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v3 + 176));
      if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 176), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "handleMixinInvokeEntry",
          68);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v28, (const char (*)[19])"avatar_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      else
      {
        v6 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        if ( !Entity::isOnScene((const Entity *const)v6) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/ability/ability_mixin.cpp",
            "handleMixinInvokeEntry",
            73);
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v28,
            (const char (*)[26])"avatar_ptr isOnScene fail");
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 152LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 152LL);
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v8)(v3 + 208, v7);
          if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 208), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              0x13u,
              "./src/ability/ability_mixin.cpp",
              "handleMixinInvokeEntry",
              79);
            v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                   &v28,
                   (const char (*)[19])"player_ptr is null");
            v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, v10);
            common::milog::MiLogStream::~MiLogStream(&v28);
          }
          else
          {
            std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            Entity::getScene((const Entity *const)(v3 + 240));
            if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 240), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v28,
                &common::milog::MiLogDefault::default_log_obj_,
                0x13u,
                "./src/ability/ability_mixin.cpp",
                "handleMixinInvokeEntry",
                85);
              common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v28,
                (const char (*)[18])"scene_ptr is null");
              common::milog::MiLogStream::~MiLogStream(&v28);
            }
            else
            {
              std::dynamic_pointer_cast<data::AvatarSteerByCameraMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v3 + 272));
              if ( std::operator==<data::AvatarSteerByCameraMixin>(
                     (const std::shared_ptr<data::AvatarSteerByCameraMixin> *)(v3 + 272),
                     0LL) )
              {
                common::milog::MiLogStream::create(
                  &v28,
                  &common::milog::MiLogDefault::default_log_obj_,
                  0x13u,
                  "./src/ability/ability_mixin.cpp",
                  "handleMixinInvokeEntry",
                  91);
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v28,
                  (const char (*)[33])"steer_by_camera_mxin_ptr is null");
                common::milog::MiLogStream::~MiLogStream(&v28);
              }
              else
              {
                v11 = proto::AbilityMixinAvatarSteerByCamera::target_pos((const proto::AbilityMixinAvatarSteerByCamera *const)(v3 + 304));
                Vector3::Vector3((Vector3 *const)(v3 + 48), v11);
                v12 = proto::AbilityMixinAvatarSteerByCamera::target_dir((const proto::AbilityMixinAvatarSteerByCamera *const)(v3 + 304));
                Vector3::Vector3((Vector3 *const)(v3 + 80), v12);
                if ( std::isinf(*(float *)(v3 + 80))
                  || std::isnan(*(float *)(v3 + 80))
                  || (float)(*(float *)(v3 + 80) + 1.0) < -0.00000011920929
                  || (float)(*(float *)(v3 + 80) - 1.0) > 0.00000011920929
                  || std::isinf(*(float *)(v3 + 84))
                  || std::isnan(*(float *)(v3 + 84))
                  || (float)(*(float *)(v3 + 84) + 1.0) < -0.00000011920929
                  || (float)(*(float *)(v3 + 84) - 1.0) > 0.00000011920929
                  || std::isinf(*(float *)(v3 + 88))
                  || std::isnan(*(float *)(v3 + 88))
                  || (float)(*(float *)(v3 + 88) + 1.0) < -0.00000011920929
                  || (float)(*(float *)(v3 + 88) - 1.0) > 0.00000011920929 )
                {
                  common::milog::MiLogStream::create(
                    &v28,
                    &common::milog::MiLogDefault::default_log_obj_,
                    0x13u,
                    "./src/ability/ability_mixin.cpp",
                    "handleMixinInvokeEntry",
                    102);
                  v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          &v28,
                          (const char (*)[17])"invalid rot, x: ");
                  v15 = common::milog::MiLogStream::operator<<<float,(float *)0>(v14, (const float *)(v3 + 80));
                  v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                          v15,
                          (const char (*)[5])off_25035020);
                  v17 = common::milog::MiLogStream::operator<<<float,(float *)0>(v16, (const float *)(v3 + 84));
                  v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v17,
                          (const char (*)[9])" rot.z: ");
                  common::milog::MiLogStream::operator<<<float,(float *)0>(v18, (const float *)(v3 + 88));
                  common::milog::MiLogStream::~MiLogStream(&v28);
                }
                else
                {
                  *(Vector3 *)(v3 + 112) = rotationToDirection((const Vector3 *)(v3 + 80), 1);
                  v19 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                  Entity::setRotation(v19, (const Vector3 *)(v3 + 112));
                  v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
                  v21 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                  Scene::entityMoveTo(v20, v21, (const Vector3 *)(v3 + 48));
                  v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
                  basic_comp = Player::getBasicComp(v22);
                  v23 = std::__shared_ptr_access<data::AvatarSteerByCameraMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AvatarSteerByCameraMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 272));
                  p_can_revive_stamina = &v23->can_revive_stamina;
                  if ( *(_BYTE *)(((unsigned __int64)p_can_revive_stamina >> 3) + 0x7FFF8000) != 0
                    && ((unsigned __int8)p_can_revive_stamina & 7) >= *(_BYTE *)(((unsigned __int64)p_can_revive_stamina >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_load1(p_can_revive_stamina);
                  }
                  if ( !v23->can_revive_stamina )
                  {
                    v25 = PlayerBasicComp::getPlayerTimeMs(basic_comp) + 1000;
                    PlayerBasicComp::setLastStaminaCostTimeMs(basic_comp, v25);
                  }
                }
              }
              std::shared_ptr<data::AvatarSteerByCameraMixin>::~shared_ptr((std::shared_ptr<data::AvatarSteerByCameraMixin> *const)(v3 + 272));
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 240));
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 208));
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 176));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 144));
  }
  proto::AbilityMixinAvatarSteerByCamera::~AbilityMixinAvatarSteerByCamera((proto::AbilityMixinAvatarSteerByCamera *const)(v3 + 304));
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 120: range 000000001370C4F2-000000001370D1CC
void __cdecl AbilityCostStaminaMixin::handleMixinInvokeEntry(
        AbilityCostStaminaMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  ActorAbility *v7; // r14
  std::__shared_ptr_access<data::CostStaminaMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  ActorAbility *v9; // r14
  std::__shared_ptr_access<data::CostStaminaMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GadgetVehicleComp *v11; // rax
  GadgetVehicleComp *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *v17; // rax
  Avatar *v18; // rax
  Entity *v19; // rax
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  Avatar *v22; // rax
  bool is_swim; // [rsp+27h] [rbp-1F9h]
  float cost_stamina_delta; // [rsp+28h] [rbp-1F8h]
  float cost_stamina_ratio; // [rsp+2Ch] [rbp-1F4h]
  float sub_stamina; // [rsp+34h] [rbp-1ECh]
  float sub_staminaa; // [rsp+34h] [rbp-1ECh]
  const proto::AbilityInvokeEntryHead *head; // [rsp+38h] [rbp-1E8h]
  const std::string *ability_data_str; // [rsp+40h] [rbp-1E0h]
  PlayerBasicComp *basic_comp; // [rsp+48h] [rbp-1D8h]
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-1D0h] BYREF
  char v32[432]; // [rsp+70h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 15 sub_stamina:178 64 16 13 actor_ptr:130 96 16 15 ability_ptr:136 128 16 26 cost_stamina"
                        "_mixin_ptr:142 160 16 14 avatar_ptr:150 192 16 14 player_ptr:170 224 16 16 modifier_ptr:185 256 "
                        "24 29 meta_ability_cost_stamina:123 320 28 24 stamina_change_param:181";
  *(_QWORD *)(v4 + 16) = AbilityCostStaminaMixin::handleMixinInvokeEntry;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = 0x4000000;
  v6[536862731] = -202116109;
  head = proto::AbilityInvokeEntry::head(entry);
  ability_data_str = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  proto::AbilityMixinCostStamina::AbilityMixinCostStamina((proto::AbilityMixinCostStamina *const)(v4 + 256));
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v4 + 256, ability_data_str) != 1 )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      126);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v31, (const char (*)[22])"ParseFromString fails");
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  else
  {
    is_swim = proto::AbilityMixinCostStamina::is_swim((const proto::AbilityMixinCostStamina *const)(v4 + 256));
    BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v4 + 64));
    if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        133);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v31, (const char (*)[18])"actor_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    else
    {
      BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v4 + 96));
      if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v4 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "handleMixinInvokeEntry",
          139);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v31, (const char (*)[20])"ability_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
      else
      {
        std::dynamic_pointer_cast<data::CostStaminaMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v4 + 128));
        if ( std::operator==<data::CostStaminaMixin>((const std::shared_ptr<data::CostStaminaMixin> *)(v4 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/ability/ability_mixin.cpp",
            "handleMixinInvokeEntry",
            145);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v31,
            (const char (*)[30])"cost_stamina_mxin_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
        else
        {
          v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)(v4 + 224), 0LL);
          std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v4 + 192), 0LL);
          v8 = std::__shared_ptr_access<data::CostStaminaMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::CostStaminaMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          *(float *)v3.m128i_i32 = ActorAbility::evaluate(
                                     v7,
                                     &v8->cost_stamina_delta,
                                     (CreaturePtr *)(v4 + 192),
                                     (DieCreatureRecordPtr *)(v4 + 224));
          cost_stamina_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 192));
          std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)(v4 + 224));
          v9 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)(v4 + 224), 0LL);
          std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v4 + 192), 0LL);
          v10 = std::__shared_ptr_access<data::CostStaminaMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::CostStaminaMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          *(float *)v3.m128i_i32 = ActorAbility::evaluate(
                                     v9,
                                     &v10->cost_stamina_ratio,
                                     (CreaturePtr *)(v4 + 192),
                                     (DieCreatureRecordPtr *)(v4 + 224));
          cost_stamina_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 192));
          std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)(v4 + 224));
          std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v4 + 160));
          if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 160), 0LL) )
          {
            std::dynamic_pointer_cast<Gadget,Creature>((const std::shared_ptr<Creature> *)(v4 + 192));
            if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                0x13u,
                "./src/ability/ability_mixin.cpp",
                "handleMixinInvokeEntry",
                156);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v31,
                (const char (*)[34])"avatar_ptr and gadget_ptr is null");
              common::milog::MiLogStream::~MiLogStream(&v31);
            }
            else
            {
              std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
              EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v4 + 224));
              if ( std::operator==<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v4 + 224)) )
              {
                common::milog::MiLogStream::create(
                  &v31,
                  &common::milog::MiLogDefault::default_log_obj_,
                  0x13u,
                  "./src/ability/ability_mixin.cpp",
                  "handleMixinInvokeEntry",
                  162);
                common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v31,
                  (const char (*)[32])"gadget_vehicle_comp_ptr is null");
                common::milog::MiLogStream::~MiLogStream(&v31);
              }
              else
              {
                v11 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                sub_stamina = (float)(GadgetVehicleComp::getMaxStamina(v11) * cost_stamina_ratio) + cost_stamina_delta;
                if ( *(_BYTE *)(((unsigned __int64)&this->INTERVAL_TIME >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->INTERVAL_TIME >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->INTERVAL_TIME);
                }
                sub_staminaa = (float)this->INTERVAL_TIME * sub_stamina;
                v12 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                GadgetVehicleComp::changeCurStamina(v12, -sub_staminaa, 1);
              }
              std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v4 + 224));
            }
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 192));
          }
          else
          {
            v13 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
              v13 = __asan_report_load8(v13);
            v14 = *(_QWORD *)v13 + 152LL;
            if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
              v13 = __asan_report_load8(*(_QWORD *)v13 + 152LL);
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v14)(v4 + 192, v13);
            if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 192), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                0x13u,
                "./src/ability/ability_mixin.cpp",
                "handleMixinInvokeEntry",
                173);
              v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      &v31,
                      (const char (*)[19])"player_ptr is null");
              v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v15, v16);
              common::milog::MiLogStream::~MiLogStream(&v31);
            }
            else
            {
              v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
              basic_comp = Player::getBasicComp(v17);
              *(float *)v3.m128i_i32 = PlayerBasicComp::getMaxStamina(basic_comp);
              *(float *)(v4 + 48) = (float)(cost_stamina_ratio * COERCE_FLOAT(_mm_cvtsi128_si32(v3)))
                                  + cost_stamina_delta;
              if ( *(_BYTE *)(((unsigned __int64)&this->INTERVAL_TIME >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->INTERVAL_TIME >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->INTERVAL_TIME);
              }
              *(float *)(v4 + 48) = *(float *)(v4 + 48) * (float)this->INTERVAL_TIME;
              v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              Avatar::updateStaminaCost(v18, (float *)(v4 + 48), 0LL);
              *(_QWORD *)(v4 + 320) = 0LL;
              *(_QWORD *)(v4 + 328) = 0LL;
              *(_QWORD *)(v4 + 336) = 0LL;
              *(_DWORD *)(v4 + 344) = 0;
              *(_DWORD *)(v4 + 320) = 6;
              v19 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              *(_DWORD *)(v4 + 324) = Entity::getMotionState(v19);
              v20 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              *(_DWORD *)(v4 + 332) = ActorAbility::getAbilityNameHash(v20);
              BaseAbilityMixin::getModifier((const BaseAbilityMixin *const)(v4 + 224));
              if ( std::operator!=<ActorModifier>(0LL, (const std::shared_ptr<ActorModifier> *)(v4 + 224)) )
              {
                v21 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                *(_DWORD *)(v4 + 336) = ActorModifier::getModifierNameHash(v21);
              }
              *(_DWORD *)(v4 + 340) = proto::AbilityInvokeEntryHead::local_id(head);
              v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              Avatar::changeStamina(v22, -*(float *)(v4 + 48), (const StaminaChangeParam *)(v4 + 320), is_swim);
              std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v4 + 224));
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 192));
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 160));
        }
        std::shared_ptr<data::CostStaminaMixin>::~shared_ptr((std::shared_ptr<data::CostStaminaMixin> *const)(v4 + 128));
      }
      std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v4 + 96));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 64));
  }
  proto::AbilityMixinCostStamina::~AbilityMixinCostStamina((proto::AbilityMixinCostStamina *const)(v4 + 256));
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 198: range 000000001370D1CE-000000001370D731
void __cdecl AbilityReviveElemEnergyMixin::handleMixinInvokeEntry(
        AbilityReviveElemEnergyMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  ActorAbility *v7; // r14
  std::__shared_ptr_access<data::ReviveElemEnergyMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  ActorAbility *v9; // r14
  std::__shared_ptr_access<data::ReviveElemEnergyMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Creature *v11; // r14
  float ratio; // [rsp+24h] [rbp-FCh]
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+70h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 13 actor_ptr:199 64 16 32 revive_elem_energy_mixin_ptr:205 96 16 15 ability_ptr:211";
  *(_QWORD *)(v4 + 16) = AbilityReviveElemEnergyMixin::handleMixinInvokeEntry;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v4 + 32));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      202);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    std::dynamic_pointer_cast<data::ReviveElemEnergyMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v4 + 64));
    if ( std::operator==<data::ReviveElemEnergyMixin>(
           (const std::shared_ptr<data::ReviveElemEnergyMixin> *)(v4 + 64),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        208);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v15,
        (const char (*)[37])"revive_elem_energy_mixin_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v4 + 96));
      if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v4 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "handleMixinInvokeEntry",
          214);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v15, (const char (*)[20])"ability_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
      else
      {
        v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v8 = std::__shared_ptr_access<data::ReviveElemEnergyMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ReviveElemEnergyMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        *(float *)v3.m128i_i32 = ActorAbility::evaluate(v7, &v8->ratio, &p_global_value_source_ptr, &p_record_ptr);
        ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
        v9 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v10 = std::__shared_ptr_access<data::ReviveElemEnergyMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ReviveElemEnergyMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        *(float *)v3.m128i_i32 = ActorAbility::evaluate(
                                   v9,
                                   &v10->base_energy,
                                   &p_global_value_source_ptr,
                                   &p_record_ptr);
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
        v11 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&p_record_ptr, 0LL);
        Creature::changeCurEnergy(
          v11,
          COERCE_FLOAT(_mm_cvtsi128_si32(v3)) * ratio,
          1,
          (FightPropNtfParamPtr *)&p_record_ptr);
        std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&p_record_ptr);
      }
      std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v4 + 96));
    }
    std::shared_ptr<data::ReviveElemEnergyMixin>::~shared_ptr((std::shared_ptr<data::ReviveElemEnergyMixin> *const)(v4 + 64));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 32));
  if ( v16 == (char *)v4 )
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

// Line 226: range 000000001370D732-000000001370DDE8
void __cdecl AbilityElementShieldMixin::init(AbilityElementShieldMixin *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActorAbility *v5; // r14
  std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ActorAbility *v7; // r14
  std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  float v10; // xmm0_4
  float max_shield; // xmm0_4
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__detail::_Node_const_iterator<std::pair<const data::ElementType,data::ConfigElementShieldResistance>,false,false>::pointer v14; // rax
  float shield_hp_ratio; // [rsp+1Ch] [rbp-134h]
  float shield_hp; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator_base<std::pair<const data::ElementType,data::ConfigElementShieldResistance>,false> __y; // [rsp+28h] [rbp-128h] BYREF
  const data::ConfigElementShieldResistanceMap *shield_damage_ratios_map; // [rsp+30h] [rbp-120h]
  const data::ConfigElementShieldResistance *config_shield_resistance; // [rsp+38h] [rbp-118h]
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 6 it:250 64 16 13 actor_ptr:227 96 16 15 ability_ptr:233 128 16 28 element_shield_mixin_ptr:239";
  *(_QWORD *)(v2 + 16) = AbilityElementShieldMixin::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 64));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "init",
      230);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v22, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 96));
    if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "init",
        236);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v22, (const char (*)[20])"ability_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      std::dynamic_pointer_cast<data::ElementShieldMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 128));
      if ( std::operator==<data::ElementShieldMixin>((const std::shared_ptr<data::ElementShieldMixin> *)(v2 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "init",
          242);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v22,
          (const char (*)[33])"element_shield_mixin_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        v5 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v6 = std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        *(float *)v1.m128i_i32 = ActorAbility::evaluate(
                                   v5,
                                   &v6->shield_hpratio,
                                   &p_global_value_source_ptr,
                                   &p_record_ptr);
        shield_hp_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
        v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v8 = std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        *(float *)v1.m128i_i32 = ActorAbility::evaluate(v7, &v8->shield_hp, &p_global_value_source_ptr, &p_record_ptr);
        shield_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
        v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        *(float *)v1.m128i_i32 = Creature::getProp(v9, FIGHT_PROP_MAX_HP);
        v10 = (float)(COERCE_FLOAT(_mm_cvtsi128_si32(v1)) * shield_hp_ratio) + shield_hp;
        if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->max_shield_);
        }
        this->max_shield_ = v10;
        max_shield = this->max_shield_;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->cur_shield_);
        }
        this->cur_shield_ = max_shield;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&p_record_ptr);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_record_ptr);
        shield_damage_ratios_map = &JsonConfigMgr::getGlobalCombatConfig(&v12->design_config.json_config_mgr)->element_shield.shield_damage_ratios_map;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_record_ptr);
        v13 = std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        *(std::unordered_map<data::ElementType,data::ConfigElementShieldResistance>::const_iterator *)(v2 + 32) = std::unordered_map<data::ElementType,data::ConfigElementShieldResistance>::find(shield_damage_ratios_map, &v13->element_type);
        __y._M_cur = std::unordered_map<data::ElementType,data::ConfigElementShieldResistance>::end(shield_damage_ratios_map)._M_cur;
        if ( std::__detail::operator!=<std::pair<data::ElementType const,data::ConfigElementShieldResistance>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<const data::ElementType,data::ConfigElementShieldResistance>,false> *)(v2 + 32),
               &__y) )
        {
          v14 = std::__detail::_Node_const_iterator<std::pair<data::ElementType const,data::ConfigElementShieldResistance>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::ElementType,data::ConfigElementShieldResistance>,false,false> *const)(v2 + 32));
          config_shield_resistance = &v14->second;
          std::vector<float>::operator=(&this->element_damage_ratio_vec_, &v14->second.damage_ratio);
        }
      }
      std::shared_ptr<data::ElementShieldMixin>::~shared_ptr((std::shared_ptr<data::ElementShieldMixin> *const)(v2 + 128));
    }
    std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 96));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
  if ( v23 == (char *)v2 )
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

// Line 259: range 000000001370DDEA-000000001370E397
void __cdecl AbilityElementShieldMixin::onBeingHit(AbilityElementShieldMixin *const this, AttackResult *attack_result)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __m128i v5; // xmm0
  std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ActorAbility *v7; // r14
  std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float *v9; // rax
  float *v10; // rdx
  float v11; // xmm0_4
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  float __b; // [rsp+18h] [rbp-F8h] BYREF
  float shield_angle; // [rsp+1Ch] [rbp-F4h]
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 actor_ptr:260 64 16 28 element_shield_mixin_ptr:266 96 16 15 ability_ptr:272";
  *(_QWORD *)(v2 + 16) = AbilityElementShieldMixin::onBeingHit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 32));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "onBeingHit",
      263);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v19, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    std::dynamic_pointer_cast<data::ElementShieldMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 64));
    if ( std::operator==<data::ElementShieldMixin>((const std::shared_ptr<data::ElementShieldMixin> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onBeingHit",
        269);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v19,
        (const char (*)[33])"element_shield_mixin_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 96));
      v5 = 0LL;
      shield_angle = 0.0;
      if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 96), 0LL) )
      {
        v6 = std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v6->shield_angle >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v6->shield_angle >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v6->shield_angle);
        }
        shield_angle = v6->shield_angle.fixed_value;
      }
      else
      {
        v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v8 = std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ElementShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        *(float *)v5.m128i_i32 = ActorAbility::evaluate(
                                   v7,
                                   &v8->shield_angle,
                                   &p_global_value_source_ptr,
                                   &p_record_ptr);
        shield_angle = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
      }
      if ( *(_BYTE *)(((unsigned __int64)&attack_result->attackee_hit_force_angle >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&attack_result->attackee_hit_force_angle >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&attack_result->attackee_hit_force_angle);
      }
      if ( attack_result->attackee_hit_force_angle <= shield_angle )
      {
        __b = 0.0;
        v9 = (float *)std::min<float>(&attack_result->server_damage, &__b);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        v11 = *v10;
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_store4(&attack_result->server_damage);
        }
        attack_result->server_damage = v11;
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/ability_mixin.cpp",
          "onBeingHit",
          289);
        v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v19,
                (const char (*)[38])"[ELEMENT SHILED] onBeingHit creature:");
        v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v14 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v12, v13);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v14, (const char (*)[21])" damage set to zero.");
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 96));
    }
    std::shared_ptr<data::ElementShieldMixin>::~shared_ptr((std::shared_ptr<data::ElementShieldMixin> *const)(v2 + 64));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  if ( v20 == (char *)v2 )
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

// Line 295: range 000000001370E398-000000001370E686
void __cdecl AbilityElementShieldMixin::handleMixinInvokeEntry(
        AbilityElementShieldMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  proto::AbilityMixinElementShield *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  uint32_t v10; // ecx
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (proto::AbilityMixinElementShield *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (proto::AbilityMixinElementShield *)v4;
  }
  v3->_vptr_MessageLite = (int (**)(...))1102416563;
  v3->_internal_metadata_.ptr_ = "1 48 48 23 meta_element_shield:296";
  *(_QWORD *)&v3->absorb_type_ = AbilityElementShieldMixin::handleMixinInvokeEntry;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  proto::AbilityMixinElementShield::AbilityMixinElementShield(v3 + 1);
  v6 = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(&v3[1], v6) != 1 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      299);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v12,
      (const char (*)[51])"AbilityElementShieldMixin parse from string failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      302);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v12,
           (const char (*)[39])"AbilityElementShieldMixin player_num_=");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->player_num_);
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" changed to ");
    val = proto::AbilityMixinElementShield::player_num(v3 + 1);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = proto::AbilityMixinElementShield::player_num(v3 + 1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->player_num_);
    }
    this->player_num_ = v10;
  }
  proto::AbilityMixinElementShield::~AbilityMixinElementShield(v3 + 1);
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v3->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 307: range 000000001370E688-000000001370E6EF
void __cdecl AbilityElementShieldMixin::fillRecoverInfo(
        const AbilityElementShieldMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->player_num_);
  }
  proto::AbilityMixinRecoverInfo::add_data_list(info, this->player_num_);
};

// Line 314: range 000000001370E6F0-000000001370ECF8
void __cdecl AbilityEliteShieldMixin::init(AbilityEliteShieldMixin *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ActorAbility *v5; // r14
  std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ActorAbility *v7; // r14
  std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  bool *p_infinite_shield; // rax
  float v12; // xmm0_4
  float max_shield; // xmm0_4
  float shield_hp_ratio; // [rsp+14h] [rbp-FCh]
  float shield_hp; // [rsp+18h] [rbp-F8h]
  float max_hp; // [rsp+1Ch] [rbp-F4h]
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 actor_ptr:315 64 16 15 ability_ptr:321 96 16 26 elite_shield_mixin_ptr:327";
  *(_QWORD *)(v2 + 16) = AbilityEliteShieldMixin::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 32));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "init",
      318);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v19, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 64));
    if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "init",
        324);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"ability_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      std::dynamic_pointer_cast<data::EliteShieldMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 96));
      if ( std::operator==<data::EliteShieldMixin>((const std::shared_ptr<data::EliteShieldMixin> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "init",
          330);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v19,
          (const char (*)[31])"elite_shield_mixin_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        v5 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v6 = std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(float *)v1.m128i_i32 = ActorAbility::evaluate(
                                   v5,
                                   &v6->shield_hpratio,
                                   &p_global_value_source_ptr,
                                   &p_record_ptr);
        shield_hp_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
        v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v8 = std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(float *)v1.m128i_i32 = ActorAbility::evaluate(v7, &v8->shield_hp, &p_global_value_source_ptr, &p_record_ptr);
        shield_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
        v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        *(float *)v1.m128i_i32 = Creature::getProp(v9, FIGHT_PROP_MAX_HP);
        max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
        v10 = std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        p_infinite_shield = &v10->infinite_shield;
        if ( *(_BYTE *)(((unsigned __int64)p_infinite_shield >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_infinite_shield & 7) >= *(_BYTE *)(((unsigned __int64)p_infinite_shield >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(p_infinite_shield);
        }
        if ( v10->infinite_shield )
          v12 = 3.4028235e38;
        else
          v12 = (float)(max_hp * shield_hp_ratio) + shield_hp;
        if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->max_shield_);
        }
        this->max_shield_ = v12;
        max_shield = this->max_shield_;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->cur_shield_);
        }
        this->cur_shield_ = max_shield;
      }
      std::shared_ptr<data::EliteShieldMixin>::~shared_ptr((std::shared_ptr<data::EliteShieldMixin> *const)(v2 + 96));
    }
    std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 64));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  if ( v20 == (char *)v2 )
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

// Line 341: range 000000001370ECFA-000000001370ED0C
void __cdecl AbilityEliteShieldMixin::handleMixinInvokeEntry(
        AbilityEliteShieldMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  ;
};

// Line 345: range 000000001370ED0E-000000001370FFC9
void __cdecl AbilityEliteShieldMixin::onBeingHit(AbilityEliteShieldMixin *const this, AttackResult *attack_result)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __m128i v5; // xmm0
  std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ActorAbility *v7; // r14
  std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  AbilityDataMgr *p_ability_data_mgr; // r15
  float cur_shield; // r14d
  Creature *v11; // rsi
  float *p_server_damage; // rcx
  double v13; // xmm0_8
  float *v14; // rax
  float *v15; // rdx
  float v16; // xmm0_4
  double v17; // xmm0_8
  float *v18; // rax
  float *v19; // rdx
  float v20; // xmm0_4
  Group *v21; // rax
  ChallengeComp *ChallengeComp; // r15
  float v23; // r14d
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  __m128i max_shield_low; // xmm0
  ActorAbility *v35; // r14
  double v36; // xmm0_8
  std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  unsigned __int64 v38; // rax
  ActorAbility *v39; // r14
  std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  __m128i v41; // xmm0
  ActorAbility *v42; // r14
  std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  float Prop; // xmm0_4
  __m128i v46; // xmm0
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  __m128i v48; // xmm0
  const float *v49; // rax
  _DWORD *v50; // rdx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  float v52; // xmm0_4
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  Creature *v54; // rax
  FightPropComp *FightPropComp; // rax
  PileBoolValue *IsLockHealHp; // rax
  Creature *v58; // r14
  const std::string *shield_type; // [rsp+8h] [rbp-248h]
  float shield_typea; // [rsp+8h] [rbp-248h]
  float __a; // [rsp+20h] [rbp-230h] BYREF
  float shield_angle; // [rsp+24h] [rbp-22Ch]
  float ability_ratio; // [rsp+28h] [rbp-228h]
  float heal_hp_percent; // [rsp+2Ch] [rbp-224h]
  float heal_limit_caster_percent; // [rsp+30h] [rbp-220h]
  float caster_max_hp; // [rsp+34h] [rbp-21Ch]
  std::tuple_element<0,std::pair<float,float> >::type *delta_shield; // [rsp+38h] [rbp-218h]
  std::tuple_element<1,std::pair<float,float> >::type *delta_damgae; // [rsp+40h] [rbp-210h]
  std::pair<float,float> __in; // [rsp+48h] [rbp-208h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+50h] [rbp-200h] BYREF
  common::milog::MiLogStream v72; // [rsp+60h] [rbp-1F0h] BYREF
  char v73[464]; // [rsp+80h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 11 heal_hp:411 64 16 13 actor_ptr:346 96 16 26 elite_shield_mixin_ptr:352 128 16 15 abili"
                        "ty_ptr:358 160 16 16 attacker_ptr:377 192 16 20 notify_param_ptr:407 224 16 14 caster_ptr:415 25"
                        "6 16 13 group_ptr:383 288 96 21 change_hp_context:434";
  *(_QWORD *)(v2 + 16) = AbilityEliteShieldMixin::onBeingHit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862732] = -202116109;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 64));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v72,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "onBeingHit",
      349);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v72, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v72);
  }
  else
  {
    std::dynamic_pointer_cast<data::EliteShieldMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 96));
    if ( std::operator==<data::EliteShieldMixin>((const std::shared_ptr<data::EliteShieldMixin> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onBeingHit",
        355);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v72,
        (const char (*)[31])"elite_shield_mixin_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v72);
    }
    else
    {
      BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 128));
      v5 = 0LL;
      shield_angle = 0.0;
      if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 128), 0LL) )
      {
        v6 = std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v6->shield_angle >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v6->shield_angle >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v6->shield_angle);
        }
        shield_angle = v6->shield_angle.fixed_value;
      }
      else
      {
        v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 256), 0LL);
        v8 = std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(float *)v5.m128i_i32 = ActorAbility::evaluate(v7, &v8->shield_angle, (CreaturePtr *)(v2 + 256), &p_record_ptr);
        shield_angle = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 256));
        std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
      }
      if ( *(_BYTE *)(((unsigned __int64)&attack_result->attackee_hit_force_angle >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&attack_result->attackee_hit_force_angle >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&attack_result->attackee_hit_force_angle);
      }
      if ( attack_result->attackee_hit_force_angle <= shield_angle )
      {
        p_ability_data_mgr = &ServiceBox::findService<GameserverService>()->ability_data_mgr;
        shield_type = &std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->shield_type;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_shield_);
        }
        cur_shield = this->cur_shield_;
        v11 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        __in = AbilityDataMgr::tryCostEliteShield(p_ability_data_mgr, v11, attack_result, cur_shield, shield_type);
        delta_shield = std::get<0ul,float,float>(&__in);
        delta_damgae = std::get<1ul,float,float>(&__in);
        p_server_damage = &attack_result->server_damage;
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&attack_result->ori_server_damage);
        }
        *(float *)&v13 = attack_result->ori_server_damage;
        if ( *(_BYTE *)(((unsigned __int64)delta_damgae >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)delta_damgae & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_damgae >> 3)
                                                                         + 0x7FFF8000) )
        {
          v13 = __asan_report_load4(delta_damgae);
        }
        __a = *(float *)&v13 - *delta_damgae;
        v14 = (float *)std::min<float>(&__a, p_server_damage);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        v16 = *v15;
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_store4(&attack_result->server_damage);
        }
        attack_result->server_damage = v16;
        __a = 0.0;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_shield_);
        }
        *(float *)&v17 = this->cur_shield_;
        if ( *(_BYTE *)(((unsigned __int64)delta_shield >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)delta_shield & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_shield >> 3)
                                                                         + 0x7FFF8000) )
        {
          v17 = __asan_report_load4(delta_shield);
        }
        *(float *)(v2 + 48) = *(float *)&v17 - *delta_shield;
        v18 = (float *)std::clamp<float>((const float *)(v2 + 48), &__a, &this->max_shield_);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        v20 = *v19;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->cur_shield_);
        }
        this->cur_shield_ = v20;
        AttackResult::getAttacker((const AttackResult *const)(v2 + 160));
        if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 160), 0LL) )
        {
          std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          Creature::findTopOwnerOrSelf((Creature *const)&p_record_ptr);
          std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v2 + 224));
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&p_record_ptr);
          if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v2 + 224), 0LL) )
          {
            std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
            Entity::getGroup((const Entity *const)(v2 + 256));
            if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 256), 0LL) )
            {
              v21 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
              ChallengeComp = Group::getChallengeComp(v21);
              if ( *(_BYTE *)(((unsigned __int64)delta_damgae >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)delta_damgae & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_damgae >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(delta_damgae);
              }
              v23 = *delta_damgae;
              std::shared_ptr<Creature>::shared_ptr(
                (std::shared_ptr<Creature> *const)&p_record_ptr,
                (const std::shared_ptr<Creature> *)(v2 + 64));
              ChallengeComp::onShieldAbsorbDamage(ChallengeComp, (CreaturePtr *)&p_record_ptr, v23);
              std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&p_record_ptr);
            }
            std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 256));
          }
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 224));
        }
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/ability_mixin.cpp",
          "onBeingHit",
          393);
        v24 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v72,
                (const char (*)[36])"[ELITE SHILED] onBeingHit creature:");
        v25 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v26 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v24, v25);
        v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v26, (const char (*)[14])"delta_shield:");
        v28 = common::milog::MiLogStream::operator<<<float,(float *)0>(v27, delta_shield);
        v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v28, (const char (*)[14])" cur_shield_:");
        v30 = common::milog::MiLogStream::operator<<<float,(float *)0>(v29, &this->cur_shield_);
        v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v30, (const char (*)[15])" delta_damgae:");
        v32 = common::milog::MiLogStream::operator<<<float,(float *)0>(v31, delta_damgae);
        v33 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v32, (const char (*)[13])" cur_damage:");
        common::milog::MiLogStream::operator<<<float,(float *)0>(v33, &attack_result->server_damage);
        common::milog::MiLogStream::~MiLogStream(&v72);
        if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/ability/ability_mixin.cpp",
            "onBeingHit",
            398);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v72,
            (const char (*)[20])"ability_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v72);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->max_shield_);
          }
          max_shield_low = (__m128i)LODWORD(this->max_shield_);
          if ( *(float *)max_shield_low.m128i_i32 != 0.0 )
          {
            v35 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->max_shield_);
            }
            *(float *)&v36 = this->max_shield_;
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              v36 = __asan_report_load4(&this->cur_shield_);
            }
            shield_typea = (float)(*(float *)&v36 - this->cur_shield_) / this->max_shield_;
            v37 = std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            max_shield_low = (__m128i)LODWORD(shield_typea);
            ActorAbility::setServerFloatParam(v35, &v37->cost_shield_ratio_name, shield_typea);
          }
          common::tools::perf::make_shared<FightPropNtfParam>();
          v38 = (unsigned __int64)std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
          if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v38 >> 3) + 0x7FFF8000) <= 3 )
            v38 = __asan_report_store4(v38);
          *(_DWORD *)v38 = 3;
          v39 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
          std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 256), 0LL);
          v40 = std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          *(float *)max_shield_low.m128i_i32 = ActorAbility::evaluate(
                                                 v39,
                                                 &v40->amount_by_get_damage,
                                                 (CreaturePtr *)(v2 + 256),
                                                 &p_record_ptr);
          heal_hp_percent = COERCE_FLOAT(_mm_cvtsi128_si32(max_shield_low));
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 256));
          std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
          if ( *(_BYTE *)(((unsigned __int64)delta_damgae >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)delta_damgae & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_damgae >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(delta_damgae);
          }
          *(float *)(v2 + 48) = *delta_damgae * heal_hp_percent;
          v41 = (__m128i)0x3F800000u;
          ability_ratio = 1.0;
          std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          ActorAbility::getCaster((ActorAbility *const)(v2 + 224));
          v42 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
          std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 256), 0LL);
          v43 = std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          *(float *)v41.m128i_i32 = ActorAbility::evaluate(
                                      v42,
                                      &v43->heal_limited_by_caster_max_hpratio,
                                      (CreaturePtr *)(v2 + 256),
                                      &p_record_ptr);
          heal_limit_caster_percent = COERCE_FLOAT(_mm_cvtsi128_si32(v41));
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 256));
          std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
          if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 224), 0LL) )
          {
            v44 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
            Prop = Creature::getProp(v44, FIGHT_PROP_HEAL_ADD);
            ability_ratio = Prop + ability_ratio;
            v46 = 0LL;
            if ( heal_limit_caster_percent != 0.0 )
            {
              v47 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
              *(float *)v46.m128i_i32 = Creature::getMaxHp(v47);
              LODWORD(caster_max_hp) = _mm_cvtsi128_si32(v46);
              v48 = _mm_cvtsi32_si128(LODWORD(caster_max_hp));
              *(float *)v48.m128i_i32 = SAFE_MULTIPLY<float,float>(*(float *)v48.m128i_i32, heal_limit_caster_percent);
              __a = COERCE_FLOAT(_mm_cvtsi128_si32(v48));
              v49 = std::min<float>((const float *)(v2 + 48), &__a);
              v50 = v49;
              if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v49);
              }
              *(_DWORD *)(v2 + 48) = *v50;
            }
          }
          v51 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v52 = Creature::getProp(v51, FIGHT_PROP_HEALED_ADD);
          ability_ratio = v52 + ability_ratio;
          *(float *)(v2 + 48) = *(float *)(v2 + 48) * ability_ratio;
          if ( *(float *)(v2 + 48) < 0.0 )
            *(_DWORD *)(v2 + 48) = 0;
          v53 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( Creature::getLifeState(v53) == LIFE_ALIVE )
          {
            v54 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightPropComp = Creature::getFightPropComp(v54);
            IsLockHealHp = FightPropComp::getIsLockHealHp(FightPropComp);
            if ( !PileBoolValue::getValue(IsLockHealHp) )
            {
              ChangeHpContext::ChangeHpContext((ChangeHpContext *const)(v2 + 288));
              *(_DWORD *)(v2 + 288) = 101;
              std::weak_ptr<ActorAbility>::operator=<ActorAbility>(
                (std::weak_ptr<ActorAbility> *const)(v2 + 352),
                (const std::shared_ptr<ActorAbility> *)(v2 + 128));
              v58 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              std::shared_ptr<FightPropNtfParam>::shared_ptr(
                (std::shared_ptr<FightPropNtfParam> *const)&p_record_ptr,
                (const std::shared_ptr<FightPropNtfParam> *)(v2 + 192));
              Creature::changeCurHp(
                v58,
                *(float *)(v2 + 48),
                (ChangeHpContext *)(v2 + 288),
                1,
                (FightPropNtfParamPtr *)&p_record_ptr);
              std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&p_record_ptr);
              ChangeHpContext::~ChangeHpContext((ChangeHpContext *const)(v2 + 288));
            }
          }
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 224));
          std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v2 + 192));
        }
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 160));
      }
      std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 128));
    }
    std::shared_ptr<data::EliteShieldMixin>::~shared_ptr((std::shared_ptr<data::EliteShieldMixin> *const)(v2 + 96));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
  if ( v73 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 443: range 000000001370FFCA-00000000137100B5
void __cdecl AbilityEliteShieldMixin::fillRecoverInfo(
        const AbilityEliteShieldMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  double v2; // xmm0_8
  float v3; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_shield_);
  }
  *(float *)&v2 = this->cur_shield_;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4(&this->max_shield_);
  }
  if ( (float)(*(float *)&v2 / (float)(this->max_shield_ + 0.000001)) <= 0.0 )
    v3 = 0.0;
  else
    v3 = *(float *)&v2 / (float)(this->max_shield_ + 0.000001);
  proto::AbilityMixinRecoverInfo::add_data_list(info, (int)(float)(10000.0 * v3));
};

// Line 452: range 00000000137100B6-0000000013710370
void __cdecl AbilityEliteShieldMixin::onRemoved(AbilityEliteShieldMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  ActorAbility *v4; // r14
  std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 ability_ptr:453 64 16 26 elite_shield_mixin_ptr:459";
  *(_QWORD *)(v1 + 16) = AbilityEliteShieldMixin::onRemoved;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v1 + 32));
  if ( std::operator==<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "onRemoved",
      456);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v6, (const char (*)[20])"ability_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::dynamic_pointer_cast<data::EliteShieldMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v1 + 64));
    if ( std::operator==<data::EliteShieldMixin>(0LL, (const std::shared_ptr<data::EliteShieldMixin> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onRemoved",
        462);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v6,
        (const char (*)[31])"elite_shield_mixin_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v6);
    }
    else
    {
      v4 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v5 = std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::EliteShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      ActorAbility::clearServerOverrideParam(v4, &v5->cost_shield_ratio_name);
    }
    std::shared_ptr<data::EliteShieldMixin>::~shared_ptr((std::shared_ptr<data::EliteShieldMixin> *const)(v1 + 64));
  }
  std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v1 + 32));
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

// Line 470: range 0000000013710372-0000000013710982
void __cdecl AbilityGlobalMainShieldMixin::init(AbilityGlobalMainShieldMixin *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ActorAbility *v5; // r14
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ActorAbility *v7; // r14
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  bool *p_infinite_shield; // rax
  float v12; // xmm0_4
  float max_shield; // xmm0_4
  float shield_hp_ratio; // [rsp+14h] [rbp-FCh]
  float shield_hp; // [rsp+18h] [rbp-F8h]
  float max_hp; // [rsp+1Ch] [rbp-F4h]
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 15 ability_ptr:471 64 16 13 actor_ptr:478 96 16 32 global_main_shield_mixin_ptr:484";
  *(_QWORD *)(v2 + 16) = AbilityGlobalMainShieldMixin::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 32));
  if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "init",
      474);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"ability_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ActorAbility::getCaster((ActorAbility *const)(v2 + 64));
    if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "init",
        481);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v19, (const char (*)[18])"actor_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      std::dynamic_pointer_cast<data::GlobalMainShieldMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 96));
      if ( std::operator==<data::GlobalMainShieldMixin>(
             (const std::shared_ptr<data::GlobalMainShieldMixin> *)(v2 + 96),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "init",
          487);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v19,
          (const char (*)[37])"global_main_shield_mixin_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        v5 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v6 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(float *)v1.m128i_i32 = ActorAbility::evaluate(
                                   v5,
                                   &v6->shield_hpratio,
                                   &p_global_value_source_ptr,
                                   &p_record_ptr);
        shield_hp_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
        v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v8 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(float *)v1.m128i_i32 = ActorAbility::evaluate(v7, &v8->shield_hp, &p_global_value_source_ptr, &p_record_ptr);
        shield_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
        v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        *(float *)v1.m128i_i32 = Creature::getProp(v9, FIGHT_PROP_MAX_HP);
        max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
        v10 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        p_infinite_shield = &v10->infinite_shield;
        if ( *(_BYTE *)(((unsigned __int64)p_infinite_shield >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_infinite_shield & 7) >= *(_BYTE *)(((unsigned __int64)p_infinite_shield >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(p_infinite_shield);
        }
        if ( v10->infinite_shield )
          v12 = 3.4028235e38;
        else
          v12 = (float)(max_hp * shield_hp_ratio) + shield_hp;
        if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->max_shield_);
        }
        this->max_shield_ = v12;
        max_shield = this->max_shield_;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->cur_shield_);
        }
        this->cur_shield_ = max_shield;
      }
      std::shared_ptr<data::GlobalMainShieldMixin>::~shared_ptr((std::shared_ptr<data::GlobalMainShieldMixin> *const)(v2 + 96));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
  }
  std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 32));
  if ( v20 == (char *)v2 )
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

// Line 498: range 0000000013710984-0000000013710D5B
void __cdecl AbilityGlobalMainShieldMixin::handleMixinInvokeEntry(
        AbilityGlobalMainShieldMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  float v13; // xmm0_4
  float v14; // xmm0_4
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 4 14 max_shield:505 48 48 22 meta_global_shield:499";
  *(_QWORD *)(v4 + 16) = AbilityGlobalMainShieldMixin::handleMixinInvokeEntry;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862723] = -202116109;
  proto::AbilityMixinGlobalShield::AbilityMixinGlobalShield((proto::AbilityMixinGlobalShield *const)(v4 + 48));
  v7 = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v4 + 48, v7) != 1 )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      502);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      &v15,
      (const char (*)[50])"AbilityMixinGlobalShield parse from string failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    *(float *)v3.m128i_i32 = proto::AbilityMixinGlobalShield::max_shield((const proto::AbilityMixinGlobalShield *const)(v4 + 48));
    *(_DWORD *)(v4 + 32) = _mm_cvtsi128_si32(v3);
    if ( !std::isfinite(*(float *)(v4 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        508);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v15,
        (const char (*)[24])"invalid para max_shield");
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        0x11u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        511);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v15,
             (const char (*)[30])"GloablMainShield cur_shield_=");
      v9 = common::milog::MiLogStream::operator<<<float,(float *)0>(v8, &this->cur_shield_);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" max_shield_=");
      v11 = common::milog::MiLogStream::operator<<<float,(float *)0>(v10, &this->max_shield_);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" changed to ");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v12, (const float *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v13 = *(float *)(v4 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->cur_shield_);
      }
      this->cur_shield_ = v13;
      v14 = *(float *)(v4 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->max_shield_);
      }
      this->max_shield_ = v14;
    }
  }
  proto::AbilityMixinGlobalShield::~AbilityMixinGlobalShield((proto::AbilityMixinGlobalShield *const)(v4 + 48));
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 517: range 0000000013710D5C-00000000137123ED
void __cdecl AbilityGlobalMainShieldMixin::onBeingHit(
        AbilityGlobalMainShieldMixin *const this,
        AttackResult *attack_result)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __m128i v5; // xmm0
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ActorAbility *v7; // r14
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  AbilityDataMgr *p_ability_data_mgr; // r15
  float cur_shield; // r14d
  Creature *v11; // rsi
  float *p_server_damage; // rcx
  double v13; // xmm0_8
  float *v14; // rax
  float *v15; // rdx
  float v16; // xmm0_4
  double v17; // xmm0_8
  float *v18; // rax
  float *v19; // rdx
  float v20; // xmm0_4
  Group *v21; // rax
  ChallengeComp *ChallengeComp; // r15
  float v23; // r14d
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  __m128i max_shield_low; // xmm0
  ActorAbility *v35; // r14
  double v36; // xmm0_8
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  unsigned __int64 v38; // rax
  ActorAbility *v39; // r14
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  ActorAbility *v41; // r14
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  __m128i v43; // xmm0
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  float Prop; // xmm0_4
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  __m128i v47; // xmm0
  const float *v48; // rax
  unsigned int *v49; // rdx
  ActorAbility *v50; // r14
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  __m128i v52; // xmm0
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  __m128i v54; // xmm0
  const float *v55; // rax
  _DWORD *v56; // rdx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  float v58; // xmm0_4
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  Creature *v60; // rax
  FightPropComp *FightPropComp; // rax
  PileBoolValue *IsLockHealHp; // rax
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  Creature *v65; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rax
  Creature *v67; // rax
  AbilityComp *AbilityComp; // r15
  float v69; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rax
  uint32_t EntityId; // eax
  const std::string *shield_type; // [rsp+8h] [rbp-278h]
  float shield_typea; // [rsp+8h] [rbp-278h]
  float shield_typeb; // [rsp+8h] [rbp-278h]
  float __a; // [rsp+24h] [rbp-25Ch] BYREF
  float shield_angle; // [rsp+28h] [rbp-258h]
  float ability_ratio; // [rsp+2Ch] [rbp-254h]
  float heal_hp_percent; // [rsp+30h] [rbp-250h]
  float heal_limit_caster_percent; // [rsp+34h] [rbp-24Ch]
  float caster_max_hp; // [rsp+38h] [rbp-248h]
  float heal_limit_local_creature_percent; // [rsp+3Ch] [rbp-244h]
  float actor_max_hp; // [rsp+40h] [rbp-240h]
  uint32_t source_entity_id; // [rsp+44h] [rbp-23Ch]
  std::tuple_element<0,std::pair<float,float> >::type *delta_shield; // [rsp+48h] [rbp-238h]
  std::tuple_element<1,std::pair<float,float> >::type *delta_damgae; // [rsp+50h] [rbp-230h]
  std::pair<float,float> __in; // [rsp+58h] [rbp-228h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+60h] [rbp-220h] BYREF
  common::milog::MiLogStream v89; // [rsp+70h] [rbp-210h] BYREF
  char v90[496]; // [rsp+90h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v90;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 11 heal_hp:584 64 16 13 actor_ptr:518 96 16 32 global_main_shield_mixin_ptr:524 128 16 1"
                        "5 ability_ptr:531 160 16 16 attacker_ptr:549 192 16 20 notify_param_ptr:580 224 16 14 caster_ptr"
                        ":588 256 16 22 ability_caster_ptr:625 288 16 14 player_ptr:634 320 96 21 change_hp_context:620";
  *(_QWORD *)(v2 + 16) = AbilityGlobalMainShieldMixin::onBeingHit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862733] = -202116109;
  AttackResult::getDefenser((const AttackResult *const)(v2 + 64));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v89,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "onBeingHit",
      521);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v89, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v89);
  }
  else
  {
    std::dynamic_pointer_cast<data::GlobalMainShieldMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 96));
    if ( std::operator==<data::GlobalMainShieldMixin>(
           (const std::shared_ptr<data::GlobalMainShieldMixin> *)(v2 + 96),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v89,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onBeingHit",
        527);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v89,
        (const char (*)[37])"global_main_shield_mixin_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v89);
    }
    else
    {
      v5 = 0LL;
      shield_angle = 0.0;
      BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 128));
      if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 128), 0LL) )
      {
        v6 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v6->shield_angle >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v6->shield_angle >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v6->shield_angle);
        }
        shield_angle = v6->shield_angle.fixed_value;
      }
      else
      {
        v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 288), 0LL);
        v8 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(float *)v5.m128i_i32 = ActorAbility::evaluate(v7, &v8->shield_angle, (CreaturePtr *)(v2 + 288), &p_record_ptr);
        shield_angle = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 288));
        std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
      }
      if ( *(_BYTE *)(((unsigned __int64)&attack_result->attackee_hit_force_angle >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&attack_result->attackee_hit_force_angle >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&attack_result->attackee_hit_force_angle);
      }
      if ( attack_result->attackee_hit_force_angle <= shield_angle )
      {
        p_ability_data_mgr = &ServiceBox::findService<GameserverService>()->ability_data_mgr;
        shield_type = &std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->shield_type;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_shield_);
        }
        cur_shield = this->cur_shield_;
        v11 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        __in = AbilityDataMgr::tryCostEliteShield(p_ability_data_mgr, v11, attack_result, cur_shield, shield_type);
        delta_shield = std::get<0ul,float,float>(&__in);
        delta_damgae = std::get<1ul,float,float>(&__in);
        p_server_damage = &attack_result->server_damage;
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&attack_result->ori_server_damage);
        }
        *(float *)&v13 = attack_result->ori_server_damage;
        if ( *(_BYTE *)(((unsigned __int64)delta_damgae >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)delta_damgae & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_damgae >> 3)
                                                                         + 0x7FFF8000) )
        {
          v13 = __asan_report_load4(delta_damgae);
        }
        __a = *(float *)&v13 - *delta_damgae;
        v14 = (float *)std::min<float>(&__a, p_server_damage);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        v16 = *v15;
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_store4(&attack_result->server_damage);
        }
        attack_result->server_damage = v16;
        __a = 0.0;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_shield_);
        }
        *(float *)&v17 = this->cur_shield_;
        if ( *(_BYTE *)(((unsigned __int64)delta_shield >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)delta_shield & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_shield >> 3)
                                                                         + 0x7FFF8000) )
        {
          v17 = __asan_report_load4(delta_shield);
        }
        *(float *)(v2 + 48) = *(float *)&v17 - *delta_shield;
        v18 = (float *)std::clamp<float>((const float *)(v2 + 48), &__a, &this->max_shield_);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        v20 = *v19;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->cur_shield_);
        }
        this->cur_shield_ = v20;
        AttackResult::getAttacker((const AttackResult *const)(v2 + 160));
        if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 160), 0LL) )
        {
          std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          Creature::findTopOwnerOrSelf((Creature *const)&p_record_ptr);
          std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v2 + 256));
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&p_record_ptr);
          if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v2 + 256), 0LL) )
          {
            std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
            Entity::getGroup((const Entity *const)(v2 + 288));
            if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 288), 0LL) )
            {
              v21 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
              ChallengeComp = Group::getChallengeComp(v21);
              if ( *(_BYTE *)(((unsigned __int64)delta_damgae >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)delta_damgae & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_damgae >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(delta_damgae);
              }
              v23 = *delta_damgae;
              std::shared_ptr<Creature>::shared_ptr(
                (std::shared_ptr<Creature> *const)&p_record_ptr,
                (const std::shared_ptr<Creature> *)(v2 + 64));
              ChallengeComp::onShieldAbsorbDamage(ChallengeComp, (CreaturePtr *)&p_record_ptr, v23);
              std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&p_record_ptr);
            }
            std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 288));
          }
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 256));
        }
        common::milog::MiLogStream::create(
          &v89,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/ability_mixin.cpp",
          "onBeingHit",
          565);
        v24 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v89,
                (const char (*)[42])"[GLOBAL MAIN SHIELD] onBeingHit creature:");
        v25 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v26 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v24, v25);
        v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v26, (const char (*)[14])"delta_shield:");
        v28 = common::milog::MiLogStream::operator<<<float,(float *)0>(v27, delta_shield);
        v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v28, (const char (*)[14])" cur_shield_:");
        v30 = common::milog::MiLogStream::operator<<<float,(float *)0>(v29, &this->cur_shield_);
        v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v30, (const char (*)[15])" delta_damgae:");
        v32 = common::milog::MiLogStream::operator<<<float,(float *)0>(v31, delta_damgae);
        v33 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v32, (const char (*)[13])" cur_damage:");
        common::milog::MiLogStream::operator<<<float,(float *)0>(v33, &attack_result->server_damage);
        common::milog::MiLogStream::~MiLogStream(&v89);
        if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v89,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/ability/ability_mixin.cpp",
            "onBeingHit",
            570);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v89,
            (const char (*)[20])"ability_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v89);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->max_shield_);
          }
          max_shield_low = (__m128i)LODWORD(this->max_shield_);
          if ( *(float *)max_shield_low.m128i_i32 != 0.0 )
          {
            v35 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->max_shield_);
            }
            *(float *)&v36 = this->max_shield_;
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              v36 = __asan_report_load4(&this->cur_shield_);
            }
            shield_typea = (float)(*(float *)&v36 - this->cur_shield_) / this->max_shield_;
            v37 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            max_shield_low = (__m128i)LODWORD(shield_typea);
            ActorAbility::setServerFloatParam(v35, &v37->cost_shield_ratio_name, shield_typea);
          }
          common::tools::perf::make_shared<FightPropNtfParam>();
          v38 = (unsigned __int64)std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
          if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v38 >> 3) + 0x7FFF8000) <= 3 )
            v38 = __asan_report_store4(v38);
          *(_DWORD *)v38 = 3;
          v39 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
          std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 288), 0LL);
          v40 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          *(float *)max_shield_low.m128i_i32 = ActorAbility::evaluate(
                                                 v39,
                                                 &v40->amount_by_get_damage,
                                                 (CreaturePtr *)(v2 + 288),
                                                 &p_record_ptr);
          heal_hp_percent = COERCE_FLOAT(_mm_cvtsi128_si32(max_shield_low));
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 288));
          std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
          if ( *(_BYTE *)(((unsigned __int64)delta_damgae >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)delta_damgae & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_damgae >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(delta_damgae);
          }
          *(float *)(v2 + 48) = *delta_damgae * heal_hp_percent;
          v43 = (__m128i)0x3F800000u;
          ability_ratio = 1.0;
          std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          ActorAbility::getCaster((ActorAbility *const)(v2 + 224));
          v41 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
          std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 288), 0LL);
          v42 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          *(float *)v43.m128i_i32 = ActorAbility::evaluate(
                                      v41,
                                      &v42->heal_limited_by_caster_max_hpratio,
                                      (CreaturePtr *)(v2 + 288),
                                      &p_record_ptr);
          heal_limit_caster_percent = COERCE_FLOAT(_mm_cvtsi128_si32(v43));
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 288));
          std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
          if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 224), 0LL) )
          {
            v44 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
            Prop = Creature::getProp(v44, FIGHT_PROP_HEAL_ADD);
            ability_ratio = Prop + ability_ratio;
            v43 = 0LL;
            if ( heal_limit_caster_percent != 0.0 )
            {
              v46 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
              *(float *)v43.m128i_i32 = Creature::getMaxHp(v46);
              LODWORD(caster_max_hp) = _mm_cvtsi128_si32(v43);
              v47 = _mm_cvtsi32_si128(LODWORD(caster_max_hp));
              *(float *)v47.m128i_i32 = SAFE_MULTIPLY<float,float>(*(float *)v47.m128i_i32, heal_limit_caster_percent);
              __a = COERCE_FLOAT(_mm_cvtsi128_si32(v47));
              v48 = std::min<float>((const float *)(v2 + 48), &__a);
              v49 = (unsigned int *)v48;
              if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v48);
              }
              v43 = (__m128i)*v49;
              *(_DWORD *)(v2 + 48) = v43.m128i_i32[0];
            }
          }
          v50 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
          std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 288), 0LL);
          v51 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          *(float *)v43.m128i_i32 = ActorAbility::evaluate(
                                      v50,
                                      &v51->heal_limited_by_local_creature_max_hpratio,
                                      (CreaturePtr *)(v2 + 288),
                                      &p_record_ptr);
          heal_limit_local_creature_percent = COERCE_FLOAT(_mm_cvtsi128_si32(v43));
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 288));
          std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
          v52 = 0LL;
          if ( heal_limit_local_creature_percent != 0.0 )
          {
            v53 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            *(float *)v52.m128i_i32 = Creature::getMaxHp(v53);
            LODWORD(actor_max_hp) = _mm_cvtsi128_si32(v52);
            v54 = _mm_cvtsi32_si128(LODWORD(actor_max_hp));
            *(float *)v54.m128i_i32 = SAFE_MULTIPLY<float,float>(
                                        *(float *)v54.m128i_i32,
                                        heal_limit_local_creature_percent);
            __a = COERCE_FLOAT(_mm_cvtsi128_si32(v54));
            v55 = std::min<float>((const float *)(v2 + 48), &__a);
            v56 = v55;
            if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v55 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v55);
            }
            *(_DWORD *)(v2 + 48) = *v56;
          }
          v57 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v58 = Creature::getProp(v57, FIGHT_PROP_HEALED_ADD);
          ability_ratio = v58 + ability_ratio;
          *(float *)(v2 + 48) = *(float *)(v2 + 48) * ability_ratio;
          if ( *(float *)(v2 + 48) < 0.0 )
            *(_DWORD *)(v2 + 48) = 0;
          v59 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( Creature::getLifeState(v59) == LIFE_ALIVE )
          {
            v60 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightPropComp = Creature::getFightPropComp(v60);
            IsLockHealHp = FightPropComp::getIsLockHealHp(FightPropComp);
            if ( !PileBoolValue::getValue(IsLockHealHp) )
            {
              v64 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              if ( *(char *)(((unsigned __int64)&v64->amount_by_get_damage.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                v64 = (std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v64->amount_by_get_damage.is_json_loaded);
              if ( v64->amount_by_get_damage.is_json_loaded )
              {
                ChangeHpContext::ChangeHpContext((ChangeHpContext *const)(v2 + 320));
                *(_DWORD *)(v2 + 320) = 101;
                std::weak_ptr<ActorAbility>::operator=<ActorAbility>(
                  (std::weak_ptr<ActorAbility> *const)(v2 + 384),
                  (const std::shared_ptr<ActorAbility> *)(v2 + 128));
                v65 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                std::shared_ptr<FightPropNtfParam>::shared_ptr(
                  (std::shared_ptr<FightPropNtfParam> *const)&p_record_ptr,
                  (const std::shared_ptr<FightPropNtfParam> *)(v2 + 192));
                Creature::changeCurHp(
                  v65,
                  *(float *)(v2 + 48),
                  (ChangeHpContext *)(v2 + 320),
                  1,
                  (FightPropNtfParamPtr *)&p_record_ptr);
                std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&p_record_ptr);
                std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                ActorAbility::getCaster((ActorAbility *const)(v2 + 256));
                if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 256), 0LL) )
                {
                  common::milog::MiLogStream::create(
                    &v89,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/ability/ability_mixin.cpp",
                    "onBeingHit",
                    630);
                  common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v89,
                    (const char (*)[48])"AbilityGlobalMainShieldMixin caster_ptr is null");
                  common::milog::MiLogStream::~MiLogStream(&v89);
                }
                else
                {
                  v66 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                  source_entity_id = Entity::getEntityId((const Entity *const)v66);
                  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                  Creature::findOriginalPlayer((Creature *const)(v2 + 288));
                  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 288), 0LL) )
                  {
                    v67 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                    AbilityComp = Creature::getAbilityComp(v67);
                    std::shared_ptr<Player>::shared_ptr(
                      (std::shared_ptr<Player> *const)&p_record_ptr,
                      (const std::shared_ptr<Player> *)(v2 + 288));
                    shield_typeb = *(float *)(v2 + 408);
                    v69 = *(float *)(v2 + 48);
                    v70 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                    EntityId = Entity::getEntityId((const Entity *const)v70);
                    AbilityComp::notifyClientBeingHealed(
                      AbilityComp,
                      source_entity_id,
                      EntityId,
                      v69,
                      shield_typeb,
                      (const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *)&p_record_ptr);
                    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&p_record_ptr);
                  }
                  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 288));
                }
                std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 256));
                ChangeHpContext::~ChangeHpContext((ChangeHpContext *const)(v2 + 320));
              }
            }
          }
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 224));
          std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v2 + 192));
        }
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 160));
      }
      std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 128));
    }
    std::shared_ptr<data::GlobalMainShieldMixin>::~shared_ptr((std::shared_ptr<data::GlobalMainShieldMixin> *const)(v2 + 96));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
  if ( v90 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  }
};

// Line 646: range 00000000137123EE-00000000137124C2
void __cdecl AbilityGlobalMainShieldMixin::fillRecoverInfo(
        const AbilityGlobalMainShieldMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  SelectType_2 v2; // xmm0_4
  SelectType_2 v3; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_shield_);
  }
  v2 = SAFE_MULTIPLY<float,int>(this->cur_shield_, 1000);
  proto::AbilityMixinRecoverInfo::add_data_list(info, (int)v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_shield_);
  }
  v3 = SAFE_MULTIPLY<float,int>(this->max_shield_, 1000);
  proto::AbilityMixinRecoverInfo::add_data_list(info, (int)v3);
};

// Line 652: range 00000000137124C4-000000001371277E
void __cdecl AbilityGlobalMainShieldMixin::onRemoved(AbilityGlobalMainShieldMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  ActorAbility *v4; // r14
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 ability_ptr:653 64 16 32 global_main_shield_mixin_ptr:659";
  *(_QWORD *)(v1 + 16) = AbilityGlobalMainShieldMixin::onRemoved;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v1 + 32));
  if ( std::operator==<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "onRemoved",
      656);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v6, (const char (*)[20])"ability_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::dynamic_pointer_cast<data::GlobalMainShieldMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v1 + 64));
    if ( std::operator==<data::GlobalMainShieldMixin>(
           0LL,
           (const std::shared_ptr<data::GlobalMainShieldMixin> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onRemoved",
        662);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v6,
        (const char (*)[37])"global_main_shield_mixin_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v6);
    }
    else
    {
      v4 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v5 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      ActorAbility::clearServerOverrideParam(v4, &v5->cost_shield_ratio_name);
    }
    std::shared_ptr<data::GlobalMainShieldMixin>::~shared_ptr((std::shared_ptr<data::GlobalMainShieldMixin> *const)(v1 + 64));
  }
  std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v1 + 32));
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

// Line 669: range 00000000137129C8-0000000013712FED
void __cdecl AbilityGlobalSubShieldMixin::onBeingHit(
        AbilityGlobalSubShieldMixin *const this,
        AttackResult *attack_result)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  Player *v7; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  AbilityComp *AbilityComp; // r14
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  AbilityGlobalSubShieldMixin::onBeingHit::<lambda(BaseAbilityMixin&)> v12; // [rsp+10h] [rbp-110h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 14 avatar_ptr:670 64 16 14 player_ptr:676 96 16 12 team_ptr:682 128 16 16 modifier_ptr:688";
  *(_QWORD *)(v2 + 16) = AbilityGlobalSubShieldMixin::onBeingHit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 128));
  std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v2 + 32));
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 128));
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "onBeingHit",
      673);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v13, (const char (*)[19])"avatar_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v5 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(_QWORD *)v5 + 152LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)v5 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v6)(v2 + 64, v5);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onBeingHit",
        679);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v13, (const char (*)[19])"player_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Player::getAvatarComp(v7);
      PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v2 + 96));
      if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "onBeingHit",
          685);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v13, (const char (*)[19])"player_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v13);
      }
      else
      {
        BaseAbilityMixin::getModifier((const BaseAbilityMixin *const)(v2 + 128));
        if ( std::operator==<ActorModifier>(0LL, (const std::shared_ptr<ActorModifier> *)(v2 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/ability/ability_mixin.cpp",
            "onBeingHit",
            691);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v13,
            (const char (*)[21])"modifier_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v13);
        }
        else
        {
          v8 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          AbilityComp = Creature::getAbilityComp(v8);
          std::shared_ptr<ActorModifier>::shared_ptr(
            &v12.__modifier_ptr,
            (const std::shared_ptr<ActorModifier> *)(v2 + 128));
          v12.__attack_result = attack_result;
          std::function<ForeachPolicy ()(BaseAbilityMixin &)>::function<AbilityGlobalSubShieldMixin::onBeingHit(AttackResult &)::{lambda(BaseAbilityMixin &)#1},void,void>(
            (std::function<ForeachPolicy(BaseAbilityMixin&)> *const)&v13,
            &v12);
          AbilityComp::foreachMixin(AbilityComp, (std::function<ForeachPolicy(BaseAbilityMixin&)> *)&v13);
          std::function<ForeachPolicy ()(BaseAbilityMixin &)>::~function((std::function<ForeachPolicy(BaseAbilityMixin&)> *const)&v13);
          AbilityGlobalSubShieldMixin::onBeingHit(AttackResult &)::{lambda(BaseAbilityMixin &)#1}::~BaseAbilityMixin(&v12);
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/ability/ability_mixin.cpp",
            "onBeingHit",
            706);
          v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v13,
                  (const char (*)[41])"[GLOBAL SUB SHILED] onBeingHit creature:");
          v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, v11);
          common::milog::MiLogStream::~MiLogStream(&v13);
        }
        std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v2 + 128));
      }
      std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v2 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
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

// Line 695: range 0000000013712780-00000000137129AB
ForeachPolicy __cdecl AbilityGlobalSubShieldMixin::onBeingHit(AttackResult &)::{lambda(BaseAbilityMixin &)#1}::operator()(
        const AbilityGlobalSubShieldMixin::onBeingHit::<lambda(BaseAbilityMixin&)> *const __closure,
        BaseAbilityMixin *mixin)
{
  unsigned __int64 p_M_refcount; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const std::string *v6; // r14
  std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  ForeachPolicy v9; // r14d
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(BaseAbilityMixin *, AttackResult *); // rcx
  ForeachPolicy result; // eax
  BaseAbilityMixin v13; // [rsp+10h] [rbp-80h] BYREF

  p_M_refcount = (unsigned __int64)&v13._M_weak_this._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      p_M_refcount = v3;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "1 32 16 14 config_ptr:697";
  *(_QWORD *)(p_M_refcount + 16) = AbilityGlobalSubShieldMixin::onBeingHit(AttackResult &)::{lambda(BaseAbilityMixin &)#1}::operator();
  v4 = p_M_refcount >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  BaseAbilityMixin::getConfig(&v13);
  std::dynamic_pointer_cast<data::GlobalMainShieldMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(p_M_refcount + 32));
  std::shared_ptr<data::ConfigAbilityMixin>::~shared_ptr((std::shared_ptr<data::ConfigAbilityMixin> *const)&v13);
  if ( std::operator==<data::GlobalMainShieldMixin>(
         (const std::shared_ptr<data::GlobalMainShieldMixin> *)(p_M_refcount + 32),
         0LL)
    || (v5 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure),
        v6 = ActorModifier::getName[abi:cxx11](v5),
        v7 = std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GlobalMainShieldMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 32)),
        std::operator!=<char>(&v7->child_shield_modifier_name, v6)) )
  {
    v9 = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)mixin >> 3) + 0x7FFF8000) )
      __asan_report_load8(mixin);
    v10 = (unsigned __int64)(mixin->_vptr_BaseAbilityMixin + 5);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(mixin->_vptr_BaseAbilityMixin + 5);
    v11 = *(void (__fastcall **)(BaseAbilityMixin *, AttackResult *))v10;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__attack_result >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__attack_result);
    v11(mixin, __closure->__attack_result);
    v9 = FOREACH_BREAK;
  }
  std::shared_ptr<data::GlobalMainShieldMixin>::~shared_ptr((std::shared_ptr<data::GlobalMainShieldMixin> *const)(p_M_refcount + 32));
  result = v9;
  if ( &v13._M_weak_this._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 695: range 00000000137F402E-00000000137F40AD
void __cdecl AbilityGlobalSubShieldMixin::onBeingHit(AttackResult &)::{lambda(BaseAbilityMixin &)#1}::BaseAbilityMixin(
        AbilityGlobalSubShieldMixin::onBeingHit::<lambda(BaseAbilityMixin&)> *const this,
        AbilityGlobalSubShieldMixin::onBeingHit::<lambda(BaseAbilityMixin&)> *a2)
{
  AttackResult *attack_result; // rdx

  std::shared_ptr<ActorModifier>::shared_ptr(&this->__modifier_ptr, &a2->__modifier_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__attack_result >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__attack_result);
  attack_result = a2->__attack_result;
  if ( *(_BYTE *)(((unsigned __int64)&this->__attack_result >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__attack_result);
  this->__attack_result = attack_result;
};

// Line 695: range 00000000137F4178-00000000137F41F7
void __cdecl AbilityGlobalSubShieldMixin::onBeingHit(AttackResult &)::{lambda(BaseAbilityMixin &)#1}::BaseAbilityMixin(
        AbilityGlobalSubShieldMixin::onBeingHit::<lambda(BaseAbilityMixin&)> *const this,
        const AbilityGlobalSubShieldMixin::onBeingHit::<lambda(BaseAbilityMixin&)> *a2)
{
  AttackResult *attack_result; // rdx

  std::shared_ptr<ActorModifier>::shared_ptr(&this->__modifier_ptr, &a2->__modifier_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__attack_result >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__attack_result);
  attack_result = a2->__attack_result;
  if ( *(_BYTE *)(((unsigned __int64)&this->__attack_result >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__attack_result);
  this->__attack_result = attack_result;
};

// Line 695: range 00000000137129AC-00000000137129C6
void __cdecl AbilityGlobalSubShieldMixin::onBeingHit(AttackResult &)::{lambda(BaseAbilityMixin &)#1}::~BaseAbilityMixin(
        AbilityGlobalSubShieldMixin::onBeingHit::<lambda(BaseAbilityMixin&)> *const this)
{
  std::shared_ptr<ActorModifier>::~shared_ptr(&this->__modifier_ptr);
};

// Line 713: range 0000000013712FEE-00000000137132D9
void __cdecl AbilityShieldBarMixin::handleMixinInvokeEntry(
        AbilityShieldBarMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  uint32_t v10; // edx
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 19 meta_shield_bar:714";
  *(_QWORD *)(v3 + 16) = AbilityShieldBarMixin::handleMixinInvokeEntry;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  proto::AbilityMixinShieldBar::AbilityMixinShieldBar((proto::AbilityMixinShieldBar *const)(v3 + 48));
  v6 = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 48, v6) != 1 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      717);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v12,
      (const char (*)[47])"AbilityShieldBarMixin parse from string failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      720);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v12,
           (const char (*)[35])"AbilityShieldBarMixin player_num_=");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->player_num_);
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" changed to ");
    val = proto::AbilityMixinShieldBar::player_num((const proto::AbilityMixinShieldBar *const)(v3 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = proto::AbilityMixinShieldBar::player_num((const proto::AbilityMixinShieldBar *const)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->player_num_);
    }
    this->player_num_ = v10;
  }
  proto::AbilityMixinShieldBar::~AbilityMixinShieldBar((proto::AbilityMixinShieldBar *const)(v3 + 48));
  if ( v13 == (char *)v3 )
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

// Line 725: range 00000000137132DA-0000000013713334
void __cdecl AbilityShieldBarMixin::fillRecoverInfo(
        const AbilityShieldBarMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->player_num_);
  }
  proto::AbilityMixinRecoverInfo::add_data_list(info, this->player_num_);
};

// Line 732: range 0000000013713336-0000000013713348
void __cdecl AbilityEntityDefenceMixin::handleMixinInvokeEntry(
        AbilityEntityDefenceMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  ;
};

// Line 739: range 000000001371334A-0000000013713605
void __cdecl AbilityMonsterDefendMixin::onBeingHit(AbilityMonsterDefendMixin *const this, AttackResult *attack_result)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned __int64 v6; // rax
  void (__fastcall **v7)(std::string *, unsigned __int64); // rdx
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-B0h] BYREF
  std::string val; // [rsp+30h] [rbp-90h] BYREF
  char v10[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 creature_ptr:746";
  *(_QWORD *)(v2 + 16) = AbilityMonsterDefendMixin::onBeingHit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)attack_result >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)attack_result >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(attack_result);
  }
  if ( attack_result->client_damage < 0.0099999998 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_store4(&attack_result->server_damage);
    }
    attack_result->server_damage = 0.0;
  }
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 32));
  if ( std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/ability/ability_mixin.cpp",
      "onBeingHit",
      749);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v8,
           (const char (*)[45])"onBeingHit on MonsterDefendMixin, creature_:");
    v6 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6);
    v7 = *(void (__fastcall ***)(std::string *, unsigned __int64))v6;
    if ( *(_BYTE *)((*(_QWORD *)v6 >> 3) + 0x7FFF8000LL) )
      v6 = __asan_report_load8(*(_QWORD *)v6);
    (*v7)(&val, v6);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 756: range 0000000013713606-0000000013713657
void __cdecl AbilityMonsterDefendMixin::handleMixinInvokeEntry(
        AbilityMonsterDefendMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  if ( *(char *)(((unsigned __int64)&this->is_ignore_next_hurt_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_next_hurt_);
  this->is_ignore_next_hurt_ = 1;
};

// Line 761: range 0000000013713658-0000000013713662
void __cdecl AbilityWindSeedSpawnerMixin::init(AbilityWindSeedSpawnerMixin *const this)
{
  ;
};

// Line 765: range 0000000013713664-0000000013713DF3
void __cdecl AbilityWindSeedSpawnerMixin::invokeImpl(
        const data::WindSeedSpawnerMixin *mixin_config,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t v6; // r15d
  float mutiple_range; // r14d
  proto::AbilityMixinWindSeedSpawner::CmdCase v8; // eax
  common::milog::MiLogStream *v9; // rdx
  WindSeedSpawner *v10; // rdx
  common::milog::MiLogStream *v11; // rdx
  const proto::AbilityMixinWindSeedSpawner_RefreshSeed *refreshed; // rax
  WindSeedSpawner *v13; // rcx
  common::milog::MiLogStream *v14; // rdx
  WindSeedSpawner *v15; // r14
  const proto::AbilityMixinWindSeedSpawner_CatchSeed *v16; // rax
  uint32_t v17; // esi
  google::protobuf::RepeatedPtrField<proto::Vector>::const_iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  google::protobuf::RepeatedPtrField<proto::Vector>::const_iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  const std::string *ability_data_str; // [rsp+38h] [rbp-148h]
  const google::protobuf::RepeatedPtrField<proto::Vector> *__for_range; // [rsp+40h] [rbp-140h]
  const proto::Vector *pos; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-130h] BYREF
  char v25[272]; // [rsp+70h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 13 scene_ptr:774 64 16 15 spawner_ptr:780 96 24 11 pos_vec:801 160 32 26 meta_wind_seed_spawner:768";
  *(_QWORD *)(v3 + 16) = AbilityWindSeedSpawnerMixin::invokeImpl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  ability_data_str = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  proto::AbilityMixinWindSeedSpawner::AbilityMixinWindSeedSpawner((proto::AbilityMixinWindSeedSpawner *const)(v3 + 160));
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 160, ability_data_str) != 1 )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "invokeImpl",
      771);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v24, (const char (*)[22])"ParseFromString fails");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    Player::getSceneComp(from_player);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "invokeImpl",
        777);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v24, (const char (*)[21])"scene_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      v6 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&mixin_config->mutiple_range >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&mixin_config->mutiple_range >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&mixin_config->mutiple_range);
      }
      mutiple_range = mixin_config->mutiple_range;
      Player::getUid(from_player);
      Scene::findPlayerWindSeedSpawner((Scene *const)(v3 + 64), v6, mutiple_range);
      if ( std::operator==<WindSeedSpawner>(0LL, (const std::shared_ptr<WindSeedSpawner> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "invokeImpl",
          783);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v24,
          (const char (*)[23])"spawner_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        v8 = proto::AbilityMixinWindSeedSpawner::cmd_case((const proto::AbilityMixinWindSeedSpawner *const)(v3 + 160));
        if ( v8 == kRefreshSeed )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/ability/ability_mixin.cpp",
            "invokeImpl",
            799);
          v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v24,
                  (const char (*)[34])"[WIND_SEED] refresh_seed, player:");
          operator<<(v11, from_player);
          common::milog::MiLogStream::~MiLogStream(&v24);
          std::vector<Vector3>::vector((std::vector<Vector3> *const)(v3 + 96));
          refreshed = proto::AbilityMixinWindSeedSpawner::refresh_seed((const proto::AbilityMixinWindSeedSpawner *const)(v3 + 160));
          __for_range = proto::AbilityMixinWindSeedSpawner_RefreshSeed::pos_list(refreshed);
          __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Vector>::begin(__for_range).it_;
          __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Vector>::end(__for_range).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::Vector const>::operator!=(
                    &__for_begin,
                    &__for_end) )
          {
            pos = google::protobuf::internal::RepeatedPtrIterator<proto::Vector const>::operator*(&__for_begin);
            std::vector<Vector3>::emplace_back<proto::Vector const&>((std::vector<Vector3> *const)(v3 + 96), pos, pos);
            google::protobuf::internal::RepeatedPtrIterator<proto::Vector const>::operator++(&__for_begin);
          }
          v13 = std::__shared_ptr_access<WindSeedSpawner,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WindSeedSpawner,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          WindSeedSpawner::refreshWindSeed(v13, mixin_config, (const std::vector<Vector3> *)(v3 + 96));
          std::vector<Vector3>::~vector((std::vector<Vector3> *const)(v3 + 96));
        }
        else if ( v8 <= kRefreshSeed )
        {
          if ( v8 == kAddSignal )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/ability/ability_mixin.cpp",
              "invokeImpl",
              791);
            v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                   &v24,
                   (const char (*)[32])"[WIND_SEED] add_signal, player:");
            operator<<(v9, from_player);
            common::milog::MiLogStream::~MiLogStream(&v24);
            v10 = std::__shared_ptr_access<WindSeedSpawner,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WindSeedSpawner,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            WindSeedSpawner::addSignal(v10, mixin_config);
          }
          else if ( v8 == kCatchSeed )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/ability/ability_mixin.cpp",
              "invokeImpl",
              812);
            v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v24,
                    (const char (*)[32])"[WIND_SEED] catch_seed, player:");
            operator<<(v14, from_player);
            common::milog::MiLogStream::~MiLogStream(&v24);
            v15 = std::__shared_ptr_access<WindSeedSpawner,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WindSeedSpawner,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v16 = proto::AbilityMixinWindSeedSpawner::catch_seed((const proto::AbilityMixinWindSeedSpawner *const)(v3 + 160));
            v17 = proto::AbilityMixinWindSeedSpawner_CatchSeed::entity_id(v16);
            WindSeedSpawner::catchWindSeed(v15, mixin_config, v17, from_player);
          }
        }
      }
      std::shared_ptr<WindSeedSpawner>::~shared_ptr((std::shared_ptr<WindSeedSpawner> *const)(v3 + 64));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  }
  proto::AbilityMixinWindSeedSpawner::~AbilityMixinWindSeedSpawner((proto::AbilityMixinWindSeedSpawner *const)(v3 + 160));
  if ( v25 == (char *)v3 )
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
};

// Line 826: range 0000000013713DF4-0000000013713FBD
void __cdecl AbilityWindSeedSpawnerMixin::handleMixinInvokeEntry(
        AbilityWindSeedSpawnerMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<data::WindSeedSpawnerMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 31 wind_seed_spawner_mixin_ptr:827";
  *(_QWORD *)(v3 + 16) = AbilityWindSeedSpawnerMixin::handleMixinInvokeEntry;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::WindSeedSpawnerMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v3 + 32));
  if ( std::operator==<data::WindSeedSpawnerMixin>((const std::shared_ptr<data::WindSeedSpawnerMixin> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      830);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v8,
      (const char (*)[36])"wind_seed_spawner_mixin_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v6 = std::__shared_ptr_access<data::WindSeedSpawnerMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::WindSeedSpawnerMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    AbilityWindSeedSpawnerMixin::invokeImpl(v6, entry, from_player);
  }
  std::shared_ptr<data::WindSeedSpawnerMixin>::~shared_ptr((std::shared_ptr<data::WindSeedSpawnerMixin> *const)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 837: range 0000000013713FBE-0000000013714E25
void __cdecl AbilityServerCreateGadgetOnKillMixin::onKill(
        AbilityServerCreateGadgetOnKillMixin *const this,
        const ChangeHpContext *a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 Position; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 Rotation; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  bool *p_use_origin_owner_as_gadget_owner; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t camp_id; // ecx
  std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  data::TargetType *p_camp_target_type; // rax
  data::TargetType camp_target_type; // ecx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t EntityId; // ecx
  std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  unsigned __int64 v28; // r14
  std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  const std::vector<unsigned int>::value_type *v31; // rax
  std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v33; // rax
  _DWORD *v34; // rdx
  Scene *v35; // rax
  std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  bool *p_life_by_owner_is_alive; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // r14
  std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rdx
  bool *v40; // rax
  Creature *v41; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // r14
  unsigned __int64 v47; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rsi
  void (__fastcall *v49)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // [rsp+8h] [rbp-538h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-518h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-510h] BYREF
  AbilityGadgetParam *ability_param; // [rsp+38h] [rbp-508h]
  size_t r; // [rsp+40h] [rbp-500h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-4F8h]
  common::milog::MiLogStream v55; // [rsp+50h] [rbp-4F0h] BYREF
  char v56[1232]; // [rsp+70h] [rbp-4D0h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1184LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 16 14 config_ptr:838 80 16 14 caster_ptr:844 112 16 13 scene_ptr:850 144 16 14 gadget_ptr:8"
                        "91 176 24 17 gadget_id_vec:875 240 816 16 gadget_param:859";
  *(_QWORD *)(v2 + 16) = AbilityServerCreateGadgetOnKillMixin::onKill;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862753] = -202116109;
  v4[536862754] = -202116109;
  v4[536862755] = -202116109;
  v4[536862756] = -202116109;
  std::dynamic_pointer_cast<data::ServerCreateGadgetOnKillMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 48));
  if ( std::operator==<data::ServerCreateGadgetOnKillMixin>(
         (const std::shared_ptr<data::ServerCreateGadgetOnKillMixin> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "onKill",
      841);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v55, (const char (*)[19])"config_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v55);
  }
  else
  {
    BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 80));
    if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onKill",
        847);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v55, (const char (*)[19])"caster_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v55);
    }
    else
    {
      std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      Entity::getScene((const Entity *const)(v2 + 112));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 112), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "onKill",
          853);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v55, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/ability_mixin.cpp",
          "onKill",
          857);
        v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
               &v55,
               (const char (*)[35])"[ServerCreateGadgetOnKill] caster:");
        v6 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        v7 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v5, v6);
        v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])" gadget_id_list:");
        v9 = std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        common::milog::MiLogStream::operator<<<unsigned int>(v8, &v9->gadget_idlist);
        common::milog::MiLogStream::~MiLogStream(&v55);
        GadgetParam::GadgetParam((GadgetParam *const)(v2 + 240));
        v10 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        Position = (unsigned __int64)Entity::getPosition((const Entity *const)v10);
        if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
        {
          Position = __asan_report_load_n(Position, 12LL);
        }
        *(_QWORD *)(v2 + 252) = *(_QWORD *)Position;
        *(_DWORD *)(v2 + 260) = *(_DWORD *)(Position + 8);
        v12 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        Rotation = (unsigned __int64)Entity::getRotation((const Entity *const)v12);
        if ( (char)(Rotation & 7) >= *(_BYTE *)((Rotation >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Rotation + 11) & 7) >= *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) )
        {
          Rotation = __asan_report_load_n(Rotation, 12LL);
        }
        *(_QWORD *)(v2 + 264) = *(_QWORD *)Rotation;
        *(_DWORD *)(v2 + 272) = *(_DWORD *)(Rotation + 8);
        v14 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        *(_DWORD *)(v2 + 336) = Entity::getRoomId((const Entity *const)v14);
        std::shared_ptr<Creature>::operator=(
          (std::shared_ptr<Creature> *const)(v2 + 312),
          (const std::shared_ptr<Creature> *)(v2 + 80));
        v15 = std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        p_use_origin_owner_as_gadget_owner = &v15->use_origin_owner_as_gadget_owner;
        if ( *(_BYTE *)(((unsigned __int64)p_use_origin_owner_as_gadget_owner >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_use_origin_owner_as_gadget_owner & 7) >= *(_BYTE *)(((unsigned __int64)p_use_origin_owner_as_gadget_owner >> 3)
                                                                                   + 0x7FFF8000) )
        {
          __asan_report_load1(p_use_origin_owner_as_gadget_owner);
        }
        if ( v15->use_origin_owner_as_gadget_owner )
        {
          std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          Creature::findTopOwnerOrSelf((Creature *const)(v2 + 144));
          std::shared_ptr<Creature>::operator=(
            (std::shared_ptr<Creature> *const)(v2 + 312),
            (std::shared_ptr<Creature> *)(v2 + 144));
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 144));
        }
        std::shared_ptr<Creature>::operator=(
          (std::shared_ptr<Creature> *const)(v2 + 352),
          (const std::shared_ptr<Creature> *)(v2 + 80));
        v17 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        *(_DWORD *)(v2 + 392) = Entity::getGroupVisionType((const Entity *const)v17);
        ability_param = (AbilityGadgetParam *)(v2 + 516);
        if ( *(_BYTE *)(((v2 + 516) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 100) & 7) >= *(_BYTE *)(((v2 + 516) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(v2 + 516);
        }
        ability_param->is_ability_created = 1;
        v18 = std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&v18->camp_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v18->camp_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v18->camp_id);
        }
        camp_id = v18->camp_id;
        if ( *(_BYTE *)(((unsigned __int64)&ability_param->camp_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)ability_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ability_param->camp_id >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_store4(&ability_param->camp_id);
        }
        ability_param->camp_id = camp_id;
        v20 = std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        p_camp_target_type = &v20->camp_target_type;
        if ( *(_BYTE *)(((unsigned __int64)p_camp_target_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_camp_target_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_camp_target_type >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(p_camp_target_type);
        }
        camp_target_type = v20->camp_target_type;
        if ( *(_BYTE *)(((unsigned __int64)&ability_param->camp_target_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)ability_param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ability_param->camp_target_type >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_store4(&ability_param->camp_target_type);
        }
        ability_param->camp_target_type = camp_target_type;
        v23 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        EntityId = Entity::getEntityId((const Entity *const)v23);
        if ( *(_BYTE *)(((unsigned __int64)&ability_param->target_entity_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)ability_param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ability_param->target_entity_id >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_store4(&ability_param->target_entity_id);
        }
        ability_param->target_entity_id = EntityId;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 176));
        v25 = std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        if ( *(char *)(((unsigned __int64)&v25->random_create >> 3) + 0x7FFF8000) < 0 )
          v25 = (std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v25->random_create);
        if ( v25->random_create
          && (v26 = std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48)),
              std::vector<unsigned int>::size(&v26->gadget_idlist)) )
        {
          v28 = common::tools::RandomUtils::rand<unsigned int>();
          v29 = std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          r = v28 % std::vector<unsigned int>::size(&v29->gadget_idlist);
          v30 = std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          v31 = std::vector<unsigned int>::operator[](&v30->gadget_idlist, r);
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 176), v31);
        }
        else
        {
          v32 = std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v2 + 176), &v32->gadget_idlist);
        }
        __for_range = (std::vector<unsigned int> *)(v2 + 176);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 176))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 176))._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v33 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          v34 = v33;
          if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v33);
          }
          *(_DWORD *)(v2 + 240) = *v34;
          v35 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          *(_DWORD *)(v2 + 248) = Scene::genNewEntityId(v35, PROT_ENTITY_GADGET);
          EntityMgr::createGadget((const GadgetParam *)(v2 + 144));
          if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 144), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              0x13u,
              "./src/ability/ability_mixin.cpp",
              "onKill",
              894);
            common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v55,
              (const char (*)[19])"createGadget fails");
            common::milog::MiLogStream::~MiLogStream(&v55);
          }
          else
          {
            if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 312), 0LL) )
            {
              v36 = std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
              p_life_by_owner_is_alive = &v36->life_by_owner_is_alive;
              if ( *(_BYTE *)(((unsigned __int64)p_life_by_owner_is_alive >> 3) + 0x7FFF8000) != 0
                && ((unsigned __int8)p_life_by_owner_is_alive & 7) >= *(_BYTE *)(((unsigned __int64)p_life_by_owner_is_alive >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load1(p_life_by_owner_is_alive);
              }
              if ( v36->life_by_owner_is_alive )
              {
                v38 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
                v39 = std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerCreateGadgetOnKillMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                v40 = &v39->life_by_owner_is_alive;
                if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
                  && ((unsigned __int8)v40 & 7) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load1(v40);
                }
                Creature::setIsAliveByOwner(v38, v39->life_by_owner_is_alive);
                v41 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 312));
                v42 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
                Creature::addSubCreature(v41, v42);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v55,
                &common::milog::MiLogDefault::default_log_obj_,
                0x13u,
                "./src/ability/ability_mixin.cpp",
                "onKill",
                908);
              v43 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      &v55,
                      (const char (*)[40])"createGadget owner_ptr is null, gadget:");
              v44 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v43, v44);
              common::milog::MiLogStream::~MiLogStream(&v55);
            }
            v45 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            v46 = v45;
            if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v45);
            v47 = *(_QWORD *)v46->baseclass_0 + 56LL;
            if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
              v47 = __asan_report_load8(*(_QWORD *)v46->baseclass_0 + 56LL);
            v49 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v47;
            v48 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            v49(v46, v48, &VisionContext::meet_context);
          }
          std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 144));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
        GadgetParam::~GadgetParam((GadgetParam *const)(v2 + 240));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 80));
  }
  std::shared_ptr<data::ServerCreateGadgetOnKillMixin>::~shared_ptr((std::shared_ptr<data::ServerCreateGadgetOnKillMixin> *const)(v2 + 48));
  if ( v56 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1184LL, v56);
  }
};

// Line 915: range 0000000013714E26-000000001371517C
bool __cdecl AbilityModifyDamageMixin::checkCondition(
        AbilityModifyDamageMixin *const this,
        AttackResult *attack_result)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // r14
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  bool *p_ignore_event_info; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  data::AttackType attack_type; // r14d
  char v13; // al
  bool result; // al
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 config_ptr:920";
  *(_QWORD *)(v2 + 16) = AbilityModifyDamageMixin::checkCondition;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_attacker_property.ignore_modify_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)attack_result - 102) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_attacker_property.ignore_modify_damage >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load1(&attack_result->server_attacker_property.ignore_modify_damage);
  }
  if ( attack_result->server_attacker_property.ignore_modify_damage )
  {
    v5 = 0;
  }
  else
  {
    std::dynamic_pointer_cast<data::ModifyDamageMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 32));
    if ( std::operator==<data::ModifyDamageMixin>((const std::shared_ptr<data::ModifyDamageMixin> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "checkCondition",
        923);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"config_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      p_ignore_event_info = &v6->ignore_event_info;
      if ( *(_BYTE *)(((unsigned __int64)p_ignore_event_info >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_ignore_event_info & 7) >= *(_BYTE *)(((unsigned __int64)p_ignore_event_info >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load1(p_ignore_event_info);
      }
      if ( v6->ignore_event_info )
        goto LABEL_21;
      v8 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( common::tools::MiscUtils::isContains<std::string>(&v8->anim_event_names, &attack_result->anim_event_id) )
        goto LABEL_21;
      v9 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( common::tools::MiscUtils::isContains<std::string>(&v9->attack_tags, &attack_result->attack_tag) )
        goto LABEL_21;
      v10 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v10->attack_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->attack_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->attack_type);
      }
      if ( v10->attack_type == None_2 )
        goto LABEL_22;
      v11 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v11->attack_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->attack_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v11->attack_type);
      }
      attack_type = v11->attack_type;
      if ( attack_type == AttackResult::getAttackType(attack_result) )
LABEL_21:
        v13 = 1;
      else
LABEL_22:
        v13 = 0;
      v5 = v13;
    }
    std::shared_ptr<data::ModifyDamageMixin>::~shared_ptr((std::shared_ptr<data::ModifyDamageMixin> *const)(v2 + 32));
  }
  result = v5;
  if ( v16 == (char *)v2 )
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

// Line 934: range 000000001371517E-0000000013715850
bool __cdecl AbilityModifyDamageMixin::checkConditionAndPredicates(
        AbilityModifyDamageMixin *const this,
        AttackResult *attack_result,
        bool is_be_hitting)
{
  bool v3; // r15
  unsigned __int64 p_ability_wtr; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Creature *v8; // rax
  AbilityComp *AbilityComp; // r14
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  bool result; // al
  bool predicate_yes; // [rsp+2Fh] [rbp-161h]
  BaseAbilityMixin v20; // [rsp+30h] [rbp-160h] BYREF

  p_ability_wtr = (unsigned __int64)&v20.ability_wtr_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      p_ability_wtr = v5;
  }
  *(_QWORD *)p_ability_wtr = 1102416563LL;
  *(_QWORD *)(p_ability_wtr + 8) = "4 48 16 14 config_ptr:935 80 16 15 ability_ptr:942 112 16 13 actor_ptr:944 144 72 9 param:958";
  *(_QWORD *)(p_ability_wtr + 16) = AbilityModifyDamageMixin::checkConditionAndPredicates;
  v6 = (_DWORD *)(p_ability_wtr >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  std::dynamic_pointer_cast<data::ModifyDamageMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(p_ability_wtr + 48));
  if ( std::operator==<data::ModifyDamageMixin>(
         0LL,
         (const std::shared_ptr<data::ModifyDamageMixin> *)(p_ability_wtr + 48)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v20._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "checkConditionAndPredicates",
      938);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)&v20._M_weak_this._M_refcount,
      (const char (*)[19])"config_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v20._M_weak_this._M_refcount);
    v3 = 0;
  }
  else
  {
    BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(p_ability_wtr + 80));
    BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(p_ability_wtr + 112));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(p_ability_wtr + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v20._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "checkConditionAndPredicates",
        947);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
        (common::milog::MiLogStream *const)&v20._M_weak_this._M_refcount,
        (const char (*)[18])"actor_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v20._M_weak_this._M_refcount);
      v3 = 0;
    }
    else if ( !AbilityModifyDamageMixin::checkCondition(this, attack_result) )
    {
      v3 = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 48));
      if ( !std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::size(&v7->predicates) )
        goto LABEL_23;
      if ( *(_BYTE *)(((unsigned __int64)&attack_result->predicate_modify_damage >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)attack_result - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->predicate_modify_damage >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_store1(&attack_result->predicate_modify_damage);
      }
      attack_result->predicate_modify_damage = 1;
      PredicateParam::PredicateParam((PredicateParam *const)(p_ability_wtr + 144));
      std::shared_ptr<ActorAbility>::operator=(
        (std::shared_ptr<ActorAbility> *const)(p_ability_wtr + 144),
        (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 80));
      BaseAbilityMixin::getModifier(&v20);
      std::shared_ptr<ActorModifier>::operator=(
        (std::shared_ptr<ActorModifier> *const)(p_ability_wtr + 160),
        (std::shared_ptr<ActorModifier> *)&v20);
      std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)&v20);
      std::shared_ptr<Creature>::operator=(
        (std::shared_ptr<Creature> *const)(p_ability_wtr + 192),
        (const std::shared_ptr<Creature> *)(p_ability_wtr + 112));
      if ( is_be_hitting )
        AttackResult::getAttacker((const AttackResult *const)&v20);
      else
        AttackResult::getDefenser((const AttackResult *const)&v20);
      std::shared_ptr<Creature>::operator=(
        (std::shared_ptr<Creature> *const)(p_ability_wtr + 176),
        (std::shared_ptr<Creature> *)&v20);
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&v20);
      *(_QWORD *)(p_ability_wtr + 208) = attack_result;
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 112));
      AbilityComp = Creature::getAbilityComp(v8);
      v10 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 48));
      predicate_yes = AbilityComp::evaluatePredicates(
                        AbilityComp,
                        &v10->predicates,
                        (PredicateParam *)(p_ability_wtr + 144));
      if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 80)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v20._M_weak_this._M_refcount,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/ability_mixin.cpp",
          "checkConditionAndPredicates",
          975);
        v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                (common::milog::MiLogStream *const)&v20._M_weak_this._M_refcount,
                (const char (*)[26])"[ModifyDamage] predicate:");
        v12 = common::milog::MiLogStream::operator<<(v11, predicate_yes);
        v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" ability:");
        v14 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 80));
        common::milog::MiLogStream::operator<<<ActorAbility,(ActorAbility*)0>(v13, v14);
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v20._M_weak_this._M_refcount,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/ability_mixin.cpp",
          "checkConditionAndPredicates",
          979);
        v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                (common::milog::MiLogStream *const)&v20._M_weak_this._M_refcount,
                (const char (*)[26])"[ModifyDamage] predicate:");
        common::milog::MiLogStream::operator<<(v15, predicate_yes);
      }
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v20._M_weak_this._M_refcount);
      if ( !predicate_yes )
      {
        v3 = 0;
        v16 = 0;
      }
      else
      {
        v16 = 1;
      }
      PredicateParam::~PredicateParam((PredicateParam *const)(p_ability_wtr + 144));
      if ( v16 == 1 )
LABEL_23:
        v3 = 1;
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(p_ability_wtr + 112));
    std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(p_ability_wtr + 80));
  }
  std::shared_ptr<data::ModifyDamageMixin>::~shared_ptr((std::shared_ptr<data::ModifyDamageMixin> *const)(p_ability_wtr + 48));
  result = v3;
  if ( &v20.ability_wtr_ == (ActorAbilityWtr *)p_ability_wtr )
  {
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((p_ability_wtr >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)p_ability_wtr = 1172321806LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 991: range 0000000013715852-0000000013715C46
void __cdecl AbilityModifyDamageMixin::onHittingOther(
        AbilityModifyDamageMixin *const this,
        AttackResult *attack_result)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  Creature *p_create_count; // rdi
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-190h] BYREF
  char v8[368]; // [rsp+30h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 actor_ptr:997 64 192 22 modified_property:1003";
  *(_QWORD *)(v2 + 16) = AbilityModifyDamageMixin::onHittingOther;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  if ( !AbilityModifyDamageMixin::checkConditionAndPredicates(this, attack_result, 0) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/ability_mixin.cpp",
      "onHittingOther",
      994);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v7,
      (const char (*)[33])"checkConditionAndPredicates fail");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onHittingOther",
        1000);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"actor_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
    else
    {
      ModifiedAttackProperty::ModifiedAttackProperty((ModifiedAttackProperty *const)(v2 + 64));
      if ( AbilityModifyDamageMixin::applyModifiedProperty(this, (ModifiedAttackProperty *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v7,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "onHittingOther",
          1006);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v7,
          (const char (*)[27])"applyModifiedProperty fail");
        common::milog::MiLogStream::~MiLogStream(&v7);
      }
      else
      {
        p_create_count = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->create_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->create_count >> 3)
                                                                       + 0x7FFF8000) )
        {
          p_create_count = (Creature *)&attack_result->create_count;
          __asan_report_load4(&attack_result->create_count);
        }
        Creature::addModifiedAttackPropertyByMixin(
          p_create_count,
          attack_result->create_count,
          (uintptr_t)this,
          (const ModifiedAttackProperty *)(v2 + 64));
      }
      ModifiedAttackProperty::~ModifiedAttackProperty((ModifiedAttackProperty *const)(v2 + 64));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1014: range 0000000013715C48-0000000013716CEA
int32_t __cdecl AbilityModifyDamageMixin::applyModifiedProperty(
        AbilityModifyDamageMixin *const this,
        ModifiedAttackProperty *modified_property)
{
  unsigned __int64 p_ability_wtr; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __m128i v7; // xmm0
  ActorAbility *v8; // r14
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __m128i v12; // xmm0
  ActorAbility *v13; // r14
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  __m128i v17; // xmm0
  ActorAbility *v18; // r14
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  StatLogFilterExcelConfigMgr *p_stat_log_filter_config_mgr; // r14
  std::map<unsigned int,float>::mapped_type *v22; // rax
  _DWORD *v23; // rdx
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  __m128i v25; // xmm0
  ActorAbility *v26; // r14
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  __m128i v30; // xmm0
  ActorAbility *v31; // r14
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  bool *p_true_damage; // rsi
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  __m128i v37; // xmm0
  ActorAbility *v38; // r14
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  __m128i v42; // xmm0
  ActorAbility *v43; // r14
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  int32_t result; // eax
  int v47; // [rsp+Ch] [rbp-144h]
  std::optional<bool> v49; // [rsp+26h] [rbp-12Ah] BYREF
  std::optional<float> v50; // [rsp+28h] [rbp-128h] BYREF
  std::optional<float> v51; // [rsp+30h] [rbp-120h] BYREF
  std::optional<float> v52; // [rsp+38h] [rbp-118h] BYREF
  std::optional<float> v53; // [rsp+40h] [rbp-110h] BYREF
  std::optional<float> v54; // [rsp+48h] [rbp-108h] BYREF
  std::optional<float> v55; // [rsp+50h] [rbp-100h] BYREF
  std::optional<float> v56; // [rsp+58h] [rbp-F8h] BYREF
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+60h] [rbp-F0h] BYREF
  BaseAbilityMixin p_record_ptr[2]; // [rsp+70h] [rbp-E0h] BYREF

  p_ability_wtr = (unsigned __int64)&p_record_ptr[0].ability_wtr_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      p_ability_wtr = v3;
  }
  *(_QWORD *)p_ability_wtr = 1102416563LL;
  *(_QWORD *)(p_ability_wtr + 8) = "4 32 4 17 damage_extra:1047 48 4 25 defense_ignore_delta:1080 64 16 16 ability_ptr:10"
                                   "15 96 16 15 config_ptr:1017";
  *(_QWORD *)(p_ability_wtr + 16) = AbilityModifyDamageMixin::applyModifiedProperty;
  v4 = (_DWORD *)(p_ability_wtr >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(p_ability_wtr + 64));
  std::dynamic_pointer_cast<data::ModifyDamageMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(p_ability_wtr + 96));
  if ( std::operator==<data::ModifyDamageMixin>(
         0LL,
         (const std::shared_ptr<data::ModifyDamageMixin> *)(p_ability_wtr + 96)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_record_ptr[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "applyModifiedProperty",
      1020);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)&p_record_ptr[0]._M_weak_this._M_refcount,
      (const char (*)[19])"config_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_record_ptr[0]._M_weak_this._M_refcount);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
    if ( *(char *)(((unsigned __int64)&v6->damage_percentage.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      v6 = (std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v6->damage_percentage.is_json_loaded);
    if ( v6->damage_percentage.is_json_loaded )
    {
      v7 = 0LL;
      *(_DWORD *)(p_ability_wtr + 48) = 0;
      if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 64)) )
      {
        v8 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 64));
        std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v9 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        *(float *)v7.m128i_i32 = ActorAbility::evaluate(
                                   v8,
                                   &v9->damage_percentage,
                                   &p_global_value_source_ptr,
                                   (DieCreatureRecordPtr *)p_record_ptr);
        *(_DWORD *)(p_ability_wtr + 48) = _mm_cvtsi128_si32(v7);
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
      }
      else
      {
        v10 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v10->damage_percentage >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v10->damage_percentage >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v10->damage_percentage);
        }
        *(float *)(p_ability_wtr + 48) = v10->damage_percentage.fixed_value;
      }
      std::optional<float>::optional<float &,true>(&v50, (float *)(p_ability_wtr + 48));
      if ( *(_BYTE *)(((unsigned __int64)modified_property >> 3) + 0x7FFF8000) )
        __asan_report_store8(modified_property);
      modified_property->damage_percentage = v50;
    }
    v11 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
    if ( *(char *)(((unsigned __int64)&v11->damage_percentage_ratio.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      v11 = (std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v11->damage_percentage_ratio.is_json_loaded);
    if ( v11->damage_percentage_ratio.is_json_loaded )
    {
      v12 = 0LL;
      *(_DWORD *)(p_ability_wtr + 48) = 0;
      if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 64)) )
      {
        v13 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 64));
        std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v14 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        *(float *)v12.m128i_i32 = ActorAbility::evaluate(
                                    v13,
                                    &v14->damage_percentage_ratio,
                                    &p_global_value_source_ptr,
                                    (DieCreatureRecordPtr *)p_record_ptr);
        *(_DWORD *)(p_ability_wtr + 48) = _mm_cvtsi128_si32(v12);
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
      }
      else
      {
        v15 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v15->damage_percentage_ratio >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v15->damage_percentage_ratio >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v15->damage_percentage_ratio);
        }
        *(float *)(p_ability_wtr + 48) = v15->damage_percentage_ratio.fixed_value;
      }
      std::optional<float>::optional<float &,true>(&v51, (float *)(p_ability_wtr + 48));
      if ( *(_BYTE *)(((unsigned __int64)&modified_property->damage_percentage_ratio >> 3) + 0x7FFF8000) )
        __asan_report_store8(&modified_property->damage_percentage_ratio);
      modified_property->damage_percentage_ratio = v51;
    }
    v16 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
    if ( *(char *)(((unsigned __int64)&v16->damage_extra.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      v16 = (std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v16->damage_extra.is_json_loaded);
    if ( v16->damage_extra.is_json_loaded )
    {
      v17 = 0LL;
      *(_DWORD *)(p_ability_wtr + 32) = 0;
      if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 64)) )
      {
        v18 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 64));
        std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v19 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        *(float *)v17.m128i_i32 = ActorAbility::evaluate(
                                    v18,
                                    &v19->damage_extra,
                                    &p_global_value_source_ptr,
                                    (DieCreatureRecordPtr *)p_record_ptr);
        *(_DWORD *)(p_ability_wtr + 32) = _mm_cvtsi128_si32(v17);
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
      }
      else
      {
        v20 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v20->damage_extra >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v20->damage_extra >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v20->damage_extra);
        }
        *(float *)(p_ability_wtr + 32) = v20->damage_extra.fixed_value;
      }
      std::optional<float>::optional<float &,true>(&v52, (float *)(p_ability_wtr + 32));
      if ( *(_BYTE *)(((unsigned __int64)&modified_property->damage_extra >> 3) + 0x7FFF8000) )
        __asan_report_store8(&modified_property->damage_extra);
      modified_property->damage_extra = v52;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&p_global_value_source_ptr);
      p_stat_log_filter_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_global_value_source_ptr)->design_config.txt_config_mgr.stat_log_filter_config_mgr;
      BaseAbilityMixin::getAbilityFilterIndex(p_record_ptr);
      *(_DWORD *)(p_ability_wtr + 48) = StatLogFilterExcelConfigMgr::getFilterHashByAbilityFilterIndex(
                                          p_stat_log_filter_config_mgr,
                                          (const data::AbilityFilterIndex *)p_record_ptr);
      data::AbilityFilterIndex::~AbilityFilterIndex((data::AbilityFilterIndex *const)p_record_ptr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_global_value_source_ptr);
      if ( *(_DWORD *)(p_ability_wtr + 48) )
      {
        v47 = *(_DWORD *)(p_ability_wtr + 32);
        v22 = std::map<unsigned int,float>::operator[](
                &modified_property->stat_log_damage_extra_map,
                (const std::map<unsigned int,float>::key_type *)(p_ability_wtr + 48));
        v23 = v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v22);
        }
        *v23 = v47;
      }
    }
    v24 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
    if ( *(char *)(((unsigned __int64)&v24->bonus_critical.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      v24 = (std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v24->bonus_critical.is_json_loaded);
    if ( v24->bonus_critical.is_json_loaded )
    {
      v25 = 0LL;
      *(_DWORD *)(p_ability_wtr + 48) = 0;
      if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 64)) )
      {
        v26 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 64));
        std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v27 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        *(float *)v25.m128i_i32 = ActorAbility::evaluate(
                                    v26,
                                    &v27->bonus_critical,
                                    &p_global_value_source_ptr,
                                    (DieCreatureRecordPtr *)p_record_ptr);
        *(_DWORD *)(p_ability_wtr + 48) = _mm_cvtsi128_si32(v25);
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
      }
      else
      {
        v28 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v28->bonus_critical >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v28->bonus_critical >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v28->bonus_critical);
        }
        *(float *)(p_ability_wtr + 48) = v28->bonus_critical.fixed_value;
      }
      std::optional<float>::optional<float &,true>(&v53, (float *)(p_ability_wtr + 48));
      if ( *(_BYTE *)(((unsigned __int64)&modified_property->bonus_critical >> 3) + 0x7FFF8000) )
        __asan_report_store8(&modified_property->bonus_critical);
      modified_property->bonus_critical = v53;
    }
    v29 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
    if ( *(char *)(((unsigned __int64)&v29->bonus_critical_hurt.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      v29 = (std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v29->bonus_critical_hurt.is_json_loaded);
    if ( v29->bonus_critical_hurt.is_json_loaded )
    {
      v30 = 0LL;
      *(_DWORD *)(p_ability_wtr + 48) = 0;
      if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 64)) )
      {
        v31 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 64));
        std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v32 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        *(float *)v30.m128i_i32 = ActorAbility::evaluate(
                                    v31,
                                    &v32->bonus_critical_hurt,
                                    &p_global_value_source_ptr,
                                    (DieCreatureRecordPtr *)p_record_ptr);
        *(_DWORD *)(p_ability_wtr + 48) = _mm_cvtsi128_si32(v30);
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
      }
      else
      {
        v33 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v33->bonus_critical_hurt >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v33->bonus_critical_hurt >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v33->bonus_critical_hurt);
        }
        *(float *)(p_ability_wtr + 48) = v33->bonus_critical_hurt.fixed_value;
      }
      std::optional<float>::optional<float &,true>(&v54, (float *)(p_ability_wtr + 48));
      if ( *(_BYTE *)(((unsigned __int64)&modified_property->bonus_critical_hurt >> 3) + 0x7FFF8000) )
        __asan_report_store8(&modified_property->bonus_critical_hurt);
      modified_property->bonus_critical_hurt = v54;
    }
    v34 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
    if ( *(char *)(((unsigned __int64)&v34->true_damage >> 3) + 0x7FFF8000) < 0 )
      v34 = (std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v34->true_damage);
    if ( v34->true_damage )
    {
      p_true_damage = &std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96))->true_damage;
      std::optional<bool>::optional<bool &,true>(&v49, p_true_damage);
      if ( *(_BYTE *)(((unsigned __int64)&modified_property->true_damage >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&modified_property->true_damage >> 3) + 0x7FFF8000) <= 1 )
      {
        __asan_report_store2(&modified_property->true_damage);
      }
      modified_property->true_damage = v49;
    }
    v36 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
    if ( *(char *)(((unsigned __int64)&v36->defense_ignore_ratio.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      v36 = (std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v36->defense_ignore_ratio.is_json_loaded);
    if ( v36->defense_ignore_ratio.is_json_loaded )
    {
      v37 = 0LL;
      *(_DWORD *)(p_ability_wtr + 48) = 0;
      if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 64)) )
      {
        v38 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 64));
        std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v39 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        *(float *)v37.m128i_i32 = ActorAbility::evaluate(
                                    v38,
                                    &v39->defense_ignore_ratio,
                                    &p_global_value_source_ptr,
                                    (DieCreatureRecordPtr *)p_record_ptr);
        *(_DWORD *)(p_ability_wtr + 48) = _mm_cvtsi128_si32(v37);
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
      }
      else
      {
        v40 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v40->defense_ignore_ratio >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v40->defense_ignore_ratio >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v40->defense_ignore_ratio);
        }
        *(float *)(p_ability_wtr + 48) = v40->defense_ignore_ratio.fixed_value;
      }
      std::optional<float>::optional<float &,true>(&v55, (float *)(p_ability_wtr + 48));
      if ( (((unsigned __int8)modified_property + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&modified_property->defense_ignore_ratio >> 3)
                                                                       + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&modified_property->defense_ignore_ratio >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(&modified_property->defense_ignore_ratio._M_payload._M_engaged + 3) >> 3)
                    + 0x7FFF8000) != 0
        && (((unsigned __int8)modified_property + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&modified_property->defense_ignore_ratio._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_store_n(&modified_property->defense_ignore_ratio, 8LL);
      }
      modified_property->defense_ignore_ratio = v55;
    }
    v41 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
    if ( *(char *)(((unsigned __int64)&v41->defense_ignore_delta.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      v41 = (std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v41->defense_ignore_delta.is_json_loaded);
    if ( v41->defense_ignore_delta.is_json_loaded )
    {
      v42 = 0LL;
      *(_DWORD *)(p_ability_wtr + 48) = 0;
      if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 64)) )
      {
        v43 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 64));
        std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v44 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        *(float *)v42.m128i_i32 = ActorAbility::evaluate(
                                    v43,
                                    &v44->defense_ignore_delta,
                                    &p_global_value_source_ptr,
                                    (DieCreatureRecordPtr *)p_record_ptr);
        *(_DWORD *)(p_ability_wtr + 48) = _mm_cvtsi128_si32(v42);
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
      }
      else
      {
        v45 = std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v45->defense_ignore_delta >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v45->defense_ignore_delta >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v45->defense_ignore_delta);
        }
        *(float *)(p_ability_wtr + 48) = v45->defense_ignore_delta.fixed_value;
      }
      std::optional<float>::optional<float &,true>(&v56, (float *)(p_ability_wtr + 48));
      if ( (((unsigned __int8)modified_property + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&modified_property->defense_ignore_delta >> 3)
                                                                        + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&modified_property->defense_ignore_delta >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(&modified_property->defense_ignore_delta._M_payload._M_engaged + 3) >> 3)
                    + 0x7FFF8000) != 0
        && (((unsigned __int8)modified_property + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&modified_property->defense_ignore_delta._M_payload._M_engaged
                                                                                            + 3) >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_store_n(&modified_property->defense_ignore_delta, 8LL);
      }
      modified_property->defense_ignore_delta = v56;
    }
    v5 = 0;
  }
  std::shared_ptr<data::ModifyDamageMixin>::~shared_ptr((std::shared_ptr<data::ModifyDamageMixin> *const)(p_ability_wtr + 96));
  std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(p_ability_wtr + 64));
  result = v5;
  if ( &p_record_ptr[0].ability_wtr_ == (ActorAbilityWtr *)p_ability_wtr )
  {
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_ability_wtr = 1172321806LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1087: range 0000000013716CEC-00000000137176C1
void __cdecl AbilityResistClimateMixin::onAdded(AbilityResistClimateMixin *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __gnu_cxx::__normal_iterator<data::JsonClimateType*,std::vector<data::JsonClimateType> >::reference v9; // rax
  data::JsonClimateType *v10; // rdx
  std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  data::ClimateTrendType *p_trend; // rax
  ActorAbility *v14; // r14
  std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *v17; // rax
  PlayerBasicComp *BasicComp; // r15
  Avatar *v19; // r14
  std::vector<unsigned int>::value_type __x; // [rsp+10h] [rbp-1C0h] BYREF
  uint32_t source_type; // [rsp+14h] [rbp-1BCh]
  uint32_t trend_type; // [rsp+18h] [rbp-1B8h]
  float resist_ratio; // [rsp+1Ch] [rbp-1B4h]
  uint32_t avatar_stage_type; // [rsp+20h] [rbp-1B0h]
  data::JsonClimateType json_climate_type; // [rsp+24h] [rbp-1ACh]
  std::vector<data::JsonClimateType>::iterator __for_begin; // [rsp+28h] [rbp-1A8h] BYREF
  std::vector<data::JsonClimateType>::iterator __for_end; // [rsp+30h] [rbp-1A0h] BYREF
  std::vector<data::JsonClimateType> *__for_range; // [rsp+38h] [rbp-198h]
  BaseAbilityMixin p_global_value_source_ptr; // [rsp+40h] [rbp-190h] BYREF
  char v30[304]; // [rsp+A0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 16 14 actor_ptr:1088 64 16 15 avatar_ptr:1094 96 16 15 player_ptr:1100 128 16 16 ability_pt"
                        "r:1106 160 16 15 config_ptr:1112 192 24 21 climate_type_vec:1118";
  *(_QWORD *)(v2 + 16) = AbilityResistClimateMixin::onAdded;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 32));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_global_value_source_ptr.modifier_wtr_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/ability/ability_mixin.cpp",
      "onAdded",
      1091);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&p_global_value_source_ptr.modifier_wtr_,
      (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_global_value_source_ptr.modifier_wtr_);
  }
  else
  {
    std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v2 + 64));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_global_value_source_ptr.modifier_wtr_,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/ability/ability_mixin.cpp",
        "onAdded",
        1097);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
        (common::milog::MiLogStream *const)&p_global_value_source_ptr.modifier_wtr_,
        (const char (*)[20])"actor is not avatar");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_global_value_source_ptr.modifier_wtr_);
    }
    else
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 152LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 152LL);
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v6)(v2 + 96, v5);
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_global_value_source_ptr.modifier_wtr_,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/ability/ability_mixin.cpp",
          "onAdded",
          1103);
        v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               (common::milog::MiLogStream *const)&p_global_value_source_ptr.modifier_wtr_,
               (const char (*)[30])"player_ptr is null, creature:");
        v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v7, v8);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_global_value_source_ptr.modifier_wtr_);
      }
      else
      {
        BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 128));
        if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_global_value_source_ptr.modifier_wtr_,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/ability/ability_mixin.cpp",
            "onAdded",
            1109);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            (common::milog::MiLogStream *const)&p_global_value_source_ptr.modifier_wtr_,
            (const char (*)[20])"ability_ptr is null");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_global_value_source_ptr.modifier_wtr_);
        }
        else
        {
          std::dynamic_pointer_cast<data::ResistClimateMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 160));
          if ( std::operator==<data::ResistClimateMixin>(
                 (const std::shared_ptr<data::ResistClimateMixin> *)(v2 + 160),
                 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&p_global_value_source_ptr.modifier_wtr_,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/ability/ability_mixin.cpp",
              "onAdded",
              1115);
            common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              (common::milog::MiLogStream *const)&p_global_value_source_ptr.modifier_wtr_,
              (const char (*)[19])"config_ptr is null");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_global_value_source_ptr.modifier_wtr_);
          }
          else
          {
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 192));
            __for_range = &std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160))->climate_types;
            __for_begin._M_current = std::vector<data::JsonClimateType>::begin(__for_range)._M_current;
            __for_end._M_current = std::vector<data::JsonClimateType>::end(__for_range)._M_current;
            while ( __gnu_cxx::operator!=<data::JsonClimateType *,std::vector<data::JsonClimateType>>(
                      &__for_begin,
                      &__for_end) )
            {
              v9 = __gnu_cxx::__normal_iterator<data::JsonClimateType *,std::vector<data::JsonClimateType>>::operator*(&__for_begin);
              v10 = v9;
              if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
              {
                *(double *)v1.m128i_i64 = __asan_report_load4(v9);
              }
              json_climate_type = *v10;
              __x = json_climate_type;
              std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 192), &__x);
              __gnu_cxx::__normal_iterator<data::JsonClimateType *,std::vector<data::JsonClimateType>>::operator++(&__for_begin);
            }
            v11 = std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&v11->source >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v11->source >> 3) + 0x7FFF8000) <= 3 )
            {
              *(double *)v1.m128i_i64 = __asan_report_load4(&v11->source);
            }
            source_type = v11->source;
            v12 = std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            p_trend = &v12->trend;
            if ( *(_BYTE *)(((unsigned __int64)p_trend >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_trend & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_trend >> 3) + 0x7FFF8000) )
            {
              *(double *)v1.m128i_i64 = __asan_report_load4(p_trend);
            }
            trend_type = v12->trend;
            v14 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            std::shared_ptr<DieCreatureRecord>::shared_ptr(
              (std::shared_ptr<DieCreatureRecord> *const)&p_global_value_source_ptr._M_weak_this._M_refcount,
              0LL);
            std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)&p_global_value_source_ptr, 0LL);
            v15 = std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            *(float *)v1.m128i_i32 = ActorAbility::evaluate(
                                       v14,
                                       &v15->ratio,
                                       (CreaturePtr *)&p_global_value_source_ptr,
                                       (DieCreatureRecordPtr *)&p_global_value_source_ptr._M_weak_this._M_refcount);
            LODWORD(resist_ratio) = _mm_cvtsi128_si32(v1);
            std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)&p_global_value_source_ptr._M_weak_this._M_refcount);
            v16 = std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ResistClimateMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&v16->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v16->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v16->type);
            }
            avatar_stage_type = v16->type;
            v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            BasicComp = Player::getBasicComp(v17);
            v19 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            std::vector<unsigned int>::vector(
              (std::vector<unsigned int> *const)&p_global_value_source_ptr.actor_wtr_,
              (const std::vector<unsigned int> *)(v2 + 192));
            toThisPtr<BaseAbilityMixin>(&p_global_value_source_ptr);
            std::weak_ptr<BaseAbilityMixin>::weak_ptr<BaseAbilityMixin,void>(
              (std::weak_ptr<BaseAbilityMixin> *const)&p_global_value_source_ptr._M_weak_this._M_refcount,
              (const std::shared_ptr<BaseAbilityMixin> *)&p_global_value_source_ptr);
            PlayerBasicComp::addResistClimateMixin(
              BasicComp,
              (BaseAbilityMixinWtr *)&p_global_value_source_ptr._M_weak_this._M_refcount,
              (std::vector<unsigned int> *)&p_global_value_source_ptr.actor_wtr_,
              source_type,
              trend_type,
              resist_ratio,
              avatar_stage_type,
              v19);
            std::weak_ptr<BaseAbilityMixin>::~weak_ptr((std::weak_ptr<BaseAbilityMixin> *const)&p_global_value_source_ptr._M_weak_this._M_refcount);
            std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)&p_global_value_source_ptr);
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&p_global_value_source_ptr.actor_wtr_);
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 192));
          }
          std::shared_ptr<data::ResistClimateMixin>::~shared_ptr((std::shared_ptr<data::ResistClimateMixin> *const)(v2 + 160));
        }
        std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 128));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1131: range 00000000137176C2-0000000013717A1B
void __cdecl AbilityResistClimateMixin::onRemoved(AbilityResistClimateMixin *const this)
{
  unsigned __int64 p_ability_wtr; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // r14
  BaseAbilityMixin t; // [rsp+10h] [rbp-C0h] BYREF

  p_ability_wtr = (unsigned __int64)&t.ability_wtr_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_ability_wtr = v2;
  }
  *(_QWORD *)p_ability_wtr = 1102416563LL;
  *(_QWORD *)(p_ability_wtr + 8) = "2 32 16 14 actor_ptr:1132 64 16 15 player_ptr:1138";
  *(_QWORD *)(p_ability_wtr + 16) = AbilityResistClimateMixin::onRemoved;
  v3 = (_DWORD *)(p_ability_wtr >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(p_ability_wtr + 32));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(p_ability_wtr + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&t._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/ability/ability_mixin.cpp",
      "onRemoved",
      1135);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&t._M_weak_this._M_refcount,
      (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t._M_weak_this._M_refcount);
  }
  else
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 32));
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    v5 = *(_QWORD *)v4 + 152LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)v4 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v5)(p_ability_wtr + 64, v4);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(p_ability_wtr + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&t._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/ability/ability_mixin.cpp",
        "onRemoved",
        1141);
      v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             (common::milog::MiLogStream *const)&t._M_weak_this._M_refcount,
             (const char (*)[30])"player_ptr is null, creature:");
      v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 32));
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v6, v7);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t._M_weak_this._M_refcount);
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 64));
      BasicComp = Player::getBasicComp(v8);
      toThisPtr<BaseAbilityMixin>(&t);
      PlayerBasicComp::delResistClimateMixin(BasicComp, (BaseAbilityMixinPtr *)&t);
      std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)&t);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_ability_wtr + 64));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(p_ability_wtr + 32));
  if ( &t.ability_wtr_ == (ActorAbilityWtr *)p_ability_wtr )
  {
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_ability_wtr >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_ability_wtr = 1172321806LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_ability_wtr >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1148: range 0000000013717A1C-0000000013717A86
void __cdecl AbilityResistClimateMixin::onKill(AbilityResistClimateMixin *const this, const ChangeHpContext *a2)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = (unsigned __int64)(this->_vptr_BaseAbilityMixin + 4);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(this->_vptr_BaseAbilityMixin + 4);
  (*(void (__fastcall **)(AbilityResistClimateMixin *const))v2)(this);
};

// Line 1156: range 0000000013717A88-00000000137184B0
void __cdecl AbilityModifySkillCDByModifierCountMixin::handleMixinInvokeEntry(
        AbilityModifySkillCDByModifierCountMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  __m128i v3; // xmm0
  unsigned __int64 p_config_mixin_ptr; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t SkillComp; // r14d
  std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  ActorAbility *v28; // r14
  std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  Skill *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+20h] [rbp-150h] BYREF
  BaseAbilityMixin v41; // [rsp+30h] [rbp-140h] BYREF

  p_config_mixin_ptr = (unsigned __int64)&v41.config_mixin_ptr_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      p_config_mixin_ptr = v5;
  }
  *(_QWORD *)p_config_mixin_ptr = 1102416563LL;
  *(_QWORD *)(p_config_mixin_ptr + 8) = "5 48 4 13 cd_delta:1186 64 16 15 config_ptr:1157 96 16 15 avatar_ptr:1163 128 16"
                                        " 16 ability_ptr:1169 160 16 14 skill_ptr:1180";
  *(_QWORD *)(p_config_mixin_ptr + 16) = AbilityModifySkillCDByModifierCountMixin::handleMixinInvokeEntry;
  v6 = (_DWORD *)(p_config_mixin_ptr >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  std::dynamic_pointer_cast<data::ModifySkillCDByModifierCountMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(p_config_mixin_ptr + 64));
  if ( std::operator==<data::ModifySkillCDByModifierCountMixin>(
         0LL,
         (const std::shared_ptr<data::ModifySkillCDByModifierCountMixin> *)(p_config_mixin_ptr + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v41._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      1160);
    v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           (common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount,
           (const char (*)[63])"ModifySkillCDByModifierCountMixin config_ptr is null, ability:");
    BaseAbilityMixin::getAbilityName[abi:cxx11]((std::string *)&v41.ability_wtr_, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v41.ability_wtr_);
    std::string::~string(&v41.ability_wtr_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount);
  }
  else
  {
    BaseAbilityMixin::getActor(&v41);
    std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(p_config_mixin_ptr + 96));
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&v41);
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(p_config_mixin_ptr + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v41._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        1166);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             (common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount,
             (const char (*)[29])"avatar_ptr is null, ability:");
      BaseAbilityMixin::getAbilityName[abi:cxx11]((std::string *)&v41.ability_wtr_, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)&v41.ability_wtr_);
      std::string::~string(&v41.ability_wtr_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount);
    }
    else
    {
      BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(p_config_mixin_ptr + 128));
      if ( std::operator==<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_config_mixin_ptr + 128)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v41._M_weak_this._M_refcount,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "handleMixinInvokeEntry",
          1172);
        v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               (common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount,
               (const char (*)[30])"ability_ptr is null, ability:");
        BaseAbilityMixin::getAbilityName[abi:cxx11]((std::string *)&v41.ability_wtr_, this);
        v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v9,
                (const std::string *)&v41.ability_wtr_);
        v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" avatar:");
        v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 96));
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, v12);
        std::string::~string(&v41.ability_wtr_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount);
      }
      else
      {
        v13 = std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v13->skill_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->skill_id >> 3) + 0x7FFF8000) <= 3 )
        {
          *(double *)v3.m128i_i64 = __asan_report_load4(&v13->skill_id);
        }
        if ( v13->skill_id )
        {
          v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 96));
          SkillComp = (unsigned int)Avatar::getSkillComp(v18);
          v20 = std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v20->skill_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v20->skill_id >> 3) + 0x7FFF8000) <= 3 )
          {
            *(double *)v3.m128i_i64 = __asan_report_load4(&v20->skill_id);
          }
          SkillComp::findSkill((const SkillComp *const)(p_config_mixin_ptr + 160), SkillComp);
          if ( std::operator==<Skill>(0LL, (const std::shared_ptr<Skill> *)(p_config_mixin_ptr + 160)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v41._M_weak_this._M_refcount,
              &common::milog::MiLogDefault::default_log_obj_,
              0x13u,
              "./src/ability/ability_mixin.cpp",
              "handleMixinInvokeEntry",
              1183);
            v21 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    (common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount,
                    (const char (*)[27])"skill not found, skill_id:");
            v22 = std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 64));
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v22->skill_id);
            v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" ability:");
            BaseAbilityMixin::getAbilityName[abi:cxx11]((std::string *)&v41.ability_wtr_, this);
            v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v24,
                    (const std::string *)&v41.ability_wtr_);
            v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" avatar:");
            v27 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 96));
            common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v26, v27);
            std::string::~string(&v41.ability_wtr_);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount);
          }
          else
          {
            v28 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 128));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)&v41, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v29 = std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 64));
            *(float *)v3.m128i_i32 = ActorAbility::evaluate(
                                       v28,
                                       &v29->cd_delta,
                                       &p_global_value_source_ptr,
                                       (DieCreatureRecordPtr *)&v41);
            *(_DWORD *)(p_config_mixin_ptr + 48) = _mm_cvtsi128_si32(v3);
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)&v41);
            v30 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 160));
            Skill::changeCurrentSkillCdTime(v30, *(float *)(p_config_mixin_ptr + 48), 0.0);
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v41._M_weak_this._M_refcount,
              &common::milog::MiLogDefault::default_log_obj_,
              0x11u,
              "./src/ability/ability_mixin.cpp",
              "handleMixinInvokeEntry",
              1189);
            v31 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    (common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount,
                    (const char (*)[51])"[MIXIN] ModifySkillCDByModifierCountMixin, avatar:");
            v32 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 96));
            v33 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v31, v32);
            v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v33, (const char (*)[10])" ability:");
            BaseAbilityMixin::getAbilityName[abi:cxx11]((std::string *)&v41.ability_wtr_, this);
            v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v34,
                    (const std::string *)&v41.ability_wtr_);
            v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v35, (const char (*)[11])" skill_id:");
            v37 = std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCDByModifierCountMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 64));
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &v37->skill_id);
            v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])" cd_delta:");
            common::milog::MiLogStream::operator<<<float,(float *)0>(v39, (const float *)(p_config_mixin_ptr + 48));
            std::string::~string(&v41.ability_wtr_);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount);
          }
          std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(p_config_mixin_ptr + 160));
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v41._M_weak_this._M_refcount,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/ability/ability_mixin.cpp",
            "handleMixinInvokeEntry",
            1177);
          v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  (common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount,
                  (const char (*)[27])"skill_id is null, ability:");
          BaseAbilityMixin::getAbilityName[abi:cxx11]((std::string *)&v41.ability_wtr_, this);
          v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v14,
                  (const std::string *)&v41.ability_wtr_);
          v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" avatar:");
          v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_config_mixin_ptr + 96));
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v16, v17);
          std::string::~string(&v41.ability_wtr_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v41._M_weak_this._M_refcount);
        }
      }
      std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(p_config_mixin_ptr + 128));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(p_config_mixin_ptr + 96));
  }
  std::shared_ptr<data::ModifySkillCDByModifierCountMixin>::~shared_ptr((std::shared_ptr<data::ModifySkillCDByModifierCountMixin> *const)(p_config_mixin_ptr + 64));
  if ( &v41.config_mixin_ptr_ == (data::ConfigAbilityMixinPtr *)p_config_mixin_ptr )
  {
    *(_QWORD *)((p_config_mixin_ptr >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_config_mixin_ptr >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_config_mixin_ptr >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)p_config_mixin_ptr = 1172321806LL;
    *(_QWORD *)((p_config_mixin_ptr >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_config_mixin_ptr >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_config_mixin_ptr >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1194: range 00000000137184B2-0000000013718E2F
void __cdecl AbilityServerFinishWatcherMixin::onKill(
        AbilityServerFinishWatcherMixin *const this,
        const ChangeHpContext *context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<data::ServerFinishWatcherMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Creature *v6; // rax
  AbilityComp *AbilityComp; // r14
  std::__shared_ptr_access<data::ServerFinishWatcherMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  unsigned __int64 v10; // rax
  void (__fastcall **v11)(common::milog::MiLogStream *, unsigned __int64); // rdx
  int v12; // r14d
  Monster *v13; // r14
  const std::shared_ptr<Player> *v14; // rax
  Player *v15; // rax
  PlayerWatcherComp *WatcherComp; // r14
  std::__shared_ptr_access<data::ServerFinishWatcherMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+18h] [rbp-5A8h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+20h] [rbp-5A0h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+28h] [rbp-598h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-590h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-570h] BYREF
  char v23[1360]; // [rsp+70h] [rbp-550h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1312LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 16 15 config_ptr:1195 64 16 17 creature_ptr:1201 96 16 16 monster_ptr:1207 128 16 15 player"
                        "_ptr:1238 160 24 15 player_vec:1237 224 72 10 param:1220 336 840 18 attack_result:1226";
  *(_QWORD *)(v2 + 16) = AbilityServerFinishWatcherMixin::onKill;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862756] = -218103808;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
  v4[536862760] = -202116109;
  std::dynamic_pointer_cast<data::ServerFinishWatcherMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 32));
  if ( std::operator==<data::ServerFinishWatcherMixin>(
         0LL,
         (const std::shared_ptr<data::ServerFinishWatcherMixin> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "onKill",
      1198);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"config_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 64));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onKill",
        1204);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v22, (const char (*)[14])"actor is null");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v2 + 96));
      if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "onKill",
          1210);
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          &v22,
          (const char (*)[43])"[ServerFinishWatcher] actor is not monster");
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&context->kill_self_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)context + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->kill_self_type >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&context->kill_self_type);
        }
        if ( context->kill_self_type != Disappear )
        {
          v5 = std::__shared_ptr_access<data::ServerFinishWatcherMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerFinishWatcherMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::empty(&v5->predicates) )
            goto LABEL_22;
          PredicateParam::PredicateParam((PredicateParam *const)(v2 + 224));
          BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 128));
          std::shared_ptr<ActorAbility>::operator=(
            (std::shared_ptr<ActorAbility> *const)(v2 + 224),
            (std::shared_ptr<ActorAbility> *)(v2 + 128));
          std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 128));
          BaseAbilityMixin::getModifier((const BaseAbilityMixin *const)(v2 + 128));
          std::shared_ptr<ActorModifier>::operator=(
            (std::shared_ptr<ActorModifier> *const)(v2 + 240),
            (std::shared_ptr<ActorModifier> *)(v2 + 128));
          std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v2 + 128));
          std::shared_ptr<Creature>::operator=(
            (std::shared_ptr<Creature> *const)(v2 + 272),
            (const std::shared_ptr<Creature> *)(v2 + 64));
          std::shared_ptr<Creature>::operator=((std::shared_ptr<Creature> *const)(v2 + 256), &context->attacker_ptr);
          AttackResult::AttackResult((AttackResult *const)(v2 + 336));
          std::string::operator=(v2 + 408, &context->attack_tag);
          *(_QWORD *)(v2 + 288) = v2 + 336;
          v6 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          AbilityComp = Creature::getAbilityComp(v6);
          v8 = std::__shared_ptr_access<data::ServerFinishWatcherMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerFinishWatcherMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( !AbilityComp::evaluatePredicates(AbilityComp, &v8->predicates, (PredicateParam *)(v2 + 224)) )
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/ability/ability_mixin.cpp",
              "onKill",
              1231);
            v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                   &v21,
                   (const char (*)[49])"[ServerFinishWatcher] predicate not ok creature:");
            v10 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
              v10 = __asan_report_load8(v10);
            v11 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v10;
            if ( *(_BYTE *)((*(_QWORD *)v10 >> 3) + 0x7FFF8000LL) )
              v10 = __asan_report_load8(*(_QWORD *)v10);
            (*v11)(&v22, v10);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)&v22);
            std::string::~string(&v22);
            common::milog::MiLogStream::~MiLogStream(&v21);
            v12 = 0;
          }
          else
          {
            v12 = 1;
          }
          AttackResult::~AttackResult((AttackResult *const)(v2 + 336));
          PredicateParam::~PredicateParam((PredicateParam *const)(v2 + 224));
          if ( v12 == 1 )
          {
LABEL_22:
            v13 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 128), &context->attacker_ptr);
            Monster::getEngagedPlayerOnScene(
              (std::vector<std::shared_ptr<Player>> *)(v2 + 160),
              v13,
              (CreaturePtr *)(v2 + 128));
            std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 128));
            __for_range = (std::vector<std::shared_ptr<Player>> *)(v2 + 160);
            __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v2 + 160))._M_current;
            __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v2 + 160))._M_current;
            while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                      &__for_begin,
                      &__for_end) )
            {
              v14 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
              std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v2 + 128), v14);
              if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
              {
                v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                WatcherComp = Player::getWatcherComp(v15);
                v17 = std::__shared_ptr_access<data::ServerFinishWatcherMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ServerFinishWatcherMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
                if ( *(_BYTE *)(((unsigned __int64)&v17->watcher_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v17->watcher_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&v17->watcher_id);
                }
                PlayerWatcherComp::tryAddWatcherProgress(WatcherComp, v17->watcher_id, 1u);
              }
              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
              __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
            }
            std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v2 + 160));
          }
        }
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 96));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
  }
  std::shared_ptr<data::ServerFinishWatcherMixin>::~shared_ptr((std::shared_ptr<data::ServerFinishWatcherMixin> *const)(v2 + 32));
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A0) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1312LL, v23);
  }
};

// Line 1249: range 0000000013718E30-0000000013719057
void __cdecl AbilityFieldEntityCountChangeMixin::handleMixinInvokeEntry(
        AbilityFieldEntityCountChangeMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t v6; // edx
  const std::string *ability_data_str; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 28 meta_field_entity_count:1251";
  *(_QWORD *)(v3 + 16) = AbilityFieldEntityCountChangeMixin::handleMixinInvokeEntry;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  ability_data_str = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  proto::AbilityMixinFieldEntityCountChange::AbilityMixinFieldEntityCountChange((proto::AbilityMixinFieldEntityCountChange *const)(v3 + 32));
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 32, ability_data_str) != 1 )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      1254);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v8, (const char (*)[22])"ParseFromString fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v6 = proto::AbilityMixinFieldEntityCountChange::field_entity_count((const proto::AbilityMixinFieldEntityCountChange *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->field_entity_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->field_entity_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->field_entity_count_);
    }
    this->field_entity_count_ = v6;
  }
  proto::AbilityMixinFieldEntityCountChange::~AbilityMixinFieldEntityCountChange((proto::AbilityMixinFieldEntityCountChange *const)(v3 + 32));
  if ( v9 == (char *)v3 )
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
};

// Line 1261: range 0000000013719058-00000000137190B2
void __cdecl AbilityFieldEntityCountChangeMixin::fillRecoverInfo(
        const AbilityFieldEntityCountChangeMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->field_entity_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->field_entity_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->field_entity_count_);
  }
  proto::AbilityMixinRecoverInfo::add_data_list(info, this->field_entity_count_);
};

// Line 1266: range 00000000137190B4-000000001371965F
void __cdecl AbilityScenePropSyncMixin::handleMixinInvokeEntry(
        AbilityScenePropSyncMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  std::unordered_map<int,proto::MassivePropParam> *p_prop_map; // r14
  common::milog::MiLogStream *v7; // r14
  std::unordered_map<int,proto::MassivePropParam>::key_type __k; // [rsp+20h] [rbp-190h] BYREF
  uint32_t now; // [rsp+24h] [rbp-18Ch]
  google::protobuf::RepeatedPtrField<proto::MassivePropSyncInfo>::const_iterator __for_begin_0; // [rsp+28h] [rbp-188h] BYREF
  google::protobuf::RepeatedPtrField<proto::MassivePropSyncInfo>::const_iterator __for_end_0; // [rsp+30h] [rbp-180h] BYREF
  google::protobuf::RepeatedPtrField<proto::MassivePropParam>::const_iterator __for_begin_1; // [rsp+38h] [rbp-178h] BYREF
  google::protobuf::RepeatedPtrField<proto::MassivePropParam>::const_iterator __for_end_1; // [rsp+40h] [rbp-170h] BYREF
  google::protobuf::RepeatedField<long int>::const_iterator __for_begin; // [rsp+48h] [rbp-168h]
  const std::string *ability_data_str; // [rsp+50h] [rbp-160h]
  const google::protobuf::RepeatedField<long int> *__for_range; // [rsp+58h] [rbp-158h]
  google::protobuf::RepeatedField<long int>::const_iterator __for_end; // [rsp+60h] [rbp-150h]
  const __int64 *id; // [rsp+68h] [rbp-148h]
  const google::protobuf::RepeatedPtrField<proto::MassivePropSyncInfo> *__for_range_0; // [rsp+70h] [rbp-140h]
  const proto::MassivePropSyncInfo *massive_prop; // [rsp+78h] [rbp-138h]
  AbilityScenePropSyncMixin::MassiveProp *massive; // [rsp+80h] [rbp-130h]
  const google::protobuf::RepeatedPtrField<proto::MassivePropParam> *__for_range_1; // [rsp+88h] [rbp-128h]
  const proto::MassivePropParam *prop; // [rsp+90h] [rbp-120h]
  proto::MassivePropParam *old_param; // [rsp+98h] [rbp-118h]
  common::milog::MiLogStream v25; // [rsp+A0h] [rbp-110h] BYREF
  char v26[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 8 7 id:1286 80 72 25 meta_scene_prop_sync:1268";
  *(_QWORD *)(v3 + 16) = AbilityScenePropSyncMixin::handleMixinInvokeEntry;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  ability_data_str = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  proto::AbilityMixinScenePropSync::AbilityMixinScenePropSync((proto::AbilityMixinScenePropSync *const)(v3 + 80));
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 80, ability_data_str) != 1 )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      1271);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v25, (const char (*)[22])"ParseFromString fails");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    if ( proto::AbilityMixinScenePropSync::is_clear_all((const proto::AbilityMixinScenePropSync *const)(v3 + 80)) )
      std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::clear(&this->massive_map_);
    __for_range = proto::AbilityMixinScenePropSync::delete_id_list((const proto::AbilityMixinScenePropSync *const)(v3 + 80));
    __for_begin = google::protobuf::RepeatedField<long>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<long>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      id = __for_begin;
      std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::erase(&this->massive_map_, __for_begin++);
    }
    now = common::tools::TimeUtils::getNow();
    __for_range_0 = proto::AbilityMixinScenePropSync::massive_prop_list((const proto::AbilityMixinScenePropSync *const)(v3 + 80));
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::MassivePropSyncInfo>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::MassivePropSyncInfo>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::MassivePropSyncInfo const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      massive_prop = google::protobuf::internal::RepeatedPtrIterator<proto::MassivePropSyncInfo const>::operator*(&__for_begin_0);
      *(_QWORD *)(v3 + 48) = proto::MassivePropSyncInfo::id(massive_prop);
      massive = std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::operator[](
                  &this->massive_map_,
                  (const std::unordered_map<long int,AbilityScenePropSyncMixin::MassiveProp>::key_type *)(v3 + 48));
      __for_range_1 = proto::MassivePropSyncInfo::prop_list(massive_prop);
      __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::MassivePropParam>::begin(__for_range_1).it_;
      __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::MassivePropParam>::end(__for_range_1).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::MassivePropParam const>::operator!=(
                &__for_begin_1,
                &__for_end_1) )
      {
        prop = google::protobuf::internal::RepeatedPtrIterator<proto::MassivePropParam const>::operator*(&__for_begin_1);
        p_prop_map = &massive->prop_map;
        __k = proto::MassivePropParam::type(prop);
        old_param = std::unordered_map<int,proto::MassivePropParam>::operator[](p_prop_map, &__k);
        LODWORD(p_prop_map) = proto::MassivePropParam::sync_flag(prop);
        if ( (unsigned int)p_prop_map > proto::MassivePropParam::sync_flag(old_param) )
          proto::MassivePropParam::operator=(old_param, prop);
        if ( *(_BYTE *)(((unsigned __int64)massive >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)massive >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(massive);
        }
        massive->last_sync_time = now;
        google::protobuf::internal::RepeatedPtrIterator<proto::MassivePropParam const>::operator++(&__for_begin_1);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::MassivePropSyncInfo const>::operator++(&__for_begin_0);
    }
    if ( std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::size(&this->massive_map_) > 0x1770 )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        1300);
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v25,
             (const char (*)[29])"massive para size too large:");
      __for_end_1.it_ = (void *const *)std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::size(&this->massive_map_);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v7,
        (const unsigned __int64 *)&__for_end_1);
      common::milog::MiLogStream::~MiLogStream(&v25);
      std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::clear(&this->massive_map_);
    }
  }
  proto::AbilityMixinScenePropSync::~AbilityMixinScenePropSync((proto::AbilityMixinScenePropSync *const)(v3 + 80));
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1306: range 0000000013719660-00000000137197E5
void __cdecl AbilityScenePropSyncMixin::fillRecoverInfo(
        const AbilityScenePropSyncMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  std::unordered_map<long int,AbilityScenePropSyncMixin::MassiveProp>::const_iterator __for_begin; // [rsp+10h] [rbp-70h] BYREF
  std::unordered_map<long int,AbilityScenePropSyncMixin::MassiveProp>::const_iterator __for_end; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<int,proto::MassivePropParam>::const_iterator __for_begin_0; // [rsp+20h] [rbp-60h] BYREF
  std::unordered_map<int,proto::MassivePropParam>::const_iterator __for_end_0; // [rsp+28h] [rbp-58h] BYREF
  const std::unordered_map<long int,AbilityScenePropSyncMixin::MassiveProp> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<long int const,AbilityScenePropSyncMixin::MassiveProp> *v7; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<long int const,AbilityScenePropSyncMixin::MassiveProp> >::type *id; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<long int const,AbilityScenePropSyncMixin::MassiveProp> >::type *massive; // [rsp+48h] [rbp-38h]
  proto::MassivePropSyncInfo *sync_info; // [rsp+50h] [rbp-30h]
  const std::unordered_map<int,proto::MassivePropParam> *__for_range_0; // [rsp+58h] [rbp-28h]
  const std::pair<int const,proto::MassivePropParam> *v12; // [rsp+60h] [rbp-20h]
  std::tuple_element<0,const std::pair<int const,proto::MassivePropParam> >::type *type; // [rsp+68h] [rbp-18h]
  std::tuple_element<1,const std::pair<int const,proto::MassivePropParam> >::type *param; // [rsp+70h] [rbp-10h]
  proto::MassivePropParam *prop; // [rsp+78h] [rbp-8h]

  __for_range = &this->massive_map_;
  __for_begin._M_cur = std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::begin(&this->massive_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::end(&this->massive_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<long const,AbilityScenePropSyncMixin::MassiveProp>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<long const,AbilityScenePropSyncMixin::MassiveProp>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,long const,AbilityScenePropSyncMixin::MassiveProp>(v7);
    massive = (std::tuple_element<1,const std::pair<long int const,AbilityScenePropSyncMixin::MassiveProp> >::type *)std::get<1ul,long const,AbilityScenePropSyncMixin::MassiveProp>(v7);
    sync_info = proto::AbilityMixinRecoverInfo::add_massive_prop_list(info);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      __asan_report_load8(id);
    proto::MassivePropSyncInfo::set_id(sync_info, *id);
    __for_range_0 = &massive->prop_map;
    __for_begin_0._M_cur = std::unordered_map<int,proto::MassivePropParam>::begin(&massive->prop_map)._M_cur;
    __for_end_0._M_cur = std::unordered_map<int,proto::MassivePropParam>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<int const,proto::MassivePropParam>,false>(&__for_begin_0, &__for_end_0) )
    {
      v12 = std::__detail::_Node_const_iterator<std::pair<int const,proto::MassivePropParam>,false,false>::operator*(&__for_begin_0);
      type = std::get<0ul,int const,proto::MassivePropParam>(v12);
      param = (std::tuple_element<1,const std::pair<int const,proto::MassivePropParam> >::type *)std::get<1ul,int const,proto::MassivePropParam>(v12);
      prop = proto::MassivePropSyncInfo::add_prop_list(sync_info);
      proto::MassivePropParam::operator=(prop, param);
      std::__detail::_Node_const_iterator<std::pair<int const,proto::MassivePropParam>,false,false>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_const_iterator<std::pair<long const,AbilityScenePropSyncMixin::MassiveProp>,false,false>::operator++(&__for_begin);
  }
};

// Line 1321: range 00000000137197E6-000000001371A0C3
void __cdecl AbilityClampDamageReceivedMixin::onBeingHit(
        AbilityClampDamageReceivedMixin *const this,
        AttackResult *attack_result)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __m128i v5; // xmm0
  std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  ActorAbility *v8; // r14
  std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  ActorAbility *v10; // r14
  std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  data::DamageClampType clamp_type; // ecx
  std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  int v15; // eax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  float damage_min_value; // [rsp+10h] [rbp-100h]
  float damage_max_value; // [rsp+14h] [rbp-FCh]
  char *val; // [rsp+18h] [rbp-F8h] BYREF
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 actor_ptr:1322 64 16 15 config_ptr:1328 96 16 16 ability_ptr:1334";
  *(_QWORD *)(v2 + 16) = AbilityClampDamageReceivedMixin::onBeingHit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 32));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "onBeingHit",
      1325);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v25, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_44;
  }
  std::dynamic_pointer_cast<data::ClampDamageReceivedMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 64));
  if ( !std::operator==<data::ClampDamageReceivedMixin>(
          (const std::shared_ptr<data::ClampDamageReceivedMixin> *)(v2 + 64),
          0LL) )
  {
    BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 96));
    v5 = 0LL;
    if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 96), 0LL) )
    {
      v6 = std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v6->min_value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v6->min_value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v6->min_value);
      }
      damage_min_value = v6->min_value.fixed_value;
      v7 = std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v7->max_value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v7->max_value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v7->max_value);
      }
      damage_max_value = v7->max_value.fixed_value;
    }
    else
    {
      v8 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
      std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
      v9 = std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      *(float *)v5.m128i_i32 = ActorAbility::evaluate(v8, &v9->min_value, &p_global_value_source_ptr, &p_record_ptr);
      damage_min_value = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
      std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
      std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
      v10 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
      std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
      v11 = std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      *(float *)v5.m128i_i32 = ActorAbility::evaluate(v10, &v11->max_value, &p_global_value_source_ptr, &p_record_ptr);
      damage_max_value = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
      std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
      std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
    }
    v12 = std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v12->clamp_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v12->clamp_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v12->clamp_type);
    }
    clamp_type = v12->clamp_type;
    if ( *(_BYTE *)(((unsigned __int64)&attack_result->damage_clamp_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&attack_result->damage_clamp_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&attack_result->damage_clamp_type);
    }
    attack_result->damage_clamp_type = clamp_type;
    if ( *(_BYTE *)(((unsigned __int64)&attack_result->clamp_damage_min_value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)attack_result - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->clamp_damage_min_value >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_store4(&attack_result->clamp_damage_min_value);
    }
    attack_result->clamp_damage_min_value = damage_min_value;
    if ( *(_BYTE *)(((unsigned __int64)&attack_result->clamp_damage_max_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&attack_result->clamp_damage_max_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&attack_result->clamp_damage_max_value);
    }
    attack_result->clamp_damage_max_value = damage_max_value;
    v14 = std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v14->clamp_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v14->clamp_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v14->clamp_type);
    }
    v15 = v14->clamp_type;
    if ( v15 == 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&attack_result->need_clamp_damage >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)attack_result - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->need_clamp_damage >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_store1(&attack_result->need_clamp_damage);
      }
      attack_result->need_clamp_damage = 1;
      goto LABEL_42;
    }
    if ( v15 > 2 )
      goto LABEL_39;
    if ( !v15 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&attack_result->need_clamp_damage >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)attack_result - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->need_clamp_damage >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_store1(&attack_result->need_clamp_damage);
      }
      attack_result->need_clamp_damage = 1;
      goto LABEL_42;
    }
    if ( v15 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&attack_result->need_clamp_damage >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)attack_result - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->need_clamp_damage >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_store1(&attack_result->need_clamp_damage);
      }
      attack_result->need_clamp_damage = 1;
    }
    else
    {
LABEL_39:
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onBeingHit",
        1369);
      v16 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v25,
              (const char (*)[56])"ClampDamageReceivedMixin config clamp_type not support:");
      v17 = std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ClampDamageReceivedMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v17->clamp_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v17->clamp_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v17->clamp_type);
      }
      val = (char *)data::getDescription(v17->clamp_type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v16, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
LABEL_42:
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/ability/ability_mixin.cpp",
      "onBeingHit",
      1373);
    v18 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            &v25,
            (const char (*)[61])"[MIXIN] AbilityClampDamageReceivedMixin onBeingHit creature:");
    v19 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v18, v19);
    common::milog::MiLogStream::~MiLogStream(&v25);
    std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 96));
    goto LABEL_43;
  }
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    0x13u,
    "./src/ability/ability_mixin.cpp",
    "onBeingHit",
    1331);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v25, (const char (*)[19])"config_ptr is null");
  common::milog::MiLogStream::~MiLogStream(&v25);
LABEL_43:
  std::shared_ptr<data::ClampDamageReceivedMixin>::~shared_ptr((std::shared_ptr<data::ClampDamageReceivedMixin> *const)(v2 + 64));
LABEL_44:
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  if ( v26 == (char *)v2 )
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

// Line 1379: range 000000001371A0C4-000000001371A4BA
void __cdecl AbilityDoActionBySelfModifierElementDurabilityRatioMixin::handleMixinInvokeEntry(
        AbilityDoActionBySelfModifierElementDurabilityRatioMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  const std::string *v7; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  float v13; // xmm0_4
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 25 last_duability_ratio:1386 64 24 30 meta_last_duability_ratio:1380";
  *(_QWORD *)(v4 + 16) = AbilityDoActionBySelfModifierElementDurabilityRatioMixin::handleMixinInvokeEntry;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  proto::AbilityMixinDoActionBySelfModifierElementDurabilityRatio::AbilityMixinDoActionBySelfModifierElementDurabilityRatio((proto::AbilityMixinDoActionBySelfModifierElementDurabilityRatio *const)(v4 + 64));
  v7 = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v4 + 64, v7) != 1 )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      1383);
    common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
      &v14,
      (const char (*)[82])"AbilityDoActionBySelfModifierElementDurabilityRatioMixin parse from string failed");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    *(float *)v3.m128i_i32 = proto::AbilityMixinDoActionBySelfModifierElementDurabilityRatio::last_duability_ratio((const proto::AbilityMixinDoActionBySelfModifierElementDurabilityRatio *const)(v4 + 64));
    *(_DWORD *)(v4 + 48) = _mm_cvtsi128_si32(v3);
    if ( !std::isfinite(*(float *)(v4 + 48)) || *(float *)(v4 + 48) < 0.0 || *(float *)(v4 + 48) > 1.0 )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        1390);
      v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v14,
             (const char (*)[37])"invalid param last_duability_ratio: ");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v9, (const float *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        0x11u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        1393);
      v10 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
              &v14,
              (const char (*)[73])"DoActionBySelfModifierElementDurabilityRatioMixin last_duability_ratio_=");
      v11 = common::milog::MiLogStream::operator<<<float,(float *)0>(v10, &this->last_duability_ratio_);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" changed to ");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v12, (const float *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      if ( *(char *)(((unsigned __int64)&this->recv_invoke_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->recv_invoke_);
      this->recv_invoke_ = 1;
      v13 = *(float *)(v4 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_duability_ratio_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_duability_ratio_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(&this->last_duability_ratio_);
      }
      this->last_duability_ratio_ = v13;
    }
  }
  proto::AbilityMixinDoActionBySelfModifierElementDurabilityRatio::~AbilityMixinDoActionBySelfModifierElementDurabilityRatio((proto::AbilityMixinDoActionBySelfModifierElementDurabilityRatio *const)(v4 + 64));
  if ( v15 == (char *)v4 )
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

// Line 1399: range 000000001371A4BC-000000001371A533
void __cdecl AbilityDoActionBySelfModifierElementDurabilityRatioMixin::fillRecoverInfo(
        const AbilityDoActionBySelfModifierElementDurabilityRatioMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_duability_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_duability_ratio_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_duability_ratio_);
  }
  proto::AbilityMixinRecoverInfo::add_data_list(info, (int)(float)(10000.0 * this->last_duability_ratio_));
};

// Line 1405: range 000000001371A534-000000001371AB9A
void __cdecl AbilityFireworksLauncherMixin::handleMixinInvokeEntry(
        AbilityFireworksLauncherMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  uint32_t v31; // edx
  uint32_t v32; // ecx
  uint32_t v33; // edx
  uint32_t v34; // ecx
  uint32_t v35; // edx
  const google::protobuf::RepeatedField<unsigned int> *v36; // rax
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  unsigned int v38; // [rsp+24h] [rbp-ECh] BYREF
  unsigned int v39; // [rsp+28h] [rbp-E8h] BYREF
  unsigned int started; // [rsp+2Ch] [rbp-E4h] BYREF
  unsigned int v41; // [rsp+30h] [rbp-E0h] BYREF
  int v42; // [rsp+34h] [rbp-DCh] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-D8h] BYREF
  common::milog::MiLogStream v44; // [rsp+40h] [rbp-D0h] BYREF
  char v45[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 64 27 meta_firework_launcher:1406";
  *(_QWORD *)(v3 + 16) = AbilityFireworksLauncherMixin::handleMixinInvokeEntry;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450892) = -202116109;
  proto::AbilityMixinFireworksLauncher::AbilityMixinFireworksLauncher((proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
  v6 = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 32, v6) != 1 )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      1409);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      &v44,
      (const char (*)[55])"AbilityMixinFireworksLauncher parse from string failed");
    common::milog::MiLogStream::~MiLogStream(&v44);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      1412);
    v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v44,
           (const char (*)[58])"TestAbilityFireworksLauncherMixin::handleMixinInvokeEntry");
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" phase_=");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->phase_);
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" changed to ");
    val = proto::AbilityMixinFireworksLauncher::phase((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v11,
            (const char (*)[22])" fired_bullet_count_=");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->fired_bullet_count_);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" changed to ");
    v38 = proto::AbilityMixinFireworksLauncher::fired_bullet_count((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v38);
    v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" invoke_type_=");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->invoke_type_);
    v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" changed to ");
    v39 = proto::AbilityMixinFireworksLauncher::invoke_type((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &v39);
    v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v19,
            (const char (*)[25])" start_count_down_time_=");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->start_count_down_time_);
    v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])" changed to ");
    started = proto::AbilityMixinFireworksLauncher::start_count_down_time((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &started);
    v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])" turn_index_=");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->turn_index_);
    v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])" changed to ");
    v41 = proto::AbilityMixinFireworksLauncher::turn_index((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &v41);
    v28 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v27,
            (const char (*)[28])" fireworks_config_vec_size=");
    v43 = std::vector<unsigned int>::size(&this->fireworks_config_vec_);
    v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v28, &v43);
    v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])" invoke ");
    v42 = proto::AbilityMixinFireworksLauncher::fireworks_config_size((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v30, &v42);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v31 = proto::AbilityMixinFireworksLauncher::phase((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->phase_);
    }
    this->phase_ = v31;
    v32 = proto::AbilityMixinFireworksLauncher::fired_bullet_count((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->fired_bullet_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fired_bullet_count_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->fired_bullet_count_);
    }
    this->fired_bullet_count_ = v32;
    v33 = proto::AbilityMixinFireworksLauncher::invoke_type((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->invoke_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->invoke_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->invoke_type_);
    }
    this->invoke_type_ = v33;
    v34 = proto::AbilityMixinFireworksLauncher::start_count_down_time((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->start_count_down_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_count_down_time_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->start_count_down_time_);
    }
    this->start_count_down_time_ = v34;
    v35 = proto::AbilityMixinFireworksLauncher::turn_index((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->turn_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->turn_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->turn_index_);
    }
    this->turn_index_ = v35;
    if ( proto::AbilityMixinFireworksLauncher::fireworks_config_size((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32)) > 0 )
    {
      std::vector<unsigned int>::clear(&this->fireworks_config_vec_);
      v36 = proto::AbilityMixinFireworksLauncher::fireworks_config((const proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
      common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v36, &this->fireworks_config_vec_);
    }
  }
  proto::AbilityMixinFireworksLauncher::~AbilityMixinFireworksLauncher((proto::AbilityMixinFireworksLauncher *const)(v3 + 32));
  if ( v45 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1433: range 000000001371AB9C-000000001371B061
void __cdecl AbilityFireworksLauncherMixin::fillRecoverInfo(
        const AbilityFireworksLauncherMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  google::protobuf::uint32 v17; // edx
  unsigned int *v18; // rax
  google::protobuf::uint32 *v19; // rdx
  unsigned __int64 val; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-90h] BYREF
  char v22[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 it:1449";
  *(_QWORD *)(v2 + 16) = AbilityFireworksLauncherMixin::fillRecoverInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    0x11u,
    "./src/ability/ability_mixin.cpp",
    "fillRecoverInfo",
    1434);
  v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         &v21,
         (const char (*)[52])"TestAbilityFireworksLauncherMixin::fillRecoverInfo ");
  v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v5, (const char (*)[10])" phase_: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->phase_);
  v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v7, (const char (*)[23])" fired_bullet_count_: ");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->fired_bullet_count_);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" invoke_type_: ");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->invoke_type_);
  v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          v11,
          (const char (*)[26])" start_count_down_time_: ");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->start_count_down_time_);
  v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" turn_index_: ");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->turn_index_);
  v16 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          v15,
          (const char (*)[29])" fireworks_config_vec_size: ");
  val = std::vector<unsigned int>::size(&this->fireworks_config_vec_);
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v16, &val);
  common::milog::MiLogStream::~MiLogStream(&v21);
  if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->phase_);
  }
  proto::AbilityMixinRecoverInfo::add_data_list(info, this->phase_);
  if ( *(_BYTE *)(((unsigned __int64)&this->fired_bullet_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fired_bullet_count_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fired_bullet_count_);
  }
  proto::AbilityMixinRecoverInfo::add_data_list(info, this->fired_bullet_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->invoke_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->invoke_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->invoke_type_);
  }
  proto::AbilityMixinRecoverInfo::add_data_list(info, this->invoke_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_count_down_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_count_down_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->start_count_down_time_);
  }
  proto::AbilityMixinRecoverInfo::add_data_list(info, this->start_count_down_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turn_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->turn_index_);
  }
  proto::AbilityMixinRecoverInfo::add_data_list(info, this->turn_index_);
  v17 = std::vector<unsigned int>::size(&this->fireworks_config_vec_);
  proto::AbilityMixinRecoverInfo::add_data_list(info, v17);
  *(std::vector<unsigned int>::const_iterator *)(v2 + 32) = std::vector<unsigned int>::begin(&this->fireworks_config_vec_);
  while ( 1 )
  {
    val = (unsigned __int64)std::vector<unsigned int>::end(&this->fireworks_config_vec_)._M_current;
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&val) )
      break;
    v18 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 32));
    v19 = v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    proto::AbilityMixinRecoverInfo::add_data_list(info, *v19);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 32));
  }
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1456: range 000000001371B062-000000001371B49E
void __cdecl AbilityModifyDamageCountMixin::onHittingOther(
        AbilityModifyDamageCountMixin *const this,
        AttackResult *attack_result)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Creature *p_create_count; // rdi
  AbilityModifyDamageCountMixin *v6; // rcx
  Creature *v7; // rdi
  AbilityModifyDamageCountMixin *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream v15; // [rsp+10h] [rbp-90h] BYREF
  char v16[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 actor_ptr:1462";
  *(_QWORD *)(v2 + 16) = AbilityModifyDamageCountMixin::onHittingOther;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&attack_result->create_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)attack_result - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->create_count >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&attack_result->create_count);
  }
  if ( attack_result->create_count )
  {
    BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onHittingOther",
        1465);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"actor_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      p_create_count = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v6 = this;
      if ( *(_BYTE *)(((unsigned __int64)&attack_result->create_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)attack_result - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->create_count >> 3)
                                                                     + 0x7FFF8000) )
      {
        p_create_count = (Creature *)&attack_result->create_count;
        __asan_report_load4(&attack_result->create_count);
      }
      if ( Creature::isModifiedAttackPropertyByMixinExist(p_create_count, attack_result->create_count, (uintptr_t)v6) )
      {
        v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v8 = this;
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->create_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->create_count >> 3)
                                                                       + 0x7FFF8000) )
        {
          v7 = (Creature *)&attack_result->create_count;
          __asan_report_load4(&attack_result->create_count);
        }
        Creature::removeModifiedAttackPropertyByMixin(v7, attack_result->create_count, (uintptr_t)v8);
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/ability_mixin.cpp",
          "onHittingOther",
          1475);
        v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               &v15,
               (const char (*)[48])"AbilityModifyDamageCountMixin cur create_count:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &attack_result->create_count);
        v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" size:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->damage_count_);
        v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" no_cost_size:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->no_cost_damage_count_);
        common::milog::MiLogStream::~MiLogStream(&v15);
        AbilityModifyDamageMixin::onHittingOther(this, attack_result);
      }
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/ability/ability_mixin.cpp",
      "onHittingOther",
      1459);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"invalid create_count 0");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1481: range 000000001371B4A0-000000001371C5D3
void __cdecl AbilityModifyDamageCountMixin::handleMixinInvokeEntry(
        AbilityModifyDamageCountMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  __m128i v7; // xmm0
  std::__shared_ptr_access<data::ModifyDamageCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  ActorAbility *v9; // r14
  std::__shared_ptr_access<data::ModifyDamageCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const float *v11; // rax
  _DWORD *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const unsigned int *v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // eax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  Creature *v30; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  Creature *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  google::protobuf::uint32 create_count; // [rsp+20h] [rbp-2F0h]
  google::protobuf::uint32 create_count_0; // [rsp+24h] [rbp-2ECh]
  const std::string *ability_data_str; // [rsp+28h] [rbp-2E8h]
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+30h] [rbp-2E0h] BYREF
  common::milog::MiLogStream v49; // [rsp+40h] [rbp-2D0h] BYREF
  std::string val; // [rsp+60h] [rbp-2B0h] BYREF
  char v51[656]; // [rsp+80h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 14 max_count:1495 64 4 22 no_cost_max_count:1496 80 4 21 config_max_count:1498 96 4 22 d"
                        "ynamic_max_count:1508 112 4 24 before_damage_count:1540 128 4 32 before_no_cost_damage_count:154"
                        "1 144 4 6 i:1562 160 16 15 config_ptr:1482 192 16 16 ability_ptr:1497 224 16 14 actor_ptr:1525 2"
                        "56 64 36 meta_attack_result_create_count:1489 352 192 22 modified_property:1533";
  *(_QWORD *)(v3 + 16) = AbilityModifyDamageCountMixin::handleMixinInvokeEntry;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862730] = -218959118;
  v5[536862737] = -202116109;
  v5[536862738] = -202116109;
  std::dynamic_pointer_cast<data::ModifyDamageCountMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v3 + 160));
  if ( std::operator==<data::ModifyDamageCountMixin>(
         0LL,
         (const std::shared_ptr<data::ModifyDamageCountMixin> *)(v3 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      1485);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v49,
           (const char (*)[52])"ModifyDamageCountMixin config_ptr is null, ability:");
    BaseAbilityMixin::getAbilityName[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v49);
  }
  else
  {
    ability_data_str = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
    proto::AttackResultCreateCount::AttackResultCreateCount((proto::AttackResultCreateCount *const)(v3 + 256));
    if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 256, ability_data_str) != 1 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        1492);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[22])"ParseFromString fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
    else
    {
      *(_DWORD *)(v3 + 48) = 100;
      *(_DWORD *)(v3 + 64) = 1000;
      BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v3 + 192));
      v7 = 0LL;
      *(_DWORD *)(v3 + 80) = 0;
      if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v3 + 192), 0LL) )
      {
        v8 = std::__shared_ptr_access<data::ModifyDamageCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageCountMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&v8->max_modify_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v8->max_modify_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v8->max_modify_count);
        }
        *(float *)(v3 + 80) = v8->max_modify_count.fixed_value;
      }
      else
      {
        v9 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)(v3 + 224), 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        v10 = std::__shared_ptr_access<data::ModifyDamageCountMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyDamageCountMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        *(float *)v7.m128i_i32 = ActorAbility::evaluate(
                                   v9,
                                   &v10->max_modify_count,
                                   &p_global_value_source_ptr,
                                   (DieCreatureRecordPtr *)(v3 + 224));
        *(_DWORD *)(v3 + 80) = _mm_cvtsi128_si32(v7);
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)(v3 + 224));
      }
      *(_DWORD *)(v3 + 144) = 0;
      v11 = std::max<float>((const float *)(v3 + 144), (const float *)(v3 + 80));
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(_DWORD *)(v3 + 80) = *v12;
      *(_DWORD *)(v3 + 96) = (int)*(float *)(v3 + 80);
      if ( *(_DWORD *)(v3 + 96) > 0x64u )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "handleMixinInvokeEntry",
          1511);
        v13 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[62])"AbilityModifyDamageCountMixin dynamic_max_count is large cur:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 96));
        v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" limit:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      v16 = std::min<unsigned int>((const unsigned int *)(v3 + 96), (const unsigned int *)(v3 + 48));
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      *(_DWORD *)(v3 + 96) = *v17;
      if ( (unsigned int)proto::AttackResultCreateCount::create_count_list_size((const proto::AttackResultCreateCount *const)(v3 + 256)) > *(_DWORD *)(v3 + 96) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "handleMixinInvokeEntry",
          1517);
        v18 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[77])"AbilityModifyDamageCountMixin client size too large, create_count_list size:");
        *(_DWORD *)(v3 + 144) = proto::AttackResultCreateCount::create_count_list_size((const proto::AttackResultCreateCount *const)(v3 + 256));
        v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v3 + 144));
        v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" config:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      if ( (unsigned int)proto::AttackResultCreateCount::create_count_no_cost_list_size((const proto::AttackResultCreateCount *const)(v3 + 256)) > 0x3E8 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "handleMixinInvokeEntry",
          1522);
        v21 = common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[85])"AbilityModifyDamageCountMixin client size too large, create_count_no_cost_list size:");
        *(_DWORD *)(v3 + 144) = proto::AttackResultCreateCount::create_count_no_cost_list_size((const proto::AttackResultCreateCount *const)(v3 + 256));
        v22 = common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v3 + 144));
        v23 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v22,
                (const char (*)[20])" no_cost_max_count:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v3 + 224));
      if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v3 + 224)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "handleMixinInvokeEntry",
          1528);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[18])"actor_ptr is null");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      else
      {
        ModifiedAttackProperty::ModifiedAttackProperty((ModifiedAttackProperty *const)(v3 + 352));
        if ( AbilityModifyDamageMixin::applyModifiedProperty(this, (ModifiedAttackProperty *)(v3 + 352)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/ability/ability_mixin.cpp",
            "handleMixinInvokeEntry",
            1536);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[27])"applyModifiedProperty fail");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        }
        else
        {
          v24 = *(unsigned __int8 *)(((unsigned __int64)&this->damage_count_ >> 3) + 0x7FFF8000);
          if ( (_BYTE)v24 != 0 && (char)v24 <= 3 )
            __asan_report_load4(&this->damage_count_);
          *(_DWORD *)(v3 + 112) = this->damage_count_;
          if ( *(_BYTE *)(((unsigned __int64)&this->no_cost_damage_count_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->no_cost_damage_count_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->no_cost_damage_count_);
          }
          *(_DWORD *)(v3 + 128) = this->no_cost_damage_count_;
          for ( *(_DWORD *)(v3 + 144) = 0;
                proto::AttackResultCreateCount::create_count_list_size((const proto::AttackResultCreateCount *const)(v3 + 256)) > *(_DWORD *)(v3 + 144)
             && *(_DWORD *)(v3 + 144) < *(_DWORD *)(v3 + 96);
                ++*(_DWORD *)(v3 + 144) )
          {
            create_count = proto::AttackResultCreateCount::create_count_list(
                             (const proto::AttackResultCreateCount *const)(v3 + 256),
                             *(_DWORD *)(v3 + 144));
            if ( create_count )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->damage_count_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->damage_count_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->damage_count_);
              }
              if ( this->damage_count_ >= *(_DWORD *)(v3 + 96) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&val,
                  &common::milog::MiLogDefault::default_log_obj_,
                  0x13u,
                  "./src/ability/ability_mixin.cpp",
                  "handleMixinInvokeEntry",
                  1554);
                v27 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                        (common::milog::MiLogStream *const)&val,
                        (const char (*)[43])"damage_count >= config size, damage_count:");
                v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &this->damage_count_);
                v29 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v28,
                        (const char (*)[20])" dynamic_max_count:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v3 + 96));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                break;
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->damage_count_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->damage_count_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->damage_count_);
              }
              ++this->damage_count_;
              v30 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
              Creature::addModifiedAttackPropertyByMixin(
                v30,
                create_count,
                (uintptr_t)this,
                (const ModifiedAttackProperty *)(v3 + 352));
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                0x13u,
                "./src/ability/ability_mixin.cpp",
                "handleMixinInvokeEntry",
                1548);
              v26 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[49])"invalid create_count 0 in create_count_list at: ");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v26, (const int *)(v3 + 144));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            }
          }
          for ( *(_DWORD *)(v3 + 144) = 0;
                proto::AttackResultCreateCount::create_count_no_cost_list_size((const proto::AttackResultCreateCount *const)(v3 + 256)) > *(_DWORD *)(v3 + 144)
             && *(_DWORD *)(v3 + 144) <= 0x3E7u;
                ++*(_DWORD *)(v3 + 144) )
          {
            create_count_0 = proto::AttackResultCreateCount::create_count_no_cost_list(
                               (const proto::AttackResultCreateCount *const)(v3 + 256),
                               *(_DWORD *)(v3 + 144));
            if ( create_count_0 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->no_cost_damage_count_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->no_cost_damage_count_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->no_cost_damage_count_);
              }
              if ( this->no_cost_damage_count_ > 0x3E7 )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&val,
                  &common::milog::MiLogDefault::default_log_obj_,
                  0x13u,
                  "./src/ability/ability_mixin.cpp",
                  "handleMixinInvokeEntry",
                  1573);
                v33 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                        (common::milog::MiLogStream *const)&val,
                        (const char (*)[43])"damage_count >= config size, damage_count:");
                v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &this->damage_count_);
                v35 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v34,
                        (const char (*)[20])" no_cost_max_count:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v35,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                break;
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->no_cost_damage_count_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->no_cost_damage_count_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->no_cost_damage_count_);
              }
              ++this->no_cost_damage_count_;
              v36 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
              Creature::addModifiedAttackPropertyByMixin(
                v36,
                create_count_0,
                (uintptr_t)this,
                (const ModifiedAttackProperty *)(v3 + 352));
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                0x13u,
                "./src/ability/ability_mixin.cpp",
                "handleMixinInvokeEntry",
                1567);
              v32 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[57])"invalid create_count 0 in create_count_no_cost_list at: ");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v32, (const int *)(v3 + 144));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            }
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            0x11u,
            "./src/ability/ability_mixin.cpp",
            "handleMixinInvokeEntry",
            1580);
          v37 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[53])"AbilityModifyDamageCountMixin handleMixinInvokeEntry");
          v38 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v37, (const char (*)[9])" before:");
          v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  (const unsigned int *)(v3 + 112));
          v40 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v39, (const char (*)[8])" after:");
          v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &this->damage_count_);
          v42 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v41, (const char (*)[9])" before:");
          v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v42,
                  (const unsigned int *)(v3 + 128));
          v44 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v43, (const char (*)[8])" after:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &this->no_cost_damage_count_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        }
        ModifiedAttackProperty::~ModifiedAttackProperty((ModifiedAttackProperty *const)(v3 + 352));
      }
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 224));
      std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v3 + 192));
    }
    proto::AttackResultCreateCount::~AttackResultCreateCount((proto::AttackResultCreateCount *const)(v3 + 256));
  }
  std::shared_ptr<data::ModifyDamageCountMixin>::~shared_ptr((std::shared_ptr<data::ModifyDamageCountMixin> *const)(v3 + 160));
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 1586: range 000000001371C5D4-000000001371C62E
void __cdecl AbilityModifyDamageCountMixin::fillRecoverInfo(
        const AbilityModifyDamageCountMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->damage_count_);
  }
  proto::AbilityMixinRecoverInfo::add_data_list(info, this->damage_count_);
};

// Line 1591: range 000000001371C630-000000001371C7DA
void __cdecl AbilityModifyBeHitDamageMixin::onAdded(AbilityModifyBeHitDamageMixin *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Creature *v4; // rax
  AbilityComp *AbilityComp; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 actor_ptr:1592";
  *(_QWORD *)(v1 + 16) = AbilityModifyBeHitDamageMixin::onAdded;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v1 + 32));
  if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/ability/ability_mixin.cpp",
      "onAdded",
      1595);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v6, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v4 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    AbilityComp = Creature::getAbilityComp(v4);
    AbilityComp::addMixinRegisterFunc(AbilityComp, MIXIN_FUNC_TYPE_ON_BE_HITTING_OTHER);
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1602: range 000000001371C7DC-000000001371C986
void __cdecl AbilityModifyBeHitDamageMixin::onRemoved(AbilityModifyBeHitDamageMixin *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Creature *v4; // rax
  AbilityComp *AbilityComp; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 actor_ptr:1603";
  *(_QWORD *)(v1 + 16) = AbilityModifyBeHitDamageMixin::onRemoved;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v1 + 32));
  if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/ability/ability_mixin.cpp",
      "onRemoved",
      1606);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v6, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v4 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    AbilityComp = Creature::getAbilityComp(v4);
    AbilityComp::delMixinRegisterFunc(AbilityComp, MIXIN_FUNC_TYPE_ON_BE_HITTING_OTHER);
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1613: range 000000001371C988-000000001371F07C
void __cdecl AbilityModifyBeHitDamageMixin::onBeHittingOther(
        AbilityModifyBeHitDamageMixin *const this,
        AttackResult *attack_result)
{
  unsigned __int64 p_ability_wtr; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __m128i v6; // xmm0
  ActorAbility *v7; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  __m128i v11; // xmm0
  ActorAbility *v12; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  __m128i v16; // xmm0
  ActorAbility *v17; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  __m128i v21; // xmm0
  ActorAbility *v22; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  __m128i v26; // xmm0
  ActorAbility *v27; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  __m128i v31; // xmm0
  ActorAbility *v32; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  StatLogFilterExcelConfigMgr *p_stat_log_filter_config_mgr; // r14
  std::map<unsigned int,float>::mapped_type *v36; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  __m128i v38; // xmm0
  ActorAbility *v39; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  __m128i v43; // xmm0
  ActorAbility *v44; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  __m128i v48; // xmm0
  ActorAbility *v49; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  __m128i v53; // xmm0
  ActorAbility *v54; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  __m128i v58; // xmm0
  ActorAbility *v59; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  __m128i v63; // xmm0
  ActorAbility *v64; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  __m128i v68; // xmm0
  ActorAbility *v69; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  __m128i v73; // xmm0
  ActorAbility *v74; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v77; // rax
  __m128i v78; // xmm0
  ActorAbility *v79; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v80; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v81; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v82; // rax
  __m128i v83; // xmm0
  ActorAbility *v84; // r14
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v85; // rax
  std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v86; // rax
  float damage_percentage_ratio; // [rsp+10h] [rbp-1D0h]
  float bonus_critical; // [rsp+14h] [rbp-1CCh]
  float bonus_critical_hurt; // [rsp+18h] [rbp-1C8h]
  float defense_ignore_ratio; // [rsp+1Ch] [rbp-1C4h]
  float defense_ignore_delta; // [rsp+20h] [rbp-1C0h]
  float damage_extra; // [rsp+24h] [rbp-1BCh]
  float actor__physical_sub_hurt_delta; // [rsp+28h] [rbp-1B8h]
  float actor__fire_sub_hurt_delta; // [rsp+2Ch] [rbp-1B4h]
  float actor__grass_sub_hurt_delta; // [rsp+30h] [rbp-1B0h]
  float actor__water_sub_hurt_delta; // [rsp+34h] [rbp-1ACh]
  float actor__elec_sub_hurt_delta; // [rsp+38h] [rbp-1A8h]
  float actor__wind_sub_hurt_delta; // [rsp+3Ch] [rbp-1A4h]
  float actor__ice_sub_hurt_delta; // [rsp+40h] [rbp-1A0h]
  float actor__rock_sub_hurt_delta; // [rsp+44h] [rbp-19Ch]
  float actor__element_reaction_critical_delta; // [rsp+48h] [rbp-198h]
  float actor__element_reaction_critical_hurt_delta; // [rsp+4Ch] [rbp-194h]
  std::optional<float> v103; // [rsp+50h] [rbp-190h] BYREF
  std::optional<float> v104; // [rsp+58h] [rbp-188h] BYREF
  std::optional<float> v105; // [rsp+60h] [rbp-180h] BYREF
  std::optional<float> v106; // [rsp+68h] [rbp-178h] BYREF
  std::optional<float> v107; // [rsp+70h] [rbp-170h] BYREF
  std::optional<float> v108; // [rsp+78h] [rbp-168h] BYREF
  std::optional<float> v109; // [rsp+80h] [rbp-160h] BYREF
  std::optional<float> v110; // [rsp+88h] [rbp-158h] BYREF
  std::optional<float> v111; // [rsp+90h] [rbp-150h] BYREF
  std::optional<float> v112; // [rsp+98h] [rbp-148h] BYREF
  std::optional<float> v113; // [rsp+A0h] [rbp-140h] BYREF
  std::optional<float> v114; // [rsp+A8h] [rbp-138h] BYREF
  std::optional<float> v115; // [rsp+B0h] [rbp-130h] BYREF
  std::optional<float> v116; // [rsp+B8h] [rbp-128h] BYREF
  std::optional<float> v117; // [rsp+C0h] [rbp-120h] BYREF
  std::optional<float> v118; // [rsp+C8h] [rbp-118h] BYREF
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+D0h] [rbp-110h] BYREF
  BaseAbilityMixin p_record_ptr[2]; // [rsp+E0h] [rbp-100h] BYREF

  p_ability_wtr = (unsigned __int64)&p_record_ptr[0].ability_wtr_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      p_ability_wtr = v3;
  }
  *(_QWORD *)p_ability_wtr = 1102416563LL;
  *(_QWORD *)(p_ability_wtr + 8) = "4 48 4 16 filter_hash:1652 64 16 14 actor_ptr:1619 96 16 16 ability_ptr:1625 128 16 1"
                                   "5 config_ptr:1627";
  *(_QWORD *)(p_ability_wtr + 16) = AbilityModifyBeHitDamageMixin::onBeHittingOther;
  v4 = (_DWORD *)(p_ability_wtr >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( !AbilityModifyDamageMixin::checkConditionAndPredicates(this, attack_result, 1) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_record_ptr[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/ability_mixin.cpp",
      "onBeHittingOther",
      1616);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)&p_record_ptr[0]._M_weak_this._M_refcount,
      (const char (*)[33])"checkConditionAndPredicates fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_record_ptr[0]._M_weak_this._M_refcount);
  }
  else
  {
    BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(p_ability_wtr + 64));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(p_ability_wtr + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_record_ptr[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "onBeHittingOther",
        1622);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
        (common::milog::MiLogStream *const)&p_record_ptr[0]._M_weak_this._M_refcount,
        (const char (*)[18])"actor_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_record_ptr[0]._M_weak_this._M_refcount);
    }
    else
    {
      BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(p_ability_wtr + 96));
      std::dynamic_pointer_cast<data::ModifyBeHitDamageMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(p_ability_wtr + 128));
      if ( std::operator==<data::ModifyBeHitDamageMixin>(
             0LL,
             (const std::shared_ptr<data::ModifyBeHitDamageMixin> *)(p_ability_wtr + 128)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_record_ptr[0]._M_weak_this._M_refcount,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/ability_mixin.cpp",
          "onBeHittingOther",
          1630);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
          (common::milog::MiLogStream *const)&p_record_ptr[0]._M_weak_this._M_refcount,
          (const char (*)[19])"config_ptr is null");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_record_ptr[0]._M_weak_this._M_refcount);
      }
      else
      {
        v5 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v5->damage_percentage_ratio.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v5 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v5->damage_percentage_ratio.is_json_loaded);
        if ( v5->damage_percentage_ratio.is_json_loaded )
        {
          v6 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v8 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v6.m128i_i32 = ActorAbility::evaluate(
                                       v7,
                                       &v8->damage_percentage_ratio,
                                       &p_global_value_source_ptr,
                                       (DieCreatureRecordPtr *)p_record_ptr);
            damage_percentage_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v9 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v9->damage_percentage_ratio >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v9->damage_percentage_ratio >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v9->damage_percentage_ratio);
            }
            damage_percentage_ratio = v9->damage_percentage_ratio.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getDamagePercentageRatio(attack_result)
                                         + damage_percentage_ratio;
          std::optional<float>::optional<float,true>(&v103, (float *)(p_ability_wtr + 48));
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.damage_percentage_ratio >> 3) + 0x7FFF8000) )
            __asan_report_store8(&attack_result->modified_property.damage_percentage_ratio);
          attack_result->modified_property.damage_percentage_ratio = v103;
        }
        v10 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v10->bonus_critical.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v10 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v10->bonus_critical.is_json_loaded);
        if ( v10->bonus_critical.is_json_loaded )
        {
          v11 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v12 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v13 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v11.m128i_i32 = ActorAbility::evaluate(
                                        v12,
                                        &v13->bonus_critical,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            bonus_critical = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v14 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v14->bonus_critical >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v14->bonus_critical >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v14->bonus_critical);
            }
            bonus_critical = v14->bonus_critical.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getBonusCritical(attack_result) + bonus_critical;
          std::optional<float>::optional<float,true>(&v104, (float *)(p_ability_wtr + 48));
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.bonus_critical >> 3) + 0x7FFF8000) )
            __asan_report_store8(&attack_result->modified_property.bonus_critical);
          attack_result->modified_property.bonus_critical = v104;
        }
        v15 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v15->bonus_critical_hurt.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v15 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v15->bonus_critical_hurt.is_json_loaded);
        if ( v15->bonus_critical_hurt.is_json_loaded )
        {
          v16 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v17 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v18 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v16.m128i_i32 = ActorAbility::evaluate(
                                        v17,
                                        &v18->bonus_critical_hurt,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            bonus_critical_hurt = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v19 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v19->bonus_critical_hurt >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v19->bonus_critical_hurt >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v19->bonus_critical_hurt);
            }
            bonus_critical_hurt = v19->bonus_critical_hurt.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getBonusCriticalHurt(attack_result) + bonus_critical_hurt;
          std::optional<float>::optional<float,true>(&v105, (float *)(p_ability_wtr + 48));
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.bonus_critical_hurt >> 3) + 0x7FFF8000) )
            __asan_report_store8(&attack_result->modified_property.bonus_critical_hurt);
          attack_result->modified_property.bonus_critical_hurt = v105;
        }
        v20 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v20->defense_ignore_ratio.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v20 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v20->defense_ignore_ratio.is_json_loaded);
        if ( v20->defense_ignore_ratio.is_json_loaded )
        {
          v21 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v22 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v23 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v21.m128i_i32 = ActorAbility::evaluate(
                                        v22,
                                        &v23->defense_ignore_ratio,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            defense_ignore_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v24 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v24->defense_ignore_ratio >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v24->defense_ignore_ratio >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v24->defense_ignore_ratio);
            }
            defense_ignore_ratio = v24->defense_ignore_ratio.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getDefenseIgnoreRatio(attack_result) + defense_ignore_ratio;
          std::optional<float>::optional<float,true>(&v106, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result - 4) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.defense_ignore_ratio >> 3)
                                                                      + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.defense_ignore_ratio >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.defense_ignore_ratio._M_payload._M_engaged
                                            + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.defense_ignore_ratio._M_payload._M_engaged
                                                                                          + 3) >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.defense_ignore_ratio, 8LL);
          }
          attack_result->modified_property.defense_ignore_ratio = v106;
        }
        v25 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v25->defense_ignore_delta.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v25 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v25->defense_ignore_delta.is_json_loaded);
        if ( v25->defense_ignore_delta.is_json_loaded )
        {
          v26 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v27 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v28 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v26.m128i_i32 = ActorAbility::evaluate(
                                        v27,
                                        &v28->defense_ignore_delta,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            defense_ignore_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v29 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v29->defense_ignore_delta >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v29->defense_ignore_delta >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v29->defense_ignore_delta);
            }
            defense_ignore_delta = v29->defense_ignore_delta.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getDefenseIgnoreDelta(attack_result) + defense_ignore_delta;
          std::optional<float>::optional<float,true>(&v107, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.defense_ignore_delta >> 3)
                                                                      + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.defense_ignore_delta >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.defense_ignore_delta._M_payload._M_engaged
                                            + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.defense_ignore_delta._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.defense_ignore_delta, 8LL);
          }
          attack_result->modified_property.defense_ignore_delta = v107;
        }
        v30 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v30->damage_extra.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v30 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v30->damage_extra.is_json_loaded);
        if ( v30->damage_extra.is_json_loaded )
        {
          v31 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v32 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v33 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v31.m128i_i32 = ActorAbility::evaluate(
                                        v32,
                                        &v33->damage_extra,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            damage_extra = COERCE_FLOAT(_mm_cvtsi128_si32(v31));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v34 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v34->damage_extra >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v34->damage_extra >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v34->damage_extra);
            }
            damage_extra = v34->damage_extra.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getDamageExtra(attack_result) + damage_extra;
          std::optional<float>::optional<float,true>(&v108, (float *)(p_ability_wtr + 48));
          if ( *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.damage_extra >> 3) + 0x7FFF8000) )
            __asan_report_store8(&attack_result->modified_property.damage_extra);
          attack_result->modified_property.damage_extra = v108;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&p_global_value_source_ptr);
          p_stat_log_filter_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_global_value_source_ptr)->design_config.txt_config_mgr.stat_log_filter_config_mgr;
          BaseAbilityMixin::getAbilityFilterIndex(p_record_ptr);
          *(_DWORD *)(p_ability_wtr + 48) = StatLogFilterExcelConfigMgr::getFilterHashByAbilityFilterIndex(
                                              p_stat_log_filter_config_mgr,
                                              (const data::AbilityFilterIndex *)p_record_ptr);
          data::AbilityFilterIndex::~AbilityFilterIndex((data::AbilityFilterIndex *const)p_record_ptr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_global_value_source_ptr);
          if ( *(_DWORD *)(p_ability_wtr + 48) )
          {
            v36 = std::map<unsigned int,float>::operator[](
                    &attack_result->modified_property.stat_log_damage_extra_map,
                    (const std::map<unsigned int,float>::key_type *)(p_ability_wtr + 48));
            if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v36);
            }
            *v36 = *v36 + damage_extra;
          }
        }
        v37 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v37->actor__physical_sub_hurt_delta.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v37 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v37->actor__physical_sub_hurt_delta.is_json_loaded);
        if ( v37->actor__physical_sub_hurt_delta.is_json_loaded )
        {
          v38 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v39 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v40 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v38.m128i_i32 = ActorAbility::evaluate(
                                        v39,
                                        &v40->actor__physical_sub_hurt_delta,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            actor__physical_sub_hurt_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v38));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v41 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v41->actor__physical_sub_hurt_delta >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v41->actor__physical_sub_hurt_delta >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v41->actor__physical_sub_hurt_delta);
            }
            actor__physical_sub_hurt_delta = v41->actor__physical_sub_hurt_delta.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getPhysicalSubHurt(attack_result)
                                         + actor__physical_sub_hurt_delta;
          std::optional<float>::optional<float,true>(&v109, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.physical_sub_hurt >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.physical_sub_hurt >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.physical_sub_hurt._M_payload._M_engaged
                                            + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.physical_sub_hurt._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.physical_sub_hurt, 8LL);
          }
          attack_result->modified_property.physical_sub_hurt = v109;
        }
        v42 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v42->actor__fire_sub_hurt_delta.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v42 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v42->actor__fire_sub_hurt_delta.is_json_loaded);
        if ( v42->actor__fire_sub_hurt_delta.is_json_loaded )
        {
          v43 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v44 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v45 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v43.m128i_i32 = ActorAbility::evaluate(
                                        v44,
                                        &v45->actor__fire_sub_hurt_delta,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            actor__fire_sub_hurt_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v43));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v46 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v46->actor__fire_sub_hurt_delta >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v46->actor__fire_sub_hurt_delta >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v46->actor__fire_sub_hurt_delta);
            }
            actor__fire_sub_hurt_delta = v46->actor__fire_sub_hurt_delta.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getFireSubHurt(attack_result) + actor__fire_sub_hurt_delta;
          std::optional<float>::optional<float,true>(&v110, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.fire_sub_hurt >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.fire_sub_hurt >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.fire_sub_hurt._M_payload._M_engaged + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.fire_sub_hurt._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.fire_sub_hurt, 8LL);
          }
          attack_result->modified_property.fire_sub_hurt = v110;
        }
        v47 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v47->actor__grass_sub_hurt_delta.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v47 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v47->actor__grass_sub_hurt_delta.is_json_loaded);
        if ( v47->actor__grass_sub_hurt_delta.is_json_loaded )
        {
          v48 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v49 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v50 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v48.m128i_i32 = ActorAbility::evaluate(
                                        v49,
                                        &v50->actor__grass_sub_hurt_delta,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            actor__grass_sub_hurt_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v48));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v51 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v51->actor__grass_sub_hurt_delta >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v51->actor__grass_sub_hurt_delta >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v51->actor__grass_sub_hurt_delta);
            }
            actor__grass_sub_hurt_delta = v51->actor__grass_sub_hurt_delta.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getGrassSubHurt(attack_result) + actor__grass_sub_hurt_delta;
          std::optional<float>::optional<float,true>(&v111, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.grass_sub_hurt >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.grass_sub_hurt >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.grass_sub_hurt._M_payload._M_engaged + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.grass_sub_hurt._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.grass_sub_hurt, 8LL);
          }
          attack_result->modified_property.grass_sub_hurt = v111;
        }
        v52 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v52->actor__water_sub_hurt_delta.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v52 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v52->actor__water_sub_hurt_delta.is_json_loaded);
        if ( v52->actor__water_sub_hurt_delta.is_json_loaded )
        {
          v53 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v54 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v55 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v53.m128i_i32 = ActorAbility::evaluate(
                                        v54,
                                        &v55->actor__water_sub_hurt_delta,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            actor__water_sub_hurt_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v53));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v56 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v56->actor__water_sub_hurt_delta >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v56->actor__water_sub_hurt_delta >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v56->actor__water_sub_hurt_delta);
            }
            actor__water_sub_hurt_delta = v56->actor__water_sub_hurt_delta.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getWaterSubHurt(attack_result) + actor__water_sub_hurt_delta;
          std::optional<float>::optional<float,true>(&v112, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.water_sub_hurt >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.water_sub_hurt >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.water_sub_hurt._M_payload._M_engaged + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.water_sub_hurt._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.water_sub_hurt, 8LL);
          }
          attack_result->modified_property.water_sub_hurt = v112;
        }
        v57 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v57->actor__elec_sub_hurt_delta.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v57 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v57->actor__elec_sub_hurt_delta.is_json_loaded);
        if ( v57->actor__elec_sub_hurt_delta.is_json_loaded )
        {
          v58 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v59 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v60 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v58.m128i_i32 = ActorAbility::evaluate(
                                        v59,
                                        &v60->actor__elec_sub_hurt_delta,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            actor__elec_sub_hurt_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v58));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v61 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v61->actor__elec_sub_hurt_delta >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v61->actor__elec_sub_hurt_delta >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v61->actor__elec_sub_hurt_delta);
            }
            actor__elec_sub_hurt_delta = v61->actor__elec_sub_hurt_delta.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getElecSubHurt(attack_result) + actor__elec_sub_hurt_delta;
          std::optional<float>::optional<float,true>(&v113, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.elec_sub_hurt >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.elec_sub_hurt >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.elec_sub_hurt._M_payload._M_engaged + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 51) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.elec_sub_hurt._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.elec_sub_hurt, 8LL);
          }
          attack_result->modified_property.elec_sub_hurt = v113;
        }
        v62 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v62->actor__wind_sub_hurt_delta.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v62 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v62->actor__wind_sub_hurt_delta.is_json_loaded);
        if ( v62->actor__wind_sub_hurt_delta.is_json_loaded )
        {
          v63 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v64 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v65 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v63.m128i_i32 = ActorAbility::evaluate(
                                        v64,
                                        &v65->actor__wind_sub_hurt_delta,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            actor__wind_sub_hurt_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v63));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v66 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v66->actor__wind_sub_hurt_delta >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v66->actor__wind_sub_hurt_delta >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v66->actor__wind_sub_hurt_delta);
            }
            actor__wind_sub_hurt_delta = v66->actor__wind_sub_hurt_delta.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getWindSubHurt(attack_result) + actor__wind_sub_hurt_delta;
          std::optional<float>::optional<float,true>(&v114, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.wind_sub_hurt >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.wind_sub_hurt >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.wind_sub_hurt._M_payload._M_engaged + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 59) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.wind_sub_hurt._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.wind_sub_hurt, 8LL);
          }
          attack_result->modified_property.wind_sub_hurt = v114;
        }
        v67 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v67->actor__ice_sub_hurt_delta.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v67 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v67->actor__ice_sub_hurt_delta.is_json_loaded);
        if ( v67->actor__ice_sub_hurt_delta.is_json_loaded )
        {
          v68 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v69 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v70 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v68.m128i_i32 = ActorAbility::evaluate(
                                        v69,
                                        &v70->actor__ice_sub_hurt_delta,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            actor__ice_sub_hurt_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v68));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v71 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v71->actor__ice_sub_hurt_delta >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v71->actor__ice_sub_hurt_delta >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v71->actor__ice_sub_hurt_delta);
            }
            actor__ice_sub_hurt_delta = v71->actor__ice_sub_hurt_delta.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getIceSubHurt(attack_result) + actor__ice_sub_hurt_delta;
          std::optional<float>::optional<float,true>(&v115, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.ice_sub_hurt >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.ice_sub_hurt >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.ice_sub_hurt._M_payload._M_engaged + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 67) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.ice_sub_hurt._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.ice_sub_hurt, 8LL);
          }
          attack_result->modified_property.ice_sub_hurt = v115;
        }
        v72 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v72->actor__rock_sub_hurt_delta.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v72 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v72->actor__rock_sub_hurt_delta.is_json_loaded);
        if ( v72->actor__rock_sub_hurt_delta.is_json_loaded )
        {
          v73 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v74 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v75 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v73.m128i_i32 = ActorAbility::evaluate(
                                        v74,
                                        &v75->actor__rock_sub_hurt_delta,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            actor__rock_sub_hurt_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v73));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v76 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v76->actor__rock_sub_hurt_delta >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v76->actor__rock_sub_hurt_delta >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v76->actor__rock_sub_hurt_delta);
            }
            actor__rock_sub_hurt_delta = v76->actor__rock_sub_hurt_delta.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getRockSubHurt(attack_result) + actor__rock_sub_hurt_delta;
          std::optional<float>::optional<float,true>(&v116, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.rock_sub_hurt >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.rock_sub_hurt >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.rock_sub_hurt._M_payload._M_engaged + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.rock_sub_hurt._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.rock_sub_hurt, 8LL);
          }
          attack_result->modified_property.rock_sub_hurt = v116;
        }
        v77 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v77->actor__element_reaction_critical_delta.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          v77 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v77->actor__element_reaction_critical_delta.is_json_loaded);
        if ( v77->actor__element_reaction_critical_delta.is_json_loaded )
        {
          v78 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v79 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v80 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v78.m128i_i32 = ActorAbility::evaluate(
                                        v79,
                                        &v80->actor__element_reaction_critical_delta,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            actor__element_reaction_critical_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v78));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v81 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v81->actor__element_reaction_critical_delta >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v81->actor__element_reaction_critical_delta >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v81->actor__element_reaction_critical_delta);
            }
            actor__element_reaction_critical_delta = v81->actor__element_reaction_critical_delta.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getBonusElementReactionCritical(attack_result)
                                         + actor__element_reaction_critical_delta;
          std::optional<float>::optional<float,true>(&v117, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.bonus_element_reaction_critical >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.bonus_element_reaction_critical >> 3)
                        + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.bonus_element_reaction_critical._M_payload._M_engaged
                                            + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 83) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.bonus_element_reaction_critical._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.bonus_element_reaction_critical, 8LL);
          }
          attack_result->modified_property.bonus_element_reaction_critical = v117;
        }
        v82 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
        if ( *(char *)(((unsigned __int64)&v82->actor__element_reaction_critical_hurt_delta.is_json_loaded >> 3)
                     + 0x7FFF8000) < 0 )
          v82 = (std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v82->actor__element_reaction_critical_hurt_delta.is_json_loaded);
        if ( v82->actor__element_reaction_critical_hurt_delta.is_json_loaded )
        {
          v83 = 0LL;
          if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(p_ability_wtr + 96)) )
          {
            v84 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 96));
            std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v85 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            *(float *)v83.m128i_i32 = ActorAbility::evaluate(
                                        v84,
                                        &v85->actor__element_reaction_critical_hurt_delta,
                                        &p_global_value_source_ptr,
                                        (DieCreatureRecordPtr *)p_record_ptr);
            actor__element_reaction_critical_hurt_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v83));
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)p_record_ptr);
          }
          else
          {
            v86 = std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifyBeHitDamageMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v86->actor__element_reaction_critical_hurt_delta >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v86->actor__element_reaction_critical_hurt_delta >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v86->actor__element_reaction_critical_hurt_delta);
            }
            actor__element_reaction_critical_hurt_delta = v86->actor__element_reaction_critical_hurt_delta.fixed_value;
          }
          *(float *)(p_ability_wtr + 48) = AttackResult::getBonusElementReactionCriticalHurt(attack_result)
                                         + actor__element_reaction_critical_hurt_delta;
          std::optional<float>::optional<float,true>(&v118, (float *)(p_ability_wtr + 48));
          if ( (((unsigned __int8)attack_result + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.bonus_element_reaction_critical_hurt >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&attack_result->modified_property.bonus_element_reaction_critical_hurt >> 3)
                        + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.bonus_element_reaction_critical_hurt._M_payload._M_engaged
                                            + 3) >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)attack_result + 91) & 7) >= *(_BYTE *)(((unsigned __int64)(&attack_result->modified_property.bonus_element_reaction_critical_hurt._M_payload._M_engaged
                                                                                           + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&attack_result->modified_property.bonus_element_reaction_critical_hurt, 8LL);
          }
          attack_result->modified_property.bonus_element_reaction_critical_hurt = v118;
        }
      }
      std::shared_ptr<data::ModifyBeHitDamageMixin>::~shared_ptr((std::shared_ptr<data::ModifyBeHitDamageMixin> *const)(p_ability_wtr + 128));
      std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(p_ability_wtr + 96));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(p_ability_wtr + 64));
  }
  if ( &p_record_ptr[0].ability_wtr_ == (ActorAbilityWtr *)p_ability_wtr )
  {
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((p_ability_wtr >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)p_ability_wtr = 1172321806LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_ability_wtr >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1674: range 000000001371F07E-000000001371F279
void __cdecl BaseAbilityAfterBeingHitMixin::onAdded(BaseAbilityAfterBeingHitMixin *const this)
{
  unsigned __int64 p_ability_wtr; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Creature *v4; // rax
  AbilityComp *AbilityComp; // r14
  BaseAbilityMixin t; // [rsp+10h] [rbp-A0h] BYREF

  p_ability_wtr = (unsigned __int64)&t.ability_wtr_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      p_ability_wtr = v2;
  }
  *(_QWORD *)p_ability_wtr = 1102416563LL;
  *(_QWORD *)(p_ability_wtr + 8) = "1 32 16 14 actor_ptr:1675";
  *(_QWORD *)(p_ability_wtr + 16) = BaseAbilityAfterBeingHitMixin::onAdded;
  v3 = p_ability_wtr >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(p_ability_wtr + 32));
  if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(p_ability_wtr + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&t._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/ability/ability_mixin.cpp",
      "onAdded",
      1678);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&t._M_weak_this._M_refcount,
      (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&t._M_weak_this._M_refcount);
  }
  else
  {
    v4 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_ability_wtr + 32));
    AbilityComp = Creature::getAbilityComp(v4);
    toThisPtr<BaseAbilityMixin>(&t);
    AbilityComp::addAfterBeingHitMixin(AbilityComp, (uintptr_t)this, (BaseAbilityMixinPtr *)&t);
    std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)&t);
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(p_ability_wtr + 32));
  if ( &t.ability_wtr_ == (ActorAbilityWtr *)p_ability_wtr )
  {
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_ability_wtr = 1172321806LL;
    *(_QWORD *)((p_ability_wtr >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1685: range 000000001371F27A-000000001371F42C
void __cdecl BaseAbilityAfterBeingHitMixin::onRemoved(BaseAbilityAfterBeingHitMixin *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Creature *v4; // rax
  AbilityComp *AbilityComp; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 actor_ptr:1686";
  *(_QWORD *)(v1 + 16) = BaseAbilityAfterBeingHitMixin::onRemoved;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v1 + 32));
  if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/ability/ability_mixin.cpp",
      "onRemoved",
      1689);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v6, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v4 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    AbilityComp = Creature::getAbilityComp(v4);
    AbilityComp::delAfterBeingHitMixin(AbilityComp, (uintptr_t)this);
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1696: range 000000001371F42E-000000001371F45D
void __cdecl AbilityDamageStatisticsMixin::onAdded(AbilityDamageStatisticsMixin *const this)
{
  BaseAbilityAfterBeingHitMixin::onAdded(this);
  std::vector<float>::resize(&this->elememt_type_final_damage_vec_, 0xEuLL);
};

// Line 1702: range 000000001371F45E-000000001371F57A
void __cdecl AbilityDamageStatisticsMixin::onAfterBeingHit(
        AbilityDamageStatisticsMixin *const this,
        AttackResult *attack_result)
{
  std::vector<float>::reference v2; // rax
  float v3; // xmm1_4
  uint32_t idx; // [rsp+1Ch] [rbp-14h]

  if ( *(_BYTE *)(((unsigned __int64)&attack_result->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)attack_result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->element_type >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&attack_result->element_type);
  }
  idx = attack_result->element_type;
  if ( idx < std::vector<float>::size(&this->elememt_type_final_damage_vec_) )
  {
    v2 = std::vector<float>::operator[](&this->elememt_type_final_damage_vec_, idx);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    v3 = *v2;
    if ( *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->server_damage >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&attack_result->server_damage);
    }
    *v2 = attack_result->server_damage + v3;
  }
};

// Line 1711: range 000000001371F57C-000000001371F64B
void __cdecl AbilityDamageStatisticsMixin::fillRecoverInfo(
        const AbilityDamageStatisticsMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  float *v2; // rax
  float *v3; // rdx
  std::vector<float>::const_iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::vector<float>::const_iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::vector<float> *__for_range; // [rsp+28h] [rbp-8h]

  __for_range = &this->elememt_type_final_damage_vec_;
  *(std::vector<float>::const_iterator *)&__for_begin._M_current = (std::vector<float>::const_iterator)std::vector<float>::begin(&this->elememt_type_final_damage_vec_)._M_current;
  *(std::vector<float>::const_iterator *)&__for_end._M_current = (std::vector<float>::const_iterator)std::vector<float>::end(&this->elememt_type_final_damage_vec_)._M_current;
  while ( __gnu_cxx::operator!=<float const*,std::vector<float>>(&__for_begin, &__for_end) )
  {
    v2 = (float *)__gnu_cxx::__normal_iterator<float const*,std::vector<float>>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::AbilityMixinRecoverInfo::add_data_list(info, (int)*v3);
    __gnu_cxx::__normal_iterator<float const*,std::vector<float>>::operator++(&__for_begin);
  }
};

// Line 1719: range 000000001371F64C-000000001371FBA7
void __cdecl AbilityUGCTimeControlMixin::handleMixinInvokeEntry(
        AbilityUGCTimeControlMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  Scene *v7; // rax
  __int64 SceneTimeMs; // rax
  std::string *v9; // rax
  Scene *v10; // rax
  unsigned int *v11; // rax
  unsigned int *v12; // rdx
  GameserverService *v13; // rax
  PlayerSendPacketController *p_player_send_packet_controller; // r14
  unsigned int val; // [rsp+20h] [rbp-220h] BYREF
  unsigned int uid; // [rsp+24h] [rbp-21Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-218h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-210h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-208h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-200h] BYREF
  proto::AbilityInvokeEntry p_invoke; // [rsp+60h] [rbp-1E0h] BYREF
  char v23[400]; // [rsp+B0h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 16 14 scene_ptr:1720 80 40 18 ability_proto:1729 160 48 12 uid_set:1732 240 72 14 gen_entry:1727";
  *(_QWORD *)(v3 + 16) = AbilityUGCTimeControlMixin::handleMixinInvokeEntry;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  Player::getSceneComp(from_player);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 48));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      1723);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v21,
           (const char (*)[29])"player is not on scene, uid:");
    val = Player::getUid(from_player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    SceneTimeMs = Scene::getSceneTimeMs(v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_move_time_ms_ >> 3) + 0x7FFF8000) )
      SceneTimeMs = __asan_report_store8(&this->start_move_time_ms_);
    this->start_move_time_ms_ = SceneTimeMs;
    proto::AbilityInvokeEntry::AbilityInvokeEntry((proto::AbilityInvokeEntry *const)(v3 + 240), entry);
    proto::AbilityInvokeEntry::set_forward_type((proto::AbilityInvokeEntry *const)(v3 + 240), FORWARD_TO_ALL);
    proto::AbilityMixinUGCTimeControl::AbilityMixinUGCTimeControl((proto::AbilityMixinUGCTimeControl *const)(v3 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->start_move_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->start_move_time_ms_);
    proto::AbilityMixinUGCTimeControl::set_start_move_time_ms(
      (proto::AbilityMixinUGCTimeControl *const)(v3 + 80),
      this->start_move_time_ms_);
    v9 = proto::AbilityInvokeEntry::mutable_ability_data[abi:cxx11]((proto::AbilityInvokeEntry *const)(v3 + 240));
    google::protobuf::MessageLite::SerializeToString((const google::protobuf::MessageLite *const)(v3 + 80), v9);
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 160));
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    Scene::getPlayerUidSet(v10, (std::set<unsigned int> *)(v3 + 160));
    __for_range = (std::set<unsigned int> *)(v3 + 160);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 160))._M_node;
    __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 160))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      uid = *v12;
      v13 = ServiceBox::findService<GameserverService>();
      p_player_send_packet_controller = &GameserverService::getGameThreadLocal(v13)->player_send_packet_controller;
      proto::AbilityInvokeEntry::AbilityInvokeEntry(&p_invoke, (const proto::AbilityInvokeEntry *)(v3 + 240));
      PlayerSendPacketController::addAbilityInvoke(p_player_send_packet_controller, uid, &p_invoke);
      proto::AbilityInvokeEntry::~AbilityInvokeEntry(&p_invoke);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 160));
    proto::AbilityMixinUGCTimeControl::~AbilityMixinUGCTimeControl((proto::AbilityMixinUGCTimeControl *const)(v3 + 80));
    proto::AbilityInvokeEntry::~AbilityInvokeEntry((proto::AbilityInvokeEntry *const)(v3 + 240));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 48));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 1741: range 000000001371FBA8-000000001371FC6D
void __cdecl AbilityUGCTimeControlMixin::fillRecoverInfo(
        const AbilityUGCTimeControlMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  uint64_t now_ms; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->start_move_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_move_time_ms_);
  proto::AbilityMixinRecoverInfo::add_data_list(info, HIDWORD(this->start_move_time_ms_));
  if ( *(_BYTE *)(((unsigned __int64)&this->start_move_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_move_time_ms_);
  proto::AbilityMixinRecoverInfo::add_data_list(info, this->start_move_time_ms_);
  now_ms = common::tools::TimeUtils::getNowMs();
  proto::AbilityMixinRecoverInfo::add_data_list(info, HIDWORD(now_ms));
  proto::AbilityMixinRecoverInfo::add_data_list(info, now_ms);
};

// Line 1750: range 000000001371FC6E-000000001371FE95
void __cdecl AbilityAvatarCombatMixin::handleMixinInvokeEntry(
        AbilityAvatarCombatMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool is_enter_combat; // dl
  const std::string *ability_data_str; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 32 ability_mixin_avatar_combat:1752";
  *(_QWORD *)(v3 + 16) = AbilityAvatarCombatMixin::handleMixinInvokeEntry;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  ability_data_str = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  proto::AbilityMixinAvatarCombat::AbilityMixinAvatarCombat((proto::AbilityMixinAvatarCombat *const)(v3 + 32));
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 32, ability_data_str) != 1 )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      1755);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v8, (const char (*)[22])"ParseFromString fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    is_enter_combat = proto::AbilityMixinAvatarCombat::is_enter_combat((const proto::AbilityMixinAvatarCombat *const)(v3 + 32));
    if ( *(char *)(((unsigned __int64)&this->is_enter_combat_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_enter_combat_);
    this->is_enter_combat_ = is_enter_combat;
  }
  proto::AbilityMixinAvatarCombat::~AbilityMixinAvatarCombat((proto::AbilityMixinAvatarCombat *const)(v3 + 32));
  if ( v9 == (char *)v3 )
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
};

// Line 1762: range 000000001371FE96-000000001371FEF4
void __cdecl AbilityAvatarCombatMixin::fillRecoverInfo(
        const AbilityAvatarCombatMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  if ( *(char *)(((unsigned __int64)&this->is_enter_combat_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enter_combat_);
  proto::AbilityMixinRecoverInfo::add_data_list(info, this->is_enter_combat_);
};

// Line 1767: range 000000001371FEF6-00000000137203C6
void __cdecl AbilityDeathZoneRegionalPlayMixin::onAdded(AbilityDeathZoneRegionalPlayMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 14 actor_ptr:1768 64 16 15 player_ptr:1774 96 16 24 death_zone_play_ptr:1780";
  *(_QWORD *)(v1 + 16) = AbilityDeathZoneRegionalPlayMixin::onAdded;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v1 + 32));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/ability/ability_mixin.cpp",
      "onAdded",
      1771);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    v5 = *(_QWORD *)v4 + 152LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)v4 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v5)(v1 + 64, v4);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/ability/ability_mixin.cpp",
        "onAdded",
        1777);
      v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v13,
             (const char (*)[30])"player_ptr is null, creature:");
      v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v6, v7);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      Player::getRegionalPlayComp(v8);
      PlayerRegionalPlayComp::findRegionalPlay<DeathZoneRegionalPlay>((PlayerRegionalPlayComp *const)(v1 + 96));
      if ( std::operator==<DeathZoneRegionalPlay>((const std::shared_ptr<DeathZoneRegionalPlay> *)(v1 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/ability_mixin.cpp",
          "onAdded",
          1783);
        v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v13,
               (const char (*)[38])"find DeathZoneRegionalPlay fail, uid:");
      }
      else
      {
        v11 = std::__shared_ptr_access<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        DeathZoneRegionalPlay::setStopAddExtraErosion(v11, 1);
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/ability_mixin.cpp",
          "onAdded",
          1787);
        v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v13,
               (const char (*)[41])"DeathZoneRegionalPlayMixin onAdded, uid:");
      }
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      val = Player::getUid(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v13);
      std::shared_ptr<DeathZoneRegionalPlay>::~shared_ptr((std::shared_ptr<DeathZoneRegionalPlay> *const)(v1 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v14 == (char *)v1 )
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

// Line 1791: range 00000000137203C8-0000000013720898
void __cdecl AbilityDeathZoneRegionalPlayMixin::onRemoved(AbilityDeathZoneRegionalPlayMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 14 actor_ptr:1792 64 16 15 player_ptr:1798 96 16 24 death_zone_play_ptr:1804";
  *(_QWORD *)(v1 + 16) = AbilityDeathZoneRegionalPlayMixin::onRemoved;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v1 + 32));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/ability/ability_mixin.cpp",
      "onRemoved",
      1795);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"actor_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    v5 = *(_QWORD *)v4 + 152LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)v4 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v5)(v1 + 64, v4);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/ability/ability_mixin.cpp",
        "onRemoved",
        1801);
      v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v13,
             (const char (*)[30])"player_ptr is null, creature:");
      v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v6, v7);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      Player::getRegionalPlayComp(v8);
      PlayerRegionalPlayComp::findRegionalPlay<DeathZoneRegionalPlay>((PlayerRegionalPlayComp *const)(v1 + 96));
      if ( std::operator==<DeathZoneRegionalPlay>((const std::shared_ptr<DeathZoneRegionalPlay> *)(v1 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/ability_mixin.cpp",
          "onRemoved",
          1807);
        v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v13,
               (const char (*)[38])"find DeathZoneRegionalPlay fail, uid:");
      }
      else
      {
        v11 = std::__shared_ptr_access<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        DeathZoneRegionalPlay::setStopAddExtraErosion(v11, 0);
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/ability_mixin.cpp",
          "onRemoved",
          1811);
        v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v13,
               (const char (*)[41])"DeathZoneRegionalPlayMixin onAdded, uid:");
      }
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      val = Player::getUid(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v13);
      std::shared_ptr<DeathZoneRegionalPlay>::~shared_ptr((std::shared_ptr<DeathZoneRegionalPlay> *const)(v1 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v14 == (char *)v1 )
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

// Line 1815: range 000000001372089A-0000000013720B81
void __cdecl AbilityEraseBrickActivityMixin::handleMixinInvokeEntry(
        AbilityEraseBrickActivityMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  common::milog::MiLogStream *v7; // r14
  const google::protobuf::RepeatedField<unsigned int> *v8; // rax
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  int val; // [rsp+24h] [rbp-DCh] BYREF
  const std::string *ability_data_str; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 39 ability_mixin_erase_brick_activity:1817";
  *(_QWORD *)(v3 + 16) = AbilityEraseBrickActivityMixin::handleMixinInvokeEntry;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  ability_data_str = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
  proto::AbilityMixinEraseBrickActivity::AbilityMixinEraseBrickActivity((proto::AbilityMixinEraseBrickActivity *const)(v3 + 48));
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 48, ability_data_str) != 1 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      1820);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v12, (const char (*)[22])"ParseFromString fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    v6 = proto::AbilityMixinEraseBrickActivity::data((const proto::AbilityMixinEraseBrickActivity *const)(v3 + 48));
    if ( google::protobuf::RepeatedField<unsigned int>::size(v6) <= 200 )
    {
      std::vector<unsigned int>::clear(&this->data_);
      v9 = proto::AbilityMixinEraseBrickActivity::data((const proto::AbilityMixinEraseBrickActivity *const)(v3 + 48));
      common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v9, &this->data_);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        1826);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v12,
             (const char (*)[39])"[ERASE_BRICK] data size exceed limit: ");
      v8 = proto::AbilityMixinEraseBrickActivity::data((const proto::AbilityMixinEraseBrickActivity *const)(v3 + 48));
      val = google::protobuf::RepeatedField<unsigned int>::size(v8);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
  }
  proto::AbilityMixinEraseBrickActivity::~AbilityMixinEraseBrickActivity((proto::AbilityMixinEraseBrickActivity *const)(v3 + 48));
  if ( v13 == (char *)v3 )
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

// Line 1835: range 0000000013720B82-0000000013720C40
void __cdecl AbilityEraseBrickActivityMixin::fillRecoverInfo(
        const AbilityEraseBrickActivityMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  const unsigned int *v2; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-10h]
  const unsigned int *elem; // [rsp+28h] [rbp-8h]

  __for_range = &this->data_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->data_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->data_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v2 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    elem = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::AbilityMixinRecoverInfo::add_data_list(info, *elem);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
};

// Line 1844: range 00000000137210E2-0000000013723D14
void __cdecl AbilityBreakoutMixin::handleMixinInvokeEntry(
        AbilityBreakoutMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Scene *v13; // rax
  uint32_t GalleryComp; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const std::string *v18; // rax
  Scene *v19; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v20; // rax
  _DWORD *v21; // rdx
  std::unordered_map<unsigned int,bool>::mapped_type *v22; // rax
  _BYTE *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  std::unordered_map<unsigned int,bool>::mapped_type *v25; // rax
  _BYTE *v26; // rdx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false>::__node_type *M_cur; // r14
  std::unordered_map<unsigned int,bool>::iterator v28; // rax
  AbilityBreakoutMixin::handleMixinInvokeEntry::<lambda(const value_type&)> v29; // dl
  Scene *v30; // r14
  const google::protobuf::RepeatedPtrField<proto::BreakoutSyncConnectUidInfo> *v31; // rax
  int v32; // eax
  __int64 NowMs; // rax
  uint64_t GameTimeMs; // rax
  uint64_t v35; // rax
  int v36; // eax
  Scene *v37; // rax
  SceneGalleryComp *v38; // rax
  uint64_t v39; // rax
  uint32_t v40; // edx
  uint32_t v41; // ecx
  uint32_t v42; // edx
  uint32_t v43; // ecx
  uint32_t v44; // edx
  uint32_t v45; // edx
  int32_t v46; // edx
  const google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject> *v47; // rax
  int v48; // eax
  const google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter> *v49; // rax
  int v50; // eax
  const google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter> *v51; // rax
  int v52; // eax
  const google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject> *v53; // rax
  int v54; // eax
  const google::protobuf::RepeatedField<unsigned int> *v55; // rax
  int v56; // eax
  const google::protobuf::RepeatedField<unsigned int> *v57; // rax
  uint32_t wave_index; // r14d
  uint32_t v59; // edx
  proto::BreakoutPhysicalObject *v60; // rax
  google::protobuf::uint32 v61; // r14d
  proto::BreakoutPhysicalObject *v62; // rax
  std::unordered_map<unsigned int,proto::BreakoutPhysicalObject>::mapped_type *v63; // rax
  AbilityBreakoutMixin::BreakoutSnapShot *p_snap_shot; // rax
  uint64_t v66; // rax
  uint64_t v67; // rax
  uint64_t v68; // rcx
  unsigned __int64 v69; // rax
  std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rdx
  uint32_t *p_max_client_server_delta_time; // rax
  uint64_t v72; // rdx
  BrickBreakerGallery *v73; // rax
  common::milog::MiLogStream *v76; // r14
  proto::BreakoutAction_BreakoutActionType v77; // eax
  google::protobuf::uint64 v78; // r14
  std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // rax
  common::milog::MiLogStream *v80; // r14
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  google::protobuf::uint64 v83; // r14
  std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v84; // rdx
  uint32_t *v85; // rax
  std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v86; // rax
  __int64 v87; // r14
  std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v88; // rax
  uint64_t v89; // rax
  std::unordered_set<unsigned int> *p_ball_idx_set; // rcx
  unsigned int *v91; // rdx
  std::unordered_set<unsigned int>::size_type v92; // r14
  std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v93; // rdx
  uint32_t *p_max_ball_count; // rax
  common::milog::MiLogStream *v95; // r14
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // r14
  std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v98; // rax
  google::protobuf::uint64 v99; // r14
  std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v100; // rdx
  uint32_t *v101; // rax
  std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v102; // rax
  __int64 v103; // r14
  std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v104; // rax
  uint64_t v105; // rax
  unsigned int *v106; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v107; // rax
  common::milog::MiLogStream *v108; // r14
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  google::protobuf::uint32 v111; // eax
  common::milog::MiLogStream *v112; // r14
  common::milog::MiLogStream *v114; // r14
  std::string *v115; // rax
  int32_t ret; // [rsp+20h] [rbp-3E0h]
  proto::GalleryStopReason reason; // [rsp+24h] [rbp-3DCh]
  google::protobuf::RepeatedPtrField<proto::BreakoutSpawnPoint>::const_iterator __for_begin; // [rsp+28h] [rbp-3D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-3D0h] BYREF
  proto::AbilityInvokeEntry *invoke_entry; // [rsp+38h] [rbp-3C8h]
  proto::BreakoutSyncAction *sync_action; // [rsp+40h] [rbp-3C0h]
  proto::BreakoutAction *action_0; // [rsp+48h] [rbp-3B8h]
  uint64_t new_client_game_time_0; // [rsp+50h] [rbp-3B0h]
  uint64_t new_client_game_time; // [rsp+58h] [rbp-3A8h]
  proto::BreakoutSyncSnapShot *sync_snap_shot; // [rsp+60h] [rbp-3A0h]
  proto::BreakoutSnapShot *snap_shot; // [rsp+68h] [rbp-398h]
  const google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject> *__for_range_1; // [rsp+70h] [rbp-390h]
  const google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter> *__for_range_2; // [rsp+78h] [rbp-388h]
  const google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter> *__for_range_3; // [rsp+80h] [rbp-380h]
  const google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject> *__for_range_4; // [rsp+88h] [rbp-378h]
  const google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject> *__for_range_5; // [rsp+90h] [rbp-370h]
  const google::protobuf::RepeatedPtrField<proto::BreakoutSpawnPoint> *__for_range_6; // [rsp+98h] [rbp-368h]
  AbilityBreakoutMixin::BreakoutSnapShot *server_snap_shot; // [rsp+A0h] [rbp-360h]
  uint64_t client_game_time; // [rsp+A8h] [rbp-358h]
  std::vector<proto::BreakoutAction> *__for_range_9; // [rsp+B0h] [rbp-350h]
  unsigned __int64 diff_client_game_time; // [rsp+B8h] [rbp-348h]
  proto::BreakoutAction *action; // [rsp+C0h] [rbp-340h]
  const proto::BreakoutSpawnPoint *spawn_point; // [rsp+C8h] [rbp-338h]
  proto::BreakoutSpawnPoint *server_spawn_point; // [rsp+D0h] [rbp-330h]
  const google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject> *__for_range_7; // [rsp+D8h] [rbp-328h]
  google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject> *__for_range_8; // [rsp+E0h] [rbp-320h]
  proto::BreakoutPhysicalObject *spawned_brick_0; // [rsp+E8h] [rbp-318h]
  const proto::BreakoutPhysicalObject *spawned_brick; // [rsp+F0h] [rbp-310h]
  const proto::BreakoutPhysicalObject *physical_object; // [rsp+F8h] [rbp-308h]
  const proto::BreakoutPhysicalObject *dynamic_object; // [rsp+100h] [rbp-300h]
  const proto::BreakoutElementReactionCounter *ball_element_reaction; // [rsp+108h] [rbp-2F8h]
  const proto::BreakoutElementReactionCounter *brick_element_reaction; // [rsp+110h] [rbp-2F0h]
  const proto::BreakoutPhysicalObject *ball_object; // [rsp+118h] [rbp-2E8h]
  proto::BreakoutSyncFinishGame *sync_finish_game; // [rsp+120h] [rbp-2E0h]
  proto::BreakoutSyncPing *sync_ping; // [rsp+128h] [rbp-2D8h]
  std::set<unsigned int> *__for_range; // [rsp+130h] [rbp-2D0h]
  proto::BreakoutSyncCreateConnect *sync_create_connect; // [rsp+138h] [rbp-2C8h]
  const google::protobuf::RepeatedPtrField<proto::BreakoutSyncConnectUidInfo> *__for_range_0; // [rsp+140h] [rbp-2C0h]
  const proto::BreakoutSyncConnectUidInfo *uid_info; // [rsp+148h] [rbp-2B8h]
  common::milog::MiLogStream v156; // [rsp+150h] [rbp-2B0h] BYREF
  char v157[656]; // [rsp+170h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v157;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 4 13 group_id:1863 48 4 15 gallery_id:1864 64 4 14 pre_index:2113 80 4 8 uid:1900 96 8 9 i"
                        "ter:1914 128 8 21 server_game_time:2103 160 16 15 config_ptr:1845 192 16 14 scene_ptr:1851 224 1"
                        "6 14 actor_ptr:1857 256 16 16 gallery_ptr:1869 288 24 19 tmp_action_vec:2056 352 40 27 ability_m"
                        "ixin_breakout:1875 432 48 12 uid_set:1897 512 56 21 target_brick_map:2044";
  *(_QWORD *)(v3 + 16) = AbilityBreakoutMixin::handleMixinInvokeEntry;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218959360;
  v5[536862733] = 62194;
  v5[536862735] = -218959118;
  v5[536862737] = -218103808;
  v5[536862738] = -202116109;
  std::dynamic_pointer_cast<data::BreakoutMixin,data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v3 + 160));
  if ( std::operator==<data::BreakoutMixin>(0LL, (const std::shared_ptr<data::BreakoutMixin> *)(v3 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v156,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_mixin.cpp",
      "handleMixinInvokeEntry",
      1848);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v156,
      (const char (*)[34])"[BrickBreaker] config_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v156);
    goto LABEL_214;
  }
  Player::getSceneComp(from_player);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 192));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 192)) )
  {
    BaseAbilityMixin::getActor((const BaseAbilityMixin *const)(v3 + 224));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v3 + 224)) )
    {
      common::milog::MiLogStream::create(
        &v156,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        1860);
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v156,
             (const char (*)[42])"[BrickBreaker] actor_ptr == nullptr, uid:");
      *(_DWORD *)(v3 + 80) = Player::getUid(from_player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v156);
LABEL_212:
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 224));
      goto LABEL_213;
    }
    v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
    *(_DWORD *)(v3 + 32) = Entity::getGroupId((const Entity *const)v8);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 256));
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
    *(_DWORD *)(v3 + 48) = ActivityBrickBreakerExcelConfigMgr::findGalleryIdByGroupId(
                             &v9->design_config.txt_config_mgr.activity_brick_breaker_config_mgr,
                             *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 256));
    if ( !*(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v156,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        1867);
      v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v156,
              (const char (*)[37])"[BrickBreaker] gallery_id == 0, uid:");
      *(_DWORD *)(v3 + 80) = Player::getUid(from_player);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v156);
    }
    v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    GalleryComp = (unsigned int)Scene::getGalleryComp(v13);
    SceneGalleryComp::findGallery<BrickBreakerGallery>((SceneGalleryComp *const)(v3 + 256), GalleryComp);
    if ( std::operator==<BrickBreakerGallery>(0LL, (const std::shared_ptr<BrickBreakerGallery> *)(v3 + 256)) )
    {
      common::milog::MiLogStream::create(
        &v156,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        1872);
      v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v156,
              (const char (*)[45])"[BrickBreaker] findGallery fail, gallery_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" , uid:");
      *(_DWORD *)(v3 + 80) = Player::getUid(from_player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v156);
    }
    invoke_entry = (proto::AbilityInvokeEntry *)entry;
    proto::AbilityMixinBreakout::AbilityMixinBreakout((proto::AbilityMixinBreakout *const)(v3 + 352));
    v18 = proto::AbilityInvokeEntry::ability_data[abi:cxx11](entry);
    if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 352, v18) != 1 )
    {
      common::milog::MiLogStream::create(
        &v156,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_mixin.cpp",
        "handleMixinInvokeEntry",
        1878);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v156,
        (const char (*)[37])"[BrickBreaker] ParseFromString fails");
      common::milog::MiLogStream::~MiLogStream(&v156);
LABEL_211:
      proto::AbilityMixinBreakout::~AbilityMixinBreakout((proto::AbilityMixinBreakout *const)(v3 + 352));
      std::shared_ptr<BrickBreakerGallery>::~shared_ptr((std::shared_ptr<BrickBreakerGallery> *const)(v3 + 256));
      goto LABEL_212;
    }
    ret = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_stop_gallery_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_stop_gallery_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_stop_gallery_);
    }
    if ( this->is_stop_gallery_ )
    {
      proto::AbilityMixinBreakout::set_retcode((proto::AbilityMixinBreakout *const)(v3 + 352), -1);
LABEL_210:
      v115 = proto::AbilityInvokeEntry::mutable_ability_data[abi:cxx11](invoke_entry);
      google::protobuf::MessageLite::SerializeToString((const google::protobuf::MessageLite *const)(v3 + 352), v115);
      goto LABEL_211;
    }
    switch ( proto::AbilityMixinBreakout::sync_type((const proto::AbilityMixinBreakout *const)(v3 + 352)) )
    {
      case AbilityMixinBreakout_SyncType_SYNC_TYPE_CREATE_CONNECT:
        if ( std::unordered_map<unsigned int,bool>::empty(&this->uid_connected_map_) )
        {
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 432));
          v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          Scene::getPlayerUidSet(v19, (std::set<unsigned int> *)(v3 + 432));
          __for_range = (std::set<unsigned int> *)(v3 + 432);
          *(std::set<unsigned int>::iterator *)(v3 + 128) = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 432));
          __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
          while ( std::operator!=((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 128), &__for_end) )
          {
            v20 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 128));
            v21 = v20;
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v20);
            }
            *(_DWORD *)(v3 + 80) = *v21;
            v22 = std::unordered_map<unsigned int,bool>::operator[](
                    &this->uid_connected_map_,
                    (const std::unordered_map<unsigned int,bool>::key_type *)(v3 + 80));
            v23 = v22;
            if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)v22 & 7) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(v22);
            }
            *v23 = 0;
            std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 128));
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 432));
        }
        *(_DWORD *)(v3 + 80) = Player::getUid(from_player);
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,bool>,unsigned int>(
               &this->uid_connected_map_,
               (const unsigned int *)(v3 + 80)) )
        {
          v25 = std::unordered_map<unsigned int,bool>::operator[](
                  &this->uid_connected_map_,
                  (const std::unordered_map<unsigned int,bool>::key_type *)(v3 + 80));
          v26 = v25;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v25 & 7) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(v25);
          }
          *v26 = 1;
          M_cur = std::unordered_map<unsigned int,bool>::end(&this->uid_connected_map_)._M_cur;
          v28._M_cur = std::unordered_map<unsigned int,bool>::begin(&this->uid_connected_map_)._M_cur;
          *(std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false> *)(v3 + 96) = std::find_if<std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>,AbilityBreakoutMixin::handleMixinInvokeEntry(proto::AbilityInvokeEntry const&,Player &)::{lambda(std::pair<unsigned int const,bool> const&)#1}>(v28, (std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>)M_cur, v29);
          if ( std::operator!=<BrickBreakerGallery>(0LL, (const std::shared_ptr<BrickBreakerGallery> *)(v3 + 256)) )
          {
            sync_create_connect = proto::AbilityMixinBreakout::mutable_sync_create_connect((proto::AbilityMixinBreakout *const)(v3 + 352));
            v30 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            std::shared_ptr<BrickBreakerGallery>::shared_ptr(
              (std::shared_ptr<BrickBreakerGallery> *const)(v3 + 288),
              (const std::shared_ptr<BrickBreakerGallery> *)(v3 + 256));
            *(_QWORD *)(v3 + 304) = sync_create_connect;
            std::function<ForeachPolicy ()(Player &)>::function<AbilityBreakoutMixin::handleMixinInvokeEntry(proto::AbilityInvokeEntry const&,Player &)::{lambda(Player &)#2},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v156,
              (AbilityBreakoutMixin::handleMixinInvokeEntry::<lambda(Player&)> *)(v3 + 288));
            Scene::foreachPlayer(v30, (std::function<ForeachPolicy(Player&)> *)&v156);
            std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v156);
            AbilityBreakoutMixin::handleMixinInvokeEntry(proto::AbilityInvokeEntry const&,Player &)::{lambda(Player &)#2}::~Player((AbilityBreakoutMixin::handleMixinInvokeEntry::<lambda(Player&)> *const)(v3 + 288));
            std::vector<proto::BreakoutSyncConnectUidInfo>::clear(&this->uid_info_vec_);
            v31 = proto::BreakoutSyncCreateConnect::uid_info_list(sync_create_connect);
            v32 = google::protobuf::RepeatedPtrField<proto::BreakoutSyncConnectUidInfo>::size(v31);
            std::vector<proto::BreakoutSyncConnectUidInfo>::reserve(&this->uid_info_vec_, v32);
            __for_range_0 = proto::BreakoutSyncCreateConnect::uid_info_list(sync_create_connect);
            *(google::protobuf::RepeatedPtrField<proto::BreakoutSyncConnectUidInfo>::const_iterator *)(v3 + 128) = google::protobuf::RepeatedPtrField<proto::BreakoutSyncConnectUidInfo>::begin(__for_range_0);
            __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)google::protobuf::RepeatedPtrField<proto::BreakoutSyncConnectUidInfo>::end(__for_range_0).it_;
            while ( google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutSyncConnectUidInfo const>::operator!=(
                      (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutSyncConnectUidInfo> *const)(v3 + 128),
                      (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutSyncConnectUidInfo>::iterator *)&__for_end) )
            {
              uid_info = google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutSyncConnectUidInfo const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutSyncConnectUidInfo> *const)(v3 + 128));
              std::vector<proto::BreakoutSyncConnectUidInfo>::emplace_back<proto::BreakoutSyncConnectUidInfo const&>(
                &this->uid_info_vec_,
                uid_info,
                (const proto::BreakoutSyncConnectUidInfo *)&this->uid_info_vec_);
              google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutSyncConnectUidInfo const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutSyncConnectUidInfo> *const)(v3 + 128));
            }
          }
          __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,bool>::end(&this->uid_connected_map_)._M_cur;
          if ( std::__detail::operator!=<std::pair<unsigned int const,bool>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false> *)(v3 + 96),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false> *)&__for_end) )
          {
            proto::AbilityInvokeEntry::set_forward_type(invoke_entry, FORWARD_TO_ALL);
          }
          else
          {
            proto::AbilityMixinBreakout::set_sync_type(
              (proto::AbilityMixinBreakout *const)(v3 + 352),
              AbilityMixinBreakout_SyncType_SYNC_TYPE_START_GAME);
            proto::AbilityInvokeEntry::set_forward_type(invoke_entry, FORWARD_TO_ALL);
            NowMs = common::tools::TimeUtils::getNowMs();
            if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
              NowMs = __asan_report_store8(&this->start_time_ms_);
            this->start_time_ms_ = NowMs;
          }
          goto LABEL_209;
        }
        common::milog::MiLogStream::create(
          &v156,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/ability/ability_mixin.cpp",
          "handleMixinInvokeEntry",
          1908);
        v24 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v156,
                (const char (*)[28])"[BrickBreaker] invalid uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v156);
        proto::AbilityMixinBreakout::set_retcode((proto::AbilityMixinBreakout *const)(v3 + 352), -1);
        goto LABEL_210;
      case AbilityMixinBreakout_SyncType_SYNC_TYPE_PING:
        sync_ping = proto::AbilityMixinBreakout::mutable_sync_ping((proto::AbilityMixinBreakout *const)(v3 + 352));
        GameTimeMs = AbilityBreakoutMixin::getGameTimeMs(this);
        proto::BreakoutSyncPing::set_server_game_time(sync_ping, GameTimeMs);
        goto LABEL_209;
      case AbilityMixinBreakout_SyncType_SYNC_TYPE_FINISH_GAME:
        if ( *(char *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_finish_);
        this->is_finish_ = 1;
        sync_finish_game = proto::AbilityMixinBreakout::mutable_sync_finish_game((proto::AbilityMixinBreakout *const)(v3 + 352));
        v35 = AbilityBreakoutMixin::getGameTimeMs(this);
        proto::BreakoutSyncFinishGame::set_server_game_time(sync_finish_game, v35);
        if ( proto::BreakoutSyncFinishGame::is_stop_gallery(sync_finish_game) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->is_stop_gallery_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_stop_gallery_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_store1(&this->is_stop_gallery_);
          }
          this->is_stop_gallery_ = 1;
          if ( proto::BreakoutSyncFinishGame::is_win(sync_finish_game) )
            v36 = 3;
          else
            v36 = 11;
          reason = v36;
          v37 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          v38 = Scene::getGalleryComp(v37);
          SceneGalleryComp::forceStopAndClearGallery(v38, *(_DWORD *)(v3 + 48), 0, reason);
        }
        proto::AbilityInvokeEntry::set_forward_type(invoke_entry, FORWARD_TO_ALL);
        goto LABEL_209;
      case AbilityMixinBreakout_SyncType_SYNC_TYPE_SNAP_SHOT:
        sync_snap_shot = proto::AbilityMixinBreakout::mutable_sync_snap_shot((proto::AbilityMixinBreakout *const)(v3 + 352));
        snap_shot = proto::BreakoutSyncSnapShot::mutable_snap_shot(sync_snap_shot);
        v39 = proto::BreakoutSnapShot::client_game_time(snap_shot);
        if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_ >> 3) + 0x7FFF8000) )
          v39 = __asan_report_store8(&this->snap_shot_);
        this->snap_shot_.client_game_time = v39;
        v40 = proto::BreakoutSnapShot::score(snap_shot);
        if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->snap_shot_.score >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->snap_shot_.score);
        }
        this->snap_shot_.score = v40;
        v41 = proto::BreakoutSnapShot::combo(snap_shot);
        if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.combo >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->snap_shot_.combo >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(&this->snap_shot_.combo);
        }
        this->snap_shot_.combo = v41;
        v42 = proto::BreakoutSnapShot::max_combo(snap_shot);
        if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.max_combo >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->snap_shot_.max_combo >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->snap_shot_.max_combo);
        }
        this->snap_shot_.max_combo = v42;
        v43 = proto::BreakoutSnapShot::life_count(snap_shot);
        if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.life_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->snap_shot_.life_count >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(&this->snap_shot_.life_count);
        }
        this->snap_shot_.life_count = v43;
        v44 = proto::BreakoutSnapShot::wave_suite_index(snap_shot);
        if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.wave_suite_index >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->snap_shot_.wave_suite_index >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->snap_shot_.wave_suite_index);
        }
        this->snap_shot_.wave_suite_index = v44;
        v45 = proto::BreakoutSnapShot::remaining_boss_hp(snap_shot);
        if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.remaining_boss_hp >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->snap_shot_.remaining_boss_hp >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->snap_shot_.remaining_boss_hp);
        }
        this->snap_shot_.remaining_boss_hp = v45;
        v46 = proto::BreakoutSnapShot::raw_client_game_time(snap_shot);
        if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.raw_client_game_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->snap_shot_.raw_client_game_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->snap_shot_.raw_client_game_time);
        }
        this->snap_shot_.raw_client_game_time = v46;
        std::vector<proto::BreakoutPhysicalObject>::clear(&this->snap_shot_.ball_vec);
        v47 = proto::BreakoutSnapShot::ball_list(snap_shot);
        v48 = google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::size(v47);
        std::vector<proto::BreakoutPhysicalObject>::reserve(&this->snap_shot_.ball_vec, v48);
        __for_range_1 = proto::BreakoutSnapShot::ball_list(snap_shot);
        *(google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::const_iterator *)(v3 + 128) = google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::begin(__for_range_1);
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::end(__for_range_1).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator!=(
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128),
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject>::iterator *)&__for_end) )
        {
          ball_object = google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128));
          std::vector<proto::BreakoutPhysicalObject>::push_back(&this->snap_shot_.ball_vec, ball_object);
          google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128));
        }
        std::vector<proto::BreakoutElementReactionCounter>::clear(&this->snap_shot_.brick_element_reaction_vec);
        v49 = proto::BreakoutSnapShot::brick_element_reaction_list(snap_shot);
        v50 = google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter>::size(v49);
        std::vector<proto::BreakoutElementReactionCounter>::reserve(&this->snap_shot_.brick_element_reaction_vec, v50);
        __for_range_2 = proto::BreakoutSnapShot::brick_element_reaction_list(snap_shot);
        *(google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter>::const_iterator *)(v3 + 128) = google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter>::begin(__for_range_2);
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter>::end(__for_range_2).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutElementReactionCounter const>::operator!=(
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutElementReactionCounter> *const)(v3 + 128),
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutElementReactionCounter>::iterator *)&__for_end) )
        {
          brick_element_reaction = google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutElementReactionCounter const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutElementReactionCounter> *const)(v3 + 128));
          std::vector<proto::BreakoutElementReactionCounter>::push_back(
            &this->snap_shot_.brick_element_reaction_vec,
            brick_element_reaction);
          google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutElementReactionCounter const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutElementReactionCounter> *const)(v3 + 128));
        }
        std::vector<proto::BreakoutElementReactionCounter>::clear(&this->snap_shot_.ball_element_reaction_vec);
        v51 = proto::BreakoutSnapShot::ball_element_reaction_list(snap_shot);
        v52 = google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter>::size(v51);
        std::vector<proto::BreakoutElementReactionCounter>::reserve(&this->snap_shot_.ball_element_reaction_vec, v52);
        __for_range_3 = proto::BreakoutSnapShot::ball_element_reaction_list(snap_shot);
        *(google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter>::const_iterator *)(v3 + 128) = google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter>::begin(__for_range_3);
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)google::protobuf::RepeatedPtrField<proto::BreakoutElementReactionCounter>::end(__for_range_3).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutElementReactionCounter const>::operator!=(
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutElementReactionCounter> *const)(v3 + 128),
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutElementReactionCounter>::iterator *)&__for_end) )
        {
          ball_element_reaction = google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutElementReactionCounter const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutElementReactionCounter> *const)(v3 + 128));
          std::vector<proto::BreakoutElementReactionCounter>::push_back(
            &this->snap_shot_.ball_element_reaction_vec,
            ball_element_reaction);
          google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutElementReactionCounter const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutElementReactionCounter> *const)(v3 + 128));
        }
        std::vector<proto::BreakoutPhysicalObject>::clear(&this->snap_shot_.dynamic_object_vec);
        v53 = proto::BreakoutSnapShot::dynamic_object_list(snap_shot);
        v54 = google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::size(v53);
        std::vector<proto::BreakoutPhysicalObject>::reserve(&this->snap_shot_.dynamic_object_vec, v54);
        __for_range_4 = proto::BreakoutSnapShot::dynamic_object_list(snap_shot);
        *(google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::const_iterator *)(v3 + 128) = google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::begin(__for_range_4);
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::end(__for_range_4).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator!=(
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128),
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject>::iterator *)&__for_end) )
        {
          dynamic_object = google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128));
          std::vector<proto::BreakoutPhysicalObject>::push_back(&this->snap_shot_.dynamic_object_vec, dynamic_object);
          google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128));
        }
        std::vector<unsigned int>::clear(&this->snap_shot_.id_index_vec);
        v55 = proto::BreakoutSnapShot::id_index_list(snap_shot);
        v56 = google::protobuf::RepeatedField<unsigned int>::size(v55);
        std::vector<unsigned int>::reserve(&this->snap_shot_.id_index_vec, v56);
        v57 = proto::BreakoutSnapShot::id_index_list(snap_shot);
        common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v57, &this->snap_shot_.id_index_vec);
        if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.wave_index >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->snap_shot_.wave_index >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->snap_shot_.wave_index);
        }
        wave_index = this->snap_shot_.wave_index;
        if ( wave_index != proto::BreakoutSnapShot::wave_index(snap_shot) )
        {
          v59 = proto::BreakoutSnapShot::wave_index(snap_shot);
          if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.wave_index >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->snap_shot_.wave_index >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->snap_shot_.wave_index);
          }
          this->snap_shot_.wave_index = v59;
          std::map<unsigned int,proto::BreakoutPhysicalObject>::clear(&this->snap_shot_.physical_object_map);
        }
        __for_range_5 = proto::BreakoutSnapShot::physical_object_list(snap_shot);
        *(google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::const_iterator *)(v3 + 128) = google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::begin(__for_range_5);
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::end(__for_range_5).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator!=(
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128),
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject>::iterator *)&__for_end) )
        {
          physical_object = google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128));
          *(_DWORD *)(v3 + 80) = proto::BreakoutPhysicalObject::id(physical_object);
          v60 = std::map<unsigned int,proto::BreakoutPhysicalObject>::operator[](
                  &this->snap_shot_.physical_object_map,
                  (std::map<unsigned int,proto::BreakoutPhysicalObject>::key_type *)(v3 + 80));
          proto::BreakoutPhysicalObject::operator=(v60, physical_object);
          google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128));
        }
        __for_range_6 = proto::BreakoutSnapShot::spawn_point_list(snap_shot);
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BreakoutSpawnPoint>::begin(__for_range_6).it_;
        *(google::protobuf::RepeatedPtrField<proto::BreakoutSpawnPoint>::const_iterator *)(v3 + 96) = google::protobuf::RepeatedPtrField<proto::BreakoutSpawnPoint>::end(__for_range_6);
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutSpawnPoint const>::operator!=(
                  &__for_begin,
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutSpawnPoint>::iterator *)(v3 + 96)) )
        {
          spawn_point = google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutSpawnPoint const>::operator*(&__for_begin);
          *(_DWORD *)(v3 + 80) = proto::BreakoutSpawnPoint::id(spawn_point);
          server_spawn_point = std::map<unsigned int,proto::BreakoutSpawnPoint>::operator[](
                                 &this->snap_shot_.spawn_point_map,
                                 (std::map<unsigned int,proto::BreakoutSpawnPoint>::key_type *)(v3 + 80));
          v61 = proto::BreakoutSpawnPoint::brick_suite_id(server_spawn_point);
          if ( v61 == proto::BreakoutSpawnPoint::brick_suite_id(spawn_point) )
          {
            std::unordered_map<unsigned int,proto::BreakoutPhysicalObject>::unordered_map((std::unordered_map<unsigned int,proto::BreakoutPhysicalObject> *const)(v3 + 512));
            __for_range_7 = proto::BreakoutSpawnPoint::spawned_brick_list(spawn_point);
            *(google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::const_iterator *)(v3 + 128) = google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::begin(__for_range_7);
            __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::end(__for_range_7).it_;
            while ( google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator!=(
                      (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128),
                      (const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject>::iterator *)&__for_end) )
            {
              spawned_brick = google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128));
              *(_DWORD *)(v3 + 80) = proto::BreakoutPhysicalObject::id(spawned_brick);
              v62 = std::unordered_map<unsigned int,proto::BreakoutPhysicalObject>::operator[](
                      (std::unordered_map<unsigned int,proto::BreakoutPhysicalObject> *const)(v3 + 512),
                      (std::unordered_map<unsigned int,proto::BreakoutPhysicalObject>::key_type *)(v3 + 80));
              proto::BreakoutPhysicalObject::operator=(v62, spawned_brick);
              google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BreakoutPhysicalObject> *const)(v3 + 128));
            }
            __for_range_8 = proto::BreakoutSpawnPoint::mutable_spawned_brick_list(server_spawn_point);
            *(google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::iterator *)(v3 + 128) = google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::begin(__for_range_8);
            __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)google::protobuf::RepeatedPtrField<proto::BreakoutPhysicalObject>::end(__for_range_8).it_;
            while ( google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject>::operator!=(
                      (const google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject> *const)(v3 + 128),
                      (const google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject>::iterator *)&__for_end) )
            {
              spawned_brick_0 = google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject>::operator*((const google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject> *const)(v3 + 128));
              *(_DWORD *)(v3 + 80) = proto::BreakoutPhysicalObject::id(spawned_brick_0);
              v63 = std::unordered_map<unsigned int,proto::BreakoutPhysicalObject>::operator[](
                      (std::unordered_map<unsigned int,proto::BreakoutPhysicalObject> *const)(v3 + 512),
                      (std::unordered_map<unsigned int,proto::BreakoutPhysicalObject>::key_type *)(v3 + 80));
              proto::BreakoutPhysicalObject::operator=(spawned_brick_0, v63);
              google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject>::operator++((google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutPhysicalObject> *const)(v3 + 128));
            }
            std::unordered_map<unsigned int,proto::BreakoutPhysicalObject>::~unordered_map((std::unordered_map<unsigned int,proto::BreakoutPhysicalObject> *const)(v3 + 512));
          }
          else
          {
            proto::BreakoutSpawnPoint::operator=(server_spawn_point, spawn_point);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::BreakoutSpawnPoint const>::operator++(&__for_begin);
        }
        std::vector<proto::BreakoutAction>::vector((std::vector<proto::BreakoutAction> *const)(v3 + 288));
        std::swap<proto::BreakoutAction>(&this->action_vec_, (std::vector<proto::BreakoutAction> *)(v3 + 288));
        std::vector<proto::BreakoutAction>::clear(&this->action_vec_);
        if ( std::queue<AbilityBreakoutMixin::BreakoutSnapShot>::empty(&this->history_snap_shot_) )
          p_snap_shot = &this->snap_shot_;
        else
          p_snap_shot = std::queue<AbilityBreakoutMixin::BreakoutSnapShot>::front(&this->history_snap_shot_);
        server_snap_shot = p_snap_shot;
        if ( *(_BYTE *)(((unsigned __int64)p_snap_shot >> 3) + 0x7FFF8000) )
          __asan_report_load8(p_snap_shot);
        client_game_time = server_snap_shot->client_game_time;
        __for_range_9 = (std::vector<proto::BreakoutAction> *)(v3 + 288);
        *(std::vector<proto::BreakoutAction>::iterator *)(v3 + 128) = std::vector<proto::BreakoutAction>::begin((std::vector<proto::BreakoutAction> *const)(v3 + 288));
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<proto::BreakoutAction>::end(__for_range_9)._M_current;
        while ( 2 )
        {
          if ( __gnu_cxx::operator!=<proto::BreakoutAction *,std::vector<proto::BreakoutAction>>(
                 (const __gnu_cxx::__normal_iterator<proto::BreakoutAction*,std::vector<proto::BreakoutAction> > *)(v3 + 128),
                 (const __gnu_cxx::__normal_iterator<proto::BreakoutAction*,std::vector<proto::BreakoutAction> > *)&__for_end) )
          {
            action = __gnu_cxx::__normal_iterator<proto::BreakoutAction *,std::vector<proto::BreakoutAction>>::operator*((const __gnu_cxx::__normal_iterator<proto::BreakoutAction*,std::vector<proto::BreakoutAction> > *const)(v3 + 128));
            if ( proto::BreakoutAction::action_type(action) == BreakoutAction_BreakoutActionType_ACTION_TYPE_LAUNCH_BALL
              || proto::BreakoutAction::action_type(action) == BreakoutAction_BreakoutActionType_ACTION_TYPE_DESTROY_BALL )
            {
              v66 = proto::BreakoutAction::client_game_time(action);
              if ( client_game_time <= v66 )
                goto LABEL_118;
            }
            else
            {
              v67 = proto::BreakoutAction::server_game_time(action);
              if ( client_game_time <= v67 )
LABEL_118:
                std::vector<proto::BreakoutAction>::emplace_back<proto::BreakoutAction&>(
                  &this->action_vec_,
                  action,
                  (proto::BreakoutAction *)&this->action_vec_);
            }
            __gnu_cxx::__normal_iterator<proto::BreakoutAction *,std::vector<proto::BreakoutAction>>::operator++((__gnu_cxx::__normal_iterator<proto::BreakoutAction*,std::vector<proto::BreakoutAction> > *const)(v3 + 128));
            continue;
          }
          break;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->snap_shot_);
        v68 = this->snap_shot_.client_game_time;
        if ( *(_BYTE *)(((unsigned __int64)&this->last_client_game_time >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->last_client_game_time);
        if ( v68 <= this->last_client_game_time )
          v69 = 0LL;
        else
          v69 = this->snap_shot_.client_game_time - this->last_client_game_time;
        diff_client_game_time = v69;
        v70 = std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        p_max_client_server_delta_time = &v70->max_client_server_delta_time;
        if ( *(_BYTE *)(((unsigned __int64)p_max_client_server_delta_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_max_client_server_delta_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_client_server_delta_time >> 3)
                                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(p_max_client_server_delta_time);
        }
        if ( diff_client_game_time > v70->max_client_server_delta_time / 5 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->snap_shot_);
          v72 = this->snap_shot_.client_game_time;
          if ( *(_BYTE *)(((unsigned __int64)&this->last_client_game_time >> 3) + 0x7FFF8000) )
            __asan_report_store8(&this->last_client_game_time);
          this->last_client_game_time = v72;
          if ( std::queue<AbilityBreakoutMixin::BreakoutSnapShot>::size(&this->history_snap_shot_) > 4 )
            std::queue<AbilityBreakoutMixin::BreakoutSnapShot>::pop(&this->history_snap_shot_);
          std::queue<AbilityBreakoutMixin::BreakoutSnapShot>::push(&this->history_snap_shot_, &this->snap_shot_);
        }
        proto::AbilityInvokeEntry::set_forward_type(invoke_entry, FORWARD_ONLY_SERVER);
        if ( std::operator!=<BrickBreakerGallery>(0LL, (const std::shared_ptr<BrickBreakerGallery> *)(v3 + 256)) )
        {
          v73 = std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
          BrickBreakerGallery::updatePlayerScoreByMixin(v73, &this->snap_shot_);
        }
        std::vector<proto::BreakoutAction>::~vector((std::vector<proto::BreakoutAction> *const)(v3 + 288));
        goto LABEL_209;
      case AbilityMixinBreakout_SyncType_SYNC_TYPE_ACTION:
        sync_action = proto::AbilityMixinBreakout::mutable_sync_action((proto::AbilityMixinBreakout *const)(v3 + 352));
        action_0 = proto::BreakoutSyncAction::mutable_action(sync_action);
        *(_QWORD *)(v3 + 128) = AbilityBreakoutMixin::getGameTimeMs(this);
        proto::BreakoutAction::set_server_game_time(action_0, *(_QWORD *)(v3 + 128));
        proto::AbilityInvokeEntry::set_forward_type(invoke_entry, FORWARD_TO_ALL);
        if ( proto::BreakoutAction::action_type(action_0) != BreakoutAction_BreakoutActionType_ACTION_TYPE_LAUNCH_BALL
          && proto::BreakoutAction::action_type(action_0) != BreakoutAction_BreakoutActionType_ACTION_TYPE_DESTROY_BALL )
        {
          goto LABEL_153;
        }
        *(_DWORD *)(v3 + 64) = proto::BreakoutAction::pre_index(action_0);
        if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                &this->ball_idx_set_,
                (const unsigned int *)(v3 + 64))
          && (*(_DWORD *)(v3 + 64)
           || proto::BreakoutAction::action_type(action_0) != BreakoutAction_BreakoutActionType_ACTION_TYPE_LAUNCH_BALL) )
        {
          proto::BreakoutAction::set_is_failed(action_0, 1);
          common::milog::MiLogStream::create(
            &v156,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/ability/ability_mixin.cpp",
            "handleMixinInvokeEntry",
            2118);
          v76 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v156,
                  (const char (*)[35])"[BrickBreaker] ball not find, idx:");
          *(_DWORD *)(v3 + 80) = proto::BreakoutAction::pre_index(action_0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v156);
          goto LABEL_209;
        }
        *(_DWORD *)(v3 + 80) = proto::BreakoutAction::pre_index(action_0);
        std::unordered_set<unsigned int>::erase(
          &this->ball_idx_set_,
          (const std::unordered_set<unsigned int>::key_type *)(v3 + 80));
LABEL_153:
        v77 = proto::BreakoutAction::action_type(action_0);
        if ( v77 == BreakoutAction_BreakoutActionType_ACTION_TYPE_MISSILE )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->missile_index_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->missile_index_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->missile_index_);
          }
          proto::BreakoutAction::set_new_index(action_0, ++this->missile_index_);
        }
        else
        {
          if ( v77 > BreakoutAction_BreakoutActionType_ACTION_TYPE_MISSILE )
          {
LABEL_201:
            common::milog::MiLogStream::create(
              &v156,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/ability/ability_mixin.cpp",
              "handleMixinInvokeEntry",
              2187);
            v112 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                     &v156,
                     (const char (*)[34])"[BrickBreaker] invalid sync_type:");
            *(_DWORD *)(v3 + 80) = proto::AbilityMixinBreakout::sync_type((const proto::AbilityMixinBreakout *const)(v3 + 352));
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v112,
              (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v156);
            ret = -1;
            goto LABEL_202;
          }
          switch ( v77 )
          {
            case BreakoutAction_BreakoutActionType_ACTION_TYPE_FALLING_OBJECT:
              *(_DWORD *)(v3 + 80) = proto::BreakoutAction::pre_index(action_0);
              v107 = std::unordered_set<unsigned int>::emplace<unsigned int>(
                       &this->had_falling_object_set_,
                       (unsigned int *)(v3 + 80),
                       v106);
              if ( !v107.second )
              {
                proto::BreakoutAction::set_is_failed(action_0, 1);
                common::milog::MiLogStream::create(
                  &v156,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/ability/ability_mixin.cpp",
                  "handleMixinInvokeEntry",
                  2174);
                v108 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                         &v156,
                         (const char (*)[37])"[BrickBreaker] check pre_index fail:");
                *(_DWORD *)(v3 + 80) = proto::BreakoutAction::pre_index(action_0);
                v109 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v108,
                         (const unsigned int *)(v3 + 80));
                v110 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                         v109,
                         (const char (*)[26])" had_falling_object_set_:");
                common::milog::MiLogStream::operator<<<unsigned int>(v110, &this->had_falling_object_set_);
                common::milog::MiLogStream::~MiLogStream(&v156);
              }
              else
              {
                v111 = proto::BreakoutAction::pre_index(action_0);
                proto::BreakoutAction::set_new_index(action_0, v111);
              }
              break;
            case BreakoutAction_BreakoutActionType_ACTION_TYPE_LAUNCH_BALL:
              v78 = proto::BreakoutAction::client_game_time(action_0);
              v79 = std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&v79->max_predict_time >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v79->max_predict_time >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&v79->max_predict_time);
              }
              if ( v78 <= (unsigned __int64)v79->max_predict_time + *(_QWORD *)(v3 + 128) )
              {
                v83 = proto::BreakoutAction::client_game_time(action_0);
                v84 = std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                v85 = &v84->max_client_server_delta_time;
                if ( *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v85 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v85);
                }
                if ( v83 + v84->max_client_server_delta_time < *(_QWORD *)(v3 + 128) )
                {
                  v86 = std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  if ( *(_BYTE *)(((unsigned __int64)&v86->adjust_client_server_delta_time >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v86->adjust_client_server_delta_time >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&v86->adjust_client_server_delta_time);
                  }
                  if ( (unsigned __int64)v86->adjust_client_server_delta_time >= *(_QWORD *)(v3 + 128) )
                  {
                    v89 = 0LL;
                  }
                  else
                  {
                    v87 = *(_QWORD *)(v3 + 128);
                    v88 = std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    if ( *(_BYTE *)(((unsigned __int64)&v88->adjust_client_server_delta_time >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&v88->adjust_client_server_delta_time >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&v88->adjust_client_server_delta_time);
                    }
                    v89 = v87 - v88->adjust_client_server_delta_time;
                  }
                  new_client_game_time = v89;
                  proto::BreakoutAction::set_client_game_time(action_0, v89);
                }
                p_ball_idx_set = &this->ball_idx_set_;
                if ( *(_BYTE *)(((unsigned __int64)&this->ball_index_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ball_index_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->ball_index_);
                }
                v91 = (unsigned int *)(this->ball_index_ + 1);
                this->ball_index_ = (unsigned int)v91;
                std::unordered_set<unsigned int>::emplace<unsigned int &>(p_ball_idx_set, &this->ball_index_, v91);
                proto::BreakoutAction::set_new_index(action_0, this->ball_index_);
                if ( proto::BreakoutAction::has_extra_ball(action_0) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->ball_index_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ball_index_ >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_load4(&this->ball_index_);
                  }
                  *(_DWORD *)(v3 + 80) = ++this->ball_index_;
                  std::unordered_set<unsigned int>::emplace<unsigned int &>(
                    &this->ball_idx_set_,
                    (unsigned int *)(v3 + 80),
                    (unsigned int *)&this->ball_idx_set_);
                  proto::BreakoutAction::set_extra_ball_index(action_0, *(_DWORD *)(v3 + 80));
                }
                v92 = std::unordered_set<unsigned int>::size(&this->ball_idx_set_);
                v93 = std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                p_max_ball_count = &v93->max_ball_count;
                if ( *(_BYTE *)(((unsigned __int64)p_max_ball_count >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_max_ball_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_ball_count >> 3)
                                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load4(p_max_ball_count);
                }
                if ( v92 > v93->max_ball_count )
                {
                  proto::BreakoutAction::set_is_failed(action_0, 1);
                  common::milog::MiLogStream::create(
                    &v156,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/ability/ability_mixin.cpp",
                    "handleMixinInvokeEntry",
                    2153);
                  v95 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          &v156,
                          (const char (*)[49])"[BrickBreaker] ball count limit, cur_ball_count:");
                  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::size(&this->ball_idx_set_);
                  v96 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                          v95,
                          (const unsigned __int64 *)&__for_end);
                  v97 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v96,
                          (const char (*)[17])" max_ball_count:");
                  v98 = std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v97, &v98->max_ball_count);
                  common::milog::MiLogStream::~MiLogStream(&v156);
                  ret = -1;
                }
              }
              else
              {
                proto::BreakoutAction::set_is_failed(action_0, 1);
                common::milog::MiLogStream::create(
                  &v156,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/ability/ability_mixin.cpp",
                  "handleMixinInvokeEntry",
                  2132);
                v80 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        &v156,
                        (const char (*)[44])"[BrickBreaker] check client_game_time fail:");
                __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)proto::BreakoutAction::client_game_time(action_0);
                v81 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v80,
                        (const unsigned __int64 *)&__for_end);
                v82 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v81,
                        (const char (*)[19])" server_game_time:");
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v82,
                  (const unsigned __int64 *)(v3 + 128));
                common::milog::MiLogStream::~MiLogStream(&v156);
              }
              break;
            case BreakoutAction_BreakoutActionType_ACTION_TYPE_DESTROY_BALL:
              v99 = proto::BreakoutAction::client_game_time(action_0);
              v100 = std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              v101 = &v100->max_client_server_delta_time;
              if ( *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v101 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v101);
              }
              if ( v99 + v100->max_client_server_delta_time < *(_QWORD *)(v3 + 128) )
              {
                v102 = std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                if ( *(_BYTE *)(((unsigned __int64)&v102->adjust_client_server_delta_time >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v102->adjust_client_server_delta_time >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&v102->adjust_client_server_delta_time);
                }
                if ( (unsigned __int64)v102->adjust_client_server_delta_time >= *(_QWORD *)(v3 + 128) )
                {
                  v105 = 0LL;
                }
                else
                {
                  v103 = *(_QWORD *)(v3 + 128);
                  v104 = std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::BreakoutMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  if ( *(_BYTE *)(((unsigned __int64)&v104->adjust_client_server_delta_time >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v104->adjust_client_server_delta_time >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&v104->adjust_client_server_delta_time);
                  }
                  v105 = v103 - v104->adjust_client_server_delta_time;
                }
                new_client_game_time_0 = v105;
                proto::BreakoutAction::set_client_game_time(action_0, v105);
              }
              break;
            default:
              goto LABEL_201;
          }
        }
LABEL_202:
        if ( !ret && !proto::BreakoutAction::is_failed(action_0) )
          std::vector<proto::BreakoutAction>::push_back(&this->action_vec_, action_0);
LABEL_209:
        proto::AbilityMixinBreakout::set_retcode((proto::AbilityMixinBreakout *const)(v3 + 352), ret);
        goto LABEL_210;
      default:
        common::milog::MiLogStream::create(
          &v156,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/ability/ability_mixin.cpp",
          "handleMixinInvokeEntry",
          2200);
        v114 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 &v156,
                 (const char (*)[34])"[BrickBreaker] invalid sync_type:");
        *(_DWORD *)(v3 + 80) = proto::AbilityMixinBreakout::sync_type((const proto::AbilityMixinBreakout *const)(v3 + 352));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v114, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v156);
        ret = -1;
        goto LABEL_209;
    }
  }
  common::milog::MiLogStream::create(
    &v156,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/ability/ability_mixin.cpp",
    "handleMixinInvokeEntry",
    1854);
  v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         &v156,
         (const char (*)[44])"[BrickBreaker] player is not on scene, uid:");
  *(_DWORD *)(v3 + 80) = Player::getUid(from_player);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
  common::milog::MiLogStream::~MiLogStream(&v156);
LABEL_213:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 192));
LABEL_214:
  std::shared_ptr<data::BreakoutMixin>::~shared_ptr((std::shared_ptr<data::BreakoutMixin> *const)(v3 + 160));
  if ( v157 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 1914: range 0000000013720C42-0000000013720C96
bool __cdecl AbilityBreakoutMixin::handleMixinInvokeEntry(proto::AbilityInvokeEntry const&,Player &)::{lambda(std::pair<unsigned int const,bool> const&)#1}::operator()(
        const AbilityBreakoutMixin::handleMixinInvokeEntry::<lambda(const value_type&)> *const __closure,
        const std::unordered_map<unsigned int,bool>::value_type *uid_connected)
{
  if ( *(_BYTE *)(((unsigned __int64)&uid_connected->second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)uid_connected + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&uid_connected->second >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load1(&uid_connected->second);
  }
  return !uid_connected->second;
};

// Line 1921: range 0000000013720C98-00000000137210C4
ForeachPolicy __cdecl AbilityBreakoutMixin::handleMixinInvokeEntry(proto::AbilityInvokeEntry const&,Player &)::{lambda(Player &)#2}::operator()(
        const AbilityBreakoutMixin::handleMixinInvokeEntry::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  BrickBreakerGallery *v9; // rdi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  google::protobuf::RepeatedField<unsigned int> *v13; // rax
  google::protobuf::RepeatedField<unsigned int> *v14; // rax
  ForeachPolicy result; // eax
  proto::BreakoutSyncConnectUidInfo *uid_info; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-110h] BYREF
  char v19[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 player_uid:1923 64 24 21 chosen_skill_vec:1929 128 24 27 chosen_skill_level_vec:1930";
  *(_QWORD *)(v2 + 16) = AbilityBreakoutMixin::handleMixinInvokeEntry(proto::AbilityInvokeEntry const&,Player &)::{lambda(Player &)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = Player::getUid(player);
  v5 = std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  BaseGallery::getPlayerUidVec((std::vector<unsigned int> *)(v2 + 128), (const BaseGallery *const)v5);
  v6 = !common::tools::MiscUtils::isContains<unsigned int>(
          (const std::vector<unsigned int> *)(v2 + 128),
          (const unsigned int *)(v2 + 48));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/ability/ability_mixin.cpp",
      "operator()",
      1926);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v18, (const char (*)[9])"player: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])off_250434C0);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
    v9 = std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
    BrickBreakerGallery::getBrickPlayerSkill(
      v9,
      player,
      (std::vector<unsigned int> *)(v2 + 64),
      (std::vector<unsigned int> *)(v2 + 128));
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/ability/ability_mixin.cpp",
      "operator()",
      1932);
    v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v18,
            (const char (*)[33])"[BrickBreaker] chosen_skill_vec:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int>(v10, (const std::vector<unsigned int> *)(v2 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v11,
            (const char (*)[26])", chosen_skill_level_vec:");
    common::milog::MiLogStream::operator<<<unsigned int>(v12, (const std::vector<unsigned int> *)(v2 + 128));
    common::milog::MiLogStream::~MiLogStream(&v18);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__sync_create_connect >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__sync_create_connect);
    uid_info = proto::BreakoutSyncCreateConnect::add_uid_info_list(__closure->__sync_create_connect);
    proto::BreakoutSyncConnectUidInfo::set_uid(uid_info, *(_DWORD *)(v2 + 48));
    v13 = proto::BreakoutSyncConnectUidInfo::mutable_skill_id_list(uid_info);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
      (const std::vector<unsigned int> *)(v2 + 64),
      v13);
    v14 = proto::BreakoutSyncConnectUidInfo::mutable_skill_level_list(uid_info);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
      (const std::vector<unsigned int> *)(v2 + 128),
      v14);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  }
  result = FOREACH_CONTINUE;
  if ( v19 == (char *)v2 )
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
  return result;
};

// Line 1921: range 00000000137F452C-00000000137F45AB
void __cdecl AbilityBreakoutMixin::handleMixinInvokeEntry(proto::AbilityInvokeEntry const&,Player &)::{lambda(Player &)#2}::Player(
        AbilityBreakoutMixin::handleMixinInvokeEntry::<lambda(Player&)> *const this,
        AbilityBreakoutMixin::handleMixinInvokeEntry::<lambda(Player&)> *a2)
{
  proto::BreakoutSyncCreateConnect *sync_create_connect; // rdx

  std::shared_ptr<BrickBreakerGallery>::shared_ptr(&this->__gallery_ptr, &a2->__gallery_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__sync_create_connect >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__sync_create_connect);
  sync_create_connect = a2->__sync_create_connect;
  if ( *(_BYTE *)(((unsigned __int64)&this->__sync_create_connect >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__sync_create_connect);
  this->__sync_create_connect = sync_create_connect;
};

// Line 1921: range 00000000137F4676-00000000137F46F5
void __cdecl AbilityBreakoutMixin::handleMixinInvokeEntry(proto::AbilityInvokeEntry const&,Player &)::{lambda(Player &)#2}::Player(
        AbilityBreakoutMixin::handleMixinInvokeEntry::<lambda(Player&)> *const this,
        const AbilityBreakoutMixin::handleMixinInvokeEntry::<lambda(Player&)> *a2)
{
  proto::BreakoutSyncCreateConnect *sync_create_connect; // rdx

  std::shared_ptr<BrickBreakerGallery>::shared_ptr(&this->__gallery_ptr, &a2->__gallery_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__sync_create_connect >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->__sync_create_connect);
  sync_create_connect = a2->__sync_create_connect;
  if ( *(_BYTE *)(((unsigned __int64)&this->__sync_create_connect >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__sync_create_connect);
  this->__sync_create_connect = sync_create_connect;
};

// Line 1921: range 00000000137210C6-00000000137210E0
void __cdecl AbilityBreakoutMixin::handleMixinInvokeEntry(proto::AbilityInvokeEntry const&,Player &)::{lambda(Player &)#2}::~Player(
        AbilityBreakoutMixin::handleMixinInvokeEntry::<lambda(Player&)> *const this)
{
  std::shared_ptr<BrickBreakerGallery>::~shared_ptr(&this->__gallery_ptr);
};

// Line 2213: range 0000000013723D16-0000000013724684
void __cdecl AbilityBreakoutMixin::fillRecoverInfo(
        const AbilityBreakoutMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  const AbilityBreakoutMixin::BreakoutSnapShot *p_snap_shot; // rax
  uint64_t GameTimeMs; // rax
  proto::BreakoutPhysicalObject *v4; // rax
  proto::BreakoutPhysicalObject *v5; // rax
  proto::BreakoutAction *v6; // rax
  proto::BreakoutSpawnPoint *v7; // rax
  proto::BreakoutElementReactionCounter *v8; // rax
  proto::BreakoutElementReactionCounter *v9; // rax
  proto::BreakoutSyncConnectUidInfo *v10; // rax
  proto::BreakoutPhysicalObject *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // rax
  std::vector<proto::BreakoutPhysicalObject>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<proto::BreakoutPhysicalObject>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  const AbilityBreakoutMixin::BreakoutSnapShot *server_snap_shot; // [rsp+20h] [rbp-B0h]
  proto::BreakoutSnapShot *snap_shot; // [rsp+28h] [rbp-A8h]
  const std::vector<proto::BreakoutPhysicalObject> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::map<unsigned int,proto::BreakoutPhysicalObject> *__for_range_0; // [rsp+38h] [rbp-98h]
  const std::vector<proto::BreakoutAction> *__for_range_1; // [rsp+40h] [rbp-90h]
  const std::map<unsigned int,proto::BreakoutSpawnPoint> *__for_range_2; // [rsp+48h] [rbp-88h]
  const std::vector<proto::BreakoutElementReactionCounter> *__for_range_3; // [rsp+50h] [rbp-80h]
  const std::vector<proto::BreakoutElementReactionCounter> *__for_range_4; // [rsp+58h] [rbp-78h]
  const std::vector<proto::BreakoutSyncConnectUidInfo> *__for_range_5; // [rsp+60h] [rbp-70h]
  const std::vector<proto::BreakoutPhysicalObject> *__for_range_6; // [rsp+68h] [rbp-68h]
  const proto::BreakoutPhysicalObject *dynamic_object; // [rsp+70h] [rbp-60h]
  const proto::BreakoutSyncConnectUidInfo *uid_info; // [rsp+78h] [rbp-58h]
  const proto::BreakoutElementReactionCounter *ball_element_reaction; // [rsp+80h] [rbp-50h]
  const proto::BreakoutElementReactionCounter *brick_element_reaction; // [rsp+88h] [rbp-48h]
  const std::pair<unsigned int const,proto::BreakoutSpawnPoint> *v29; // [rsp+90h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::BreakoutSpawnPoint> >::type *__0; // [rsp+98h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::BreakoutSpawnPoint> >::type *spawn_point; // [rsp+A0h] [rbp-30h]
  const proto::BreakoutAction *action; // [rsp+A8h] [rbp-28h]
  const std::pair<unsigned int const,proto::BreakoutPhysicalObject> *v33; // [rsp+B0h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::BreakoutPhysicalObject> >::type *_; // [rsp+B8h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::BreakoutPhysicalObject> >::type *physical_object; // [rsp+C0h] [rbp-10h]
  const proto::BreakoutPhysicalObject *ball_object; // [rsp+C8h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_time_ms_);
  if ( this->start_time_ms_ )
  {
    if ( std::queue<AbilityBreakoutMixin::BreakoutSnapShot>::empty(&this->history_snap_shot_) )
      p_snap_shot = &this->snap_shot_;
    else
      p_snap_shot = std::queue<AbilityBreakoutMixin::BreakoutSnapShot>::front(&this->history_snap_shot_);
    server_snap_shot = p_snap_shot;
    snap_shot = proto::AbilityMixinRecoverInfo::mutable_breakout_snap_shot(info);
    if ( *(char *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_finish_);
    proto::BreakoutSnapShot::set_is_finish(snap_shot, this->is_finish_);
    if ( *(_BYTE *)(((unsigned __int64)server_snap_shot >> 3) + 0x7FFF8000) )
      __asan_report_load8(server_snap_shot);
    proto::BreakoutSnapShot::set_client_game_time(snap_shot, server_snap_shot->client_game_time);
    GameTimeMs = AbilityBreakoutMixin::getGameTimeMs(this);
    proto::BreakoutSnapShot::set_server_game_time(snap_shot, GameTimeMs);
    if ( *(_BYTE *)(((unsigned __int64)&server_snap_shot->wave_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&server_snap_shot->wave_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&server_snap_shot->wave_index);
    }
    proto::BreakoutSnapShot::set_wave_index(snap_shot, server_snap_shot->wave_index);
    __for_range = &server_snap_shot->ball_vec;
    __for_begin._M_current = std::vector<proto::BreakoutPhysicalObject>::begin(&server_snap_shot->ball_vec)._M_current;
    __for_end._M_current = std::vector<proto::BreakoutPhysicalObject>::end(&server_snap_shot->ball_vec)._M_current;
    while ( __gnu_cxx::operator!=<proto::BreakoutPhysicalObject const*,std::vector<proto::BreakoutPhysicalObject>>(
              &__for_begin,
              &__for_end) )
    {
      ball_object = __gnu_cxx::__normal_iterator<proto::BreakoutPhysicalObject const*,std::vector<proto::BreakoutPhysicalObject>>::operator*(&__for_begin);
      v4 = proto::BreakoutSnapShot::add_ball_list(snap_shot);
      proto::BreakoutPhysicalObject::operator=(v4, ball_object);
      __gnu_cxx::__normal_iterator<proto::BreakoutPhysicalObject const*,std::vector<proto::BreakoutPhysicalObject>>::operator++(&__for_begin);
    }
    __for_range_0 = &server_snap_shot->physical_object_map;
    __for_begin._M_current = (const proto::BreakoutPhysicalObject *)std::map<unsigned int,proto::BreakoutPhysicalObject>::begin(&server_snap_shot->physical_object_map)._M_node;
    __for_end._M_current = (const proto::BreakoutPhysicalObject *)std::map<unsigned int,proto::BreakoutPhysicalObject>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutPhysicalObject> >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutPhysicalObject> >::_Self *)&__for_end) )
    {
      v33 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutPhysicalObject>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutPhysicalObject> > *const)&__for_begin);
      _ = std::get<0ul,unsigned int const,proto::BreakoutPhysicalObject>(v33);
      physical_object = (std::tuple_element<1,const std::pair<unsigned int const,proto::BreakoutPhysicalObject> >::type *)std::get<1ul,unsigned int const,proto::BreakoutPhysicalObject>(v33);
      v5 = proto::BreakoutSnapShot::add_physical_object_list(snap_shot);
      proto::BreakoutPhysicalObject::operator=(v5, physical_object);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutPhysicalObject>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutPhysicalObject> > *const)&__for_begin);
    }
    __for_range_1 = &this->action_vec_;
    __for_begin._M_current = (const proto::BreakoutPhysicalObject *)std::vector<proto::BreakoutAction>::begin(&this->action_vec_)._M_current;
    __for_end._M_current = (const proto::BreakoutPhysicalObject *)std::vector<proto::BreakoutAction>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<proto::BreakoutAction const*,std::vector<proto::BreakoutAction>>(
              (const __gnu_cxx::__normal_iterator<const proto::BreakoutAction*,std::vector<proto::BreakoutAction> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const proto::BreakoutAction*,std::vector<proto::BreakoutAction> > *)&__for_end) )
    {
      action = __gnu_cxx::__normal_iterator<proto::BreakoutAction const*,std::vector<proto::BreakoutAction>>::operator*((const __gnu_cxx::__normal_iterator<const proto::BreakoutAction*,std::vector<proto::BreakoutAction> > *const)&__for_begin);
      v6 = proto::BreakoutSnapShot::add_action_list(snap_shot);
      proto::BreakoutAction::operator=(v6, action);
      __gnu_cxx::__normal_iterator<proto::BreakoutAction const*,std::vector<proto::BreakoutAction>>::operator++((__gnu_cxx::__normal_iterator<const proto::BreakoutAction*,std::vector<proto::BreakoutAction> > *const)&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&server_snap_shot->score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&server_snap_shot->score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&server_snap_shot->score);
    }
    proto::BreakoutSnapShot::set_score(snap_shot, server_snap_shot->score);
    if ( *(_BYTE *)(((unsigned __int64)&server_snap_shot->combo >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)server_snap_shot + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&server_snap_shot->combo >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&server_snap_shot->combo);
    }
    proto::BreakoutSnapShot::set_combo(snap_shot, server_snap_shot->combo);
    if ( *(_BYTE *)(((unsigned __int64)&server_snap_shot->max_combo >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&server_snap_shot->max_combo >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&server_snap_shot->max_combo);
    }
    proto::BreakoutSnapShot::set_max_combo(snap_shot, server_snap_shot->max_combo);
    if ( *(_BYTE *)(((unsigned __int64)&server_snap_shot->life_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)server_snap_shot + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&server_snap_shot->life_count >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&server_snap_shot->life_count);
    }
    proto::BreakoutSnapShot::set_life_count(snap_shot, server_snap_shot->life_count);
    if ( *(_BYTE *)(((unsigned __int64)&server_snap_shot->wave_suite_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&server_snap_shot->wave_suite_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&server_snap_shot->wave_suite_index);
    }
    proto::BreakoutSnapShot::set_wave_suite_index(snap_shot, server_snap_shot->wave_suite_index);
    __for_range_2 = &server_snap_shot->spawn_point_map;
    __for_begin._M_current = (const proto::BreakoutPhysicalObject *)std::map<unsigned int,proto::BreakoutSpawnPoint>::begin(&server_snap_shot->spawn_point_map)._M_node;
    __for_end._M_current = (const proto::BreakoutPhysicalObject *)std::map<unsigned int,proto::BreakoutSpawnPoint>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutSpawnPoint> >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutSpawnPoint> >::_Self *)&__for_end) )
    {
      v29 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutSpawnPoint>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutSpawnPoint> > *const)&__for_begin);
      __0 = std::get<0ul,unsigned int const,proto::BreakoutSpawnPoint>(v29);
      spawn_point = (std::tuple_element<1,const std::pair<unsigned int const,proto::BreakoutSpawnPoint> >::type *)std::get<1ul,unsigned int const,proto::BreakoutSpawnPoint>(v29);
      v7 = proto::BreakoutSnapShot::add_spawn_point_list(snap_shot);
      proto::BreakoutSpawnPoint::operator=(v7, spawn_point);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutSpawnPoint>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BreakoutSpawnPoint> > *const)&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&server_snap_shot->remaining_boss_hp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&server_snap_shot->remaining_boss_hp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&server_snap_shot->remaining_boss_hp);
    }
    proto::BreakoutSnapShot::set_remaining_boss_hp(snap_shot, server_snap_shot->remaining_boss_hp);
    __for_range_3 = &server_snap_shot->brick_element_reaction_vec;
    __for_begin._M_current = (const proto::BreakoutPhysicalObject *)std::vector<proto::BreakoutElementReactionCounter>::begin(&server_snap_shot->brick_element_reaction_vec)._M_current;
    __for_end._M_current = (const proto::BreakoutPhysicalObject *)std::vector<proto::BreakoutElementReactionCounter>::end(__for_range_3)._M_current;
    while ( __gnu_cxx::operator!=<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>(
              (const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *)&__for_end) )
    {
      brick_element_reaction = __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator*((const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *const)&__for_begin);
      v8 = proto::BreakoutSnapShot::add_brick_element_reaction_list(snap_shot);
      proto::BreakoutElementReactionCounter::operator=(v8, brick_element_reaction);
      __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator++((__gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *const)&__for_begin);
    }
    __for_range_4 = &server_snap_shot->ball_element_reaction_vec;
    __for_begin._M_current = (const proto::BreakoutPhysicalObject *)std::vector<proto::BreakoutElementReactionCounter>::begin(&server_snap_shot->ball_element_reaction_vec)._M_current;
    __for_end._M_current = (const proto::BreakoutPhysicalObject *)std::vector<proto::BreakoutElementReactionCounter>::end(__for_range_4)._M_current;
    while ( __gnu_cxx::operator!=<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>(
              (const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *)&__for_end) )
    {
      ball_element_reaction = __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator*((const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *const)&__for_begin);
      v9 = proto::BreakoutSnapShot::add_ball_element_reaction_list(snap_shot);
      proto::BreakoutElementReactionCounter::operator=(v9, ball_element_reaction);
      __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator++((__gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *const)&__for_begin);
    }
    __for_range_5 = &this->uid_info_vec_;
    __for_begin._M_current = (const proto::BreakoutPhysicalObject *)std::vector<proto::BreakoutSyncConnectUidInfo>::begin(&this->uid_info_vec_)._M_current;
    __for_end._M_current = (const proto::BreakoutPhysicalObject *)std::vector<proto::BreakoutSyncConnectUidInfo>::end(__for_range_5)._M_current;
    while ( __gnu_cxx::operator!=<proto::BreakoutSyncConnectUidInfo const*,std::vector<proto::BreakoutSyncConnectUidInfo>>(
              (const __gnu_cxx::__normal_iterator<const proto::BreakoutSyncConnectUidInfo*,std::vector<proto::BreakoutSyncConnectUidInfo> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const proto::BreakoutSyncConnectUidInfo*,std::vector<proto::BreakoutSyncConnectUidInfo> > *)&__for_end) )
    {
      uid_info = __gnu_cxx::__normal_iterator<proto::BreakoutSyncConnectUidInfo const*,std::vector<proto::BreakoutSyncConnectUidInfo>>::operator*((const __gnu_cxx::__normal_iterator<const proto::BreakoutSyncConnectUidInfo*,std::vector<proto::BreakoutSyncConnectUidInfo> > *const)&__for_begin);
      v10 = proto::BreakoutSnapShot::add_uid_info_list(snap_shot);
      proto::BreakoutSyncConnectUidInfo::operator=(v10, uid_info);
      __gnu_cxx::__normal_iterator<proto::BreakoutSyncConnectUidInfo const*,std::vector<proto::BreakoutSyncConnectUidInfo>>::operator++((__gnu_cxx::__normal_iterator<const proto::BreakoutSyncConnectUidInfo*,std::vector<proto::BreakoutSyncConnectUidInfo> > *const)&__for_begin);
    }
    __for_range_6 = &server_snap_shot->dynamic_object_vec;
    __for_begin._M_current = std::vector<proto::BreakoutPhysicalObject>::begin(&server_snap_shot->dynamic_object_vec)._M_current;
    __for_end._M_current = std::vector<proto::BreakoutPhysicalObject>::end(__for_range_6)._M_current;
    while ( __gnu_cxx::operator!=<proto::BreakoutPhysicalObject const*,std::vector<proto::BreakoutPhysicalObject>>(
              &__for_begin,
              &__for_end) )
    {
      dynamic_object = __gnu_cxx::__normal_iterator<proto::BreakoutPhysicalObject const*,std::vector<proto::BreakoutPhysicalObject>>::operator*(&__for_begin);
      v11 = proto::BreakoutSnapShot::add_dynamic_object_list(snap_shot);
      proto::BreakoutPhysicalObject::operator=(v11, dynamic_object);
      __gnu_cxx::__normal_iterator<proto::BreakoutPhysicalObject const*,std::vector<proto::BreakoutPhysicalObject>>::operator++(&__for_begin);
    }
    v12 = proto::BreakoutSnapShot::mutable_id_index_list(snap_shot);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&server_snap_shot->id_index_vec, v12);
    if ( *(_BYTE *)(((unsigned __int64)&server_snap_shot->raw_client_game_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&server_snap_shot->raw_client_game_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&server_snap_shot->raw_client_game_time);
    }
    proto::BreakoutSnapShot::set_raw_client_game_time(snap_shot, server_snap_shot->raw_client_game_time);
  }
};

// Line 2265: range 0000000013724686-00000000137246F0
uint64_t __cdecl AbilityBreakoutMixin::getGameTimeMs(const AbilityBreakoutMixin *const this)
{
  unsigned __int64 now_ms; // [rsp+18h] [rbp-8h]

  now_ms = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_time_ms_);
  if ( now_ms <= this->start_time_ms_ )
    return 0LL;
  else
    return now_ms - this->start_time_ms_;
};
