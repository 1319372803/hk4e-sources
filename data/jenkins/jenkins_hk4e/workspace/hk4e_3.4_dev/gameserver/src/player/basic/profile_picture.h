// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/basic/profile_picture.h

// Line 22: range 00000000146255A6-000000001462563B
void __cdecl ProfilePicture::ProfilePicture(ProfilePicture *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->avatar_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->costume_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->costume_id = 0;
};
