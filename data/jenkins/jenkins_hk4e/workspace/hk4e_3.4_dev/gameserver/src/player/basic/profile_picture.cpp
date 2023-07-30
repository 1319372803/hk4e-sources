// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/basic/profile_picture.cpp

// Line 20: range 00000000150B2984-00000000150B2A37
int32_t __cdecl ProfilePicture::fromProto(ProfilePicture *const this, const proto::ProfilePicture *profile_picture)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  const proto::ProfilePicture *profile_picturea; // [rsp+0h] [rbp-10h]

  profile_picturea = profile_picture;
  v2 = proto::ProfilePicture::avatar_id(profile_picture);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(profile_picture) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, profile_picture, v4);
  this->avatar_id = v2;
  v5 = proto::ProfilePicture::costume_id(profile_picturea);
  v6 = *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000);
  LOBYTE(profile_picture) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->costume_id, profile_picture, v7);
  this->costume_id = v5;
  return 0;
};

// Line 27: range 00000000150B2A38-00000000150B2AE9
int32_t __cdecl ProfilePicture::toClient(const ProfilePicture *const this, proto::ProfilePicture *profile_picture)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::ProfilePicture::set_avatar_id(profile_picture, this->avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->costume_id);
  }
  proto::ProfilePicture::set_costume_id(profile_picture, this->costume_id);
  return 0;
};

// Line 34: range 00000000150B2AEA-00000000150B2B9D
int32_t __cdecl ProfilePicture::fromBin(
        ProfilePicture *const this,
        const proto::ProfilePictureBin *profile_picture_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  const proto::ProfilePictureBin *profile_picture_bina; // [rsp+0h] [rbp-10h]

  profile_picture_bina = profile_picture_bin;
  v2 = proto::ProfilePictureBin::avatar_id(profile_picture_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(profile_picture_bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, profile_picture_bin, v4);
  this->avatar_id = v2;
  v5 = proto::ProfilePictureBin::costume_id(profile_picture_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000);
  LOBYTE(profile_picture_bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->costume_id, profile_picture_bin, v7);
  this->costume_id = v5;
  return 0;
};

// Line 41: range 00000000150B2B9E-00000000150B2C4F
int32_t __cdecl ProfilePicture::toBin(const ProfilePicture *const this, proto::ProfilePictureBin *profile_picture_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::ProfilePictureBin::set_avatar_id(profile_picture_bin, this->avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->costume_id);
  }
  proto::ProfilePictureBin::set_costume_id(profile_picture_bin, this->costume_id);
  return 0;
};
