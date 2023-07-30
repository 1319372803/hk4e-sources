// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/monster.cpp

// Line 17: range 0000000000482ACA-0000000000482B81
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Monster *monster)
{
  unsigned __int64 v2; // rax
  std::string val; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)monster >> 3) + 0x7FFF8000) )
    __asan_report_load8(monster);
  v2 = (unsigned __int64)(monster->_vptr_Entity + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(monster->_vptr_Entity + 3);
  (*(void (__fastcall **)(std::string *, const Monster *))v2)(&val, monster);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(stream, &val);
  std::string::~string(&val);
  return stream;
};

// Line 23: range 0000000000482B82-0000000000482D57
std::string *__cdecl Monster::getDesc[abi:cxx11](std::string *retstr, const Monster *const this)
{
  std::string __lhs; // [rsp+10h] [rbp-90h] BYREF
  std::string v4; // [rsp+30h] [rbp-70h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-50h] BYREF
  std::string v6; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->monster_id_);
  }
  std::to_string(&__rhs, this->monster_id_);
  Entity::getDesc[abi:cxx11](&__lhs, this);
  std::operator+<char>(&v4, &__lhs, "[monster_id:");
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

// Line 28: range 0000000000482D58-0000000000482EFB
int32_t __cdecl Monster::fromProto(Monster *const this, const proto::SceneEntityInfo *entity_info)
{
  uint32_t v3; // edx
  uint32_t v4; // ecx
  uint32_t v5; // edx
  const proto::SceneMonsterInfo *monster_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( Creature::fromProto(this, entity_info) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/monster.cpp",
      "fromProto",
      31);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"fromProto fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    monster_info = proto::SceneEntityInfo::monster(entity_info);
    v3 = proto::SceneMonsterInfo::monster_id(monster_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->monster_id_);
    }
    this->monster_id_ = v3;
    v4 = proto::SceneMonsterInfo::group_id(monster_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->group_id_);
    }
    this->group_id_ = v4;
    v5 = proto::SceneMonsterInfo::config_id(monster_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->config_id_);
    }
    this->config_id_ = v5;
    return 0;
  }
};
