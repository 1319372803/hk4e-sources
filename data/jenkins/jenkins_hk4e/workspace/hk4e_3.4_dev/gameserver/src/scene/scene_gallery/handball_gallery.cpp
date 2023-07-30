// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/handball_gallery.cpp

// Line 21: range 0000000016603A08-0000000016603B3D
void __cdecl HandballGallery::toClient(HandballGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryHandballInfo *handball_info; // [rsp+10h] [rbp-40h]
  proto::PlaceInfo *place_info; // [rsp+18h] [rbp-38h]
  proto::Vector *proto_pos; // [rsp+20h] [rbp-30h]
  proto::Vector *proto_rot; // [rsp+28h] [rbp-28h]
  proto::Vector from; // [rsp+30h] [rbp-20h] BYREF

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_ball_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_ball_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_ball_);
  }
  if ( this->is_have_ball_ )
  {
    handball_info = proto::SceneGalleryInfo::mutable_handball_info(client_info);
    proto::SceneGalleryHandballInfo::set_is_have_ball(handball_info, 1);
    place_info = proto::SceneGalleryHandballInfo::mutable_ball_place_info(handball_info);
    proto_pos = proto::PlaceInfo::mutable_pos(place_info);
    Vector3::operator proto::Vector(&from, &this->position_);
    proto::Vector::operator=(proto_pos, &from);
    proto::Vector::~Vector(&from);
    proto_rot = proto::PlaceInfo::mutable_rot(place_info);
    Vector3::operator proto::Vector(&from, &this->rotation_);
    proto::Vector::operator=(proto_rot, &from);
    proto::Vector::~Vector(&from);
  }
};

// Line 36: range 0000000016603B3E-0000000016603E2D
void __cdecl HandballGallery::setHandballPosAndRot(HandballGallery *const this, const Vector3 *pos, const Vector3 *rot)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  v3 = ((_BYTE)this + 44) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_have_ball_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_have_ball_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_have_ball_, v3, v4);
  this->is_have_ball_ = 1;
  if ( *(char *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->position_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 59) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->position_, 12LL);
  }
  if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pos, 12LL);
  }
  this->position_ = *pos;
  if ( (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rotation_, 12LL);
  }
  if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(rot, 12LL);
  }
  this->rotation_ = *rot;
  BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/handball_gallery.cpp",
    "setHandballPosAndRot",
    41);
  v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v10, (const char (*)[14])"handball pos:");
  v6 = operator<<(v5, pos);
  v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", rot:");
  operator<<(v7, rot);
  common::milog::MiLogStream::~MiLogStream(&v10);
};
