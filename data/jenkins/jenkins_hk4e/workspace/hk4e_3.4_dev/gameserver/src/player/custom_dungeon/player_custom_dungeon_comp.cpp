// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/custom_dungeon/player_custom_dungeon_comp.cpp

// Line 33: range 0000000014164B4A-0000000014164E11
void __cdecl CustomDungeonBlock::fromRedis(
        CustomDungeonBlock *const this,
        const proto::CustomDungeonBlockRedisData *proto_block)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  float v8; // xmm0_4
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rdx
  float v14; // xmm0_4
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rdx
  float v18; // xmm0_4
  __int64 v19; // rdx
  const proto::CustomDungeonBlockRedisData *proto_blocka; // [rsp+0h] [rbp-20h]
  const proto::Vector3Int *proto_pos; // [rsp+10h] [rbp-10h]
  const proto::Vector3Int *proto_rot; // [rsp+18h] [rbp-8h]

  proto_blocka = proto_block;
  v2 = proto::CustomDungeonBlockRedisData::guid(proto_block);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto_block) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto_block, v4);
  this->guid = v2;
  v5 = proto::CustomDungeonBlockRedisData::block_id(proto_blocka);
  v6 = *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000);
  LOBYTE(proto_block) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->block_id, proto_block, v7);
  this->block_id = v5;
  proto_pos = proto::CustomDungeonBlockRedisData::pos(proto_blocka);
  v8 = (float)proto::Vector3Int::x(proto_pos);
  v9 = (*(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->pos, (((_BYTE)this + 8) & 7u) + 3, v9);
  this->pos.x = v8;
  v10 = (float)proto::Vector3Int::y(proto_pos);
  v11 = (*(_BYTE *)(((unsigned __int64)&this->pos.y >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pos.y >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->pos.y, (((_BYTE)this + 12) & 7u) + 3, v11);
  this->pos.y = v10;
  v12 = (float)proto::Vector3Int::z(proto_pos);
  v13 = (*(_BYTE *)(((unsigned __int64)&this->pos.z >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pos.z >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->pos.z, (((_BYTE)this + 16) & 7u) + 3, v13);
  this->pos.z = v12;
  proto_rot = proto::CustomDungeonBlockRedisData::rot(proto_blocka);
  v14 = (float)proto::Vector3Int::x(proto_rot);
  v15 = (*(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store4(&this->rot, (((_BYTE)this + 20) & 7u) + 3, v15);
  this->rot.x = v14;
  v16 = (float)proto::Vector3Int::y(proto_rot);
  v17 = (*(_BYTE *)(((unsigned __int64)&this->rot.y >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot.y >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store4(&this->rot.y, (((_BYTE)this + 24) & 7u) + 3, v17);
  this->rot.y = v16;
  v18 = (float)proto::Vector3Int::z(proto_rot);
  v19 = (*(_BYTE *)(((unsigned __int64)&this->rot.z >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot.z >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_store4(&this->rot.z, (((_BYTE)this + 28) & 7u) + 3, v19);
  this->rot.z = v18;
};

// Line 47: range 0000000014164E12-00000000141650E3
void __cdecl CustomDungeonBlock::toRedis(
        const CustomDungeonBlock *const this,
        proto::CustomDungeonBlockRedisData *proto_block)
{
  proto::Vector3Int *proto_pos; // [rsp+10h] [rbp-10h]
  proto::Vector3Int *proto_rot; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::CustomDungeonBlockRedisData::set_guid(proto_block, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->block_id);
  }
  proto::CustomDungeonBlockRedisData::set_block_id(proto_block, this->block_id);
  proto_pos = proto::CustomDungeonBlockRedisData::mutable_pos(proto_block);
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->pos);
  }
  proto::Vector3Int::set_x(proto_pos, (int)this->pos.x);
  if ( *(_BYTE *)(((unsigned __int64)&this->pos.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pos.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->pos.y);
  }
  proto::Vector3Int::set_y(proto_pos, (int)this->pos.y);
  if ( *(_BYTE *)(((unsigned __int64)&this->pos.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pos.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->pos.z);
  }
  proto::Vector3Int::set_z(proto_pos, (int)this->pos.z);
  proto_rot = proto::CustomDungeonBlockRedisData::mutable_rot(proto_block);
  if ( *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->rot);
  }
  proto::Vector3Int::set_x(proto_rot, (int)this->rot.x);
  if ( *(_BYTE *)(((unsigned __int64)&this->rot.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->rot.y);
  }
  proto::Vector3Int::set_y(proto_rot, (int)this->rot.y);
  if ( *(_BYTE *)(((unsigned __int64)&this->rot.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->rot.z);
  }
  proto::Vector3Int::set_z(proto_rot, (int)this->rot.z);
};

// Line 61: range 00000000141650E4-00000000141652D1
void __cdecl CustomDungeonBlock::fromClient(
        CustomDungeonBlock *const this,
        const proto::CustomDungeonBlock *proto_block)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  const proto::Vector *v8; // rax
  const proto::Vector *v9; // rax
  const proto::CustomDungeonBlock *proto_blocka; // [rsp+0h] [rbp-20h]
  Vector3 v11; // [rsp+14h] [rbp-Ch] BYREF

  proto_blocka = proto_block;
  v2 = proto::CustomDungeonBlock::guid(proto_block);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto_block) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto_block, v4);
  this->guid = v2;
  v5 = proto::CustomDungeonBlock::block_id(proto_blocka);
  v6 = *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000);
  LOBYTE(proto_block) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->block_id, proto_block, v7);
  this->block_id = v5;
  v8 = proto::CustomDungeonBlock::pos(proto_blocka);
  Vector3::Vector3(&v11, v8);
  if ( (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  this->pos = v11;
  v9 = proto::CustomDungeonBlock::rot(proto_blocka);
  Vector3::Vector3(&v11, v9);
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  this->rot = v11;
};

// Line 69: range 00000000141652D2-0000000014165440
void __cdecl CustomDungeonBlock::toClient(const CustomDungeonBlock *const this, proto::CustomDungeonBlock *proto_block)
{
  proto::Vector *v2; // rax
  proto::Vector *v3; // rax
  proto::Vector from; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::CustomDungeonBlock::set_guid(proto_block, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->block_id);
  }
  proto::CustomDungeonBlock::set_block_id(proto_block, this->block_id);
  Vector3::operator proto::Vector(&from, &this->pos);
  v2 = proto::CustomDungeonBlock::mutable_pos(proto_block);
  proto::Vector::operator=(v2, &from);
  proto::Vector::~Vector(&from);
  Vector3::operator proto::Vector(&from, &this->rot);
  v3 = proto::CustomDungeonBlock::mutable_rot(proto_block);
  proto::Vector::operator=(v3, &from);
  proto::Vector::~Vector(&from);
};

// Line 77: range 0000000014165442-00000000141656FD
void __cdecl CustomDungeonRoom::fromRedis(
        CustomDungeonRoom *const this,
        const proto::CustomDungeonRoomRedisData *proto_room)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rdx
  char v6; // al
  CustomDungeonBlock *v7; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  const proto::CustomDungeonRoomRedisData *proto_rooma; // [rsp+0h] [rbp-F0h]
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBlockRedisData>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBlockRedisData>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonBlockRedisData> *__for_range; // [rsp+20h] [rbp-D0h]
  const proto::CustomDungeonBlockRedisData *proto_block; // [rsp+28h] [rbp-C8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-C0h] BYREF
  char v16[160]; // [rsp+50h] [rbp-A0h] BYREF

  proto_rooma = proto_room;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 36 8 block:82";
  *(_QWORD *)(v2 + 16) = CustomDungeonRoom::fromRedis;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -217841664;
  v4[536862723] = -202116109;
  v5 = proto::CustomDungeonRoomRedisData::room_id(proto_room);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto_room) = v6 != 0;
    __asan_report_store4(this, proto_room, v5);
  }
  this->room_id = v5;
  std::unordered_map<unsigned int,CustomDungeonBlock>::clear(&this->block_map);
  __for_range = proto::CustomDungeonRoomRedisData::block_list(proto_rooma);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBlockRedisData>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBlockRedisData>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBlockRedisData const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto_block = google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBlockRedisData const>::operator*(&__for_begin);
    CustomDungeonBlock::CustomDungeonBlock((CustomDungeonBlock *const)(v2 + 48));
    CustomDungeonBlock::fromRedis((CustomDungeonBlock *const)(v2 + 48), proto_block);
    v8 = std::unordered_map<unsigned int,CustomDungeonBlock>::emplace<unsigned int &,CustomDungeonBlock&>(
           &this->block_map,
           (unsigned int *)(v2 + 48),
           (CustomDungeonBlock *)(v2 + 48),
           (unsigned int *)&this->block_map,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "fromRedis",
        86);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v15,
             (const char (*)[22])"duplicate block guid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBlockRedisData const>::operator++(&__for_begin);
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 92: range 00000000141656FE-00000000141657F7
void __cdecl CustomDungeonRoom::toRedis(
        const CustomDungeonRoom *const this,
        proto::CustomDungeonRoomRedisData *proto_room)
{
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::unordered_map<unsigned int,CustomDungeonBlock> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,CustomDungeonBlock> *v5; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonBlock> >::type *block_guid; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *block; // [rsp+40h] [rbp-10h]
  proto::CustomDungeonBlockRedisData *proto_block; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::CustomDungeonRoomRedisData::set_room_id(proto_room, this->room_id);
  __for_range = &this->block_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::begin(&this->block_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::end(&this->block_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CustomDungeonBlock>,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator*(&__for_begin);
    block_guid = std::get<0ul,unsigned int const,CustomDungeonBlock>(v5);
    block = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *)std::get<1ul,unsigned int const,CustomDungeonBlock>(v5);
    proto_block = proto::CustomDungeonRoomRedisData::add_block_list(proto_room);
    CustomDungeonBlock::toRedis(block, proto_block);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator++(&__for_begin);
  }
};

// Line 102: range 00000000141657F8-0000000014165AB3
void __cdecl CustomDungeonRoom::fromClient(CustomDungeonRoom *const this, const proto::CustomDungeonRoom *proto_room)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rdx
  char v6; // al
  CustomDungeonBlock *v7; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  const proto::CustomDungeonRoom *proto_rooma; // [rsp+0h] [rbp-F0h]
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBlock>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBlock>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonBlock> *__for_range; // [rsp+20h] [rbp-D0h]
  const proto::CustomDungeonBlock *proto_block; // [rsp+28h] [rbp-C8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-C0h] BYREF
  char v16[160]; // [rsp+50h] [rbp-A0h] BYREF

  proto_rooma = proto_room;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 36 9 block:107";
  *(_QWORD *)(v2 + 16) = CustomDungeonRoom::fromClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -217841664;
  v4[536862723] = -202116109;
  v5 = proto::CustomDungeonRoom::room_id(proto_room);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto_room) = v6 != 0;
    __asan_report_store4(this, proto_room, v5);
  }
  this->room_id = v5;
  std::unordered_map<unsigned int,CustomDungeonBlock>::clear(&this->block_map);
  __for_range = proto::CustomDungeonRoom::block_list(proto_rooma);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBlock>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBlock>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBlock const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto_block = google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBlock const>::operator*(&__for_begin);
    CustomDungeonBlock::CustomDungeonBlock((CustomDungeonBlock *const)(v2 + 48));
    CustomDungeonBlock::fromClient((CustomDungeonBlock *const)(v2 + 48), proto_block);
    v8 = std::unordered_map<unsigned int,CustomDungeonBlock>::emplace<unsigned int &,CustomDungeonBlock&>(
           &this->block_map,
           (unsigned int *)(v2 + 48),
           (CustomDungeonBlock *)(v2 + 48),
           (unsigned int *)&this->block_map,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "fromClient",
        111);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v15,
             (const char (*)[22])"duplicate block guid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBlock const>::operator++(&__for_begin);
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 117: range 0000000014165AB4-0000000014165BAD
void __cdecl CustomDungeonRoom::toClient(const CustomDungeonRoom *const this, proto::CustomDungeonRoom *proto_room)
{
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::unordered_map<unsigned int,CustomDungeonBlock> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,CustomDungeonBlock> *v5; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonBlock> >::type *block_guid; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *block; // [rsp+40h] [rbp-10h]
  proto::CustomDungeonBlock *proto_block; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::CustomDungeonRoom::set_room_id(proto_room, this->room_id);
  __for_range = &this->block_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::begin(&this->block_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::end(&this->block_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CustomDungeonBlock>,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator*(&__for_begin);
    block_guid = std::get<0ul,unsigned int const,CustomDungeonBlock>(v5);
    block = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *)std::get<1ul,unsigned int const,CustomDungeonBlock>(v5);
    proto_block = proto::CustomDungeonRoom::add_block_list(proto_room);
    CustomDungeonBlock::toClient(block, proto_block);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator++(&__for_begin);
  }
};

// Line 127: range 0000000014165BAE-0000000014165D28
uint32_t __cdecl CustomDungeonRoom::getDeployCost(const CustomDungeonRoom *const this)
{
  const CustomDungeonExcelConfigMgr *v1; // rcx
  uint32_t *p_block_id; // rax
  uint32_t room_cost; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  const CustomDungeonExcelConfigMgr *custom_dungeon_config_mgr; // [rsp+30h] [rbp-40h]
  const std::unordered_map<unsigned int,CustomDungeonBlock> *__for_range; // [rsp+38h] [rbp-38h]
  const std::pair<unsigned int const,CustomDungeonBlock> *v9; // [rsp+40h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonBlock> >::type *block_guid; // [rsp+48h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *block; // [rsp+50h] [rbp-20h]
  const data::CustomLevelComponentConfig *block_excel_config_ptr; // [rsp+58h] [rbp-18h]
  std::shared_ptr<Config> v13; // [rsp+60h] [rbp-10h] BYREF

  room_cost = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.custom_dungeon_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  __for_range = &this->block_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::begin(&this->block_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::end(&this->block_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CustomDungeonBlock>,false>(&__for_begin, &__for_end) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator*(&__for_begin);
    block_guid = std::get<0ul,unsigned int const,CustomDungeonBlock>(v9);
    block = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *)std::get<1ul,unsigned int const,CustomDungeonBlock>(v9);
    v1 = custom_dungeon_config_mgr;
    p_block_id = &block->block_id;
    if ( *(_BYTE *)(((unsigned __int64)p_block_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_block_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_block_id);
    }
    block_excel_config_ptr = data::CustomLevelExcelConfigMgrBase::findCustomLevelComponentConfig(v1, block->block_id);
    if ( block_excel_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&block_excel_config_ptr->component_cost >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&block_excel_config_ptr->component_cost >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&block_excel_config_ptr->component_cost);
      }
      room_cost += block_excel_config_ptr->component_cost;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator++(&__for_begin);
  }
  return room_cost;
};

// Line 143: range 0000000014165D2A-0000000014166096
void __cdecl CustomDungeonSetting::fromBin(
        CustomDungeonSetting *const this,
        const proto::CustomDungeonSettingBin *proto_setting)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int v5; // eax
  __int64 v6; // rdx
  char v7; // al
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rdx
  char v12; // al
  bool is_forbid_skill; // cl
  char v14; // dl
  __int64 v15; // rdx
  __int64 started; // rdx
  char v17; // al
  uint32_t v18; // ecx
  char v19; // dl
  __int64 v20; // rdx
  const proto::CustomDungeonSettingBin *proto_settinga; // [rsp+0h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h]
  char v25[96]; // [rsp+30h] [rbp-60h] BYREF

  proto_settinga = proto_setting;
  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 room_id:149";
  *(_QWORD *)(v2 + 16) = CustomDungeonSetting::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  LOBYTE(v5) = proto::CustomDungeonSettingBin::is_arrive_finish(proto_setting);
  v6 = v5;
  v7 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(proto_setting) = v7 != 0;
    __asan_report_store1(this, proto_setting, v6);
  }
  this->is_arrive_finish = v6;
  v8 = proto::CustomDungeonSettingBin::coin_limit(proto_settinga);
  v9 = *(_BYTE *)(((unsigned __int64)&this->coin_limit >> 3) + 0x7FFF8000);
  LOBYTE(proto_setting) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->coin_limit, proto_setting, v10);
  this->coin_limit = v8;
  v11 = proto::CustomDungeonSettingBin::time_limit(proto_settinga);
  v12 = *(_BYTE *)(((unsigned __int64)&this->time_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(proto_setting) = v12 != 0;
    __asan_report_store4(&this->time_limit, proto_setting, v11);
  }
  this->time_limit = v11;
  is_forbid_skill = proto::CustomDungeonSettingBin::is_forbid_skill(proto_settinga);
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_skill >> 3) + 0x7FFF8000);
  LOBYTE(proto_setting) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_forbid_skill, proto_setting, v15);
  this->is_forbid_skill = is_forbid_skill;
  std::set<unsigned int>::clear(&this->open_room_set);
  __for_range = proto::CustomDungeonSettingBin::open_room_list(proto_settinga);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    proto_setting = (const proto::CustomDungeonSettingBin *)(v2 + 32);
    std::set<unsigned int>::insert(&this->open_room_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  started = proto::CustomDungeonSettingBin::start_room_id(proto_settinga);
  v17 = *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(proto_setting) = v17 != 0;
    __asan_report_store4(&this->start_room_id, proto_setting, started);
  }
  this->start_room_id = started;
  v18 = proto::CustomDungeonSettingBin::life_num(proto_settinga);
  v19 = *(_BYTE *)(((unsigned __int64)&this->life_num >> 3) + 0x7FFF8000);
  LOBYTE(proto_setting) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->life_num, proto_setting, v20);
  this->life_num = v18;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 158: range 0000000014166098-0000000014166322
void __cdecl CustomDungeonSetting::toBin(
        const CustomDungeonSetting *const this,
        proto::CustomDungeonSettingBin *proto_setting)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  proto::CustomDungeonSettingBin::set_is_arrive_finish(proto_setting, this->is_arrive_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->coin_limit);
  }
  proto::CustomDungeonSettingBin::set_coin_limit(proto_setting, this->coin_limit);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->time_limit);
  }
  proto::CustomDungeonSettingBin::set_time_limit(proto_setting, this->time_limit);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_skill >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_skill >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_forbid_skill);
  }
  proto::CustomDungeonSettingBin::set_is_forbid_skill(proto_setting, this->is_forbid_skill);
  __for_range = &this->open_room_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->open_room_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->open_room_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::CustomDungeonSettingBin::add_open_room_list(proto_setting, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->start_room_id);
  }
  proto::CustomDungeonSettingBin::set_start_room_id(proto_setting, this->start_room_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->life_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_num);
  }
  proto::CustomDungeonSettingBin::set_life_num(proto_setting, this->life_num);
};

// Line 172: range 0000000014166324-0000000014166690
void __cdecl CustomDungeonSetting::fromClient(
        CustomDungeonSetting *const this,
        const proto::CustomDungeonSetting *proto_setting)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int v5; // eax
  __int64 v6; // rdx
  char v7; // al
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rdx
  char v12; // al
  bool is_forbid_skill; // cl
  char v14; // dl
  __int64 v15; // rdx
  __int64 started; // rdx
  char v17; // al
  uint32_t v18; // ecx
  char v19; // dl
  __int64 v20; // rdx
  const proto::CustomDungeonSetting *proto_settinga; // [rsp+0h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h]
  char v25[96]; // [rsp+30h] [rbp-60h] BYREF

  proto_settinga = proto_setting;
  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 room_id:178";
  *(_QWORD *)(v2 + 16) = CustomDungeonSetting::fromClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  LOBYTE(v5) = proto::CustomDungeonSetting::is_arrive_finish(proto_setting);
  v6 = v5;
  v7 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(proto_setting) = v7 != 0;
    __asan_report_store1(this, proto_setting, v6);
  }
  this->is_arrive_finish = v6;
  v8 = proto::CustomDungeonSetting::coin_limit(proto_settinga);
  v9 = *(_BYTE *)(((unsigned __int64)&this->coin_limit >> 3) + 0x7FFF8000);
  LOBYTE(proto_setting) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->coin_limit, proto_setting, v10);
  this->coin_limit = v8;
  v11 = proto::CustomDungeonSetting::time_limit(proto_settinga);
  v12 = *(_BYTE *)(((unsigned __int64)&this->time_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(proto_setting) = v12 != 0;
    __asan_report_store4(&this->time_limit, proto_setting, v11);
  }
  this->time_limit = v11;
  is_forbid_skill = proto::CustomDungeonSetting::is_forbid_skill(proto_settinga);
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_skill >> 3) + 0x7FFF8000);
  LOBYTE(proto_setting) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_forbid_skill, proto_setting, v15);
  this->is_forbid_skill = is_forbid_skill;
  std::set<unsigned int>::clear(&this->open_room_set);
  __for_range = proto::CustomDungeonSetting::open_room_list(proto_settinga);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    proto_setting = (const proto::CustomDungeonSetting *)(v2 + 32);
    std::set<unsigned int>::insert(&this->open_room_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  started = proto::CustomDungeonSetting::start_room_id(proto_settinga);
  v17 = *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(proto_setting) = v17 != 0;
    __asan_report_store4(&this->start_room_id, proto_setting, started);
  }
  this->start_room_id = started;
  v18 = proto::CustomDungeonSetting::life_num(proto_settinga);
  v19 = *(_BYTE *)(((unsigned __int64)&this->life_num >> 3) + 0x7FFF8000);
  LOBYTE(proto_setting) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->life_num, proto_setting, v20);
  this->life_num = v18;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 187: range 0000000014166692-000000001416691C
void __cdecl CustomDungeonSetting::toClient(
        const CustomDungeonSetting *const this,
        proto::CustomDungeonSetting *proto_setting)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  proto::CustomDungeonSetting::set_is_arrive_finish(proto_setting, this->is_arrive_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->coin_limit);
  }
  proto::CustomDungeonSetting::set_coin_limit(proto_setting, this->coin_limit);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->time_limit);
  }
  proto::CustomDungeonSetting::set_time_limit(proto_setting, this->time_limit);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_skill >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_skill >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_forbid_skill);
  }
  proto::CustomDungeonSetting::set_is_forbid_skill(proto_setting, this->is_forbid_skill);
  __for_range = &this->open_room_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->open_room_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->open_room_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::CustomDungeonSetting::add_open_room_list(proto_setting, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->start_room_id);
  }
  proto::CustomDungeonSetting::set_start_room_id(proto_setting, this->start_room_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->life_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_num);
  }
  proto::CustomDungeonSetting::set_life_num(proto_setting, this->life_num);
};

// Line 201: range 000000001416691E-0000000014166B7C
void __cdecl CustomDungeonAbstract::fromBin(
        CustomDungeonAbstract *const this,
        const proto::CustomDungeonAbstractBin *proto_abstract)
{
  __int64 v2; // rdx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  __int64 publish_time; // rdx
  char v8; // al
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // ebx
  google::protobuf::Map<unsigned int,unsigned int>::const_reference v14; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  unsigned int *v16; // rdx
  char v17; // cl
  const proto::CustomDungeonAbstractBin *proto_abstracta; // [rsp+0h] [rbp-70h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+10h] [rbp-60h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_id; // [rsp+18h] [rbp-58h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-30h] BYREF

  proto_abstracta = proto_abstract;
  v2 = proto::CustomDungeonAbstractBin::finish_room_id(proto_abstract);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(proto_abstract) = v3 != 0;
    __asan_report_store4(this, proto_abstract, v2);
  }
  this->finish_room_id = v2;
  v4 = proto::CustomDungeonAbstractBin::total_coin_num(proto_abstracta);
  v5 = *(_BYTE *)(((unsigned __int64)&this->total_coin_num >> 3) + 0x7FFF8000);
  LOBYTE(proto_abstract) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->total_coin_num, proto_abstract, v6);
  this->total_coin_num = v4;
  publish_time = proto::CustomDungeonAbstractBin::first_publish_time(proto_abstracta);
  v8 = *(_BYTE *)(((unsigned __int64)&this->first_publish_time >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(proto_abstract) = v8 != 0;
    __asan_report_store4(&this->first_publish_time, proto_abstract, publish_time);
  }
  this->first_publish_time = publish_time;
  v9 = proto::CustomDungeonAbstractBin::last_publish_time(proto_abstracta);
  v10 = *(_BYTE *)(((unsigned __int64)&this->last_publish_time >> 3) + 0x7FFF8000);
  LOBYTE(proto_abstract) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->last_publish_time, proto_abstract, v11);
  this->last_publish_time = v9;
  std::map<unsigned int,unsigned int>::clear(&this->brick_statistics_map);
  __for_range = proto::CustomDungeonAbstractBin::brick_statistics_map(proto_abstracta);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    p_second = &p_id->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = p_id->second;
    v14 = p_id;
    v15 = std::map<unsigned int,unsigned int>::operator[](
            &this->brick_statistics_map,
            (const std::map<unsigned int,unsigned int>::key_type *)p_id);
    v16 = v15;
    v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
    {
      LOBYTE(v14) = v17 != 0;
      __asan_report_store4(v15, v14, v15);
    }
    *v16 = second;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
};

// Line 214: range 0000000014166B7E-0000000014166DE5
void __cdecl CustomDungeonAbstract::toBin(
        const CustomDungeonAbstract *const this,
        proto::CustomDungeonAbstractBin *proto_abstract)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v2; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v3; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v4; // rsi
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rdx
  char v7; // cl
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_brick_map; // [rsp+28h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::CustomDungeonAbstractBin::set_finish_room_id(proto_abstract, this->finish_room_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_coin_num);
  }
  proto::CustomDungeonAbstractBin::set_total_coin_num(proto_abstract, this->total_coin_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_publish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_publish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->first_publish_time);
  }
  proto::CustomDungeonAbstractBin::set_first_publish_time(proto_abstract, this->first_publish_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_publish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_publish_time);
  }
  proto::CustomDungeonAbstractBin::set_last_publish_time(proto_abstract, this->last_publish_time);
  proto_brick_map = proto::CustomDungeonAbstractBin::mutable_brick_statistics_map(proto_abstract);
  __for_range = &this->brick_statistics_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->brick_statistics_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->brick_statistics_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned int>(v12);
    v2 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
    num = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    v3 = *num;
    v4 = id;
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_brick_map, id);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(v5, v4, v5);
    }
    *v6 = v3;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 227: range 0000000014166DE6-000000001416704D
void __cdecl CustomDungeonAbstract::toClient(
        const CustomDungeonAbstract *const this,
        proto::CustomDungeonAbstract *proto_abstract)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v2; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v3; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v4; // rsi
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rdx
  char v7; // cl
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_brick_map; // [rsp+28h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::CustomDungeonAbstract::set_finish_room_id(proto_abstract, this->finish_room_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_coin_num);
  }
  proto::CustomDungeonAbstract::set_total_coin_num(proto_abstract, this->total_coin_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_publish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_publish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->first_publish_time);
  }
  proto::CustomDungeonAbstract::set_first_publish_time(proto_abstract, this->first_publish_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_publish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_publish_time);
  }
  proto::CustomDungeonAbstract::set_last_publish_time(proto_abstract, this->last_publish_time);
  proto_brick_map = proto::CustomDungeonAbstract::mutable_brick_statistics_map(proto_abstract);
  __for_range = &this->brick_statistics_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->brick_statistics_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->brick_statistics_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned int>(v12);
    v2 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
    num = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    v3 = *num;
    v4 = id;
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_brick_map, id);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(v5, v4, v5);
    }
    *v6 = v3;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 240: range 000000001416704E-000000001416719F
void __cdecl CustomDungeonSocial::fromRedis(
        CustomDungeonSocial *const this,
        const proto::CustomDungeonSocialRedisData *proto_social)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  uint32_t v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  const proto::CustomDungeonSocialRedisData *proto_sociala; // [rsp+0h] [rbp-10h]

  proto_sociala = proto_social;
  v2 = proto::CustomDungeonSocialRedisData::play_num(proto_social);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto_social) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto_social, v4);
  this->play_num = v2;
  v5 = proto::CustomDungeonSocialRedisData::like_num(proto_sociala);
  v6 = *(_BYTE *)(((unsigned __int64)&this->like_num >> 3) + 0x7FFF8000);
  LOBYTE(proto_social) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->like_num, proto_social, v7);
  this->like_num = v5;
  v8 = proto::CustomDungeonSocialRedisData::store_num(proto_sociala);
  v9 = *(_BYTE *)(((unsigned __int64)&this->store_num >> 3) + 0x7FFF8000);
  LOBYTE(proto_social) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->store_num, proto_social, v10);
  this->store_num = v8;
  v11 = proto::CustomDungeonSocialRedisData::win_num(proto_sociala);
  v12 = *(_BYTE *)(((unsigned __int64)&this->win_num >> 3) + 0x7FFF8000);
  LOBYTE(proto_social) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->win_num, proto_social, v13);
  this->win_num = v11;
};

// Line 248: range 00000000141671A0-00000000141672ED
void __cdecl CustomDungeonSocial::toClient(
        const CustomDungeonSocial *const this,
        proto::CustomDungeonSocial *proto_social)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::CustomDungeonSocial::set_play_num(proto_social, this->play_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->like_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->like_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->like_num);
  }
  proto::CustomDungeonSocial::set_like_num(proto_social, this->like_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->store_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->store_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->store_num);
  }
  proto::CustomDungeonSocial::set_store_num(proto_social, this->store_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->win_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->win_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->win_num);
  }
  proto::CustomDungeonSocial::set_win_num(proto_social, this->win_num);
};

// Line 256: range 00000000141672EE-0000000014167722
void __cdecl CustomDungeon::fromRedis(CustomDungeon *const this, const proto::ServerCustomDungeon *proto_dungeon)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint64_t v5; // rax
  __int64 v6; // rdx
  char v7; // al
  CustomDungeonRoom *v8; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonRoom> >,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  const proto::CustomDungeonSettingBin *v11; // rsi
  __int64 v12; // rdx
  char v13; // al
  bool is_liked; // cl
  char v15; // dl
  __int64 v16; // rdx
  __int64 publish_time; // rdx
  char v18; // al
  const proto::ServerCustomDungeon *proto_dungeona; // [rsp+0h] [rbp-F0h]
  google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData> *__for_range; // [rsp+20h] [rbp-D0h]
  const proto::CustomDungeonRoomRedisData *proto_room; // [rsp+28h] [rbp-C8h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-C0h] BYREF
  char v25[160]; // [rsp+50h] [rbp-A0h] BYREF

  proto_dungeona = proto_dungeon;
  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 8 room:262";
  *(_QWORD *)(v2 + 16) = CustomDungeon::fromRedis;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  v5 = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8(this, proto_dungeon);
  this->dungeon_guid = v5;
  v6 = proto::ServerCustomDungeon::dungeon_id(proto_dungeon);
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(proto_dungeon) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, proto_dungeon, v6);
  }
  this->dungeon_id = v6;
  std::map<unsigned int,CustomDungeonRoom>::clear(&this->room_map);
  __for_range = proto::ServerCustomDungeon::room_list(proto_dungeona);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonRoomRedisData>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonRoomRedisData const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto_room = google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonRoomRedisData const>::operator*(&__for_begin);
    CustomDungeonRoom::CustomDungeonRoom((CustomDungeonRoom *const)(v2 + 32));
    CustomDungeonRoom::fromRedis((CustomDungeonRoom *const)(v2 + 32), proto_room);
    v9 = std::map<unsigned int,CustomDungeonRoom>::emplace<unsigned int &,CustomDungeonRoom&>(
           &this->room_map,
           (unsigned int *)(v2 + 32),
           (CustomDungeonRoom *)(v2 + 32),
           (unsigned int *)&this->room_map,
           v8);
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "fromRedis",
        266);
      v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v24,
              (const char (*)[24])"duplicate room room_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    CustomDungeonRoom::~CustomDungeonRoom((CustomDungeonRoom *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonRoomRedisData const>::operator++(&__for_begin);
  }
  v11 = proto::ServerCustomDungeon::setting(proto_dungeona);
  CustomDungeonSetting::fromBin(&this->setting, v11);
  v12 = proto::ServerCustomDungeon::version(proto_dungeona);
  v13 = *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->version, v11, v12);
  }
  this->version = v12;
  is_liked = proto::ServerCustomDungeon::is_liked(proto_dungeona);
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_liked >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this - 115) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_liked, v11, v16);
  this->is_liked = is_liked;
  publish_time = proto::ServerCustomDungeon::first_publish_time(proto_dungeona);
  v18 = *(_BYTE *)(((unsigned __int64)&this->first_publish_time >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v11) = v18 != 0;
    __asan_report_store4(&this->first_publish_time, v11, publish_time);
  }
  this->first_publish_time = publish_time;
  if ( v25 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 276: range 0000000014167724-00000000141678CB
void __cdecl CustomDungeon::toRedis(const CustomDungeon *const this, proto::ServerCustomDungeon *proto_dungeon)
{
  proto::CustomDungeonSettingBin *v2; // rax
  std::map<unsigned int,CustomDungeonRoom>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,CustomDungeonRoom>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::map<unsigned int,CustomDungeonRoom> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,CustomDungeonRoom> *v6; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonRoom> >::type *room_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *room; // [rsp+40h] [rbp-20h]
  proto::CustomDungeonRoomRedisData *proto_room; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  proto::ServerCustomDungeon::set_dungeon_guid(proto_dungeon, this->dungeon_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_id);
  }
  proto::ServerCustomDungeon::set_dungeon_id(proto_dungeon, this->dungeon_id);
  __for_range = &this->room_map;
  __for_begin._M_node = std::map<unsigned int,CustomDungeonRoom>::begin(&this->room_map)._M_node;
  __for_end._M_node = std::map<unsigned int,CustomDungeonRoom>::end(&this->room_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator*(&__for_begin);
    room_id = std::get<0ul,unsigned int const,CustomDungeonRoom>(v6);
    room = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *)std::get<1ul,unsigned int const,CustomDungeonRoom>(v6);
    proto_room = proto::ServerCustomDungeon::add_room_list(proto_dungeon);
    CustomDungeonRoom::toRedis(room, proto_room);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator++(&__for_begin);
  }
  v2 = proto::ServerCustomDungeon::mutable_setting(proto_dungeon);
  CustomDungeonSetting::toBin(&this->setting, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->version);
  }
  proto::ServerCustomDungeon::set_version(proto_dungeon, this->version);
};

// Line 289: range 00000000141678CC-0000000014167A26
void __cdecl CustomDungeon::toClient(const CustomDungeon *const this, proto::CustomDungeon *proto_dungeon)
{
  proto::CustomDungeonSetting *v2; // rax
  std::map<unsigned int,CustomDungeonRoom>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,CustomDungeonRoom>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::map<unsigned int,CustomDungeonRoom> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,CustomDungeonRoom> *v6; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonRoom> >::type *room_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *room; // [rsp+40h] [rbp-20h]
  proto::CustomDungeonRoom *proto_room; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  proto::CustomDungeon::set_dungeon_guid(proto_dungeon, this->dungeon_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_id);
  }
  proto::CustomDungeon::set_dungeon_id(proto_dungeon, this->dungeon_id);
  __for_range = &this->room_map;
  __for_begin._M_node = std::map<unsigned int,CustomDungeonRoom>::begin(&this->room_map)._M_node;
  __for_end._M_node = std::map<unsigned int,CustomDungeonRoom>::end(&this->room_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator*(&__for_begin);
    room_id = std::get<0ul,unsigned int const,CustomDungeonRoom>(v6);
    room = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *)std::get<1ul,unsigned int const,CustomDungeonRoom>(v6);
    proto_room = proto::CustomDungeon::add_room_list(proto_dungeon);
    CustomDungeonRoom::toClient(room, proto_room);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator++(&__for_begin);
  }
  v2 = proto::CustomDungeon::mutable_setting(proto_dungeon);
  CustomDungeonSetting::toClient(&this->setting, v2);
};

// Line 301: range 0000000014167A28-0000000014167D8C
void __cdecl CustomDungeonBrief::fromBin(CustomDungeonBrief *const this, const proto::CustomDungeonBriefBin *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint64_t v5; // rax
  __int64 v6; // rdx
  char v7; // al
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  __int64 save_time; // rdx
  char v12; // al
  const proto::CustomDungeonSettingBin *v13; // rax
  const proto::CustomDungeonAbstractBin *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rdx
  char v17; // al
  const proto::CustomDungeonBriefBin *protoa; // [rsp+0h] [rbp-A0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-88h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-78h]
  char v22[112]; // [rsp+30h] [rbp-70h] BYREF

  protoa = proto;
  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 tag:309";
  *(_QWORD *)(v2 + 16) = CustomDungeonBrief::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::CustomDungeonBriefBin::dungeon_guid(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8(this, proto);
  this->dungeon_guid = v5;
  v6 = proto::CustomDungeonBriefBin::dungeon_id(proto);
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(proto) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, proto, v6);
  }
  this->dungeon_id = v6;
  v8 = proto::CustomDungeonBriefBin::state(protoa);
  v9 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->state, proto, v10);
  this->state = v8;
  save_time = proto::CustomDungeonBriefBin::last_save_time(protoa);
  v12 = *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(proto) = v12 != 0;
    __asan_report_store4(&this->last_save_time, proto, save_time);
  }
  this->last_save_time = save_time;
  v13 = proto::CustomDungeonBriefBin::setting(protoa);
  CustomDungeonSetting::fromBin(&this->setting, v13);
  v14 = proto::CustomDungeonBriefBin::abstract(protoa);
  CustomDungeonAbstract::fromBin(&this->abstract, v14);
  std::set<unsigned int>::clear(&this->tag_set);
  __for_range = proto::CustomDungeonBriefBin::tag_list(protoa);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    v14 = (const proto::CustomDungeonAbstractBin *)(v2 + 32);
    std::set<unsigned int>::insert(&this->tag_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  LOBYTE(v15) = proto::CustomDungeonBriefBin::is_psn_platform(protoa);
  v16 = v15;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_psn_platform >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(v14) = v17 != 0;
    __asan_report_store1(&this->is_psn_platform, v14, v16);
  }
  this->is_psn_platform = v16;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 317: range 0000000014167D8E-0000000014167FFE
void __cdecl CustomDungeonBrief::toBin(const CustomDungeonBrief *const this, proto::CustomDungeonBriefBin *proto)
{
  proto::CustomDungeonSettingBin *v2; // rax
  proto::CustomDungeonAbstractBin *v3; // rax
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  proto::CustomDungeonBriefBin::set_dungeon_guid(proto, this->dungeon_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_id);
  }
  proto::CustomDungeonBriefBin::set_dungeon_id(proto, this->dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::CustomDungeonBriefBin::set_state(proto, this->state);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_save_time);
  }
  proto::CustomDungeonBriefBin::set_last_save_time(proto, this->last_save_time);
  v2 = proto::CustomDungeonBriefBin::mutable_setting(proto);
  CustomDungeonSetting::toBin(&this->setting, v2);
  v3 = proto::CustomDungeonBriefBin::mutable_abstract(proto);
  CustomDungeonAbstract::toBin(&this->abstract, v3);
  __for_range = &this->tag_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->tag_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->tag_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::CustomDungeonBriefBin::add_tag_list(proto, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_psn_platform);
  proto::CustomDungeonBriefBin::set_is_psn_platform(proto, this->is_psn_platform);
};

// Line 332: range 0000000014168000-00000000141682D4
void __cdecl CustomDungeonBrief::toClient(const CustomDungeonBrief *const this, proto::CustomDungeonBrief *proto)
{
  proto::CustomDungeonSetting *v2; // rax
  proto::CustomDungeonAbstract *v3; // rax
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  proto::CustomDungeonSocial *v6; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  proto::CustomDungeonBrief::set_dungeon_guid(proto, this->dungeon_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_id);
  }
  proto::CustomDungeonBrief::set_dungeon_id(proto, this->dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::CustomDungeonBrief::set_state(proto, (proto::CustomDungeonState)this->state);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_save_time);
  }
  proto::CustomDungeonBrief::set_last_save_time(proto, this->last_save_time);
  v2 = proto::CustomDungeonBrief::mutable_setting(proto);
  CustomDungeonSetting::toClient(&this->setting, v2);
  v3 = proto::CustomDungeonBrief::mutable_abstract(proto);
  CustomDungeonAbstract::toClient(&this->abstract, v3);
  __for_range = &this->tag_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->tag_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->tag_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::CustomDungeonBrief::add_tag_list(proto, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->abstract.first_publish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->abstract.first_publish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->abstract.first_publish_time);
  }
  if ( this->abstract.first_publish_time )
  {
    v6 = proto::CustomDungeonBrief::mutable_social(proto);
    CustomDungeonSocial::toClient(&this->cached_social, v6);
    if ( *(char *)(((unsigned __int64)&this->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_psn_platform);
    proto::CustomDungeonBrief::set_is_psn_platform(proto, this->is_psn_platform);
  }
};

// Line 353: range 00000000141682D6-0000000014168403
void __cdecl CustomDungeonBrief::updateAbstract(
        CustomDungeonBrief *const this,
        const CustomDungeonAbstract *new_abstract)
{
  __int64 v2; // rdx
  uint32_t first_publish_time; // [rsp+18h] [rbp-8h]
  uint32_t last_publish_time; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->abstract.first_publish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->abstract.first_publish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->abstract.first_publish_time);
  }
  first_publish_time = this->abstract.first_publish_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->abstract.last_publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->abstract.last_publish_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->abstract.last_publish_time);
  }
  last_publish_time = this->abstract.last_publish_time;
  CustomDungeonAbstract::operator=(&this->abstract, new_abstract);
  if ( *(_BYTE *)(((unsigned __int64)&this->abstract.first_publish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->abstract.first_publish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->abstract.first_publish_time, new_abstract, &this->abstract.first_publish_time);
  }
  this->abstract.first_publish_time = first_publish_time;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->abstract.last_publish_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->abstract.last_publish_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->abstract.last_publish_time, (((_BYTE)this + 108) & 7u) + 3, v2);
  this->abstract.last_publish_time = last_publish_time;
};

// Line 362: range 0000000014168404-00000000141684E4
void __cdecl OfficialCustomDungeon::fromBin(
        OfficialCustomDungeon *const this,
        const proto::OfficialCustomDungeonBin *proto)
{
  __int64 v2; // rdx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  uint64_t v7; // rax
  const proto::OfficialCustomDungeonBin *protoa; // [rsp+0h] [rbp-10h]

  protoa = proto;
  v2 = proto::OfficialCustomDungeonBin::dungeon_id(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(proto) = v3 != 0;
    __asan_report_store4(this, proto, v2);
  }
  this->dungeon_id = v2;
  v4 = proto::OfficialCustomDungeonBin::win_times(protoa);
  v5 = *(_BYTE *)(((unsigned __int64)&this->win_times >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->win_times, proto, v6);
  this->win_times = v4;
  v7 = proto::OfficialCustomDungeonBin::dungeon_guid(protoa);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_guid >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8(&this->dungeon_guid, proto);
  this->dungeon_guid = v7;
};

// Line 369: range 00000000141684E6-00000000141685C7
void __cdecl OfficialCustomDungeon::toBin(
        const OfficialCustomDungeon *const this,
        proto::OfficialCustomDungeonBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::OfficialCustomDungeonBin::set_dungeon_id(proto, this->dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->win_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->win_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->win_times);
  }
  proto::OfficialCustomDungeonBin::set_win_times(proto, this->win_times);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->dungeon_guid);
  proto::OfficialCustomDungeonBin::set_dungeon_guid(proto, this->dungeon_guid);
};

// Line 376: range 00000000141685C8-000000001416866D
void __cdecl OfficialCustomDungeon::toClient(
        const OfficialCustomDungeon *const this,
        proto::OfficialCustomDungeon *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::OfficialCustomDungeon::set_dungeon_id(proto, this->dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->win_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->win_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->win_times);
  }
  proto::OfficialCustomDungeon::set_win_times(proto, this->win_times);
};

// Line 382: range 000000001416866E-00000000141686FD
void __cdecl CustomDungeonBattleRecord::fromBin(
        CustomDungeonBattleRecord *const this,
        const proto::CustomDungeonBattleRecord *proto)
{
  uint64_t v2; // rax
  __int64 v3; // rdx
  char v4; // al

  v2 = proto::CustomDungeonBattleRecord::dungeon_guid(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8(this, proto);
  this->dungeon_guid = v2;
  v3 = proto::CustomDungeonBattleRecord::min_cost_time(proto);
  v4 = *(_BYTE *)(((unsigned __int64)&this->min_cost_time >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(proto) = v4 != 0;
    __asan_report_store4(&this->min_cost_time, proto, v3);
  }
  this->min_cost_time = v3;
};

// Line 388: range 00000000141686FE-000000001416878F
void __cdecl CustomDungeonBattleRecord::toBin(
        const CustomDungeonBattleRecord *const this,
        proto::CustomDungeonBattleRecord *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  proto::CustomDungeonBattleRecord::set_dungeon_guid(proto, this->dungeon_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->min_cost_time);
  }
  proto::CustomDungeonBattleRecord::set_min_cost_time(proto, this->min_cost_time);
};

// Line 394: range 0000000014168790-0000000014169018
int32_t __cdecl PlayerCustomDungeonComp::fromBin(
        PlayerCustomDungeonComp *const this,
        const proto::PlayerDataBin *proto)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  void *p_for_end; // rsi
  CustomDungeonBrief *v6; // rax
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v11; // al
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefBin>::const_iterator *v12; // rsi
  OfficialCustomDungeon *v13; // rax
  std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::shared_ptr<OfficialCustomDungeon> *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  char v18; // al
  uint32_t v19; // ecx
  char v20; // dl
  __int64 v21; // rdx
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBattleRecord>::const_iterator *p_for_end_2; // rsi
  unsigned int v23; // eax
  __int64 v24; // rdx
  char v25; // al
  __int64 got_recommend_time; // rdx
  char v27; // al
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBattleRecord>::const_iterator __for_begin_2; // [rsp+18h] [rbp-248h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBattleRecord>::const_iterator __for_end_2; // [rsp+20h] [rbp-240h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefBin>::const_iterator __for_end; // [rsp+28h] [rbp-238h] BYREF
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-230h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin_1; // [rsp+38h] [rbp-228h]
  const proto::PlayerCustomDungeonCompBin *proto_comp; // [rsp+40h] [rbp-220h]
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefBin> *__for_range; // [rsp+48h] [rbp-218h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range_0; // [rsp+50h] [rbp-210h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-208h]
  const unsigned __int64 *dungeon_guid; // [rsp+60h] [rbp-200h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range_1; // [rsp+68h] [rbp-1F8h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end_1; // [rsp+70h] [rbp-1F0h]
  const unsigned __int64 *dungeon_guid_0; // [rsp+78h] [rbp-1E8h]
  const google::protobuf::RepeatedPtrField<proto::OfficialCustomDungeonBin> *__for_range_2; // [rsp+80h] [rbp-1E0h]
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonBattleRecord> *__for_range_3; // [rsp+88h] [rbp-1D8h]
  const proto::CustomDungeonBattleRecord *record_proto; // [rsp+90h] [rbp-1D0h]
  CustomDungeonBattleRecord *record; // [rsp+98h] [rbp-1C8h]
  const proto::OfficialCustomDungeonBin *official_proto; // [rsp+A0h] [rbp-1C0h]
  const proto::CustomDungeonBriefBin *proto_brief; // [rsp+A8h] [rbp-1B8h]
  char v48[432]; // [rsp+B0h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 24 official_dungeon_ptr:417 80 232 9 brief:398";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  v4[536862731] = -202116109;
  proto_comp = proto::PlayerDataBin::custom_dungeon_bin(proto);
  __for_range = proto::PlayerCustomDungeonCompBin::brief_list(proto_comp);
  __for_end_2.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::CustomDungeonBriefBin> *const)&__for_end_2,
            &__for_end) )
      break;
    proto_brief = google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::CustomDungeonBriefBin> *const)&__for_end_2);
    CustomDungeonBrief::CustomDungeonBrief((CustomDungeonBrief *const)(v2 + 80));
    CustomDungeonBrief::fromBin((CustomDungeonBrief *const)(v2 + 80), proto_brief);
    v6 = std::map<unsigned long,CustomDungeonBrief>::operator[](
           &this->brief_map_,
           (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v2 + 80));
    CustomDungeonBrief::operator=(v6, (const CustomDungeonBrief *)(v2 + 80));
    CustomDungeonBrief::~CustomDungeonBrief((CustomDungeonBrief *const)(v2 + 80));
    google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::CustomDungeonBriefBin> *const)&__for_end_2);
  }
  v7 = proto::PlayerCustomDungeonCompBin::dungeon_guid_idx(proto_comp);
  v8 = *(_BYTE *)(((unsigned __int64)&this->dungeon_guid_idx_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->dungeon_guid_idx_, p_for_end, v9);
  this->dungeon_guid_idx_ = v7;
  std::set<unsigned long>::clear(&this->store_dungeon_set_);
  __for_range_0 = proto::PlayerCustomDungeonCompBin::store_dungeon_list(proto_comp);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned long>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned long>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    dungeon_guid = __for_begin_0;
    p_for_end = (void *)__for_begin_0;
    std::set<unsigned long>::insert(&this->store_dungeon_set_, __for_begin_0++);
  }
  std::set<unsigned long>::clear(&this->last_recommend_set_);
  __for_range_1 = proto::PlayerCustomDungeonCompBin::last_recommend_list(proto_comp);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned long>::begin(__for_range_1);
  __for_end_1 = google::protobuf::RepeatedField<unsigned long>::end(__for_range_1);
  while ( __for_begin_1 != __for_end_1 )
  {
    dungeon_guid_0 = __for_begin_1;
    p_for_end = (void *)__for_begin_1;
    std::set<unsigned long>::insert(&this->last_recommend_set_, __for_begin_1++);
  }
  v10 = proto::PlayerCustomDungeonCompBin::group_id(proto_comp);
  v11 = *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_for_end) = v11 != 0;
    __asan_report_store4(&this->group_id_, p_for_end, v10);
  }
  this->group_id_ = v10;
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::clear(&this->official_dungeon_map_);
  __for_range_2 = proto::PlayerCustomDungeonCompBin::official_dungeon_list(proto_comp);
  __for_end_2.it_ = google::protobuf::RepeatedPtrField<proto::OfficialCustomDungeonBin>::begin(__for_range_2).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::OfficialCustomDungeonBin>::end(__for_range_2).it_;
  while ( 1 )
  {
    v12 = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::OfficialCustomDungeonBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::OfficialCustomDungeonBin> *const)&__for_end_2,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::OfficialCustomDungeonBin>::iterator *)&__for_end) )
      break;
    official_proto = google::protobuf::internal::RepeatedPtrIterator<proto::OfficialCustomDungeonBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::OfficialCustomDungeonBin> *const)&__for_end_2);
    common::tools::perf::make_shared<OfficialCustomDungeon>();
    if ( !std::operator==<OfficialCustomDungeon>(0LL, (const std::shared_ptr<OfficialCustomDungeon> *)(v2 + 48)) )
    {
      v13 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      OfficialCustomDungeon::fromBin(v13, official_proto);
      v14 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v15 = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::operator[](
              &this->official_dungeon_map_,
              &v14->dungeon_id);
      std::shared_ptr<OfficialCustomDungeon>::operator=(v15, (const std::shared_ptr<OfficialCustomDungeon> *)(v2 + 48));
    }
    std::shared_ptr<OfficialCustomDungeon>::~shared_ptr((std::shared_ptr<OfficialCustomDungeon> *const)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::OfficialCustomDungeonBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::OfficialCustomDungeonBin> *const)&__for_end_2);
  }
  LOBYTE(v16) = proto::PlayerCustomDungeonCompBin::is_enable_ugc(proto_comp);
  v17 = v16;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_enable_ugc_ >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(v12) = v18 != 0;
    __asan_report_store1(&this->is_enable_ugc_, v12, v17);
  }
  this->is_enable_ugc_ = v17;
  v19 = proto::PlayerCustomDungeonCompBin::ban_expire_time(proto_comp);
  v20 = *(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store4(&this->ban_expire_time_, v12, v21);
  this->ban_expire_time_ = v19;
  std::vector<unsigned long>::clear(&this->battle_record_vec_);
  std::map<unsigned long,CustomDungeonBattleRecord>::clear(&this->battle_record_map_);
  __for_range_3 = proto::PlayerCustomDungeonCompBin::battle_record_list(proto_comp);
  __for_begin_2.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBattleRecord>::begin(__for_range_3).it_;
  __for_end_2.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBattleRecord>::end(__for_range_3).it_;
  while ( 1 )
  {
    p_for_end_2 = &__for_end_2;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBattleRecord const>::operator!=(
            &__for_begin_2,
            &__for_end_2) )
      break;
    record_proto = google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBattleRecord const>::operator*(&__for_begin_2);
    __for_end.it_ = (void *const *)proto::CustomDungeonBattleRecord::dungeon_guid(record_proto);
    std::vector<unsigned long>::push_back(
      &this->battle_record_vec_,
      (std::vector<long unsigned int>::value_type *)&__for_end);
    __for_end.it_ = (void *const *)proto::CustomDungeonBattleRecord::dungeon_guid(record_proto);
    record = std::map<unsigned long,CustomDungeonBattleRecord>::operator[](
               &this->battle_record_map_,
               (std::map<long unsigned int,CustomDungeonBattleRecord>::key_type *)&__for_end);
    CustomDungeonBattleRecord::fromBin(record, record_proto);
    google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBattleRecord const>::operator++(&__for_begin_2);
  }
  LOBYTE(v23) = proto::PlayerCustomDungeonCompBin::is_ever_liked(proto_comp);
  v24 = v23;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_ever_liked_ >> 3) + 0x7FFF8000);
  if ( v25 < 0 )
  {
    LOBYTE(p_for_end_2) = v25 != 0;
    __asan_report_store1(&this->is_ever_liked_, p_for_end_2, v24);
  }
  this->is_ever_liked_ = v24;
  got_recommend_time = proto::PlayerCustomDungeonCompBin::last_got_recommend_time(proto_comp);
  v27 = *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(p_for_end_2) = v27 != 0;
    __asan_report_store4(&this->last_got_recommend_time_, p_for_end_2, got_recommend_time);
  }
  this->last_got_recommend_time_ = got_recommend_time;
  result = 0;
  if ( v48 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 441: range 000000001416901A-000000001416988B
int32_t __cdecl PlayerCustomDungeonComp::toBin(PlayerCustomDungeonComp *const this, proto::PlayerDataBin *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const unsigned __int64 *v5; // rax
  const unsigned __int64 *v6; // rax
  std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  proto::OfficialCustomDungeonBin *v9; // rax
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >::reference v10; // rax
  proto::CustomDungeonBattleRecord *v11; // rax
  int32_t result; // eax
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<long unsigned int>::iterator __for_end_0; // [rsp+20h] [rbp-120h] BYREF
  std::map<long unsigned int,CustomDungeonBrief>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  proto::PlayerCustomDungeonCompBin *proto_comp; // [rsp+30h] [rbp-110h]
  std::map<long unsigned int,CustomDungeonBrief> *__for_range; // [rsp+38h] [rbp-108h]
  std::set<long unsigned int> *__for_range_0; // [rsp+40h] [rbp-100h]
  std::set<long unsigned int> *__for_range_1; // [rsp+48h] [rbp-F8h]
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>> *__for_range_2; // [rsp+50h] [rbp-F0h]
  std::vector<long unsigned int> *__for_range_3; // [rsp+58h] [rbp-E8h]
  const CustomDungeonBattleRecord *record; // [rsp+60h] [rbp-E0h]
  const std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > *v23; // [rsp+68h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::type *dungeon_id; // [rsp+70h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::type *official_dungeon_ptr; // [rsp+78h] [rbp-C8h]
  const unsigned __int64 *dungeon_guid_1; // [rsp+80h] [rbp-C0h]
  const unsigned __int64 *dungeon_guid_0; // [rsp+88h] [rbp-B8h]
  std::pair<long unsigned int const,CustomDungeonBrief> *__in; // [rsp+90h] [rbp-B0h]
  std::tuple_element<0,std::pair<long unsigned int const,CustomDungeonBrief> >::type *dungeon_guid; // [rsp+98h] [rbp-A8h]
  std::tuple_element<1,std::pair<long unsigned int const,CustomDungeonBrief> >::type *dungeon_brief; // [rsp+A0h] [rbp-A0h]
  proto::CustomDungeonBriefBin *proto_brief; // [rsp+A8h] [rbp-98h]
  char v32[144]; // [rsp+B0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 16 dungeon_guid:472 64 8 8 iter:474";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::toBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  proto_comp = proto::PlayerDataBin::mutable_custom_dungeon_bin(proto);
  __for_range = &this->brief_map_;
  *(std::map<long unsigned int,CustomDungeonBrief>::iterator *)(v2 + 64) = std::map<unsigned long,CustomDungeonBrief>::begin(&this->brief_map_);
  __for_end._M_node = std::map<unsigned long,CustomDungeonBrief>::end(__for_range)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)(v2 + 64),
            &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator*((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v2 + 64));
    dungeon_guid = std::get<0ul,unsigned long const,CustomDungeonBrief>(__in);
    dungeon_brief = std::get<1ul,unsigned long const,CustomDungeonBrief>(__in);
    if ( *(_BYTE *)(((unsigned __int64)dungeon_guid >> 3) + 0x7FFF8000) )
      __asan_report_load8(dungeon_guid);
    if ( *dungeon_guid )
    {
      if ( *(_BYTE *)(((unsigned __int64)dungeon_brief >> 3) + 0x7FFF8000) )
        __asan_report_load8(dungeon_brief);
      if ( dungeon_brief->dungeon_guid )
      {
        proto_brief = proto::PlayerCustomDungeonCompBin::add_brief_list(proto_comp);
        CustomDungeonBrief::toBin(dungeon_brief, proto_brief);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator++((std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v2 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_guid_idx_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_guid_idx_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_guid_idx_);
  }
  proto::PlayerCustomDungeonCompBin::set_dungeon_guid_idx(proto_comp, this->dungeon_guid_idx_);
  __for_range_0 = &this->store_dungeon_set_;
  *(std::set<long unsigned int>::iterator *)(v2 + 64) = std::set<unsigned long>::begin(&this->store_dungeon_set_);
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Base_ptr)std::set<unsigned long>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)&__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned long>::operator*((const std::_Rb_tree_const_iterator<long unsigned int> *const)(v2 + 64));
    dungeon_guid_0 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    proto::PlayerCustomDungeonCompBin::add_store_dungeon_list(proto_comp, *dungeon_guid_0);
    std::_Rb_tree_const_iterator<unsigned long>::operator++((std::_Rb_tree_const_iterator<long unsigned int> *const)(v2 + 64));
  }
  __for_range_1 = &this->last_recommend_set_;
  *(std::set<long unsigned int>::iterator *)(v2 + 64) = std::set<unsigned long>::begin(&this->last_recommend_set_);
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Base_ptr)std::set<unsigned long>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)&__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned long>::operator*((const std::_Rb_tree_const_iterator<long unsigned int> *const)(v2 + 64));
    dungeon_guid_1 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    proto::PlayerCustomDungeonCompBin::add_last_recommend_list(proto_comp, *dungeon_guid_1);
    std::_Rb_tree_const_iterator<unsigned long>::operator++((std::_Rb_tree_const_iterator<long unsigned int> *const)(v2 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  proto::PlayerCustomDungeonCompBin::set_group_id(proto_comp, this->group_id_);
  __for_range_2 = &this->official_dungeon_map_;
  *(std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::begin(&this->official_dungeon_map_);
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self *)(v2 + 64),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self *)&__for_end) )
  {
    v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > > *const)(v2 + 64));
    dungeon_id = std::get<0ul,unsigned int const,std::shared_ptr<OfficialCustomDungeon>>(v23);
    official_dungeon_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<OfficialCustomDungeon>>(v23);
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id);
    }
    if ( *dungeon_id && !std::operator==<OfficialCustomDungeon>(0LL, official_dungeon_ptr) )
    {
      v8 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)official_dungeon_ptr);
      v9 = proto::PlayerCustomDungeonCompBin::add_official_dungeon_list(proto_comp);
      OfficialCustomDungeon::toBin(v8, v9);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > > *const)(v2 + 64));
  }
  if ( *(char *)(((unsigned __int64)&this->is_enable_ugc_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_ugc_);
  proto::PlayerCustomDungeonCompBin::set_is_enable_ugc(proto_comp, this->is_enable_ugc_);
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ban_expire_time_);
  }
  proto::PlayerCustomDungeonCompBin::set_ban_expire_time(proto_comp, this->ban_expire_time_);
  __for_range_3 = &this->battle_record_vec_;
  __for_begin._M_current = std::vector<unsigned long>::begin(&this->battle_record_vec_)._M_current;
  __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_3)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end_0) )
  {
    v10 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    *(_QWORD *)(v2 + 32) = *v10;
    *(std::map<long unsigned int,CustomDungeonBattleRecord>::iterator *)(v2 + 64) = std::map<unsigned long,CustomDungeonBattleRecord>::find(
                                                                                      &this->battle_record_map_,
                                                                                      (const std::map<long unsigned int,CustomDungeonBattleRecord>::key_type *)(v2 + 32));
    __for_end._M_node = std::map<unsigned long,CustomDungeonBattleRecord>::end(&this->battle_record_map_)._M_node;
    if ( !std::operator==(
            (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBattleRecord> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBattleRecord> >::_Self *)&__for_end) )
    {
      record = &std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBattleRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBattleRecord> > *const)(v2 + 64))->second;
      v11 = proto::PlayerCustomDungeonCompBin::add_battle_record_list(proto_comp);
      CustomDungeonBattleRecord::toBin(record, v11);
    }
    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_ever_liked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_ever_liked_);
  proto::PlayerCustomDungeonCompBin::set_is_ever_liked(proto_comp, this->is_ever_liked_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_got_recommend_time_);
  }
  proto::PlayerCustomDungeonCompBin::set_last_got_recommend_time(proto_comp, this->last_got_recommend_time_);
  result = 0;
  if ( v32 == (char *)v2 )
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

// Line 488: range 000000001416988C-0000000014169940
uint64_t __cdecl PlayerCustomDungeonComp::getNextCustomDungeonGuid(PlayerCustomDungeonComp *const this)
{
  unsigned __int64 v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_guid_idx_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_guid_idx_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_guid_idx_);
  }
  v1 = (unsigned __int64)++this->dungeon_guid_idx_ << 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  return v1 | Player::getUid(this->player_);
};

// Line 493: range 0000000014169942-0000000014169ED1
void __cdecl PlayerCustomDungeonComp::enterCustomDungeonOfficial(
        PlayerCustomDungeonComp *const this,
        const proto::EnterCustomDungeonReq *req,
        proto::EnterCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const CustomDungeonExcelConfigMgr *p_custom_dungeon_config_mgr; // rdi
  uint32_t v7; // edx
  bool v8; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::pointer v9; // rax
  std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t v11; // r14d
  std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  google::protobuf::int32 v13; // edx
  __int64 v14; // rsi
  uint64_t v15; // r14
  __int64 v16; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self __y; // [rsp+28h] [rbp-108h] BYREF
  proto::ServerCustomDungeon *custom_dungeon; // [rsp+30h] [rbp-100h]
  uint64_t dungeon_guid; // [rsp+38h] [rbp-F8h]
  char v22[240]; // [rsp+40h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 14 dungeon_id:494 48 8 8 iter:502 80 16 24 official_dungeon_ptr:508 112 40 14 server_rsp:524";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::enterCustomDungeonOfficial;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = proto::EnterCustomDungeonReq::dungeon_id(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 80));
  p_custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80))->design_config.txt_config_mgr.custom_dungeon_config_mgr;
  v7 = *(_DWORD *)(v3 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_custom_dungeon_config_mgr = (const CustomDungeonExcelConfigMgr *)&this->group_id_;
    __asan_report_load4(&this->group_id_);
  }
  v8 = !CustomDungeonExcelConfigMgr::isGroupContainsOfficialDungeon(p_custom_dungeon_config_mgr, this->group_id_, v7);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
  if ( v8 )
  {
    proto::EnterCustomDungeonRsp::set_retcode(rsp_0, 11078);
  }
  else
  {
    *(std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::iterator *)(v3 + 48) = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::find(
                                                                                              &this->official_dungeon_map_,
                                                                                              (const std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::key_type *)(v3 + 32));
    __y._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::end(&this->official_dungeon_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self *)(v3 + 48),
           &__y) )
    {
      proto::EnterCustomDungeonRsp::set_retcode(rsp_0, 11082);
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > > *const)(v3 + 48));
      std::shared_ptr<OfficialCustomDungeon>::shared_ptr(
        (std::shared_ptr<OfficialCustomDungeon> *const)(v3 + 80),
        &v9->second);
      if ( std::operator==<OfficialCustomDungeon>(0LL, (const std::shared_ptr<OfficialCustomDungeon> *)(v3 + 80)) )
      {
        proto::EnterCustomDungeonRsp::set_retcode(rsp_0, -1);
      }
      else
      {
        v10 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v10->dungeon_guid >> 3) + 0x7FFF8000) )
          __asan_report_load8(&v10->dungeon_guid);
        if ( v10->dungeon_guid )
        {
          v11 = proto::EnterCustomDungeonReq::enter_type(req);
          v12 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&v12->dungeon_guid >> 3) + 0x7FFF8000) )
            __asan_report_load8(&v12->dungeon_guid);
          v13 = PlayerCustomDungeonComp::requestCustomDungeon(this, v12->dungeon_guid, v11, 1);
          proto::EnterCustomDungeonRsp::set_retcode(rsp_0, v13);
        }
        else
        {
          proto::ServerGetCustomDungeonRsp::ServerGetCustomDungeonRsp((proto::ServerGetCustomDungeonRsp *const)(v3 + 112));
          proto::ServerGetCustomDungeonRsp::set_retcode((proto::ServerGetCustomDungeonRsp *const)(v3 + 112), 0);
          proto::ServerGetCustomDungeonRsp::set_is_exist((proto::ServerGetCustomDungeonRsp *const)(v3 + 112), 1);
          proto::ServerGetCustomDungeonRsp::set_enter_type((proto::ServerGetCustomDungeonRsp *const)(v3 + 112), 3u);
          custom_dungeon = proto::ServerGetCustomDungeonRsp::mutable_custom_dungeon((proto::ServerGetCustomDungeonRsp *const)(v3 + 112));
          dungeon_guid = PlayerCustomDungeonComp::getNextCustomDungeonGuid(this);
          proto::ServerCustomDungeon::set_dungeon_guid(custom_dungeon, dungeon_guid);
          v14 = *(unsigned int *)(v3 + 32);
          proto::ServerCustomDungeon::set_dungeon_id(custom_dungeon, v14);
          v15 = dungeon_guid;
          v16 = (__int64)std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
          if ( *(_BYTE *)(((unsigned __int64)(v16 + 8) >> 3) + 0x7FFF8000) )
            v16 = __asan_report_store8(v16 + 8, v14);
          *(_QWORD *)(v16 + 8) = v15;
          if ( *(_BYTE *)(((unsigned __int64)&this->last_request_dungeon_guid_ >> 3) + 0x7FFF8000) )
            __asan_report_store8(&this->last_request_dungeon_guid_, v14);
          this->last_request_dungeon_guid_ = dungeon_guid;
          PlayerCustomDungeonComp::serverGetCustomDungeon(
            this,
            (const proto::ServerGetCustomDungeonRsp *)(v3 + 112),
            rsp_0);
          if ( !proto::EnterCustomDungeonRsp::retcode(rsp_0) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::sendProto(this->player_, rsp_0);
          }
          proto::ServerGetCustomDungeonRsp::~ServerGetCustomDungeonRsp((proto::ServerGetCustomDungeonRsp *const)(v3 + 112));
        }
      }
      std::shared_ptr<OfficialCustomDungeon>::~shared_ptr((std::shared_ptr<OfficialCustomDungeon> *const)(v3 + 80));
    }
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 551: range 0000000014169ED2-000000001416A278
int32_t __cdecl PlayerCustomDungeonComp::checkEnterCustomDungeon(PlayerCustomDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerMpComp *MpComp; // rax
  int32_t v5; // r14d
  PlayerMpComp *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 18 cur_avatar_ptr:560";
  *(_QWORD *)(v1 + 16) = PlayerCustomDungeonComp::checkEnterCustomDungeon;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    v5 = 1202;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v6 = Player::getMpComp(this->player_);
    if ( !PlayerMpComp::isAllowEnterPlayerEmpty(v6) )
    {
      v5 = 1216;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getCurAvatar((Player *const)(v1 + 32));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v1 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "checkEnterCustomDungeon",
          563);
        v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v12,
               (const char (*)[25])"getCurAvatar fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
        common::milog::MiLogStream::~MiLogStream(&v12);
        v5 = -1;
      }
      else
      {
        v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( Creature::getLifeState(v8) == LIFE_ALIVE )
        {
          v5 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v12,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "checkEnterCustomDungeon",
            568);
          v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                 &v12,
                 (const char (*)[26])"avatar is not alive, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          common::milog::MiLogStream::~MiLogStream(&v12);
          v5 = 102;
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 32));
    }
  }
  result = v5;
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 575: range 000000001416A27A-000000001416AB6B
void __cdecl PlayerCustomDungeonComp::enterCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::EnterCustomDungeonReq *req,
        proto::EnterCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v10; // r13
  char v11; // r13
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  uint32_t v13; // eax
  bool v14; // r14
  common::milog::MiLogStream *v15; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool isCustomDungeonClosed; // r13
  common::milog::MiLogStream *v18; // r13
  common::milog::MiLogStream *v20; // r13
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r13
  google::protobuf::int32 v24; // edx
  bool isMyDungeon; // r13
  uint32_t v26; // edx
  unsigned int v28; // [rsp+2Ch] [rbp-B4h] BYREF
  unsigned int val; // [rsp+30h] [rbp-B0h] BYREF
  uint32_t dungeon_id; // [rsp+34h] [rbp-ACh]
  uint64_t dungeon_guid; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v32; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-90h] BYREF
  char v34[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 ret:579";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::enterCustomDungeon;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    *(_DWORD *)(v3 + 32) = PlayerCustomDungeonComp::checkEnterCustomDungeon(this);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "enterCustomDungeon",
        582);
      v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v33,
             (const char (*)[25])"check enter dungeon ret:");
      v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v3 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      proto::EnterCustomDungeonRsp::set_retcode(rsp_0, *(_DWORD *)(v3 + 32));
    }
    else if ( !proto::EnterCustomDungeonReq::dungeon_guid(req) && !proto::EnterCustomDungeonReq::dungeon_id(req) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "enterCustomDungeon",
        589);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v33,
              (const char (*)[46])"enter req dungeon_guid=0 & dungeon_id=0, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      proto::EnterCustomDungeonRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      v11 = 0;
      v14 = 0;
      if ( proto::EnterCustomDungeonReq::dungeon_id(req) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v11 = 1;
        p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->feature_switch_mgr;
        v13 = proto::EnterCustomDungeonReq::dungeon_id(req);
        if ( FeatureSwitchMgr::isCustomDungeonIdClosed(p_feature_switch_mgr, v13) )
          v14 = 1;
      }
      if ( v11 )
        std::shared_ptr<Config>::~shared_ptr(&v32);
      if ( v14 )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "enterCustomDungeon",
          596);
        v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v33,
                (const char (*)[43])"custom dungeon feature closed, dungeon_id:");
        val = proto::EnterCustomDungeonReq::dungeon_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v33);
        proto::EnterCustomDungeonRsp::set_retcode(rsp_0, 142);
      }
      else if ( proto::EnterCustomDungeonReq::enter_type(req) == ENTER_CUSTOM_DUNGEON_OFFICIAL )
      {
        PlayerCustomDungeonComp::enterCustomDungeonOfficial(this, req, rsp_0);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
        isCustomDungeonClosed = FeatureSwitchMgr::isCustomDungeonClosed(&v16->feature_switch_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v32);
        if ( isCustomDungeonClosed )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "enterCustomDungeon",
            610);
          v18 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v33,
                  (const char (*)[36])"custom dungeon feature closed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          common::milog::MiLogStream::~MiLogStream(&v33);
          proto::EnterCustomDungeonRsp::set_retcode(rsp_0, 142);
        }
        else if ( proto::EnterCustomDungeonReq::enter_type(req) == ENTER_CUSTOM_DUNGEON_PLAY
               && proto::EnterCustomDungeonReq::dungeon_id(req) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "enterCustomDungeon",
            617);
          v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v33,
                  (const char (*)[32])"enter req play mode dungeon_id=");
          v28 = proto::EnterCustomDungeonReq::dungeon_id(req);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v28);
          v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])", uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
          common::milog::MiLogStream::~MiLogStream(&v33);
          proto::EnterCustomDungeonRsp::set_retcode(rsp_0, 11053);
        }
        else
        {
          dungeon_guid = proto::EnterCustomDungeonReq::dungeon_guid(req);
          if ( proto::EnterCustomDungeonReq::enter_type(req) == ENTER_CUSTOM_DUNGEON_EDIT
            && dungeon_guid
            && !PlayerCustomDungeonComp::isMyDungeon(this, dungeon_guid) )
          {
            proto::EnterCustomDungeonRsp::set_retcode(rsp_0, 11051);
          }
          else
          {
            dungeon_id = proto::EnterCustomDungeonReq::dungeon_id(req);
            if ( dungeon_id )
            {
              v24 = PlayerCustomDungeonComp::addNewCustomDungeon(this, dungeon_id);
            }
            else
            {
              isMyDungeon = PlayerCustomDungeonComp::isMyDungeon(this, dungeon_guid);
              v26 = proto::EnterCustomDungeonReq::enter_type(req);
              v24 = PlayerCustomDungeonComp::requestCustomDungeon(this, dungeon_guid, v26, isMyDungeon);
            }
            proto::EnterCustomDungeonRsp::set_retcode(rsp_0, v24);
          }
        }
      }
    }
  }
  else
  {
    proto::EnterCustomDungeonRsp::set_retcode(rsp_0, 11093);
  }
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 642: range 000000001416AB6C-000000001416B48D
__int64 __fastcall PlayerCustomDungeonComp::requestCustomDungeon(
        PlayerCustomDungeonComp *const this,
        uint64_t dungeon_guid,
        uint32_t enter_type,
        bool is_self_dungeon)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  unsigned int v8; // r14d
  uint32_t last_request_time; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  uint32_t v13; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  unsigned int *p_val; // rsi
  uint64_t v27; // rdx
  uint32_t v28; // ecx
  char v29; // al
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-114h] BYREF
  common::milog::MiLogStream v34; // [rsp+30h] [rbp-110h] BYREF
  char v35[240]; // [rsp+50h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 7 now:643 48 8 16 dungeon_guid:641 80 16 14 config_ptr:645 112 40 14 server_req:666";
  *(_QWORD *)(v4 + 16) = PlayerCustomDungeonComp::requestCustomDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_QWORD *)(v4 + 48) = dungeon_guid;
  *(_DWORD *)(v4 + 32) = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 80));
  if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "requestCustomDungeon",
      648);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v34, (const char (*)[24])off_2525C9E0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_request_dungeon_guid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->last_request_dungeon_guid_);
    if ( this->last_request_dungeon_guid_ != *(_QWORD *)(v4 + 48) )
      goto LABEL_19;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_request_time_);
    }
    last_request_time = this->last_request_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->MAX_REQUEST_WAIT_TIME >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->MAX_REQUEST_WAIT_TIME >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->MAX_REQUEST_WAIT_TIME);
    }
    if ( last_request_time + this->MAX_REQUEST_WAIT_TIME >= *(_DWORD *)(v4 + 32) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "requestCustomDungeon",
        655);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v34,
              (const char (*)[28])"is requesting dungeon_guid:");
      v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v10,
              (const unsigned __int64 *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
      v8 = 0;
    }
    else
    {
LABEL_19:
      if ( *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_request_time_);
      }
      v13 = this->last_request_time_;
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&v14->custom_dungeon_min_enter_interval >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v14->custom_dungeon_min_enter_interval >> 3) + 0x7FFF8000) <= 3 )
      {
        v14 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v14->custom_dungeon_min_enter_interval);
      }
      if ( v13 + v14->custom_dungeon_min_enter_interval <= *(_DWORD *)(v4 + 32) )
      {
        proto::ServerGetCustomDungeonReq::ServerGetCustomDungeonReq((proto::ServerGetCustomDungeonReq *const)(v4 + 112));
        proto::ServerGetCustomDungeonReq::set_dungeon_guid(
          (proto::ServerGetCustomDungeonReq *const)(v4 + 112),
          *(_QWORD *)(v4 + 48));
        proto::ServerGetCustomDungeonReq::set_is_self_dungeon(
          (proto::ServerGetCustomDungeonReq *const)(v4 + 112),
          is_self_dungeon);
        proto::ServerGetCustomDungeonReq::set_enter_type(
          (proto::ServerGetCustomDungeonReq *const)(v4 + 112),
          enter_type);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        if ( sendProtoToActivityService<proto::ServerGetCustomDungeonReq>(
               this->player_,
               (proto::ServerGetCustomDungeonReq *)(v4 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "requestCustomDungeon",
            674);
          v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v34,
                  (const char (*)[22])"request dungeon_guid:");
          v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v20,
                  (const unsigned __int64 *)(v4 + 48));
          v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v21,
                  (const char (*)[14])" failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
          common::milog::MiLogStream::~MiLogStream(&v34);
          v8 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "requestCustomDungeon",
            678);
          v23 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v34,
                  (const char (*)[24])"requested dungeon_guid:");
          v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v23,
                  (const unsigned __int64 *)(v4 + 48));
          v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          p_val = &val;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
          common::milog::MiLogStream::~MiLogStream(&v34);
          v27 = *(_QWORD *)(v4 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&this->last_request_dungeon_guid_ >> 3) + 0x7FFF8000) )
            __asan_report_store8(&this->last_request_dungeon_guid_, &val);
          this->last_request_dungeon_guid_ = v27;
          v28 = *(_DWORD *)(v4 + 32);
          v29 = *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000);
          if ( v29 != 0 && v29 <= 3 )
          {
            LOBYTE(p_val) = v29 != 0;
            __asan_report_store4(&this->last_request_time_, p_val, &this->last_request_time_);
          }
          this->last_request_time_ = v28;
          v8 = 0;
        }
        proto::ServerGetCustomDungeonReq::~ServerGetCustomDungeonReq((proto::ServerGetCustomDungeonReq *const)(v4 + 112));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "requestCustomDungeon",
          662);
        v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v34,
                (const char (*)[38])"is requset to fast, last_request_time");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->last_request_time_);
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" now:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v4 + 32));
        v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        common::milog::MiLogStream::~MiLogStream(&v34);
        v8 = 11092;
      }
    }
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 80));
  result = v8;
  if ( v35 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 688: range 000000001416B48E-000000001416BD79
__int64 __fastcall PlayerCustomDungeonComp::addNewCustomDungeon(
        PlayerCustomDungeonComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  CustomDungeonExcelConfigMgr *p_custom_dungeon_config_mgr; // rcx
  unsigned int v6; // r14d
  std::map<long unsigned int,CustomDungeonBrief>::size_type v7; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  char *v12; // rsi
  CustomDungeonBrief *v13; // rax
  uint64_t v14; // rdx
  uint32_t v15; // ecx
  char v16; // al
  __int64 Now; // rsi
  __int64 v18; // rdx
  uint32_t *p_start_room_id; // rsi
  uint64_t v20; // rdx
  proto::CustomDungeonSettingBin *v21; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-1D4h] BYREF
  const data::CustomLevelGroupConfig *dungeon_group_config_ptr; // [rsp+20h] [rbp-1D0h]
  const data::ConfigCustomLevelDungeon *dungeon_config_ptr; // [rsp+28h] [rbp-1C8h]
  CustomDungeonBrief *add_brief; // [rsp+30h] [rbp-1C0h]
  proto::ServerCustomDungeon *custom_dungeon; // [rsp+38h] [rbp-1B8h]
  std::shared_ptr<CreateCustomDungeonEvent> __r; // [rsp+40h] [rbp-1B0h] BYREF
  std::shared_ptr<Config> v30; // [rsp+50h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-190h] BYREF
  char v32[368]; // [rsp+80h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 dungeon_id:687 64 8 16 dungeon_guid:713 96 40 14 server_rsp:727 176 112 7 rsp:736";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::addNewCustomDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862729] = -202116109;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  p_custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.custom_dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  dungeon_group_config_ptr = data::CustomLevelExcelConfigMgrBase::findCustomLevelGroupConfig(
                               p_custom_dungeon_config_mgr,
                               this->group_id_);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( dungeon_group_config_ptr )
  {
    v7 = std::map<unsigned long,CustomDungeonBrief>::size(&this->brief_map_);
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_group_config_ptr->max_edit_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_group_config_ptr->max_edit_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_group_config_ptr->max_edit_count);
    }
    if ( v7 < dungeon_group_config_ptr->max_edit_count )
    {
      if ( !common::tools::MiscUtils::isContains<unsigned int>(
              &dungeon_group_config_ptr->dungeon_list,
              (const unsigned int *)(v2 + 48)) )
      {
        v6 = 11077;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v30);
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
        dungeon_config_ptr = JsonConfigMgr::findCustomDungeonConfig(
                               &v8->design_config.json_config_mgr,
                               *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v30);
        if ( dungeon_config_ptr )
        {
          *(_QWORD *)(v2 + 64) = PlayerCustomDungeonComp::getNextCustomDungeonGuid(this);
          v12 = (char *)(v2 + 64);
          v13 = std::map<unsigned long,CustomDungeonBrief>::operator[](
                  &this->brief_map_,
                  (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v2 + 64));
          add_brief = v13;
          v14 = *(_QWORD *)(v2 + 64);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            __asan_report_store8(v13, v12);
          add_brief->dungeon_guid = v14;
          v15 = *(_DWORD *)(v2 + 48);
          v16 = *(_BYTE *)(((unsigned __int64)&add_brief->dungeon_id >> 3) + 0x7FFF8000);
          if ( v16 != 0 && v16 <= 3 )
          {
            LOBYTE(v12) = v16 != 0;
            __asan_report_store4(&add_brief->dungeon_id, v12, &add_brief->dungeon_id);
          }
          add_brief->dungeon_id = v15;
          Now = (unsigned int)common::tools::TimeUtils::getNow();
          if ( *(_BYTE *)(((unsigned __int64)&add_brief->last_save_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&add_brief->last_save_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&add_brief->last_save_time, Now, &add_brief->last_save_time);
          }
          add_brief->last_save_time = Now;
          v18 = (*(_BYTE *)(((unsigned __int64)&add_brief->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)add_brief + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&add_brief->state >> 3) + 0x7FFF8000));
          if ( (_BYTE)v18 )
            __asan_report_store4(&add_brief->state, (((_BYTE)add_brief + 12) & 7u) + 3, v18);
          add_brief->state = 0;
          p_start_room_id = (uint32_t *)((((_BYTE)dungeon_config_ptr + 4) & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->start_room_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->start_room_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&dungeon_config_ptr->start_room_id);
          }
          if ( dungeon_config_ptr->start_room_id )
          {
            p_start_room_id = &dungeon_config_ptr->start_room_id;
            std::set<unsigned int>::insert(&add_brief->setting.open_room_set, &dungeon_config_ptr->start_room_id);
          }
          v20 = *(_QWORD *)(v2 + 64);
          if ( *(_BYTE *)(((unsigned __int64)&this->last_request_dungeon_guid_ >> 3) + 0x7FFF8000) )
            __asan_report_store8(&this->last_request_dungeon_guid_, p_start_room_id);
          this->last_request_dungeon_guid_ = v20;
          proto::ServerGetCustomDungeonRsp::ServerGetCustomDungeonRsp((proto::ServerGetCustomDungeonRsp *const)(v2 + 96));
          proto::ServerGetCustomDungeonRsp::set_retcode((proto::ServerGetCustomDungeonRsp *const)(v2 + 96), 0);
          proto::ServerGetCustomDungeonRsp::set_is_exist((proto::ServerGetCustomDungeonRsp *const)(v2 + 96), 1);
          proto::ServerGetCustomDungeonRsp::set_enter_type((proto::ServerGetCustomDungeonRsp *const)(v2 + 96), 1u);
          custom_dungeon = proto::ServerGetCustomDungeonRsp::mutable_custom_dungeon((proto::ServerGetCustomDungeonRsp *const)(v2 + 96));
          proto::ServerCustomDungeon::set_dungeon_guid(custom_dungeon, *(_QWORD *)(v2 + 64));
          proto::ServerCustomDungeon::set_dungeon_id(custom_dungeon, *(_DWORD *)(v2 + 48));
          v21 = proto::ServerCustomDungeon::mutable_setting(custom_dungeon);
          CustomDungeonSetting::toBin(&add_brief->setting, v21);
          proto::EnterCustomDungeonRsp::EnterCustomDungeonRsp((proto::EnterCustomDungeonRsp *const)(v2 + 176));
          PlayerCustomDungeonComp::serverGetCustomDungeon(
            this,
            (const proto::ServerGetCustomDungeonRsp *)(v2 + 96),
            (proto::EnterCustomDungeonRsp *)(v2 + 176));
          if ( proto::EnterCustomDungeonRsp::retcode((const proto::EnterCustomDungeonRsp *const)(v2 + 176)) )
          {
            std::map<unsigned long,CustomDungeonBrief>::erase(
              &this->brief_map_,
              (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v2 + 64));
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            EventComp = Player::getEventComp(this->player_);
            common::tools::perf::make_shared<CreateCustomDungeonEvent,unsigned int &>(
              (unsigned int *)&__r,
              (unsigned int *)(v2 + 48));
            std::shared_ptr<BaseEvent>::shared_ptr<CreateCustomDungeonEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&v30,
              &__r);
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v30);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v30);
            std::shared_ptr<CreateCustomDungeonEvent>::~shared_ptr(&__r);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 176));
          }
          PlayerCustomDungeonComp::notifyAllDataToClient(this);
          v6 = proto::EnterCustomDungeonRsp::retcode((const proto::EnterCustomDungeonRsp *const)(v2 + 176));
          proto::EnterCustomDungeonRsp::~EnterCustomDungeonRsp((proto::EnterCustomDungeonRsp *const)(v2 + 176));
          proto::ServerGetCustomDungeonRsp::~ServerGetCustomDungeonRsp((proto::ServerGetCustomDungeonRsp *const)(v2 + 96));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "addNewCustomDungeon",
            709);
          v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v31, (const char (*)[12])"dungeon_id:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v2 + 48));
          v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  v10,
                  (const char (*)[31])" find json config failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v31);
          v6 = -1;
        }
      }
    }
    else
    {
      v6 = 11087;
    }
  }
  else
  {
    v6 = 11086;
  }
  result = v6;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 755: range 000000001416BD7A-000000001416D04F
void __cdecl PlayerCustomDungeonComp::serverGetCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::ServerGetCustomDungeonRsp *server_rsp,
        proto::EnterCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rbx
  google::protobuf::int32 v7; // edx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  uint64_t last_request_dungeon_guid; // r14
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rbx
  common::milog::MiLogStream *v18; // rbx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rbx
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  uint32_t v22; // eax
  common::milog::MiLogStream *v23; // rbx
  common::milog::MiLogStream *v24; // rbx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rbx
  google::protobuf::uint64 v27; // r14
  unsigned __int64 v28; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint64_t v30; // rdx
  std::map<long unsigned int,CustomDungeonBrief>::mapped_type *v32; // rax
  uint64_t v33; // rdx
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  char v35; // al
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  int v45; // r14d
  __int64 v46; // rax
  char v47; // dl
  int *p_val; // rsi
  __int64 v49; // rdx
  uint64_t v50; // rdx
  std::map<long unsigned int,CustomDungeonBrief>::key_type *p_k; // rsi
  uint32_t v52; // r14d
  __int64 v53; // rax
  char v54; // dl
  __int64 v55; // rdx
  CustomDungeonSetting *p_setting; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  __int64 v58; // rax
  char v59; // dl
  uint64_t v60; // rsi
  __int64 v61; // rdx
  common::milog::MiLogStream *v62; // rbx
  common::milog::MiLogStream *v63; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  common::milog::MiLogStream *v65; // r14
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // r14
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rbx
  __int64 v70; // rsi
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rdx
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rbx
  proto::CustomDungeon *v73; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rdx
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rdx
  int32_t v76; // edx
  int val; // [rsp+20h] [rbp-E0h] BYREF
  uint32_t dungeon_id; // [rsp+24h] [rbp-DCh]
  std::map<long unsigned int,CustomDungeonBrief>::key_type __k; // [rsp+28h] [rbp-D8h] BYREF
  const proto::ServerCustomDungeon *proto_dungeon; // [rsp+30h] [rbp-D0h]
  CustomDungeonBrief *dungeon_brief; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v84; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v85; // [rsp+50h] [rbp-B0h] BYREF
  char v86[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 ret:764 64 4 14 dungeon_id:814";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::serverGetCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( proto::ServerGetCustomDungeonRsp::retcode(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "serverGetCustomDungeon",
      758);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v85,
           (const char (*)[44])"internal server get custom dungeon retcode:");
    val = proto::ServerGetCustomDungeonRsp::retcode(server_rsp);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    v7 = proto::ServerGetCustomDungeonRsp::retcode(server_rsp);
    proto::EnterCustomDungeonRsp::set_retcode(rsp_0, v7);
    goto LABEL_85;
  }
  *(_DWORD *)(v3 + 48) = PlayerCustomDungeonComp::checkEnterCustomDungeon(this);
  if ( *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "serverGetCustomDungeon",
      767);
    v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v85,
           (const char (*)[25])"check enter dungeon ret:");
    v9 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)&val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    proto::EnterCustomDungeonRsp::set_retcode(rsp_0, *(_DWORD *)(v3 + 48));
    goto LABEL_85;
  }
  proto_dungeon = proto::ServerGetCustomDungeonRsp::custom_dungeon(server_rsp);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_request_dungeon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_request_dungeon_guid_);
  last_request_dungeon_guid = this->last_request_dungeon_guid_;
  if ( last_request_dungeon_guid != proto::ServerCustomDungeon::dungeon_guid(proto_dungeon) )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "serverGetCustomDungeon",
      777);
    v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v85,
            (const char (*)[25])"server rsp dungeon guid:");
    __k = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
    v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &__k);
    v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v13,
            (const char (*)[25])", but last request guid:");
    v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v14,
            &this->last_request_dungeon_guid_);
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)&val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    proto::EnterCustomDungeonRsp::set_retcode(rsp_0, 11052);
    goto LABEL_85;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_request_dungeon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_request_dungeon_guid_, server_rsp);
  this->last_request_dungeon_guid_ = 0LL;
  if ( proto::ServerGetCustomDungeonRsp::enter_type(server_rsp) == 2
    && !proto::ServerGetCustomDungeonRsp::is_exist(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "serverGetCustomDungeon",
      787);
    v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v85,
            (const char (*)[24])"no custom dungeon guid:");
    __k = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
    v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v18, &__k);
    v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" data, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)&val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    proto::EnterCustomDungeonRsp::set_retcode(rsp_0, 11053);
    goto LABEL_85;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v84);
  p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v84)->feature_switch_mgr;
  v22 = proto::ServerCustomDungeon::dungeon_id(proto_dungeon);
  LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isCustomDungeonIdClosed(p_feature_switch_mgr, v22);
  std::shared_ptr<Config>::~shared_ptr(&v84);
  if ( (_BYTE)p_feature_switch_mgr )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "serverGetCustomDungeon",
      794);
    v23 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v85,
            (const char (*)[43])"custom dungeon feature closed, dungeon_id:");
    val = proto::ServerCustomDungeon::dungeon_id(proto_dungeon);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)&val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    proto::EnterCustomDungeonRsp::set_retcode(rsp_0, 142);
    goto LABEL_85;
  }
  common::tools::perf::make_shared<CustomDungeon>();
  std::shared_ptr<CustomDungeon>::operator=(&this->cur_dungeon_ptr_, (std::shared_ptr<CustomDungeon> *)&v84);
  std::shared_ptr<CustomDungeon>::~shared_ptr((std::shared_ptr<CustomDungeon> *const)&v84);
  if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "serverGetCustomDungeon",
      802);
    v24 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v85,
            (const char (*)[42])"make custom dungeon failed, dungeon_guid:");
    __k = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
    v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v24, &__k);
    v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_31:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)&val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    proto::EnterCustomDungeonRsp::set_retcode(rsp_0, -1);
    goto LABEL_85;
  }
  v27 = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
  v28 = (unsigned __int64)std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    v28 = __asan_report_store8(v28, &this->cur_dungeon_ptr_);
  *(_QWORD *)v28 = v27;
  if ( proto::ServerGetCustomDungeonRsp::is_exist(server_rsp) )
  {
    v29 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    CustomDungeon::fromRedis(v29, proto_dungeon);
    *(_DWORD *)(v3 + 64) = 0;
    if ( proto::ServerGetCustomDungeonRsp::enter_type(server_rsp) == 1
      && (v30 = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon), PlayerCustomDungeonComp::isMyDungeon(this, v30)) )
    {
      __k = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
      v32 = std::map<unsigned long,CustomDungeonBrief>::operator[](&this->brief_map_, &__k);
      if ( *(_BYTE *)(((unsigned __int64)&v32->dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v32->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v32 = (std::map<long unsigned int,CustomDungeonBrief>::mapped_type *)__asan_report_load4(&v32->dungeon_id);
      }
      *(_DWORD *)(v3 + 64) = v32->dungeon_id;
    }
    else if ( proto::ServerGetCustomDungeonRsp::enter_type(server_rsp) == 3 )
    {
      v33 = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
      *(_DWORD *)(v3 + 64) = PlayerCustomDungeonComp::getOfficialDungeonIdByGuid(this, v33);
    }
    if ( !*(_DWORD *)(v3 + 64) )
      goto LABEL_50;
    v34 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&v34->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v34->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v34 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v34->dungeon_id);
    }
    if ( v34->dungeon_id == *(_DWORD *)(v3 + 64) )
LABEL_50:
      v35 = 0;
    else
      v35 = 1;
    if ( v35 )
    {
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "serverGetCustomDungeon",
        825);
      v36 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v85,
              (const char (*)[18])"redis dungeon_id:");
      v37 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &v37->dungeon_id);
      v39 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v38,
              (const char (*)[26])" dismatch bin dungeon_id:");
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v3 + 64));
      v41 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v40, (const char (*)[15])" dungeon_guid:");
      __k = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
      v42 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v41, &__k);
      v43 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      p_val = &val;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)&val);
      common::milog::MiLogStream::~MiLogStream(&v85);
      v44 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      std::map<unsigned int,CustomDungeonRoom>::clear(&v44->room_map);
      v45 = *(_DWORD *)(v3 + 64);
      v46 = (__int64)std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      v47 = *(_BYTE *)(((unsigned __int64)(v46 + 8) >> 3) + 0x7FFF8000);
      LOBYTE(p_val) = v47 != 0;
      v49 = (v47 != 0) & (unsigned __int8)(v47 <= 3);
      if ( (_BYTE)v49 )
        v46 = __asan_report_store4(v46 + 8, p_val, v49);
      *(_DWORD *)(v46 + 8) = v45;
    }
  }
  else
  {
    v50 = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
    if ( PlayerCustomDungeonComp::isMyDungeon(this, v50) )
    {
      __k = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
      p_k = &__k;
      dungeon_brief = std::map<unsigned long,CustomDungeonBrief>::operator[](&this->brief_map_, &__k);
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_brief->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_brief->dungeon_id);
      }
      v52 = dungeon_brief->dungeon_id;
      v53 = (__int64)std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      v54 = *(_BYTE *)(((unsigned __int64)(v53 + 8) >> 3) + 0x7FFF8000);
      LOBYTE(p_k) = v54 != 0;
      v55 = (v54 != 0) & (unsigned __int8)(v54 <= 3);
      if ( (_BYTE)v55 )
        v53 = __asan_report_store4(v53 + 8, p_k, v55);
      *(_DWORD *)(v53 + 8) = v52;
      p_setting = &dungeon_brief->setting;
      v57 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      CustomDungeonSetting::operator=(&v57->setting, p_setting);
    }
    else
    {
      if ( proto::ServerGetCustomDungeonRsp::enter_type(server_rsp) != 3 )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "serverGetCustomDungeon",
          845);
        v62 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v85,
                (const char (*)[33])"unknown status for dungeon_guid:");
        __k = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
        v63 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v62, &__k);
        v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v63, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_31;
      }
      v60 = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
      dungeon_id = PlayerCustomDungeonComp::getOfficialDungeonIdByGuid(this, v60);
      v58 = (__int64)std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      v59 = *(_BYTE *)(((unsigned __int64)(v58 + 8) >> 3) + 0x7FFF8000);
      LOBYTE(v60) = v59 != 0;
      v61 = (v59 != 0) & (unsigned __int8)(v59 <= 3);
      if ( (_BYTE)v61 )
        v58 = __asan_report_store4(v58 + 8, v60, v61);
      *(_DWORD *)(v58 + 8) = dungeon_id;
    }
  }
  v64 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&v64->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v64->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v64 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v64->dungeon_id);
  }
  if ( v64->dungeon_id )
  {
    v70 = proto::ServerGetCustomDungeonRsp::enter_type(server_rsp);
    if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->enter_type_, v70, &this->enter_type_);
    }
    this->enter_type_ = v70;
    PlayerCustomDungeonComp::resetDungeonBattle(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->enter_type_);
    }
    if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_OFFICIAL )
    {
      v71 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      PlayerCustomDungeonComp::updateOfficialDungeonByConfig(this, v71);
    }
    v72 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    v73 = proto::EnterCustomDungeonRsp::mutable_custom_dungeon(rsp_0);
    CustomDungeon::toClient(v72, v73);
    if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->enter_type_);
    }
    proto::EnterCustomDungeonRsp::set_enter_type(rsp_0, this->enter_type_);
    v74 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    PlayerCustomDungeonComp::fillDeployCost(this, rsp_0, v74);
    v75 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    v76 = PlayerCustomDungeonComp::createAndEnterDungeon(this, v75);
    proto::EnterCustomDungeonRsp::set_retcode(rsp_0, v76);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "serverGetCustomDungeon",
      852);
    v65 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v85,
            (const char (*)[33])"no custom dungeon, dungeon_guid:");
    __k = proto::ServerCustomDungeon::dungeon_guid(proto_dungeon);
    v66 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v65, &__k);
    v67 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v66, (const char (*)[13])" enter_type:");
    *(_DWORD *)(v3 + 64) = proto::ServerGetCustomDungeonRsp::enter_type(server_rsp);
    v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, (const unsigned int *)(v3 + 64));
    v69 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v68, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)&val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    proto::EnterCustomDungeonRsp::set_retcode(rsp_0, -1);
  }
LABEL_85:
  if ( v86 == (char *)v3 )
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

// Line 876: range 000000001416D050-000000001416D1A8
void __cdecl PlayerCustomDungeonComp::fillDeployCost(
        PlayerCustomDungeonComp *const this,
        proto::EnterCustomDungeonRsp *rsp_0,
        CustomDungeon *custom_dungeon)
{
  uint32_t DeployCost; // ebx
  std::tuple_element<0,std::pair<unsigned int const,CustomDungeonRoom> >::type *v4; // rsi
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  char v7; // cl
  std::map<unsigned int,CustomDungeonRoom>::iterator __for_begin; // [rsp+28h] [rbp-48h] BYREF
  std::map<unsigned int,CustomDungeonRoom>::iterator __for_end; // [rsp+30h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *room_cost_map; // [rsp+38h] [rbp-38h]
  std::map<unsigned int,CustomDungeonRoom> *__for_range; // [rsp+40h] [rbp-30h]
  std::pair<unsigned int const,CustomDungeonRoom> *__in; // [rsp+48h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,CustomDungeonRoom> >::type *room_id; // [rsp+50h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,CustomDungeonRoom> >::type *room; // [rsp+58h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_type_);
  }
  if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_PLAY )
  {
    room_cost_map = proto::EnterCustomDungeonRsp::mutable_room_cost_map(rsp_0);
    __for_range = &custom_dungeon->room_map;
    __for_begin._M_node = std::map<unsigned int,CustomDungeonRoom>::begin(&custom_dungeon->room_map)._M_node;
    __for_end._M_node = std::map<unsigned int,CustomDungeonRoom>::end(&custom_dungeon->room_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator*(&__for_begin);
      room_id = std::get<0ul,unsigned int const,CustomDungeonRoom>(__in);
      room = std::get<1ul,unsigned int const,CustomDungeonRoom>(__in);
      DeployCost = CustomDungeonRoom::getDeployCost(room);
      v4 = room_id;
      v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](room_cost_map, room_id);
      v6 = v5;
      v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
      if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
      {
        LOBYTE(v4) = v7 != 0;
        __asan_report_store4(v5, v4, v5);
      }
      *v6 = DeployCost;
      std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator++(&__for_begin);
    }
  }
};

// Line 892: range 000000001416D1AA-000000001416D2E4
void __cdecl PlayerCustomDungeonComp::resetDungeonBattle(PlayerCustomDungeonComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->try_type_, v1, &this->try_type_);
  }
  this->try_type_ = TRY_CUSTOM_DUNGEON_NONE;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->need_gen_event_type_, (((_BYTE)this - 116) & 7u) + 3, v2);
  this->need_gen_event_type_ = 0;
  v3 = (((_BYTE)this - 124) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->try_room_id_, v3, v4);
  this->try_room_id_ = 0;
  std::set<unsigned int>::clear(&this->official_black_coin_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_time_cost_, v3, &this->challenge_time_cost_);
  }
  this->challenge_time_cost_ = 0;
};

// Line 901: range 000000001416D2E6-000000001416D356
int32_t __cdecl PlayerCustomDungeonComp::onDisconnect(PlayerCustomDungeonComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_type_);
  }
  if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_EDIT )
  {
    PlayerCustomDungeonComp::clearEntity(this);
    PlayerCustomDungeonComp::resetDungeonBattle(this);
  }
  return 0;
};

// Line 912: range 000000001416D358-000000001416D702
void __cdecl PlayerCustomDungeonComp::updateOfficialDungeonByConfig(
        PlayerCustomDungeonComp *const this,
        CustomDungeon *custom_dungeon)
{
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  const data::ConfigCustomLevelRoomSetting *v6; // rsi
  uint32_t room_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t start_room_id; // ecx
  char v11; // dl
  __int64 v12; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::vector<data::ConfigCustomLevelRoomSetting>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::vector<data::ConfigCustomLevelRoomSetting>::const_iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  const data::ConfigCustomLevelDungeon *dungeon_config_ptr; // [rsp+30h] [rbp-60h]
  const std::vector<data::ConfigCustomLevelRoomSetting> *__for_range; // [rsp+38h] [rbp-58h]
  const data::ConfigCustomLevelRoomSetting *room_setting; // [rsp+40h] [rbp-50h]
  CustomDungeonRoom *room; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&custom_dungeon->dungeon_id);
  }
  dungeon_config_ptr = JsonConfigMgr::findCustomDungeonConfig(p_json_config_mgr, custom_dungeon->dungeon_id);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( dungeon_config_ptr )
  {
    std::set<unsigned int>::clear(&custom_dungeon->setting.open_room_set);
    __for_range = &dungeon_config_ptr->room_list;
    __for_begin._M_current = std::vector<data::ConfigCustomLevelRoomSetting>::begin(&dungeon_config_ptr->room_list)._M_current;
    __for_end._M_current = std::vector<data::ConfigCustomLevelRoomSetting>::end(&dungeon_config_ptr->room_list)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigCustomLevelRoomSetting const*,std::vector<data::ConfigCustomLevelRoomSetting>>(
              &__for_begin,
              &__for_end) )
    {
      room_setting = __gnu_cxx::__normal_iterator<data::ConfigCustomLevelRoomSetting const*,std::vector<data::ConfigCustomLevelRoomSetting>>::operator*(&__for_begin);
      v6 = room_setting;
      room = std::map<unsigned int,CustomDungeonRoom>::operator[](&custom_dungeon->room_map, &room_setting->room_id);
      if ( *(_BYTE *)(((unsigned __int64)room_setting >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)room_setting >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(room_setting);
      }
      room_id = room_setting->room_id;
      v8 = *(_BYTE *)(((unsigned __int64)room >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        LOBYTE(v6) = v8 != 0;
        __asan_report_store4(room, v6, room);
      }
      room->room_id = room_id;
      std::set<unsigned int>::insert(&custom_dungeon->setting.open_room_set, &room_setting->room_id);
      __gnu_cxx::__normal_iterator<data::ConfigCustomLevelRoomSetting const*,std::vector<data::ConfigCustomLevelRoomSetting>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->try_type_, &__for_end, &this->try_type_);
    }
    this->try_type_ = TRY_CUSTOM_DUNGEON_OFFICIAL_PLAY;
    v9 = (((_BYTE)dungeon_config_ptr + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->start_room_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->start_room_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->start_room_id);
    }
    start_room_id = dungeon_config_ptr->start_room_id;
    v11 = *(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000);
    LOBYTE(v9) = v11 != 0;
    v12 = (v11 != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= v11);
    if ( (_BYTE)v12 )
      __asan_report_store4(&this->try_room_id_, v9, v12);
    this->try_room_id_ = start_room_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "updateOfficialDungeonByConfig",
      916);
    v3 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v22,
           (const char (*)[40])"find dungeon config failed, dungeon_id:");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &custom_dungeon->dungeon_id);
    v5 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v4, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
};

// Line 932: range 000000001416D704-000000001416D87A
uint32_t __cdecl PlayerCustomDungeonComp::getOfficialDungeonIdByGuid(
        PlayerCustomDungeonComp *const this,
        uint64_t dungeon_guid)
{
  uint32_t v2; // r12d
  const std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > *v3; // rax
  int v4; // ebx
  std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>> *__for_range; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::type *dungeon_id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::type *official_dungeon_ptr; // [rsp+38h] [rbp-38h]
  std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > __in; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->official_dungeon_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::begin(&this->official_dungeon_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::end(&this->official_dungeon_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>::pair(&__in, v3);
    dungeon_id = std::get<0ul,unsigned int const,std::shared_ptr<OfficialCustomDungeon>>(&__in);
    official_dungeon_ptr = std::get<1ul,unsigned int const,std::shared_ptr<OfficialCustomDungeon>>(&__in);
    if ( std::operator==<OfficialCustomDungeon>(0LL, official_dungeon_ptr) )
    {
      v4 = 0;
    }
    else
    {
      v5 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)official_dungeon_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v5->dungeon_guid >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v5->dungeon_guid);
      if ( dungeon_guid == v5->dungeon_guid )
      {
        if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(dungeon_id);
        }
        v2 = *dungeon_id;
        v4 = 1;
      }
      else
      {
        v4 = 2;
      }
    }
    std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>::~pair(&__in);
    if ( v4 && v4 != 2 )
      return v2;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 948: range 000000001416D8BE-000000001416E29D
int32_t __cdecl PlayerCustomDungeonComp::createAndEnterDungeon(
        PlayerCustomDungeonComp *const this,
        const CustomDungeon *custom_dungeon)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // r15d
  GameserverService *v7; // rax
  uint32_t v8; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  DungeonScene *v16; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  DungeonScene *v23; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t SceneId; // esi
  PlayerDungeonComp *DungeonComp; // r14
  PlayerSceneComp *SceneComp; // rax
  uint32_t CurSceneId; // r15d
  bool v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  DungeonScene *v35; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-158h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-154h]
  CustomDungeonBrief *dungeon_brief; // [rsp+30h] [rbp-150h]
  DungeonSceneTeam *dungeon_scene_team; // [rsp+38h] [rbp-148h]
  std::shared_ptr<Player> v42; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v43; // [rsp+50h] [rbp-130h] BYREF
  char v44[272]; // [rsp+70h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 14 dungeon_id:949 64 8 16 dungeon_guid:950 96 16 21 dungeon_scene_ptr:975 128 64 12 abstract:956";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::createAndEnterDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&custom_dungeon->dungeon_id);
  }
  *(_DWORD *)(v3 + 48) = custom_dungeon->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)custom_dungeon >> 3) + 0x7FFF8000) )
    __asan_report_load8(custom_dungeon);
  *(_QWORD *)(v3 + 64) = custom_dungeon->dungeon_guid;
  if ( !PlayerCustomDungeonComp::isMyDungeon(this, *(_QWORD *)(v3 + 64)) )
    goto LABEL_18;
  dungeon_brief = std::map<unsigned long,CustomDungeonBrief>::operator[](
                    &this->brief_map_,
                    (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v3 + 64));
  CustomDungeonAbstract::CustomDungeonAbstract((CustomDungeonAbstract *const)(v3 + 128));
  if ( !PlayerCustomDungeonComp::constructAbstract(this, custom_dungeon, (CustomDungeonAbstract *)(v3 + 128)) )
  {
    CustomDungeonBrief::updateAbstract(dungeon_brief, (const CustomDungeonAbstract *)(v3 + 128));
    CustomDungeonSetting::operator=(&dungeon_brief->setting, &custom_dungeon->setting);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_type_);
  }
  if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_EDIT
    || (ret = PlayerCustomDungeonComp::checkDungeonSettingByAbstract(
                this,
                &dungeon_brief->setting,
                &dungeon_brief->abstract)) == 0 )
  {
    v6 = 1;
  }
  else
  {
    v2 = ret;
    v6 = 0;
  }
  CustomDungeonAbstract::~CustomDungeonAbstract((CustomDungeonAbstract *const)(v3 + 128));
  if ( v6 == 1 )
  {
LABEL_18:
    v7 = ServiceBox::findService<GameserverService>();
    v8 = (unsigned int)GameserverService::getGameThreadLocal(v7) + 568;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    toThisPtr<Player>((Player *)&v42);
    DungeonMgr::createDungeon((DungeonMgr *const)(v3 + 96), v8, (PlayerPtr *)*(unsigned int *)(v3 + 48));
    std::shared_ptr<Player>::~shared_ptr(&v42);
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 96))
      || (v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
          DungeonScene::getDungeonId(v9) != *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "createAndEnterDungeon",
        978);
      v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v43,
              (const char (*)[37])"create dungeon failed, dungeon_guid:");
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &custom_dungeon->dungeon_guid);
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" dungeon_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v43);
      v2 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->enter_type_);
      }
      if ( this->enter_type_ != ENTER_CUSTOM_DUNGEON_EDIT
        && (v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
            PlayerCustomDungeonComp::buildCustomDungeon(this, custom_dungeon, v16)) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "createAndEnterDungeon",
          984);
        v18 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v43,
                (const char (*)[29])"buidDungeon fail dungeon_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v3 + 48));
        v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" dungeon_guid:");
        v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v20,
                &custom_dungeon->dungeon_guid);
        v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
        common::milog::MiLogStream::~MiLogStream(&v43);
        v2 = 11054;
      }
      else
      {
        v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        dungeon_scene_team = DungeonScene::getDungeonSceneTeam(v23);
        v24 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        SceneId = Scene::getSceneId((const Scene *const)v24);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        DungeonSceneTeam::initSceneTeam(dungeon_scene_team, this->player_, SceneId);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        DungeonComp = Player::getDungeonComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        SceneComp = Player::getSceneComp(this->player_);
        CurSceneId = PlayerSceneComp::getCurSceneId(SceneComp);
        std::shared_ptr<DungeonScene>::shared_ptr(
          (std::shared_ptr<DungeonScene> *const)&v42,
          (const std::shared_ptr<DungeonScene> *)(v3 + 96));
        v29 = PlayerDungeonComp::enterDungeon(DungeonComp, (DungeonScenePtr *)&v42, CurSceneId, 0) != 0;
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v42);
        if ( v29 )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "createAndEnterDungeon",
            992);
          v30 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v43,
                  (const char (*)[30])"enterDungeon fail dungeon_id:");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v30,
                  (const unsigned int *)(v3 + 48));
          v32 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v31,
                  (const char (*)[15])" dungeon_guid:");
          v33 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v32,
                  &custom_dungeon->dungeon_guid);
          v34 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v33, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &val);
          common::milog::MiLogStream::~MiLogStream(&v43);
          v2 = 1101;
        }
        else
        {
          v35 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::function<PlayerCustomDungeonComp::createAndEnterDungeon(CustomDungeon const&)::{lambda(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)#1},void,void>(
            (std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *const)&v43,
            (PlayerCustomDungeonComp::createAndEnterDungeon::<lambda(Player&, DungeonScene&, Challenge&, proto::DungeonChallengeFinishNotify&)>)&v42);
          DungeonScene::registerChallengeSettleCallback(v35, (ChallengeSettleCallback *)&v43);
          std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::~function((std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *const)&v43);
          std::weak_ptr<DungeonScene>::operator=<DungeonScene>(
            &this->cur_dungeon_scene_wtr_,
            (const std::shared_ptr<DungeonScene> *)(v3 + 96));
          v2 = 0;
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 96));
  }
  result = v2;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 996: range 000000001416D87C-000000001416D8BD
void __cdecl PlayerCustomDungeonComp::createAndEnterDungeon(CustomDungeon const&)::{lambda(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)#1}::operator()(
        const PlayerCustomDungeonComp::createAndEnterDungeon::<lambda(Player&, DungeonScene&, Challenge&, proto::DungeonChallengeFinishNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        Challenge *challenge,
        proto::DungeonChallengeFinishNotify *notify)
{
  PlayerCustomDungeonComp *CustomDungeonComp; // rdi

  CustomDungeonComp = Player::getCustomDungeonComp(player);
  PlayerCustomDungeonComp::onChallengeSettle(CustomDungeonComp, dungeon_scene, challenge, notify);
};

// Line 1006: range 000000001416E29E-000000001416F909
void __cdecl PlayerCustomDungeonComp::onChallengeSettle(
        PlayerCustomDungeonComp *const this,
        DungeonScene *dungeon_scene,
        Challenge *challenge,
        proto::DungeonChallengeFinishNotify *finish_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rbx
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t dungeon_id; // r14d
  common::milog::MiLogStream *v10; // rbx
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  uint32_t father_index; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  google::protobuf::uint32 v19; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  __int64 challenge_time_cost; // rsi
  CustomDungeonExcelConfigMgr *p_custom_dungeon_config_mgr; // rcx
  PlayerExhibitionComp *ExhibitionComp; // rcx
  PlayerExhibitionComp *v29; // rcx
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  char v31; // al
  uint32_t v32; // edx
  PlayerEventComp *EventComp; // r14
  std::map<long unsigned int,CustomDungeonBrief>::mapped_type *v34; // rdx
  uint32_t *p_state; // rax
  char v36; // al
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rdx
  std::set<long unsigned int>::size_type v42; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v44; // rbx
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rbx
  bool is_brief_changed; // [rsp+22h] [rbp-15Eh]
  bool is_arrive_finish; // [rsp+23h] [rbp-15Dh]
  unsigned int DungeonId; // [rsp+24h] [rbp-15Ch] BYREF
  unsigned int val; // [rsp+28h] [rbp-158h] BYREF
  uint32_t coin_num; // [rsp+2Ch] [rbp-154h]
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self __y; // [rsp+30h] [rbp-150h] BYREF
  proto::CustomDungeonResultInfo *result_info; // [rsp+38h] [rbp-148h]
  const data::CustomLevelGroupConfig *dungeon_group_config_ptr; // [rsp+40h] [rbp-140h]
  CustomDungeonBrief *dungeon_brief; // [rsp+48h] [rbp-138h]
  std::shared_ptr<PlayCustomDungeonEvent> __r; // [rsp+50h] [rbp-130h] BYREF
  std::shared_ptr<Config> v60; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v61; // [rsp+70h] [rbp-110h] BYREF
  char v62[240]; // [rsp+90h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 18 is_my_dungeon:1067 48 8 17 dungeon_guid:1060 80 8 9 iter:1099 112 40 11 notify:1079";
  *(_QWORD *)(v4 + 16) = PlayerCustomDungeonComp::onChallengeSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61953;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "onChallengeSettle",
      1009);
    v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v61, (const char (*)[26])off_2525D400);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_33:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v61);
    goto LABEL_129;
  }
  v8 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&v8->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v8 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->dungeon_id);
  }
  dungeon_id = v8->dungeon_id;
  if ( dungeon_id == DungeonScene::getDungeonId(dungeon_scene) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&challenge->father_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&challenge->father_index);
    }
    father_index = challenge->father_index;
    if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)challenge + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge->challenge_index >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(&challenge->challenge_index);
    }
    if ( father_index != challenge->challenge_index )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "onChallengeSettle",
        1021);
      v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v61,
              (const char (*)[21])"ignore challenge id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &challenge->challenge_id);
      v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             v18,
             (const char (*)[36])" because not father challenge, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_33;
    }
    v19 = proto::DungeonChallengeFinishNotify::time_cost(finish_notify);
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->challenge_time_cost_);
    }
    this->challenge_time_cost_ += v19;
    if ( proto::DungeonChallengeFinishNotify::finish_type(finish_notify) == CHALLENGE_FINISH_TYPE_PAUSE )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "onChallengeSettle",
        1030);
      v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v61, (const char (*)[14])"challenge_id:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &challenge->challenge_id);
      v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])" pause, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_33;
    }
    if ( *(_BYTE *)(((unsigned __int64)&challenge->finish_reason >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&challenge->finish_reason >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&challenge->finish_reason);
    }
    if ( challenge->finish_reason == EXIT_VIEW )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "onChallengeSettle",
        1037);
      v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v61, (const char (*)[14])"challenge_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &challenge->challenge_id);
      v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v23,
              (const char (*)[22])" exit view time cost:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->challenge_time_cost_);
      v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_33;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->challenge_time_cost_);
    }
    challenge_time_cost = this->challenge_time_cost_;
    proto::DungeonChallengeFinishNotify::set_time_cost(finish_notify, challenge_time_cost);
    if ( *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->challenge_time_cost_, challenge_time_cost, &this->challenge_time_cost_);
    }
    this->challenge_time_cost_ = 0;
    result_info = proto::DungeonChallengeFinishNotify::mutable_custom_dungeon_result_info(finish_notify);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v60);
    p_custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v60)->design_config.txt_config_mgr.custom_dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->group_id_);
    }
    dungeon_group_config_ptr = data::CustomLevelExcelConfigMgrBase::findCustomLevelGroupConfig(
                                 p_custom_dungeon_config_mgr,
                                 this->group_id_);
    std::shared_ptr<Config>::~shared_ptr(&v60);
    if ( dungeon_group_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ExhibitionComp = Player::getExhibitionComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_group_config_ptr->coin_exhibition_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_group_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_group_config_ptr->coin_exhibition_id >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_group_config_ptr->coin_exhibition_id);
      }
      coin_num = PlayerExhibitionComp::getExhibitionReplaceableData(
                   ExhibitionComp,
                   dungeon_group_config_ptr->coin_exhibition_id);
      proto::CustomDungeonResultInfo::set_got_coin_num(result_info, coin_num);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v29 = Player::getExhibitionComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_group_config_ptr->finish_exhibition_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_group_config_ptr->finish_exhibition_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_group_config_ptr->finish_exhibition_id);
      }
      is_arrive_finish = PlayerExhibitionComp::getExhibitionReplaceableData(
                           v29,
                           dungeon_group_config_ptr->finish_exhibition_id) != 0;
      proto::CustomDungeonResultInfo::set_is_arrive_finish(result_info, is_arrive_finish);
      PlayerCustomDungeonComp::logChallengeSettle(this, challenge);
      v30 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v30);
      *(_QWORD *)(v4 + 48) = v30->dungeon_guid;
      if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->enter_type_);
      }
      if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_OFFICIAL )
      {
        PlayerCustomDungeonComp::onOfficialDungeonFinish(this, *(_QWORD *)(v4 + 48), challenge, result_info);
      }
      else
      {
        *(_BYTE *)(v4 + 32) = PlayerCustomDungeonComp::isMyDungeon(this, *(_QWORD *)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->enter_type_);
        }
        if ( this->enter_type_ != ENTER_CUSTOM_DUNGEON_PLAY )
          goto LABEL_63;
        if ( *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)challenge + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load1(&challenge->is_success);
        }
        if ( challenge->is_success && proto::DungeonChallengeFinishNotify::time_cost(finish_notify) )
          v31 = 1;
        else
LABEL_63:
          v31 = 0;
        if ( v31 )
        {
          v32 = proto::DungeonChallengeFinishNotify::time_cost(finish_notify);
          PlayerCustomDungeonComp::updateBattleRecord(this, *(_QWORD *)(v4 + 48), v32);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        EventComp = Player::getEventComp(this->player_);
        common::tools::perf::make_shared<PlayCustomDungeonEvent,bool &,bool &>(
          (bool *)&__r,
          (bool *)(v4 + 32),
          &challenge->is_success,
          (bool *)(v4 + 32));
        std::shared_ptr<BaseEvent>::shared_ptr<PlayCustomDungeonEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v60,
          &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v60);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v60);
        std::shared_ptr<PlayCustomDungeonEvent>::~shared_ptr(&__r);
        if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->enter_type_);
        }
        if ( this->enter_type_ != ENTER_CUSTOM_DUNGEON_PLAY )
          goto LABEL_76;
        if ( *(_BYTE *)(v4 + 32) != 1 )
          goto LABEL_75;
        v34 = std::map<unsigned long,CustomDungeonBrief>::operator[](
                &this->brief_map_,
                (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v4 + 48));
        p_state = &v34->state;
        if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_state);
        }
        if ( v34->state == 2 )
LABEL_75:
          v36 = 1;
        else
LABEL_76:
          v36 = 0;
        if ( v36 )
        {
          proto::ServerUpdateCustomDungeonSocialNotify::ServerUpdateCustomDungeonSocialNotify((proto::ServerUpdateCustomDungeonSocialNotify *const)(v4 + 112));
          proto::ServerUpdateCustomDungeonSocialNotify::set_dungeon_guid(
            (proto::ServerUpdateCustomDungeonSocialNotify *const)(v4 + 112),
            *(_QWORD *)(v4 + 48));
          proto::ServerUpdateCustomDungeonSocialNotify::set_update_type(
            (proto::ServerUpdateCustomDungeonSocialNotify *const)(v4 + 112),
            CUSTOM_DUNGEON_SOCIAL_UPDATE_PLAY);
          if ( *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)challenge + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load1(&challenge->is_success);
          }
          proto::ServerUpdateCustomDungeonSocialNotify::set_is_win(
            (proto::ServerUpdateCustomDungeonSocialNotify *const)(v4 + 112),
            challenge->is_success);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          if ( sendProtoToActivityService<proto::ServerUpdateCustomDungeonSocialNotify>(
                 this->player_,
                 (proto::ServerUpdateCustomDungeonSocialNotify *)(v4 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v61,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
              "onChallengeSettle",
              1085);
            v37 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v61,
                    (const char (*)[44])"report finish dungeon failed, dungeon_guid:");
            v38 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v37,
                    (const unsigned __int64 *)(v4 + 48));
            v39 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v38, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &val);
            common::milog::MiLogStream::~MiLogStream(&v61);
          }
          PlayerCustomDungeonComp::tryUpdateCacheSocial(
            this,
            (const proto::ServerUpdateCustomDungeonSocialNotify *)(v4 + 112));
          proto::ServerUpdateCustomDungeonSocialNotify::~ServerUpdateCustomDungeonSocialNotify((proto::ServerUpdateCustomDungeonSocialNotify *const)(v4 + 112));
        }
        v40 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v40);
        proto::CustomDungeonResultInfo::set_dungeon_guid(result_info, v40->dungeon_guid);
        v41 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)&v41->is_liked >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v41 - 115) & 7) >= *(_BYTE *)(((unsigned __int64)&v41->is_liked >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&v41->is_liked);
        }
        proto::CustomDungeonResultInfo::set_is_liked(result_info, v41->is_liked);
        v42 = std::set<unsigned long>::count(
                &this->store_dungeon_set_,
                (const std::set<long unsigned int>::key_type *)(v4 + 48));
        proto::CustomDungeonResultInfo::set_is_stored(result_info, v42 != 0);
        if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->enter_type_);
        }
        if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_PLAY && *(_BYTE *)(v4 + 32) != 1 )
        {
          proto::CustomDungeonResultInfo::set_finish_type(result_info, CUSTOM_DUNGEON_FINISH_PLAY_NORMAL);
        }
        else
        {
          v43 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
          *(std::map<long unsigned int,CustomDungeonBrief>::iterator *)(v4 + 80) = std::map<unsigned long,CustomDungeonBrief>::find(
                                                                                     &this->brief_map_,
                                                                                     &v43->dungeon_guid);
          __y._M_node = std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)(v4 + 80),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v61,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
              "onChallengeSettle",
              1102);
            v44 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v61,
                    (const char (*)[31])"no dungeon data, dungeon_guid:");
            v45 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
            v46 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v44, &v45->dungeon_guid);
            v47 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v46, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &val);
            common::milog::MiLogStream::~MiLogStream(&v61);
          }
          else
          {
            dungeon_brief = &std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v4 + 80))->second;
            is_brief_changed = 0;
            if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->enter_type_);
            }
            if ( this->enter_type_ != ENTER_CUSTOM_DUNGEON_PLAY )
              goto LABEL_115;
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->state >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)dungeon_brief + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_brief->state >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(&dungeon_brief->state);
            }
            if ( dungeon_brief->state == 2 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->cached_social >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&dungeon_brief->cached_social >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&dungeon_brief->cached_social);
              }
              ++dungeon_brief->cached_social.play_num;
              if ( *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)challenge + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_load1(&challenge->is_success);
              }
              if ( challenge->is_success )
              {
                if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->cached_social.win_num >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)dungeon_brief - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_brief->cached_social.win_num >> 3)
                                                                               + 0x7FFF8000) )
                {
                  __asan_report_load4(&dungeon_brief->cached_social.win_num);
                }
                ++dungeon_brief->cached_social.win_num;
              }
              is_brief_changed = 1;
              proto::CustomDungeonResultInfo::set_finish_type(result_info, CUSTOM_DUNGEON_FINISH_SELF_PLAY_NORMAL);
            }
            else
            {
LABEL_115:
              if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->enter_type_);
              }
              if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_PLAY )
                proto::CustomDungeonResultInfo::set_finish_type(result_info, CUSTOM_DUNGEON_FINISH_PLAY_TRY);
              else
                proto::CustomDungeonResultInfo::set_finish_type(result_info, CUSTOM_DUNGEON_FINISH_EDIT_TRY);
            }
            if ( *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)challenge + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load1(&challenge->is_success);
            }
            if ( challenge->is_success )
            {
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->state >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_brief + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_brief->state >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4(&dungeon_brief->state);
              }
              if ( !dungeon_brief->state )
              {
                dungeon_brief->state = 1;
                is_brief_changed = 1;
              }
            }
            if ( is_brief_changed )
              PlayerCustomDungeonComp::notifyCustomDungeonUpdate(this, dungeon_brief);
          }
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "onChallengeSettle",
      1014);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v61, (const char (*)[16])off_2525D440);
    v11 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &v11->dungeon_id);
    v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])" dungeon_scene id:");
    DungeonId = DungeonScene::getDungeonId(dungeon_scene);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &DungeonId);
    v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v61);
  }
LABEL_129:
  if ( v62 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1139: range 000000001416F90A-000000001416FBCF
void __cdecl PlayerCustomDungeonComp::onOfficialDungeonFinish(
        PlayerCustomDungeonComp *const this,
        uint64_t dungeon_guid,
        Challenge *challenge,
        const proto::CustomDungeonResultInfo *result_info)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  OfficialCustomDungeon *v9; // rdx
  std::shared_ptr<CustomDungeonOfficialCoinEvent> __r; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-A0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 coin_num:1146 64 16 25 official_dungeon_ptr:1140";
  *(_QWORD *)(v4 + 16) = PlayerCustomDungeonComp::onOfficialDungeonFinish;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  PlayerCustomDungeonComp::getOfficialDungeonByGuid((PlayerCustomDungeonComp *const)(v4 + 64), (uint64_t)this);
  if ( !std::operator==<OfficialCustomDungeon>(0LL, (const std::shared_ptr<OfficialCustomDungeon> *)(v4 + 64)) )
  {
    *(_DWORD *)(v4 + 48) = proto::CustomDungeonResultInfo::got_coin_num(result_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    v8 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::tools::perf::make_shared<CustomDungeonOfficialCoinEvent,unsigned int &,unsigned int &>(
      (unsigned int *)&__r,
      &v8->dungeon_id,
      (unsigned int *)(v4 + 48),
      &v8->dungeon_id);
    std::shared_ptr<BaseEvent>::shared_ptr<CustomDungeonOfficialCoinEvent,void>(&p_event_ptr, &__r);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<CustomDungeonOfficialCoinEvent>::~shared_ptr(&__r);
    if ( *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)challenge + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load1(&challenge->is_success);
    }
    if ( challenge->is_success )
    {
      v9 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      PlayerCustomDungeonComp::finishOfficialDungeon(this, v9);
    }
  }
  std::shared_ptr<OfficialCustomDungeon>::~shared_ptr((std::shared_ptr<OfficialCustomDungeon> *const)(v4 + 64));
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1160: range 000000001416FBD0-000000001416FCE2
void __cdecl PlayerCustomDungeonComp::finishOfficialDungeon(
        PlayerCustomDungeonComp *const this,
        OfficialCustomDungeon *official_dungeon)
{
  PlayerEventComp *EventComp; // rbx
  std::shared_ptr<OfficialCustomDungeonFinishEvent> __r; // [rsp+10h] [rbp-30h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&official_dungeon->win_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)official_dungeon + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&official_dungeon->win_times >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&official_dungeon->win_times);
  }
  ++official_dungeon->win_times;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  common::tools::perf::make_shared<OfficialCustomDungeonFinishEvent,unsigned int &>(
    (unsigned int *)&__r,
    &official_dungeon->dungeon_id);
  std::shared_ptr<BaseEvent>::shared_ptr<OfficialCustomDungeonFinishEvent,void>(&p_event_ptr, &__r);
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  std::shared_ptr<OfficialCustomDungeonFinishEvent>::~shared_ptr(&__r);
};

// Line 1168: range 000000001416FCE4-000000001416FE38
OfficialCustomDungeonPtr __cdecl PlayerCustomDungeonComp::getOfficialDungeonByGuid(
        PlayerCustomDungeonComp *const this,
        uint64_t dungeon_guid)
{
  uint64_t v2; // rdx
  const std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > *v3; // rax
  int v4; // ebx
  std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  OfficialCustomDungeonPtr result; // rax
  uint64_t dungeon_guida; // [rsp+8h] [rbp-78h]
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::iterator __for_begin; // [rsp+28h] [rbp-58h] BYREF
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::iterator __for_end; // [rsp+30h] [rbp-50h] BYREF
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>> *__for_range; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::type *dungeon_id; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::type *official_dungeon_ptr; // [rsp+48h] [rbp-38h]
  std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > __in; // [rsp+50h] [rbp-30h] BYREF

  dungeon_guida = v2;
  __for_range = (std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>> *)(dungeon_guid + 488);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::begin((std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>> *const)(dungeon_guid + 488))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::end((std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>> *const)(dungeon_guid + 488))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>::pair(&__in, v3);
    dungeon_id = std::get<0ul,unsigned int const,std::shared_ptr<OfficialCustomDungeon>>(&__in);
    official_dungeon_ptr = std::get<1ul,unsigned int const,std::shared_ptr<OfficialCustomDungeon>>(&__in);
    if ( std::operator==<OfficialCustomDungeon>(0LL, official_dungeon_ptr) )
    {
      v4 = 0;
    }
    else
    {
      v5 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)official_dungeon_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v5->dungeon_guid >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v5->dungeon_guid);
      if ( dungeon_guida == v5->dungeon_guid )
      {
        std::shared_ptr<OfficialCustomDungeon>::shared_ptr(
          (std::shared_ptr<OfficialCustomDungeon> *const)this,
          official_dungeon_ptr);
        v4 = 1;
      }
      else
      {
        v4 = 2;
      }
    }
    std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>::~pair(&__in);
    if ( v4 && v4 != 2 )
      goto LABEL_14;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator++(&__for_begin);
  }
  std::shared_ptr<OfficialCustomDungeon>::shared_ptr((std::shared_ptr<OfficialCustomDungeon> *const)this, 0LL);
LABEL_14:
  result._M_ptr = (std::__shared_ptr<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1184: range 000000001416FE3A-0000000014170068
int32_t __cdecl PlayerCustomDungeonComp::buildCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const CustomDungeon *custom_dungeon,
        DungeonScene *dungeon_scene)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+20h] [rbp-70h] BYREF
  uint32_t dungeon_id; // [rsp+24h] [rbp-6Ch]
  std::map<unsigned int,CustomDungeonRoom>::const_iterator __for_begin; // [rsp+28h] [rbp-68h] BYREF
  std::map<unsigned int,CustomDungeonRoom>::const_iterator __for_end; // [rsp+30h] [rbp-60h] BYREF
  const CustomDungeonSetting *setting; // [rsp+38h] [rbp-58h]
  const std::map<unsigned int,CustomDungeonRoom> *__for_range; // [rsp+40h] [rbp-50h]
  const std::pair<unsigned int const,CustomDungeonRoom> *v14; // [rsp+48h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonRoom> >::type *room_id; // [rsp+50h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *room; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  setting = &custom_dungeon->setting;
  if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&custom_dungeon->dungeon_id);
  }
  dungeon_id = custom_dungeon->dungeon_id;
  PlayerCustomDungeonComp::clearEntity(this);
  __for_range = &custom_dungeon->room_map;
  __for_begin._M_node = std::map<unsigned int,CustomDungeonRoom>::begin(&custom_dungeon->room_map)._M_node;
  __for_end._M_node = std::map<unsigned int,CustomDungeonRoom>::end(&custom_dungeon->room_map)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
      return 0;
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator*(&__for_begin);
    room_id = std::get<0ul,unsigned int const,CustomDungeonRoom>(v14);
    room = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *)std::get<1ul,unsigned int const,CustomDungeonRoom>(v14);
    if ( std::set<unsigned int>::count(&setting->open_room_set, room_id) )
    {
      if ( PlayerCustomDungeonComp::buildCustomRoom(this, dungeon_id, room, dungeon_scene) )
        break;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
    "buildCustomDungeon",
    1199);
  v3 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v17, (const char (*)[19])"build custom room:");
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, room_id);
  v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v4, (const char (*)[14])" failed, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v17);
  return -1;
};

// Line 1207: range 000000001417006A-000000001417049B
void __cdecl PlayerCustomDungeonComp::clearEntity(PlayerCustomDungeonComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,CustomDungeonEntity>::size_type v4; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  bool is_official; // [rsp+1Fh] [rbp-F1h]
  std::map<unsigned int,CustomDungeonEntity>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,CustomDungeonEntity>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::map<unsigned int,CustomDungeonEntity> *__for_range; // [rsp+30h] [rbp-E0h]
  std::vector<CustomDungeonEntity> *__for_range_0; // [rsp+38h] [rbp-D8h]
  CustomDungeonEntity *entity_0; // [rsp+40h] [rbp-D0h]
  std::pair<unsigned int const,CustomDungeonEntity> *__in; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,CustomDungeonEntity> >::type *entity_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,CustomDungeonEntity> >::type *entity; // [rsp+58h] [rbp-B8h]
  char v16[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 entity_ptr:1217 64 24 15 entity_vec:1208";
  *(_QWORD *)(v1 + 16) = PlayerCustomDungeonComp::clearEntity;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::vector<CustomDungeonEntity>::vector((std::vector<CustomDungeonEntity> *const)(v1 + 64));
  v4 = std::map<unsigned int,CustomDungeonEntity>::size(&this->entity_wtr_map_);
  std::vector<CustomDungeonEntity>::reserve((std::vector<CustomDungeonEntity> *const)(v1 + 64), v4);
  __for_range = &this->entity_wtr_map_;
  __for_begin._M_node = std::map<unsigned int,CustomDungeonEntity>::begin(&this->entity_wtr_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CustomDungeonEntity>::end(&this->entity_wtr_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonEntity>>::operator*(&__for_begin);
    entity_id = std::get<0ul,unsigned int const,CustomDungeonEntity>(__in);
    entity = std::get<1ul,unsigned int const,CustomDungeonEntity>(__in);
    std::vector<CustomDungeonEntity>::emplace_back<CustomDungeonEntity&>(
      (std::vector<CustomDungeonEntity> *const)(v1 + 64),
      entity,
      entity);
    std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonEntity>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_type_);
  }
  is_official = this->enter_type_ == ENTER_CUSTOM_DUNGEON_OFFICIAL;
  __for_range_0 = (std::vector<CustomDungeonEntity> *)(v1 + 64);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonEntity> >::_Base_ptr)std::vector<CustomDungeonEntity>::begin((std::vector<CustomDungeonEntity> *const)(v1 + 64))._M_current;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonEntity> >::_Base_ptr)std::vector<CustomDungeonEntity>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<CustomDungeonEntity *,std::vector<CustomDungeonEntity>>(
            (const __gnu_cxx::__normal_iterator<CustomDungeonEntity*,std::vector<CustomDungeonEntity> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<CustomDungeonEntity*,std::vector<CustomDungeonEntity> > *)&__for_end) )
  {
    entity_0 = __gnu_cxx::__normal_iterator<CustomDungeonEntity *,std::vector<CustomDungeonEntity>>::operator*((const __gnu_cxx::__normal_iterator<CustomDungeonEntity*,std::vector<CustomDungeonEntity> > *const)&__for_begin);
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v1 + 32));
    if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v1 + 32)) )
    {
      if ( is_official )
      {
        if ( *(char *)(((unsigned __int64)&entity_0->is_coin >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&entity_0->is_coin);
        if ( entity_0->is_coin )
          std::set<unsigned int>::insert(&this->official_black_coin_set_, &entity_0->config_idx);
      }
    }
    else
    {
      v5 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v5);
      v6 = (unsigned __int64)(v5->_vptr_DescribalBase + 16);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v5->_vptr_DescribalBase + 16);
      (*(void (__fastcall **)(std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v6)(
        v5,
        &VisionContext::miss_context);
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 32));
    __gnu_cxx::__normal_iterator<CustomDungeonEntity *,std::vector<CustomDungeonEntity>>::operator++((__gnu_cxx::__normal_iterator<CustomDungeonEntity*,std::vector<CustomDungeonEntity> > *const)&__for_begin);
  }
  std::map<unsigned int,CustomDungeonEntity>::clear(&this->entity_wtr_map_);
  std::vector<CustomDungeonEntity>::~vector((std::vector<CustomDungeonEntity> *const)(v1 + 64));
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1232: range 000000001417049C-0000000014171C6B
__int64 __fastcall PlayerCustomDungeonComp::buildCustomRoom(
        PlayerCustomDungeonComp *const this,
        uint32_t dungeon_id,
        unsigned __int64 room,
        Scene *dungeon_scene)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  unsigned int v13; // r15d
  uint32_t *p_config_id; // rax
  JsonConfigMgr *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r15
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r15
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  float x; // xmm1_4
  float z; // xmm1_4
  float y; // xmm1_4
  double v28; // xmm0_8
  Scene *v29; // rdx
  unsigned __int64 v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r15
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  unsigned __int64 v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  __int64 v43; // rsi
  uint32_t config_idx; // ecx
  char v45; // dl
  __int64 v46; // rdx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r15
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  bool is_coin; // [rsp+2Fh] [rbp-5E1h]
  unsigned int EntityId; // [rsp+30h] [rbp-5E0h] BYREF
  unsigned int val; // [rsp+34h] [rbp-5DCh] BYREF
  float brick_x; // [rsp+38h] [rbp-5D8h]
  float brick_z; // [rsp+3Ch] [rbp-5D4h]
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_begin; // [rsp+40h] [rbp-5D0h] BYREF
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_end; // [rsp+48h] [rbp-5C8h] BYREF
  const data::ConfigCustomLevelRoomSetting *room_config_ptr; // [rsp+50h] [rbp-5C0h]
  const CustomDungeonExcelConfigMgr *custom_dungeon_config_mgr; // [rsp+58h] [rbp-5B8h]
  const std::unordered_map<unsigned int,CustomDungeonBlock> *__for_range; // [rsp+60h] [rbp-5B0h]
  const std::vector<data::ConfigCustomLevelRoomExtraData> *__for_range_0; // [rsp+68h] [rbp-5A8h]
  std::vector<CustomDungeonBlock> *__for_range_1; // [rsp+70h] [rbp-5A0h]
  const CustomDungeonBlock *block_0; // [rsp+78h] [rbp-598h]
  const data::ConfigCustomLevelBrick *brick_config_ptr; // [rsp+80h] [rbp-590h]
  CustomDungeonEntity *entity; // [rsp+88h] [rbp-588h]
  const data::ConfigCustomLevelRoomExtraData *ld_block; // [rsp+90h] [rbp-580h]
  const std::pair<unsigned int const,CustomDungeonBlock> *v79; // [rsp+98h] [rbp-578h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonBlock> >::type *_; // [rsp+A0h] [rbp-570h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *block; // [rsp+A8h] [rbp-568h]
  std::shared_ptr<Config> v82; // [rsp+B0h] [rbp-560h] BYREF
  common::milog::MiLogStream v83; // [rsp+C0h] [rbp-550h] BYREF
  common::milog::MiLogStream v84; // [rsp+E0h] [rbp-530h] BYREF
  common::milog::MiLogStream v85; // [rsp+100h] [rbp-510h] BYREF
  char v86[1264]; // [rsp+120h] [rbp-4F0h] BYREF

  v4 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1216LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 14 gadget_id:1270 48 4 15 dungeon_id:1231 64 12 8 pos:1290 96 16 15 gadget_ptr:1305 128 2"
                        "4 14 block_vec:1243 192 36 10 block:1254 272 816 17 gadget_param:1294";
  *(_QWORD *)(v4 + 16) = PlayerCustomDungeonComp::buildCustomRoom;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219020288;
  v6[536862723] = -219021312;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -218959356;
  v6[536862728] = 62194;
  v6[536862754] = -202116109;
  v6[536862755] = -202116109;
  v6[536862756] = -202116109;
  v6[536862757] = -202116109;
  *(_DWORD *)(v4 + 48) = dungeon_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 96));
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96))->design_config.json_config_mgr;
  if ( *(_BYTE *)((room >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((room >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(room);
  room_config_ptr = JsonConfigMgr::findCustomDungeonRoomConfig(p_json_config_mgr, *(_DWORD *)(v4 + 48), *(_DWORD *)room);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
  if ( room_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 96));
    custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96))->design_config.txt_config_mgr.custom_dungeon_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
    std::vector<CustomDungeonBlock>::vector((std::vector<CustomDungeonBlock> *const)(v4 + 128));
    __for_range = (const std::unordered_map<unsigned int,CustomDungeonBlock> *)(room + 8);
    __for_begin._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::begin((const std::unordered_map<unsigned int,CustomDungeonBlock> *const)(room + 8))._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::end((const std::unordered_map<unsigned int,CustomDungeonBlock> *const)(room + 8))._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,CustomDungeonBlock>,false>(&__for_begin, &__for_end) )
    {
      v79 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,CustomDungeonBlock>(v79);
      block = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *)std::get<1ul,unsigned int const,CustomDungeonBlock>(v79);
      std::vector<CustomDungeonBlock>::push_back((std::vector<CustomDungeonBlock> *const)(v4 + 128), block);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = &room_config_ptr->extra_data;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false>::__node_type *)std::vector<data::ConfigCustomLevelRoomExtraData>::begin(&room_config_ptr->extra_data)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false>::__node_type *)std::vector<data::ConfigCustomLevelRoomExtraData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigCustomLevelRoomExtraData const*,std::vector<data::ConfigCustomLevelRoomExtraData>>(
              (const __gnu_cxx::__normal_iterator<const data::ConfigCustomLevelRoomExtraData*,std::vector<data::ConfigCustomLevelRoomExtraData> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const data::ConfigCustomLevelRoomExtraData*,std::vector<data::ConfigCustomLevelRoomExtraData> > *)&__for_end) )
    {
      ld_block = __gnu_cxx::__normal_iterator<data::ConfigCustomLevelRoomExtraData const*,std::vector<data::ConfigCustomLevelRoomExtraData>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigCustomLevelRoomExtraData*,std::vector<data::ConfigCustomLevelRoomExtraData> > *const)&__for_begin);
      p_config_id = &ld_block->config_id;
      if ( *(_BYTE *)(((unsigned __int64)p_config_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_config_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_config_id);
      }
      if ( ld_block->config_id )
      {
        if ( *(char *)(((unsigned __int64)&ld_block->is_gadget >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&ld_block->is_gadget);
        if ( ld_block->is_gadget )
        {
          CustomDungeonBlock::CustomDungeonBlock((CustomDungeonBlock *const)(v4 + 192));
          if ( *(_BYTE *)(((unsigned __int64)&ld_block->config_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)ld_block + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ld_block->config_id >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(&ld_block->config_id);
          }
          *(_DWORD *)(v4 + 196) = ld_block->config_id;
          Vector3::Vector3((Vector3 *const)(v4 + 64), &ld_block->occupy_pos);
          *(_QWORD *)(v4 + 200) = *(_QWORD *)(v4 + 64);
          *(_DWORD *)(v4 + 208) = *(_DWORD *)(v4 + 72);
          Vector3::Vector3((Vector3 *const)(v4 + 64), &ld_block->gadget_rot);
          *(_QWORD *)(v4 + 212) = *(_QWORD *)(v4 + 64);
          *(_DWORD *)(v4 + 220) = *(_DWORD *)(v4 + 72);
          if ( *(_BYTE *)(((unsigned __int64)ld_block >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)ld_block >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(ld_block);
          }
          *(_DWORD *)(v4 + 224) = ld_block->index;
          std::vector<CustomDungeonBlock>::push_back(
            (std::vector<CustomDungeonBlock> *const)(v4 + 128),
            (const std::vector<CustomDungeonBlock>::value_type *)(v4 + 192));
        }
      }
      __gnu_cxx::__normal_iterator<data::ConfigCustomLevelRoomExtraData const*,std::vector<data::ConfigCustomLevelRoomExtraData>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigCustomLevelRoomExtraData*,std::vector<data::ConfigCustomLevelRoomExtraData> > *const)&__for_begin);
    }
    __for_range_1 = (std::vector<CustomDungeonBlock> *)(v4 + 128);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false>::__node_type *)std::vector<CustomDungeonBlock>::begin((std::vector<CustomDungeonBlock> *const)(v4 + 128))._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false>::__node_type *)std::vector<CustomDungeonBlock>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<CustomDungeonBlock *,std::vector<CustomDungeonBlock>>(
              (const __gnu_cxx::__normal_iterator<CustomDungeonBlock*,std::vector<CustomDungeonBlock> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<CustomDungeonBlock*,std::vector<CustomDungeonBlock> > *)&__for_end) )
    {
      block_0 = __gnu_cxx::__normal_iterator<CustomDungeonBlock *,std::vector<CustomDungeonBlock>>::operator*((const __gnu_cxx::__normal_iterator<CustomDungeonBlock*,std::vector<CustomDungeonBlock> > *const)&__for_begin);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v82);
      v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v82)->design_config.json_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&block_0->block_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block_0->block_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block_0->block_id);
      }
      brick_config_ptr = JsonConfigMgr::findCustomDungeonBrickConfig(v15, block_0->block_id);
      std::shared_ptr<Config>::~shared_ptr(&v82);
      if ( brick_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&brick_config_ptr->server_gadget_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&brick_config_ptr->server_gadget_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&brick_config_ptr->server_gadget_id);
        }
        *(_DWORD *)(v4 + 32) = brick_config_ptr->server_gadget_id;
        if ( *(_DWORD *)(v4 + 32) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&block_0->block_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)block_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block_0->block_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&block_0->block_id);
          }
          is_coin = CustomDungeonExcelConfigMgr::isCoinBrick(custom_dungeon_config_mgr, block_0->block_id);
          if ( *(_BYTE *)(((unsigned __int64)&block_0->config_idx >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)block_0 + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block_0->config_idx >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&block_0->config_idx);
          }
          if ( block_0->config_idx
            && is_coin
            && common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                 &this->official_black_coin_set_,
                 &block_0->config_idx) )
          {
            common::milog::MiLogStream::create(
              &v85,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
              "buildCustomRoom",
              1280);
            v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v85, (const char (*)[10])"block_id:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &block_0->block_id);
            common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v24, (const char (*)[25])off_2525DA20);
            common::milog::MiLogStream::~MiLogStream(&v85);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)brick_config_ptr >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)brick_config_ptr >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(brick_config_ptr);
            }
            brick_x = brick_config_ptr->brick_size.x;
            if ( *(_BYTE *)(((unsigned __int64)&brick_config_ptr->brick_size.z >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&brick_config_ptr->brick_size.z >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&brick_config_ptr->brick_size.z);
            }
            brick_z = brick_config_ptr->brick_size.z;
            if ( *(_BYTE *)(((unsigned __int64)&block_0->rot.y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)block_0 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block_0->rot.y >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&block_0->rot.y);
            }
            if ( block_0->rot.y == 90.0 || block_0->rot.y == 270.0 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&brick_config_ptr->brick_size.z >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&brick_config_ptr->brick_size.z >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&brick_config_ptr->brick_size.z);
              }
              brick_x = brick_config_ptr->brick_size.z;
              if ( *(_BYTE *)(((unsigned __int64)brick_config_ptr >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)brick_config_ptr >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(brick_config_ptr);
              }
              brick_z = brick_config_ptr->brick_size.x;
            }
            Vector3::Vector3((Vector3 *const)(v4 + 64), 0.0, 0.0, 0.0);
            if ( *(_BYTE *)(((unsigned __int64)&block_0->pos >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)block_0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block_0->pos >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(&block_0->pos);
            }
            x = block_0->pos.x;
            if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr->basic_data >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&room_config_ptr->basic_data >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&room_config_ptr->basic_data);
            }
            *(float *)(v4 + 64) = (float)(brick_x / 2.0) + (float)(x + room_config_ptr->basic_data.deploy_start_pos.x);
            if ( *(_BYTE *)(((unsigned __int64)&block_0->pos.z >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)block_0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block_0->pos.z >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&block_0->pos.z);
            }
            z = block_0->pos.z;
            if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr->basic_data.deploy_start_pos.z >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&room_config_ptr->basic_data.deploy_start_pos.z >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&room_config_ptr->basic_data.deploy_start_pos.z);
            }
            *(float *)(v4 + 72) = (float)(brick_z / 2.0) + (float)(z + room_config_ptr->basic_data.deploy_start_pos.z);
            if ( *(_BYTE *)(((unsigned __int64)&block_0->pos.y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)block_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block_0->pos.y >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&block_0->pos.y);
            }
            y = block_0->pos.y;
            if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr->basic_data.deploy_start_pos.y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)room_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&room_config_ptr->basic_data.deploy_start_pos.y >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&room_config_ptr->basic_data.deploy_start_pos.y);
            }
            *(_QWORD *)&v28 = LODWORD(room_config_ptr->basic_data.deploy_start_pos.y);
            *(float *)&v28 = *(float *)&v28 + y;
            *(_DWORD *)(v4 + 68) = LODWORD(v28);
            GadgetParam::GadgetParam((GadgetParam *const)(v4 + 272));
            *(_DWORD *)(v4 + 272) = *(_DWORD *)(v4 + 32);
            *(_DWORD *)(v4 + 280) = Scene::genNewEntityId(dungeon_scene, PROT_ENTITY_GADGET);
            *(_QWORD *)(v4 + 284) = *(_QWORD *)(v4 + 64);
            *(_DWORD *)(v4 + 292) = *(_DWORD *)(v4 + 72);
            if ( (((unsigned __int8)block_0 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&block_0->rot >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&block_0->rot >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&block_0->rot.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)block_0 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&block_0->rot.z + 3) >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load_n(&block_0->rot, 12LL);
            }
            *(Vector3 *)(v4 + 296) = block_0->rot;
            *(_DWORD *)(v4 + 364) = 0;
            *(_DWORD *)(v4 + 324) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&brick_config_ptr->config_level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)brick_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&brick_config_ptr->config_level >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&brick_config_ptr->config_level);
            }
            if ( brick_config_ptr->config_level )
            {
              v29 = dungeon_scene;
              if ( *(_BYTE *)(((unsigned __int64)dungeon_scene >> 3) + 0x7FFF8000) )
                v28 = __asan_report_load8(dungeon_scene);
              v30 = (unsigned __int64)(dungeon_scene->_vptr_DescribalBase + 34);
              if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                v28 = __asan_report_load8(dungeon_scene->_vptr_DescribalBase + 34);
              *(_DWORD *)(v4 + 308) = (*(__int64 (__fastcall **)(Scene *, _QWORD, double))v30)(
                                        v29,
                                        brick_config_ptr->config_level,
                                        v28);
            }
            EntityMgr::createGadget((const GadgetParam *)(v4 + 96));
            if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 96)) )
            {
              common::milog::MiLogStream::create(
                &v85,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                "buildCustomRoom",
                1308);
              v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      &v85,
                      (const char (*)[10])"block_id:");
              v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &block_0->block_id);
              v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v32,
                      (const char (*)[12])" gadget_id:");
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v4 + 32));
              v35 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      v34,
                      (const char (*)[28])" create gadget failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
            }
            else
            {
              v36 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
                v28 = __asan_report_load8(v36);
              v37 = *(_QWORD *)v36->baseclass_0 + 56LL;
              if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
                v28 = __asan_report_load8(*(_QWORD *)v36->baseclass_0 + 56LL);
              if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Scene *, VisionContext *, double))v37)(
                     v36,
                     dungeon_scene,
                     &VisionContext::meet_context,
                     v28) )
              {
                common::milog::MiLogStream::create(
                  &v85,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                  "buildCustomRoom",
                  1313);
                v38 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        &v85,
                        (const char (*)[10])"block_id:");
                v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &block_0->block_id);
                v40 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v39,
                        (const char (*)[12])" gadget_id:");
                v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v40,
                        (const unsigned int *)(v4 + 32));
                v35 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                        v41,
                        (const char (*)[26])" enter scene failed, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
              }
              else
              {
                v42 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                val = Entity::getEntityId((const Entity *const)v42);
                entity = std::map<unsigned int,CustomDungeonEntity>::operator[](&this->entity_wtr_map_, &val);
                std::weak_ptr<Entity>::operator=<Gadget>(
                  &entity->entity_wtr,
                  (const std::shared_ptr<Gadget> *)(v4 + 96));
                v43 = (((_BYTE)block_0 + 32) & 7u) + 3;
                if ( *(_BYTE *)(((unsigned __int64)&block_0->config_idx >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)block_0 + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block_0->config_idx >> 3)
                                                                         + 0x7FFF8000) )
                {
                  __asan_report_load4(&block_0->config_idx);
                }
                config_idx = block_0->config_idx;
                v45 = *(_BYTE *)(((unsigned __int64)&entity->config_idx >> 3) + 0x7FFF8000);
                LOBYTE(v43) = v45 != 0;
                v46 = (v45 != 0) & (unsigned __int8)((char)((((_BYTE)entity + 20) & 7) + 3) >= v45);
                if ( (_BYTE)v46 )
                  __asan_report_store4(&entity->config_idx, v43, v46);
                entity->config_idx = config_idx;
                if ( *(char *)(((unsigned __int64)&entity->is_coin >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_store1(&entity->is_coin, v43, &entity->is_coin);
                entity->is_coin = is_coin;
                common::milog::MiLogStream::create(
                  &v85,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                  "buildCustomRoom",
                  1320);
                v47 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        &v85,
                        (const char (*)[12])"dungeon_id:");
                v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v47,
                        (const unsigned int *)(v4 + 48));
                v49 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v48,
                        (const char (*)[10])" room_id:");
                v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v49,
                        (const unsigned int *)room);
                v51 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v50,
                        (const char (*)[13])" block_guid:");
                v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &block_0->guid);
                v53 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v52,
                        (const char (*)[11])" block_id:");
                v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &block_0->block_id);
                v55 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v54,
                        (const char (*)[12])" gadget_id:");
                v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v55,
                        (const unsigned int *)(v4 + 32));
                v57 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v56,
                        (const char (*)[12])" entity_id:");
                v58 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                EntityId = Entity::getEntityId((const Entity *const)v58);
                v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &EntityId);
                v35 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v59,
                        (const char (*)[19])" create succ, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
              }
            }
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
            common::milog::MiLogStream::~MiLogStream(&v85);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 96));
            GadgetParam::~GadgetParam((GadgetParam *const)(v4 + 272));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v84,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "buildCustomRoom",
            1273);
          v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v84, (const char (*)[10])"block id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &block_0->block_id);
          v21 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  v20,
                  (const char (*)[29])" server gadget id is 0, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
          common::milog::MiLogStream::~MiLogStream(&v84);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v83,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "buildCustomRoom",
          1267);
        v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v83, (const char (*)[10])"block id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &block_0->block_id);
        v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v17,
                (const char (*)[24])" config not found, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v83);
      }
      __gnu_cxx::__normal_iterator<CustomDungeonBlock *,std::vector<CustomDungeonBlock>>::operator++((__gnu_cxx::__normal_iterator<CustomDungeonBlock*,std::vector<CustomDungeonBlock> > *const)&__for_begin);
    }
    v13 = 0;
    std::vector<CustomDungeonBlock>::~vector((std::vector<CustomDungeonBlock> *const)(v4 + 128));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "buildCustomRoom",
      1236);
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v85, (const char (*)[19])"custom dungeon id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" room_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)room);
    v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v11,
            (const char (*)[24])" config not found, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    v13 = -1;
  }
  if ( v86 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1216LL, v86);
  }
  return v13;
};

// Line 1326: range 0000000014171C6C-0000000014172A8B
void __cdecl PlayerCustomDungeonComp::saveCustomDungeonRoom(
        PlayerCustomDungeonComp *const this,
        const proto::SaveCustomDungeonRoomReq *req,
        proto::SaveCustomDungeonRoomRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  char v9; // al
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const proto::CustomDungeonSetting *v12; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::map<long unsigned int,CustomDungeonBrief>::mapped_type *v14; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  CustomDungeonBrief *v18; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  int32_t v20; // edx
  JsonConfigMgr *p_json_config_mgr; // r14
  uint32_t v22; // eax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  CustomDungeonRoom *v37; // rax
  uint32_t v38; // r14d
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rcx
  int32_t v40; // edx
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rsi
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  CustomDungeonRoom *v43; // rax
  __int64 v44; // rdx
  uint32_t v45; // r14d
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rcx
  int32_t v47; // edx
  bool is_my_dungeon; // [rsp+27h] [rbp-2A9h]
  unsigned int Uid; // [rsp+28h] [rbp-2A8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-2A4h] BYREF
  int32_t check_ret; // [rsp+30h] [rbp-2A0h]
  int32_t ret; // [rsp+34h] [rbp-29Ch]
  const proto::CustomDungeonRoom *proto_room; // [rsp+38h] [rbp-298h]
  const data::ConfigCustomLevelRoomSetting *room_config_ptr; // [rsp+40h] [rbp-290h]
  CustomDungeonBrief *dungeon_brief; // [rsp+48h] [rbp-288h]
  std::shared_ptr<Config> v57; // [rsp+50h] [rbp-280h] BYREF
  common::milog::MiLogStream v58; // [rsp+60h] [rbp-270h] BYREF
  char v59[592]; // [rsp+80h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 15 dungeon_id:1337 48 8 17 dungeon_guid:1336 80 48 25 before_open_room_set:1360 160 48 22"
                        " invalid_block_set:1397 240 64 9 room:1393 336 64 13 abstract:1415 432 72 12 setting:1365";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::saveCustomDungeonRoom;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862724] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862735] = -218103808;
  v5[536862736] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "saveCustomDungeonRoom",
        1331);
      v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v58, (const char (*)[28])off_2525DD20);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v58);
      proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, 11057);
    }
    else
    {
      v7 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7);
      *(_QWORD *)(v3 + 48) = v7->dungeon_guid;
      v8 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)&v8->dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->dungeon_id);
      }
      *(_DWORD *)(v3 + 32) = v8->dungeon_id;
      is_my_dungeon = PlayerCustomDungeonComp::isMyDungeon(this, *(_QWORD *)(v3 + 48));
      if ( is_my_dungeon )
        goto LABEL_24;
      if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->enter_type_);
      }
      if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_OFFICIAL )
      {
        if ( !proto::SaveCustomDungeonRoomReq::is_update_setting(req) )
          goto LABEL_26;
LABEL_24:
        if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->enter_type_);
        }
        if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_OFFICIAL )
          v9 = 1;
        else
LABEL_26:
          v9 = 0;
        if ( v9 )
        {
          proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, 11083);
        }
        else
        {
          proto_room = proto::SaveCustomDungeonRoomReq::custom_dungeon_room(req);
          if ( !proto::CustomDungeonRoom::room_id(proto_room)
            && !proto::SaveCustomDungeonRoomReq::is_update_setting(req) )
          {
            proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, 11076);
          }
          else
          {
            v11 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 80), &v11->setting.open_room_set);
            if ( proto::SaveCustomDungeonRoomReq::is_update_setting(req) )
            {
              CustomDungeonSetting::CustomDungeonSetting((CustomDungeonSetting *const)(v3 + 432));
              v12 = proto::SaveCustomDungeonRoomReq::setting(req);
              CustomDungeonSetting::fromClient((CustomDungeonSetting *const)(v3 + 432), v12);
              v13 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
              CustomDungeonSetting::operator=(&v13->setting, (const CustomDungeonSetting *)(v3 + 432));
              v14 = std::map<unsigned long,CustomDungeonBrief>::operator[](
                      &this->brief_map_,
                      (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v3 + 48));
              CustomDungeonSetting::operator=(&v14->setting, (const CustomDungeonSetting *)(v3 + 432));
              CustomDungeonSetting::~CustomDungeonSetting((CustomDungeonSetting *const)(v3 + 432));
            }
            if ( proto::CustomDungeonRoom::room_id(proto_room) )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v57);
              p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.json_config_mgr;
              v22 = proto::CustomDungeonRoom::room_id(proto_room);
              room_config_ptr = JsonConfigMgr::findCustomDungeonRoomConfig(p_json_config_mgr, *(_DWORD *)(v3 + 32), v22);
              std::shared_ptr<Config>::~shared_ptr(&v57);
              if ( room_config_ptr )
              {
                CustomDungeonRoom::CustomDungeonRoom((CustomDungeonRoom *const)(v3 + 240));
                CustomDungeonRoom::fromClient((CustomDungeonRoom *const)(v3 + 240), proto_room);
                std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 160));
                check_ret = PlayerCustomDungeonComp::checkRoomLayoutValid(
                              this,
                              (const CustomDungeonRoom *)(v3 + 240),
                              room_config_ptr,
                              (std::set<unsigned int> *)(v3 + 160));
                if ( check_ret )
                {
                  common::milog::MiLogStream::create(
                    &v58,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                    "saveCustomDungeonRoom",
                    1401);
                  v29 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v58, (const char (*)[5])"uid:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  Uid = Player::getUid(this->player_);
                  v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &Uid);
                  v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                          v30,
                          (const char (*)[13])" dungeon_id:");
                  v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v31,
                          (const unsigned int *)(v3 + 32));
                  v33 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v32,
                          (const char (*)[10])" room_id:");
                  val = proto::CustomDungeonRoom::room_id(proto_room);
                  v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
                  v35 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                          v34,
                          (const char (*)[21])" check invalid, set:");
                  common::milog::MiLogStream::operator<<<unsigned int>(v35, (const std::set<unsigned int> *)(v3 + 160));
                  common::milog::MiLogStream::~MiLogStream(&v58);
                  proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, check_ret);
                }
                else if ( !is_my_dungeon )
                {
                  v36 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
                  v37 = std::map<unsigned int,CustomDungeonRoom>::operator[](
                          &v36->room_map,
                          (const std::map<unsigned int,CustomDungeonRoom>::key_type *)(v3 + 240));
                  CustomDungeonRoom::operator=(v37, (const CustomDungeonRoom *)(v3 + 240));
                  v38 = *(_DWORD *)(v3 + 240);
                  v39 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
                  v40 = PlayerCustomDungeonComp::saveOfficialCustomDungeon(this, v39, v38);
                  proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, v40);
                }
                else
                {
                  CustomDungeonAbstract::CustomDungeonAbstract((CustomDungeonAbstract *const)(v3 + 336));
                  v41 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
                  ret = PlayerCustomDungeonComp::constructAbstract(
                          this,
                          v41,
                          (const CustomDungeonRoom *)(v3 + 240),
                          (CustomDungeonAbstract *)(v3 + 336));
                  if ( ret )
                  {
                    proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, ret);
                  }
                  else
                  {
                    v42 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
                    v43 = std::map<unsigned int,CustomDungeonRoom>::operator[](
                            &v42->room_map,
                            (const std::map<unsigned int,CustomDungeonRoom>::key_type *)(v3 + 240));
                    CustomDungeonRoom::operator=(v43, (const CustomDungeonRoom *)(v3 + 240));
                    dungeon_brief = std::map<unsigned long,CustomDungeonBrief>::operator[](
                                      &this->brief_map_,
                                      (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v3 + 48));
                    CustomDungeonBrief::updateAbstract(dungeon_brief, (const CustomDungeonAbstract *)(v3 + 336));
                    v44 = (*(_BYTE *)(((unsigned __int64)&dungeon_brief->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)dungeon_brief + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_brief->state >> 3) + 0x7FFF8000));
                    if ( (_BYTE)v44 )
                      __asan_report_store4(&dungeon_brief->state, (((_BYTE)dungeon_brief + 12) & 7u) + 3, v44);
                    dungeon_brief->state = 0;
                    v45 = *(_DWORD *)(v3 + 240);
                    v46 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
                    v47 = PlayerCustomDungeonComp::saveCustomDungeon(this, v46, v45);
                    proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, v47);
                  }
                  CustomDungeonAbstract::~CustomDungeonAbstract((CustomDungeonAbstract *const)(v3 + 336));
                }
                std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 160));
                CustomDungeonRoom::~CustomDungeonRoom((CustomDungeonRoom *const)(v3 + 240));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v58,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                  "saveCustomDungeonRoom",
                  1387);
                v23 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v58, (const char (*)[5])"uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                Uid = Player::getUid(this->player_);
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &Uid);
                v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v24,
                        (const char (*)[13])" dungeon_id:");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v3 + 32));
                v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v26,
                        (const char (*)[10])" room_id:");
                val = proto::CustomDungeonRoom::room_id(proto_room);
                v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
                common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v28,
                  (const char (*)[18])" config not found");
                common::milog::MiLogStream::~MiLogStream(&v58);
                proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, -1);
              }
            }
            else
            {
              CustomDungeonAbstract::CustomDungeonAbstract((CustomDungeonAbstract *const)(v3 + 336));
              v15 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
              if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
                     (const std::set<unsigned int> *)(v3 + 80),
                     &v15->setting.open_room_set) )
              {
                v16 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
                if ( !PlayerCustomDungeonComp::constructAbstract(this, v16, (CustomDungeonAbstract *)(v3 + 336)) )
                {
                  v18 = std::map<unsigned long,CustomDungeonBrief>::operator[](
                          &this->brief_map_,
                          (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v3 + 48));
                  CustomDungeonBrief::updateAbstract(v18, (const CustomDungeonAbstract *)(v3 + 336));
                }
              }
              v19 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
              v20 = PlayerCustomDungeonComp::saveCustomDungeon(this, v19, 0);
              proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, v20);
              CustomDungeonAbstract::~CustomDungeonAbstract((CustomDungeonAbstract *const)(v3 + 336));
            }
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 80));
          }
        }
      }
      else
      {
        proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, 11051);
      }
    }
  }
  else
  {
    proto::SaveCustomDungeonRoomRsp::set_retcode(rsp_0, 11093);
  }
  if ( v59 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
};

// Line 1435: range 0000000014172A8C-0000000014172BB0
void __cdecl PlayerCustomDungeonComp::adjustDungeonSettingByAbstract(
        PlayerCustomDungeonComp *const this,
        CustomDungeon *custom_dungeon,
        const CustomDungeonAbstract *abstract)
{
  uint32_t *p_coin_limit; // rax
  uint32_t *p_total_coin_num; // rsi
  uint32_t *v5; // rax
  uint32_t *v6; // rdx
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx

  p_coin_limit = &custom_dungeon->setting.coin_limit;
  p_total_coin_num = &abstract->total_coin_num;
  v5 = (uint32_t *)std::min<unsigned int>(p_coin_limit, &abstract->total_coin_num);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  v7 = *v6;
  v8 = *(_BYTE *)(((unsigned __int64)&custom_dungeon->setting.coin_limit >> 3) + 0x7FFF8000);
  LOBYTE(p_total_coin_num) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)custom_dungeon + 68) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&custom_dungeon->setting.coin_limit, p_total_coin_num, v9);
  custom_dungeon->setting.coin_limit = v7;
  if ( *(_BYTE *)(((unsigned __int64)abstract >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)abstract >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(abstract);
  }
  if ( !abstract->finish_room_id )
  {
    if ( *(char *)(((unsigned __int64)&custom_dungeon->setting >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&custom_dungeon->setting, p_total_coin_num, &custom_dungeon->setting);
    custom_dungeon->setting.is_arrive_finish = 0;
  }
};

// Line 1444: range 0000000014172BB2-0000000014172C62
int32_t __cdecl PlayerCustomDungeonComp::constructAbstract(
        PlayerCustomDungeonComp *const this,
        const CustomDungeon *custom_dungeon,
        CustomDungeonAbstract *abstract)
{
  int32_t v3; // ebx
  CustomDungeonRoom dungeon_room; // [rsp+20h] [rbp-50h] BYREF

  dungeon_room.room_id = 0;
  memset(&dungeon_room.block_map, 0, sizeof(dungeon_room.block_map));
  std::unordered_map<unsigned int,CustomDungeonBlock>::unordered_map(&dungeon_room.block_map);
  v3 = PlayerCustomDungeonComp::constructAbstract(this, custom_dungeon, &dungeon_room, abstract);
  CustomDungeonRoom::~CustomDungeonRoom(&dungeon_room);
  return v3;
};

// Line 1450: range 0000000014172C64-0000000014172FF8
int32_t __cdecl PlayerCustomDungeonComp::constructAbstract(
        PlayerCustomDungeonComp *const this,
        const CustomDungeon *custom_dungeon,
        const CustomDungeonRoom *dungeon_room,
        CustomDungeonAbstract *abstract)
{
  const CustomDungeonExcelConfigMgr *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonRoom> >::type v9; // ecx
  unsigned int val; // [rsp+28h] [rbp-88h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-84h]
  std::map<unsigned int,CustomDungeonRoom>::const_iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,CustomDungeonRoom>::const_iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  const CustomDungeonExcelConfigMgr *custom_dungeon_config_mgr; // [rsp+40h] [rbp-70h]
  const data::CustomLevelDungeonConfig *dungeon_config_ptr; // [rsp+48h] [rbp-68h]
  const std::map<unsigned int,CustomDungeonRoom> *__for_range; // [rsp+50h] [rbp-60h]
  const std::pair<unsigned int const,CustomDungeonRoom> *v19; // [rsp+58h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonRoom> >::type *room_id; // [rsp+60h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *room; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v22; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v23; // [rsp+80h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.custom_dungeon_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  v4 = custom_dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&custom_dungeon->dungeon_id);
  }
  dungeon_config_ptr = data::CustomLevelExcelConfigMgrBase::findCustomLevelDungeonConfig(v4, custom_dungeon->dungeon_id);
  if ( dungeon_config_ptr )
  {
    ret = 0;
    __for_range = &custom_dungeon->room_map;
    __for_begin._M_node = std::map<unsigned int,CustomDungeonRoom>::begin(&custom_dungeon->room_map)._M_node;
    __for_end._M_node = std::map<unsigned int,CustomDungeonRoom>::end(&custom_dungeon->room_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator*(&__for_begin);
      room_id = std::get<0ul,unsigned int const,CustomDungeonRoom>(v19);
      room = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *)std::get<1ul,unsigned int const,CustomDungeonRoom>(v19);
      if ( *(_BYTE *)(((unsigned __int64)room_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)room_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)room_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(room_id);
      }
      v9 = *room_id;
      if ( *(_BYTE *)(((unsigned __int64)dungeon_room >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)dungeon_room >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(dungeon_room);
      }
      if ( v9 != dungeon_room->room_id )
      {
        if ( std::set<unsigned int>::count(&custom_dungeon->setting.open_room_set, room_id) )
        {
          ret = PlayerCustomDungeonComp::constructAbstract(this, room, &dungeon_config_ptr->count_brick_list, abstract);
          if ( ret )
            return ret;
        }
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator++(&__for_begin);
    }
    if ( std::set<unsigned int>::count(&custom_dungeon->setting.open_room_set, &dungeon_room->room_id) )
      return PlayerCustomDungeonComp::constructAbstract(
               this,
               dungeon_room,
               &dungeon_config_ptr->count_brick_list,
               abstract);
    else
      return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "constructAbstract",
      1456);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v23,
           (const char (*)[45])"custom dungeon config not found, dungeon_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &custom_dungeon->dungeon_id);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    return -1;
  }
};

// Line 1484: range 0000000014172FFA-00000000141734CF
int32_t __cdecl PlayerCustomDungeonComp::constructAbstract(
        PlayerCustomDungeonComp *const this,
        const CustomDungeonRoom *dungeon_room,
        const std::vector<unsigned int> *count_brick_vec,
        CustomDungeonAbstract *abstract)
{
  unsigned __int64 v4; // rax
  unsigned int *block_id; // rsi
  common::milog::MiLogStream *v6; // rbx
  uint32_t room_id; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  unsigned int val; // [rsp+20h] [rbp-80h] BYREF
  int32_t ret; // [rsp+24h] [rbp-7Ch]
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const CustomDungeonExcelConfigMgr *custom_dungeon_config_mgr; // [rsp+38h] [rbp-68h]
  const std::unordered_map<unsigned int,CustomDungeonBlock> *__for_range; // [rsp+40h] [rbp-60h]
  const std::pair<unsigned int const,CustomDungeonBlock> *v22; // [rsp+48h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonBlock> >::type *_; // [rsp+50h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *brick; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v25; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v26; // [rsp+70h] [rbp-30h] BYREF

  ret = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.custom_dungeon_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v25);
  __for_range = &dungeon_room->block_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::begin(&dungeon_room->block_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::end(&dungeon_room->block_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CustomDungeonBlock>,false>(&__for_begin, &__for_end) )
  {
    v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,CustomDungeonBlock>(v22);
    brick = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *)std::get<1ul,unsigned int const,CustomDungeonBlock>(v22);
    if ( common::tools::MiscUtils::isContains<unsigned int>(count_brick_vec, &brick->block_id) )
    {
      v4 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                               &abstract->brick_statistics_map,
                               &brick->block_id);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)((v4 & 7) + 3) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load4(v4);
      ++*(_DWORD *)v4;
    }
    if ( *(_BYTE *)(((unsigned __int64)&brick->block_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)brick + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&brick->block_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&brick->block_id);
    }
    if ( CustomDungeonExcelConfigMgr::isCoinBrick(custom_dungeon_config_mgr, brick->block_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&abstract->total_coin_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)abstract + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&abstract->total_coin_num >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&abstract->total_coin_num);
      }
      ++abstract->total_coin_num;
    }
    if ( *(_BYTE *)(((unsigned __int64)&brick->block_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)brick + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&brick->block_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&brick->block_id);
    }
    block_id = (unsigned int *)brick->block_id;
    if ( CustomDungeonExcelConfigMgr::isFinishBrick(custom_dungeon_config_mgr, (uint32_t)block_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)abstract >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)abstract >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(abstract);
      }
      if ( abstract->finish_room_id )
      {
        ret = 11066;
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "constructAbstract",
          1502);
        v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v26,
               (const char (*)[27])"multi dungeon finish, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        block_id = &val;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      if ( *(_BYTE *)(((unsigned __int64)dungeon_room >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)dungeon_room >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(dungeon_room);
      }
      room_id = dungeon_room->room_id;
      v8 = *(_BYTE *)(((unsigned __int64)abstract >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        LOBYTE(block_id) = v8 != 0;
        __asan_report_store4(abstract, block_id, abstract);
      }
      abstract->finish_room_id = room_id;
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "constructAbstract",
        1505);
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v26, (const char (*)[9])"room_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &dungeon_room->room_id);
      v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v10,
              (const char (*)[18])" has finish, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator++(&__for_begin);
  }
  return ret;
};

// Line 1512: range 00000000141734D0-0000000014173C4C
int32_t __cdecl PlayerCustomDungeonComp::saveCustomDungeon(
        PlayerCustomDungeonComp *const this,
        CustomDungeon *custom_dungeon,
        uint32_t save_room_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  __int64 Now; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  proto::ServerCustomDungeon *v12; // rdx
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonSave,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  proto_log::CustomDungeonDetailInfo *v18; // rdx
  Player *player; // r14
  int32_t result; // eax
  std::string v21; // [rsp+0h] [rbp-170h]
  const CustomDungeon *custom_dungeona; // [rsp+10h] [rbp-160h]
  PlayerCustomDungeonComp *thisa; // [rsp+18h] [rbp-158h]
  unsigned int val; // [rsp+2Ch] [rbp-144h] BYREF
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self __y; // [rsp+30h] [rbp-140h] BYREF
  CustomDungeonBrief *dungeon_brief; // [rsp+38h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-110h] BYREF
  char v30[240]; // [rsp+80h] [rbp-F0h] BYREF

  *(&v21._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v21._anon_0._M_allocated_capacity = (std::string::size_type)custom_dungeon;
  HIDWORD(v21._M_string_length) = save_room_id;
  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 11 holder:1541 48 8 9 iter:1513 80 16 12 log_ptr:1542 112 40 15 server_req:1527";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::saveCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61953;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(std::map<long unsigned int,CustomDungeonBrief>::iterator *)(v3 + 48) = std::map<unsigned long,CustomDungeonBrief>::find(
                                                                             &this->brief_map_,
                                                                             &custom_dungeon->dungeon_guid);
  __y._M_node = std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)(v3 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "saveCustomDungeon",
      1516);
    v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(&v29, (const char (*)[40])off_2525E020);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &custom_dungeon->dungeon_guid);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = -1;
  }
  else
  {
    dungeon_brief = &std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v3 + 48))->second;
    Now = (unsigned int)common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->last_save_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_brief->last_save_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&dungeon_brief->last_save_time, Now, &dungeon_brief->last_save_time);
    }
    dungeon_brief->last_save_time = Now;
    v9 = (*(_BYTE *)(((unsigned __int64)&dungeon_brief->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)dungeon_brief + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_brief->state >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_store4(&dungeon_brief->state, (((_BYTE)dungeon_brief + 12) & 7u) + 3, v9);
    dungeon_brief->state = 0;
    if ( *(_BYTE *)(((v21._anon_0._M_allocated_capacity + 136) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v21._anon_0._M_allocated_capacity + 136) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v21._anon_0._M_allocated_capacity + 136);
    }
    ++*(_DWORD *)(v21._anon_0._M_allocated_capacity + 136);
    v10 = (v21._anon_0._M_local_buf[0] - 116) & 7;
    v11 = (*(_BYTE *)(((v21._anon_0._M_allocated_capacity + 140) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((v21._anon_0._M_allocated_capacity + 140) >> 3) + 0x7FFF8000));
    if ( (_BYTE)v11 )
      __asan_report_store1(v21._anon_0._M_allocated_capacity + 140, v10, v11);
    *(_BYTE *)(v21._anon_0._M_allocated_capacity + 140) = 1;
    proto::ServerSaveCustomDungeonReq::ServerSaveCustomDungeonReq((proto::ServerSaveCustomDungeonReq *const)(v3 + 112));
    v12 = proto::ServerSaveCustomDungeonReq::mutable_custom_dungeon((proto::ServerSaveCustomDungeonReq *const)(v3 + 112));
    CustomDungeon::toRedis((const CustomDungeon *const)v21._anon_0._M_allocated_capacity, v12);
    proto::ServerSaveCustomDungeonReq::set_room_id(
      (proto::ServerSaveCustomDungeonReq *const)(v3 + 112),
      HIDWORD(v21._M_string_length));
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->abstract.first_publish_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_brief->abstract.first_publish_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_brief->abstract.first_publish_time);
    }
    proto::ServerSaveCustomDungeonReq::set_is_ever_published(
      (proto::ServerSaveCustomDungeonReq *const)(v3 + 112),
      dungeon_brief->abstract.first_publish_time != 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    if ( sendProtoToActivityService<proto::ServerSaveCustomDungeonReq>(
           this->player_,
           (proto::ServerSaveCustomDungeonReq *)(v3 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "saveCustomDungeon",
        1535);
      v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v29,
              (const char (*)[22])"request dungeon_guid:");
      v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v13,
              (const unsigned __int64 *)v21._anon_0._M_allocated_capacity);
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v7 = 11056;
    }
    else
    {
      PlayerCustomDungeonComp::notifyCustomDungeonUpdate(this, dungeon_brief);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v29, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xDFDu, v21);
      std::string::~string(&v29);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyCustomDungeonSave>();
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonSave,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonSave,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      v18 = proto_log::PlayerLogBodyCustomDungeonSave::mutable_detail_info(v17);
      PlayerCustomDungeonComp::fillCustomDungeonDetailLog(thisa, custom_dungeona, v18);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCustomDungeonSave,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonSave> *)(v3 + 80));
      Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      v7 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonSave>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonSave> *const)(v3 + 80));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    }
    proto::ServerSaveCustomDungeonReq::~ServerSaveCustomDungeonReq((proto::ServerSaveCustomDungeonReq *const)(v3 + 112));
  }
  result = v7;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1550: range 0000000014173C4E-0000000014173F59
int32_t __cdecl PlayerCustomDungeonComp::saveOfficialCustomDungeon(
        PlayerCustomDungeonComp *const this,
        CustomDungeon *custom_dungeon,
        uint32_t save_room_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  proto::ServerCustomDungeon *v6; // rdx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 15 server_req:1552";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::saveOfficialCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&custom_dungeon->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&custom_dungeon->version);
  }
  ++custom_dungeon->version;
  proto::ServerSaveCustomDungeonReq::ServerSaveCustomDungeonReq((proto::ServerSaveCustomDungeonReq *const)(v3 + 48));
  v6 = proto::ServerSaveCustomDungeonReq::mutable_custom_dungeon((proto::ServerSaveCustomDungeonReq *const)(v3 + 48));
  CustomDungeon::toRedis(custom_dungeon, v6);
  proto::ServerSaveCustomDungeonReq::set_room_id((proto::ServerSaveCustomDungeonReq *const)(v3 + 48), save_room_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( sendProtoToActivityService<proto::ServerSaveCustomDungeonReq>(
         this->player_,
         (proto::ServerSaveCustomDungeonReq *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "saveOfficialCustomDungeon",
      1557);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v14,
           (const char (*)[22])"request dungeon_guid:");
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &custom_dungeon->dungeon_guid);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v10 = 11056;
  }
  else
  {
    v10 = 0;
  }
  proto::ServerSaveCustomDungeonReq::~ServerSaveCustomDungeonReq((proto::ServerSaveCustomDungeonReq *const)(v3 + 48));
  result = v10;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1564: range 0000000014173F5A-0000000014175A86
int32_t __cdecl PlayerCustomDungeonComp::checkRoomLayoutValid(
        PlayerCustomDungeonComp *const this,
        const CustomDungeonRoom *room,
        const data::ConfigCustomLevelRoomSetting *room_config,
        std::set<unsigned int> *invalid_block_set)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::pointer v10; // rax
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  __int64 v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  CustomDungeonExcelConfigMgr *p_custom_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v44; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v45; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v46; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v47; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v48; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v49; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v50; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v51; // rax
  Player *player; // r14
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v67; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v68; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v69; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v70; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v71; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v72; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v73; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v74; // rax
  CustomDungeonExcelConfigMgr *v75; // rcx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v76; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v77; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // r14
  int32_t result; // eax
  bool is_enable_check; // [rsp+23h] [rbp-2BDh]
  unsigned int val; // [rsp+24h] [rbp-2BCh] BYREF
  std::vector<data::ConfigCustomLevelRoomExtraData>::const_iterator __for_begin; // [rsp+28h] [rbp-2B8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false> __y; // [rsp+30h] [rbp-2B0h] BYREF
  const std::vector<data::ConfigCustomLevelRoomExtraData> *__for_range; // [rsp+38h] [rbp-2A8h]
  const data::ConfigCustomLevelRoomExtraData *ld_block; // [rsp+40h] [rbp-2A0h]
  const CustomDungeonBlock *inner_block_0; // [rsp+48h] [rbp-298h]
  const std::map<unsigned int,unsigned int> *limit_map; // [rsp+50h] [rbp-290h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+58h] [rbp-288h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+60h] [rbp-280h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+68h] [rbp-278h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+70h] [rbp-270h]
  const CustomDungeonBlock *block; // [rsp+78h] [rbp-268h]
  const data::CustomLevelComponentConfig *block_excel_config_ptr; // [rsp+80h] [rbp-260h]
  const CustomDungeonBlock *inner_block; // [rsp+88h] [rbp-258h]
  Vector3 v105; // [rsp+94h] [rbp-24Ch] BYREF
  std::shared_ptr<Config> v106; // [rsp+A0h] [rbp-240h] BYREF
  common::milog::MiLogStream v107; // [rsp+B0h] [rbp-230h] BYREF
  common::milog::MiLogStream v108; // [rsp+D0h] [rbp-210h] BYREF
  common::milog::MiLogStream v109; // [rsp+F0h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v110; // [rsp+110h] [rbp-1D0h] BYREF
  char v111[432]; // [rsp+130h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v111;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 15 total_cost:1574 64 8 9 iter:1577 96 8 9 iter:1682 128 16 15 config_ptr:1565 160 16 17 "
                        "deploy_bound:1589 192 16 8 oss:1622 224 36 10 block:1649 304 48 22 all_brick_num_map:1573";
  *(_QWORD *)(v4 + 16) = PlayerCustomDungeonComp::checkRoomLayoutValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862728] = -218959356;
  v6[536862729] = 62194;
  v6[536862731] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 128));
  if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v4 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v110,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "checkRoomLayoutValid",
      1568);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v110, (const char (*)[24])off_2525C9E0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v110);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v9->is_enable_custom_dungeon_layout_check >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v9 - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&v9->is_enable_custom_dungeon_layout_check >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_load1(&v9->is_enable_custom_dungeon_layout_check);
    }
    is_enable_check = v9->is_enable_custom_dungeon_layout_check;
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 304));
    *(_DWORD *)(v4 + 48) = 0;
    *(std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,CustomDungeonBlock>::begin(&room->block_map);
    while ( 1 )
    {
      __y._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::end(&room->block_map)._M_cur;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,CustomDungeonBlock>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false> *)(v4 + 64),
              &__y) )
        break;
      v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false> *const)(v4 + 64));
      block = &v10->second;
      v11 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                (std::map<unsigned int,unsigned int> *const)(v4 + 304),
                                &v10->second.block_id);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load4(v11);
      ++*(_DWORD *)v11;
      if ( !Vector3::isValid(&block->pos) || !Vector3::isValid(&block->rot) )
      {
        common::milog::MiLogStream::create(
          &v107,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "checkRoomLayoutValid",
          1585);
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v107, (const char (*)[9])"room_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &room->room_id);
        v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" block_guid:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &block->guid);
        v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                v16,
                (const char (*)[29])" pos or rot is invalid, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v107);
        v8 = 11055;
        goto LABEL_117;
      }
      if ( *(_WORD *)(((unsigned __int64)&room_config->basic_data.deploy_bound >> 3) + 0x7FFF8000) )
        __asan_report_load16(&room_config->basic_data.deploy_bound);
      v18 = *(_QWORD *)&room_config->basic_data.deploy_bound.z;
      *(_QWORD *)(v4 + 160) = *(_QWORD *)&room_config->basic_data.deploy_bound.x;
      *(_QWORD *)(v4 + 168) = v18;
      if ( *(_BYTE *)(((unsigned __int64)&block->pos >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block->pos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block->pos);
      }
      if ( block->pos.x > *(float *)(v4 + 160) )
        goto LABEL_33;
      if ( *(_BYTE *)(((unsigned __int64)&block->pos.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block->pos.y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block->pos.y);
      }
      if ( block->pos.y > *(float *)(v4 + 164) )
        goto LABEL_33;
      if ( *(_BYTE *)(((unsigned __int64)&block->pos.z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block->pos.z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block->pos.z);
      }
      if ( block->pos.z > *(float *)(v4 + 168) )
      {
LABEL_33:
        common::milog::MiLogStream::create(
          &v108,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "checkRoomLayoutValid",
          1592);
        v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v108, (const char (*)[12])"block guid:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &block->guid);
        v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" pos:");
        v22 = common::milog::MiLogStream::operator<<<float,(float *)0>(v21, &block->pos.x);
        v23 = common::milog::MiLogStream::operator<<<float,(float *)0>(v22, &block->pos.y);
        v24 = common::milog::MiLogStream::operator<<<float,(float *)0>(v23, &block->pos.z);
        v25 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v24, (const char (*)[15])" exceed bound:");
        v26 = common::milog::MiLogStream::operator<<<float,(float *)0>(v25, (const float *)(v4 + 160));
        v27 = common::milog::MiLogStream::operator<<<float,(float *)0>(v26, (const float *)(v4 + 164));
        v28 = common::milog::MiLogStream::operator<<<float,(float *)0>(v27, (const float *)(v4 + 168));
        v29 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
        common::milog::MiLogStream::~MiLogStream(&v108);
        v8 = 11055;
        goto LABEL_117;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v106);
      p_custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v106)->design_config.txt_config_mgr.custom_dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&block->block_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block->block_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block->block_id);
      }
      block_excel_config_ptr = data::CustomLevelExcelConfigMgrBase::findCustomLevelComponentConfig(
                                 p_custom_dungeon_config_mgr,
                                 block->block_id);
      std::shared_ptr<Config>::~shared_ptr(&v106);
      if ( !block_excel_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v109,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "checkRoomLayoutValid",
          1600);
        v31 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(&v109, (const char (*)[35])off_2525E2E0);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &block->block_id);
        v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
        common::milog::MiLogStream::~MiLogStream(&v109);
        v8 = -1;
        goto LABEL_117;
      }
      if ( *(_BYTE *)(((unsigned __int64)&block_excel_config_ptr->component_cost >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&block_excel_config_ptr->component_cost >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&block_excel_config_ptr->component_cost);
      }
      *(_DWORD *)(v4 + 48) += block_excel_config_ptr->component_cost;
      if ( is_enable_check )
      {
        *(std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,CustomDungeonBlock>::begin(&room->block_map);
        while ( std::__detail::operator!=<std::pair<unsigned int const,CustomDungeonBlock>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false> *)(v4 + 96),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false> *)(v4 + 64)) )
        {
          __y._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::end(&room->block_map)._M_cur;
          if ( !std::__detail::operator!=<std::pair<unsigned int const,CustomDungeonBlock>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false> *)(v4 + 96),
                  &__y) )
            break;
          inner_block = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false> *const)(v4 + 96))->second;
          if ( PlayerCustomDungeonComp::checkCrossBlock(this, block, inner_block) )
          {
            std::set<unsigned int>::insert(invalid_block_set, &block->guid);
            std::set<unsigned int>::insert(invalid_block_set, &inner_block->guid);
            common::milog::MiLogStream::create(
              &v110,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
              "checkRoomLayoutValid",
              1620);
            v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    &v110,
                    (const char (*)[13])"block1 guid:");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &block->guid);
            v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v36, (const char (*)[11])" brick_id:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &block->block_id);
            v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v38,
                    (const char (*)[14])" block2 guid:");
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &inner_block->guid);
            v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" brick_id:");
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &inner_block->block_id);
            v43 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    v42,
                    (const char (*)[26])" check cross failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
            common::milog::MiLogStream::~MiLogStream(&v110);
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 192));
            v44 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 192),
                    "block1 guid:");
            if ( *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)block & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(block);
            }
            v45 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v44, block->guid);
            v46 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v45, " brick_id:");
            if ( *(_BYTE *)(((unsigned __int64)&block->block_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)block + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block->block_id >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&block->block_id);
            }
            v47 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v46, block->block_id);
            v48 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v47, " block2 guid:");
            if ( *(_BYTE *)(((unsigned __int64)inner_block >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)inner_block & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inner_block >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(inner_block);
            }
            v49 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v48, inner_block->guid);
            v50 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v49, " brick_id:");
            if ( *(_BYTE *)(((unsigned __int64)&inner_block->block_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)inner_block + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inner_block->block_id >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&inner_block->block_id);
            }
            v51 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v50, inner_block->block_id);
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v51, " check cross failed");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            goto LABEL_65;
          }
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator++(
            (std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false> *const)(v4 + 96),
            0);
        }
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator++(
        (std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false> *const)(v4 + 64),
        0);
    }
    if ( *(_BYTE *)(((unsigned __int64)&room_config->basic_data.total_cost >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&room_config->basic_data.total_cost >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&room_config->basic_data.total_cost);
    }
    if ( room_config->basic_data.total_cost >= *(_DWORD *)(v4 + 48) )
    {
      __for_range = &room_config->extra_data;
      __for_begin._M_current = std::vector<data::ConfigCustomLevelRoomExtraData>::begin(&room_config->extra_data)._M_current;
      *(std::vector<data::ConfigCustomLevelRoomExtraData>::const_iterator *)(v4 + 64) = std::vector<data::ConfigCustomLevelRoomExtraData>::end(__for_range);
      while ( __gnu_cxx::operator!=<data::ConfigCustomLevelRoomExtraData const*,std::vector<data::ConfigCustomLevelRoomExtraData>>(
                &__for_begin,
                (const __gnu_cxx::__normal_iterator<const data::ConfigCustomLevelRoomExtraData*,std::vector<data::ConfigCustomLevelRoomExtraData> > *)(v4 + 64)) )
      {
        ld_block = __gnu_cxx::__normal_iterator<data::ConfigCustomLevelRoomExtraData const*,std::vector<data::ConfigCustomLevelRoomExtraData>>::operator*(&__for_begin);
        if ( !is_enable_check )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&ld_block->config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)ld_block + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ld_block->config_id >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&ld_block->config_id);
        }
        if ( ld_block->config_id )
        {
          if ( *(char *)(((unsigned __int64)&ld_block->is_gadget >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&ld_block->is_gadget);
          if ( ld_block->is_gadget )
          {
            CustomDungeonBlock::CustomDungeonBlock((CustomDungeonBlock *const)(v4 + 224));
            if ( *(_BYTE *)(((unsigned __int64)&ld_block->config_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)ld_block + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ld_block->config_id >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4(&ld_block->config_id);
            }
            *(_DWORD *)(v4 + 228) = ld_block->config_id;
            Vector3::Vector3(&v105, &ld_block->occupy_pos);
            *(Vector3 *)(v4 + 232) = v105;
            Vector3::Vector3(&v105, &ld_block->gadget_rot);
            *(Vector3 *)(v4 + 244) = v105;
            *(std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,CustomDungeonBlock>::begin(&room->block_map);
            while ( 1 )
            {
              __y._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::end(&room->block_map)._M_cur;
              if ( !std::__detail::operator!=<std::pair<unsigned int const,CustomDungeonBlock>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false> *)(v4 + 96),
                      &__y) )
                break;
              inner_block_0 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false> *const)(v4 + 96))->second;
              if ( PlayerCustomDungeonComp::checkCrossBlock(this, (const CustomDungeonBlock *)(v4 + 224), inner_block_0) )
              {
                std::set<unsigned int>::insert(
                  invalid_block_set,
                  (const std::set<unsigned int>::value_type *)(v4 + 224));
                std::set<unsigned int>::insert(invalid_block_set, &inner_block_0->guid);
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                  "checkRoomLayoutValid",
                  1663);
                v58 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        &v110,
                        (const char (*)[13])"block1 guid:");
                v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v58,
                        (const unsigned int *)(v4 + 224));
                v60 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v59,
                        (const char (*)[11])" brick_id:");
                v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v60,
                        (const unsigned int *)(v4 + 228));
                v62 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v61,
                        (const char (*)[14])" block2 guid:");
                v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &inner_block_0->guid);
                v64 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v63,
                        (const char (*)[11])" brick_id:");
                v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v64,
                        &inner_block_0->block_id);
                v66 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                        v65,
                        (const char (*)[26])" check cross failed, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &val);
                common::milog::MiLogStream::~MiLogStream(&v110);
                common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 192));
                v67 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                        (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 192),
                        "block1 guid:");
                v68 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                        v67,
                        *(_DWORD *)(v4 + 224));
                v69 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v68, " brick_id:");
                v70 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                        v69,
                        *(_DWORD *)(v4 + 228));
                v71 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v70, " block2 guid:");
                if ( *(_BYTE *)(((unsigned __int64)inner_block_0 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)inner_block_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inner_block_0 >> 3)
                                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load4(inner_block_0);
                }
                v72 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                        v71,
                        inner_block_0->guid);
                v73 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v72, " brick_id:");
                if ( *(_BYTE *)(((unsigned __int64)&inner_block_0->block_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)inner_block_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inner_block_0->block_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(&inner_block_0->block_id);
                }
                v74 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                        v73,
                        inner_block_0->block_id);
                common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v74, " check cross failed");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
LABEL_65:
                player = this->player_;
                common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
                  (std::string *)&v110,
                  (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 192));
                Player::notifyServerLog(player, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, (const std::string *)&v110);
                std::string::~string(&v110);
                v8 = 11055;
                common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 192));
                goto LABEL_117;
              }
              std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator++(
                (std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false> *const)(v4 + 96),
                0);
            }
          }
        }
        __gnu_cxx::__normal_iterator<data::ConfigCustomLevelRoomExtraData const*,std::vector<data::ConfigCustomLevelRoomExtraData>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&room_config->component_limit_config >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)room_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&room_config->component_limit_config >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&room_config->component_limit_config);
      }
      if ( room_config->component_limit_config )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 192));
        v75 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192))->design_config.txt_config_mgr.custom_dungeon_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&room_config->component_limit_config >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)room_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&room_config->component_limit_config >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&room_config->component_limit_config);
        }
        limit_map = CustomDungeonExcelConfigMgr::getLimitConfig(v75, room_config->component_limit_config);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 192));
        __for_range_0 = (std::map<unsigned int,unsigned int> *)(v4 + 304);
        __for_begin._M_current = (const data::ConfigCustomLevelRoomExtraData *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v4 + 304))._M_node;
        *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 64) = std::map<unsigned int,unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          if ( !std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 64)) )
          {
            v8 = 0;
            goto LABEL_117;
          }
          __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
          id = std::get<0ul,unsigned int const,unsigned int>(__in);
          num = std::get<1ul,unsigned int const,unsigned int>(__in);
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                                limit_map,
                                                                                id);
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false>::__node_type *)std::map<unsigned int,unsigned int>::end(limit_map)._M_node;
          if ( !std::operator==(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 96),
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__y) )
          {
            if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(num);
            }
            v76 = *num;
            v77 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 96));
            p_second = &v77->second;
            if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_second);
            }
            if ( v76 > v77->second )
              break;
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v110,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "checkRoomLayoutValid",
          1689);
        v79 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v110, (const char (*)[10])"block_id:");
        v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, id);
        v81 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v80, (const char (*)[6])" num:");
        v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, num);
        v83 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v82, (const char (*)[10])" > limit:");
        v84 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 96));
        v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, &v84->second);
        v86 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v85, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, &val);
        common::milog::MiLogStream::~MiLogStream(&v110);
        v8 = 11081;
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v110,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "checkRoomLayoutValid",
        1632);
      v53 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v110, (const char (*)[13])"deploy cost:");
      v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, (const unsigned int *)(v4 + 48));
      v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v54, (const char (*)[16])" > config cost:");
      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v55,
              &room_config->basic_data.total_cost);
      v57 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v56, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &val);
      common::milog::MiLogStream::~MiLogStream(&v110);
      v8 = 11091;
    }
LABEL_117:
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 304));
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
  result = v8;
  if ( v111 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1697: range 0000000014175A88-0000000014176367
int32_t __cdecl PlayerCustomDungeonComp::checkCrossBlock(
        PlayerCustomDungeonComp *const this,
        const CustomDungeonBlock *block1,
        const CustomDungeonBlock *block2)
{
  JsonConfigMgr *p_json_config_mgr; // rcx
  JsonConfigMgr *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  float y; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  bool has_common; // [rsp+2Bh] [rbp-85h]
  uint32_t cross_num; // [rsp+2Ch] [rbp-84h]
  float brick1_x; // [rsp+30h] [rbp-80h]
  float brick1_z; // [rsp+34h] [rbp-7Ch]
  float brick2_x; // [rsp+38h] [rbp-78h]
  float brick2_z; // [rsp+3Ch] [rbp-74h]
  std::vector<data::PileTag>::const_iterator __for_begin; // [rsp+40h] [rbp-70h] BYREF
  std::vector<data::PileTag>::const_iterator __for_end; // [rsp+48h] [rbp-68h] BYREF
  const data::ConfigCustomLevelBrick *brick1_config_ptr; // [rsp+50h] [rbp-60h]
  const data::ConfigCustomLevelBrick *brick2_config_ptr; // [rsp+58h] [rbp-58h]
  const std::vector<data::PileTag> *__for_range; // [rsp+60h] [rbp-50h]
  const data::PileTag *pile_tag; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v29; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v30; // [rsp+80h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&block1->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)block1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block1->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&block1->block_id);
  }
  brick1_config_ptr = JsonConfigMgr::findCustomDungeonBrickConfig(p_json_config_mgr, block1->block_id);
  std::shared_ptr<Config>::~shared_ptr(&v29);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v4 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&block2->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)block2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block2->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&block2->block_id);
  }
  brick2_config_ptr = JsonConfigMgr::findCustomDungeonBrickConfig(v4, block2->block_id);
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( brick1_config_ptr && brick2_config_ptr )
  {
    has_common = 0;
    __for_range = &brick1_config_ptr->pile_tags;
    __for_begin._M_current = std::vector<data::PileTag>::begin(&brick1_config_ptr->pile_tags)._M_current;
    __for_end._M_current = std::vector<data::PileTag>::end(&brick1_config_ptr->pile_tags)._M_current;
    while ( __gnu_cxx::operator!=<data::PileTag const*,std::vector<data::PileTag>>(&__for_begin, &__for_end) )
    {
      pile_tag = __gnu_cxx::__normal_iterator<data::PileTag const*,std::vector<data::PileTag>>::operator*(&__for_begin);
      if ( common::tools::MiscUtils::isContains<data::PileTag>(&brick2_config_ptr->pile_tags, pile_tag) )
      {
        has_common = 1;
        break;
      }
      __gnu_cxx::__normal_iterator<data::PileTag const*,std::vector<data::PileTag>>::operator++(&__for_begin);
    }
    if ( !has_common )
    {
      return 0;
    }
    else
    {
      cross_num = 0;
      if ( *(_BYTE *)(((unsigned __int64)&block1->pos.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block1->pos.y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block1->pos.y);
      }
      y = block1->pos.y;
      if ( *(_BYTE *)(((unsigned __int64)&brick1_config_ptr->brick_size.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)brick1_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&brick1_config_ptr->brick_size.y >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&brick1_config_ptr->brick_size.y);
      }
      v11 = brick1_config_ptr->brick_size.y + y;
      if ( *(_BYTE *)(((unsigned __int64)&block2->pos.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block2->pos.y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block2->pos.y);
      }
      if ( v11 > block2->pos.y )
      {
        v12 = block1->pos.y;
        v13 = block2->pos.y;
        if ( *(_BYTE *)(((unsigned __int64)&brick2_config_ptr->brick_size.y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)brick2_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&brick2_config_ptr->brick_size.y >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&brick2_config_ptr->brick_size.y);
        }
        if ( (float)(brick2_config_ptr->brick_size.y + v13) > v12 )
          cross_num = 1;
      }
      if ( *(_BYTE *)(((unsigned __int64)brick1_config_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)brick1_config_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(brick1_config_ptr);
      }
      brick1_x = brick1_config_ptr->brick_size.x;
      if ( *(_BYTE *)(((unsigned __int64)&brick1_config_ptr->brick_size.z >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&brick1_config_ptr->brick_size.z >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&brick1_config_ptr->brick_size.z);
      }
      brick1_z = brick1_config_ptr->brick_size.z;
      if ( *(_BYTE *)(((unsigned __int64)&block1->rot.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block1 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block1->rot.y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block1->rot.y);
      }
      if ( block1->rot.y == 90.0 || block1->rot.y == 270.0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&brick1_config_ptr->brick_size.z >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&brick1_config_ptr->brick_size.z >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&brick1_config_ptr->brick_size.z);
        }
        brick1_x = brick1_config_ptr->brick_size.z;
        if ( *(_BYTE *)(((unsigned __int64)brick1_config_ptr >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)brick1_config_ptr >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(brick1_config_ptr);
        }
        brick1_z = brick1_config_ptr->brick_size.x;
      }
      if ( *(_BYTE *)(((unsigned __int64)brick2_config_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)brick2_config_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(brick2_config_ptr);
      }
      brick2_x = brick2_config_ptr->brick_size.x;
      if ( *(_BYTE *)(((unsigned __int64)&brick2_config_ptr->brick_size.z >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&brick2_config_ptr->brick_size.z >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&brick2_config_ptr->brick_size.z);
      }
      brick2_z = brick2_config_ptr->brick_size.z;
      if ( *(_BYTE *)(((unsigned __int64)&block2->rot.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block2 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block2->rot.y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block2->rot.y);
      }
      if ( block2->rot.y == 90.0 || block2->rot.y == 270.0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&brick2_config_ptr->brick_size.z >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&brick2_config_ptr->brick_size.z >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&brick2_config_ptr->brick_size.z);
        }
        brick2_x = brick2_config_ptr->brick_size.z;
        if ( *(_BYTE *)(((unsigned __int64)brick2_config_ptr >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)brick2_config_ptr >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(brick2_config_ptr);
        }
        brick2_z = brick2_config_ptr->brick_size.x;
      }
      if ( *(_BYTE *)(((unsigned __int64)&block1->pos >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block1->pos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block1->pos);
      }
      v14 = block1->pos.x + brick1_x;
      if ( *(_BYTE *)(((unsigned __int64)&block2->pos >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block2->pos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block2->pos);
      }
      if ( v14 > block2->pos.x && (float)(block2->pos.x + brick2_x) > block1->pos.x )
        ++cross_num;
      if ( *(_BYTE *)(((unsigned __int64)&block1->pos.z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block1->pos.z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block1->pos.z);
      }
      v15 = block1->pos.z + brick1_z;
      if ( *(_BYTE *)(((unsigned __int64)&block2->pos.z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block2 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block2->pos.z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&block2->pos.z);
      }
      if ( v15 > block2->pos.z && (float)(block2->pos.z + brick2_z) > block1->pos.z )
        ++cross_num;
      if ( cross_num <= 2 )
        return 0;
      else
        return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "checkCrossBlock",
      1703);
    v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v30, (const char (*)[10])"brick_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &block1->block_id);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])off_2525E600);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &block2->block_id);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream(&v30);
    return -1;
  }
};

// Line 1760: range 0000000014176368-0000000014176584
int32_t __cdecl PlayerCustomDungeonComp::checkDungeonSettingByAbstract(
        PlayerCustomDungeonComp *const this,
        const CustomDungeonSetting *setting,
        const CustomDungeonAbstract *abstract)
{
  uint32_t coin_limit; // ecx

  if ( *(char *)(((unsigned __int64)setting >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(setting);
  if ( !setting->is_arrive_finish )
  {
    if ( *(_BYTE *)(((unsigned __int64)&setting->coin_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)setting + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&setting->coin_limit >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&setting->coin_limit);
    }
    if ( !setting->coin_limit )
      return 11075;
  }
  if ( *(_BYTE *)(((unsigned __int64)&setting->coin_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)setting + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&setting->coin_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&setting->coin_limit);
  }
  coin_limit = setting->coin_limit;
  if ( *(_BYTE *)(((unsigned __int64)&abstract->total_coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)abstract + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&abstract->total_coin_num >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(&abstract->total_coin_num);
  }
  if ( coin_limit > abstract->total_coin_num )
    return 11064;
  if ( *(char *)(((unsigned __int64)setting >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(setting);
  if ( setting->is_arrive_finish )
  {
    if ( *(_BYTE *)(((unsigned __int64)abstract >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)abstract >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(abstract);
    }
    if ( !abstract->finish_room_id )
      return 11065;
  }
  if ( *(_BYTE *)(((unsigned __int64)&setting->life_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)setting + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&setting->life_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&setting->life_num);
  }
  if ( !setting->life_num )
    return 11079;
  if ( std::set<unsigned int>::empty(&setting->open_room_set) )
    return 11080;
  return 0;
};

// Line 1790: range 0000000014176586-00000000141769F2
void __cdecl PlayerCustomDungeonComp::serverSaveCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::ServerSaveCustomDungeonRsp *server_rsp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  void *p_Uid; // rsi
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint64_t dungeon_guid; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  google::protobuf::uint32 version; // r14d
  char v17; // al
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  char v19; // cl
  google::protobuf::uint32 v20; // eax
  google::protobuf::int32 v21; // eax
  unsigned int v23; // [rsp+1Ch] [rbp-E4h] BYREF
  int v24; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int Uid; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int64 val; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 8 rsp:1798";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::serverSaveCustomDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
    "serverSaveCustomDungeon",
    1791);
  v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v27,
         (const char (*)[28])"server save custom dungeon:");
  val = proto::ServerSaveCustomDungeonRsp::dungeon_guid(server_rsp);
  v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" save_room_id:");
  v23 = proto::ServerSaveCustomDungeonRsp::room_id(server_rsp);
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v23);
  v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])", retcode:");
  v24 = proto::ServerSaveCustomDungeonRsp::retcode(server_rsp);
  v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, &v24);
  v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  p_Uid = &Uid;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &Uid);
  common::milog::MiLogStream::~MiLogStream(&v27);
  if ( proto::ServerSaveCustomDungeonRsp::retcode(server_rsp) )
    goto LABEL_15;
  p_Uid = &this->cur_dungeon_ptr_;
  if ( !std::operator!=<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
    goto LABEL_15;
  v13 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v13);
  dungeon_guid = v13->dungeon_guid;
  if ( dungeon_guid != proto::ServerSaveCustomDungeonRsp::dungeon_guid(server_rsp) )
    goto LABEL_15;
  v15 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&v15->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->version >> 3) + 0x7FFF8000) <= 3 )
  {
    v15 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v15->version);
  }
  version = v15->version;
  if ( version <= proto::ServerSaveCustomDungeonRsp::version(server_rsp) )
    v17 = 1;
  else
LABEL_15:
    v17 = 0;
  if ( v17 )
  {
    v18 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    v19 = *(_BYTE *)(((unsigned __int64)&v18->is_dirty >> 3) + 0x7FFF8000);
    if ( v19 != 0 && (((unsigned __int8)v18 - 116) & 7) >= v19 )
    {
      LOBYTE(p_Uid) = v19 != 0;
      __asan_report_store1(&v18->is_dirty, p_Uid, v18);
    }
    v18->is_dirty = 0;
  }
  proto::SaveCustomDungeonRoomRsp::SaveCustomDungeonRoomRsp((proto::SaveCustomDungeonRoomRsp *const)(v2 + 32));
  v20 = proto::ServerSaveCustomDungeonRsp::room_id(server_rsp);
  proto::SaveCustomDungeonRoomRsp::set_room_id((proto::SaveCustomDungeonRoomRsp *const)(v2 + 32), v20);
  v21 = proto::ServerSaveCustomDungeonRsp::retcode(server_rsp);
  proto::SaveCustomDungeonRoomRsp::set_retcode((proto::SaveCustomDungeonRoomRsp *const)(v2 + 32), v21);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::SaveCustomDungeonRoomRsp::~SaveCustomDungeonRoomRsp((proto::SaveCustomDungeonRoomRsp *const)(v2 + 32));
  if ( v28 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1805: range 00000000141769F4-00000000141773CD
void __cdecl PlayerCustomDungeonComp::changeCustomDungeonRoom(
        PlayerCustomDungeonComp *const this,
        const proto::ChangeCustomDungeonRoomReq *req,
        proto::ChangeCustomDungeonRoomRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  PlayerSceneComp *SceneComp; // r14
  Scene *v28; // rax
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  const data::ConfigCustomLevelRoomSetting *room_config_ptr; // [rsp+30h] [rbp-120h]
  Vector3 pos; // [rsp+38h] [rbp-118h] BYREF
  Vector3 rot; // [rsp+44h] [rbp-10Ch] BYREF
  std::shared_ptr<Config> v34; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-F0h] BYREF
  TransferReason p_reason; // [rsp+80h] [rbp-D0h] BYREF
  char v37[144]; // [rsp+C0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 19 cur_dungeon_id:1822 48 4 12 room_id:1836 64 16 22 dungeon_scene_ptr:1823";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::changeCustomDungeonRoom;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->enter_type_);
    }
    if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_EDIT )
    {
      if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "changeCustomDungeonRoom",
          1818);
        v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v35, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" not in dungeon");
        common::milog::MiLogStream::~MiLogStream(&v35);
        proto::ChangeCustomDungeonRoomRsp::set_retcode(rsp_0, 11057);
      }
      else
      {
        v11 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)&v11->dungeon_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v11 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->dungeon_id);
        }
        *(_DWORD *)(v3 + 32) = v11->dungeon_id;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getDungeonComp(this->player_);
        PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 64));
        if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "changeCustomDungeonRoom",
            1826);
          v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v35, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])" not in dungeon");
          common::milog::MiLogStream::~MiLogStream(&v35);
          proto::ChangeCustomDungeonRoomRsp::set_retcode(rsp_0, 11057);
        }
        else
        {
          v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( DungeonScene::getDungeonId(v14) == *(_DWORD *)(v3 + 32) )
          {
            *(_DWORD *)(v3 + 48) = proto::ChangeCustomDungeonRoomReq::room_id(req);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v34);
            v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
            room_config_ptr = JsonConfigMgr::findCustomDungeonRoomConfig(
                                &v21->design_config.json_config_mgr,
                                *(_DWORD *)(v3 + 32),
                                *(_DWORD *)(v3 + 48));
            std::shared_ptr<Config>::~shared_ptr(&v34);
            if ( room_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              SceneComp = Player::getSceneComp(this->player_);
              memset(&p_reason, 0, sizeof(p_reason));
              TransferReason::TransferReason(&p_reason);
              Vector3::Vector3(&rot, &room_config_ptr->player_init_rot);
              Vector3::Vector3(&pos, &room_config_ptr->player_init_pos);
              v28 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              PlayerSceneComp::jumpToScene(SceneComp, v28, &pos, &rot, 0, &p_reason);
              TransferReason::~TransferReason(&p_reason);
              proto::ChangeCustomDungeonRoomRsp::set_retcode(rsp_0, 0);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v35,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                "changeCustomDungeonRoom",
                1842);
              v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      &v35,
                      (const char (*)[12])"dungeon_id:");
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v22,
                      (const unsigned int *)(v3 + 32));
              v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v23,
                      (const char (*)[10])" room_id:");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      (const unsigned int *)(v3 + 48));
              v26 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v25,
                      (const char (*)[24])" config not found, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
              common::milog::MiLogStream::~MiLogStream(&v35);
              proto::ChangeCustomDungeonRoomRsp::set_retcode(rsp_0, -1);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
              "changeCustomDungeonRoom",
              1832);
            v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v35, (const char (*)[5])"uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v3 + 48));
            v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    v16,
                    (const char (*)[34])" not in right dungeon, should in ");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v3 + 32));
            v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v18,
                    (const char (*)[13])" but now in ");
            v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            val = DungeonScene::getDungeonId(v20);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
            common::milog::MiLogStream::~MiLogStream(&v35);
            proto::ChangeCustomDungeonRoomRsp::set_retcode(rsp_0, 11057);
          }
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "changeCustomDungeonRoom",
        1811);
      v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v35, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" entery_type:");
      common::milog::MiLogStream::operator<<<proto::EnterCustomDungeonType,(proto::EnterCustomDungeonType*)0>(
        v8,
        &this->enter_type_);
      common::milog::MiLogStream::~MiLogStream(&v35);
      proto::ChangeCustomDungeonRoomRsp::set_retcode(rsp_0, -1);
    }
  }
  else
  {
    proto::ChangeCustomDungeonRoomRsp::set_retcode(rsp_0, 11093);
  }
  if ( v37 == (char *)v3 )
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

// Line 1851: range 00000000141773CE-0000000014177A70
void __cdecl PlayerCustomDungeonComp::removeCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::RemoveCustomDungeonReq *req,
        proto::RemoveCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonRemove,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonRemove,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  Player *player; // r14
  std::string v13; // [rsp+0h] [rbp-190h]
  proto::RemoveCustomDungeonRsp *rsp_0a; // [rsp+8h] [rbp-188h]
  PlayerCustomDungeonComp *thisa; // [rsp+18h] [rbp-178h]
  unsigned int val; // [rsp+2Ch] [rbp-164h] BYREF
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self __y; // [rsp+30h] [rbp-160h] BYREF
  CustomDungeonBrief *dungeon_brief; // [rsp+38h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-130h] BYREF
  char v22[272]; // [rsp+80h] [rbp-110h] BYREF

  *(&v13._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v13._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v13._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 11 holder:1876 64 8 17 dungeon_guid:1854 96 8 9 iter:1855 128 16 12 log_ptr:1877 160 32 1"
                        "5 server_req:1863";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::removeCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    *(_QWORD *)(v3 + 64) = proto::RemoveCustomDungeonReq::dungeon_guid(req);
    *(std::map<long unsigned int,CustomDungeonBrief>::iterator *)(v3 + 96) = std::map<unsigned long,CustomDungeonBrief>::find(
                                                                               &this->brief_map_,
                                                                               (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v3 + 64));
    __y._M_node = std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)(v3 + 96),
           &__y) )
    {
      proto::RemoveCustomDungeonRsp::set_retcode((proto::RemoveCustomDungeonRsp *const)v13._M_string_length, 11053);
    }
    else
    {
      dungeon_brief = &std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v3 + 96))->second;
      proto::ServerRemoveCustomDungeonReq::ServerRemoveCustomDungeonReq((proto::ServerRemoveCustomDungeonReq *const)(v3 + 160));
      proto::ServerRemoveCustomDungeonReq::set_dungeon_guid(
        (proto::ServerRemoveCustomDungeonReq *const)(v3 + 160),
        *(_QWORD *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->group_id_);
      }
      proto::ServerRemoveCustomDungeonReq::set_group_id(
        (proto::ServerRemoveCustomDungeonReq *const)(v3 + 160),
        this->group_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      if ( sendProtoToActivityService<proto::ServerRemoveCustomDungeonReq>(
             this->player_,
             (proto::ServerRemoveCustomDungeonReq *)(v3 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "removeCustomDungeon",
          1870);
        v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               &v21,
               (const char (*)[22])"request dungeon_guid:");
        v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
               v6,
               (const unsigned __int64 *)(v3 + 64));
        v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        proto::RemoveCustomDungeonRsp::set_retcode((proto::RemoveCustomDungeonRsp *const)v13._M_string_length, 11058);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xDFFu, v13);
        std::string::~string(&v21);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyCustomDungeonRemove>();
        v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonRemove,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonRemove,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)dungeon_brief >> 3) + 0x7FFF8000) )
          __asan_report_load8(dungeon_brief);
        proto_log::PlayerLogBodyCustomDungeonRemove::set_dungeon_guid(v10, dungeon_brief->dungeon_guid);
        v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonRemove,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonRemove,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->dungeon_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_brief->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&dungeon_brief->dungeon_id);
        }
        proto_log::PlayerLogBodyCustomDungeonRemove::set_dungeon_id(v11, dungeon_brief->dungeon_id);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->player_);
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCustomDungeonRemove,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonRemove> *)(v3 + 128));
        Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        proto::RemoveCustomDungeonRsp::set_retcode(rsp_0a, 0);
        std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonRemove>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonRemove> *const)(v3 + 128));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
      }
      proto::ServerRemoveCustomDungeonReq::~ServerRemoveCustomDungeonReq((proto::ServerRemoveCustomDungeonReq *const)(v3 + 160));
    }
  }
  else
  {
    proto::RemoveCustomDungeonRsp::set_retcode((proto::RemoveCustomDungeonRsp *const)v13._M_string_length, 11093);
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1886: range 0000000014177A72-0000000014177B07
void __cdecl PlayerCustomDungeonComp::serverRemoveCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::ServerRemoveCustomDungeonRsp *server_rsp,
        proto::RemoveCustomDungeonRsp *rsp_0)
{
  google::protobuf::int32 v3; // edx
  std::map<long unsigned int,CustomDungeonBrief>::key_type __x[3]; // [rsp+28h] [rbp-18h] BYREF

  if ( proto::ServerRemoveCustomDungeonRsp::retcode(server_rsp) )
  {
    v3 = proto::ServerRemoveCustomDungeonRsp::retcode(server_rsp);
    proto::RemoveCustomDungeonRsp::set_retcode(rsp_0, v3);
  }
  else
  {
    __x[0] = proto::ServerRemoveCustomDungeonRsp::dungeon_guid(server_rsp);
    std::map<unsigned long,CustomDungeonBrief>::erase(&this->brief_map_, __x);
    PlayerCustomDungeonComp::notifyAllDataToClient(this);
    proto::RemoveCustomDungeonRsp::set_retcode(rsp_0, 0);
  }
};

// Line 1900: range 0000000014177B08-0000000014178C67
void __cdecl PlayerCustomDungeonComp::tryCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::TryCustomDungeonReq *req,
        proto::TryCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rbx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned __int64 v21; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  Scene *v28; // r14
  CustomDungeonRoom *p_second; // rdx
  DungeonScene *v31; // rdx
  __int64 v32; // rsi
  uint32_t v33; // ecx
  char v34; // dl
  __int64 v35; // rdx
  PlayerSceneComp *SceneComp; // r14
  Scene *v37; // rax
  char *v38; // rsi
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rdx
  char v41; // cl
  Scene *v42; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  unsigned int val; // [rsp+24h] [rbp-1CCh] BYREF
  uint32_t start_room_id; // [rsp+28h] [rbp-1C8h]
  int32_t ret; // [rsp+2Ch] [rbp-1C4h]
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self __y; // [rsp+30h] [rbp-1C0h] BYREF
  CustomDungeon *custom_dungeon; // [rsp+38h] [rbp-1B8h]
  CustomDungeonBrief *dungeon_brief; // [rsp+40h] [rbp-1B0h]
  std::tuple_element<0,std::pair<Vector3,Vector3> >::type *born_pos; // [rsp+48h] [rbp-1A8h]
  std::tuple_element<1,std::pair<Vector3,Vector3> >::type *born_rot; // [rsp+50h] [rbp-1A0h]
  const data::ConfigCustomLevelRoomSetting *room_config_ptr; // [rsp+58h] [rbp-198h]
  Vector3 v54; // [rsp+64h] [rbp-18Ch] BYREF
  std::shared_ptr<Config> v55; // [rsp+70h] [rbp-180h] BYREF
  std::pair<Vector3,Vector3> __in; // [rsp+80h] [rbp-170h] BYREF
  common::milog::MiLogStream v57; // [rsp+A0h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+C0h] [rbp-130h] BYREF
  char v59[240]; // [rsp+100h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 19 cur_dungeon_id:1934 48 4 12 room_id:1958 64 8 9 iter:1949 96 8 14 room_iter:1993 128 1"
                        "6 22 dungeon_scene_ptr:1935 160 16 12 evt_ptr:2015";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::tryCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( !this->group_id_ )
  {
    proto::TryCustomDungeonRsp::set_retcode(rsp_0, 11093);
    goto LABEL_88;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_type_);
  }
  if ( this->enter_type_ != ENTER_CUSTOM_DUNGEON_EDIT )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "tryCustomDungeon",
      1905);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v57, (const char (*)[12])"enter_type:");
    if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->enter_type_);
    }
    *(_DWORD *)(v3 + 48) = this->enter_type_;
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v57);
    proto::TryCustomDungeonRsp::set_retcode(rsp_0, 11059);
    goto LABEL_88;
  }
  if ( !std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
  {
    custom_dungeon = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->is_dirty >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)custom_dungeon - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&custom_dungeon->is_dirty >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load1(&custom_dungeon->is_dirty);
    }
    if ( custom_dungeon->is_dirty )
    {
      proto::TryCustomDungeonRsp::set_retcode(rsp_0, 11071);
      goto LABEL_88;
    }
    if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&custom_dungeon->dungeon_id);
    }
    *(_DWORD *)(v3 + 32) = custom_dungeon->dungeon_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 128));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 128)) )
    {
      proto::TryCustomDungeonRsp::set_retcode(rsp_0, 11057);
LABEL_87:
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 128));
      goto LABEL_88;
    }
    v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    if ( DungeonScene::getDungeonId(v10) != *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "tryCustomDungeon",
        1944);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v57, (const char (*)[11])"should in ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" but in ");
      v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      *(_DWORD *)(v3 + 48) = DungeonScene::getDungeonId(v14);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream(&v57);
      proto::TryCustomDungeonRsp::set_retcode(rsp_0, 11057);
      goto LABEL_87;
    }
    *(std::map<long unsigned int,CustomDungeonBrief>::iterator *)(v3 + 64) = std::map<unsigned long,CustomDungeonBrief>::find(
                                                                               &this->brief_map_,
                                                                               &custom_dungeon->dungeon_guid);
    __y._M_node = std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)(v3 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "tryCustomDungeon",
        1952);
      v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v57,
              (const char (*)[26])"want to try dungeon_guid:");
      v18 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &custom_dungeon->dungeon_guid);
      v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v18, (const char (*)[17])" not exist, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v57);
      proto::TryCustomDungeonRsp::set_retcode(rsp_0, 11059);
      goto LABEL_87;
    }
    dungeon_brief = &std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v3 + 64))->second;
    *(_DWORD *)(v3 + 48) = proto::TryCustomDungeonReq::room_id(req);
    ret = PlayerCustomDungeonComp::checkDungeonSettingByAbstract(
            this,
            &custom_dungeon->setting,
            &dungeon_brief->abstract);
    if ( !*(_DWORD *)(v3 + 48) && ret )
    {
      proto::TryCustomDungeonRsp::set_retcode(rsp_0, ret);
      goto LABEL_87;
    }
    start_room_id = *(_DWORD *)(v3 + 48);
    if ( !*(_DWORD *)(v3 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->setting.start_room_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&custom_dungeon->setting.start_room_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&custom_dungeon->setting.start_room_id);
      }
      start_room_id = custom_dungeon->setting.start_room_id;
    }
    v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v20);
    v21 = *(_QWORD *)v20->baseclass_0 + 136LL;
    if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)v20->baseclass_0 + 136LL);
    (*(void (__fastcall **)(std::pair<Vector3,Vector3> *, std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v21)(
      &__in,
      v20);
    born_pos = std::get<0ul,Vector3,Vector3>(&__in);
    born_rot = std::get<1ul,Vector3,Vector3>(&__in);
    if ( start_room_id )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v55);
      v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
      room_config_ptr = JsonConfigMgr::findCustomDungeonRoomConfig(
                          &v22->design_config.json_config_mgr,
                          *(_DWORD *)(v3 + 32),
                          *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v55);
      if ( !room_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "tryCustomDungeon",
          1981);
        v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v57, (const char (*)[12])"dungeon_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v3 + 32));
        v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" room_id:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v3 + 48));
        v27 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v26,
                (const char (*)[24])" config not found, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
        common::milog::MiLogStream::~MiLogStream(&v57);
        proto::TryCustomDungeonRsp::set_retcode(rsp_0, -1);
        goto LABEL_87;
      }
      Vector3::Vector3(&v54, &room_config_ptr->player_init_pos);
      if ( ((unsigned __int8)born_pos & 7) >= *(_BYTE *)(((unsigned __int64)born_pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)born_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&born_pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)born_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&born_pos->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(born_pos, 12LL);
      }
      *born_pos = v54;
      Vector3::Vector3(&v54, &room_config_ptr->player_init_rot);
      if ( ((unsigned __int8)born_rot & 7) >= *(_BYTE *)(((unsigned __int64)born_rot >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)born_rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&born_rot->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)born_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&born_rot->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(born_rot, 12LL);
      }
      *born_rot = v54;
    }
    PlayerCustomDungeonComp::clearEntity(this);
    if ( *(_DWORD *)(v3 + 48) )
    {
      *(std::map<unsigned int,CustomDungeonRoom>::iterator *)(v3 + 96) = std::map<unsigned int,CustomDungeonRoom>::find(
                                                                           &custom_dungeon->room_map,
                                                                           (const std::map<unsigned int,CustomDungeonRoom>::key_type *)(v3 + 48));
      __y._M_node = std::map<unsigned int,CustomDungeonRoom>::end(&custom_dungeon->room_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonRoom> >::_Self *)(v3 + 96),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonRoom> >::_Self *)&__y) )
      {
        v28 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonRoom> > *const)(v3 + 96))->second;
        if ( (unsigned int)PlayerCustomDungeonComp::buildCustomRoom(
                             this,
                             *(_DWORD *)(v3 + 32),
                             (unsigned __int64)p_second,
                             v28) )
          goto LABEL_65;
      }
    }
    else
    {
      v31 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( PlayerCustomDungeonComp::buildCustomDungeon(this, custom_dungeon, v31) )
      {
LABEL_65:
        proto::TryCustomDungeonRsp::set_retcode(rsp_0, -1);
        goto LABEL_87;
      }
    }
    if ( *(_DWORD *)(v3 + 48) )
      v32 = 1LL;
    else
      v32 = 2LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->try_type_, v32, &this->try_type_);
    }
    this->try_type_ = v32;
    v33 = *(_DWORD *)(v3 + 48);
    v34 = *(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000);
    LOBYTE(v32) = v34 != 0;
    v35 = (v34 != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= v34);
    if ( (_BYTE)v35 )
      __asan_report_store4(&this->try_room_id_, v32, v35);
    this->try_room_id_ = v33;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    memset(&p_reason, 0, sizeof(p_reason));
    TransferReason::TransferReason(&p_reason);
    v37 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    PlayerSceneComp::jumpToScene(SceneComp, v37, born_pos, born_rot, 0, &p_reason);
    TransferReason::~TransferReason(&p_reason);
    if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->try_type_);
    }
    if ( this->try_type_ == TRY_CUSTOM_DUNGEON_ALL )
    {
      EventUtil::createEvent((data::EventType)(v3 + 160));
      v38 = (char *)(v3 + 160);
      if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v3 + 160)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        v40 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v41 = *(_BYTE *)(((unsigned __int64)&v40->uid >> 3) + 0x7FFF8000);
        if ( v41 != 0 && (char)((((_BYTE)v40 + 60) & 7) + 3) >= v41 )
        {
          LOBYTE(v38) = v41 != 0;
          __asan_report_store4(&v40->uid, v38, v40);
        }
        v40->uid = Uid;
        v42 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        BlockGroupComp = Scene::getBlockGroupComp(v42);
        std::shared_ptr<Event>::shared_ptr(
          (std::shared_ptr<Event> *const)&v55,
          (const std::shared_ptr<Event> *)(v3 + 160));
        SceneBlockGroupComp::broadcastGroupLuaEvent(BlockGroupComp, (EventPtr *)&v55);
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)&v55);
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 160));
    }
    proto::TryCustomDungeonRsp::set_retcode(rsp_0, 0);
    goto LABEL_87;
  }
  common::milog::MiLogStream::create(
    &v57,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
    "tryCustomDungeon",
    1922);
  v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v57, (const char (*)[39])off_2525EB00);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  common::milog::MiLogStream::~MiLogStream(&v57);
  proto::TryCustomDungeonRsp::set_retcode(rsp_0, 11057);
LABEL_88:
  if ( v59 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2027: range 0000000014178C68-0000000014179BFE
void __cdecl PlayerCustomDungeonComp::publishCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::PublishCustomDungeonReq *req,
        proto::PublishCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::pointer v6; // rax
  uint32_t *p_state; // rax
  std::set<unsigned int>::size_type v8; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  PlayerBasicComp *BasicComp; // rax
  const std::string *v16; // rax
  uint32_t Uid; // eax
  PlayerBasicComp *v18; // rax
  google::protobuf::uint32 LanguageType; // eax
  bool isPsnPlatform; // al
  __int64 v21; // rdx
  proto::CustomDungeonAbstractBin *v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // rdx
  char v25; // al
  common::milog::MiLogStream *v26; // r14
  uint32_t last_publish_time; // ecx
  PlayerBasicComp *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonPublish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  char v31; // al
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rcx
  Player *player; // r14
  std::string v34; // [rsp+0h] [rbp-270h]
  proto::PublishCustomDungeonRsp *rsp_0a; // [rsp+8h] [rbp-268h]
  PlayerCustomDungeonComp *thisa; // [rsp+18h] [rbp-258h]
  uint32_t now; // [rsp+2Ch] [rbp-244h]
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-240h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-238h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-230h]
  CustomDungeonBrief *dungeon_brief; // [rsp+48h] [rbp-228h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+50h] [rbp-220h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-218h]
  const CustomDungeonExcelConfigMgr *custom_dungeon_config_mgr; // [rsp+60h] [rbp-210h]
  std::set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-208h]
  proto::CustomDungeonAbstractBin *abstract_proto; // [rsp+70h] [rbp-200h]
  proto_log::CustomDungeonDetailInfo *log_detail_info; // [rsp+78h] [rbp-1F8h]
  std::shared_ptr<google::protobuf::Message> v48; // [rsp+80h] [rbp-1F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v49; // [rsp+90h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v50; // [rsp+A0h] [rbp-1D0h] BYREF
  char v51[432]; // [rsp+C0h] [rbp-1B0h] BYREF

  *(&v34._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v34._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v34._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 1 11 holder:2110 48 4 8 tag:2067 64 4 8 tag:2053 80 8 17 dungeon_guid:2037 112 8 9 iter:203"
                        "8 144 16 12 log_ptr:2111 176 48 12 tag_set:2052 256 88 15 server_req:2063";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::publishCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862727] = -218959118;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->ban_expire_time_);
    }
    if ( now > this->ban_expire_time_ )
    {
      *(_QWORD *)(v3 + 80) = proto::PublishCustomDungeonReq::dungeon_guid(req);
      *(std::map<long unsigned int,CustomDungeonBrief>::iterator *)(v3 + 112) = std::map<unsigned long,CustomDungeonBrief>::find(
                                                                                  &this->brief_map_,
                                                                                  (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v3 + 80));
      __for_end_0._M_node = std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)(v3 + 112),
             (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)&__for_end_0) )
      {
        proto::PublishCustomDungeonRsp::set_retcode((proto::PublishCustomDungeonRsp *const)v34._M_string_length, 11053);
      }
      else
      {
        v6 = std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v3 + 112));
        dungeon_brief = &v6->second;
        p_state = &v6->second.state;
        if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_state);
        }
        if ( dungeon_brief->state == 1 )
        {
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 176));
          __for_range = proto::PublishCustomDungeonReq::tag_list(req);
          __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
          __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
          while ( __for_begin != __for_end )
          {
            if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(__for_begin);
            }
            *(_DWORD *)(v3 + 64) = *__for_begin;
            std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v3 + 176),
              (const std::set<unsigned int>::value_type *)(v3 + 64));
            ++__for_begin;
          }
          v8 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 176));
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v48);
          v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
          LOBYTE(v8) = v8 > ConstValueExcelConfigMgr::getCustomDungeonMaxTagNum(&v9->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v48);
          if ( (_BYTE)v8 )
          {
            proto::PublishCustomDungeonRsp::set_retcode(
              (proto::PublishCustomDungeonRsp *const)v34._M_string_length,
              11089);
          }
          else
          {
            proto::ServerPublishCustomDungeonReq::ServerPublishCustomDungeonReq((proto::ServerPublishCustomDungeonReq *const)(v3 + 256));
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v49);
            custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.txt_config_mgr.custom_dungeon_config_mgr;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v49);
            __for_range_0 = (std::set<unsigned int> *)(v3 + 176);
            __for_begin_0._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 176))._M_node;
            __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
            while ( std::operator!=(&__for_begin_0, &__for_end_0) )
            {
              v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
              v11 = v10;
              if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v10);
              }
              *(_DWORD *)(v3 + 48) = *v11;
              if ( !CustomDungeonExcelConfigMgr::isValidTag(custom_dungeon_config_mgr, *(_DWORD *)(v3 + 48)) )
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                  "publishCustomDungeon",
                  2071);
                v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        &v50,
                        (const char (*)[13])"invalid tag:");
                v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v12,
                        (const unsigned int *)(v3 + 48));
                v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v50);
                proto::PublishCustomDungeonRsp::set_retcode(
                  (proto::PublishCustomDungeonRsp *const)v34._M_string_length,
                  11090);
                goto LABEL_83;
              }
              proto::ServerPublishCustomDungeonReq::add_tag_list(
                (proto::ServerPublishCustomDungeonReq *const)(v3 + 256),
                *(_DWORD *)(v3 + 48));
              std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
            }
            std::set<unsigned int>::operator=(&dungeon_brief->tag_set, (const std::set<unsigned int> *)(v3 + 176));
            proto::ServerPublishCustomDungeonReq::set_dungeon_guid(
              (proto::ServerPublishCustomDungeonReq *const)(v3 + 256),
              *(_QWORD *)(v3 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            BasicComp = Player::getBasicComp(this->player_);
            v16 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
            proto::ServerPublishCustomDungeonReq::set_creator_nickname(
              (proto::ServerPublishCustomDungeonReq *const)(v3 + 256),
              v16);
            if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->group_id_);
            }
            proto::ServerPublishCustomDungeonReq::set_group_id(
              (proto::ServerPublishCustomDungeonReq *const)(v3 + 256),
              this->group_id_);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Uid = Player::getUid(this->player_);
            proto::ServerPublishCustomDungeonReq::set_uid((proto::ServerPublishCustomDungeonReq *const)(v3 + 256), Uid);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v18 = Player::getBasicComp(this->player_);
            LanguageType = PlayerBasicComp::getLanguageType(v18);
            proto::ServerPublishCustomDungeonReq::set_lang(
              (proto::ServerPublishCustomDungeonReq *const)(v3 + 256),
              LanguageType);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            isPsnPlatform = Player::isPsnPlatform(this->player_);
            proto::ServerPublishCustomDungeonReq::set_is_psn_platform(
              (proto::ServerPublishCustomDungeonReq *const)(v3 + 256),
              isPsnPlatform);
            abstract_proto = proto::ServerPublishCustomDungeonReq::mutable_abstract((proto::ServerPublishCustomDungeonReq *const)(v3 + 256));
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->abstract.first_publish_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&dungeon_brief->abstract.first_publish_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&dungeon_brief->abstract.first_publish_time);
            }
            if ( !dungeon_brief->abstract.first_publish_time )
              dungeon_brief->abstract.first_publish_time = now;
            v21 = (*(_BYTE *)(((unsigned __int64)&dungeon_brief->abstract.last_publish_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)dungeon_brief + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_brief->abstract.last_publish_time >> 3) + 0x7FFF8000));
            if ( (_BYTE)v21 )
              __asan_report_store4(
                &dungeon_brief->abstract.last_publish_time,
                (((_BYTE)dungeon_brief + 108) & 7u) + 3,
                v21);
            dungeon_brief->abstract.last_publish_time = now;
            v22 = abstract_proto;
            CustomDungeonAbstract::toBin(&dungeon_brief->abstract, abstract_proto);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            LOBYTE(v23) = Player::isPsnPlatform(this->player_);
            v24 = v23;
            v25 = *(_BYTE *)(((unsigned __int64)&dungeon_brief->is_psn_platform >> 3) + 0x7FFF8000);
            if ( v25 < 0 )
            {
              LOBYTE(v22) = v25 != 0;
              __asan_report_store1(&dungeon_brief->is_psn_platform, v22, v24);
            }
            dungeon_brief->is_psn_platform = v24;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            if ( sendProtoToActivityService<proto::ServerPublishCustomDungeonReq>(
                   this->player_,
                   (proto::ServerPublishCustomDungeonReq *)(v3 + 256)) )
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                "publishCustomDungeon",
                2099);
              v26 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v50,
                      (const char (*)[35])"send proto to service failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream(&v50);
              proto::PublishCustomDungeonRsp::set_retcode(
                (proto::PublishCustomDungeonRsp *const)v34._M_string_length,
                -1);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->abstract.last_publish_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_brief + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_brief->abstract.last_publish_time >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4(&dungeon_brief->abstract.last_publish_time);
              }
              last_publish_time = dungeon_brief->abstract.last_publish_time;
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->abstract.first_publish_time >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&dungeon_brief->abstract.first_publish_time >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&dungeon_brief->abstract.first_publish_time);
              }
              if ( last_publish_time != dungeon_brief->abstract.first_publish_time )
                PlayerCustomDungeonComp::invalidCustomDungeonCache(this, *(_QWORD *)(v3 + 80));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v28 = Player::getBasicComp(this->player_);
              PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v50, v28);
              StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xDFEu, v34);
              std::string::~string(&v50);
              common::tools::perf::make_shared<proto_log::PlayerLogBodyCustomDungeonPublish>();
              v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonPublish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonPublish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              log_detail_info = proto_log::PlayerLogBodyCustomDungeonPublish::mutable_detail_info(v29);
              if ( *(_BYTE *)(((unsigned __int64)dungeon_brief >> 3) + 0x7FFF8000) )
                __asan_report_load8(dungeon_brief);
              proto_log::CustomDungeonDetailInfo::set_dungeon_guid(log_detail_info, dungeon_brief->dungeon_guid);
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief->dungeon_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&dungeon_brief->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&dungeon_brief->dungeon_id);
              }
              proto_log::CustomDungeonDetailInfo::set_dungeon_id(log_detail_info, dungeon_brief->dungeon_id);
              if ( !std::operator!=<CustomDungeon>(0LL, &thisa->cur_dungeon_ptr_) )
                goto LABEL_77;
              v30 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->cur_dungeon_ptr_);
              if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v30);
              if ( v30->dungeon_guid == *(_QWORD *)(v3 + 80) )
                v31 = 1;
              else
LABEL_77:
                v31 = 0;
              if ( v31 )
              {
                v32 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->cur_dungeon_ptr_);
                PlayerCustomDungeonComp::fillCustomDungeonDetailLog(thisa, v32, log_detail_info);
              }
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->player_);
              player = thisa->player_;
              std::shared_ptr<google::protobuf::Message>::shared_ptr(&v49, 0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCustomDungeonPublish,void>(
                &v48,
                (const std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonPublish> *)(v3 + 144));
              Player::printStatLog(player, &v48, &v49, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v48);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v49);
              proto::PublishCustomDungeonRsp::set_retcode(rsp_0a, 0);
              std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonPublish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonPublish> *const)(v3 + 144));
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
            }
LABEL_83:
            proto::ServerPublishCustomDungeonReq::~ServerPublishCustomDungeonReq((proto::ServerPublishCustomDungeonReq *const)(v3 + 256));
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 176));
        }
        else
        {
          proto::PublishCustomDungeonRsp::set_retcode(
            (proto::PublishCustomDungeonRsp *const)v34._M_string_length,
            11063);
        }
      }
    }
    else
    {
      proto::PublishCustomDungeonRsp::set_retcode((proto::PublishCustomDungeonRsp *const)v34._M_string_length, 11084);
    }
  }
  else
  {
    proto::PublishCustomDungeonRsp::set_retcode((proto::PublishCustomDungeonRsp *const)v34._M_string_length, 11093);
  }
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2125: range 0000000014179C00-0000000014179FB1
void __cdecl PlayerCustomDungeonComp::invalidCustomDungeonCache(
        PlayerCustomDungeonComp *const this,
        uint64_t dungeon_guid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::minet::Packet *v6; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v8; // r14
  GameserverApp *v9; // rax
  uint32_t AppId; // eax
  GameserverService *v11; // r14
  NetworkMgrBase *v12; // r14
  uint32_t v13; // r8d
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 packet_ptr:2129 64 32 11 notify:2127";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::invalidCustomDungeonCache;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  proto::ServerCustomDungeonCacheInvalidNotify::ServerCustomDungeonCacheInvalidNotify((proto::ServerCustomDungeonCacheInvalidNotify *const)(v2 + 64));
  proto::ServerCustomDungeonCacheInvalidNotify::set_dungeon_guid(
    (proto::ServerCustomDungeonCacheInvalidNotify *const)(v2 + 64),
    dungeon_guid);
  common::minet::PacketUtils::createPacket<proto::ServerCustomDungeonCacheInvalidNotify>((const proto::ServerCustomDungeonCacheInvalidNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "invalidCustomDungeonCache",
      2132);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v16,
           (const char (*)[27])"create packet failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v6, Uid);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v9 = Singleton<GameserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v9);
    common::minet::Packet::setSource(v8, 3u, AppId);
    v11 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &p_packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v11, &p_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &p_packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    NetworkMgrBase::sendPacketToTargetService(
      v12,
      (common::minet::PacketPtr)__PAIR128__(13LL, &p_packet_ptr),
      0xFFFFFFFF,
      v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  proto::ServerCustomDungeonCacheInvalidNotify::~ServerCustomDungeonCacheInvalidNotify((proto::ServerCustomDungeonCacheInvalidNotify *const)(v2 + 64));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2142: range 0000000014179FB2-000000001417A3C7
void __cdecl PlayerCustomDungeonComp::serverPublishCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::ServerPublishCustomDungeonRsp *server_rsp,
        proto::PublishCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  google::protobuf::int32 v9; // edx
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::pointer v10; // rax
  uint32_t *p_state; // rax
  PlayerEventComp *EventComp; // r13
  int val; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int Uid; // [rsp+2Ch] [rbp-D4h] BYREF
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self __y; // [rsp+30h] [rbp-D0h] BYREF
  CustomDungeonBrief *dungeon_brief; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<PublishCustomDungeonEvent> __r; // [rsp+40h] [rbp-C0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+80h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 17 dungeon_guid:2150 64 8 9 iter:2151";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::serverPublishCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( proto::ServerPublishCustomDungeonRsp::retcode(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "serverPublishCustomDungeon",
      2145);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v20,
           (const char (*)[48])"internal server publish custom dungeon retcode:");
    val = proto::ServerPublishCustomDungeonRsp::retcode(server_rsp);
    v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v9 = proto::ServerPublishCustomDungeonRsp::retcode(server_rsp);
    proto::PublishCustomDungeonRsp::set_retcode(rsp_0, v9);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = proto::ServerPublishCustomDungeonRsp::dungeon_guid(server_rsp);
    *(std::map<long unsigned int,CustomDungeonBrief>::iterator *)(v3 + 64) = std::map<unsigned long,CustomDungeonBrief>::find(
                                                                               &this->brief_map_,
                                                                               (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v3 + 32));
    __y._M_node = std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
    if ( !std::operator==(
            (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)(v3 + 64),
            &__y) )
    {
      v10 = std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v3 + 64));
      dungeon_brief = &v10->second;
      p_state = &v10->second.state;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_state);
      }
      if ( dungeon_brief->state == 1 )
        dungeon_brief->state = 2;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      common::tools::perf::make_shared<PublishCustomDungeonEvent,unsigned int &>(
        (unsigned int *)&__r,
        &dungeon_brief->dungeon_id);
      std::shared_ptr<BaseEvent>::shared_ptr<PublishCustomDungeonEvent,void>(&p_event_ptr, &__r);
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<PublishCustomDungeonEvent>::~shared_ptr(&__r);
      PlayerCustomDungeonComp::notifyCustomDungeonUpdate(this, dungeon_brief);
      proto::PublishCustomDungeonRsp::set_retcode(rsp_0, 0);
    }
  }
  if ( v21 == (char *)v3 )
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

// Line 2171: range 000000001417A3C8-000000001417A529
void __cdecl PlayerCustomDungeonComp::exitCustomDungeonTry(
        PlayerCustomDungeonComp *const this,
        proto::ExitCustomDungeonTryRsp *rsp_0)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // edx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_type_);
  }
  if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_EDIT )
  {
    v5 = PlayerCustomDungeonComp::exitCustomDungeonTry(this);
    proto::ExitCustomDungeonTryRsp::set_retcode(rsp_0, v5);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "exitCustomDungeonTry",
      2175);
    v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v7, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])" entery_type:");
    common::milog::MiLogStream::operator<<<proto::EnterCustomDungeonType,(proto::EnterCustomDungeonType*)0>(
      v4,
      &this->enter_type_);
    common::milog::MiLogStream::~MiLogStream(&v7);
    proto::ExitCustomDungeonTryRsp::set_retcode(rsp_0, -1);
  }
};

// Line 2183: range 000000001417A52A-000000001417AE2A
int32_t __cdecl PlayerCustomDungeonComp::exitCustomDungeonTry(PlayerCustomDungeonComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rdx
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  char *v8; // rsi
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  Scene *v12; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rdx
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  JsonConfigMgr *p_json_config_mgr; // rcx
  __int64 v18; // rdx
  PlayerSceneComp *SceneComp; // r14
  Scene *v20; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-154h] BYREF
  proto::TryCustomDungeonType old_try_type; // [rsp+20h] [rbp-150h]
  uint32_t dungeon_id; // [rsp+24h] [rbp-14Ch]
  std::tuple_element<0,std::pair<Vector3,Vector3> >::type *born_pos; // [rsp+28h] [rbp-148h]
  std::tuple_element<1,std::pair<Vector3,Vector3> >::type *born_rot; // [rsp+30h] [rbp-140h]
  const data::ConfigCustomLevelRoomSetting *room_config_ptr; // [rsp+38h] [rbp-138h]
  Vector3 v28; // [rsp+44h] [rbp-12Ch] BYREF
  std::shared_ptr<Event> p_event_ptr; // [rsp+50h] [rbp-120h] BYREF
  std::pair<Vector3,Vector3> __in; // [rsp+60h] [rbp-110h] BYREF
  common::milog::MiLogStream v31; // [rsp+80h] [rbp-F0h] BYREF
  TransferReason p_reason; // [rsp+A0h] [rbp-D0h] BYREF
  char v33[144]; // [rsp+E0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 22 dungeon_scene_ptr:2189 64 16 12 evt_ptr:2203";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::exitCustomDungeonTry;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->try_type_);
  }
  old_try_type = this->try_type_;
  PlayerCustomDungeonComp::clearEntity(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->try_type_, v1, &this->try_type_);
  }
  this->try_type_ = TRY_CUSTOM_DUNGEON_NONE;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->need_gen_event_type_, (((_BYTE)this - 116) & 7u) + 3, v5);
  this->need_gen_event_type_ = 0;
  std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 32));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    v6 = 11057;
  }
  else if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "exitCustomDungeonTry",
      2197);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v31, (const char (*)[30])off_2525F020);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v6 = 11057;
  }
  else
  {
    if ( old_try_type == TRY_CUSTOM_DUNGEON_ALL )
    {
      EventUtil::createEvent((data::EventType)(v2 + 64));
      v8 = (char *)(v2 + 64);
      if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 64)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v11 = *(_BYTE *)(((unsigned __int64)&v10->uid >> 3) + 0x7FFF8000);
        if ( v11 != 0 && (char)((((_BYTE)v10 + 60) & 7) + 3) >= v11 )
        {
          LOBYTE(v8) = v11 != 0;
          __asan_report_store4(&v10->uid, v8, v10);
        }
        v10->uid = Uid;
        v12 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        BlockGroupComp = Scene::getBlockGroupComp(v12);
        std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v2 + 64));
        SceneBlockGroupComp::broadcastGroupLuaEvent(BlockGroupComp, &p_event_ptr);
        std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
    }
    v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14);
    v15 = *(_QWORD *)v14->baseclass_0 + 136LL;
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)v14->baseclass_0 + 136LL);
    (*(void (__fastcall **)(std::pair<Vector3,Vector3> *, std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v15)(
      &__in,
      v14);
    born_pos = std::get<0ul,Vector3,Vector3>(&__in);
    born_rot = std::get<1ul,Vector3,Vector3>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->try_room_id_);
    }
    if ( this->try_room_id_ )
    {
      v16 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)&v16->dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v16->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v16 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v16->dungeon_id);
      }
      dungeon_id = v16->dungeon_id;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&p_event_ptr);
      p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_event_ptr)->design_config.json_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->try_room_id_);
      }
      room_config_ptr = JsonConfigMgr::findCustomDungeonRoomConfig(p_json_config_mgr, dungeon_id, this->try_room_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_event_ptr);
      if ( room_config_ptr )
      {
        Vector3::Vector3(&v28, &room_config_ptr->player_init_pos);
        if ( ((unsigned __int8)born_pos & 7) >= *(_BYTE *)(((unsigned __int64)born_pos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)born_pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&born_pos->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)born_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&born_pos->z + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_store_n(born_pos, 12LL);
        }
        *born_pos = v28;
        Vector3::Vector3(&v28, &room_config_ptr->player_init_rot);
        if ( ((unsigned __int8)born_rot & 7) >= *(_BYTE *)(((unsigned __int64)born_rot >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)born_rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&born_rot->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)born_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&born_rot->z + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_store_n(born_rot, 12LL);
        }
        *born_rot = v28;
      }
      v18 = (*(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v18 )
        __asan_report_store4(&this->try_room_id_, (((_BYTE)this - 124) & 7u) + 3, v18);
      this->try_room_id_ = 0;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    memset(&p_reason, 0, sizeof(p_reason));
    TransferReason::TransferReason(&p_reason);
    v20 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlayerSceneComp::jumpToScene(SceneComp, v20, born_pos, born_rot, 0, &p_reason);
    TransferReason::~TransferReason(&p_reason);
    v6 = 0;
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  result = v6;
  if ( v33 == (char *)v2 )
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

// Line 2231: range 000000001417AE2C-000000001417B106
void __cdecl PlayerCustomDungeonComp::notifyOfficialDungeonInfo(PlayerCustomDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-A8h]
  char v9[160]; // [rsp+30h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 11 notify:2232";
  *(_QWORD *)(v1 + 16) = PlayerCustomDungeonComp::notifyOfficialDungeonInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::CustomDungeonOfficialNotify::CustomDungeonOfficialNotify((proto::CustomDungeonOfficialNotify *const)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_type_);
  }
  proto::CustomDungeonOfficialNotify::set_enter_type(
    (proto::CustomDungeonOfficialNotify *const)(v1 + 48),
    this->enter_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->try_type_);
  }
  proto::CustomDungeonOfficialNotify::set_try_type(
    (proto::CustomDungeonOfficialNotify *const)(v1 + 48),
    this->try_type_);
  __for_range = &this->official_black_coin_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->official_black_coin_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->official_black_coin_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::CustomDungeonOfficialNotify::add_official_black_coin_list(
      (proto::CustomDungeonOfficialNotify *const)(v1 + 48),
      *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::CustomDungeonOfficialNotify::~CustomDungeonOfficialNotify((proto::CustomDungeonOfficialNotify *const)(v1 + 48));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2243: range 000000001417B108-000000001417B363
int32_t __cdecl PlayerCustomDungeonComp::init(PlayerCustomDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t result; // eax
  std::weak_ptr<PlayerCustomDungeonComp> *p_this_wtr; // [rsp+10h] [rbp-C0h]
  std::weak_ptr<PlayerCustomDungeonComp> v6; // [rsp+20h] [rbp-B0h] BYREF
  std::enable_shared_from_this<PlayerCompBase> v7; // [rsp+30h] [rbp-A0h] BYREF
  char v8[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 this_ptr:2244 64 16 13 this_wtr:2245";
  *(_QWORD *)(v1 + 16) = PlayerCustomDungeonComp::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<PlayerCompBase>::shared_from_this(&v7);
  std::dynamic_pointer_cast<PlayerCustomDungeonComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)(v1 + 32));
  std::shared_ptr<PlayerCompBase>::~shared_ptr((std::shared_ptr<PlayerCompBase> *const)&v7);
  std::weak_ptr<PlayerCustomDungeonComp>::weak_ptr<PlayerCustomDungeonComp,void>(
    (std::weak_ptr<PlayerCustomDungeonComp> *const)(v1 + 64),
    (const std::shared_ptr<PlayerCustomDungeonComp> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  p_this_wtr = (std::weak_ptr<PlayerCustomDungeonComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerCustomDungeonComp>::weak_ptr(&v6, (const std::weak_ptr<PlayerCustomDungeonComp> *)(v1 + 64));
  PlayerEventComp::registerObserver<PlayerCustomDungeonComp,PostEnterSceneEvent>(
    (PlayerEventComp *const)&v7,
    p_this_wtr,
    (void (*)(PlayerCustomDungeonComp *, const PostEnterSceneEvent *))&v6);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
  std::weak_ptr<PlayerCustomDungeonComp>::~weak_ptr(&v6);
  std::weak_ptr<PlayerCustomDungeonComp>::~weak_ptr((std::weak_ptr<PlayerCustomDungeonComp> *const)(v1 + 64));
  std::shared_ptr<PlayerCustomDungeonComp>::~shared_ptr((std::shared_ptr<PlayerCustomDungeonComp> *const)(v1 + 32));
  result = 0;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 2251: range 000000001417B364-000000001417BA46
std::vector<unsigned int> *__fastcall PlayerCustomDungeonComp::getCurrentCustomDungeonParamVec(
        std::vector<unsigned int> *retstr,
        PlayerCustomDungeonComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r13
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r13
  unsigned int enter_type; // [rsp+2Ch] [rbp-B4h] BYREF
  unsigned int try_type; // [rsp+30h] [rbp-B0h] BYREF
  unsigned int val; // [rsp+34h] [rbp-ACh] BYREF
  CustomDungeon *custom_dungeon; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 19 cur_dungeon_id:2258 64 4 15 dungeon_id:2250";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::getCurrentCustomDungeonParamVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = dungeon_id;
  std::vector<unsigned int>::vector(retstr);
  if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "getCurrentCustomDungeonParamVec",
      2255);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v23, (const char (*)[28])off_2525F120);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    goto LABEL_32;
  }
  v7 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&v7->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v7 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->dungeon_id);
  }
  *(_DWORD *)(v3 + 48) = v7->dungeon_id;
  if ( *(_DWORD *)(v3 + 64) != *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "getCurrentCustomDungeonParamVec",
      2261);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v23, (const char (*)[16])"cur_dungeon_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v9,
            (const char (*)[25])" want to get dungeon_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_type_);
  }
  if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_PLAY )
    goto LABEL_27;
  if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->try_type_);
  }
  if ( this->try_type_ == TRY_CUSTOM_DUNGEON_ALL )
  {
LABEL_27:
    custom_dungeon = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    std::vector<unsigned int>::push_back(retstr, &custom_dungeon->setting.time_limit);
    std::vector<unsigned int>::push_back(retstr, &custom_dungeon->setting.coin_limit);
    std::vector<unsigned int>::push_back(retstr, &custom_dungeon->setting.life_num);
    if ( *(char *)(((unsigned __int64)&custom_dungeon->setting >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&custom_dungeon->setting);
    val = custom_dungeon->setting.is_arrive_finish;
    std::vector<unsigned int>::push_back(retstr, &val);
    if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->setting.is_forbid_skill >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)custom_dungeon + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&custom_dungeon->setting.is_forbid_skill >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(&custom_dungeon->setting.is_forbid_skill);
    }
    val = custom_dungeon->setting.is_forbid_skill;
    std::vector<unsigned int>::push_back(retstr, &val);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "getCurrentCustomDungeonParamVec",
      2266);
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v23, (const char (*)[12])"enter_type:");
    if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->enter_type_);
    }
    enter_type = this->enter_type_;
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &enter_type);
    v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" try_type:");
    if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->try_type_);
    }
    try_type = this->try_type_;
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &try_type);
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
LABEL_32:
  if ( v24 == (char *)v3 )
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
  return retstr;
};

// Line 2279: range 000000001417BA48-000000001417BDEA
_BOOL8 __fastcall PlayerCustomDungeonComp::getCurrentCustomDungeonForbidSkill(
        PlayerCustomDungeonComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r13
  _BOOL8 result; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  bool *p_is_forbid_skill; // rax
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 cur_dungeon_id:2285 64 4 15 dungeon_id:2278";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::getCurrentCustomDungeonForbidSkill;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = dungeon_id;
  if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "getCurrentCustomDungeonForbidSkill",
      2282);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v15, (const char (*)[28])off_2525F120);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0LL;
    goto LABEL_17;
  }
  v7 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&v7->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v7 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->dungeon_id);
  }
  *(_DWORD *)(v2 + 48) = v7->dungeon_id;
  if ( *(_DWORD *)(v2 + 64) != *(_DWORD *)(v2 + 48) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "getCurrentCustomDungeonForbidSkill",
      2288);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"cur_dungeon_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v9,
            (const char (*)[25])" want to get dungeon_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
    v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  v12 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
  p_is_forbid_skill = &v12->setting.is_forbid_skill;
  if ( *(_BYTE *)(((unsigned __int64)p_is_forbid_skill >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_forbid_skill & 7) >= *(_BYTE *)(((unsigned __int64)p_is_forbid_skill >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_forbid_skill);
  }
  result = v12->setting.is_forbid_skill;
LABEL_17:
  if ( v16 == (char *)v2 )
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

// Line 2295: range 000000001417BDEC-000000001417BF5B
void __cdecl PlayerCustomDungeonComp::notifyCustomDungeonUpdate(
        PlayerCustomDungeonComp *const this,
        const CustomDungeonBrief *dungeon_brief)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::CustomDungeonBrief *v5; // rdx
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 11 notify:2296";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::notifyCustomDungeonUpdate;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::CustomDungeonUpdateNotify::CustomDungeonUpdateNotify((proto::CustomDungeonUpdateNotify *const)(v2 + 32));
  v5 = proto::CustomDungeonUpdateNotify::mutable_dungeon_brief((proto::CustomDungeonUpdateNotify *const)(v2 + 32));
  CustomDungeonBrief::toClient(dungeon_brief, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::CustomDungeonUpdateNotify::~CustomDungeonUpdateNotify((proto::CustomDungeonUpdateNotify *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2302: range 000000001417BF5C-000000001417CBF9
void __cdecl PlayerCustomDungeonComp::storeCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::StoreCustomDungeonReq *req,
        proto::StoreCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  CustomDungeonExcelConfigMgr *p_custom_dungeon_config_mgr; // rcx
  std::set<long unsigned int>::size_type v8; // rcx
  char v9; // al
  bool v10; // al
  char v11; // al
  __int64 v12; // rsi
  uint32_t last_store_time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  uint32_t v20; // ecx
  char v21; // dl
  __int64 v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonStore,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonStore,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  Player *player; // r14
  std::string v30; // [rsp+0h] [rbp-1A0h]
  proto::StoreCustomDungeonRsp *rsp_0a; // [rsp+8h] [rbp-198h]
  PlayerCustomDungeonComp *thisa; // [rsp+18h] [rbp-188h]
  bool is_cancel_store; // [rsp+23h] [rbp-17Dh]
  unsigned int val; // [rsp+24h] [rbp-17Ch] BYREF
  const data::CustomLevelGroupConfig *dungeon_group_config_ptr; // [rsp+28h] [rbp-178h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-170h] BYREF
  std::shared_ptr<google::protobuf::Message> v37; // [rsp+40h] [rbp-160h] BYREF
  common::milog::MiLogStream v38; // [rsp+50h] [rbp-150h] BYREF
  char v39[304]; // [rsp+70h] [rbp-130h] BYREF

  *(&v30._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v30._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v30._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 11 holder:2383 64 4 8 now:2347 80 8 17 dungeon_guid:2313 112 16 15 config_ptr:2305 144 16"
                        " 12 log_ptr:2384 176 40 11 notify:2357";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::storeCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 112));
    if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v3 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "storeCustomDungeon",
        2308);
      v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v38, (const char (*)[24])off_2525C9E0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v38);
      proto::StoreCustomDungeonRsp::set_retcode((proto::StoreCustomDungeonRsp *const)v30._M_string_length, -1);
    }
    else
    {
      *(_QWORD *)(v3 + 80) = proto::StoreCustomDungeonReq::dungeon_guid(req);
      is_cancel_store = proto::StoreCustomDungeonReq::is_cancel_store(req);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v37);
      p_custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.custom_dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->group_id_);
      }
      dungeon_group_config_ptr = data::CustomLevelExcelConfigMgrBase::findCustomLevelGroupConfig(
                                   p_custom_dungeon_config_mgr,
                                   this->group_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v37);
      if ( dungeon_group_config_ptr )
      {
        if ( is_cancel_store )
          goto LABEL_21;
        v8 = std::set<unsigned long>::size(&this->store_dungeon_set_);
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_group_config_ptr->store_max_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_group_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_group_config_ptr->store_max_count >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_group_config_ptr->store_max_count);
        }
        if ( v8 >= dungeon_group_config_ptr->store_max_count )
          v9 = 1;
        else
LABEL_21:
          v9 = 0;
        if ( v9 )
        {
          proto::StoreCustomDungeonRsp::set_retcode((proto::StoreCustomDungeonRsp *const)v30._M_string_length, 11068);
        }
        else
        {
          v10 = !is_cancel_store
             && std::set<unsigned long>::count(
                  &this->store_dungeon_set_,
                  (const std::set<long unsigned int>::key_type *)(v3 + 80));
          if ( v10
            || (!is_cancel_store
             || std::set<unsigned long>::count(
                  &this->store_dungeon_set_,
                  (const std::set<long unsigned int>::key_type *)(v3 + 80))
              ? (v11 = 0)
              : (v11 = 1),
                v11) )
          {
            proto::StoreCustomDungeonRsp::set_retcode((proto::StoreCustomDungeonRsp *const)v30._M_string_length, 11069);
          }
          else if ( PlayerCustomDungeonComp::isMyDungeon(this, *(_QWORD *)(v3 + 80)) )
          {
            proto::StoreCustomDungeonRsp::set_retcode((proto::StoreCustomDungeonRsp *const)v30._M_string_length, 11070);
          }
          else
          {
            *(_DWORD *)(v3 + 64) = common::tools::TimeUtils::getNow();
            v12 = (((_BYTE)this + 68) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&this->last_store_time_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_store_time_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->last_store_time_);
            }
            last_store_time = this->last_store_time_;
            v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
            if ( *(_BYTE *)(((unsigned __int64)&v14->custom_dungeon_min_social_interval >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v14->custom_dungeon_min_social_interval >> 3) + 0x7FFF8000) <= 3 )
            {
              v14 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v14->custom_dungeon_min_social_interval);
            }
            if ( last_store_time + v14->custom_dungeon_min_social_interval <= *(_DWORD *)(v3 + 64) )
            {
              v20 = *(_DWORD *)(v3 + 64);
              v21 = *(_BYTE *)(((unsigned __int64)&this->last_store_time_ >> 3) + 0x7FFF8000);
              LOBYTE(v12) = v21 != 0;
              v22 = (v21 != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= v21);
              if ( (_BYTE)v22 )
                __asan_report_store4(&this->last_store_time_, v12, v22);
              this->last_store_time_ = v20;
              proto::ServerUpdateCustomDungeonSocialNotify::ServerUpdateCustomDungeonSocialNotify((proto::ServerUpdateCustomDungeonSocialNotify *const)(v3 + 176));
              proto::ServerUpdateCustomDungeonSocialNotify::set_dungeon_guid(
                (proto::ServerUpdateCustomDungeonSocialNotify *const)(v3 + 176),
                *(_QWORD *)(v3 + 80));
              proto::ServerUpdateCustomDungeonSocialNotify::set_update_type(
                (proto::ServerUpdateCustomDungeonSocialNotify *const)(v3 + 176),
                CUSTOM_DUNGEON_SOCIAL_UPDATE_STORE);
              proto::ServerUpdateCustomDungeonSocialNotify::set_is_cancel_store(
                (proto::ServerUpdateCustomDungeonSocialNotify *const)(v3 + 176),
                is_cancel_store);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              if ( sendProtoToActivityService<proto::ServerUpdateCustomDungeonSocialNotify>(
                     this->player_,
                     (proto::ServerUpdateCustomDungeonSocialNotify *)(v3 + 176)) )
              {
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                  "storeCustomDungeon",
                  2363);
                v23 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v38,
                        (const char (*)[36])"send to multi failed, dungeon_guid:");
                v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v23,
                        (const unsigned __int64 *)(v3 + 80));
                v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
                common::milog::MiLogStream::~MiLogStream(&v38);
                proto::StoreCustomDungeonRsp::set_retcode((proto::StoreCustomDungeonRsp *const)v30._M_string_length, -1);
              }
              else
              {
                if ( !is_cancel_store )
                {
                  std::set<unsigned long>::insert(
                    &this->store_dungeon_set_,
                    (const std::set<long unsigned int>::value_type *)(v3 + 80));
                  if ( *(_BYTE *)(((unsigned __int64)&this->last_got_store_time_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->last_got_store_time_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(&this->last_got_store_time_, v3 + 80, &this->last_got_store_time_);
                  }
                  this->last_got_store_time_ = 0;
                  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::clear(&this->cached_store_dungeon_map_);
                }
                else
                {
                  std::set<unsigned long>::erase(
                    &this->store_dungeon_set_,
                    (const std::set<long unsigned int>::key_type *)(v3 + 80));
                  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::erase(
                    &this->cached_store_dungeon_map_,
                    (const std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::key_type *)(v3 + 80));
                }
                PlayerCustomDungeonComp::tryUpdateCacheSocial(
                  this,
                  (const proto::ServerUpdateCustomDungeonSocialNotify *)(v3 + 176));
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                BasicComp = Player::getBasicComp(this->player_);
                PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v38, BasicComp);
                StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xE01u, v30);
                std::string::~string(&v38);
                common::tools::perf::make_shared<proto_log::PlayerLogBodyCustomDungeonStore>();
                v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonStore,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonStore,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                proto_log::PlayerLogBodyCustomDungeonStore::set_dungeon_guid(v27, *(_QWORD *)(v3 + 80));
                v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonStore,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonStore,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                proto_log::PlayerLogBodyCustomDungeonStore::set_is_cancel_store(v28, is_cancel_store);
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisa->player_);
                player = thisa->player_;
                std::shared_ptr<google::protobuf::Message>::shared_ptr(&v37, 0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCustomDungeonStore,void>(
                  &p_body_ptr,
                  (const std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonStore> *)(v3 + 144));
                Player::printStatLog(player, &p_body_ptr, &v37, 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v37);
                proto::StoreCustomDungeonRsp::set_retcode(rsp_0a, 0);
                std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonStore>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonStore> *const)(v3 + 144));
                StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
              }
              proto::ServerUpdateCustomDungeonSocialNotify::~ServerUpdateCustomDungeonSocialNotify((proto::ServerUpdateCustomDungeonSocialNotify *const)(v3 + 176));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                "storeCustomDungeon",
                2351);
              v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v38,
                      (const char (*)[47])"request store too frequent, last_request_time:");
              v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v15,
                      &this->last_request_recommend_time_);
              v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" now:");
              v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v17,
                      (const unsigned int *)(v3 + 64));
              v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
              common::milog::MiLogStream::~MiLogStream(&v38);
              proto::StoreCustomDungeonRsp::set_retcode(
                (proto::StoreCustomDungeonRsp *const)v30._M_string_length,
                11092);
            }
          }
        }
      }
      else
      {
        proto::StoreCustomDungeonRsp::set_retcode((proto::StoreCustomDungeonRsp *const)v30._M_string_length, 11086);
      }
    }
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 112));
  }
  else
  {
    proto::StoreCustomDungeonRsp::set_retcode((proto::StoreCustomDungeonRsp *const)v30._M_string_length, 11093);
  }
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2393: range 000000001417CBFA-000000001417D202
void __cdecl PlayerCustomDungeonComp::getStoreCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::GetStoreCustomDungeonReq *req,
        proto::GetStoreCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r14
  uint32_t last_got_store_time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  common::milog::MiLogStream *v10; // r14
  int32_t v11; // edx
  unsigned int val; // [rsp+20h] [rbp-D0h] BYREF
  uint32_t now; // [rsp+24h] [rbp-CCh]
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData> *__for_range; // [rsp+38h] [rbp-B8h]
  const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> *v18; // [rsp+40h] [rbp-B0h]
  std::tuple_element<0,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *dungeon_guid; // [rsp+48h] [rbp-A8h]
  std::tuple_element<1,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *brief_redis; // [rsp+50h] [rbp-A0h]
  proto::OtherCustomDungeonBrief *brief_proto; // [rsp+58h] [rbp-98h]
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-90h] BYREF
  char v23[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 config_ptr:2403";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::getStoreCustomDungeon;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    if ( std::set<unsigned long>::empty(&this->store_dungeon_set_) )
    {
      proto::GetStoreCustomDungeonRsp::set_retcode(rsp_0, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, rsp_0);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 32));
      if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "getStoreCustomDungeon",
          2406);
        v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v22, (const char (*)[24])off_2525C9E0);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
        common::milog::MiLogStream::~MiLogStream(&v22);
        proto::GetStoreCustomDungeonRsp::set_retcode(rsp_0, -1);
      }
      else
      {
        now = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->last_got_store_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->last_got_store_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->last_got_store_time_);
        }
        last_got_store_time = this->last_got_store_time_;
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v8->custom_dungeon_store_cache_timeout >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v8 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->custom_dungeon_store_cache_timeout >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&v8->custom_dungeon_store_cache_timeout);
        }
        if ( now <= last_got_store_time + v8->custom_dungeon_store_cache_timeout
          && !std::map<unsigned long,proto::CustomDungeonBriefRedisData>::empty(&this->cached_store_dungeon_map_) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "getStoreCustomDungeon",
            2415);
          v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v22, (const char (*)[28])off_2525F4C0);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          common::milog::MiLogStream::~MiLogStream(&v22);
          __for_range = &this->cached_store_dungeon_map_;
          __for_begin._M_node = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::begin(&this->cached_store_dungeon_map_)._M_node;
          __for_end._M_node = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::end(__for_range)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v18 = std::_Rb_tree_iterator<std::pair<unsigned long const,proto::CustomDungeonBriefRedisData>>::operator*(&__for_begin);
            dungeon_guid = std::get<0ul,unsigned long const,proto::CustomDungeonBriefRedisData>(v18);
            brief_redis = (std::tuple_element<1,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *)std::get<1ul,unsigned long const,proto::CustomDungeonBriefRedisData>(v18);
            brief_proto = proto::GetStoreCustomDungeonRsp::add_custom_dungeon_list(rsp_0);
            PlayerCustomDungeonComp::fillOtherCustomDungeonBrief(this, brief_redis, brief_proto);
            std::_Rb_tree_iterator<std::pair<unsigned long const,proto::CustomDungeonBriefRedisData>>::operator++(&__for_begin);
          }
          proto::GetStoreCustomDungeonRsp::set_retcode(rsp_0, 0);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::sendProto(this->player_, rsp_0);
        }
        else
        {
          v11 = PlayerCustomDungeonComp::requestDungeonBrief(
                  this,
                  &this->store_dungeon_set_,
                  CUSTOM_DUNGEON_BRIEF_GET_STORE);
          proto::GetStoreCustomDungeonRsp::set_retcode(rsp_0, v11);
        }
      }
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
    }
  }
  else
  {
    proto::GetStoreCustomDungeonRsp::set_retcode(rsp_0, 11093);
  }
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2430: range 000000001417D204-000000001417D6B1
void __cdecl PlayerCustomDungeonComp::serverGetCustomDungeonBrief(
        PlayerCustomDungeonComp *const this,
        const proto::ServerGetCustomDungeonBriefRsp *server_rsp,
        proto::GetStoreCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::int32 v6; // edx
  __int64 Now; // rsi
  proto::CustomDungeonBriefRedisData *v8; // rax
  std::_Rb_tree_const_iterator<long unsigned int>::reference v9; // rax
  std::set<long unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-120h] BYREF
  std::set<long unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-118h] BYREF
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-110h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range; // [rsp+38h] [rbp-108h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-100h]
  const unsigned __int64 *dungeon_guid; // [rsp+48h] [rbp-F8h]
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData> *__for_range_0; // [rsp+50h] [rbp-F0h]
  std::set<long unsigned int> *__for_range_1; // [rsp+58h] [rbp-E8h]
  const proto::CustomDungeonBriefRedisData *dungeon_brief; // [rsp+60h] [rbp-E0h]
  proto::OtherCustomDungeonBrief *brief_proto; // [rsp+68h] [rbp-D8h]
  char v22[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 8 17 dungeon_guid:2454 80 48 21 request_guid_set:2436";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::serverGetCustomDungeonBrief;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  if ( proto::ServerGetCustomDungeonBriefRsp::retcode(server_rsp) )
  {
    v6 = proto::ServerGetCustomDungeonBriefRsp::retcode(server_rsp);
    proto::GetStoreCustomDungeonRsp::set_retcode(rsp_0, v6);
  }
  else
  {
    std::set<unsigned long>::set((std::set<long unsigned int> *const)(v3 + 80));
    __for_range = proto::ServerGetCustomDungeonBriefRsp::dungeon_guid_list(server_rsp);
    __for_begin = google::protobuf::RepeatedField<unsigned long>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned long>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      dungeon_guid = __for_begin;
      std::set<unsigned long>::insert((std::set<long unsigned int> *const)(v3 + 80), __for_begin++);
    }
    std::map<unsigned long,proto::CustomDungeonBriefRedisData>::clear(&this->cached_store_dungeon_map_);
    Now = (unsigned int)common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_got_store_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_got_store_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_got_store_time_, Now, &this->last_got_store_time_);
    }
    this->last_got_store_time_ = Now;
    __for_range_0 = proto::ServerGetCustomDungeonBriefRsp::dungeon_brief_list(server_rsp);
    *(google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::const_iterator *)(v3 + 48) = google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::begin(__for_range_0);
    __for_begin_0._M_node = (std::_Rb_tree_const_iterator<long unsigned int>::_Base_ptr)google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::CustomDungeonBriefRedisData> *const)(v3 + 48),
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::CustomDungeonBriefRedisData>::iterator *)&__for_begin_0) )
    {
      dungeon_brief = google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::CustomDungeonBriefRedisData> *const)(v3 + 48));
      brief_proto = proto::GetStoreCustomDungeonRsp::add_custom_dungeon_list(rsp_0);
      PlayerCustomDungeonComp::fillOtherCustomDungeonBrief(this, dungeon_brief, brief_proto);
      __for_end_0._M_node = (std::_Rb_tree_const_iterator<long unsigned int>::_Base_ptr)proto::CustomDungeonBriefRedisData::dungeon_guid(dungeon_brief);
      std::set<unsigned long>::erase(
        (std::set<long unsigned int> *const)(v3 + 80),
        (const std::set<long unsigned int>::key_type *)&__for_end_0);
      __for_end_0._M_node = (std::_Rb_tree_const_iterator<long unsigned int>::_Base_ptr)proto::CustomDungeonBriefRedisData::dungeon_guid(dungeon_brief);
      v8 = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::operator[](
             &this->cached_store_dungeon_map_,
             (std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::key_type *)&__for_end_0);
      proto::CustomDungeonBriefRedisData::operator=(v8, dungeon_brief);
      PlayerCustomDungeonComp::updateCacheMap(this, &this->cached_recommend_dungeon_map_, dungeon_brief);
      google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::CustomDungeonBriefRedisData> *const)(v3 + 48));
    }
    __for_range_1 = (std::set<long unsigned int> *)(v3 + 80);
    __for_begin_0._M_node = std::set<unsigned long>::begin((const std::set<long unsigned int> *const)(v3 + 80))._M_node;
    __for_end_0._M_node = std::set<unsigned long>::end(__for_range_1)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v9 = std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v9);
      *(_QWORD *)(v3 + 48) = *v9;
      std::set<unsigned long>::erase(
        &this->store_dungeon_set_,
        (const std::set<long unsigned int>::key_type *)(v3 + 48));
      std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin_0);
    }
    proto::GetStoreCustomDungeonRsp::set_retcode(rsp_0, 0);
    std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v3 + 80));
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2462: range 000000001417D6B2-000000001417DBBD
void __cdecl PlayerCustomDungeonComp::serverGetCustomDungeonBrief(
        PlayerCustomDungeonComp *const this,
        const proto::ServerGetCustomDungeonBriefRsp *server_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  unsigned int val; // [rsp+14h] [rbp-15Ch] BYREF
  unsigned int Uid; // [rsp+18h] [rbp-158h] BYREF
  proto::CustomDungeonBriefGetType get_type; // [rsp+1Ch] [rbp-154h]
  char v11[336]; // [rsp+20h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 32 8 rsp:2484 112 48 8 rsp:2474 192 56 8 rsp:2479";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::serverGetCustomDungeonBrief;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  get_type = proto::ServerGetCustomDungeonBriefRsp::get_type(server_rsp);
  if ( get_type == CUSTOM_DUNGEON_BRIEF_GET_GM_SCORE )
  {
    PlayerCustomDungeonComp::onServerGetDungeonScore(this, server_rsp);
    goto LABEL_22;
  }
  if ( get_type > CUSTOM_DUNGEON_BRIEF_GET_GM_SCORE )
  {
LABEL_19:
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 48),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "serverGetCustomDungeonBrief",
      2494);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)(v2 + 48),
           (const char (*)[18])"unknown get_type:");
    val = get_type;
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 48));
    goto LABEL_22;
  }
  switch ( get_type )
  {
    case CUSTOM_DUNGEON_BRIEF_GET_SEARCH:
      proto::SearchCustomDungeonRsp::SearchCustomDungeonRsp((proto::SearchCustomDungeonRsp *const)(v2 + 48));
      proto::SearchCustomDungeonRsp::set_retcode((proto::SearchCustomDungeonRsp *const)(v2 + 48), -1);
      PlayerCustomDungeonComp::serverGetCustomDungeonBrief(this, server_rsp, (proto::SearchCustomDungeonRsp *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
      proto::SearchCustomDungeonRsp::~SearchCustomDungeonRsp((proto::SearchCustomDungeonRsp *const)(v2 + 48));
      break;
    case CUSTOM_DUNGEON_BRIEF_GET_MY:
      proto::GetCustomDungeonRsp::GetCustomDungeonRsp((proto::GetCustomDungeonRsp *const)(v2 + 192));
      proto::GetCustomDungeonRsp::set_retcode((proto::GetCustomDungeonRsp *const)(v2 + 192), -1);
      PlayerCustomDungeonComp::serverGetCustomDungeonBrief(this, server_rsp, (proto::GetCustomDungeonRsp *)(v2 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 192));
      proto::GetCustomDungeonRsp::~GetCustomDungeonRsp((proto::GetCustomDungeonRsp *const)(v2 + 192));
      break;
    case CUSTOM_DUNGEON_BRIEF_GET_STORE:
      proto::GetStoreCustomDungeonRsp::GetStoreCustomDungeonRsp((proto::GetStoreCustomDungeonRsp *const)(v2 + 112));
      proto::GetStoreCustomDungeonRsp::set_retcode((proto::GetStoreCustomDungeonRsp *const)(v2 + 112), -1);
      PlayerCustomDungeonComp::serverGetCustomDungeonBrief(
        this,
        server_rsp,
        (proto::GetStoreCustomDungeonRsp *)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 112));
      proto::GetStoreCustomDungeonRsp::~GetStoreCustomDungeonRsp((proto::GetStoreCustomDungeonRsp *const)(v2 + 112));
      break;
    default:
      goto LABEL_19;
  }
LABEL_22:
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 2501: range 000000001417DBBE-000000001417E2B7
void __cdecl PlayerCustomDungeonComp::serverGetCustomDungeonBrief(
        PlayerCustomDungeonComp *const this,
        const proto::ServerGetCustomDungeonBriefRsp *server_rsp,
        proto::GetCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::int32 v6; // edx
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::pointer v7; // rax
  CustomDungeonSocial *p_cached_social; // r14
  const proto::CustomDungeonSocialRedisData *v9; // rax
  std::_Rb_tree_const_iterator<long unsigned int>::reference v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::pointer v14; // rax
  uint32_t *p_state; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 Now; // rsi
  unsigned int val; // [rsp+2Ch] [rbp-174h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::const_iterator __for_begin_0; // [rsp+30h] [rbp-170h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::const_iterator __for_end_0; // [rsp+38h] [rbp-168h] BYREF
  std::map<long unsigned int,CustomDungeonBrief>::key_type __x; // [rsp+40h] [rbp-160h] BYREF
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-158h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range; // [rsp+50h] [rbp-150h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-148h]
  const unsigned __int64 *dungeon_guid; // [rsp+60h] [rbp-140h]
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData> *__for_range_0; // [rsp+68h] [rbp-138h]
  std::set<long unsigned int> *__for_range_1; // [rsp+70h] [rbp-130h]
  CustomDungeonBrief *dungeon_brief_0; // [rsp+78h] [rbp-128h]
  const proto::CustomDungeonBriefRedisData *dungeon_brief; // [rsp+80h] [rbp-120h]
  CustomDungeonBrief *brief; // [rsp+88h] [rbp-118h]
  common::milog::MiLogStream v34; // [rsp+90h] [rbp-110h] BYREF
  char v35[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 8 17 dungeon_guid:2525 80 8 9 iter:2527 112 48 21 request_guid_set:2507";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::serverGetCustomDungeonBrief;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  if ( proto::ServerGetCustomDungeonBriefRsp::retcode(server_rsp) )
  {
    v6 = proto::ServerGetCustomDungeonBriefRsp::retcode(server_rsp);
    proto::GetCustomDungeonRsp::set_retcode(rsp_0, v6);
  }
  else
  {
    std::set<unsigned long>::set((std::set<long unsigned int> *const)(v3 + 112));
    __for_range = proto::ServerGetCustomDungeonBriefRsp::dungeon_guid_list(server_rsp);
    __for_begin = google::protobuf::RepeatedField<unsigned long>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned long>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      dungeon_guid = __for_begin;
      std::set<unsigned long>::insert((std::set<long unsigned int> *const)(v3 + 112), __for_begin++);
    }
    __for_range_0 = proto::ServerGetCustomDungeonBriefRsp::dungeon_brief_list(server_rsp);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      dungeon_brief = google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator*(&__for_begin_0);
      __x = proto::CustomDungeonBriefRedisData::dungeon_guid(dungeon_brief);
      *(std::map<long unsigned int,CustomDungeonBrief>::iterator *)(v3 + 80) = std::map<unsigned long,CustomDungeonBrief>::find(
                                                                                 &this->brief_map_,
                                                                                 &__x);
      __x = (std::map<long unsigned int,CustomDungeonBrief>::key_type)std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)(v3 + 80),
              (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)&__x) )
      {
        v7 = std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v3 + 80));
        brief = &v7->second;
        p_cached_social = &v7->second.cached_social;
        v9 = proto::CustomDungeonBriefRedisData::social(dungeon_brief);
        CustomDungeonSocial::fromRedis(p_cached_social, v9);
        __x = proto::CustomDungeonBriefRedisData::dungeon_guid(dungeon_brief);
        std::set<unsigned long>::erase((std::set<long unsigned int> *const)(v3 + 112), &__x);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator++(&__for_begin_0);
    }
    __for_range_1 = (std::set<long unsigned int> *)(v3 + 112);
    __for_begin_0.it_ = (void *const *)std::set<unsigned long>::begin((const std::set<long unsigned int> *const)(v3 + 112))._M_node;
    __for_end_0.it_ = (void *const *)std::set<unsigned long>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)&__for_begin_0,
              (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)&__for_end_0) )
    {
      v10 = std::_Rb_tree_const_iterator<unsigned long>::operator*((const std::_Rb_tree_const_iterator<long unsigned int> *const)&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      *(_QWORD *)(v3 + 48) = *v10;
      *(std::map<long unsigned int,CustomDungeonBrief>::iterator *)(v3 + 80) = std::map<unsigned long,CustomDungeonBrief>::find(
                                                                                 &this->brief_map_,
                                                                                 (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v3 + 48));
      __x = (std::map<long unsigned int,CustomDungeonBrief>::key_type)std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)(v3 + 80),
              (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)&__x) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "serverGetCustomDungeonBrief",
          2532);
        v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v34, (const char (*)[14])"dungeon_guid:");
        v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v11,
                (const unsigned __int64 *)(v3 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v12,
                (const char (*)[28])" may be down by admin, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v34);
        v14 = std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v3 + 80));
        dungeon_brief_0 = &v14->second;
        p_state = &v14->second.state;
        v16 = ((unsigned __int8)p_state & 7u) + 3;
        v17 = (*(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000));
        if ( (_BYTE)v17 )
          __asan_report_store4(p_state, v16, v17);
        dungeon_brief_0->state = 0;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_brief_0->abstract.first_publish_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_brief_0->abstract.first_publish_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(
            &dungeon_brief_0->abstract.first_publish_time,
            v16,
            &dungeon_brief_0->abstract.first_publish_time);
        }
        dungeon_brief_0->abstract.first_publish_time = 0;
        v18 = (*(_BYTE *)(((unsigned __int64)&dungeon_brief_0->abstract.last_publish_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)dungeon_brief_0 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_brief_0->abstract.last_publish_time >> 3) + 0x7FFF8000));
        if ( (_BYTE)v18 )
          __asan_report_store4(
            &dungeon_brief_0->abstract.last_publish_time,
            (((_BYTE)dungeon_brief_0 + 108) & 7u) + 3,
            v18);
        dungeon_brief_0->abstract.last_publish_time = 0;
      }
      std::_Rb_tree_const_iterator<unsigned long>::operator++((std::_Rb_tree_const_iterator<long unsigned int> *const)&__for_begin_0);
    }
    Now = (unsigned int)common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_got_my_publish_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_got_my_publish_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_got_my_publish_time_, Now, &this->last_got_my_publish_time_);
    }
    this->last_got_my_publish_time_ = Now;
    PlayerCustomDungeonComp::fillGetCustomDungeon(this, rsp_0);
    std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v3 + 112));
  }
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2543: range 000000001417E2B8-000000001417E44F
void __cdecl PlayerCustomDungeonComp::fillGetCustomDungeon(
        PlayerCustomDungeonComp *const this,
        proto::GetCustomDungeonRsp *rsp_0)
{
  proto::CustomDungeonBanInfo *v2; // rax
  proto::CustomDungeonBanInfo *v3; // rcx
  uint32_t now; // [rsp+14h] [rbp-3Ch]
  std::map<long unsigned int,CustomDungeonBrief>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<long unsigned int,CustomDungeonBrief>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  std::map<long unsigned int,CustomDungeonBrief> *__for_range; // [rsp+28h] [rbp-28h]
  std::pair<long unsigned int const,CustomDungeonBrief> *__in; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,std::pair<long unsigned int const,CustomDungeonBrief> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,std::pair<long unsigned int const,CustomDungeonBrief> >::type *brief; // [rsp+40h] [rbp-10h]
  proto::CustomDungeonBrief *proto_brief; // [rsp+48h] [rbp-8h]

  __for_range = &this->brief_map_;
  __for_begin._M_node = std::map<unsigned long,CustomDungeonBrief>::begin(&this->brief_map_)._M_node;
  __for_end._M_node = std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,CustomDungeonBrief>(__in);
    brief = std::get<1ul,unsigned long const,CustomDungeonBrief>(__in);
    proto_brief = proto::GetCustomDungeonRsp::add_brief_list(rsp_0);
    CustomDungeonBrief::toClient(brief, proto_brief);
    std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator++(&__for_begin);
  }
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ban_expire_time_);
  }
  if ( now < this->ban_expire_time_ )
  {
    v2 = proto::GetCustomDungeonRsp::mutable_ban_info(rsp_0);
    proto::CustomDungeonBanInfo::set_ban_type(v2, CUSTOM_DUNGEON_BAN_TYPE_LAYOUT);
  }
  v3 = proto::GetCustomDungeonRsp::mutable_ban_info(rsp_0);
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ban_expire_time_);
  }
  proto::CustomDungeonBanInfo::set_expire_time(v3, this->ban_expire_time_);
  proto::GetCustomDungeonRsp::set_retcode(rsp_0, 0);
};

// Line 2560: range 000000001417E450-000000001417E5CB
void __cdecl PlayerCustomDungeonComp::notifyAllDataToClient(PlayerCustomDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 56 8 rsp:2561";
  *(_QWORD *)(v1 + 16) = PlayerCustomDungeonComp::notifyAllDataToClient;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::GetCustomDungeonRsp::GetCustomDungeonRsp((proto::GetCustomDungeonRsp *const)(v1 + 32));
  PlayerCustomDungeonComp::fillGetCustomDungeon(this, (proto::GetCustomDungeonRsp *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::GetCustomDungeonRsp::~GetCustomDungeonRsp((proto::GetCustomDungeonRsp *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2567: range 000000001417E5CC-000000001417E997
void __cdecl PlayerCustomDungeonComp::getCustomDungeon(
        PlayerCustomDungeonComp *const this,
        proto::GetCustomDungeonRsp *rsp_0)
{
  std::set<long unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  int32_t v6; // edx
  uint32_t now; // [rsp+18h] [rbp-E8h]
  std::map<long unsigned int,CustomDungeonBrief>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::map<long unsigned int,CustomDungeonBrief>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::map<long unsigned int,CustomDungeonBrief> *__for_range; // [rsp+30h] [rbp-D0h]
  std::pair<long unsigned int const,CustomDungeonBrief> *__in; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,std::pair<long unsigned int const,CustomDungeonBrief> >::type *_; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,std::pair<long unsigned int const,CustomDungeonBrief> >::type *brief; // [rsp+48h] [rbp-B8h]
  char v14[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (std::set<long unsigned int> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<long unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 23 published_guid_set:2571";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerCustomDungeonComp::getCustomDungeon;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    std::set<unsigned long>::set(v2 + 1);
    __for_range = &this->brief_map_;
    __for_begin._M_node = std::map<unsigned long,CustomDungeonBrief>::begin(&this->brief_map_)._M_node;
    __for_end._M_node = std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned long const,CustomDungeonBrief>(__in);
      brief = std::get<1ul,unsigned long const,CustomDungeonBrief>(__in);
      if ( *(_BYTE *)(((unsigned __int64)&brief->abstract.first_publish_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&brief->abstract.first_publish_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&brief->abstract.first_publish_time);
      }
      if ( brief->abstract.first_publish_time )
        std::set<unsigned long>::insert(v2 + 1, &brief->dungeon_guid);
      std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator++(&__for_begin);
    }
    now = common::tools::TimeUtils::getNow();
    if ( std::set<unsigned long>::empty(v2 + 1) )
      goto LABEL_19;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_got_my_publish_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_got_my_publish_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_got_my_publish_time_);
    }
    if ( now <= this->last_got_my_publish_time_ + 120 )
LABEL_19:
      v5 = 1;
    else
      v5 = 0;
    if ( v5 )
    {
      PlayerCustomDungeonComp::fillGetCustomDungeon(this, rsp_0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, rsp_0);
    }
    else
    {
      v6 = PlayerCustomDungeonComp::requestDungeonBrief(this, v2 + 1, CUSTOM_DUNGEON_BRIEF_GET_MY);
      proto::GetCustomDungeonRsp::set_retcode(rsp_0, v6);
    }
    std::set<unsigned long>::~set(v2 + 1);
  }
  else
  {
    proto::GetCustomDungeonRsp::set_retcode(rsp_0, 11093);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2596: range 000000001417E998-000000001417EDDD
void __cdecl PlayerCustomDungeonComp::fillOtherCustomDungeonBrief(
        PlayerCustomDungeonComp *const this,
        const proto::CustomDungeonBriefRedisData *brief_redis,
        proto::OtherCustomDungeonBrief *brief_proto)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint64 v6; // rdx
  google::protobuf::uint32 v7; // edx
  const proto::CustomDungeonSettingBin *v8; // rax
  proto::CustomDungeonSetting *v9; // rax
  const proto::CustomDungeonAbstractBin *v10; // rax
  proto::CustomDungeonAbstract *v11; // rax
  const proto::CustomDungeonSocialRedisData *v12; // rax
  proto::CustomDungeonSocial *v13; // rax
  uint64_t v14; // rax
  uint64_t v15; // rdx
  google::protobuf::uint32 BattleRecord; // edx
  proto::SocialDetail *v17; // r14
  const std::string *v18; // rax
  google::protobuf::RepeatedField<unsigned int> *v19; // r14
  const google::protobuf::RepeatedField<unsigned int> *v20; // rax
  bool is_psn_platform; // dl
  std::set<long unsigned int>::key_type __x; // [rsp+28h] [rbp-158h] BYREF
  char v24[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 16 11 social:2605 80 64 13 abstract:2602 176 72 12 setting:2599";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::fillOtherCustomDungeonBrief;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  v6 = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_redis);
  proto::OtherCustomDungeonBrief::set_dungeon_guid(brief_proto, v6);
  v7 = proto::CustomDungeonBriefRedisData::dungeon_id(brief_redis);
  proto::OtherCustomDungeonBrief::set_dungeon_id(brief_proto, v7);
  CustomDungeonSetting::CustomDungeonSetting((CustomDungeonSetting *const)(v3 + 176));
  v8 = proto::CustomDungeonBriefRedisData::setting(brief_redis);
  CustomDungeonSetting::fromBin((CustomDungeonSetting *const)(v3 + 176), v8);
  v9 = proto::OtherCustomDungeonBrief::mutable_setting(brief_proto);
  CustomDungeonSetting::toClient((const CustomDungeonSetting *const)(v3 + 176), v9);
  CustomDungeonAbstract::CustomDungeonAbstract((CustomDungeonAbstract *const)(v3 + 80));
  v10 = proto::CustomDungeonBriefRedisData::abstract(brief_redis);
  CustomDungeonAbstract::fromBin((CustomDungeonAbstract *const)(v3 + 80), v10);
  v11 = proto::OtherCustomDungeonBrief::mutable_abstract(brief_proto);
  CustomDungeonAbstract::toClient((const CustomDungeonAbstract *const)(v3 + 80), v11);
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 60) = 0;
  v12 = proto::CustomDungeonBriefRedisData::social(brief_redis);
  CustomDungeonSocial::fromRedis((CustomDungeonSocial *const)(v3 + 48), v12);
  v13 = proto::OtherCustomDungeonBrief::mutable_social(brief_proto);
  CustomDungeonSocial::toClient((const CustomDungeonSocial *const)(v3 + 48), v13);
  __x = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_redis);
  if ( std::set<unsigned long>::count(&this->store_dungeon_set_, &__x) )
    proto::OtherCustomDungeonBrief::set_is_stored(brief_proto, 1);
  v14 = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_redis);
  if ( CustomDungeonExcelConfigMgr::isAdventureDungeon(v14) )
    proto::OtherCustomDungeonBrief::set_is_adventure_dungeon(brief_proto, 1);
  v15 = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_redis);
  BattleRecord = PlayerCustomDungeonComp::getBattleRecord(this, v15);
  proto::OtherCustomDungeonBrief::set_battle_min_cost_time(brief_proto, BattleRecord);
  v17 = proto::OtherCustomDungeonBrief::mutable_creator_detail(brief_proto);
  v18 = proto::CustomDungeonBriefRedisData::creator_nickname[abi:cxx11](brief_redis);
  proto::SocialDetail::set_nickname(v17, v18);
  v19 = proto::OtherCustomDungeonBrief::mutable_tag_list(brief_proto);
  v20 = proto::CustomDungeonBriefRedisData::tag_list(brief_redis);
  google::protobuf::RepeatedField<unsigned int>::CopyFrom(v19, v20);
  is_psn_platform = proto::CustomDungeonBriefRedisData::is_psn_platform(brief_redis);
  proto::OtherCustomDungeonBrief::set_is_psn_platform(brief_proto, is_psn_platform);
  CustomDungeonAbstract::~CustomDungeonAbstract((CustomDungeonAbstract *const)(v3 + 80));
  CustomDungeonSetting::~CustomDungeonSetting((CustomDungeonSetting *const)(v3 + 176));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 2623: range 000000001417EDDE-000000001417FA7D
void __cdecl PlayerCustomDungeonComp::getRecommendCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::GetRecommendCustomDungeonReq *req,
        proto::GetRecommendCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::array<unsigned int,6>::const_reference v8; // rax
  _DWORD *v9; // rdx
  uint32_t last_got_recommend_time; // r14d
  std::array<unsigned int,6>::const_reference v11; // rax
  _DWORD *v12; // rdx
  char v13; // al
  common::milog::MiLogStream *v14; // r14
  uint32_t v15; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v18; // r14
  __int64 v19; // rsi
  uint32_t last_request_recommend_time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  uint32_t v27; // ecx
  char v28; // dl
  __int64 v29; // rdx
  unsigned __int64 *v30; // rax
  bool is_refresh; // [rsp+2Bh] [rbp-155h]
  unsigned int val; // [rsp+2Ch] [rbp-154h] BYREF
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  const std::array<unsigned int,6> *recommend_params_arr; // [rsp+40h] [rbp-140h]
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData> *__for_range; // [rsp+48h] [rbp-138h]
  const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> *v38; // [rsp+50h] [rbp-130h]
  std::tuple_element<0,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *dungeon_guid; // [rsp+58h] [rbp-128h]
  std::tuple_element<1,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *brief_redis; // [rsp+60h] [rbp-120h]
  proto::OtherCustomDungeonBrief *brief_proto; // [rsp+68h] [rbp-118h]
  std::set<long unsigned int> *__for_range_0; // [rsp+70h] [rbp-110h]
  unsigned __int64 dungeon_guid_0; // [rsp+78h] [rbp-108h]
  std::shared_ptr<Config> v44; // [rsp+80h] [rbp-100h] BYREF
  common::milog::MiLogStream v45; // [rsp+90h] [rbp-F0h] BYREF
  char v46[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 8 now:2634 48 16 15 config_ptr:2626 80 48 15 server_req:2679";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::getRecommendCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( !this->group_id_ )
  {
    proto::GetRecommendCustomDungeonRsp::set_retcode(rsp_0, 11093);
    goto LABEL_75;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 48));
  if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "getRecommendCustomDungeon",
      2629);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v45, (const char (*)[24])off_2525C9E0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    proto::GetRecommendCustomDungeonRsp::set_retcode(rsp_0, -1);
  }
  else
  {
    *(_DWORD *)(v3 + 32) = common::tools::TimeUtils::getNow();
    is_refresh = proto::GetRecommendCustomDungeonReq::is_refresh(req);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v44);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44);
    recommend_params_arr = ConstValueExcelConfigMgr::getCustomDungeonRecommendParams(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v44);
    if ( std::array<unsigned int,6ul>::size(recommend_params_arr) <= 5 )
      goto LABEL_22;
    v8 = std::array<unsigned int,6ul>::operator[](recommend_params_arr, 5uLL);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( !*v9 )
      goto LABEL_22;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_got_recommend_time_);
    }
    last_got_recommend_time = this->last_got_recommend_time_;
    v11 = std::array<unsigned int,6ul>::operator[](recommend_params_arr, 5uLL);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    if ( last_got_recommend_time + *v12 < *(_DWORD *)(v3 + 32) )
      v13 = 1;
    else
LABEL_22:
      v13 = 0;
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "getRecommendCustomDungeon",
        2641);
      v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v45,
              (const char (*)[35])"force refresh recommend data, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v45);
      is_refresh = 1;
    }
    if ( is_refresh )
    {
      std::set<unsigned long>::clear(&this->last_recommend_set_);
      std::map<unsigned long,proto::CustomDungeonBriefRedisData>::clear(&this->cached_recommend_dungeon_map_);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_got_recommend_time_);
      }
      v15 = this->last_got_recommend_time_;
      v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&v16->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v16->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) <= 3 )
      {
        v16 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v16->custom_dungeon_cache_timeout);
      }
      if ( v15 + v16->custom_dungeon_cache_timeout >= *(_DWORD *)(v3 + 32)
        && !std::map<unsigned long,proto::CustomDungeonBriefRedisData>::empty(&this->cached_recommend_dungeon_map_) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "getRecommendCustomDungeon",
          2653);
        v18 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v45, (const char (*)[32])off_2525F860);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v45);
        __for_range = &this->cached_recommend_dungeon_map_;
        __for_begin._M_node = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::begin(&this->cached_recommend_dungeon_map_)._M_node;
        __for_end._M_node = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v38 = std::_Rb_tree_iterator<std::pair<unsigned long const,proto::CustomDungeonBriefRedisData>>::operator*(&__for_begin);
          dungeon_guid = std::get<0ul,unsigned long const,proto::CustomDungeonBriefRedisData>(v38);
          brief_redis = (std::tuple_element<1,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *)std::get<1ul,unsigned long const,proto::CustomDungeonBriefRedisData>(v38);
          brief_proto = proto::GetRecommendCustomDungeonRsp::add_custom_dungeon_list(rsp_0);
          PlayerCustomDungeonComp::fillOtherCustomDungeonBrief(this, brief_redis, brief_proto);
          std::_Rb_tree_iterator<std::pair<unsigned long const,proto::CustomDungeonBriefRedisData>>::operator++(&__for_begin);
        }
        proto::GetRecommendCustomDungeonRsp::set_retcode(rsp_0, 0);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::sendProto(this->player_, rsp_0);
        goto LABEL_74;
      }
      std::map<unsigned long,proto::CustomDungeonBriefRedisData>::clear(&this->cached_recommend_dungeon_map_);
    }
    v19 = (((_BYTE)this + 52) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_request_recommend_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_request_recommend_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_request_recommend_time_);
    }
    last_request_recommend_time = this->last_request_recommend_time_;
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&v21->custom_dungeon_min_recommend_interval >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v21 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->custom_dungeon_min_recommend_interval >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&v21->custom_dungeon_min_recommend_interval);
    }
    if ( last_request_recommend_time + v21->custom_dungeon_min_recommend_interval <= *(_DWORD *)(v3 + 32) )
    {
      v27 = *(_DWORD *)(v3 + 32);
      v28 = *(_BYTE *)(((unsigned __int64)&this->last_request_recommend_time_ >> 3) + 0x7FFF8000);
      LOBYTE(v19) = v28 != 0;
      v29 = (v28 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v28);
      if ( (_BYTE)v29 )
        __asan_report_store4(&this->last_request_recommend_time_, v19, v29);
      this->last_request_recommend_time_ = v27;
      proto::ServerGetRecommendCustomDungeonReq::ServerGetRecommendCustomDungeonReq((proto::ServerGetRecommendCustomDungeonReq *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->group_id_);
      }
      proto::ServerGetRecommendCustomDungeonReq::set_group_id(
        (proto::ServerGetRecommendCustomDungeonReq *const)(v3 + 80),
        this->group_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_got_recommend_time_);
      }
      if ( this->last_got_recommend_time_ < *(_DWORD *)(v3 + 32) )
        proto::ServerGetRecommendCustomDungeonReq::set_recommend_interval(
          (proto::ServerGetRecommendCustomDungeonReq *const)(v3 + 80),
          *(_DWORD *)(v3 + 32) - this->last_got_recommend_time_);
      __for_range_0 = &this->last_recommend_set_;
      __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::_Base_ptr)std::set<unsigned long>::begin(&this->last_recommend_set_)._M_node;
      __for_end._M_node = (std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::_Base_ptr)std::set<unsigned long>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)&__for_end) )
      {
        v30 = (unsigned __int64 *)std::_Rb_tree_const_iterator<unsigned long>::operator*((const std::_Rb_tree_const_iterator<long unsigned int> *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v30);
        dungeon_guid_0 = *v30;
        proto::ServerGetRecommendCustomDungeonReq::add_dungeon_guid_list(
          (proto::ServerGetRecommendCustomDungeonReq *const)(v3 + 80),
          dungeon_guid_0);
        std::_Rb_tree_const_iterator<unsigned long>::operator++((std::_Rb_tree_const_iterator<long unsigned int> *const)&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      if ( sendProtoToActivityService<proto::ServerGetRecommendCustomDungeonReq>(
             this->player_,
             (proto::ServerGetRecommendCustomDungeonReq *)(v3 + 80)) )
      {
        proto::GetRecommendCustomDungeonRsp::set_retcode(rsp_0, 11058);
      }
      else
      {
        proto::GetRecommendCustomDungeonRsp::set_retcode(rsp_0, 0);
      }
      proto::ServerGetRecommendCustomDungeonReq::~ServerGetRecommendCustomDungeonReq((proto::ServerGetRecommendCustomDungeonReq *const)(v3 + 80));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "getRecommendCustomDungeon",
        2672);
      v22 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v45,
              (const char (*)[51])"request recommend too frequent, last_request_time:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v22,
              &this->last_request_recommend_time_);
      v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" now:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 32));
      v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
      common::milog::MiLogStream::~MiLogStream(&v45);
      proto::GetRecommendCustomDungeonRsp::set_retcode(rsp_0, 11092);
    }
  }
LABEL_74:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 48));
LABEL_75:
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2698: range 000000001417FA7E-000000001417FC61
void __cdecl PlayerCustomDungeonComp::serverGetRecommendCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::ServerGetRecommendCustomDungeonRsp *server_rsp,
        proto::GetRecommendCustomDungeonRsp *rsp_0)
{
  google::protobuf::int32 v3; // edx
  proto::CustomDungeonBriefRedisData *v4; // rax
  __int64 Now; // rsi
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  std::set<long unsigned int>::value_type __x; // [rsp+30h] [rbp-30h] BYREF
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData> *__for_range; // [rsp+38h] [rbp-28h]
  const proto::CustomDungeonBriefRedisData *brief_redis; // [rsp+40h] [rbp-20h]
  proto::OtherCustomDungeonBrief *brief_proto; // [rsp+48h] [rbp-18h]

  if ( proto::ServerGetRecommendCustomDungeonRsp::retcode(server_rsp) )
  {
    v3 = proto::ServerGetRecommendCustomDungeonRsp::retcode(server_rsp);
    proto::GetRecommendCustomDungeonRsp::set_retcode(rsp_0, v3);
  }
  else
  {
    std::set<unsigned long>::clear(&this->last_recommend_set_);
    std::map<unsigned long,proto::CustomDungeonBriefRedisData>::clear(&this->cached_recommend_dungeon_map_);
    __for_range = proto::ServerGetRecommendCustomDungeonRsp::dungeon_brief_list(server_rsp);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      brief_redis = google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator*(&__for_begin);
      brief_proto = proto::GetRecommendCustomDungeonRsp::add_custom_dungeon_list(rsp_0);
      PlayerCustomDungeonComp::fillOtherCustomDungeonBrief(this, brief_redis, brief_proto);
      __x = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_redis);
      std::set<unsigned long>::insert(&this->last_recommend_set_, &__x);
      __x = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_redis);
      v4 = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::operator[](
             &this->cached_recommend_dungeon_map_,
             &__x);
      proto::CustomDungeonBriefRedisData::operator=(v4, brief_redis);
      PlayerCustomDungeonComp::updateCacheMap(this, &this->cached_store_dungeon_map_, brief_redis);
      google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator++(&__for_begin);
    }
    Now = (unsigned int)common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_got_recommend_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_got_recommend_time_, Now, &this->last_got_recommend_time_);
    }
    this->last_got_recommend_time_ = Now;
    proto::GetRecommendCustomDungeonRsp::set_retcode(rsp_0, 0);
  }
};

// Line 2719: range 000000001417FC62-00000000141806D3
void __cdecl PlayerCustomDungeonComp::likeCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::LikeCustomDungeonReq *req,
        proto::LikeCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint64_t dungeon_guid; // rsi
  uint32_t last_like_time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  uint32_t v16; // ecx
  char v17; // al
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  char v19; // cl
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  bool is_cancel_like; // al
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonLike,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonLike,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonLike,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  bool v28; // al
  Player *player; // r14
  std::string v30; // [rsp+0h] [rbp-180h]
  proto::LikeCustomDungeonRsp *rsp_0a; // [rsp+8h] [rbp-178h]
  const proto::LikeCustomDungeonReq *reqa; // [rsp+10h] [rbp-170h]
  PlayerCustomDungeonComp *thisa; // [rsp+18h] [rbp-168h]
  bool is_like; // [rsp+2Bh] [rbp-155h]
  unsigned int val; // [rsp+2Ch] [rbp-154h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v38; // [rsp+50h] [rbp-130h] BYREF
  char v39[272]; // [rsp+70h] [rbp-110h] BYREF

  *(&v30._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v30._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v30._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 11 holder:2771 64 4 8 now:2746 80 16 15 config_ptr:2722 112 16 12 log_ptr:2772 144 40 11 notify:2757";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::likeCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 80));
    if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "likeCustomDungeon",
        2725);
      v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v38, (const char (*)[24])off_2525C9E0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v38);
      proto::LikeCustomDungeonRsp::set_retcode((proto::LikeCustomDungeonRsp *const)v30._M_string_length, -1);
    }
    else if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
    {
      proto::LikeCustomDungeonRsp::set_retcode((proto::LikeCustomDungeonRsp *const)v30._M_string_length, 11057);
    }
    else
    {
      v7 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7);
      dungeon_guid = v7->dungeon_guid;
      if ( PlayerCustomDungeonComp::isMyDungeon(this, v7->dungeon_guid) )
      {
        proto::LikeCustomDungeonRsp::set_retcode((proto::LikeCustomDungeonRsp *const)v30._M_string_length, 11072);
      }
      else
      {
        is_like = !proto::LikeCustomDungeonReq::is_cancel_like((const proto::LikeCustomDungeonReq *const)v30._anon_0._M_allocated_capacity);
        *(_DWORD *)(v3 + 64) = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->last_like_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->last_like_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->last_like_time_);
        }
        last_like_time = this->last_like_time_;
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v10->custom_dungeon_min_social_interval >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v10->custom_dungeon_min_social_interval >> 3) + 0x7FFF8000) <= 3 )
        {
          v10 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->custom_dungeon_min_social_interval);
        }
        if ( last_like_time + v10->custom_dungeon_min_social_interval <= *(_DWORD *)(v3 + 64) )
        {
          v16 = *(_DWORD *)(v3 + 64);
          v17 = *(_BYTE *)(((unsigned __int64)&this->last_like_time_ >> 3) + 0x7FFF8000);
          if ( v17 != 0 && v17 <= 3 )
          {
            LOBYTE(dungeon_guid) = v17 != 0;
            __asan_report_store4(&this->last_like_time_, dungeon_guid, &this->last_like_time_);
          }
          this->last_like_time_ = v16;
          v18 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
          v19 = *(_BYTE *)(((unsigned __int64)&v18->is_liked >> 3) + 0x7FFF8000);
          if ( v19 != 0 && (((unsigned __int8)v18 - 115) & 7) >= v19 )
          {
            LOBYTE(dungeon_guid) = v19 != 0;
            __asan_report_store1(&v18->is_liked, dungeon_guid, v18);
          }
          v18->is_liked = is_like;
          proto::ServerUpdateCustomDungeonSocialNotify::ServerUpdateCustomDungeonSocialNotify((proto::ServerUpdateCustomDungeonSocialNotify *const)(v3 + 144));
          v20 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v20);
          proto::ServerUpdateCustomDungeonSocialNotify::set_dungeon_guid(
            (proto::ServerUpdateCustomDungeonSocialNotify *const)(v3 + 144),
            v20->dungeon_guid);
          proto::ServerUpdateCustomDungeonSocialNotify::set_update_type(
            (proto::ServerUpdateCustomDungeonSocialNotify *const)(v3 + 144),
            CUSTOM_DUNGEON_SOCIAL_UPDATE_LIKE);
          is_cancel_like = proto::LikeCustomDungeonReq::is_cancel_like((const proto::LikeCustomDungeonReq *const)v30._anon_0._M_allocated_capacity);
          proto::ServerUpdateCustomDungeonSocialNotify::set_is_cancel_like(
            (proto::ServerUpdateCustomDungeonSocialNotify *const)(v3 + 144),
            is_cancel_like);
          if ( *(char *)(((unsigned __int64)&this->is_ever_liked_ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&this->is_ever_liked_);
          proto::ServerUpdateCustomDungeonSocialNotify::set_is_ever_liked(
            (proto::ServerUpdateCustomDungeonSocialNotify *const)(v3 + 144),
            this->is_ever_liked_);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          if ( sendProtoToActivityService<proto::ServerUpdateCustomDungeonSocialNotify>(
                 this->player_,
                 (proto::ServerUpdateCustomDungeonSocialNotify *)(v3 + 144)) )
          {
            proto::LikeCustomDungeonRsp::set_retcode((proto::LikeCustomDungeonRsp *const)v30._M_string_length, 11058);
          }
          else
          {
            PlayerCustomDungeonComp::tryUpdateCacheSocial(
              this,
              (const proto::ServerUpdateCustomDungeonSocialNotify *)(v3 + 144));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            BasicComp = Player::getBasicComp(this->player_);
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v38, BasicComp);
            StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xE00u, v30);
            std::string::~string(&v38);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyCustomDungeonLike>();
            v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonLike,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonLike,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
            v24 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->cur_dungeon_ptr_);
            if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v24);
            proto_log::PlayerLogBodyCustomDungeonLike::set_dungeon_guid(v23, v24->dungeon_guid);
            v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonLike,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonLike,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
            v26 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->cur_dungeon_ptr_);
            if ( *(_BYTE *)(((unsigned __int64)&v26->dungeon_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v26->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v26 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v26->dungeon_id);
            }
            proto_log::PlayerLogBodyCustomDungeonLike::set_dungeon_id(v25, v26->dungeon_id);
            v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonLike,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonLike,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
            v28 = proto::LikeCustomDungeonReq::is_cancel_like(reqa);
            proto_log::PlayerLogBodyCustomDungeonLike::set_is_cancel_like(v27, v28);
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            player = thisa->player_;
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCustomDungeonLike,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonLike> *)(v3 + 112));
            Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
            proto::LikeCustomDungeonRsp::set_retcode(rsp_0a, 0);
            std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonLike>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonLike> *const)(v3 + 112));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
          }
          proto::ServerUpdateCustomDungeonSocialNotify::~ServerUpdateCustomDungeonSocialNotify((proto::ServerUpdateCustomDungeonSocialNotify *const)(v3 + 144));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "likeCustomDungeon",
            2750);
          v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v38,
                  (const char (*)[46])"request like too frequent, last_request_time:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  &this->last_request_recommend_time_);
          v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" now:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 64));
          v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::~MiLogStream(&v38);
          proto::LikeCustomDungeonRsp::set_retcode((proto::LikeCustomDungeonRsp *const)v30._M_string_length, 11092);
        }
      }
    }
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
  }
  else
  {
    proto::LikeCustomDungeonRsp::set_retcode((proto::LikeCustomDungeonRsp *const)v30._M_string_length, 11093);
  }
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 2782: range 00000000141806D4-0000000014180984
__int64 __fastcall PlayerCustomDungeonComp::setCustomDungeonStateByGm(
        PlayerCustomDungeonComp *const this,
        uint64_t dungeon_guid,
        uint32_t state)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::pointer v10; // rax
  uint32_t *p_state; // rax
  __int64 v12; // rdx
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self __y; // [rsp+30h] [rbp-B0h] BYREF
  CustomDungeonBrief *dungeon_brief; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 iter:2783 64 8 17 dungeon_guid:2781";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::setCustomDungeonStateByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(_QWORD *)(v3 + 64) = dungeon_guid;
  *(std::map<long unsigned int,CustomDungeonBrief>::iterator *)(v3 + 32) = std::map<unsigned long,CustomDungeonBrief>::find(
                                                                             &this->brief_map_,
                                                                             (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v3 + 64));
  __y._M_node = std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)(v3 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "setCustomDungeonStateByGm",
      2786);
    v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v17, (const char (*)[17])"no dungeon_guid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v6,
           (const unsigned __int64 *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v3 + 32));
    dungeon_brief = &v10->second;
    p_state = &v10->second.state;
    v12 = (*(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000));
    if ( (_BYTE)v12 )
      __asan_report_store4(p_state, ((unsigned __int8)p_state & 7u) + 3, v12);
    dungeon_brief->state = state;
    result = 0LL;
  }
  if ( v18 == (char *)v3 )
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

// Line 2795: range 0000000014180986-0000000014180E8D
__int64 __fastcall PlayerCustomDungeonComp::publishCustomDungeonByGm(
        PlayerCustomDungeonComp *const this,
        uint64_t dungeon_guid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int v8; // r14d
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::pointer v9; // rax
  uint32_t *p_state; // rax
  __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  __int64 result; // rax
  int v18; // [rsp+18h] [rbp-168h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-164h] BYREF
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self __y; // [rsp+20h] [rbp-160h] BYREF
  CustomDungeonBrief *dungeon_brief; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-150h] BYREF
  char v23[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 9 iter:2796 64 8 17 dungeon_guid:2794 96 24 8 rsp:2806 160 56 8 req:2804";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::publishCustomDungeonByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  *(_QWORD *)(v2 + 64) = dungeon_guid;
  *(std::map<long unsigned int,CustomDungeonBrief>::iterator *)(v2 + 32) = std::map<unsigned long,CustomDungeonBrief>::find(
                                                                             &this->brief_map_,
                                                                             (const std::map<long unsigned int,CustomDungeonBrief>::key_type *)(v2 + 64));
  __y._M_node = std::map<unsigned long,CustomDungeonBrief>::end(&this->brief_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> >::_Self *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "publishCustomDungeonByGm",
      2799);
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v22, (const char (*)[17])"no dungeon_guid:");
    v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v5,
           (const unsigned __int64 *)(v2 + 64));
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v8 = -1;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBrief> > *const)(v2 + 32));
    dungeon_brief = &v9->second;
    p_state = &v9->second.state;
    v11 = (*(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000));
    if ( (_BYTE)v11 )
      __asan_report_store4(p_state, ((unsigned __int8)p_state & 7u) + 3, v11);
    dungeon_brief->state = 1;
    proto::PublishCustomDungeonReq::PublishCustomDungeonReq((proto::PublishCustomDungeonReq *const)(v2 + 160));
    proto::PublishCustomDungeonReq::set_dungeon_guid(
      (proto::PublishCustomDungeonReq *const)(v2 + 160),
      *(_QWORD *)(v2 + 64));
    proto::PublishCustomDungeonRsp::PublishCustomDungeonRsp((proto::PublishCustomDungeonRsp *const)(v2 + 96));
    proto::PublishCustomDungeonRsp::set_retcode((proto::PublishCustomDungeonRsp *const)(v2 + 96), -1);
    PlayerCustomDungeonComp::publishCustomDungeon(
      this,
      (const proto::PublishCustomDungeonReq *)(v2 + 160),
      (proto::PublishCustomDungeonRsp *)(v2 + 96));
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "publishCustomDungeonByGm",
      2809);
    v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v22,
            (const char (*)[22])"publish dungeon_guid:");
    v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v12,
            (const unsigned __int64 *)(v2 + 64));
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])off_2525FBC0);
    v18 = proto::PublishCustomDungeonRsp::retcode((const proto::PublishCustomDungeonRsp *const)(v2 + 96));
    v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, &v18);
    v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v8 = proto::PublishCustomDungeonRsp::retcode((const proto::PublishCustomDungeonRsp *const)(v2 + 96));
    proto::PublishCustomDungeonRsp::~PublishCustomDungeonRsp((proto::PublishCustomDungeonRsp *const)(v2 + 96));
    proto::PublishCustomDungeonReq::~PublishCustomDungeonReq((proto::PublishCustomDungeonReq *const)(v2 + 160));
  }
  result = v8;
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2814: range 0000000014180E8E-00000000141811F5
void __cdecl PlayerCustomDungeonComp::searchCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::SearchCustomDungeonReq *req,
        proto::SearchCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // r13
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  int32_t v11; // edx
  std::less<long unsigned int> __comp; // [rsp+22h] [rbp-CEh] BYREF
  std::allocator<long unsigned int> __a; // [rsp+23h] [rbp-CDh] BYREF
  unsigned int val; // [rsp+24h] [rbp-CCh] BYREF
  std::initializer_list<long unsigned int> __l; // [rsp+28h] [rbp-C8h] BYREF
  std::set<long unsigned int> dungeon_guid_set; // [rsp+50h] [rbp-A0h] BYREF
  char v18[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 17 dungeon_guid:2817";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::searchCustomDungeon;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    *(_QWORD *)(v3 + 32) = 0LL;
    v6 = proto::SearchCustomDungeonReq::dungeon_code[abi:cxx11](req);
    if ( common::tools::StringUtils::strToNum<unsigned long>(v6, (unsigned __int64 *)(v3 + 32), 1) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__l._M_len,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "searchCustomDungeon",
        2820);
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             (common::milog::MiLogStream *const)&__l._M_len,
             (const char (*)[22])"strToNum failed, str:");
      v8 = proto::SearchCustomDungeonReq::dungeon_code[abi:cxx11](req);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, v8);
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__l._M_len);
      proto::SearchCustomDungeonRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      __l._M_array = *(std::initializer_list<long unsigned int>::iterator *)(v3 + 32);
      std::allocator<unsigned long>::allocator(&__a);
      std::set<unsigned long>::set(
        &dungeon_guid_set,
        (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__l),
        &__comp,
        &__a);
      v11 = PlayerCustomDungeonComp::requestDungeonBrief(this, &dungeon_guid_set, CUSTOM_DUNGEON_BRIEF_GET_SEARCH);
      proto::SearchCustomDungeonRsp::set_retcode(rsp_0, v11);
      std::set<unsigned long>::~set(&dungeon_guid_set);
      std::allocator<unsigned long>::~allocator(&__a);
    }
  }
  else
  {
    proto::SearchCustomDungeonRsp::set_retcode(rsp_0, 11093);
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2828: range 00000000141811F6-00000000141814C7
void __cdecl PlayerCustomDungeonComp::serverGetCustomDungeonBrief(
        PlayerCustomDungeonComp *const this,
        const proto::ServerGetCustomDungeonBriefRsp *server_rsp,
        proto::SearchCustomDungeonRsp *rsp_0)
{
  google::protobuf::int32 v3; // edx
  CustomDungeonExcelConfigMgr *p_custom_dungeon_config_mgr; // rbx
  uint32_t v5; // ecx
  bool v6; // bl
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  proto::OtherCustomDungeonBrief *v14; // rdx
  unsigned int v16; // [rsp+28h] [rbp-58h] BYREF
  unsigned int Uid; // [rsp+2Ch] [rbp-54h] BYREF
  unsigned __int64 val; // [rsp+30h] [rbp-50h] BYREF
  const proto::CustomDungeonBriefRedisData *brief_redis; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-30h] BYREF

  if ( proto::ServerGetCustomDungeonBriefRsp::retcode(server_rsp) )
  {
    v3 = proto::ServerGetCustomDungeonBriefRsp::retcode(server_rsp);
    proto::SearchCustomDungeonRsp::set_retcode(rsp_0, v3);
  }
  else if ( proto::ServerGetCustomDungeonBriefRsp::dungeon_brief_list_size(server_rsp) )
  {
    brief_redis = proto::ServerGetCustomDungeonBriefRsp::dungeon_brief_list(server_rsp, 0);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    p_custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.custom_dungeon_config_mgr;
    v5 = proto::CustomDungeonBriefRedisData::dungeon_id(brief_redis);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->group_id_);
    }
    v6 = !CustomDungeonExcelConfigMgr::isGroupContainsDungeon(p_custom_dungeon_config_mgr, this->group_id_, v5);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "serverGetCustomDungeonBrief",
        2842);
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v21,
             (const char (*)[21])"search dungeon_guid:");
      val = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_redis);
      v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" dungeon_id:");
      v16 = proto::CustomDungeonBriefRedisData::dungeon_id(brief_redis);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &v16);
      v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v10,
              (const char (*)[18])" not in group_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->group_id_);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v21);
      proto::SearchCustomDungeonRsp::set_retcode(rsp_0, 11073);
    }
    else
    {
      v14 = proto::SearchCustomDungeonRsp::mutable_custom_dungeon_brief(rsp_0);
      PlayerCustomDungeonComp::fillOtherCustomDungeonBrief(this, brief_redis, v14);
      proto::SearchCustomDungeonRsp::set_retcode(rsp_0, 0);
    }
  }
  else
  {
    proto::SearchCustomDungeonRsp::set_retcode(rsp_0, 11073);
  }
};

// Line 2851: range 00000000141814C8-0000000014181785
void __cdecl PlayerCustomDungeonComp::onLeaveDungeon(PlayerCustomDungeonComp *const this, DungeonScene *dungeon_scene)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5; // r14
  std::shared_ptr<DungeonScene> *p_b; // rsi
  bool v7; // r15
  __int64 v8; // rdx
  std::shared_ptr<DungeonScene> __b; // [rsp+20h] [rbp-80h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 26 cur_dungeon_scene_ptr:2856";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::onLeaveDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( DungeonScene::getDungeonType(dungeon_scene) == DUNGEON_UGC )
  {
    std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 32));
    v5 = 0;
    p_b = (std::shared_ptr<DungeonScene> *)(v2 + 32);
    v7 = 1;
    if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
    {
      toThisPtr<DungeonScene>((DungeonScene *)&__b);
      v5 = 1;
      p_b = &__b;
      if ( !std::operator!=<DungeonScene,DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), &__b) )
        v7 = 0;
    }
    if ( v5 )
      std::shared_ptr<DungeonScene>::~shared_ptr(&__b);
    if ( !v7 )
    {
      std::map<unsigned int,CustomDungeonEntity>::clear(&this->entity_wtr_map_);
      if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->try_type_, p_b, &this->try_type_);
      }
      this->try_type_ = TRY_CUSTOM_DUNGEON_NONE;
      v8 = (*(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v8 )
        __asan_report_store4(&this->need_gen_event_type_, (((_BYTE)this - 116) & 7u) + 3, v8);
      this->need_gen_event_type_ = 0;
      std::shared_ptr<CustomDungeon>::shared_ptr((std::shared_ptr<CustomDungeon> *const)&__b, 0LL);
      std::shared_ptr<CustomDungeon>::operator=(&this->cur_dungeon_ptr_, (std::shared_ptr<CustomDungeon> *)&__b);
      std::shared_ptr<CustomDungeon>::~shared_ptr((std::shared_ptr<CustomDungeon> *const)&__b);
      std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::reset(&this->cur_dungeon_scene_wtr_);
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2869: range 0000000014181786-0000000014181C0F
void __cdecl PlayerCustomDungeonComp::onEnterScene(
        PlayerCustomDungeonComp *const this,
        ScenePtr *p_scene_ptr,
        bool is_reenter)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // al
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t dungeon_id; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  proto::CustomDungeon *v11; // rax
  unsigned int *v12; // rax
  google::protobuf::uint32 *v13; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  char v18[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 22 dungeon_scene_ptr:2880 64 64 11 notify:2891";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::onEnterScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862724] = -202116109;
  v6 = std::operator==<Scene>(0LL, p_scene_ptr) || !is_reenter;
  if ( !v6 && !std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 32));
    if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 32)) )
    {
      v7 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)&v7->dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v7->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v7 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->dungeon_id);
      }
      dungeon_id = v7->dungeon_id;
      v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( dungeon_id == DungeonScene::getDungeonId(v9) )
      {
        proto::CustomDungeonRecoverNotify::CustomDungeonRecoverNotify((proto::CustomDungeonRecoverNotify *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->enter_type_);
        }
        proto::CustomDungeonRecoverNotify::set_enter_type(
          (proto::CustomDungeonRecoverNotify *const)(v3 + 64),
          this->enter_type_);
        if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->try_type_);
        }
        proto::CustomDungeonRecoverNotify::set_try_type(
          (proto::CustomDungeonRecoverNotify *const)(v3 + 64),
          this->try_type_);
        v10 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
        v11 = proto::CustomDungeonRecoverNotify::mutable_custom_dungeon((proto::CustomDungeonRecoverNotify *const)(v3 + 64));
        CustomDungeon::toClient(v10, v11);
        __for_range = &this->official_black_coin_set_;
        __for_begin._M_node = std::set<unsigned int>::begin(&this->official_black_coin_set_)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(&this->official_black_coin_set_)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v12 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          proto::CustomDungeonRecoverNotify::add_official_black_coin_list(
            (proto::CustomDungeonRecoverNotify *const)(v3 + 64),
            *v13);
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 64));
        proto::CustomDungeonRecoverNotify::~CustomDungeonRecoverNotify((proto::CustomDungeonRecoverNotify *const)(v3 + 64));
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 32));
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2903: range 0000000014181C10-0000000014181C6F
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerCustomDungeonComp::openCustomDungeon(PlayerCustomDungeonComp *const this, uint32_t group_id)
{
  uint32_t *p_group_id; // rdx

  PlayerCustomDungeonComp::clear(this);
  p_group_id = &this->group_id_;
  if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id_, *(_QWORD *)&group_id, p_group_id);
  }
  this->group_id_ = group_id;
};

// Line 2909: range 0000000014181C70-0000000014181D49
void __cdecl PlayerCustomDungeonComp::clear(PlayerCustomDungeonComp *const this)
{
  __int64 v1; // rsi
  uint32_t *p_group_id; // rdx

  std::map<unsigned long,CustomDungeonBrief>::clear(&this->brief_map_);
  std::set<unsigned long>::clear(&this->store_dungeon_set_);
  std::set<unsigned long>::clear(&this->last_recommend_set_);
  p_group_id = &this->group_id_;
  if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id_, v1, p_group_id);
  }
  this->group_id_ = 0;
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::clear(&this->official_dungeon_map_);
  if ( *(char *)(((unsigned __int64)&this->is_enable_ugc_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_ugc_, v1, &this->is_enable_ugc_);
  this->is_enable_ugc_ = 0;
};

// Line 2919: range 0000000014181D4A-0000000014181D64
void __cdecl PlayerCustomDungeonComp::closeCustomDungeon(PlayerCustomDungeonComp *const this)
{
  PlayerCustomDungeonComp::clear(this);
};

// Line 2924: range 0000000014181D66-0000000014181F8F
void __fastcall PlayerCustomDungeonComp::unlockOfficialDungeon(
        PlayerCustomDungeonComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char *v5; // rsi
  int v6; // r14d
  unsigned __int64 v7; // rax
  char v8; // dl
  __int64 v9; // rdx
  std::shared_ptr<OfficialCustomDungeon> *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self __x; // [rsp+10h] [rbp-A0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v13[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 dungeon_id:2923 64 16 25 official_dungeon_ptr:2929";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::unlockOfficialDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  __y._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::end(&this->official_dungeon_map_)._M_node;
  __x._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::find(
                  &this->official_dungeon_map_,
                  (const std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::key_type *)(v2 + 48))._M_node;
  if ( !std::operator!=(&__x, &__y) )
  {
    common::tools::perf::make_shared<OfficialCustomDungeon>();
    v5 = (char *)(v2 + 64);
    if ( !std::operator==<OfficialCustomDungeon>(0LL, (const std::shared_ptr<OfficialCustomDungeon> *)(v2 + 64)) )
    {
      v6 = *(_DWORD *)(v2 + 48);
      v7 = (unsigned __int64)std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v8 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
      LOBYTE(v5) = v8 != 0;
      v9 = (v8 != 0) & (unsigned __int8)(v8 <= 3);
      if ( (_BYTE)v9 )
        v7 = __asan_report_store4(v7, v5, v9);
      *(_DWORD *)v7 = v6;
      v10 = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::operator[](
              &this->official_dungeon_map_,
              (const std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::key_type *)(v2 + 48));
      std::shared_ptr<OfficialCustomDungeon>::operator=(v10, (const std::shared_ptr<OfficialCustomDungeon> *)(v2 + 64));
    }
    std::shared_ptr<OfficialCustomDungeon>::~shared_ptr((std::shared_ptr<OfficialCustomDungeon> *const)(v2 + 64));
  }
  if ( v13 == (char *)v2 )
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

// Line 2939: range 0000000014181F90-000000001418215E
bool __fastcall PlayerCustomDungeonComp::isOfficialDungeonFinish(
        PlayerCustomDungeonComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::pointer v7; // rax
  std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  uint32_t *p_win_times; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 dungeon_id:2938 64 8 9 iter:2940";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::isOfficialDungeonFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  *(std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::find(
                                                                                            &this->official_dungeon_map_,
                                                                                            (const std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::end(&this->official_dungeon_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > > *const)(v2 + 64));
    if ( std::operator==<OfficialCustomDungeon>(0LL, &v6->second) )
    {
      result = 0;
    }
    else
    {
      v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > > *const)(v2 + 64));
      v8 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7->second);
      p_win_times = &v8->win_times;
      if ( *(_BYTE *)(((unsigned __int64)p_win_times >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_win_times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_win_times >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_win_times);
      }
      result = v8->win_times != 0;
    }
  }
  if ( v11 == (char *)v2 )
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

// Line 2953: range 0000000014182160-00000000141822DE
_BOOL8 __fastcall PlayerCustomDungeonComp::isOfficialDungeonUnlock(
        PlayerCustomDungeonComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::pointer v5; // rax
  bool v6; // al
  _BOOL8 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 dungeon_id:2952 64 8 9 iter:2954";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::isOfficialDungeonUnlock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  *(std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::find(
                                                                                            &this->official_dungeon_map_,
                                                                                            (const std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::end(&this->official_dungeon_map_)._M_node;
  v6 = 1;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self *)(v2 + 64),
          &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > > *const)(v2 + 64));
    if ( !std::operator==<OfficialCustomDungeon>(0LL, &v5->second) )
      v6 = 0;
  }
  result = !v6;
  if ( v9 == (char *)v2 )
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

// Line 2963: range 00000000141822E0-000000001418242F
void __cdecl PlayerCustomDungeonComp::enableUGC(PlayerCustomDungeonComp *const this)
{
  __int64 v1; // rsi
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_enable_ugc_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_enable_ugc_, v1, &this->is_enable_ugc_);
    this->is_enable_ugc_ = 1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "enableUGC",
      2966);
    v2 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v4,
           (const char (*)[35])"custom dungeon is not enable, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
};

// Line 2973: range 0000000014182430-000000001418295C
void __cdecl PlayerCustomDungeonComp::onPostEnterSceneEvent(
        PlayerCustomDungeonComp *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5; // al
  PlayerAvatarComp *AvatarComp; // rax
  char v7; // r14
  char v8; // r15
  DungeonScene *v9; // rdx
  char *v10; // rsi
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  char v13; // cl
  Scene *v14; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  uint32_t event_type; // [rsp+2Ch] [rbp-A4h]
  std::shared_ptr<DungeonScene> __b; // [rsp+30h] [rbp-A0h] BYREF
  char v18[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 22 dungeon_scene_ptr:2989 64 16 12 evt_ptr:3008";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( !std::operator!=<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->enter_type_);
  }
  if ( this->enter_type_ )
    v5 = 1;
  else
LABEL_9:
    v5 = 0;
  if ( v5 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::notifyAllowUseSkill(AvatarComp);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->need_gen_event_type_);
  }
  if ( this->need_gen_event_type_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->need_gen_event_type_);
    }
    event_type = this->need_gen_event_type_;
    this->need_gen_event_type_ = 0;
    std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 32));
    v7 = 0;
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)&__b);
    v7 = 1;
    if ( std::operator!=<DungeonScene,DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), &__b) )
LABEL_23:
      v8 = 1;
    else
      v8 = 0;
    if ( v7 )
      std::shared_ptr<DungeonScene>::~shared_ptr(&__b);
    if ( !v8 && !std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
    {
      if ( event_type == 1 )
      {
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        PlayerCustomDungeonComp::genOfficialDungeonRestartEvent(this, v9);
      }
      else if ( event_type == 2 )
      {
        EventUtil::createEvent((data::EventType)(v2 + 64));
        v10 = (char *)(v2 + 64);
        if ( !std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 64)) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Uid = Player::getUid(this->player_);
          v12 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v13 = *(_BYTE *)(((unsigned __int64)&v12->uid >> 3) + 0x7FFF8000);
          if ( v13 != 0 && (char)((((_BYTE)v12 + 60) & 7) + 3) >= v13 )
          {
            LOBYTE(v10) = v13 != 0;
            __asan_report_store4(&v12->uid, v10, v12);
          }
          v12->uid = Uid;
          v14 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          BlockGroupComp = Scene::getBlockGroupComp(v14);
          std::shared_ptr<Event>::shared_ptr(
            (std::shared_ptr<Event> *const)&__b,
            (const std::shared_ptr<Event> *)(v2 + 64));
          SceneBlockGroupComp::broadcastGroupLuaEvent(BlockGroupComp, (EventPtr *)&__b);
          std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)&__b);
        }
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  }
  if ( v18 == (char *)v2 )
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

// Line 3021: range 000000001418295E-0000000014182B5B
void __cdecl PlayerCustomDungeonComp::genOfficialDungeonRestartEvent(
        PlayerCustomDungeonComp *const this,
        DungeonScene *dungeon_scene)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char *v5; // rsi
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  char v8; // cl
  SceneBlockGroupComp *BlockGroupComp; // r14
  std::shared_ptr<Event> p_event_ptr; // [rsp+10h] [rbp-80h] BYREF
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 evt_ptr:3022";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::genOfficialDungeonRestartEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  EventUtil::createEvent((data::EventType)(v2 + 32));
  v5 = (char *)(v2 + 32);
  if ( !std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    v7 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v8 = *(_BYTE *)(((unsigned __int64)&v7->uid >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)((((_BYTE)v7 + 60) & 7) + 3) >= v8 )
    {
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(&v7->uid, v5, v7);
    }
    v7->uid = Uid;
    BlockGroupComp = Scene::getBlockGroupComp((Scene *const)dungeon_scene);
    std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v2 + 32));
    SceneBlockGroupComp::broadcastGroupLuaEvent(BlockGroupComp, &p_event_ptr);
    std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3032: range 0000000014182B5C-0000000014182D41
void __cdecl PlayerCustomDungeonComp::toClient(
        PlayerCustomDungeonComp *const this,
        proto::UgcActivityDetailInfo *activity_info)
{
  std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  proto::OfficialCustomDungeon *v3; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool isCustomDungeonClosed; // dl
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>> *__for_range; // [rsp+20h] [rbp-40h]
  std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > *__in; // [rsp+28h] [rbp-38h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::type *dungeon_id; // [rsp+30h] [rbp-30h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::type *official_dungeon_ptr; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v12[2]; // [rsp+40h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  proto::UgcActivityDetailInfo::set_custom_dungeon_group_id(activity_info, this->group_id_);
  __for_range = &this->official_dungeon_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::begin(&this->official_dungeon_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::end(&this->official_dungeon_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator*(&__for_begin);
    dungeon_id = std::get<0ul,unsigned int const,std::shared_ptr<OfficialCustomDungeon>>(__in);
    official_dungeon_ptr = std::get<1ul,unsigned int const,std::shared_ptr<OfficialCustomDungeon>>(__in);
    if ( !std::operator==<OfficialCustomDungeon>(0LL, official_dungeon_ptr) )
    {
      v2 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)official_dungeon_ptr);
      v3 = proto::UgcActivityDetailInfo::add_official_custom_dungeon_list(activity_info);
      OfficialCustomDungeon::toClient(v2, v3);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_enable_ugc_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_ugc_);
  proto::UgcActivityDetailInfo::set_is_enable_ugc(activity_info, this->is_enable_ugc_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v12);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v12);
  isCustomDungeonClosed = FeatureSwitchMgr::isCustomDungeonClosed(&v4->feature_switch_mgr);
  proto::UgcActivityDetailInfo::set_is_ugc_feature_closed(activity_info, isCustomDungeonClosed);
  std::shared_ptr<Config>::~shared_ptr(v12);
};

// Line 3047: range 0000000014182D42-0000000014182F9C
int32_t __cdecl PlayerCustomDungeonComp::requestDungeonBrief(
        PlayerCustomDungeonComp *const this,
        const std::set<long unsigned int> *dungeon_guid_set,
        proto::CustomDungeonBriefGetType get_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 *v6; // rax
  int32_t v7; // r14d
  int32_t result; // eax
  std::set<long unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::set<long unsigned int>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::set<long unsigned int> *__for_range; // [rsp+30h] [rbp-C0h]
  unsigned __int64 dungeon_guid; // [rsp+38h] [rbp-B8h]
  char v14[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 15 server_req:3048";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::requestDungeonBrief;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  proto::ServerGetCustomDungeonBriefReq::ServerGetCustomDungeonBriefReq((proto::ServerGetCustomDungeonBriefReq *const)(v3 + 48));
  proto::ServerGetCustomDungeonBriefReq::set_get_type((proto::ServerGetCustomDungeonBriefReq *const)(v3 + 48), get_type);
  __for_range = dungeon_guid_set;
  __for_begin._M_node = std::set<unsigned long>::begin(dungeon_guid_set)._M_node;
  __for_end._M_node = std::set<unsigned long>::end(dungeon_guid_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (unsigned __int64 *)std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    dungeon_guid = *v6;
    proto::ServerGetCustomDungeonBriefReq::add_dungeon_guid_list(
      (proto::ServerGetCustomDungeonBriefReq *const)(v3 + 48),
      dungeon_guid);
    std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( sendProtoToActivityService<proto::ServerGetCustomDungeonBriefReq>(
         this->player_,
         (proto::ServerGetCustomDungeonBriefReq *)(v3 + 48)) )
  {
    v7 = 11058;
  }
  else
  {
    v7 = 0;
  }
  proto::ServerGetCustomDungeonBriefReq::~ServerGetCustomDungeonBriefReq((proto::ServerGetCustomDungeonBriefReq *const)(v3 + 48));
  result = v7;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3062: range 0000000014182F9E-0000000014183836
void __cdecl PlayerCustomDungeonComp::backPlayCustomDungeonOfficial(
        PlayerCustomDungeonComp *const this,
        const proto::BackPlayCustomDungeonOfficialReq *req,
        proto::BackPlayCustomDungeonOfficialRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const CustomDungeonExcelConfigMgr *p_custom_dungeon_config_mgr; // rdi
  uint32_t v9; // edx
  bool v10; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  DungeonScene *v21; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  PlayerSceneComp *SceneComp; // r14
  Scene *v24; // rsi
  uint32_t v25; // ecx
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned int val; // [rsp+24h] [rbp-12Ch] BYREF
  uint64_t dungeon_guid; // [rsp+28h] [rbp-128h]
  const data::ConfigCustomLevelRoomSetting *room_config_ptr; // [rsp+30h] [rbp-120h]
  Vector3 pos; // [rsp+38h] [rbp-118h] BYREF
  Vector3 rot; // [rsp+44h] [rbp-10Ch] BYREF
  std::shared_ptr<Config> v36; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v37; // [rsp+60h] [rbp-F0h] BYREF
  TransferReason p_reason; // [rsp+80h] [rbp-D0h] BYREF
  char v39[144]; // [rsp+C0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 dungeon_id:3069 48 4 12 room_id:3085 64 16 22 dungeon_scene_ptr:3077";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::backPlayCustomDungeonOfficial;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
  {
    proto::BackPlayCustomDungeonOfficialRsp::set_retcode(rsp_0, 11057);
  }
  else
  {
    v6 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&v6->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->dungeon_id);
    }
    *(_DWORD *)(v3 + 32) = v6->dungeon_id;
    v7 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    dungeon_guid = v7->dungeon_guid;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v36);
    p_custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.custom_dungeon_config_mgr;
    v9 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_custom_dungeon_config_mgr = (const CustomDungeonExcelConfigMgr *)&this->group_id_;
      __asan_report_load4(&this->group_id_);
    }
    v10 = !CustomDungeonExcelConfigMgr::isGroupContainsOfficialDungeon(p_custom_dungeon_config_mgr, this->group_id_, v9)
       || PlayerCustomDungeonComp::isMyDungeon(this, dungeon_guid);
    std::shared_ptr<Config>::~shared_ptr(&v36);
    if ( v10 )
    {
      proto::BackPlayCustomDungeonOfficialRsp::set_retcode(rsp_0, 11078);
    }
    else
    {
      std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v3 + 64));
      if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "backPlayCustomDungeonOfficial",
          3080);
        v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v37, (const char (*)[28])off_2525FFC0);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v37);
        proto::BackPlayCustomDungeonOfficialRsp::set_retcode(rsp_0, 11078);
      }
      else
      {
        *(_DWORD *)(v3 + 48) = proto::BackPlayCustomDungeonOfficialReq::room_id(req);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v36);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
        room_config_ptr = JsonConfigMgr::findCustomDungeonRoomConfig(
                            &v14->design_config.json_config_mgr,
                            *(_DWORD *)(v3 + 32),
                            *(_DWORD *)(v3 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v36);
        if ( room_config_ptr )
        {
          v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v22 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
          if ( PlayerCustomDungeonComp::buildCustomDungeon(this, v22, v21) )
          {
            proto::BackPlayCustomDungeonOfficialRsp::set_retcode(rsp_0, 11054);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            SceneComp = Player::getSceneComp(this->player_);
            memset(&p_reason, 0, sizeof(p_reason));
            TransferReason::TransferReason(&p_reason);
            Vector3::Vector3(&rot, &room_config_ptr->player_init_rot);
            Vector3::Vector3(&pos, &room_config_ptr->player_init_pos);
            v24 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            PlayerSceneComp::jumpToScene(SceneComp, v24, &pos, &rot, 0, &p_reason);
            TransferReason::~TransferReason(&p_reason);
            if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->try_type_, v24, &this->try_type_);
            }
            this->try_type_ = TRY_CUSTOM_DUNGEON_OFFICIAL_PLAY;
            v25 = *(_DWORD *)(v3 + 48);
            v26 = *(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000);
            LOBYTE(v24) = v26 != 0;
            v27 = (v26 != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= v26);
            if ( (_BYTE)v27 )
              __asan_report_store4(&this->try_room_id_, v24, v27);
            this->try_room_id_ = v25;
            v28 = (*(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000));
            if ( (_BYTE)v28 )
              __asan_report_store4(&this->need_gen_event_type_, (((_BYTE)this - 116) & 7u) + 3, v28);
            this->need_gen_event_type_ = 1;
            PlayerCustomDungeonComp::notifyOfficialDungeonInfo(this);
            proto::BackPlayCustomDungeonOfficialRsp::set_retcode(rsp_0, 0);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
            "backPlayCustomDungeonOfficial",
            3089);
          v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v37, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" dungeon_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 32));
          v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" room_id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v20, (const char (*)[18])" config not found");
          common::milog::MiLogStream::~MiLogStream(&v37);
          proto::BackPlayCustomDungeonOfficialRsp::set_retcode(rsp_0, -1);
        }
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
    }
  }
  if ( v39 == (char *)v3 )
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

// Line 3113: range 0000000014183838-0000000014183CFA
int32_t __cdecl PlayerCustomDungeonComp::enterCustomDungeonOfficialEdit(
        PlayerCustomDungeonComp *const this,
        uint32_t room_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const CustomDungeonExcelConfigMgr *p_custom_dungeon_config_mgr; // rdi
  uint32_t v9; // edx
  bool v10; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  __int64 v14; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-C0h] BYREF
  int32_t ret; // [rsp+24h] [rbp-BCh]
  uint64_t dungeon_guid; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 dungeon_id:3119 64 16 22 dungeon_scene_ptr:3126";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::enterCustomDungeonOfficialEdit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
  {
    v5 = 11057;
  }
  else
  {
    v6 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&v6->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->dungeon_id);
    }
    *(_DWORD *)(v2 + 48) = v6->dungeon_id;
    v7 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    dungeon_guid = v7->dungeon_guid;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    p_custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.custom_dungeon_config_mgr;
    v9 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_custom_dungeon_config_mgr = (const CustomDungeonExcelConfigMgr *)&this->group_id_;
      __asan_report_load4(&this->group_id_);
    }
    v10 = !CustomDungeonExcelConfigMgr::isGroupContainsOfficialDungeon(p_custom_dungeon_config_mgr, this->group_id_, v9)
       || PlayerCustomDungeonComp::isMyDungeon(this, dungeon_guid);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    if ( v10 )
    {
      v5 = 11078;
    }
    else
    {
      std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 64));
      if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
          "enterCustomDungeonOfficialEdit",
          3129);
        v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v20, (const char (*)[28])off_2525FFC0);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v20);
        v5 = 11078;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->try_type_);
        }
        if ( this->try_type_ )
        {
          v14 = (*(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_room_id_ >> 3) + 0x7FFF8000));
          if ( (_BYTE)v14 )
            __asan_report_store4(&this->try_room_id_, (((_BYTE)this - 124) & 7u) + 3, v14);
          this->try_room_id_ = room_id;
          ret = PlayerCustomDungeonComp::exitCustomDungeonTry(this);
          PlayerCustomDungeonComp::notifyOfficialDungeonInfo(this);
          v5 = ret;
        }
        else
        {
          v5 = 0;
        }
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
    }
  }
  result = v5;
  if ( v21 == (char *)v2 )
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

// Line 3146: range 0000000014183CFC-0000000014183D5B
int32_t __cdecl PlayerCustomDungeonComp::banCustomDungeon(PlayerCustomDungeonComp *const this, uint32_t expire_time)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_expire_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->ban_expire_time_, (((_BYTE)this + 28) & 7u) + 3, v2);
  this->ban_expire_time_ = expire_time;
  return 0;
};

// Line 3152: range 0000000014183D5C-0000000014184B2B
void __cdecl PlayerCustomDungeonComp::replayCustomDungeon(
        PlayerCustomDungeonComp *const this,
        const proto::ReplayCustomDungeonReq *req,
        proto::ReplayCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 p_cur_dungeon_ptr; // rsi
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  DungeonResult DungeonResult; // eax
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  PlayerDungeonComp *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  int v18; // r14d
  common::milog::MiLogStream *v19; // r14
  DungeonScene *v20; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  char *v26; // rsi
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  char v29; // cl
  Scene *v30; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  unsigned __int64 v33; // rdx
  PlayerSceneComp *SceneComp; // r14
  Scene *v35; // rax
  bool is_need_create_dungeon; // [rsp+2Bh] [rbp-1B5h]
  unsigned int val; // [rsp+2Ch] [rbp-1B4h] BYREF
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *ret; // [rsp+30h] [rbp-1B0h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dest_dungeon_scene_ptr; // [rsp+38h] [rbp-1A8h]
  std::tuple_element<0,std::pair<Vector3,Vector3> >::type *born_pos; // [rsp+40h] [rbp-1A0h]
  std::tuple_element<1,std::pair<Vector3,Vector3> >::type *born_rot; // [rsp+48h] [rbp-198h]
  std::shared_ptr<Event> p_event_ptr; // [rsp+50h] [rbp-190h] BYREF
  std::pair<Vector3,Vector3> __in; // [rsp+60h] [rbp-180h] BYREF
  EnterDungeonOption v45; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v46; // [rsp+A0h] [rbp-140h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+C0h] [rbp-120h] BYREF
  TransferReason p_reason; // [rsp+F0h] [rbp-F0h] BYREF
  char v49[176]; // [rsp+130h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 check_ret:3179 64 16 22 dungeon_scene_ptr:3162 96 16 12 evt_ptr:3230";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::replayCustomDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  if ( this->group_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->enter_type_);
    }
    if ( this->enter_type_ != ENTER_CUSTOM_DUNGEON_EDIT )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->try_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->try_type_);
    }
    if ( this->try_type_ == TRY_CUSTOM_DUNGEON_ALL )
    {
LABEL_15:
      std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v3 + 64));
      if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 64)) )
      {
        proto::ReplayCustomDungeonRsp::set_retcode(rsp_0, 11057);
      }
      else
      {
        p_cur_dungeon_ptr = (__int64)&this->cur_dungeon_ptr_;
        if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
        {
          proto::ReplayCustomDungeonRsp::set_retcode(rsp_0, 11053);
        }
        else
        {
          v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          DungeonResult = DungeonScene::getDungeonResult(v7);
          is_need_create_dungeon = DungeonResult != DUNGEON_RESULT_NONE;
          if ( DungeonResult == DUNGEON_RESULT_NONE )
            goto LABEL_26;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          DungeonComp = Player::getDungeonComp(this->player_);
          p_cur_dungeon_ptr = 2LL;
          *(_DWORD *)(v3 + 48) = PlayerDungeonComp::checkRestartDungeon(DungeonComp, DUNGEON_RESTART_REASON_DIE_RETRY);
          if ( *(_DWORD *)(v3 + 48) )
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
              "replayCustomDungeon",
              3182);
            v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v46,
                    (const char (*)[35])"check restart dungeon failed, ret:");
            v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v3 + 48));
            v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
            common::milog::MiLogStream::~MiLogStream(&v46);
            proto::ReplayCustomDungeonRsp::set_retcode(rsp_0, *(_DWORD *)(v3 + 48));
          }
          else
          {
LABEL_26:
            PlayerCustomDungeonComp::clearEntity(this);
            std::set<unsigned int>::clear(&this->official_black_coin_set_);
            if ( *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->challenge_time_cost_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->challenge_time_cost_, p_cur_dungeon_ptr, &this->challenge_time_cost_);
            }
            this->challenge_time_cost_ = 0;
            if ( *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->enter_type_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->enter_type_);
            }
            if ( this->enter_type_ == ENTER_CUSTOM_DUNGEON_OFFICIAL )
            {
              v13 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
              PlayerCustomDungeonComp::updateOfficialDungeonByConfig(this, v13);
            }
            if ( !is_need_create_dungeon )
              goto LABEL_49;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v14 = Player::getDungeonComp(this->player_);
            memset(&v45, 0, sizeof(v45));
            EnterDungeonOption::EnterDungeonOption(&v45);
            memset(&level_config_id_map, 0, sizeof(level_config_id_map));
            std::map<unsigned int,unsigned int>::map(&level_config_id_map);
            PlayerDungeonComp::restartDungeon(
              (std::pair<int,std::shared_ptr<DungeonScene> > *)&__in,
              v14,
              &level_config_id_map,
              v45);
            std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
            ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>((std::pair<int,std::shared_ptr<DungeonScene> > *)&__in);
            dest_dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>((std::pair<int,std::shared_ptr<DungeonScene> > *)&__in);
            if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(ret);
            }
            if ( *ret )
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                "replayCustomDungeon",
                3207);
              v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      &v46,
                      (const char (*)[29])"restart Dungeon failed, ret:");
              v16 = common::milog::MiLogStream::operator<<<int,(int *)0>(v15, ret);
              v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
              common::milog::MiLogStream::~MiLogStream(&v46);
              if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(ret);
              }
              proto::ReplayCustomDungeonRsp::set_retcode(rsp_0, *ret);
              v18 = 0;
            }
            else if ( std::operator==<DungeonScene>(0LL, dest_dungeon_scene_ptr) )
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                "replayCustomDungeon",
                3214);
              v19 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      &v46,
                      (const char (*)[36])"restart dungeon scene is null, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
              common::milog::MiLogStream::~MiLogStream(&v46);
              proto::ReplayCustomDungeonRsp::set_retcode(rsp_0, -1);
              v18 = 0;
            }
            else
            {
              std::weak_ptr<DungeonScene>::operator=<DungeonScene>(
                &this->cur_dungeon_scene_wtr_,
                dest_dungeon_scene_ptr);
              std::shared_ptr<DungeonScene>::operator=(
                (std::shared_ptr<DungeonScene> *const)(v3 + 64),
                dest_dungeon_scene_ptr);
              v18 = 1;
            }
            std::pair<int,std::shared_ptr<DungeonScene>>::~pair((std::pair<int,std::shared_ptr<DungeonScene> > *const)&__in);
            if ( v18 == 1 )
            {
LABEL_49:
              v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v21 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
              if ( PlayerCustomDungeonComp::buildCustomDungeon(this, v21, v20) )
              {
                common::milog::MiLogStream::create(
                  &v46,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
                  "replayCustomDungeon",
                  3225);
                v22 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                        &v46,
                        (const char (*)[50])"replay build custom dungeon failed, dungeon_guid:");
                v23 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
                v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v22, &v23->dungeon_guid);
                v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v24, (const char (*)[5])"uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
                common::milog::MiLogStream::~MiLogStream(&v46);
                proto::ReplayCustomDungeonRsp::set_retcode(rsp_0, -1);
              }
              else
              {
                EventUtil::createEvent((data::EventType)(v3 + 96));
                v26 = (char *)(v3 + 96);
                if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v3 + 96)) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  Uid = Player::getUid(this->player_);
                  v28 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  v29 = *(_BYTE *)(((unsigned __int64)&v28->uid >> 3) + 0x7FFF8000);
                  if ( v29 != 0 && (char)((((_BYTE)v28 + 60) & 7) + 3) >= v29 )
                  {
                    LOBYTE(v26) = v29 != 0;
                    __asan_report_store4(&v28->uid, v26, v28);
                  }
                  v28->uid = Uid;
                  v30 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                  BlockGroupComp = Scene::getBlockGroupComp(v30);
                  std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v3 + 96));
                  SceneBlockGroupComp::broadcastGroupLuaEvent(BlockGroupComp, &p_event_ptr);
                  std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
                }
                if ( !is_need_create_dungeon )
                {
                  v32 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v32);
                  v33 = *(_QWORD *)v32->baseclass_0 + 136LL;
                  if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(*(_QWORD *)v32->baseclass_0 + 136LL);
                  (*(void (__fastcall **)(std::pair<Vector3,Vector3> *, std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v33)(
                    &__in,
                    v32);
                  born_pos = std::get<0ul,Vector3,Vector3>(&__in);
                  born_rot = std::get<1ul,Vector3,Vector3>(&__in);
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  SceneComp = Player::getSceneComp(this->player_);
                  memset(&p_reason, 0, sizeof(p_reason));
                  TransferReason::TransferReason(&p_reason);
                  v35 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                  PlayerSceneComp::jumpToScene(SceneComp, v35, born_pos, born_rot, 0, &p_reason);
                  TransferReason::~TransferReason(&p_reason);
                }
                proto::ReplayCustomDungeonRsp::set_retcode(rsp_0, 0);
                std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 96));
              }
            }
          }
        }
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
    }
    else
    {
      proto::ReplayCustomDungeonRsp::set_retcode(rsp_0, 11085);
    }
  }
  else
  {
    proto::ReplayCustomDungeonRsp::set_retcode(rsp_0, 11093);
  }
  if ( v49 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3247: range 0000000014184B2C-000000001418510E
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerCustomDungeonComp::logChallengeSettle(
        const PlayerCustomDungeonComp *const this,
        const Challenge *challenge)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rbx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  int v11; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  proto_log::CustomDungeonDetailInfo *v14; // r14
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // r14
  std::string challengea; // [rsp+0h] [rbp-F0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  challengea._M_string_length = (std::string::size_type)this;
  challengea._M_dataplus._M_p = (std::string::pointer)challenge;
  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:3254 64 16 12 log_ptr:3255";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::logChallengeSettle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( std::operator==<CustomDungeon>(0LL, (const std::shared_ptr<CustomDungeon> *)(challengea._M_string_length + 64)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "logChallengeSettle",
      3250);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v20, (const char (*)[26])off_2525D400);
    if ( *(_BYTE *)(((challengea._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(challengea._M_string_length + 24);
    *(_DWORD *)challengea._anon_0._M_local_buf = Player::getUid(*(const Player *const *)(challengea._M_string_length + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v5,
      (const unsigned int *)&challengea._anon_0);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    if ( *(_BYTE *)(((challengea._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(challengea._M_string_length + 24);
    BasicComp = Player::getBasicComp(*(Player *const *)(challengea._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v20, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDFCu, challengea);
    std::string::~string(&v20);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyCustomDungeonChallengeSettle>();
    HIDWORD(challengea._anon_0._M_allocated_capacity) = 0;
    if ( *(_BYTE *)(((challengea._M_string_length + 56) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((challengea._M_string_length + 56) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(challengea._M_string_length + 56);
    }
    if ( *(_DWORD *)(challengea._M_string_length + 56) == 3 )
    {
      HIDWORD(challengea._anon_0._M_allocated_capacity) = 1;
    }
    else
    {
      v7 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(challengea._M_string_length + 64));
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7);
      if ( PlayerCustomDungeonComp::isMyDungeon(
             (const PlayerCustomDungeonComp *const)challengea._M_string_length,
             v7->dungeon_guid) )
      {
        HIDWORD(challengea._anon_0._M_allocated_capacity) = 2;
      }
      else
      {
        v8 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(challengea._M_string_length + 64));
        if ( common::tools::MiscUtils::isContains<std::set<unsigned long> const,unsigned long>(
               (const std::set<long unsigned int> *)(challengea._M_string_length + 432),
               &v8->dungeon_guid) )
        {
          HIDWORD(challengea._anon_0._M_allocated_capacity) = 3;
        }
        else
        {
          HIDWORD(challengea._anon_0._M_allocated_capacity) = 4;
        }
      }
    }
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyCustomDungeonChallengeSettle::set_play_type(
      v9,
      HIDWORD(challengea._anon_0._M_allocated_capacity));
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(challengea._M_dataplus._M_p + 41) >> 3) + 0x7FFF8000) != 0
      && ((LOBYTE(challengea._M_dataplus._M_p) + 41) & 7) >= *(_BYTE *)(((unsigned __int64)(challengea._M_dataplus._M_p
                                                                                          + 41) >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load1(challengea._M_dataplus._M_p + 41);
    }
    proto_log::PlayerLogBodyCustomDungeonChallengeSettle::set_is_success(v10, challengea._M_dataplus._M_p[41]);
    *((_DWORD *)&challengea._anon_0._M_allocated_capacity + 2) = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)(challengea._M_dataplus._M_p + 184) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(challengea._M_dataplus._M_p + 184) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(challengea._M_dataplus._M_p + 184);
    }
    if ( *((_DWORD *)&challengea._anon_0._M_allocated_capacity + 2) <= *((_DWORD *)challengea._M_dataplus._M_p + 46) )
      v11 = 0;
    else
      v11 = *((_DWORD *)&challengea._anon_0._M_allocated_capacity + 2) - *((_DWORD *)challengea._M_dataplus._M_p + 46);
    *((_DWORD *)&challengea._anon_0._M_allocated_capacity + 3) = v11;
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyCustomDungeonChallengeSettle::set_use_time(
      v12,
      *((google::protobuf::uint32 *)&challengea._anon_0._M_allocated_capacity + 3));
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v14 = proto_log::PlayerLogBodyCustomDungeonChallengeSettle::mutable_detail_info(v13);
    v15 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(challengea._M_string_length + 64));
    PlayerCustomDungeonComp::fillCustomDungeonDetailLog(
      (const PlayerCustomDungeonComp *const)challengea._M_string_length,
      v15,
      v14);
    if ( *(_BYTE *)(((challengea._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(challengea._M_string_length + 24);
    v16 = *(Player **)(challengea._M_string_length + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCustomDungeonChallengeSettle,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonChallengeSettle> *)(v2 + 64));
    Player::printStatLog(v16, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonChallengeSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCustomDungeonChallengeSettle> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  if ( v21 == (char *)v2 )
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

// Line 3283: range 0000000014185110-00000000141857B3
void __cdecl PlayerCustomDungeonComp::fillCustomDungeonDetailLog(
        const PlayerCustomDungeonComp *const this,
        const CustomDungeon *custom_dungeon,
        proto_log::CustomDungeonDetailInfo *detail_log)
{
  std::map<unsigned int,unsigned int> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  std::map<unsigned int,CustomDungeonRoom>::const_iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::map<unsigned int,CustomDungeonRoom>::const_iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_begin_0; // [rsp+38h] [rbp-118h] BYREF
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_end_0; // [rsp+40h] [rbp-110h] BYREF
  const std::map<unsigned int,CustomDungeonRoom> *__for_range; // [rsp+48h] [rbp-108h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+50h] [rbp-100h]
  const std::pair<unsigned int const,unsigned int> *v14; // [rsp+58h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *brick_id; // [rsp+60h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *brick_count; // [rsp+68h] [rbp-E8h]
  proto_log::CustomDungeonBrickInfo *brick_info; // [rsp+70h] [rbp-E0h]
  const std::pair<unsigned int const,CustomDungeonRoom> *v18; // [rsp+78h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonRoom> >::type *_; // [rsp+80h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *dungeon_room; // [rsp+88h] [rbp-C8h]
  const std::unordered_map<unsigned int,CustomDungeonBlock> *__for_range_0; // [rsp+90h] [rbp-C0h]
  const std::pair<unsigned int const,CustomDungeonBlock> *v22; // [rsp+98h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonBlock> >::type *__0; // [rsp+A0h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *brick; // [rsp+A8h] [rbp-A8h]
  char v25[160]; // [rsp+B0h] [rbp-A0h] BYREF

  v3 = (std::map<unsigned int,unsigned int> *)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::map<unsigned int,unsigned int> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 23 brick_id_count_map:3284";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerCustomDungeonComp::fillCustomDungeonDetailLog;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  std::map<unsigned int,unsigned int>::map(v3 + 1);
  __for_range = &custom_dungeon->room_map;
  __for_begin._M_node = std::map<unsigned int,CustomDungeonRoom>::begin(&custom_dungeon->room_map)._M_node;
  __for_end._M_node = std::map<unsigned int,CustomDungeonRoom>::end(&custom_dungeon->room_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,CustomDungeonRoom>(v18);
    dungeon_room = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *)std::get<1ul,unsigned int const,CustomDungeonRoom>(v18);
    __for_range_0 = &dungeon_room->block_map;
    __for_begin_0._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::begin(&dungeon_room->block_map)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,CustomDungeonBlock>,false>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator*(&__for_begin_0);
      __0 = std::get<0ul,unsigned int const,CustomDungeonBlock>(v22);
      brick = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *)std::get<1ul,unsigned int const,CustomDungeonBlock>(v22);
      v6 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](v3 + 1, &brick->block_id);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load4(v6);
      ++*(_DWORD *)v6;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator++(&__for_begin);
  }
  __for_range_1 = v3 + 1;
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false>::__node_type *)std::map<unsigned int,unsigned int>::begin(v3 + 1)._M_node;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,CustomDungeonBlock>,false>::__node_type *)std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0) )
  {
    v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
    brick_id = std::get<0ul,unsigned int const,unsigned int>(v14);
    brick_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v14);
    brick_info = proto_log::CustomDungeonDetailInfo::add_brick_info_list(detail_log);
    if ( *(_BYTE *)(((unsigned __int64)brick_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)brick_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)brick_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(brick_id);
    }
    proto_log::CustomDungeonBrickInfo::set_brick_id(brick_info, *brick_id);
    if ( *(_BYTE *)(((unsigned __int64)brick_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)brick_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)brick_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(brick_count);
    }
    proto_log::CustomDungeonBrickInfo::set_brick_count(brick_info, *brick_count);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)custom_dungeon >> 3) + 0x7FFF8000) )
    __asan_report_load8(custom_dungeon);
  proto_log::CustomDungeonDetailInfo::set_dungeon_guid(detail_log, custom_dungeon->dungeon_guid);
  if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&custom_dungeon->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&custom_dungeon->dungeon_id);
  }
  proto_log::CustomDungeonDetailInfo::set_dungeon_id(detail_log, custom_dungeon->dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->setting.time_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&custom_dungeon->setting.time_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&custom_dungeon->setting.time_limit);
  }
  proto_log::CustomDungeonDetailInfo::set_time_limit(detail_log, custom_dungeon->setting.time_limit);
  if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->setting.coin_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)custom_dungeon + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&custom_dungeon->setting.coin_limit >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&custom_dungeon->setting.coin_limit);
  }
  proto_log::CustomDungeonDetailInfo::set_coin_limit(detail_log, custom_dungeon->setting.coin_limit);
  if ( *(char *)(((unsigned __int64)&custom_dungeon->setting >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&custom_dungeon->setting);
  proto_log::CustomDungeonDetailInfo::set_is_arrive_finish(detail_log, custom_dungeon->setting.is_arrive_finish);
  if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->setting.life_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)custom_dungeon - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&custom_dungeon->setting.life_num >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&custom_dungeon->setting.life_num);
  }
  proto_log::CustomDungeonDetailInfo::set_life_num(detail_log, custom_dungeon->setting.life_num);
  if ( *(_BYTE *)(((unsigned __int64)&custom_dungeon->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&custom_dungeon->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&custom_dungeon->version);
  }
  proto_log::CustomDungeonDetailInfo::set_version(detail_log, custom_dungeon->version);
  std::map<unsigned int,unsigned int>::~map(v3 + 1);
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3308: range 00000000141857B4-000000001418595F
void __cdecl PlayerCustomDungeonComp::getCustomDungeonOpenRoomVec(
        PlayerCustomDungeonComp *const this,
        std::vector<unsigned int> *room_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::set<unsigned int> *room_set; // [rsp+20h] [rbp-70h]
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 room_id:3314";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::getCustomDungeonOpenRoomVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( !std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
  {
    room_set = &std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_)->setting.open_room_set;
    __for_range = room_set;
    __for_begin._M_node = std::set<unsigned int>::begin(room_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(room_set)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      *(_DWORD *)(v2 + 32) = *v6;
      std::vector<unsigned int>::push_back(room_vec, (const std::vector<unsigned int>::value_type *)(v2 + 32));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3321: range 0000000014185960-0000000014185C8E
uint32_t __cdecl PlayerCustomDungeonComp::getCustomDungeonCoinNum(PlayerCustomDungeonComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t *p_block_id; // rax
  unsigned int val; // [rsp+10h] [rbp-B0h] BYREF
  uint32_t coin_num; // [rsp+14h] [rbp-ACh]
  std::map<unsigned int,CustomDungeonRoom>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,CustomDungeonRoom>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_begin_0; // [rsp+28h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,CustomDungeonBlock>::const_iterator __for_end_0; // [rsp+30h] [rbp-90h] BYREF
  const CustomDungeonExcelConfigMgr *custom_dungeon_config_mgr; // [rsp+38h] [rbp-88h]
  std::map<unsigned int,CustomDungeonRoom> *__for_range; // [rsp+40h] [rbp-80h]
  const std::pair<unsigned int const,CustomDungeonRoom> *v13; // [rsp+48h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonRoom> >::type *id; // [rsp+50h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *room; // [rsp+58h] [rbp-68h]
  const std::unordered_map<unsigned int,CustomDungeonBlock> *__for_range_0; // [rsp+60h] [rbp-60h]
  const std::pair<unsigned int const,CustomDungeonBlock> *v17; // [rsp+68h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,CustomDungeonBlock> >::type *id_0; // [rsp+70h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *brick; // [rsp+78h] [rbp-48h]
  std::shared_ptr<Config> v20; // [rsp+80h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+90h] [rbp-30h] BYREF

  coin_num = 0;
  if ( std::operator==<CustomDungeon>(0LL, &this->cur_dungeon_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "getCustomDungeonCoinNum",
      3325);
    v1 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v21, (const char (*)[28])off_2525DD20);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    return coin_num;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    custom_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.custom_dungeon_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v20);
    __for_range = &std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_)->room_map;
    __for_begin._M_node = std::map<unsigned int,CustomDungeonRoom>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,CustomDungeonRoom>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,CustomDungeonRoom>(v13);
      room = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonRoom> >::type *)std::get<1ul,unsigned int const,CustomDungeonRoom>(v13);
      v3 = std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_dungeon_ptr_);
      if ( std::set<unsigned int>::count(&v3->setting.open_room_set, id) )
      {
        __for_range_0 = &room->block_map;
        __for_begin_0._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::begin(&room->block_map)._M_cur;
        __for_end_0._M_cur = std::unordered_map<unsigned int,CustomDungeonBlock>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,CustomDungeonBlock>,false>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator*(&__for_begin_0);
          id_0 = std::get<0ul,unsigned int const,CustomDungeonBlock>(v17);
          brick = (std::tuple_element<1,const std::pair<unsigned int const,CustomDungeonBlock> >::type *)std::get<1ul,unsigned int const,CustomDungeonBlock>(v17);
          p_block_id = &brick->block_id;
          if ( *(_BYTE *)(((unsigned __int64)p_block_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_block_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(p_block_id);
          }
          if ( CustomDungeonExcelConfigMgr::isCoinBrick(custom_dungeon_config_mgr, brick->block_id) )
            ++coin_num;
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,CustomDungeonBlock>,false,false>::operator++(&__for_begin_0);
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,CustomDungeonRoom>>::operator++(&__for_begin);
    }
    return coin_num;
  }
};

// Line 3347: range 0000000014185C90-00000000141862C2
void __fastcall PlayerCustomDungeonComp::updateBattleRecord(
        PlayerCustomDungeonComp *const this,
        uint64_t dungeon_guid,
        uint32_t min_cost_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  char *v7; // rsi
  CustomDungeonBattleRecord *v8; // rax
  uint64_t v9; // rdx
  uint32_t v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::vector<long unsigned int>::size_type v17; // rax
  int v18; // eax
  std::vector<long unsigned int>::size_type v19; // r14
  const std::map<long unsigned int,CustomDungeonBattleRecord>::key_type *v21; // rax
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >::difference_type v22; // r14
  unsigned int val; // [rsp+20h] [rbp-140h] BYREF
  uint32_t idx; // [rsp+24h] [rbp-13Ch]
  uint32_t max_record_num; // [rsp+28h] [rbp-138h]
  uint32_t need_del; // [rsp+2Ch] [rbp-134h]
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > v28; // [rsp+30h] [rbp-130h] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > v29; // [rsp+38h] [rbp-128h] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > __i; // [rsp+40h] [rbp-120h] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > __first; // [rsp+48h] [rbp-118h] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > __last; // [rsp+50h] [rbp-110h] BYREF
  CustomDungeonBattleRecord *record; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v34; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 18 min_cost_time:3346 48 8 17 dungeon_guid:3346 80 40 11 notify:3366";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::updateBattleRecord;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_QWORD *)(v3 + 48) = dungeon_guid;
  *(_DWORD *)(v3 + 32) = min_cost_time;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
  max_record_num = ConstValueExcelConfigMgr::getCustomDungeonMaxBattleRecord(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( max_record_num )
  {
    v7 = (char *)(v3 + 48);
    v8 = std::map<unsigned long,CustomDungeonBattleRecord>::operator[](
           &this->battle_record_map_,
           (const std::map<long unsigned int,CustomDungeonBattleRecord>::key_type *)(v3 + 48));
    record = v8;
    v9 = *(_QWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_store8(v8, v7);
    record->dungeon_guid = v9;
    if ( *(_BYTE *)(((unsigned __int64)&record->min_cost_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&record->min_cost_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&record->min_cost_time);
    }
    if ( !record->min_cost_time || record->min_cost_time > *(_DWORD *)(v3 + 32) )
    {
      v10 = *(_DWORD *)(v3 + 32);
      v11 = *(_BYTE *)(((unsigned __int64)&record->min_cost_time >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(&record->min_cost_time, v7, &record->min_cost_time);
      }
      record->min_cost_time = v10;
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "updateBattleRecord",
        3364);
      v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v35,
              (const char (*)[35])"update battle record dungeon_guid:");
      v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v12,
              (const unsigned __int64 *)(v3 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])" min_cost_time:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream(&v35);
      proto::CustomDungeonBattleRecordNotify::CustomDungeonBattleRecordNotify((proto::CustomDungeonBattleRecordNotify *const)(v3 + 80));
      proto::CustomDungeonBattleRecordNotify::set_dungeon_guid(
        (proto::CustomDungeonBattleRecordNotify *const)(v3 + 80),
        *(_QWORD *)(v3 + 48));
      proto::CustomDungeonBattleRecordNotify::set_min_cost_time(
        (proto::CustomDungeonBattleRecordNotify *const)(v3 + 80),
        *(_DWORD *)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 80));
      if ( !common::tools::MiscUtils::isContains<unsigned long>(
              &this->battle_record_vec_,
              (const unsigned __int64 *)(v3 + 48)) )
      {
        v17 = std::vector<unsigned long>::size(&this->battle_record_vec_);
        if ( v17 >= max_record_num )
        {
          v18 = std::vector<unsigned long>::size(&this->battle_record_vec_);
          need_del = v18 - max_record_num + 1;
          for ( idx = 0; idx < need_del; ++idx )
          {
            v19 = idx;
            if ( v19 >= std::vector<unsigned long>::size(&this->battle_record_vec_) )
              break;
            v21 = std::vector<unsigned long>::operator[](&this->battle_record_vec_, idx);
            std::map<unsigned long,CustomDungeonBattleRecord>::erase(&this->battle_record_map_, v21);
          }
          v22 = need_del;
          v29._M_current = std::vector<unsigned long>::begin(&this->battle_record_vec_)._M_current;
          __i._M_current = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator+(
                             &v29,
                             v22)._M_current;
          __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::__normal_iterator<unsigned long *>(
            &__last,
            &__i);
          v28._M_current = std::vector<unsigned long>::begin(&this->battle_record_vec_)._M_current;
          __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::__normal_iterator<unsigned long *>(
            &__first,
            &v28);
          std::vector<unsigned long>::erase(&this->battle_record_vec_, __first, __last);
        }
        std::vector<unsigned long>::push_back(
          &this->battle_record_vec_,
          (const std::vector<long unsigned int>::value_type *)(v3 + 48));
      }
      proto::CustomDungeonBattleRecordNotify::~CustomDungeonBattleRecordNotify((proto::CustomDungeonBattleRecordNotify *const)(v3 + 80));
    }
  }
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 3391: range 00000000141862C4-000000001418644F
__int64 __fastcall PlayerCustomDungeonComp::getBattleRecord(PlayerCustomDungeonComp *const this, uint64_t dungeon_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBattleRecord> >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBattleRecord> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 iter:3392 64 8 17 dungeon_guid:3390";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::getBattleRecord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  *(_QWORD *)(v2 + 64) = dungeon_guid;
  *(std::map<long unsigned int,CustomDungeonBattleRecord>::iterator *)(v2 + 32) = std::map<unsigned long,CustomDungeonBattleRecord>::find(
                                                                                    &this->battle_record_map_,
                                                                                    (const std::map<long unsigned int,CustomDungeonBattleRecord>::key_type *)(v2 + 64));
  __y._M_node = std::map<unsigned long,CustomDungeonBattleRecord>::end(&this->battle_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBattleRecord> >::_Self *)(v2 + 32),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned long const,CustomDungeonBattleRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBattleRecord> > *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second.min_cost_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->second.min_cost_time >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::_Rb_tree_iterator<std::pair<long unsigned int const,CustomDungeonBattleRecord> >::pointer)__asan_report_load4(&v6->second.min_cost_time);
    }
    result = v6->second.min_cost_time;
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

// Line 3401: range 0000000014186450-0000000014186833
void __cdecl PlayerCustomDungeonComp::outStuckCustomDungeon(
        PlayerCustomDungeonComp *const this,
        proto::OutStuckCustomDungeonRsp *rsp_0)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  __int64 v6; // rdx
  char *v7; // rsi
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  char v10; // cl
  Scene *v11; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<Event> p_event_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 22 dungeon_scene_ptr:3402 64 16 12 evt_ptr:3413";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::outStuckCustomDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 32));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "outStuckCustomDungeon",
      3405);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v16,
           (const char (*)[31])"player is not in dungeon, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    proto::OutStuckCustomDungeonRsp::set_retcode(rsp_0, -1);
  }
  else
  {
    v6 = (*(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_gen_event_type_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store4(&this->need_gen_event_type_, (((_BYTE)this - 116) & 7u) + 3, v6);
    this->need_gen_event_type_ = 2;
    EventUtil::createEvent((data::EventType)(v2 + 64));
    v7 = (char *)(v2 + 64);
    if ( !std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      v9 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v10 = *(_BYTE *)(((unsigned __int64)&v9->uid >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((((_BYTE)v9 + 60) & 7) + 3) >= v10 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(&v9->uid, v7, v9);
      }
      v9->uid = Uid;
      v11 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      BlockGroupComp = Scene::getBlockGroupComp(v11);
      std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v2 + 64));
      SceneBlockGroupComp::broadcastGroupLuaEvent(BlockGroupComp, &p_event_ptr);
      std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
      proto::OutStuckCustomDungeonRsp::set_retcode(rsp_0, 0);
    }
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v17 == (char *)v2 )
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

// Line 3424: range 0000000014186834-0000000014186968
void __cdecl PlayerCustomDungeonComp::updateCacheMap(
        PlayerCustomDungeonComp *const this,
        std::map<long unsigned int,proto::CustomDungeonBriefRedisData> *dungeon_map,
        const proto::CustomDungeonBriefRedisData *brief_redis)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  proto::CustomDungeonBriefRedisData *p_second; // rdx
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::key_type __x; // [rsp+28h] [rbp-68h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 iter:3425";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::updateCacheMap;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  __x = proto::CustomDungeonBriefRedisData::dungeon_guid(brief_redis);
  *(std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::iterator *)(v3 + 32) = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::find(
                                                                                             dungeon_map,
                                                                                             &__x);
  __x = (std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::key_type)std::map<unsigned long,proto::CustomDungeonBriefRedisData>::end(dungeon_map)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::_Self *)(v3 + 32),
          (const std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::_Self *)&__x) )
  {
    p_second = &std::_Rb_tree_iterator<std::pair<unsigned long const,proto::CustomDungeonBriefRedisData>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> > *const)(v3 + 32))->second;
    proto::CustomDungeonBriefRedisData::operator=(p_second, brief_redis);
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3434: range 000000001418696A-00000000141869B8
void __cdecl PlayerCustomDungeonComp::tryUpdateCacheSocial(
        PlayerCustomDungeonComp *const this,
        const proto::ServerUpdateCustomDungeonSocialNotify *notify)
{
  PlayerCustomDungeonComp::updateCacheSocial(this, &this->cached_recommend_dungeon_map_, notify);
  PlayerCustomDungeonComp::updateCacheSocial(this, &this->cached_store_dungeon_map_, notify);
};

// Line 3440: range 00000000141869BA-0000000014186C42
void __cdecl PlayerCustomDungeonComp::updateCacheSocial(
        PlayerCustomDungeonComp *const this,
        std::map<long unsigned int,proto::CustomDungeonBriefRedisData> *dungeon_map,
        const proto::ServerUpdateCustomDungeonSocialNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t store_num; // [rsp+24h] [rbp-8Ch]
  uint32_t like_num; // [rsp+28h] [rbp-88h]
  proto::CustomDungeonSocialUpdateType update_type; // [rsp+2Ch] [rbp-84h]
  uint32_t play_num; // [rsp+30h] [rbp-80h]
  uint32_t win_num; // [rsp+34h] [rbp-7Ch]
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::key_type __x; // [rsp+38h] [rbp-78h] BYREF
  proto::CustomDungeonBriefRedisData *brief_data; // [rsp+40h] [rbp-70h]
  proto::CustomDungeonSocialRedisData *social; // [rsp+48h] [rbp-68h]
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 iter:3441";
  *(_QWORD *)(v3 + 16) = PlayerCustomDungeonComp::updateCacheSocial;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  __x = proto::ServerUpdateCustomDungeonSocialNotify::dungeon_guid(notify);
  *(std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::iterator *)(v3 + 32) = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::find(
                                                                                             dungeon_map,
                                                                                             &__x);
  __x = (std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::key_type)std::map<unsigned long,proto::CustomDungeonBriefRedisData>::end(dungeon_map)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::_Self *)(v3 + 32),
          (const std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::_Self *)&__x) )
  {
    brief_data = &std::_Rb_tree_iterator<std::pair<unsigned long const,proto::CustomDungeonBriefRedisData>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> > *const)(v3 + 32))->second;
    update_type = proto::ServerUpdateCustomDungeonSocialNotify::update_type(notify);
    social = proto::CustomDungeonBriefRedisData::mutable_social(brief_data);
    switch ( update_type )
    {
      case CUSTOM_DUNGEON_SOCIAL_UPDATE_STORE:
        store_num = proto::CustomDungeonSocialRedisData::store_num(social);
        if ( !proto::ServerUpdateCustomDungeonSocialNotify::is_cancel_store(notify) )
        {
          ++store_num;
        }
        else if ( store_num )
        {
          --store_num;
        }
        proto::CustomDungeonSocialRedisData::set_store_num(social, store_num);
        break;
      case CUSTOM_DUNGEON_SOCIAL_UPDATE_LIKE:
        like_num = proto::CustomDungeonSocialRedisData::like_num(social);
        if ( !proto::ServerUpdateCustomDungeonSocialNotify::is_cancel_like(notify) )
        {
          ++like_num;
        }
        else if ( like_num )
        {
          --like_num;
        }
        proto::CustomDungeonSocialRedisData::set_like_num(social, like_num);
        break;
      case CUSTOM_DUNGEON_SOCIAL_UPDATE_PLAY:
        play_num = proto::CustomDungeonSocialRedisData::play_num(social) + 1;
        proto::CustomDungeonSocialRedisData::set_play_num(social, play_num);
        if ( proto::ServerUpdateCustomDungeonSocialNotify::is_win(notify) )
        {
          win_num = proto::CustomDungeonSocialRedisData::win_num(social) + 1;
          proto::CustomDungeonSocialRedisData::set_win_num(social, win_num);
        }
        break;
    }
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3492: range 0000000014186C44-0000000014187016
__int64 __fastcall PlayerCustomDungeonComp::finishOfficialDungeonByGm(
        PlayerCustomDungeonComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int v8; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::pointer v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  OfficialCustomDungeon *v13; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 dungeon_id:3491 64 8 9 iter:3493 96 16 16 dungeon_ptr:3499";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::finishOfficialDungeonByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  *(std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::find(
                                                                                            &this->official_dungeon_map_,
                                                                                            (const std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<OfficialCustomDungeon>>::end(&this->official_dungeon_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "finishOfficialDungeonByGm",
      3496);
    v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v17,
           (const char (*)[24])"no official dungeon_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v8 = -1;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<OfficialCustomDungeon> > > *const)(v2 + 64));
    std::shared_ptr<OfficialCustomDungeon>::shared_ptr(
      (std::shared_ptr<OfficialCustomDungeon> *const)(v2 + 96),
      &v9->second);
    if ( std::operator==<OfficialCustomDungeon>(0LL, (const std::shared_ptr<OfficialCustomDungeon> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
        "finishOfficialDungeonByGm",
        3502);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v17,
              (const char (*)[26])"official null dungeon_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v8 = -1;
    }
    else
    {
      v13 = std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<OfficialCustomDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      PlayerCustomDungeonComp::finishOfficialDungeon(this, v13);
      v8 = 0;
    }
    std::shared_ptr<OfficialCustomDungeon>::~shared_ptr((std::shared_ptr<OfficialCustomDungeon> *const)(v2 + 96));
  }
  result = v8;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3512: range 0000000014187018-00000000141871E2
int32_t __cdecl PlayerCustomDungeonComp::setCustomDungeonSocialByGm(
        PlayerCustomDungeonComp *const this,
        uint64_t dungeon_guid,
        uint32_t update_type,
        uint32_t num)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t v7; // r14d
  int32_t result; // eax
  char v11[176]; // [rsp+20h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 40 11 notify:3513";
  *(_QWORD *)(v4 + 16) = PlayerCustomDungeonComp::setCustomDungeonSocialByGm;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  proto::ServerCustomDungeonSocialGmNotify::ServerCustomDungeonSocialGmNotify((proto::ServerCustomDungeonSocialGmNotify *const)(v4 + 48));
  proto::ServerCustomDungeonSocialGmNotify::set_dungeon_guid(
    (proto::ServerCustomDungeonSocialGmNotify *const)(v4 + 48),
    dungeon_guid);
  proto::ServerCustomDungeonSocialGmNotify::set_update_type(
    (proto::ServerCustomDungeonSocialGmNotify *const)(v4 + 48),
    update_type);
  proto::ServerCustomDungeonSocialGmNotify::set_num((proto::ServerCustomDungeonSocialGmNotify *const)(v4 + 48), num);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v7 = sendProtoToActivityService<proto::ServerCustomDungeonSocialGmNotify>(
         this->player_,
         (proto::ServerCustomDungeonSocialGmNotify *)(v4 + 48));
  proto::ServerCustomDungeonSocialGmNotify::~ServerCustomDungeonSocialGmNotify((proto::ServerCustomDungeonSocialGmNotify *const)(v4 + 48));
  result = v7;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3522: range 00000000141871E4-0000000014187487
std::string *__cdecl PlayerCustomDungeonComp::getRecommendScoreByGm[abi:cxx11](
        std::string *retstr,
        PlayerCustomDungeonComp *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // r14
  float v8; // xmm0_4
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::map<long unsigned int,proto::CustomDungeonBriefRedisData> *__for_range; // [rsp+20h] [rbp-90h]
  const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> *v13; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *guid; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *brief; // [rsp+38h] [rbp-78h]
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 oss:3523";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::getRecommendScoreByGm[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  __for_range = &this->cached_recommend_dungeon_map_;
  __for_begin._M_node = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::begin(&this->cached_recommend_dungeon_map_)._M_node;
  __for_end._M_node = std::map<unsigned long,proto::CustomDungeonBriefRedisData>::end(&this->cached_recommend_dungeon_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned long const,proto::CustomDungeonBriefRedisData>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned long const,proto::CustomDungeonBriefRedisData>(v13);
    brief = (std::tuple_element<1,const std::pair<long unsigned int const,proto::CustomDungeonBriefRedisData> >::type *)std::get<1ul,unsigned long const,proto::CustomDungeonBriefRedisData>(v13);
    v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           "dungeon_guid:");
    if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
      __asan_report_load8(guid);
    v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, *guid);
    v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " score:");
    v8 = proto::CustomDungeonBriefRedisData::recommend_score(brief);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, v8);
    std::_Rb_tree_iterator<std::pair<unsigned long const,proto::CustomDungeonBriefRedisData>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 3532: range 0000000014187488-000000001418772F
void __fastcall PlayerCustomDungeonComp::getCustomDungeonScoreByGm(
        PlayerCustomDungeonComp *const this,
        uint64_t dungeon_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  std::less<long unsigned int> __comp; // [rsp+22h] [rbp-CEh] BYREF
  std::allocator<long unsigned int> __a; // [rsp+23h] [rbp-CDh] BYREF
  unsigned int val; // [rsp+24h] [rbp-CCh] BYREF
  std::initializer_list<long unsigned int> __l; // [rsp+28h] [rbp-C8h] BYREF
  std::set<long unsigned int> dungeon_guid_set; // [rsp+50h] [rbp-A0h] BYREF
  char v14[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 17 dungeon_guid:3531";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::getCustomDungeonScoreByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = dungeon_guid;
  __l._M_array = *(std::initializer_list<long unsigned int>::iterator *)(v2 + 32);
  std::allocator<unsigned long>::allocator(&__a);
  std::set<unsigned long>::set(
    &dungeon_guid_set,
    (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__l),
    &__comp,
    &__a);
  v5 = PlayerCustomDungeonComp::requestDungeonBrief(this, &dungeon_guid_set, CUSTOM_DUNGEON_BRIEF_GET_GM_SCORE) != 0;
  std::set<unsigned long>::~set(&dungeon_guid_set);
  std::allocator<unsigned long>::~allocator(&__a);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__l._M_len,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "getCustomDungeonScoreByGm",
      3535);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           (common::milog::MiLogStream *const)&__l._M_len,
           (const char (*)[49])"request dungeon_guid score failed, dungeon_guid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v6,
           (const unsigned __int64 *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__l._M_len);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3540: range 0000000014187730-0000000014187B79
void __cdecl PlayerCustomDungeonComp::onServerGetDungeonScore(
        PlayerCustomDungeonComp *const this,
        const proto::ServerGetCustomDungeonBriefRsp *rsp_0)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // r14
  unsigned __int64 v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // r14
  float v12; // xmm0_4
  int val; // [rsp+18h] [rbp-118h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-114h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  const google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData> *__for_range; // [rsp+30h] [rbp-100h]
  const proto::CustomDungeonBriefRedisData *brief; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 8 oss:3546 80 40 11 gm_rsp:3552";
  *(_QWORD *)(v2 + 16) = PlayerCustomDungeonComp::onServerGetDungeonScore;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( proto::ServerGetCustomDungeonBriefRsp::retcode(rsp_0) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/custom_dungeon/player_custom_dungeon_comp.cpp",
      "onServerGetDungeonScore",
      3543);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v19,
           (const char (*)[45])"server get custom dungeon brief failed, ret:");
    val = proto::ServerGetCustomDungeonBriefRsp::retcode(rsp_0);
    v6 = common::milog::MiLogStream::operator<<<int,(int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 48));
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 48),
      "score:\n");
    __for_range = proto::ServerGetCustomDungeonBriefRsp::dungeon_brief_list(rsp_0);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CustomDungeonBriefRedisData>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      brief = google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator*(&__for_begin);
      v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
             (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 48),
             "dungeon_guid:");
      v9 = proto::CustomDungeonBriefRedisData::dungeon_guid(brief);
      v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, v9);
      v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, " score:");
      v12 = proto::CustomDungeonBriefRedisData::recommend_score(brief);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, v12);
      google::protobuf::internal::RepeatedPtrIterator<proto::CustomDungeonBriefRedisData const>::operator++(&__for_begin);
    }
    proto::GmTalkRsp::GmTalkRsp((proto::GmTalkRsp *const)(v2 + 80));
    proto::GmTalkRsp::set_retcode((proto::GmTalkRsp *const)(v2 + 80), 0);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      (std::string *)&v19,
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 48));
    proto::GmTalkRsp::set_retmsg((proto::GmTalkRsp *const)(v2 + 80), (std::string *)&v19);
    std::string::~string(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    proto::GmTalkRsp::~GmTalkRsp((proto::GmTalkRsp *const)(v2 + 80));
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 48));
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};
