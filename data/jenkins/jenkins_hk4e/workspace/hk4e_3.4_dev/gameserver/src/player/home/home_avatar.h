// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/home/home_avatar.h

// Line 42: range 0000000016D6B594-0000000016D6B64A
HomeAvatarData *__cdecl HomeAvatarData::operator=(HomeAvatarData *const this, const HomeAvatarData *a2)
{
  uint32_t avatar_id; // ecx
  char v3; // al
  const HomeAvatarData *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  avatar_id = a2->avatar_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->avatar_id = avatar_id;
  std::set<unsigned int>::operator=(&this->talk_id_set, &v5->talk_id_set);
  std::set<unsigned int>::operator=(&this->event_id_set, &v5->event_id_set);
  return this;
};

// Line 42: range 0000000016D6B4FC-0000000016D6B563
void __cdecl HomeAvatarData::HomeAvatarData(HomeAvatarData *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->avatar_id = 0;
  std::set<unsigned int>::set(&this->talk_id_set);
  std::set<unsigned int>::set(&this->event_id_set);
};

// Line 42: range 0000000016FA3F9A-0000000016FA4074
void __cdecl HomeAvatarData::HomeAvatarData(HomeAvatarData *const this, const HomeAvatarData *a2)
{
  uint32_t avatar_id; // ecx
  char v3; // al
  const HomeAvatarData *v4; // [rsp+0h] [rbp-20h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  avatar_id = a2->avatar_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->avatar_id = avatar_id;
  std::set<unsigned int>::set(&this->talk_id_set, &v4->talk_id_set);
  std::set<unsigned int>::set(&this->event_id_set, &v4->event_id_set);
};

// Line 42: range 0000000016D6B564-0000000016D6B592
void __cdecl HomeAvatarData::~HomeAvatarData(HomeAvatarData *const this)
{
  std::set<unsigned int>::~set(&this->event_id_set);
  std::set<unsigned int>::~set(&this->talk_id_set);
};

// Line 63: range 000000001721496E-00000000172149AC
void __cdecl HomeAvatar::~HomeAvatar(HomeAvatar *const this)
{
  std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::~map(&this->reward_event_id_map_);
  std::set<unsigned int>::~set(&this->show_avatar_id_set_);
  std::unordered_map<unsigned int,HomeAvatarData>::~unordered_map(&this->avatar_data_map_);
};
