// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/home/furniture_make.h

// Line 51: range 000000001461D1EC-000000001461D399
void __cdecl FurnitureMakeData::FurnitureMakeData(FurnitureMakeData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->make_id_ = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->accelerate_time_, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->accelerate_time_ = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->accelerate_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->accelerate_count_, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->accelerate_count_ = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->begin_time_, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->begin_time_ = 0;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->avatar_id_, (((_BYTE)this + 16) & 7u) + 3, v5);
  this->avatar_id_ = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->dur_time_, (((_BYTE)this + 20) & 7u) + 3, v6);
  this->dur_time_ = 0;
};

// Line 61: range 000000001461D39A-000000001461D475
uint32_t __cdecl FurnitureMakeData::getFinishTime(const FurnitureMakeData *const this)
{
  uint32_t begin_time; // ecx
  uint32_t v2; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->begin_time_);
  }
  begin_time = this->begin_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dur_time_);
  }
  v2 = this->dur_time_ + begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->accelerate_time_);
  }
  return v2 - this->accelerate_time_;
};

// Line 62: range 000000001461D476-000000001461D4C5
uint32_t __cdecl FurnitureMakeData::getAccelerateTime(const FurnitureMakeData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->accelerate_time_);
  }
  return this->accelerate_time_;
};

// Line 63: range 0000000016D630E2-0000000016D63131
uint32_t __cdecl FurnitureMakeData::getAccelerateCount(const FurnitureMakeData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->accelerate_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->accelerate_count_);
  }
  return this->accelerate_count_;
};

// Line 64: range 0000000016D63132-0000000016D63181
uint32_t __cdecl FurnitureMakeData::getAvatarId(const FurnitureMakeData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};

// Line 65: range 000000001461D4C6-000000001461D4E8
bool __cdecl FurnitureMakeData::isFinish(const FurnitureMakeData *const this, uint32_t now)
{
  return now >= FurnitureMakeData::getFinishTime(this);
};

// Line 66: range 0000000016D63182-0000000016D631D7
void __cdecl FurnitureMakeData::setAvatarIdByGm(FurnitureMakeData *const this, uint32_t avatar_id)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->avatar_id_, (((_BYTE)this + 16) & 7u) + 3, v2);
  this->avatar_id_ = avatar_id;
};

// Line 68: range 000000001461D4EA-000000001461D534
uint32_t __cdecl FurnitureMakeData::getMakeId(const FurnitureMakeData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->make_id_;
};

// Line 79: range 0000000016E39D32-0000000016E39DE0
void __cdecl FurnitureMakeBeHelpedData::FurnitureMakeBeHelpedData(FurnitureMakeBeHelpedData *const this)
{
  __int64 v1; // rsi
  uint32_t *p_time; // rdx
  __int64 v3; // rdx

  std::string::basic_string(this);
  p_time = &this->time;
  if ( *(_BYTE *)(((unsigned __int64)p_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time, v1, p_time);
  }
  this->time = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->uid, (((_BYTE)this + 36) & 7u) + 3, v3);
  this->uid = 0;
  ProfilePicture::ProfilePicture(&this->profile_picture);
};

// Line 79: range 0000000016E3A9C0-0000000016E3A9DA
void __cdecl FurnitureMakeBeHelpedData::~FurnitureMakeBeHelpedData(FurnitureMakeBeHelpedData *const this)
{
  std::string::~string(this);
};

// Line 91: range 000000001750E656-000000001750E6C6
void __cdecl FurnitureMake::~FurnitureMake(FurnitureMake *const this)
{
  PlayerUnixTimer::~PlayerUnixTimer(&this->make_timer_);
  std::vector<FurnitureMakeData>::~vector(&this->make_slot_vec_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->furniture_make_count_map_);
  std::deque<FurnitureMakeBeHelpedData>::~deque(&this->helped_data_deq_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->player_help_map_);
  std::enable_shared_from_this<FurnitureMake>::~enable_shared_from_this(this);
};

// Line 109: range 0000000017D6C03A-0000000017D6C048
int32_t __cdecl FurnitureMake::notifyAllData(FurnitureMake *const this)
{
  return 0;
};
