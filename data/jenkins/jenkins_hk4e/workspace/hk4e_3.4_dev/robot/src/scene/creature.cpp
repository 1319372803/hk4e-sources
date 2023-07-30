// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/creature.cpp

// Line 17: range 000000000048164C-00000000004817FD
int32_t __cdecl Creature::fromProto(Creature *const this, const proto::SceneEntityInfo *entity_info)
{
  __m128i v2; // xmm0
  google::protobuf::uint32 v4; // edx
  int v5; // eax
  int v6; // ebx
  std::map<data::FightPropType,float>::mapped_type *v7; // rax
  int *v8; // rdx
  std::map<data::FightPropType,float>::key_type __k; // [rsp+10h] [rbp-40h] BYREF
  int idx; // [rsp+14h] [rbp-3Ch]
  const proto::FightPropPair *pair; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-30h] BYREF

  if ( Entity::fromProto(this, entity_info) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/creature.cpp",
      "fromProto",
      20);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v12, (const char (*)[24])"Entity::fromProto fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    v4 = proto::SceneEntityInfo::life_state(entity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->life_state_);
    }
    this->life_state_ = v4;
    for ( idx = 0; ; ++idx )
    {
      v5 = proto::SceneEntityInfo::fight_prop_list_size(entity_info);
      if ( idx >= v5 )
        break;
      pair = proto::SceneEntityInfo::fight_prop_list(entity_info, idx);
      *(float *)v2.m128i_i32 = proto::FightPropPair::prop_value(pair);
      v6 = _mm_cvtsi128_si32(v2);
      __k = proto::FightPropPair::prop_type(pair);
      v7 = std::map<data::FightPropType,float>::operator[](&this->fight_prop_map_, &__k);
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v7);
      }
      *v8 = v6;
    }
    return 0;
  }
};
