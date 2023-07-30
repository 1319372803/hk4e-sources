// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home.hpp

// Line 20: range 0000000016D97A52-0000000016D97AE9
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::HomeAvatarCostumeChangeNotify>(
        Home *const this,
        const proto::HomeAvatarCostumeChangeNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::HomeAvatarCostumeChangeNotify>(proto::HomeAvatarCostumeChangeNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::HomeAvatarCostumeChangeNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 20: range 0000000014645D58-0000000014645DEF
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::HomeAvatarRewardEventNotify>(
        Home *const this,
        const proto::HomeAvatarRewardEventNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::HomeAvatarRewardEventNotify>(proto::HomeAvatarRewardEventNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::HomeAvatarRewardEventNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 20: range 0000000014646098-000000001464612F
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::HomeAvatarSummonAllEventNotify>(
        Home *const this,
        const proto::HomeAvatarSummonAllEventNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::HomeAvatarSummonAllEventNotify>(proto::HomeAvatarSummonAllEventNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::HomeAvatarSummonAllEventNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 20: range 0000000014645726-00000000146457BD
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::HomeBlockNotify>(
        Home *const this,
        const proto::HomeBlockNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::HomeBlockNotify>(proto::HomeBlockNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::HomeBlockNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 20: range 000000001465834A-00000000146583E1
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::HomeBlueprintInfoNotify>(
        Home *const this,
        const proto::HomeBlueprintInfoNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::HomeBlueprintInfoNotify>(proto::HomeBlueprintInfoNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::HomeBlueprintInfoNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 20: range 000000001465D646-000000001465D6DD
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::HomeCustomFurnitureInfoNotify>(
        Home *const this,
        const proto::HomeCustomFurnitureInfoNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::HomeCustomFurnitureInfoNotify>(proto::HomeCustomFurnitureInfoNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::HomeCustomFurnitureInfoNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 20: range 000000001466048E-0000000014660525
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::HomeFishFarmingInfoNotify>(
        Home *const this,
        const proto::HomeFishFarmingInfoNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::HomeFishFarmingInfoNotify>(proto::HomeFishFarmingInfoNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::HomeFishFarmingInfoNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 20: range 00000000146568D2-0000000014656969
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::HomeMarkPointNotify>(
        Home *const this,
        const proto::HomeMarkPointNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::HomeMarkPointNotify>(proto::HomeMarkPointNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::HomeMarkPointNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 20: range 00000000169175E0-0000000016917677
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::HomePictureFrameInfoNotify>(
        Home *const this,
        const proto::HomePictureFrameInfoNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::HomePictureFrameInfoNotify>(proto::HomePictureFrameInfoNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::HomePictureFrameInfoNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 20: range 0000000016918DFC-0000000016918E93
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::HomePlantFieldNotify>(
        Home *const this,
        const proto::HomePlantFieldNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::HomePlantFieldNotify>(proto::HomePlantFieldNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::HomePlantFieldNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 20: range 00000000146448B0-0000000014644947
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::HomePreChangeEditModeNotify>(
        Home *const this,
        const proto::HomePreChangeEditModeNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::HomePreChangeEditModeNotify>(proto::HomePreChangeEditModeNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::HomePreChangeEditModeNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 20: range 000000001464660C-00000000146466A3
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Home::notifyAllPlayer<proto::PlayerGameTimeNotify>(
        Home *const this,
        const proto::PlayerGameTimeNotify *proto,
        uint32_t exclude_uid)
{
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Player &)>::function<int Home::notifyAllPlayer<proto::PlayerGameTimeNotify>(proto::PlayerGameTimeNotify const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(Home::notifyAllPlayer<proto::PlayerGameTimeNotify>::<lambda(Player&)> *)(&exclude_uid - 2));
  Home::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  return 0;
};

// Line 22: range 0000000016D979AE-0000000016D97A50
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::HomeAvatarCostumeChangeNotify>(proto::HomeAvatarCostumeChangeNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::HomeAvatarCostumeChangeNotify>::<lambda(Player&)> *const this,
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

// Line 22: range 0000000014645CB4-0000000014645D56
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::HomeAvatarRewardEventNotify>(proto::HomeAvatarRewardEventNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::HomeAvatarRewardEventNotify>::<lambda(Player&)> *const this,
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

// Line 22: range 0000000014645FF4-0000000014646096
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::HomeAvatarSummonAllEventNotify>(proto::HomeAvatarSummonAllEventNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::HomeAvatarSummonAllEventNotify>::<lambda(Player&)> *const this,
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

// Line 22: range 0000000014645682-0000000014645724
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::HomeBlockNotify>(proto::HomeBlockNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::HomeBlockNotify>::<lambda(Player&)> *const this,
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

// Line 22: range 00000000146582A6-0000000014658348
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::HomeBlueprintInfoNotify>(proto::HomeBlueprintInfoNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::HomeBlueprintInfoNotify>::<lambda(Player&)> *const this,
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

// Line 22: range 000000001465D5A2-000000001465D644
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::HomeCustomFurnitureInfoNotify>(proto::HomeCustomFurnitureInfoNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::HomeCustomFurnitureInfoNotify>::<lambda(Player&)> *const this,
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

// Line 22: range 00000000146603EA-000000001466048C
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::HomeFishFarmingInfoNotify>(proto::HomeFishFarmingInfoNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::HomeFishFarmingInfoNotify>::<lambda(Player&)> *const this,
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

// Line 22: range 000000001465682E-00000000146568D0
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::HomeMarkPointNotify>(proto::HomeMarkPointNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::HomeMarkPointNotify>::<lambda(Player&)> *const this,
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

// Line 22: range 000000001691753C-00000000169175DE
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::HomePictureFrameInfoNotify>(proto::HomePictureFrameInfoNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::HomePictureFrameInfoNotify>::<lambda(Player&)> *const this,
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

// Line 22: range 0000000016918D58-0000000016918DFA
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::HomePlantFieldNotify>(proto::HomePlantFieldNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::HomePlantFieldNotify>::<lambda(Player&)> *const this,
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

// Line 22: range 000000001464480C-00000000146448AE
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::HomePreChangeEditModeNotify>(proto::HomePreChangeEditModeNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::HomePreChangeEditModeNotify>::<lambda(Player&)> *const this,
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

// Line 513: range 0000000014646568-000000001464660A
ForeachPolicy __cdecl Home::notifyAllPlayer<proto::PlayerGameTimeNotify>(proto::PlayerGameTimeNotify const&,unsigned int)::{lambda(Player &)#1}::operator()(
        const Home::notifyAllPlayer<proto::PlayerGameTimeNotify>::<lambda(Player&)> *const this,
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
