// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/avatar.cpp

// Line 18: range 0000000000480CB7-0000000000480D6E
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Avatar *avatar)
{
  unsigned __int64 v2; // rax
  std::string val; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8(avatar);
  v2 = (unsigned __int64)(avatar->_vptr_Entity + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(avatar->_vptr_Entity + 3);
  (*(void (__fastcall **)(std::string *, const Avatar *))v2)(&val, avatar);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(stream, &val);
  std::string::~string(&val);
  return stream;
};

// Line 24: range 0000000000480D70-0000000000480F4D
std::string *__cdecl Avatar::getDesc[abi:cxx11](std::string *retstr, const Avatar *const this)
{
  std::string __lhs; // [rsp+10h] [rbp-90h] BYREF
  std::string v4; // [rsp+30h] [rbp-70h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-50h] BYREF
  std::string v6; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  common::tools::StringUtils::numToStr<unsigned int>(&__rhs, this->avatar_id_);
  Entity::getDesc[abi:cxx11](&__lhs, this);
  std::operator+<char>(&v4, &__lhs, "[avatar_id:");
  std::operator+<char>(&v6, &v4, &__rhs);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &v6, "]");
  std::string::~string(&v6);
  std::string::~string(&v4);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  return retstr;
};

// Line 29: range 0000000000480F4E-0000000000481405
int32_t __cdecl Avatar::fromProto(Avatar *const this, const proto::SceneEntityInfo *entity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  uint32_t v6; // edx
  uint32_t v7; // ecx
  Robot *Robot; // rax
  uint32_t uid; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const proto::SceneAvatarInfo *avatar_info; // [rsp+10h] [rbp-D0h]
  Player *player; // [rsp+18h] [rbp-C8h]
  AvatarPtr p_cur_avatar_ptr__out; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 entity_id:35 48 4 7 guid:39 64 4 10 peer_id:40";
  *(_QWORD *)(v2 + 16) = Avatar::fromProto;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  if ( Creature::fromProto(this, entity_info) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/avatar.cpp",
      "fromProto",
      32);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v22, (const char (*)[16])"fromProto fails");
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = -1;
  }
  else
  {
    *(_DWORD *)(v2 + 32) = proto::SceneEntityInfo::entity_id(entity_info);
    avatar_info = proto::SceneEntityInfo::avatar(entity_info);
    v6 = proto::SceneAvatarInfo::uid(avatar_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->uid_);
    }
    this->uid_ = v6;
    v7 = proto::SceneAvatarInfo::avatar_id(avatar_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->avatar_id_);
    }
    this->avatar_id_ = v7;
    *(_DWORD *)(v2 + 48) = proto::SceneAvatarInfo::guid(avatar_info);
    *(_DWORD *)(v2 + 64) = proto::SceneAvatarInfo::peer_id(avatar_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ptr_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->scene_ptr_);
    if ( this->scene_ptr_ )
    {
      Robot = Scene::getRobot(this->scene_ptr_);
      player = Robot::getPlayer(Robot);
      if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->uid_);
      }
      uid = this->uid_;
      if ( uid == Player::getUid(player) )
      {
        toThisPtr<Avatar>((Avatar *)&p_cur_avatar_ptr__out);
        Player::setCurAvatar(player, &p_cur_avatar_ptr__out);
        std::shared_ptr<Avatar>::~shared_ptr(&p_cur_avatar_ptr__out);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/avatar.cpp",
          "fromProto",
          50);
        v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v22,
                (const char (*)[33])"meet other player's avatar, uid:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->uid_);
        v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])", avatar_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->avatar_id_);
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", entity_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 32));
        v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])", guid:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])", peer_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
    }
    result = 0;
  }
  if ( v23 == (char *)v2 )
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
  return result;
};

// Line 57: range 0000000000481406-000000000048164A
int32_t __cdecl Avatar::fromProto(Avatar *const this, const proto::AvatarInfo *avatar_info)
{
  uint32_t v2; // ecx
  uint64_t v3; // rax
  const proto::PropValue *v4; // r8
  std::map<data::PropType,proto::PropValue> *p_prop_map; // rcx
  const proto::PropValue *v6; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::PropType,proto::PropValue> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  data::PropType v10; // [rsp+14h] [rbp-8Ch] BYREF
  const google::protobuf::Map<unsigned int,proto::PropValue> *prop_map; // [rsp+18h] [rbp-88h]
  const google::protobuf::Map<unsigned int,proto::PropValue> *__for_range; // [rsp+20h] [rbp-80h]
  const unsigned int *p_prop_type; // [rsp+28h] [rbp-78h]
  google::protobuf::Map<unsigned int,proto::PropValue>::const_iterator __for_begin; // [rsp+30h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,proto::PropValue>::const_iterator __for_end; // [rsp+50h] [rbp-50h] BYREF
  common::milog::MiLogStream v16; // [rsp+70h] [rbp-30h] BYREF

  v2 = proto::AvatarInfo::avatar_id(avatar_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_id_);
  }
  this->avatar_id_ = v2;
  v3 = proto::AvatarInfo::guid(avatar_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    v3 = __asan_report_store8();
  this->guid_ = v3;
  prop_map = proto::AvatarInfo::prop_map(avatar_info);
  __for_range = prop_map;
  google::protobuf::Map<unsigned int,proto::PropValue>::begin(&__for_begin, prop_map);
  google::protobuf::Map<unsigned int,proto::PropValue>::end(&__for_end, prop_map);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_prop_type = (const unsigned int *)google::protobuf::Map<unsigned int,proto::PropValue>::const_iterator::operator*(&__for_begin);
    p_prop_map = &this->prop_map_;
    v6 = (const proto::PropValue *)(p_prop_type + 2);
    if ( *(_BYTE *)(((unsigned __int64)p_prop_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_prop_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p_prop_type);
    }
    v10 = *p_prop_type;
    v7 = std::map<data::PropType,proto::PropValue>::emplace<data::PropType,proto::PropValue const&>(
           p_prop_map,
           &v10,
           v6,
           (data::PropType *)p_prop_map,
           v4);
    if ( !v7.second )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/avatar.cpp",
        "fromProto",
        65);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v16,
             (const char (*)[21])"duplicate prop type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, p_prop_type);
      common::milog::MiLogStream::~MiLogStream(&v16);
      return -1;
    }
    google::protobuf::Map<unsigned int,proto::PropValue>::const_iterator::operator++(&__for_begin);
  }
  return 0;
};
