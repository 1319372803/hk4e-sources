// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/player/player.h

// Line 23: range 00000000004DA032-00000000004DA0FE
void __cdecl Player::~Player(Player *const this)
{
  std::set<unsigned int>::~set(&this->finished_quest_set_);
  std::set<unsigned int>::~set(&this->main_quest_set_);
  std::map<unsigned long,proto::Item>::~map(&this->depot_item_map_);
  std::map<unsigned long,proto::Item>::~map(&this->pack_item_map_);
  std::map<unsigned int,std::shared_ptr<Quest>>::~map(&this->quest_map_);
  std::map<unsigned int,std::shared_ptr<ParentQuest>>::~map(&this->parent_quest_map_);
  std::vector<unsigned int>::~vector(&this->next_talk_vec_);
  std::map<unsigned long,std::shared_ptr<Avatar>>::~map(&this->avatar_map_);
  std::string::~string(&this->nick_name_);
  std::string::~string(&this->player_data_bin_);
  std::shared_ptr<Avatar>::~shared_ptr(&this->cur_avatar_ptr_);
};

// Line 26: range 00000000004D8C84-00000000004D8F98
void __cdecl Player::Player(Player *const this, Robot *robot)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_recv_apply_mp_result = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_apply_mp_agreed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_apply_mp_agreed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_apply_mp_agreed);
  }
  this->is_apply_mp_agreed = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_recv_enter_scene >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_recv_enter_scene >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_recv_enter_scene);
  }
  this->is_recv_enter_scene = 0;
  std::shared_ptr<Avatar>::shared_ptr(&this->cur_avatar_ptr_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_talk_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_talk_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_talk_id_);
  }
  this->cur_talk_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_set_born_data_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_set_born_data_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_need_set_born_data_);
  }
  this->is_need_set_born_data_ = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&this->player_data_bin_, byte_DE2A700, &__a);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_scene_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_scene_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_scene_token_);
  }
  this->enter_scene_token_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->robot_ = robot;
  std::string::basic_string(&this->nick_name_);
  std::map<unsigned long,std::shared_ptr<Avatar>>::map(&this->avatar_map_);
  std::vector<unsigned int>::vector(&this->next_talk_vec_);
  std::map<unsigned int,std::shared_ptr<ParentQuest>>::map(&this->parent_quest_map_);
  std::map<unsigned int,std::shared_ptr<Quest>>::map(&this->quest_map_);
  std::map<unsigned long,proto::Item>::map(&this->pack_item_map_);
  std::map<unsigned long,proto::Item>::map(&this->depot_item_map_);
  std::set<unsigned int>::set(&this->main_quest_set_);
  std::set<unsigned int>::set(&this->finished_quest_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_main_quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_main_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_main_quest_id_);
  }
  this->last_main_quest_id_ = 0;
};

// Line 30: range 00000000004D8F9A-00000000004D8FD4
Robot *__cdecl Player::getRobot(Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->robot_);
  return this->robot_;
};

// Line 35: range 00000000004D8FD6-00000000004D8FFE
void __cdecl Player::setNickName(Player *const this, const std::string *nick_name)
{
  std::string::operator=(&this->nick_name_, nick_name);
};

// Line 67: range 00000000004D9000-00000000004D90D1
bool __fastcall Player::isMainQuest(const Player *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 quest_id:67";
  *(_QWORD *)(v2 + 16) = Player::isMainQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  result = std::set<unsigned int>::contains(&this->main_quest_set_, (const std::set<unsigned int>::key_type *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 69: range 00000000004D90D2-00000000004D91A3
bool __fastcall Player::isQuestEverFinished(const Player *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 quest_id:69";
  *(_QWORD *)(v2 + 16) = Player::isQuestEverFinished;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  result = std::set<unsigned int>::contains(
             &this->finished_quest_set_,
             (const std::set<unsigned int>::key_type *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 71: range 00000000004D91A4-00000000004D91F0
uint32_t __cdecl Player::getLastMainQuestId(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_main_quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_main_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_main_quest_id_);
  }
  return this->last_main_quest_id_;
};

// Line 73: range 00000000004D91F2-00000000004D9211
uint32_t __cdecl Player::getFinishedQuestCount(const Player *const this)
{
  return std::set<unsigned int>::size(&this->finished_quest_set_);
};

// Line 81: range 00000000004D92B6-00000000004D92E2
AvatarPtr __cdecl Player::getCurAvatar(const Player *const this)
{
  __int64 v1; // rsi
  AvatarPtr result; // rax

  std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)this, (const std::shared_ptr<Avatar> *)(v1 + 8));
  result._M_ptr = (std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 81: range 00000000004D9390-00000000004D93B9
void __cdecl Player::setCurAvatar(Player *const this, AvatarPtr *p_cur_avatar_ptr__out)
{
  std::shared_ptr<Avatar>::operator=(&this->cur_avatar_ptr_, p_cur_avatar_ptr__out);
};

// Line 82: range 00000000004D93BA-00000000004D9408
void __cdecl Player::setCurTalkId(Player *const this, uint32_t cur_talk_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_talk_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_talk_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_talk_id_);
  }
  this->cur_talk_id_ = cur_talk_id__out;
};

// Line 83: range 00000000004D940A-00000000004D9457
bool __cdecl Player::getIsNeedSetBornData(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_set_born_data_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_set_born_data_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_need_set_born_data_);
  }
  return this->is_need_set_born_data_;
};

// Line 83: range 00000000004D9458-00000000004D94AE
void __cdecl Player::setIsNeedSetBornData(Player *const this, bool is_need_set_born_data__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_set_born_data_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_set_born_data_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_need_set_born_data_);
  }
  this->is_need_set_born_data_ = is_need_set_born_data__out;
};

// Line 84: range 00000000004D94B0-00000000004D94DC
std::string *__cdecl Player::getPlayerDataBin[abi:cxx11](std::string *retstr, const Player *const this)
{
  std::string::basic_string(retstr, &this->player_data_bin_);
  return retstr;
};

// Line 84: range 00000000004D94DE-00000000004D9507
void __cdecl Player::setPlayerDataBin(Player *const this, std::string *p_player_data_bin__out)
{
  std::string::operator=(&this->player_data_bin_, p_player_data_bin__out);
};

// Line 85: range 00000000004D9508-00000000004D954F
uint32_t __cdecl Player::getEnterSceneToken(const Player *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_scene_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_scene_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_scene_token_);
  }
  return this->enter_scene_token_;
};

// Line 85: range 00000000004D9550-00000000004D959E
void __cdecl Player::setEnterSceneToken(Player *const this, uint32_t enter_scene_token__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_scene_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_scene_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_scene_token_);
  }
  this->enter_scene_token_ = enter_scene_token__out;
};
