// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/world.hpp

// Line 19: range 0000000013EE8120-0000000013EE81B7
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<google::protobuf::Message>(
        World *const this,
        const google::protobuf::Message *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<google::protobuf::Message>(google::protobuf::Message const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<google::protobuf::Message>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 00000000151AEFD8-00000000151AF06F
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::AvatarChangeCostumeNotify>(
        World *const this,
        const proto::AvatarChangeCostumeNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::AvatarChangeCostumeNotify>(proto::AvatarChangeCostumeNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::AvatarChangeCostumeNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000014F89DE0-0000000014F89E77
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::ChannellerSlabLoopDungeonChallengeInfoNotify>(
        World *const this,
        const proto::ChannellerSlabLoopDungeonChallengeInfoNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::ChannellerSlabLoopDungeonChallengeInfoNotify>(proto::ChannellerSlabLoopDungeonChallengeInfoNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::ChannellerSlabLoopDungeonChallengeInfoNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 00000000180FF7A2-00000000180FF839
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::ChatChannelUpdateNotify>(
        World *const this,
        const proto::ChatChannelUpdateNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::ChatChannelUpdateNotify>(proto::ChatChannelUpdateNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::ChatChannelUpdateNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000015D6B1B0-0000000015D6B247
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::DeathZoneInfoNotify>(
        World *const this,
        const proto::DeathZoneInfoNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::DeathZoneInfoNotify>(proto::DeathZoneInfoNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::DeathZoneInfoNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000013EEF8B8-0000000013EEF94F
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::DeshretObeliskChestInfoNotify>(
        World *const this,
        const proto::DeshretObeliskChestInfoNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::DeshretObeliskChestInfoNotify>(proto::DeshretObeliskChestInfoNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::DeshretObeliskChestInfoNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 00000000176E47C0-00000000176E4857
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::DraftGuestReplyInviteNotify>(
        World *const this,
        const proto::DraftGuestReplyInviteNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::DraftGuestReplyInviteNotify>(proto::DraftGuestReplyInviteNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::DraftGuestReplyInviteNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 00000000176E4D86-00000000176E4E1D
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::DraftGuestReplyTwiceConfirmNotify>(
        World *const this,
        const proto::DraftGuestReplyTwiceConfirmNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::DraftGuestReplyTwiceConfirmNotify>(proto::DraftGuestReplyTwiceConfirmNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::DraftGuestReplyTwiceConfirmNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 00000000176E48FC-00000000176E4993
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::DraftInviteResultNotify>(
        World *const this,
        const proto::DraftInviteResultNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::DraftInviteResultNotify>(proto::DraftInviteResultNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::DraftInviteResultNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 00000000176E4C4A-00000000176E4CE1
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::DraftOwnerTwiceConfirmNotify>(
        World *const this,
        const proto::DraftOwnerTwiceConfirmNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::DraftOwnerTwiceConfirmNotify>(proto::DraftOwnerTwiceConfirmNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::DraftOwnerTwiceConfirmNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 000000001667F648-000000001667F6DF
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::EffigyChallengeInfoNotify>(
        World *const this,
        const proto::EffigyChallengeInfoNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::EffigyChallengeInfoNotify>(proto::EffigyChallengeInfoNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::EffigyChallengeInfoNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000013EEDF8A-0000000013EEE021
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::LevelTagDataNotify>(
        World *const this,
        const proto::LevelTagDataNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::LevelTagDataNotify>(proto::LevelTagDataNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::LevelTagDataNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000013EEDCB4-0000000013EEDD4B
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::MapAreaChangeNotify>(
        World *const this,
        const proto::MapAreaChangeNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::MapAreaChangeNotify>(proto::MapAreaChangeNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::MapAreaChangeNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000016DA1392-0000000016DA1429
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::MpPlayGuestReplyNotify>(
        World *const this,
        const proto::MpPlayGuestReplyNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::MpPlayGuestReplyNotify>(proto::MpPlayGuestReplyNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::MpPlayGuestReplyNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000016DA14CE-0000000016DA1565
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::MpPlayInviteResultNotify>(
        World *const this,
        const proto::MpPlayInviteResultNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::MpPlayInviteResultNotify>(proto::MpPlayInviteResultNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::MpPlayInviteResultNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000016DA08F8-0000000016DA098F
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::MpPlayPrepareInterruptNotify>(
        World *const this,
        const proto::MpPlayPrepareInterruptNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::MpPlayPrepareInterruptNotify>(proto::MpPlayPrepareInterruptNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::MpPlayPrepareInterruptNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000016DA07BC-0000000016DA0853
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::MpPlayPrepareNotify>(
        World *const this,
        const proto::MpPlayPrepareNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::MpPlayPrepareNotify>(proto::MpPlayPrepareNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::MpPlayPrepareNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 00000000180FF014-00000000180FF0AB
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::PlayerChatNotify>(
        World *const this,
        const proto::PlayerChatNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::PlayerChatNotify>(proto::PlayerChatNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::PlayerChatNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000013EED7E0-0000000013EED877
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::PlayerWorldSceneInfoListNotify>(
        World *const this,
        const proto::PlayerWorldSceneInfoListNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::PlayerWorldSceneInfoListNotify>(proto::PlayerWorldSceneInfoListNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::PlayerWorldSceneInfoListNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000015D6734A-0000000015D673E1
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::RegionSearchNotify>(
        World *const this,
        const proto::RegionSearchNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::RegionSearchNotify>(proto::RegionSearchNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::RegionSearchNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000016DABDD2-0000000016DABE69
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::ScenePlayGuestReplyNotify>(
        World *const this,
        const proto::ScenePlayGuestReplyNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::ScenePlayGuestReplyNotify>(proto::ScenePlayGuestReplyNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::ScenePlayGuestReplyNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000016DABF0E-0000000016DABFA5
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::ScenePlayInviteResultNotify>(
        World *const this,
        const proto::ScenePlayInviteResultNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::ScenePlayInviteResultNotify>(proto::ScenePlayInviteResultNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::ScenePlayInviteResultNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000015D49AD6-0000000015D49B6D
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::ScenePlayerLocationNotify>(
        World *const this,
        const proto::ScenePlayerLocationNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::ScenePlayerLocationNotify>(proto::ScenePlayerLocationNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::ScenePlayerLocationNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 0000000013EEF9F4-0000000013EEFA8B
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::WorldChestOpenNotify>(
        World *const this,
        const proto::WorldChestOpenNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::WorldChestOpenNotify>(proto::WorldChestOpenNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::WorldChestOpenNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 19: range 00000000180B9822-00000000180B98B9
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl World::notifyAllPlayer<proto::WorldDataNotify>(
        World *const this,
        const proto::WorldDataNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int World::notifyAllPlayer<proto::WorldDataNotify>(proto::WorldDataNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(World::notifyAllPlayer<proto::WorldDataNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 21: range 0000000013EE8080-0000000013EE811F
ForeachPolicy __cdecl World::notifyAllPlayer<google::protobuf::Message>(google::protobuf::Message const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<google::protobuf::Message>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 00000000151AEF34-00000000151AEFD6
ForeachPolicy __cdecl World::notifyAllPlayer<proto::AvatarChangeCostumeNotify>(proto::AvatarChangeCostumeNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::AvatarChangeCostumeNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 00000000180FF6FE-00000000180FF7A0
ForeachPolicy __cdecl World::notifyAllPlayer<proto::ChatChannelUpdateNotify>(proto::ChatChannelUpdateNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::ChatChannelUpdateNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000015D6B10C-0000000015D6B1AE
ForeachPolicy __cdecl World::notifyAllPlayer<proto::DeathZoneInfoNotify>(proto::DeathZoneInfoNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::DeathZoneInfoNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000013EEF814-0000000013EEF8B6
ForeachPolicy __cdecl World::notifyAllPlayer<proto::DeshretObeliskChestInfoNotify>(proto::DeshretObeliskChestInfoNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::DeshretObeliskChestInfoNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 00000000176E471C-00000000176E47BE
ForeachPolicy __cdecl World::notifyAllPlayer<proto::DraftGuestReplyInviteNotify>(proto::DraftGuestReplyInviteNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::DraftGuestReplyInviteNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 00000000176E4CE2-00000000176E4D84
ForeachPolicy __cdecl World::notifyAllPlayer<proto::DraftGuestReplyTwiceConfirmNotify>(proto::DraftGuestReplyTwiceConfirmNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::DraftGuestReplyTwiceConfirmNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 00000000176E4858-00000000176E48FA
ForeachPolicy __cdecl World::notifyAllPlayer<proto::DraftInviteResultNotify>(proto::DraftInviteResultNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::DraftInviteResultNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 00000000176E4BA6-00000000176E4C48
ForeachPolicy __cdecl World::notifyAllPlayer<proto::DraftOwnerTwiceConfirmNotify>(proto::DraftOwnerTwiceConfirmNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::DraftOwnerTwiceConfirmNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 000000001667F5A4-000000001667F646
ForeachPolicy __cdecl World::notifyAllPlayer<proto::EffigyChallengeInfoNotify>(proto::EffigyChallengeInfoNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::EffigyChallengeInfoNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000013EEDEE6-0000000013EEDF88
ForeachPolicy __cdecl World::notifyAllPlayer<proto::LevelTagDataNotify>(proto::LevelTagDataNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::LevelTagDataNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000013EEDC10-0000000013EEDCB2
ForeachPolicy __cdecl World::notifyAllPlayer<proto::MapAreaChangeNotify>(proto::MapAreaChangeNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::MapAreaChangeNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000016DA12EE-0000000016DA1390
ForeachPolicy __cdecl World::notifyAllPlayer<proto::MpPlayGuestReplyNotify>(proto::MpPlayGuestReplyNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::MpPlayGuestReplyNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000016DA142A-0000000016DA14CC
ForeachPolicy __cdecl World::notifyAllPlayer<proto::MpPlayInviteResultNotify>(proto::MpPlayInviteResultNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::MpPlayInviteResultNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000016DA0854-0000000016DA08F6
ForeachPolicy __cdecl World::notifyAllPlayer<proto::MpPlayPrepareInterruptNotify>(proto::MpPlayPrepareInterruptNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::MpPlayPrepareInterruptNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000016DA0718-0000000016DA07BA
ForeachPolicy __cdecl World::notifyAllPlayer<proto::MpPlayPrepareNotify>(proto::MpPlayPrepareNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::MpPlayPrepareNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 00000000180FEF70-00000000180FF012
ForeachPolicy __cdecl World::notifyAllPlayer<proto::PlayerChatNotify>(proto::PlayerChatNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::PlayerChatNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000015D672A6-0000000015D67348
ForeachPolicy __cdecl World::notifyAllPlayer<proto::RegionSearchNotify>(proto::RegionSearchNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::RegionSearchNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000016DABD2E-0000000016DABDD0
ForeachPolicy __cdecl World::notifyAllPlayer<proto::ScenePlayGuestReplyNotify>(proto::ScenePlayGuestReplyNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::ScenePlayGuestReplyNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000016DABE6A-0000000016DABF0C
ForeachPolicy __cdecl World::notifyAllPlayer<proto::ScenePlayInviteResultNotify>(proto::ScenePlayInviteResultNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::ScenePlayInviteResultNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000015D49A32-0000000015D49AD4
ForeachPolicy __cdecl World::notifyAllPlayer<proto::ScenePlayerLocationNotify>(proto::ScenePlayerLocationNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::ScenePlayerLocationNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 0000000013EEF950-0000000013EEF9F2
ForeachPolicy __cdecl World::notifyAllPlayer<proto::WorldChestOpenNotify>(proto::WorldChestOpenNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::WorldChestOpenNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 21: range 00000000180B977E-00000000180B9820
ForeachPolicy __cdecl World::notifyAllPlayer<proto::WorldDataNotify>(proto::WorldDataNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::WorldDataNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 33: range 00000000180B99F4-00000000180B9BCA
__int64 __fastcall World::notifyChatChannelPlayer<proto::ChatChannelUpdateNotify>(
        World *const this,
        const proto::ChatChannelUpdateNotify *proto,
        uint32_t channel_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  __int64 result; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *v7; // rax
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-90h] BYREF
  char v10[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 channel_id:33";
  *(_QWORD *)(v3 + 16) = World::notifyChatChannelPlayer<proto::ChatChannelUpdateNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = channel_id;
  if ( *(_DWORD *)(v3 + 32) )
  {
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>>,unsigned int>(
           &this->chat_channel_uid_map_,
           (const unsigned int *)(v3 + 32)) )
    {
      v7 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
             &this->chat_channel_uid_map_,
             (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
      std::function<ForeachPolicy ()(Player &)>::function<int World::notifyChatChannelPlayer<proto::ChatChannelUpdateNotify>(proto::ChatChannelUpdateNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
        &p_func,
        (World::notifyChatChannelPlayer<proto::ChatChannelUpdateNotify>::<lambda(Player&)>)__PAIR128__(
                                                                                             (unsigned __int64)v7,
                                                                                             (unsigned __int64)proto));
      World::foreachPlayer(this, &p_func);
      std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    }
    result = 0LL;
  }
  else
  {
    World::notifyAllPlayer<proto::ChatChannelUpdateNotify>(this, proto, 0);
    result = 0LL;
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
  return result;
};

// Line 33: range 00000000180B94AC-00000000180B9682
__int64 __fastcall World::notifyChatChannelPlayer<proto::PlayerChatNotify>(
        World *const this,
        const proto::PlayerChatNotify *proto,
        uint32_t channel_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  __int64 result; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *v7; // rax
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-90h] BYREF
  char v10[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 channel_id:33";
  *(_QWORD *)(v3 + 16) = World::notifyChatChannelPlayer<proto::PlayerChatNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = channel_id;
  if ( *(_DWORD *)(v3 + 32) )
  {
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>>,unsigned int>(
           &this->chat_channel_uid_map_,
           (const unsigned int *)(v3 + 32)) )
    {
      v7 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
             &this->chat_channel_uid_map_,
             (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
      std::function<ForeachPolicy ()(Player &)>::function<int World::notifyChatChannelPlayer<proto::PlayerChatNotify>(proto::PlayerChatNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
        &p_func,
        (World::notifyChatChannelPlayer<proto::PlayerChatNotify>::<lambda(Player&)>)__PAIR128__(
                                                                                      (unsigned __int64)v7,
                                                                                      (unsigned __int64)proto));
      World::foreachPlayer(this, &p_func);
      std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    }
    result = 0LL;
  }
  else
  {
    World::notifyAllPlayer<proto::PlayerChatNotify>(this, proto, 0);
    result = 0LL;
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
  return result;
};

// Line 45: range 00000000180B9954-00000000180B99F3
ForeachPolicy __cdecl World::notifyChatChannelPlayer<proto::ChatChannelUpdateNotify>(proto::ChatChannelUpdateNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyChatChannelPlayer<proto::ChatChannelUpdateNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  unsigned int value; // [rsp+1Ch] [rbp-4h] BYREF

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__channel_uid_set >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(this->__channel_uid_set, &value) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 45: range 00000000180B940C-00000000180B94AB
ForeachPolicy __cdecl World::notifyChatChannelPlayer<proto::PlayerChatNotify>(proto::PlayerChatNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyChatChannelPlayer<proto::PlayerChatNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  unsigned int value; // [rsp+1Ch] [rbp-4h] BYREF

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__channel_uid_set >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(this->__channel_uid_set, &value) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 820: range 0000000014F89D3C-0000000014F89DDE
ForeachPolicy __cdecl World::notifyAllPlayer<proto::ChannellerSlabLoopDungeonChallengeInfoNotify>(proto::ChannellerSlabLoopDungeonChallengeInfoNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::ChannellerSlabLoopDungeonChallengeInfoNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};

// Line 1009: range 0000000013EED73C-0000000013EED7DE
ForeachPolicy __cdecl World::notifyAllPlayer<proto::PlayerWorldSceneInfoListNotify>(proto::PlayerWorldSceneInfoListNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayer<proto::PlayerWorldSceneInfoListNotify>::<lambda(Player&)> *const this,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != this->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, this->__proto);
  }
  return 0;
};
