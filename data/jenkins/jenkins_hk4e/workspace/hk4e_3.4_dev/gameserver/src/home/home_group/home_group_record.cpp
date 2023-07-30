// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/home_group_record.cpp

// Line 22: range 00000000145DDC5A-00000000145DDD84
void __cdecl HomeGroupPlayerInfo::fromBin(
        HomeGroupPlayerInfo *const this,
        const proto::HomeGroupPlayerInfoBin *player_info_bin)
{
  uint32_t v2; // edx
  const std::string *v3; // rax
  uint32_t v4; // edx
  const proto::ProfilePictureBin *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax

  v2 = proto::HomeGroupPlayerInfoBin::uid(player_info_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = v2;
  v3 = proto::HomeGroupPlayerInfoBin::nickname[abi:cxx11](player_info_bin);
  std::string::operator=(&this->nickname, v3);
  v4 = proto::HomeGroupPlayerInfoBin::player_level(player_info_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_level);
  }
  this->player_level = v4;
  v5 = proto::HomeGroupPlayerInfoBin::profile_picture(player_info_bin);
  ProfilePicture::fromBin(&this->profile_picture, v5);
  v6 = proto::HomeGroupPlayerInfoBin::online_id[abi:cxx11](player_info_bin);
  std::string::operator=(&this->online_id, v6);
  v7 = proto::HomeGroupPlayerInfoBin::psn_id[abi:cxx11](player_info_bin);
  std::string::operator=(&this->psn_id, v7);
};

// Line 32: range 00000000145DDD86-00000000145DDE8D
void __cdecl HomeGroupPlayerInfo::toBin(
        const HomeGroupPlayerInfo *const this,
        proto::HomeGroupPlayerInfoBin *player_info_bin)
{
  proto::ProfilePictureBin *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeGroupPlayerInfoBin::set_uid(player_info_bin, this->uid);
  proto::HomeGroupPlayerInfoBin::set_nickname(player_info_bin, &this->nickname);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeGroupPlayerInfoBin::set_player_level(player_info_bin, this->player_level);
  v2 = proto::HomeGroupPlayerInfoBin::mutable_profile_picture(player_info_bin);
  ProfilePicture::toBin(&this->profile_picture, v2);
  proto::HomeGroupPlayerInfoBin::set_online_id(player_info_bin, &this->online_id);
  proto::HomeGroupPlayerInfoBin::set_psn_id(player_info_bin, &this->psn_id);
};

// Line 42: range 00000000145DDE8E-00000000145DDF95
void __cdecl HomeGroupPlayerInfo::toClient(
        const HomeGroupPlayerInfo *const this,
        proto::HomeGroupPlayerInfo *player_info)
{
  proto::ProfilePicture *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeGroupPlayerInfo::set_uid(player_info, this->uid);
  proto::HomeGroupPlayerInfo::set_nickname(player_info, &this->nickname);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeGroupPlayerInfo::set_player_level(player_info, this->player_level);
  v2 = proto::HomeGroupPlayerInfo::mutable_profile_picture(player_info);
  ProfilePicture::toClient(&this->profile_picture, v2);
  proto::HomeGroupPlayerInfo::set_online_id(player_info, &this->online_id);
  proto::HomeGroupPlayerInfo::set_psn_id(player_info, &this->psn_id);
};

// Line 52: range 00000000145DDF96-00000000145DE1D6
void __cdecl HomeGroupPlayerInfo::fromPlayer(HomeGroupPlayerInfo *const this, Player *player)
{
  uint32_t Uid; // edx
  PlayerBasicComp *BasicComp; // rax
  const std::string *v4; // rax
  PlayerBasicComp *v5; // rax
  uint32_t Level; // edx
  PlayerBasicComp *v7; // rax
  ProfilePicture *ProfilePicture; // rdx
  std::string v9; // [rsp+10h] [rbp-20h] BYREF

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = Uid;
  BasicComp = Player::getBasicComp(player);
  v4 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
  std::string::operator=(&this->nickname, v4);
  v5 = Player::getBasicComp(player);
  Level = PlayerBasicComp::getLevel(v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_level);
  }
  this->player_level = Level;
  v7 = Player::getBasicComp(player);
  ProfilePicture = (ProfilePicture *)PlayerBasicComp::getProfilePicture(v7);
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->profile_picture >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->profile_picture >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->profile_picture.costume_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->profile_picture.costume_id + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->profile_picture, 8LL);
  }
  if ( ((unsigned __int8)ProfilePicture & 7) >= *(_BYTE *)(((unsigned __int64)ProfilePicture >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)ProfilePicture >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&ProfilePicture->costume_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ProfilePicture + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&ProfilePicture->costume_id + 3) >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load_n(ProfilePicture, 8LL);
  }
  this->profile_picture = *ProfilePicture;
  Player::getOnlineId[abi:cxx11](&v9, player);
  std::string::operator=(&this->online_id, &v9);
  std::string::~string(&v9);
  Player::getPsnId[abi:cxx11](&v9, player);
  std::string::operator=(&this->psn_id, &v9);
  std::string::~string(&v9);
};

// Line 62: range 00000000145DE1D8-00000000145DE236
int32_t __cdecl BaseHomeGroupRecord::toClient(
        const BaseHomeGroupRecord *const this,
        proto::HomeGroupRecord *home_group_record)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeGroupRecord::set_group_id(home_group_record, this->group_id_);
  return 0;
};
