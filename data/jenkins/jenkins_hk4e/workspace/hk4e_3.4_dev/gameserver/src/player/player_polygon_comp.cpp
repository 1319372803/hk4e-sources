// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_polygon_comp.cpp

// Line 23: range 00000000179B7890-00000000179B78A2
int32_t __cdecl PlayerPolygonComp::fromBin(PlayerPolygonComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  return 0;
};

// Line 28: range 00000000179B78A4-00000000179B78B6
int32_t __cdecl PlayerPolygonComp::toBin(PlayerPolygonComp *const this, proto::PlayerDataBin *player_data_bin)
{
  return 0;
};

// Line 33: range 00000000179B78B8-00000000179B79E7
int32_t __cdecl PlayerPolygonComp::start(PlayerPolygonComp *const this)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( common::tools::MiTimer::isActive(&this->polygon_timer_)
    || !PlayerTimer::startMS(&this->polygon_timer_, 0x3E8u, 1, "./src/player/player_polygon_comp.cpp", "start", 34) )
  {
    return 0;
  }
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/player_polygon_comp.cpp",
    "start",
    36);
  v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v5,
         (const char (*)[34])"polygon_timer_ start failed, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return -1;
};

// Line 43: range 00000000179B79E8-00000000179B8312
void __cdecl PlayerPolygonComp::updatePolygon(PlayerPolygonComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  float x; // xmm0_4
  float z; // xmm0_4
  double v10; // xmm0_8
  float y; // xmm0_4
  __int64 v12; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  Player *player; // rsi
  uint32_t v20; // ecx
  char v21; // al
  PlayerRegionalPlayComp *RegionalPlayComp; // rcx
  common::milog::MiLogStream *v23; // rax
  bool is_need_update; // [rsp+17h] [rbp-D9h]
  const Vector3 *pos; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 cur_polygon_id:78 64 16 12 scene_ptr:44 96 16 13 avatar_ptr:51";
  *(_QWORD *)(v2 + 16) = PlayerPolygonComp::updatePolygon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_polygon_comp.cpp",
      "updatePolygon",
      47);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v26,
           (const char (*)[27])"scene_ptr is null, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 96));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_polygon_comp.cpp",
        "updatePolygon",
        54);
      v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v26,
             (const char (*)[28])"avatar_ptr is null, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      is_need_update = 0;
      v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      pos = Entity::getPosition((const Entity *const)v7);
      if ( getPlaneDistance(&this->check_polygon_position_, pos) > 0.5 )
      {
        if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(pos);
        }
        x = pos->x;
        if ( *(_BYTE *)(((unsigned __int64)&this->check_polygon_position_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->check_polygon_position_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(
            &this->check_polygon_position_,
            ((unsigned __int8)pos & 7u) + 3,
            &this->check_polygon_position_);
        }
        this->check_polygon_position_.x = x;
        if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&pos->z);
        }
        z = pos->z;
        if ( *(_BYTE *)(((unsigned __int64)&this->check_polygon_position_.z >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->check_polygon_position_.z >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(
            &this->check_polygon_position_.z,
            (((_BYTE)pos + 8) & 7u) + 3,
            &this->check_polygon_position_.z);
        }
        this->check_polygon_position_.z = z;
        is_need_update = 1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->check_polygon_position_.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_polygon_position_.y >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->check_polygon_position_.y);
      }
      *(float *)&v10 = this->check_polygon_position_.y;
      if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
      {
        v10 = __asan_report_load4(&pos->y);
      }
      if ( std::fabs(*(float *)&v10 - pos->y) > 10.0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&pos->y);
        }
        y = pos->y;
        v12 = (*(_BYTE *)(((unsigned __int64)&this->check_polygon_position_.y >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_polygon_position_.y >> 3) + 0x7FFF8000));
        if ( (_BYTE)v12 )
          __asan_report_store4(&this->check_polygon_position_.y, (((_BYTE)this + 36) & 7u) + 3, v12);
        this->check_polygon_position_.y = y;
        is_need_update = 1;
      }
      if ( is_need_update )
      {
        v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        *(_DWORD *)(v2 + 48) = Scene::getPolygonIdByPos(v13, pos);
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_polygon_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_polygon_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_polygon_id_);
        }
        if ( this->cur_polygon_id_ != *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/player_polygon_comp.cpp",
            "updatePolygon",
            81);
          v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v26,
                  (const char (*)[15])"leave polygon:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->cur_polygon_id_);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v15,
                  (const char (*)[16])" enter polygon:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 48));
          v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          player = this->player_;
          operator<<(v18, player);
          common::milog::MiLogStream::~MiLogStream(&v26);
          v20 = *(_DWORD *)(v2 + 48);
          v21 = *(_BYTE *)(((unsigned __int64)&this->cur_polygon_id_ >> 3) + 0x7FFF8000);
          if ( v21 != 0 && v21 <= 3 )
          {
            LOBYTE(player) = v21 != 0;
            __asan_report_store4(&this->cur_polygon_id_, player, &this->cur_polygon_id_);
          }
          this->cur_polygon_id_ = v20;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_polygon_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_polygon_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->cur_polygon_id_);
          }
          PlayerRegionalPlayComp::onChangePolygon(RegionalPlayComp, this->cur_polygon_id_);
        }
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_polygon_comp.cpp",
          "updatePolygon",
          85);
        v23 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v26,
                (const char (*)[30])"updatePolygon cur_polygon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  if ( v27 == (char *)v2 )
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
