// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/player/player.cpp

// Line 18: range 000000000046ADEE-000000000046AE4C
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val[5]; // [rsp+1Ch] [rbp-14h] BYREF

  v2 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(stream, (const char (*)[2])"[");
  val[0] = Player::getUid(player);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, val);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v3, (const char (*)[2])"]");
  return stream;
};

// Line 24: range 000000000046AE4E-000000000046B27F
void __cdecl Player::registerScriptFunc(lua_State_0 *lua_state_ptr)
{
  luabind::class_<data::ConstValueType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v1; // rax
  luabind::class_<Avatar,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v2; // rax
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v3; // rax
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v4; // rax
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v5; // rax
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v6; // rax
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v7; // rax
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v8; // rax
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v9; // rax
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v10; // rax
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v11; // rax
  const luabind::scope *v12; // rax
  luabind::detail::enum_maker<luabind::class_<data::ConstValueType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > v13; // [rsp+80h] [rbp-A0h] BYREF
  luabind::scope v14; // [rsp+88h] [rbp-98h] BYREF
  luabind::module_ v15; // [rsp+90h] [rbp-90h] BYREF
  luabind::value val; // [rsp+A0h] [rbp-80h] BYREF
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> v17; // [rsp+B0h] [rbp-70h] BYREF
  luabind::class_<data::ConstValueType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> v18; // [rsp+D0h] [rbp-50h] BYREF

  v15 = luabind::module(lua_state_ptr, 0LL);
  luabind::class_<data::ConstValueType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    &v18,
    "ConstValue");
  v13.from_ = luabind::class_<data::ConstValueType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_(
                &v18,
                "constants").from_;
  luabind::value::value<data::ConstValueType>(&val, "PLAYER_WORLD_SCENE_ID", CONST_VALUE_PLAYER_WORLD_SCENE_ID);
  v1 = luabind::detail::enum_maker<luabind::class_<data::ConstValueType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
         &v13,
         &val);
  luabind::scope::scope(&v14, v1);
  luabind::module_::operator[](&v15, &v14);
  luabind::scope::~scope(&v14);
  luabind::class_<data::ConstValueType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_(&v18);
  val = (luabind::value)luabind::module(lua_state_ptr, 0LL);
  luabind::class_<Avatar,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<Avatar,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v18,
    "Avatar");
  v2 = luabind::class_<Avatar,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Avatar,unsigned long>(
         (luabind::class_<Avatar,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v18,
         "guid",
         (unsigned __int64 *)0xE8);
  luabind::scope::scope((luabind::scope *const)&v13, v2);
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    &v17,
    "Player");
  v3 = luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<void (Player::*)(unsigned int)>(
         &v17,
         "setStartQuest",
         (void (*)(Player *, unsigned int))Player::setStartQuest);
  v4 = luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<std::shared_ptr<Quest> (Player::*)(unsigned int)const>(
         v3,
         "findQuest",
         (std::shared_ptr<Quest> (*)(const Player *, unsigned int))Player::findQuest);
  v5 = luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<std::vector<std::shared_ptr<Quest>> (Player::*)(void)const>(
         v4,
         "getAllQuest",
         (std::vector<std::shared_ptr<Quest>> *(*)(std::vector<std::shared_ptr<Quest>> *__return_ptr __struct_ptr, const Player *))Player::getAllQuest);
  v6 = luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<bool (Player::*)(unsigned int)const>(
         v5,
         "isQuestEverFinished",
         (bool (*)(const Player *, unsigned int))Player::isQuestEverFinished);
  v7 = luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<unsigned int (Player::*)(void)const>(
         v6,
         "getLastMainQuestId",
         (unsigned int (*)(const Player *))Player::getLastMainQuestId);
  v8 = luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<unsigned int (Player::*)(void)const>(
         v7,
         "getFinishedQuestCount",
         (unsigned int (*)(const Player *))Player::getFinishedQuestCount);
  v9 = luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<bool (Player::*)(unsigned int)const>(
         v8,
         "isMainQuest",
         (bool (*)(const Player *, unsigned int))Player::isMainQuest);
  v10 = luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<std::shared_ptr<Avatar> (Player::*)(void)const>(
          v9,
          "getCurAvatar",
          (std::shared_ptr<Avatar> (*)(const Player *))Player::getCurAvatar);
  v11 = luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def<bool (Player::*)(void)const>(
          v10,
          "getIsNeedSetBornData",
          (bool (*)(const Player *))Player::getIsNeedSetBornData);
  v12 = luabind::scope::operator,(v11, (luabind::scope)&v13);
  luabind::scope::scope(&v14, v12);
  luabind::module_::operator[](&val, &v14);
  luabind::scope::~scope(&v14);
  luabind::class_<Player,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_(&v17);
  luabind::scope::~scope((luabind::scope *const)&v13);
  luabind::class_<Avatar,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<Avatar,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v18);
};

// Line 51: range 000000000046B280-000000000046B2F5
uint32_t __cdecl Player::getUid(const Player *const this)
{
  const User *User; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->robot_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->robot_);
  User = Robot::getUser(this->robot_);
  if ( *(_BYTE *)(((unsigned __int64)User >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)User >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(User);
  }
  return User->uid;
};

// Line 56: range 000000000046B2F6-000000000046B42B
int32_t __cdecl Player::addAvatar(Player *const this, Avatar *avatar)
{
  unsigned __int64 *v2; // rcx
  std::shared_ptr<Avatar> *v3; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<Avatar> > >,bool> v4; // rax
  bool v5; // bl
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rdx
  unsigned __int64 val; // [rsp+18h] [rbp-48h] BYREF
  std::shared_ptr<Avatar> v10; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  toThisPtr<Avatar>((Avatar *)&v10);
  val = Avatar::getGuid(avatar);
  v4 = std::map<unsigned long,std::shared_ptr<Avatar>>::emplace<unsigned long,std::shared_ptr<Avatar>>(
         &this->avatar_map_,
         &val,
         &v10,
         v2,
         v3);
  v5 = !v4.second;
  std::shared_ptr<Avatar>::~shared_ptr(&v10);
  if ( !v5 )
    return 0;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player.cpp",
    "addAvatar",
    60);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v11, (const char (*)[16])"duplicate guid:");
  val = Avatar::getGuid(avatar);
  v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
  operator<<(v7, this);
  common::milog::MiLogStream::~MiLogStream(&v11);
  return -1;
};

// Line 67: range 000000000046B42C-000000000046B4F7
AvatarPtr __cdecl Player::findAvatarByGuid(Player *const this, uint64_t avatar_guid)
{
  uint64_t v2; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  AvatarPtr result; // rax
  uint64_t avatar_guida; // [rsp+8h] [rbp-48h]
  std::map<long unsigned int,std::shared_ptr<Avatar>>::iterator __for_begin; // [rsp+28h] [rbp-28h] BYREF
  std::map<long unsigned int,std::shared_ptr<Avatar>>::iterator __for_end; // [rsp+30h] [rbp-20h] BYREF
  std::map<long unsigned int,std::shared_ptr<Avatar>> *__for_range; // [rsp+38h] [rbp-18h]
  std::pair<long unsigned int const,std::shared_ptr<Avatar> > *p; // [rsp+40h] [rbp-10h]
  AvatarPtr *avatar_ptr; // [rsp+48h] [rbp-8h]

  avatar_guida = v2;
  __for_range = (std::map<long unsigned int,std::shared_ptr<Avatar>> *)(avatar_guid + 112);
  __for_begin._M_node = std::map<unsigned long,std::shared_ptr<Avatar>>::begin((std::map<long unsigned int,std::shared_ptr<Avatar>> *const)(avatar_guid + 112))._M_node;
  __for_end._M_node = std::map<unsigned long,std::shared_ptr<Avatar>>::end((std::map<long unsigned int,std::shared_ptr<Avatar>> *const)(avatar_guid + 112))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Avatar>>>::operator*(&__for_begin);
    avatar_ptr = &p->second;
    v3 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p->second);
    if ( avatar_guida == Avatar::getGuid(v3) )
    {
      std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)this, avatar_ptr);
      goto LABEL_7;
    }
    std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Avatar>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)this, 0LL);
LABEL_7:
  result._M_ptr = (std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 78: range 000000000046B4F8-000000000046B5C1
// local variable allocation has failed, the output may be wrong!
AvatarPtr __cdecl Player::findAvatarByAvatarId(Player *const this, uint32_t avatar_id)
{
  uint32_t v2; // edx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  AvatarPtr result; // rax
  uint32_t avatar_ida; // [rsp+Ch] [rbp-44h]
  std::map<long unsigned int,std::shared_ptr<Avatar>>::iterator __for_begin; // [rsp+28h] [rbp-28h] BYREF
  std::map<long unsigned int,std::shared_ptr<Avatar>>::iterator __for_end; // [rsp+30h] [rbp-20h] BYREF
  std::map<long unsigned int,std::shared_ptr<Avatar>> *__for_range; // [rsp+38h] [rbp-18h]
  std::pair<long unsigned int const,std::shared_ptr<Avatar> > *p; // [rsp+40h] [rbp-10h]
  AvatarPtr *avatar_ptr; // [rsp+48h] [rbp-8h]

  avatar_ida = v2;
  __for_range = (std::map<long unsigned int,std::shared_ptr<Avatar>> *)(*(_QWORD *)&avatar_id + 112LL);
  __for_begin._M_node = std::map<unsigned long,std::shared_ptr<Avatar>>::begin((std::map<long unsigned int,std::shared_ptr<Avatar>> *const)(*(_QWORD *)&avatar_id + 112LL))._M_node;
  __for_end._M_node = std::map<unsigned long,std::shared_ptr<Avatar>>::end((std::map<long unsigned int,std::shared_ptr<Avatar>> *const)(*(_QWORD *)&avatar_id + 112LL))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Avatar>>>::operator*(&__for_begin);
    avatar_ptr = &p->second;
    v3 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p->second);
    if ( avatar_ida == Avatar::getAvatarId(v3) )
    {
      std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)this, avatar_ptr);
      goto LABEL_7;
    }
    std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Avatar>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)this, 0LL);
LABEL_7:
  result._M_ptr = (std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 89: range 000000000046B5C2-000000000046B68B
// local variable allocation has failed, the output may be wrong!
AvatarPtr __cdecl Player::findAvatarByEntityId(Player *const this, uint32_t entity_id)
{
  uint32_t v2; // edx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  AvatarPtr result; // rax
  uint32_t entity_ida; // [rsp+Ch] [rbp-44h]
  std::map<long unsigned int,std::shared_ptr<Avatar>>::iterator __for_begin; // [rsp+28h] [rbp-28h] BYREF
  std::map<long unsigned int,std::shared_ptr<Avatar>>::iterator __for_end; // [rsp+30h] [rbp-20h] BYREF
  std::map<long unsigned int,std::shared_ptr<Avatar>> *__for_range; // [rsp+38h] [rbp-18h]
  std::pair<long unsigned int const,std::shared_ptr<Avatar> > *p; // [rsp+40h] [rbp-10h]
  AvatarPtr *avatar_ptr; // [rsp+48h] [rbp-8h]

  entity_ida = v2;
  __for_range = (std::map<long unsigned int,std::shared_ptr<Avatar>> *)(*(_QWORD *)&entity_id + 112LL);
  __for_begin._M_node = std::map<unsigned long,std::shared_ptr<Avatar>>::begin((std::map<long unsigned int,std::shared_ptr<Avatar>> *const)(*(_QWORD *)&entity_id + 112LL))._M_node;
  __for_end._M_node = std::map<unsigned long,std::shared_ptr<Avatar>>::end((std::map<long unsigned int,std::shared_ptr<Avatar>> *const)(*(_QWORD *)&entity_id + 112LL))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    p = std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Avatar>>>::operator*(&__for_begin);
    avatar_ptr = &p->second;
    v3 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p->second);
    if ( entity_ida == Entity::getEntityId(v3) )
    {
      std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)this, avatar_ptr);
      goto LABEL_7;
    }
    std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Avatar>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)this, 0LL);
LABEL_7:
  result._M_ptr = (std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 100: range 000000000046B68C-000000000046B822
void __cdecl Player::updateQuest(Player *const this, const proto::Quest *quest)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Quest *v5; // rdx
  std::map<unsigned int,std::shared_ptr<Quest>>::mapped_type *quest_ptr; // [rsp+18h] [rbp-78h]
  std::shared_ptr<Quest> __r; // [rsp+20h] [rbp-70h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 quest_id:101";
  *(_QWORD *)(v2 + 16) = Player::updateQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = proto::Quest::quest_id(quest);
  quest_ptr = std::map<unsigned int,std::shared_ptr<Quest>>::operator[](
                &this->quest_map_,
                (const std::map<unsigned int,std::shared_ptr<Quest>>::key_type *)(v2 + 32));
  if ( std::operator==<Quest>(quest_ptr, 0LL) )
  {
    std::make_shared<Quest,Player &,unsigned int &>(
      (Player *)&__r,
      (unsigned int *)this,
      (Player *)(v2 + 32),
      (unsigned int *)this);
    std::shared_ptr<Quest>::operator=(quest_ptr, &__r);
    std::shared_ptr<Quest>::~shared_ptr(&__r);
  }
  if ( proto::Quest::state(quest) == 3 )
    std::set<unsigned int>::insert(&this->finished_quest_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
  v5 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)quest_ptr);
  Quest::setProto(v5, quest);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 111: range 000000000046B824-000000000046B98D
void __fastcall Player::removeQuest(Player *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 quest_id:110";
  *(_QWORD *)(v2 + 16) = Player::removeQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  if ( !std::map<unsigned int,std::shared_ptr<Quest>>::erase(
          &this->quest_map_,
          (const std::map<unsigned int,std::shared_ptr<Quest>>::key_type *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player.cpp",
      "removeQuest",
      113);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v6,
           (const char (*)[28])"can't find quest, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 117: range 000000000046B98E-000000000046B9AE
void __cdecl Player::removeAllQuest(Player *const this)
{
  std::map<unsigned int,std::shared_ptr<Quest>>::clear(&this->quest_map_);
};

// Line 122: range 000000000046B9B0-000000000046BC5A
void __cdecl Player::updateParentQuest(Player *const this, const proto::ParentQuest *parent_quest)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  ParentQuest *v5; // rdx
  google::protobuf::RepeatedPtrField<proto::ChildQuest>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::ChildQuest>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  ParentQuestPtr *parent_quest_ptr; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::ChildQuest> *__for_range; // [rsp+30h] [rbp-A0h]
  const proto::ChildQuest *child_quest; // [rsp+38h] [rbp-98h]
  std::shared_ptr<ParentQuest> __r; // [rsp+40h] [rbp-90h] BYREF
  char v12[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 parent_quest_id:123 64 4 12 quest_id:132";
  *(_QWORD *)(v2 + 16) = Player::updateParentQuest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 48) = proto::ParentQuest::parent_quest_id(parent_quest);
  parent_quest_ptr = std::map<unsigned int,std::shared_ptr<ParentQuest>>::operator[](
                       &this->parent_quest_map_,
                       (const std::map<unsigned int,std::shared_ptr<ParentQuest>>::key_type *)(v2 + 48));
  if ( std::operator==<ParentQuest>(parent_quest_ptr, 0LL) )
  {
    std::make_shared<ParentQuest,Player &,unsigned int &>(
      (Player *)&__r,
      (unsigned int *)this,
      (Player *)(v2 + 48),
      (unsigned int *)this);
    std::shared_ptr<ParentQuest>::operator=(parent_quest_ptr, &__r);
    std::shared_ptr<ParentQuest>::~shared_ptr(&__r);
  }
  v5 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)parent_quest_ptr);
  ParentQuest::setProto(v5, parent_quest);
  if ( proto::ParentQuest::is_finished(parent_quest) )
  {
    __for_range = proto::ParentQuest::child_quest_list(parent_quest);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ChildQuest>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ChildQuest>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ChildQuest const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      child_quest = google::protobuf::internal::RepeatedPtrIterator<proto::ChildQuest const>::operator*(&__for_begin);
      *(_DWORD *)(v2 + 64) = proto::ChildQuest::quest_id(child_quest);
      std::map<unsigned int,std::shared_ptr<Quest>>::erase(
        &this->quest_map_,
        (const std::map<unsigned int,std::shared_ptr<Quest>>::key_type *)(v2 + 64));
      if ( proto::ChildQuest::state(child_quest) == 3 )
        std::set<unsigned int>::insert(
          &this->finished_quest_set_,
          (const std::set<unsigned int>::value_type *)(v2 + 64));
      google::protobuf::internal::RepeatedPtrIterator<proto::ChildQuest const>::operator++(&__for_begin);
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 141: range 000000000046BC5C-000000000046BC7C
void __cdecl Player::removeAllParentQuest(Player *const this)
{
  std::map<unsigned int,std::shared_ptr<ParentQuest>>::clear(&this->parent_quest_map_);
};

// Line 146: range 000000000046BC7E-000000000046BE7E
void __fastcall Player::addItem(Player *const this, proto::StoreType store_type, const proto::Item *item)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // eax
  proto::Item *v7; // rax
  proto::Item *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::map<long unsigned int,proto::Item>::key_type __k; // [rsp+28h] [rbp-88h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 store_type:145";
  *(_QWORD *)(v3 + 16) = Player::addItem;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = store_type;
  v6 = *(_DWORD *)(v3 + 32);
  if ( v6 == 1 )
  {
    __k = proto::Item::guid(item);
    v7 = std::map<unsigned long,proto::Item>::operator[](&this->pack_item_map_, &__k);
    proto::Item::operator=(v7, item);
  }
  else if ( v6 == 2 )
  {
    __k = proto::Item::guid(item);
    v8 = std::map<unsigned long,proto::Item>::operator[](&this->depot_item_map_, &__k);
    proto::Item::operator=(v8, item);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player.cpp",
      "addItem",
      156);
    v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v12,
           (const char (*)[20])"invalid store_type:");
    common::milog::MiLogStream::operator<<<proto::StoreType,(proto::StoreType*)0>(
      v9,
      (const proto::StoreType *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 162: range 000000000046BE80-000000000046C05A
void __fastcall Player::delItem(Player *const this, proto::StoreType store_type, uint64_t guid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 store_type:161 64 8 8 guid:161";
  *(_QWORD *)(v3 + 16) = Player::delItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = store_type;
  *(_QWORD *)(v3 + 64) = guid;
  v6 = *(_DWORD *)(v3 + 48);
  if ( v6 == 1 )
  {
    std::map<unsigned long,proto::Item>::erase(
      &this->pack_item_map_,
      (const std::map<long unsigned int,proto::Item>::key_type *)(v3 + 64));
  }
  else if ( v6 == 2 )
  {
    std::map<unsigned long,proto::Item>::erase(
      &this->depot_item_map_,
      (const std::map<long unsigned int,proto::Item>::key_type *)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player.cpp",
      "delItem",
      172);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v9, (const char (*)[20])"invalid store_type:");
    common::milog::MiLogStream::operator<<<proto::StoreType,(proto::StoreType*)0>(
      v7,
      (const proto::StoreType *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 178: range 000000000046C05C-000000000046C372
void __fastcall Player::getItemVec(
        Player *const this,
        proto::StoreType store_type,
        uint32_t item_id,
        std::vector<proto::Item> *item_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int v7; // eax
  common::milog::MiLogStream *v8; // rax
  std::map<long unsigned int,proto::Item>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::map<long unsigned int,proto::Item>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::map<long unsigned int,proto::Item> *__for_range_0; // [rsp+30h] [rbp-B0h]
  std::pair<long unsigned int const,proto::Item> *p_0; // [rsp+38h] [rbp-A8h]
  proto::Item *item_0; // [rsp+40h] [rbp-A0h]
  std::map<long unsigned int,proto::Item> *__for_range; // [rsp+48h] [rbp-98h]
  std::pair<long unsigned int const,proto::Item> *p; // [rsp+50h] [rbp-90h]
  proto::Item *item; // [rsp+58h] [rbp-88h]
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-80h] BYREF
  char v20[96]; // [rsp+80h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 14 store_type:177";
  *(_QWORD *)(v4 + 16) = Player::getItemVec;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = store_type;
  v7 = *(_DWORD *)(v4 + 32);
  if ( v7 == 1 )
  {
    __for_range = &this->pack_item_map_;
    __for_begin._M_node = std::map<unsigned long,proto::Item>::begin(&this->pack_item_map_)._M_node;
    __for_end._M_node = std::map<unsigned long,proto::Item>::end(&this->pack_item_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      p = std::_Rb_tree_iterator<std::pair<unsigned long const,proto::Item>>::operator*(&__for_begin);
      item = &p->second;
      if ( item_id == proto::Item::item_id(&p->second) )
        std::vector<proto::Item>::push_back(item_vec, item);
      std::_Rb_tree_iterator<std::pair<unsigned long const,proto::Item>>::operator++(&__for_begin);
    }
  }
  else if ( v7 == 2 )
  {
    __for_range_0 = &this->depot_item_map_;
    __for_begin._M_node = std::map<unsigned long,proto::Item>::begin(&this->depot_item_map_)._M_node;
    __for_end._M_node = std::map<unsigned long,proto::Item>::end(&this->depot_item_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      p_0 = std::_Rb_tree_iterator<std::pair<unsigned long const,proto::Item>>::operator*(&__for_begin);
      item_0 = &p_0->second;
      if ( item_id == proto::Item::item_id(&p_0->second) )
        std::vector<proto::Item>::push_back(item_vec, item_0);
      std::_Rb_tree_iterator<std::pair<unsigned long const,proto::Item>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player.cpp",
      "getItemVec",
      198);
    v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v19,
           (const char (*)[20])"invalid store_type:");
    common::milog::MiLogStream::operator<<<proto::StoreType,(proto::StoreType*)0>(
      v8,
      (const proto::StoreType *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 204: range 000000000046C374-000000000046C4ED
uint64_t __cdecl Player::findOneItem(Player *const this, proto::StoreType store_type, uint32_t item_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint64_t v6; // r14
  const proto::Item *v7; // rax
  uint64_t result; // rax
  char v10[144]; // [rsp+10h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 12 item_vec:205";
  *(_QWORD *)(v3 + 16) = Player::findOneItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<proto::Item>::vector((std::vector<proto::Item> *const)(v3 + 32));
  Player::getItemVec(this, store_type, item_id, (std::vector<proto::Item> *)(v3 + 32));
  if ( std::vector<proto::Item>::empty((const std::vector<proto::Item> *const)(v3 + 32)) )
  {
    v6 = 0LL;
  }
  else
  {
    v7 = std::vector<proto::Item>::operator[]((std::vector<proto::Item> *const)(v3 + 32), 0LL);
    v6 = proto::Item::guid(v7);
  }
  std::vector<proto::Item>::~vector((std::vector<proto::Item> *const)(v3 + 32));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 213: range 000000000046C4EE-000000000046C9C8
void __fastcall Player::setStartQuest(Player *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  uint32_t v7; // ecx
  unsigned int *v8; // rax
  unsigned int *v9; // rdx
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-138h]
  std::string __rhs; // [rsp+30h] [rbp-130h] BYREF
  std::string __str; // [rsp+50h] [rbp-110h] BYREF
  char v18[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 quest_id:212 48 32 13 quest_str:219 112 48 18 last_quest_set:214";
  *(_QWORD *)(v2 + 16) = Player::setStartQuest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 32) = quest_id;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 112));
  std::set<unsigned int>::insert(&this->main_quest_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
  QuestExcelConfigMgr::getAllFollowQuestInRobot(
    &Config::config_ptr->design_config.txt_config_mgr.quest_config_mgr,
    *(_DWORD *)(v2 + 32),
    &this->main_quest_set_,
    (std::set<unsigned int> *)(v2 + 112));
  if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v2 + 112)) )
  {
    std::set<unsigned int>::rbegin((const std::set<unsigned int> *const)&__for_end);
    v5 = (unsigned int *)std::reverse_iterator<std::_Rb_tree_const_iterator<unsigned int>>::operator*((const std::reverse_iterator<std::_Rb_tree_const_iterator<unsigned int> > *const)&__for_end);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_main_quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_main_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_main_quest_id_);
    }
    this->last_main_quest_id_ = v7;
  }
  std::string::basic_string((std::string *const)(v2 + 48));
  __for_range = &this->main_quest_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->main_quest_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    std::to_string(&__rhs, *v9);
    std::operator+<char>(&__str, " ", &__rhs);
    std::string::operator+=((std::string *const)(v2 + 48), &__str);
    std::string::~string(&__str);
    std::string::~string(&__rhs);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&__str,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player.cpp",
    "setStartQuest",
    222);
  v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          (common::milog::MiLogStream *const)&__str,
          (const char (*)[25])"[MAIN] main quest count:");
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::set<unsigned int>::size(&this->main_quest_set_);
  v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v10,
          (const unsigned __int64 *)&__for_end);
  v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v11,
          (const char (*)[22])", last_main_quest_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->last_main_quest_id_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__str);
  std::string::~string((std::string *const)(v2 + 48));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 226: range 000000000046C9CA-000000000046CB57
const Player *__fastcall Player::findQuest(const Player *const this, __int64 quest_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Quest> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Quest> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 quest_id:225 64 8 6 it:227";
  *(_QWORD *)(v3 + 16) = Player::findQuest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<Quest>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Quest>>::find(
                                                                                  (const std::map<unsigned int,std::shared_ptr<Quest>> *const)(quest_id + 232),
                                                                                  (const std::map<unsigned int,std::shared_ptr<Quest>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Quest>>::end((const std::map<unsigned int,std::shared_ptr<Quest>> *const)(quest_id + 232))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Quest> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Quest>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Quest> > > *const)(v3 + 64));
    std::shared_ptr<Quest>::shared_ptr((std::shared_ptr<Quest> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<Quest>::shared_ptr((std::shared_ptr<Quest> *const)this, 0LL);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 234: range 000000000046CC6C-000000000046CD85
std::vector<std::shared_ptr<Quest>> *__cdecl Player::getAllQuest(
        std::vector<std::shared_ptr<Quest>> *retstr,
        const Player *const this)
{
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::shared_ptr<Quest> *M_current; // rbx
  std::vector<std::shared_ptr<Quest>>::iterator v4; // rax
  Player::getAllQuest::<lambda(QuestPtr, QuestPtr)> v5; // dl
  std::map<unsigned int,std::shared_ptr<Quest>>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,std::shared_ptr<Quest>>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::map<unsigned int,std::shared_ptr<Quest>> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,std::shared_ptr<Quest> > *v10; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Quest> > >::type *quest_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Quest> > >::type *quest_ptr; // [rsp+38h] [rbp-18h]

  std::vector<std::shared_ptr<Quest>>::vector(retstr);
  __for_range = &this->quest_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Quest>>::begin(&this->quest_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Quest>>::end(&this->quest_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Quest>>>::operator*(&__for_begin);
    quest_id = std::get<0ul,unsigned int const,std::shared_ptr<Quest>>(v10);
    quest_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Quest> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Quest>>(v10);
    v2 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)quest_ptr);
    if ( Quest::canChoose(v2) )
      std::vector<std::shared_ptr<Quest>>::push_back(retstr, quest_ptr);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Quest>>>::operator++(&__for_begin);
  }
  M_current = std::vector<std::shared_ptr<Quest>>::end(retstr)._M_current;
  v4._M_current = std::vector<std::shared_ptr<Quest>>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<std::shared_ptr<Quest> *,std::vector<std::shared_ptr<Quest>>>,Player::getAllQuest(void)::{lambda(std::shared_ptr<Quest>,std::shared_ptr<Quest>)#1}>(
    v4,
    (__gnu_cxx::__normal_iterator<std::shared_ptr<Quest>*,std::vector<std::shared_ptr<Quest>> >)M_current,
    v5);
  return retstr;
};

// Line 241: range 000000000046CB58-000000000046CC6B
bool __cdecl Player::getAllQuest(void)const::{lambda(std::shared_ptr<Quest>,std::shared_ptr<Quest>)#1}::operator()(
        const Player::getAllQuest::<lambda(QuestPtr, QuestPtr)> *const __closure,
        QuestPtr *p_left,
        QuestPtr *p_right)
{
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const proto::Quest *Proto; // rax
  google::protobuf::uint32 started; // ebx
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const proto::Quest *v9; // rax
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t QuestId; // ebx
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const proto::Quest *v15; // rax
  google::protobuf::uint32 v16; // ebx
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const proto::Quest *v18; // rax
  uint32_t left_parent_id; // [rsp+28h] [rbp-18h]
  uint32_t right_parent_id; // [rsp+2Ch] [rbp-14h]

  v3 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_left);
  left_parent_id = Quest::getParentQuestId(v3);
  v4 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_right);
  right_parent_id = Quest::getParentQuestId(v4);
  if ( left_parent_id != right_parent_id )
    return left_parent_id < right_parent_id;
  v5 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_left);
  Proto = Quest::getProto(v5);
  started = proto::Quest::start_time(Proto);
  v8 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_right);
  v9 = Quest::getProto(v8);
  if ( started == proto::Quest::start_time(v9) )
  {
    v10 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_left);
    QuestId = Quest::getQuestId(v10);
    v12 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_right);
    return QuestId < Quest::getQuestId(v12);
  }
  else
  {
    v14 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_left);
    v15 = Quest::getProto(v14);
    v16 = proto::Quest::start_time(v15);
    v17 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_right);
    v18 = Quest::getProto(v17);
    return v16 < proto::Quest::start_time(v18);
  }
};
