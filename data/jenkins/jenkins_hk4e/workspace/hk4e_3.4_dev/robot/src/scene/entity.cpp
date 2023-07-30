// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/entity.cpp

// Line 17: range 00000000004817FE-000000000048192E
bool __cdecl operator<(const EntityGroupIdConfigIdUnionKey *lhs, const EntityGroupIdConfigIdUnionKey *rhs)
{
  uint32_t group_id; // ecx
  uint32_t config_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  group_id = lhs->group_id;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  if ( group_id != rhs->group_id )
    return lhs->group_id < rhs->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->config_id);
  }
  config_id = lhs->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->config_id);
  }
  return config_id < rhs->config_id;
};

// Line 26: range 000000000048192F-00000000004819E6
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Entity *entity)
{
  unsigned __int64 v2; // rax
  std::string val; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8(entity);
  v2 = (unsigned __int64)(entity->_vptr_Entity + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(entity->_vptr_Entity + 3);
  (*(void (__fastcall **)(std::string *, const Entity *))v2)(&val, entity);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(stream, &val);
  std::string::~string(&val);
  return stream;
};

// Line 32: range 00000000004819E8-0000000000481B27
std::string *__cdecl Entity::getDesc[abi:cxx11](std::string *retstr, const Entity *const this)
{
  std::string __rhs; // [rsp+10h] [rbp-50h] BYREF
  std::string __lhs; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entity_id_);
  }
  common::tools::StringUtils::numToStr<unsigned int>(&__rhs, this->entity_id_);
  std::operator+<char>(&__lhs, "[entity_id:", &__rhs);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &__lhs, "]");
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  return retstr;
};

// Line 37: range 0000000000481B28-0000000000481F3A
int32_t __cdecl Entity::fromProto(Entity *const this, const proto::SceneEntityInfo *entity_info)
{
  unsigned __int64 v2; // rax
  uint32_t v4; // edx
  const std::string *v5; // rax
  proto::MotionState v6; // edx
  const proto::Vector *v7; // rax
  const proto::Vector *v8; // rax
  const proto::Vector *v9; // rax
  int v10; // eax
  const proto::PropValue *v11; // r12
  proto::PropValue *v12; // rax
  std::map<data::PropType,proto::PropValue>::key_type __k; // [rsp+14h] [rbp-5Ch] BYREF
  int idx; // [rsp+18h] [rbp-58h]
  proto::ProtEntityType entity_type; // [rsp+1Ch] [rbp-54h]
  const proto::MotionInfo *montion_info; // [rsp+20h] [rbp-50h]
  const proto::PropPair *pair; // [rsp+28h] [rbp-48h]
  Vector3 v18; // [rsp+34h] [rbp-3Ch] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = (unsigned __int64)(this->_vptr_Entity + 2);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(this->_vptr_Entity + 2);
  entity_type = (*(unsigned int (__fastcall **)(Entity *const))v2)(this);
  if ( entity_type == proto::SceneEntityInfo::entity_type(entity_info) )
  {
    v4 = proto::SceneEntityInfo::entity_id(entity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->entity_id_);
    }
    this->entity_id_ = v4;
    v5 = proto::SceneEntityInfo::name[abi:cxx11](entity_info);
    std::string::operator=(&this->name_, v5);
    montion_info = proto::SceneEntityInfo::motion_info(entity_info);
    v6 = proto::MotionInfo::state(montion_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->motion_state_);
    }
    this->motion_state_ = v6;
    v7 = proto::MotionInfo::pos(montion_info);
    Vector3::Vector3(&v18, v7);
    if ( *(char *)(((unsigned __int64)&this->pos_ >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&this->pos_.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos_.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->pos_, 12LL);
    }
    this->pos_ = v18;
    v8 = proto::MotionInfo::rot(montion_info);
    Vector3::Vector3(&v18, v8);
    if ( *(char *)(((unsigned __int64)&this->rot_ >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&this->rot_.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot_.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->rot_, 12LL);
    }
    this->rot_ = v18;
    v9 = proto::MotionInfo::speed(montion_info);
    Vector3::Vector3(&v18, v9);
    if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->speed_ >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->speed_ >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->speed_.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 111) & 7) >= *(_BYTE *)((((unsigned __int64)&this->speed_.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->speed_, 12LL);
    }
    this->speed_ = v18;
    for ( idx = 0; ; ++idx )
    {
      v10 = proto::SceneEntityInfo::prop_list_size(entity_info);
      if ( idx >= v10 )
        break;
      pair = proto::SceneEntityInfo::prop_list(entity_info, idx);
      v11 = proto::PropPair::prop_value(pair);
      __k = proto::PropPair::type(pair);
      v12 = std::map<data::PropType,proto::PropValue>::operator[](&this->prop_map_, &__k);
      proto::PropValue::operator=(v12, v11);
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/entity.cpp",
      "fromProto",
      41);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v19, (const char (*)[21])"entity type mismatch");
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -1;
  }
};

// Line 60: range 0000000000481F3C-0000000000482068
void __cdecl Entity::getMotionInfo(const Entity *const this, proto::MotionInfo *motion_info)
{
  proto::Vector *proto_pos; // [rsp+18h] [rbp-38h]
  proto::Vector *proto_rot; // [rsp+20h] [rbp-30h]
  proto::Vector *proto_speed; // [rsp+28h] [rbp-28h]
  proto::Vector from; // [rsp+30h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->motion_state_);
  }
  proto::MotionInfo::set_state(motion_info, this->motion_state_);
  proto_pos = proto::MotionInfo::mutable_pos(motion_info);
  Vector3::operator proto::Vector(&from, &this->pos_);
  proto::Vector::operator=(proto_pos, &from);
  proto::Vector::~Vector(&from);
  proto_rot = proto::MotionInfo::mutable_rot(motion_info);
  Vector3::operator proto::Vector(&from, &this->rot_);
  proto::Vector::operator=(proto_rot, &from);
  proto::Vector::~Vector(&from);
  proto_speed = proto::MotionInfo::mutable_speed(motion_info);
  Vector3::operator proto::Vector(&from, &this->speed_);
  proto::Vector::operator=(proto_speed, &from);
  proto::Vector::~Vector(&from);
};

// Line 71: range 000000000048206A-0000000000482294
void __cdecl Entity::setMotionInfo(Entity *const this, const proto::MotionInfo *montion_info)
{
  proto::MotionState v2; // edx
  const proto::Vector *v3; // rax
  const proto::Vector *v4; // rax
  const proto::Vector *v5; // rax
  Vector3 v6; // [rsp+14h] [rbp-Ch] BYREF

  v2 = proto::MotionInfo::state(montion_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->motion_state_);
  }
  this->motion_state_ = v2;
  v3 = proto::MotionInfo::pos(montion_info);
  Vector3::Vector3(&v6, v3);
  if ( *(char *)(((unsigned __int64)&this->pos_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos_, 12LL);
  }
  this->pos_ = v6;
  v4 = proto::MotionInfo::rot(montion_info);
  Vector3::Vector3(&v6, v4);
  if ( *(char *)(((unsigned __int64)&this->rot_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->rot_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot_, 12LL);
  }
  this->rot_ = v6;
  v5 = proto::MotionInfo::speed(montion_info);
  Vector3::Vector3(&v6, v5);
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->speed_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->speed_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->speed_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 111) & 7) >= *(_BYTE *)((((unsigned __int64)&this->speed_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->speed_, 12LL);
  }
  this->speed_ = v6;
};

// Line 79: range 0000000000482296-000000000048237E
void __cdecl Entity::updatePropVal(Entity *const this, const PropValueMap *prop_map)
{
  const proto::PropValue *v2; // rbx
  std::map<data::PropType,proto::PropValue> *p_prop_map; // rcx
  proto::PropValue *v4; // rax
  std::map<data::PropType,proto::PropValue>::key_type __k; // [rsp+1Ch] [rbp-64h] BYREF
  const google::protobuf::Map<unsigned int,proto::PropValue> *__for_range; // [rsp+20h] [rbp-60h]
  const unsigned int *p_prop_type; // [rsp+28h] [rbp-58h]
  google::protobuf::Map<unsigned int,proto::PropValue>::const_iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,proto::PropValue>::const_iterator __for_end; // [rsp+50h] [rbp-30h] BYREF

  __for_range = prop_map;
  google::protobuf::Map<unsigned int,proto::PropValue>::begin(&__for_begin, prop_map);
  google::protobuf::Map<unsigned int,proto::PropValue>::end(&__for_end, prop_map);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_prop_type = (const unsigned int *)google::protobuf::Map<unsigned int,proto::PropValue>::const_iterator::operator*(&__for_begin);
    v2 = (const proto::PropValue *)(p_prop_type + 2);
    p_prop_map = &this->prop_map_;
    if ( *(_BYTE *)(((unsigned __int64)p_prop_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_prop_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p_prop_type);
    }
    __k = *p_prop_type;
    v4 = std::map<data::PropType,proto::PropValue>::operator[](p_prop_map, &__k);
    proto::PropValue::operator=(v4, v2);
    google::protobuf::Map<unsigned int,proto::PropValue>::const_iterator::operator++(&__for_begin);
  }
};

// Line 87: range 0000000000482380-00000000004824EC
google::protobuf::int64 __fastcall Entity::findIntPropVal(Entity *const this, data::PropType prop_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::int64 result; // rax
  std::_Rb_tree_iterator<std::pair<const data::PropType,proto::PropValue> >::_Self __y; // [rsp+10h] [rbp-90h] BYREF
  proto::PropValue *prop_val; // [rsp+18h] [rbp-88h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 prop_type:86 64 8 5 it:88";
  *(_QWORD *)(v2 + 16) = Entity::findIntPropVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = prop_type;
  *(std::map<data::PropType,proto::PropValue>::iterator *)(v2 + 64) = std::map<data::PropType,proto::PropValue>::find(
                                                                        &this->prop_map_,
                                                                        (const std::map<data::PropType,proto::PropValue>::key_type *)(v2 + 48));
  __y._M_node = std::map<data::PropType,proto::PropValue>::end(&this->prop_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::PropType,proto::PropValue> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    prop_val = &std::_Rb_tree_iterator<std::pair<data::PropType const,proto::PropValue>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::PropType,proto::PropValue> > *const)(v2 + 64))->second;
    result = proto::PropValue::ival(prop_val);
  }
  if ( v8 == (char *)v2 )
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

// Line 96: range 00000000004824EE-0000000000482663
float __fastcall Entity::findFloatPropVal(Entity *const this, data::PropType prop_type, __m128i a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  float v6; // eax
  float result; // xmm0_4
  std::_Rb_tree_iterator<std::pair<const data::PropType,proto::PropValue> >::_Self __y; // [rsp+10h] [rbp-90h] BYREF
  proto::PropValue *prop_val; // [rsp+18h] [rbp-88h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 prop_type:95 64 8 5 it:97";
  *(_QWORD *)(v3 + 16) = Entity::findFloatPropVal;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = prop_type;
  *(std::map<data::PropType,proto::PropValue>::iterator *)(v3 + 64) = std::map<data::PropType,proto::PropValue>::find(
                                                                        &this->prop_map_,
                                                                        (const std::map<data::PropType,proto::PropValue>::key_type *)(v3 + 48));
  __y._M_node = std::map<data::PropType,proto::PropValue>::end(&this->prop_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::PropType,proto::PropValue> >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = 0.0;
  }
  else
  {
    prop_val = &std::_Rb_tree_iterator<std::pair<data::PropType const,proto::PropValue>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::PropType,proto::PropValue> > *const)(v3 + 64))->second;
    *(float *)a3.m128i_i32 = proto::PropValue::fval(prop_val);
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  }
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
