// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_sight_comp.cpp

// Line 17: range 0000000015CEF1C8-0000000015CEF4CE
int32_t __cdecl SceneSightComp::init(SceneSightComp *const this, const Vector2 *begin_pos, const Vector2 *scene_size)
{
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->begin_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->begin_pos_.y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->begin_pos_.y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->begin_pos_, 8LL);
  }
  if ( ((unsigned __int8)begin_pos & 7) >= *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&begin_pos->y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)begin_pos + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&begin_pos->y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(begin_pos, 8LL);
  }
  this->begin_pos_ = *begin_pos;
  if ( (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->scene_size_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->scene_size_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->scene_size_.y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->scene_size_.y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->scene_size_, 8LL);
  }
  if ( ((unsigned __int8)scene_size & 7) >= *(_BYTE *)(((unsigned __int64)scene_size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)scene_size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&scene_size->y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)scene_size + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_size->y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(scene_size, 8LL);
  }
  this->scene_size_ = *scene_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->scene_size_.x != 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_size_.y >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->scene_size_.y >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->scene_size_.y != 0.0 )
      return 0;
  }
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_sight_comp.cpp",
    "init",
    22);
  common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
    &v5,
    (const char (*)[41])"0 == scene_size_.x || 0 == scene_size_.y");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return -1;
};
