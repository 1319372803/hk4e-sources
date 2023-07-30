// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_deck_system.cpp

// Line 32: range 00000000150D7E16-00000000150D7FB9
int32_t __cdecl GCGDSDeck::fromBin(GCGDSDeck *const this, const proto::GCGDSDeckBin *bin)
{
  __int64 v2; // rdx
  char v3; // al
  const std::string *v4; // rax
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  std::vector<unsigned int> *p_card_vec; // rsi
  __int64 v8; // rdx
  char v9; // al
  uint32_t v10; // ecx
  char v11; // dl
  __int64 v12; // rdx
  __int64 time; // rdx
  char v14; // al
  const proto::GCGDSDeckBin *bina; // [rsp+0h] [rbp-20h]

  bina = bin;
  v2 = proto::GCGDSDeckBin::id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(this, bin, v2);
  }
  this->id = v2;
  v4 = proto::GCGDSDeckBin::name[abi:cxx11](bina);
  std::string::operator=(&this->name, v4);
  v5 = proto::GCGDSDeckBin::character_card_list(bina);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v5, &this->character_card_vec);
  v6 = proto::GCGDSDeckBin::card_list(bina);
  p_card_vec = &this->card_vec;
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, &this->card_vec);
  v8 = proto::GCGDSDeckBin::card_back_id(bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_card_vec) = v9 != 0;
    __asan_report_store4(&this->card_back_id, p_card_vec, v8);
  }
  this->card_back_id = v8;
  v10 = proto::GCGDSDeckBin::field_id(bina);
  v11 = *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000);
  LOBYTE(p_card_vec) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((char)((((_BYTE)this + 92) & 7) + 3) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->field_id, p_card_vec, v12);
  this->field_id = v10;
  time = proto::GCGDSDeckBin::create_time(bina);
  v14 = *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_card_vec) = v14 != 0;
    __asan_report_store4(&this->create_time, p_card_vec, time);
  }
  this->create_time = time;
  return 0;
};

// Line 44: range 00000000150D7FBA-00000000150D814E
int32_t __cdecl GCGDSDeck::toBin(const GCGDSDeck *const this, proto::GCGDSDeckBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGDSDeckBin::set_id(bin, this->id);
  proto::GCGDSDeckBin::set_name(bin, &this->name);
  v2 = proto::GCGDSDeckBin::mutable_character_card_list(bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->character_card_vec, v2);
  v3 = proto::GCGDSDeckBin::mutable_card_list(bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->card_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->card_back_id);
  }
  proto::GCGDSDeckBin::set_card_back_id(bin, this->card_back_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->field_id);
  }
  proto::GCGDSDeckBin::set_field_id(bin, this->field_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->create_time);
  }
  proto::GCGDSDeckBin::set_create_time(bin, this->create_time);
  return 0;
};

// Line 56: range 00000000150D8150-00000000150D8301
int32_t __cdecl GCGDSDeck::toClient(const GCGDSDeck *const this, proto::GCGDSDeckData *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  bool isValid; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGDSDeckData::set_id(proto, this->id);
  proto::GCGDSDeckData::set_name(proto, &this->name);
  v2 = proto::GCGDSDeckData::mutable_character_card_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->character_card_vec, v2);
  v3 = proto::GCGDSDeckData::mutable_card_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->card_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->card_back_id);
  }
  proto::GCGDSDeckData::set_card_back_id(proto, this->card_back_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->field_id);
  }
  proto::GCGDSDeckData::set_field_id(proto, this->field_id);
  isValid = GCGDSDeck::isValid(this);
  proto::GCGDSDeckData::set_is_valid(proto, isValid);
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->create_time);
  }
  proto::GCGDSDeckData::set_create_time(proto, this->create_time);
  return 0;
};

// Line 69: range 00000000150D8302-00000000150D8730
int32_t __cdecl GCGDSCard::fromBin(GCGDSCard *const this, const proto::GCGDSCardBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // al
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  char v12; // al
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  const proto::GCGDSCardBin *bina; // [rsp+0h] [rbp-D0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-98h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+40h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-88h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-80h] BYREF
  char v24[96]; // [rsp+70h] [rbp-60h] BYREF

  bina = bin;
  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 31 proficiency_reward_taken_idx:78";
  *(_QWORD *)(v2 + 16) = GCGDSCard::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::GCGDSCardBin::card_id(bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(this, bin, v5);
  }
  this->card_id = v5;
  v7 = proto::GCGDSCardBin::num(bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->num, bin, v9);
  this->num = v7;
  __for_range = proto::GCGDSCardBin::unlock_face_type_list(bina);
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
    std::set<data::GCGCardFaceType>::insert(
      &this->unlock_card_face_set,
      (std::set<data::GCGCardFaceType>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  v10 = proto::GCGDSCardBin::face_type(bina);
  if ( *(_BYTE *)(((unsigned __int64)&this->face_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->face_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->face_type, v10, &this->face_type);
  }
  this->face_type = v10;
  v11 = proto::GCGDSCardBin::proficiency(bina);
  v12 = *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->proficiency, v10, v11);
  }
  this->proficiency = v11;
  __for_range_0 = proto::GCGDSCardBin::proficiency_reward_taken_idx_list(bina);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_0);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    v13 = std::set<unsigned int>::emplace<unsigned int &>(
            &this->proficiency_reward_taken_idx_set,
            (unsigned int *)(v2 + 32),
            (unsigned int *)&this->proficiency_reward_taken_idx_set);
    if ( !v13.second )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "fromBin",
        82);
      v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v23,
              (const char (*)[42])"dumplicated proficiency_reward_taken_idx:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = -1;
      goto LABEL_25;
    }
    ++__for_begin_0;
  }
  result = 0;
LABEL_25:
  if ( v24 == (char *)v2 )
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

// Line 90: range 00000000150D8732-00000000150D893F
int32_t __cdecl GCGDSCard::toBin(const GCGDSCard *const this, proto::GCGDSCardBin *bin)
{
  data::GCGCardFaceType *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  std::set<data::GCGCardFaceType>::iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::set<data::GCGCardFaceType>::iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::set<data::GCGCardFaceType> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGDSCardBin::set_card_id(bin, this->card_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->num);
  }
  proto::GCGDSCardBin::set_num(bin, this->num);
  __for_range = &this->unlock_card_face_set;
  __for_begin._M_node = std::set<data::GCGCardFaceType>::begin(&this->unlock_card_face_set)._M_node;
  __for_end._M_node = std::set<data::GCGCardFaceType>::end(&this->unlock_card_face_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (data::GCGCardFaceType *)std::_Rb_tree_const_iterator<data::GCGCardFaceType>::operator*(&__for_begin);
    v3 = (google::protobuf::uint32 *)v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::GCGDSCardBin::add_unlock_face_type_list(bin, *v3);
    std::_Rb_tree_const_iterator<data::GCGCardFaceType>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->face_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->face_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->face_type);
  }
  proto::GCGDSCardBin::set_face_type(bin, this->face_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->proficiency);
  }
  proto::GCGDSCardBin::set_proficiency(bin, this->proficiency);
  v4 = proto::GCGDSCardBin::mutable_proficiency_reward_taken_idx_list(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
    &this->proficiency_reward_taken_idx_set,
    v4);
  return 0;
};

// Line 104: range 00000000150D8940-00000000150D8B4D
int32_t __cdecl GCGDSCard::toClient(const GCGDSCard *const this, proto::GCGDSCardData *proto)
{
  data::GCGCardFaceType *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  std::set<data::GCGCardFaceType>::iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::set<data::GCGCardFaceType>::iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::set<data::GCGCardFaceType> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGDSCardData::set_card_id(proto, this->card_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->num);
  }
  proto::GCGDSCardData::set_num(proto, this->num);
  __for_range = &this->unlock_card_face_set;
  __for_begin._M_node = std::set<data::GCGCardFaceType>::begin(&this->unlock_card_face_set)._M_node;
  __for_end._M_node = std::set<data::GCGCardFaceType>::end(&this->unlock_card_face_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (data::GCGCardFaceType *)std::_Rb_tree_const_iterator<data::GCGCardFaceType>::operator*(&__for_begin);
    v3 = (google::protobuf::uint32 *)v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::GCGDSCardData::add_unlock_face_type_list(proto, *v3);
    std::_Rb_tree_const_iterator<data::GCGCardFaceType>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->face_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->face_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->face_type);
  }
  proto::GCGDSCardData::set_face_type(proto, this->face_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->proficiency);
  }
  proto::GCGDSCardData::set_proficiency(proto, this->proficiency);
  v4 = proto::GCGDSCardData::mutable_proficiency_reward_taken_idx_list(proto);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
    &this->proficiency_reward_taken_idx_set,
    v4);
  return 0;
};

// Line 118: range 00000000150D8B4E-00000000150D927D
int32_t __cdecl GCGDeckSystem::fromBin(GCGDeckSystem *const this, const proto::GCGDeckSystemBin *bin)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  common::milog::MiLogStream *v8; // r14
  GCGDSDeck *v9; // rax
  google::protobuf::RepeatedPtrField<proto::GCGDSDeckBin>::const_iterator *p_for_end; // rsi
  common::milog::MiLogStream *v11; // r14
  GCGDSCard *v12; // rax
  __int64 v13; // rdx
  char v14; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-14Ch] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_begin_0; // [rsp+18h] [rbp-148h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_end_0; // [rsp+20h] [rbp-140h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GCGDSDeckBin> *__for_range; // [rsp+28h] [rbp-138h]
  const google::protobuf::RepeatedPtrField<proto::GCGDSCardBin> *__for_range_0; // [rsp+30h] [rbp-130h]
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *__for_range_1; // [rsp+38h] [rbp-128h]
  std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > *__in; // [rsp+40h] [rbp-120h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *id; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *deck_ptr; // [rsp+50h] [rbp-110h]
  const proto::GCGDSCardBin *card_bin; // [rsp+58h] [rbp-108h]
  const proto::GCGDSDeckBin *deck_bin; // [rsp+60h] [rbp-100h]
  google::protobuf::RepeatedPtrField<proto::GCGDSDeckBin>::const_iterator __for_end; // [rsp+68h] [rbp-F8h] BYREF
  common::milog::MiLogStream v32; // [rsp+70h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 12 deck_ptr:126 80 48 16 ban_card_set:152";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  v5 = proto::GCGDeckSystemBin::unlock_card_back_id_list(bin);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_card_back_id_set, v5);
  v6 = proto::GCGDeckSystemBin::unlock_field_id_list(bin);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_field_id_set, v6);
  v7 = proto::GCGDeckSystemBin::unlock_deck_id_list(bin);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_deck_id_set, v7);
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::clear(&this->deck_map_);
  __for_range = proto::GCGDeckSystemBin::deck_list(bin);
  __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::_Base_ptr)google::protobuf::RepeatedPtrField<proto::GCGDSDeckBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGDSDeckBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GCGDSDeckBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GCGDSDeckBin> *const)&__for_end_0,
            &__for_end) )
  {
    deck_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GCGDSDeckBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::GCGDSDeckBin> *const)&__for_end_0);
    proto::GCGDSDeckBin::id(deck_bin);
    GCGDeckSystem::createDeck((GCGDeckSystem *const)(v2 + 48), (uint32_t)this);
    if ( std::operator==<GCGDSDeck>((const std::shared_ptr<GCGDSDeck> *)(v2 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "fromBin",
        129);
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v32,
             (const char (*)[27])"createDeck fail. deck_id: ");
      val = proto::GCGDSDeckBin::id(deck_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      GCGDSDeck::fromBin(v9, deck_bin);
    }
    std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::GCGDSDeckBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::GCGDSDeckBin> *const)&__for_end_0);
  }
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::clear(&this->card_map_);
  __for_range_0 = proto::GCGDeckSystemBin::card_list(bin);
  __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::_Base_ptr)google::protobuf::RepeatedPtrField<proto::GCGDSCardBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGDSCardBin>::end(__for_range_0).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::GCGDSCardBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GCGDSCardBin> *const)&__for_end_0,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GCGDSCardBin>::iterator *)&__for_end) )
      break;
    card_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GCGDSCardBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::GCGDSCardBin> *const)&__for_end_0);
    proto::GCGDSCardBin::card_id(card_bin);
    GCGDeckSystem::createCard((GCGDeckSystem *const)(v2 + 48), (uint32_t)this);
    if ( std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v2 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "fromBin",
        142);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v32,
              (const char (*)[27])"createCard fail. card_id: ");
      val = proto::GCGDSCardBin::card_id(card_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    else
    {
      v12 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      GCGDSCard::fromBin(v12, card_bin);
    }
    std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::GCGDSCardBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::GCGDSCardBin> *const)&__for_end_0);
  }
  v13 = proto::GCGDeckSystemBin::cur_deck_id(bin);
  v14 = *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_for_end) = v14 != 0;
    __asan_report_store4(&this->cur_deck_id_, p_for_end, v13);
  }
  this->cur_deck_id_ = v13;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 48));
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  FeatureSwitchMgr::getGCGBanCardSet((std::set<unsigned int> *)(v2 + 80), &v15->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 48));
  __for_range_1 = &this->deck_map_;
  __for_begin_0._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::begin(&this->deck_map_)._M_node;
  __for_end_0._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::end(__for_range_1)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator*(&__for_begin_0);
    id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
    deck_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
    if ( std::operator!=<GCGDSDeck>(deck_ptr, 0LL) )
    {
      v16 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
      __for_end.it_ = (void *const *)GCGDeckSystem::checkDeckValid(this, v16, (const std::set<unsigned int> *)(v2 + 80));
      v17 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
      std::pair<GCGDeckValidType,unsigned int>::operator=(
        &v17->valid_state,
        (std::conditional<true,std::pair<GCGDeckValidType,unsigned int>&&,std::__nonesuch_no_braces&&>::type)&__for_end);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator++(&__for_begin_0);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 80));
  result = 0;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 164: range 00000000150D927E-00000000150D949A
int32_t __cdecl GCGDeckSystem::toBin(const GCGDeckSystem *const this, proto::GCGDeckSystemBin *bin)
{
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  proto::GCGDSDeckBin *v3; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rbx
  proto::GCGDSCardBin *v5; // rax
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rax
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  const std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *__for_range; // [rsp+20h] [rbp-50h]
  const std::map<unsigned int,std::shared_ptr<GCGDSCard>> *__for_range_0; // [rsp+28h] [rbp-48h]
  const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > *v14; // [rsp+30h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *id_0; // [rsp+38h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *card_ptr; // [rsp+40h] [rbp-30h]
  const std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > *v17; // [rsp+48h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *id; // [rsp+50h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *deck_ptr; // [rsp+58h] [rbp-18h]

  __for_range = &this->deck_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::begin(&this->deck_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::end(&this->deck_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(v17);
    deck_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(v17);
    v2 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
    v3 = proto::GCGDeckSystemBin::add_deck_list(bin);
    GCGDSDeck::toBin(v2, v3);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->card_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::begin(&this->card_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Self *)&__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > > *const)&__for_begin);
    id_0 = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSCard>>(v14);
    card_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<GCGDSCard>>(v14);
    v4 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
    v5 = proto::GCGDeckSystemBin::add_card_list(bin);
    GCGDSCard::toBin(v4, v5);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > > *const)&__for_begin);
  }
  v6 = proto::GCGDeckSystemBin::mutable_unlock_card_back_id_list(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_card_back_id_set, v6);
  v7 = proto::GCGDeckSystemBin::mutable_unlock_field_id_list(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_field_id_set, v7);
  v8 = proto::GCGDeckSystemBin::mutable_unlock_deck_id_list(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_deck_id_set, v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_deck_id_);
  }
  proto::GCGDeckSystemBin::set_cur_deck_id(bin, this->cur_deck_id_);
  return 0;
};

// Line 181: range 00000000150D949C-00000000150D94BA
int32_t __cdecl GCGDeckSystem::onLogin(GCGDeckSystem *const this)
{
  GCGDeckSystem::tryUnlockDeck(this);
  return 0;
};

// Line 187: range 00000000150D94BC-00000000150D9AD3
void __cdecl GCGDeckSystem::notifyAllData(GCGDeckSystem *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  proto::GCGDSDeckData *v7; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  proto::GCGDSCardData *v9; // rax
  google::protobuf::RepeatedField<unsigned int> *v10; // rax
  google::protobuf::RepeatedField<unsigned int> *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // rax
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_begin; // [rsp+10h] [rbp-230h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_end; // [rsp+18h] [rbp-228h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *__for_range; // [rsp+20h] [rbp-220h]
  std::map<unsigned int,std::shared_ptr<GCGDSCard>> *__for_range_0; // [rsp+28h] [rbp-218h]
  std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > *v17; // [rsp+30h] [rbp-210h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *id_0; // [rsp+38h] [rbp-208h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *card_ptr; // [rsp+40h] [rbp-200h]
  std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > *__in; // [rsp+48h] [rbp-1F8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *id; // [rsp+50h] [rbp-1F0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *deck_ptr; // [rsp+58h] [rbp-1E8h]
  std::shared_ptr<Config> v23; // [rsp+60h] [rbp-1E0h] BYREF
  char v24[464]; // [rsp+70h] [rbp-1D0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(416LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 40 10 notify:190 128 48 16 ban_card_set:189 208 144 10 notify:195";
  *(_QWORD *)(v1 + 16) = GCGDeckSystem::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862731] = -202116109;
  v3[536862732] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  FeatureSwitchMgr::getGCGBanCardSet((std::set<unsigned int> *)(v1 + 128), &v4->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  proto::GCGDSBanCardNotify::GCGDSBanCardNotify((proto::GCGDSBanCardNotify *const)(v1 + 48));
  v5 = proto::GCGDSBanCardNotify::mutable_card_list((proto::GCGDSBanCardNotify *const)(v1 + 48));
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
    (const std::set<unsigned int> *)(v1 + 128),
    v5);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::GCGDSBanCardNotify::~GCGDSBanCardNotify((proto::GCGDSBanCardNotify *const)(v1 + 48));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 128));
  proto::GCGDSDataNotify::GCGDSDataNotify((proto::GCGDSDataNotify *const)(v1 + 208));
  __for_range = &this->deck_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::begin(&this->deck_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::end(&this->deck_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
    deck_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
    if ( std::operator!=<GCGDSDeck>(deck_ptr, 0LL) )
    {
      v6 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
      v7 = proto::GCGDSDataNotify::add_deck_list((proto::GCGDSDataNotify *const)(v1 + 208));
      GCGDSDeck::toClient(v6, v7);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->card_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::begin(&this->card_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Self *)&__for_end) )
  {
    v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > > *const)&__for_begin);
    id_0 = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSCard>>(v17);
    card_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGDSCard>>(v17);
    if ( std::operator!=<GCGDSCard>(card_ptr, 0LL) )
    {
      v8 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      v9 = proto::GCGDSDataNotify::add_card_list((proto::GCGDSDataNotify *const)(v1 + 208));
      GCGDSCard::toClient(v8, v9);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > > *const)&__for_begin);
  }
  v10 = proto::GCGDSDataNotify::mutable_unlock_card_back_id_list((proto::GCGDSDataNotify *const)(v1 + 208));
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_card_back_id_set, v10);
  proto::GCGDSDataNotify::add_unlock_card_back_id_list((proto::GCGDSDataNotify *const)(v1 + 208), 0);
  v11 = proto::GCGDSDataNotify::mutable_unlock_field_id_list((proto::GCGDSDataNotify *const)(v1 + 208));
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_field_id_set, v11);
  proto::GCGDSDataNotify::add_unlock_field_id_list((proto::GCGDSDataNotify *const)(v1 + 208), 0);
  v12 = proto::GCGDSDataNotify::mutable_unlock_deck_id_list((proto::GCGDSDataNotify *const)(v1 + 208));
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_deck_id_set, v12);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_deck_id_);
  }
  proto::GCGDSDataNotify::set_cur_deck_id((proto::GCGDSDataNotify *const)(v1 + 208), this->cur_deck_id_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 208));
  proto::GCGDSDataNotify::~GCGDSDataNotify((proto::GCGDSDataNotify *const)(v1 + 208));
  if ( v24 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 220: range 00000000150D9AD4-00000000150D9AEE
void __cdecl GCGDeckSystem::onGCGLevelUp(GCGDeckSystem *const this)
{
  GCGDeckSystem::tryUnlockDeck(this);
};

// Line 226: range 00000000150D9AF0-00000000150DA048
void __cdecl GCGDeckSystem::onDeckSystemOpen(GCGDeckSystem *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  const std::vector<unsigned int> *GCGDeckSystemInitCardVec; // r15
  const std::vector<unsigned int> *GCGDeckSystemInitCharacterVec; // r14
  common::milog::MiLogStream *v10; // rax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-F5h] BYREF
  uint32_t default_deck_id; // [rsp+1Ch] [rbp-F4h]
  uint32_t card_id_0; // [rsp+20h] [rbp-F0h]
  uint32_t card_id; // [rsp+24h] [rbp-ECh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+38h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-C0h] BYREF
  std::tuple<int,const std::shared_ptr<const GCGDSDeck> > __in; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v22; // [rsp+80h] [rbp-90h] BYREF
  char v23[112]; // [rsp+A0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 ret:245";
  *(_QWORD *)(v1 + 16) = GCGDeckSystem::onDeckSystemOpen;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  default_deck_id = 1;
  if ( !GCGDeckSystem::isDeckUnlock(this, 1u) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "onDeckSystemOpen",
      234);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v22,
      (const char (*)[29])"deck 1 not unlock. unlock it");
    common::milog::MiLogStream::~MiLogStream(&v22);
    GCGDeckSystem::unlockDeck(this, 1u);
  }
  __for_range = ConstValueExcelConfigMgr::getGCGDeckSystemInitCharacterVec(const_value_config_mgr);
  __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    card_id = *v5;
    GCGDeckSystem::addCard(this, card_id, 1u, 0);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = ConstValueExcelConfigMgr::getGCGDeckSystemInitCardVec(const_value_config_mgr);
  __for_begin._M_current = std::vector<unsigned int>::begin(__for_range_0)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    card_id_0 = *v7;
    GCGDeckSystem::addCard(this, card_id_0, 1u, 0);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  *(_DWORD *)(v1 + 32) = 0;
  GCGDeckSystemInitCardVec = ConstValueExcelConfigMgr::getGCGDeckSystemInitCardVec(const_value_config_mgr);
  GCGDeckSystemInitCharacterVec = ConstValueExcelConfigMgr::getGCGDeckSystemInitCharacterVec(const_value_config_mgr);
  std::allocator<char>::allocator(&__a, &__for_end);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v22, byte_25685560, &__a);
  GCGDeckSystem::saveDeck(
    &__in,
    this,
    1u,
    (const std::string *)&v22,
    GCGDeckSystemInitCharacterVec,
    GCGDeckSystemInitCardVec);
  std::tie<int,std::_Swallow_assign const>(
    (int *)&v20,
    (const std::_Swallow_assign *)(v1 + 32),
    (int *)&std::ignore,
    (const std::_Swallow_assign *)(v1 + 32));
  std::tuple<int &,std::_Swallow_assign const&>::operator=<int,std::shared_ptr<GCGDSDeck const> const>(
    (std::tuple<int&,const std::_Swallow_assign&> *const)&v20,
    &__in);
  std::tuple<int,std::shared_ptr<GCGDSDeck const> const>::~tuple(&__in);
  std::string::~string(&v22);
  std::allocator<char>::~allocator(&__a);
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/gcg_deck_system.cpp",
    "onDeckSystemOpen",
    247);
  v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v22,
          (const char (*)[25])"save default deck. ret: ");
  common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v1 + 32));
  common::milog::MiLogStream::~MiLogStream(&v22);
  GCGDeckSystem::notifyAllData(this);
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 253: range 00000000150DA04A-00000000150DA505
void __cdecl GCGDeckSystem::onAddCard(GCGDeckSystem *const this, uint32_t card_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  std::pair<GCGDeckValidType,unsigned int> *p_valid_state; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  char v11; // al
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *__for_range; // [rsp+28h] [rbp-118h]
  std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > *__in; // [rsp+30h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *id; // [rsp+38h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *deck_ptr; // [rsp+40h] [rbp-100h]
  std::pair<GCGDeckValidType,unsigned int> __p; // [rsp+48h] [rbp-F8h] BYREF
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-F0h] BYREF
  char v23[224]; // [rsp+60h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 10 notify:266 112 48 16 ban_card_set:254";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::onAddCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  FeatureSwitchMgr::getGCGBanCardSet((std::set<unsigned int> *)(v2 + 112), &v5->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  __for_range = &this->deck_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::begin(&this->deck_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::end(&this->deck_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
    deck_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
    if ( std::operator!=<GCGDSDeck>(deck_ptr, 0LL) )
    {
      v6 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
      if ( !GCGDSDeck::isValid(v6) )
      {
        v8 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
        p_valid_state = &v8->valid_state;
        if ( *(_BYTE *)(((unsigned __int64)p_valid_state >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_valid_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_valid_state >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_valid_state);
        }
        if ( v8->valid_state.first != CARD_NOT_ENOUGH )
          goto LABEL_18;
        v10 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v10->valid_state.second >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v10->valid_state.second >> 3) + 0x7FFF8000) <= 3 )
        {
          v10 = (std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->valid_state.second);
        }
        if ( card_id == v10->valid_state.second )
          v11 = 1;
        else
LABEL_18:
          v11 = 0;
        if ( v11 )
        {
          v12 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
          __p = GCGDeckSystem::checkDeckValid(this, v12, (const std::set<unsigned int> *)(v2 + 112));
          v13 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
          std::pair<GCGDeckValidType,unsigned int>::operator=(&v13->valid_state, &__p);
        }
        v14 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
        if ( GCGDSDeck::isValid(v14) )
        {
          proto::GCGDSDeckUpdateNotify::GCGDSDeckUpdateNotify((proto::GCGDSDeckUpdateNotify *const)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(id);
          }
          proto::GCGDSDeckUpdateNotify::set_deck_id((proto::GCGDSDeckUpdateNotify *const)(v2 + 48), *id);
          proto::GCGDSDeckUpdateNotify::set_is_valid((proto::GCGDSDeckUpdateNotify *const)(v2 + 48), 1);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
          proto::GCGDSDeckUpdateNotify::~GCGDSDeckUpdateNotify((proto::GCGDSDeckUpdateNotify *const)(v2 + 48));
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator++(&__for_begin);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
  if ( v23 == (char *)v2 )
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

// Line 276: range 00000000150DA506-00000000150DA5AB
void __cdecl GCGDeckSystem::onOpenStateChange(GCGDeckSystem *const this, const OpenStateChangeEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->key);
  }
  if ( event->key == 3304 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->value);
    }
    if ( event->value )
      GCGDeckSystem::onDeckSystemOpen(this);
  }
};

// Line 284: range 00000000150DA5AC-00000000150DA8C5
void __cdecl GCGDeckSystem::refreshBanCard(GCGDeckSystem *const this, const std::set<unsigned int> *ban_card_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isValid; // al
  bool old_valid_state; // [rsp+17h] [rbp-B9h]
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *__for_range; // [rsp+28h] [rbp-A8h]
  std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > *__in; // [rsp+30h] [rbp-A0h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *id; // [rsp+38h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *deck_ptr; // [rsp+40h] [rbp-90h]
  std::pair<GCGDeckValidType,unsigned int> __p; // [rsp+48h] [rbp-88h] BYREF
  char v19[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:291";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::refreshBanCard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  __for_range = &this->deck_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::begin(&this->deck_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::end(&this->deck_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
    deck_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
    v5 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
    old_valid_state = GCGDSDeck::isValid(v5);
    v6 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
    __p = GCGDeckSystem::checkDeckValid(this, v6, ban_card_set);
    v7 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
    std::pair<GCGDeckValidType,unsigned int>::operator=(&v7->valid_state, &__p);
    v8 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
    if ( old_valid_state != GCGDSDeck::isValid(v8) )
    {
      proto::GCGDSDeckUpdateNotify::GCGDSDeckUpdateNotify((proto::GCGDSDeckUpdateNotify *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      proto::GCGDSDeckUpdateNotify::set_deck_id((proto::GCGDSDeckUpdateNotify *const)(v2 + 32), *id);
      v9 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
      isValid = GCGDSDeck::isValid(v9);
      proto::GCGDSDeckUpdateNotify::set_is_valid((proto::GCGDSDeckUpdateNotify *const)(v2 + 32), isValid);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
      proto::GCGDSDeckUpdateNotify::~GCGDSDeckUpdateNotify((proto::GCGDSDeckUpdateNotify *const)(v2 + 32));
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator++(&__for_begin);
  }
  if ( v19 == (char *)v2 )
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

// Line 300: range 00000000150DA8C6-00000000150DAE48
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall GCGDeckSystem::setDeckCardBackId(GCGDeckSystem *const this, uint32_t deck_id, uint32_t card_back_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  int v11; // r14d
  __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rdx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetCardBack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetCardBack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v18; // r14
  __int64 result; // rax
  std::string v20; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+50h] [rbp-D0h] BYREF

  v20._M_string_length = (std::string::size_type)this;
  v20._M_dataplus._M_p = (std::string::pointer)__PAIR64__(deck_id, card_back_id);
  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 10 holder:320 64 4 11 deck_id:299 80 4 16 card_back_id:299 96 16 12 deck_ptr:311 128 16 11 log_ptr:321";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::setDeckCardBackId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 64) = HIDWORD(v20._M_dataplus._M_p);
  *(_DWORD *)(v3 + 80) = v20._M_dataplus._M_p;
  if ( !GCGDeckSystem::isCardBackUnlock((const GCGDeckSystem *const)v20._M_string_length, *(_DWORD *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "setDeckCardBackId",
      303);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v22,
           (const char (*)[36])"card back is locked. card_back_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v7 = 12214;
  }
  else if ( !GCGDeckSystem::isDeckUnlock((const GCGDeckSystem *const)v20._M_string_length, *(_DWORD *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "setDeckCardBackId",
      308);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v22,
           (const char (*)[26])"deck is locked. deck_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v7 = 12201;
  }
  else
  {
    GCGDeckSystem::findDeck((const GCGDeckSystem *const)(v3 + 96), v20._M_string_length);
    v9 = 0LL;
    if ( std::operator==<GCGDSDeck>((const std::shared_ptr<GCGDSDeck> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "setDeckCardBackId",
        314);
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v22,
              (const char (*)[31])"findDeck is nullptr. deck_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v22);
      v7 = 12207;
    }
    else
    {
      v11 = *(_DWORD *)(v3 + 80);
      v12 = (__int64)std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v13 = *(_BYTE *)(((unsigned __int64)(v12 + 88) >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v13 != 0;
      v14 = (v13 != 0) & (unsigned __int8)(v13 <= 3);
      if ( (_BYTE)v14 )
        v12 = __asan_report_store4(v12 + 88, v9, v14);
      *(_DWORD *)(v12 + 88) = v11;
      if ( *(_BYTE *)((v20._M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(v20._M_string_length);
      BasicComp = Player::getBasicComp(*(Player *const *)v20._M_string_length);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v22, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xEB7u, v20);
      std::string::~string(&v22);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgSetCardBack>();
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetCardBack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetCardBack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      proto_log::PlayerLogBodyGcgSetCardBack::set_deck_id(v16, *(_DWORD *)(v3 + 64));
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetCardBack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetCardBack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      proto_log::PlayerLogBodyGcgSetCardBack::set_card_back_id(v17, *(_DWORD *)(v3 + 80));
      if ( *(_BYTE *)((v20._M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(v20._M_string_length);
      v18 = *(Player **)v20._M_string_length;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgSetCardBack,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&v20._anon_0,
        (const std::shared_ptr<proto_log::PlayerLogBodyGcgSetCardBack> *)(v3 + 128));
      Player::printStatLog(v18, (MessagePtr *)&v20._anon_0, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v20._anon_0);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      v7 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyGcgSetCardBack>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgSetCardBack> *const)(v3 + 128));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
    std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v3 + 96));
  }
  result = v7;
  if ( v23 == (char *)v3 )
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
  return result;
};

// Line 330: range 00000000150DAE4A-00000000150DB3D5
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall GCGDeckSystem::setDeckFieldId(GCGDeckSystem *const this, uint32_t deck_id, uint32_t field_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  uint32_t v11; // r14d
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  char v13; // cl
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetField,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetField,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *v17; // r14
  __int64 result; // rax
  std::string v19; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+50h] [rbp-D0h] BYREF

  v19._M_string_length = (std::string::size_type)this;
  v19._M_dataplus._M_p = (std::string::pointer)__PAIR64__(deck_id, field_id);
  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 10 holder:350 64 4 11 deck_id:329 80 4 12 field_id:329 96 16 12 deck_ptr:341 128 16 11 log_ptr:351";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::setDeckFieldId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 64) = HIDWORD(v19._M_dataplus._M_p);
  *(_DWORD *)(v3 + 80) = v19._M_dataplus._M_p;
  if ( !GCGDeckSystem::isFieldUnlock((const GCGDeckSystem *const)v19._M_string_length, *(_DWORD *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "setDeckFieldId",
      333);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v21,
           (const char (*)[31])"field_id is locked. field_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v7 = 12211;
  }
  else if ( !GCGDeckSystem::isDeckUnlock((const GCGDeckSystem *const)v19._M_string_length, *(_DWORD *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "setDeckFieldId",
      338);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v21,
           (const char (*)[26])"deck is locked. deck_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v7 = 12201;
  }
  else
  {
    GCGDeckSystem::findDeck((const GCGDeckSystem *const)(v3 + 96), v19._M_string_length);
    v9 = 0LL;
    if ( std::operator==<GCGDSDeck>((const std::shared_ptr<GCGDSDeck> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "setDeckFieldId",
        344);
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v21,
              (const char (*)[31])"findDeck is nullptr. deck_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v7 = 12207;
    }
    else
    {
      v11 = *(_DWORD *)(v3 + 80);
      v12 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v13 = *(_BYTE *)(((unsigned __int64)&v12->field_id >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)((((_BYTE)v12 + 92) & 7) + 3) >= v13 )
      {
        LOBYTE(v9) = v13 != 0;
        __asan_report_store4(&v12->field_id, v9, v12);
      }
      v12->field_id = v11;
      if ( *(_BYTE *)((v19._M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(v19._M_string_length);
      BasicComp = Player::getBasicComp(*(Player *const *)v19._M_string_length);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xEB8u, v19);
      std::string::~string(&v21);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgSetField>();
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetField,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetField,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      proto_log::PlayerLogBodyGcgSetField::set_deck_id(v15, *(_DWORD *)(v3 + 64));
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetField,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetField,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      proto_log::PlayerLogBodyGcgSetField::set_field_id(v16, *(_DWORD *)(v3 + 80));
      if ( *(_BYTE *)((v19._M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(v19._M_string_length);
      v17 = *(Player **)v19._M_string_length;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgSetField,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&v19._anon_0,
        (const std::shared_ptr<proto_log::PlayerLogBodyGcgSetField> *)(v3 + 128));
      Player::printStatLog(v17, (MessagePtr *)&v19._anon_0, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v19._anon_0);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      v7 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyGcgSetField>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgSetField> *const)(v3 + 128));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
    std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v3 + 96));
  }
  result = v7;
  if ( v22 == (char *)v3 )
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
  return result;
};

// Line 360: range 00000000150DB3D6-00000000150DB6A7
__int64 __fastcall GCGDeckSystem::setDeckName(GCGDeckSystem *const this, uint32_t deck_id, const std::string *name)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 deck_id:359 64 16 12 deck_ptr:370";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::setDeckName;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = deck_id;
  if ( (unsigned __int8)std::string::empty(name) )
  {
    v6 = 12202;
  }
  else if ( !GCGDeckSystem::isDeckUnlock(this, *(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "setDeckName",
      367);
    v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v12,
           (const char (*)[26])"deck is locked. deck_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v6 = 12201;
  }
  else
  {
    GCGDeckSystem::findDeck((const GCGDeckSystem *const)(v3 + 64), (uint32_t)this);
    if ( std::operator==<GCGDSDeck>((const std::shared_ptr<GCGDSDeck> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "setDeckName",
        373);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v12,
             (const char (*)[31])"findDeck is nullptr. deck_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
      v6 = 12207;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      std::string::operator=(&v9->name, name);
      v6 = 0;
    }
    std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v3 + 64));
  }
  result = v6;
  if ( v13 == (char *)v3 )
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

// Line 381: range 00000000150DB6A8-00000000150DBF3D
std::tuple<int,const std::shared_ptr<const GCGDSDeck> > *__fastcall GCGDeckSystem::saveDeck(
        std::tuple<int,const std::shared_ptr<const GCGDSDeck> > *retstr,
        GCGDeckSystem *const this,
        __int32 deck_id,
        const std::string *name,
        const std::vector<unsigned int> *character_card_vec,
        std::vector<unsigned int> *card_vec)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  PlayerEventComp *EventComp; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  google::protobuf::RepeatedField<unsigned int> *v22; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  google::protobuf::RepeatedField<unsigned int> *v24; // rax
  Player *player; // r14
  std::shared_ptr<GCGDSDeck> *v26; // r8
  std::string card_veca; // [rsp+0h] [rbp-170h]
  const std::vector<unsigned int> *card_vecb; // [rsp+0h] [rbp-170h]
  const std::vector<unsigned int> *character_card_veca; // [rsp+8h] [rbp-168h]
  const std::string *namea; // [rsp+10h] [rbp-160h]
  int __args_1; // [rsp+34h] [rbp-13Ch] BYREF
  proto::Retcode __args_0[2]; // [rsp+38h] [rbp-138h] BYREF
  std::shared_ptr<GCGSaveDeckEvent> __r; // [rsp+40h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v35; // [rsp+50h] [rbp-120h] BYREF
  std::tuple<int,std::shared_ptr<GCGDSDeck> > __in; // [rsp+60h] [rbp-110h] BYREF
  common::milog::MiLogStream v37; // [rsp+80h] [rbp-F0h] BYREF
  char v38[208]; // [rsp+A0h] [rbp-D0h] BYREF

  *((_DWORD *)&card_veca._anon_0._M_allocated_capacity + 3) = deck_id;
  card_veca._anon_0._M_allocated_capacity = (std::string::size_type)name;
  card_veca._M_string_length = (std::string::size_type)character_card_vec;
  card_veca._M_dataplus._M_p = (std::string::pointer)card_vec;
  v6 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 1 10 holder:411 64 4 7 ret:387 80 4 11 deck_id:380 96 16 12 deck_ptr:393 128 16 11 log_ptr:412";
  *(_QWORD *)(v6 + 16) = GCGDeckSystem::saveDeck;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -234556924;
  v8[536862723] = -219021312;
  v8[536862724] = -202178560;
  *(_DWORD *)(v6 + 80) = *((_DWORD *)&card_veca._anon_0._M_allocated_capacity + 3);
  if ( !GCGDeckSystem::isDeckUnlock(this, *(_DWORD *)(v6 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "saveDeck",
      384);
    v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v37,
           (const char (*)[26])"deck is locked. deck_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 80));
    common::milog::MiLogStream::~MiLogStream(&v37);
    *(_QWORD *)__args_0 = 0LL;
    __args_1 = 12201;
    std::make_tuple<proto::Retcode,decltype(nullptr)>((proto::Retcode *)&v35, &__args_1, __args_0, &__args_1);
    std::tuple<int,std::shared_ptr<GCGDSDeck const> const>::tuple<proto::Retcode,decltype(nullptr),true>(
      retstr,
      (std::tuple<proto::Retcode,std::nullptr_t> *)&v35);
  }
  else
  {
    *(_DWORD *)(v6 + 64) = GCGDeckSystem::checkDeckCanSave(
                             this,
                             (const std::vector<unsigned int> *)card_veca._M_string_length,
                             (const std::vector<unsigned int> *)card_veca._M_dataplus._M_p);
    if ( *(_DWORD *)(v6 + 64) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "saveDeck",
        390);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v37,
              (const char (*)[26])"save check is fail. ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v6 + 64));
      common::milog::MiLogStream::~MiLogStream(&v37);
      *(_QWORD *)__args_0 = 0LL;
      std::make_tuple<int &,decltype(nullptr)>((int *)&v35, (void *)(v6 + 64), (int *)__args_0, (void *)(v6 + 64));
      std::tuple<int,std::shared_ptr<GCGDSDeck const> const>::tuple<int,decltype(nullptr),true>(
        retstr,
        (std::tuple<int,std::nullptr_t> *)&v35);
    }
    else
    {
      GCGDeckSystem::getDeck((GCGDeckSystem *const)(v6 + 96), (uint32_t)this);
      if ( std::operator==<GCGDSDeck>((const std::shared_ptr<GCGDSDeck> *)(v6 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "saveDeck",
          396);
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v37,
                (const char (*)[30])"getDeck is nullptr. deck_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v6 + 80));
        common::milog::MiLogStream::~MiLogStream(&v37);
        *(_QWORD *)__args_0 = 0LL;
        __args_1 = 12207;
        std::make_tuple<proto::Retcode,decltype(nullptr)>((proto::Retcode *)&v35, &__args_1, __args_0, &__args_1);
        std::tuple<int,std::shared_ptr<GCGDSDeck const> const>::tuple<proto::Retcode,decltype(nullptr),true>(
          retstr,
          (std::tuple<proto::Retcode,std::nullptr_t> *)&v35);
      }
      else
      {
        v12 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        std::string::operator=(&v12->name, card_veca._anon_0._M_allocated_capacity);
        v13 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        std::vector<unsigned int>::operator=(
          &v13->character_card_vec,
          (const std::vector<unsigned int> *)card_veca._M_string_length);
        v14 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        std::vector<unsigned int>::operator=(
          &v14->card_vec,
          (const std::vector<unsigned int> *)card_veca._M_dataplus._M_p);
        v15 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        *(std::pair<GCGDeckValidType,unsigned int> *)__args_0 = GCGDeckSystem::checkDeckValid(this, v15);
        v16 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        std::pair<GCGDeckValidType,unsigned int>::operator=(
          &v16->valid_state,
          (std::conditional<true,std::pair<GCGDeckValidType,unsigned int>&&,std::__nonesuch_no_braces&&>::type)__args_0);
        if ( !GCGDeckSystem::getCurDeckId(this) )
          GCGDeckSystem::resetCurDeck(this);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        EventComp = Player::getEventComp(this->player_);
        common::tools::perf::make_shared<GCGSaveDeckEvent,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v6 + 80));
        std::shared_ptr<BaseEvent>::shared_ptr<GCGSaveDeckEvent,void>((std::shared_ptr<BaseEvent> *const)&v35, &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v35);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v35);
        std::shared_ptr<GCGSaveDeckEvent>::~shared_ptr(&__r);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v37, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48), 0xEB6u, card_veca);
        std::string::~string(&v37);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgSaveDeck>();
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
        proto_log::PlayerLogBodyGcgSaveDeck::set_deck_id(v19, *(_DWORD *)(v6 + 80));
        v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
        proto_log::PlayerLogBodyGcgSaveDeck::set_deck_name(v20, namea);
        v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
        v22 = proto_log::PlayerLogBodyGcgSaveDeck::mutable_character_card_list(v21);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(character_card_veca, v22);
        v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSaveDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
        v24 = proto_log::PlayerLogBodyGcgSaveDeck::mutable_card_list(v23);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(card_vecb, v24);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v35, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgSaveDeck,void>(
          (std::shared_ptr<google::protobuf::Message> *const)&__r,
          (const std::shared_ptr<proto_log::PlayerLogBodyGcgSaveDeck> *)(v6 + 128));
        Player::printStatLog(player, (MessagePtr *)&__r, &v35, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v35);
        __args_1 = 0;
        std::make_tuple<int,std::shared_ptr<GCGDSDeck> &>(
          &__in,
          &__args_1,
          (std::shared_ptr<GCGDSDeck> *)(v6 + 96),
          &__args_1,
          v26);
        std::tuple<int,std::shared_ptr<GCGDSDeck const> const>::tuple<int,std::shared_ptr<GCGDSDeck>,true>(
          retstr,
          &__in);
        std::tuple<int,std::shared_ptr<GCGDSDeck>>::~tuple(&__in);
        std::shared_ptr<proto_log::PlayerLogBodyGcgSaveDeck>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgSaveDeck> *const)(v6 + 128));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48));
      }
      std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v6 + 96));
    }
  }
  if ( v38 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 423: range 00000000150DBF3E-00000000150DCB26
__int64 __fastcall GCGDeckSystem::addCard(GCGDeckSystem *const this, __int32 card_id, __int32 count, __int8 is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  uint32_t *p_num; // rax
  uint32_t num; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  uint32_t *v22; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  uint32_t *v24; // rax
  __int64 M_allocated_capacity_low; // rsi
  SelectType v26; // r14d
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  char v28; // cl
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  uint32_t *v30; // rax
  uint32_t v31; // ecx
  uint32_t limit; // r14d
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  char v34; // cl
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  uint32_t *v36; // rax
  PlayerEventComp *EventComp; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // r14
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rdx
  uint32_t *v44; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v47; // [rsp+0h] [rbp-160h]
  google::protobuf::uint32 counta; // [rsp+10h] [rbp-150h]
  GCGDeckSystem *thisa; // [rsp+18h] [rbp-148h]
  uint32_t before_count; // [rsp+24h] [rbp-13Ch]
  const data::GCGDeckCardExcelConfig *card_config_ptr; // [rsp+28h] [rbp-138h]
  std::shared_ptr<GCGAddCardEvent> __r; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v53; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v54; // [rsp+50h] [rbp-110h] BYREF
  char v55[240]; // [rsp+70h] [rbp-F0h] BYREF

  *(&v47._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v47._anon_0._M_allocated_capacity) = card_id;
  *(_DWORD *)v47._anon_0._M_local_buf = count;
  BYTE4(v47._M_string_length) = is_notify;
  v4 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 1 10 holder:467 48 4 11 card_id:422 64 16 12 card_ptr:440 96 16 11 log_ptr:468 128 32 10 notify:458";
  *(_QWORD *)(v4 + 16) = GCGDeckSystem::addCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = card_id;
  if ( *(_DWORD *)v47._anon_0._M_local_buf )
  {
    if ( !GCGDeckSystem::isCardIdValid(this, *(_DWORD *)(v4 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "addCard",
        431);
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v54,
             (const char (*)[18])"invalid card id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v54);
      v7 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v53);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
      card_config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(
                          &v9->design_config.txt_config_mgr.gcg_deck_config_mgr,
                          *(_DWORD *)(v4 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
      if ( card_config_ptr )
      {
        GCGDeckSystem::getCard((GCGDeckSystem *const)(v4 + 64), (uint32_t)this);
        if ( std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v4 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v54,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/card_game/gcg_deck_system.cpp",
            "addCard",
            443);
          v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v54,
                  (const char (*)[30])"getCard is nullptr. card_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v54);
          v7 = -1;
        }
        else
        {
          v12 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          p_num = &v12->num;
          if ( *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_num);
          }
          num = v12->num;
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&card_config_ptr->limit);
          }
          if ( num < card_config_ptr->limit )
          {
            v21 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v22 = &v21->num;
            if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v22);
            }
            before_count = v21->num;
            v23 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v24 = &v23->num;
            if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v24);
            }
            M_allocated_capacity_low = LODWORD(v47._anon_0._M_allocated_capacity);
            v26 = SAFE_ADD<unsigned int,unsigned int>(v23->num, v47._anon_0._M_allocated_capacity);
            v27 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v28 = *(_BYTE *)(((unsigned __int64)&v27->num >> 3) + 0x7FFF8000);
            if ( v28 != 0 && (char)((((_BYTE)v27 + 4) & 7) + 3) >= v28 )
            {
              LOBYTE(M_allocated_capacity_low) = v28 != 0;
              __asan_report_store4(&v27->num, M_allocated_capacity_low, v27);
            }
            v27->num = v26;
            v29 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v30 = &v29->num;
            if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v30);
            }
            v31 = v29->num;
            if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&card_config_ptr->limit);
            }
            if ( v31 > card_config_ptr->limit )
            {
              limit = card_config_ptr->limit;
              v33 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              v34 = *(_BYTE *)(((unsigned __int64)&v33->num >> 3) + 0x7FFF8000);
              if ( v34 != 0 && (char)((((_BYTE)v33 + 4) & 7) + 3) >= v34 )
              {
                LOBYTE(M_allocated_capacity_low) = v34 != 0;
                __asan_report_store4(&v33->num, M_allocated_capacity_low, v33);
              }
              v33->num = limit;
            }
            proto::GCGDSCardNumChangeNotify::GCGDSCardNumChangeNotify((proto::GCGDSCardNumChangeNotify *const)(v4 + 128));
            proto::GCGDSCardNumChangeNotify::set_card_id(
              (proto::GCGDSCardNumChangeNotify *const)(v4 + 128),
              *(_DWORD *)(v4 + 48));
            v35 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v36 = &v35->num;
            if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v36);
            }
            proto::GCGDSCardNumChangeNotify::set_num((proto::GCGDSCardNumChangeNotify *const)(v4 + 128), v35->num);
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            Player::sendProto(this->player_, (const google::protobuf::Message *)(v4 + 128));
            GCGDeckSystem::onAddCard(this, *(_DWORD *)(v4 + 48));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            EventComp = Player::getEventComp(this->player_);
            common::tools::perf::make_shared<GCGAddCardEvent,unsigned int &>(
              (unsigned int *)&__r,
              (unsigned int *)(v4 + 48));
            std::shared_ptr<BaseEvent>::shared_ptr<GCGAddCardEvent,void>((std::shared_ptr<BaseEvent> *const)&v53, &__r);
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v53);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v53);
            std::shared_ptr<GCGAddCardEvent>::~shared_ptr(&__r);
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            BasicComp = Player::getBasicComp(this->player_);
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v54, BasicComp);
            StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xEB2u, v47);
            std::string::~string(&v54);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgAddCard>();
            v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            proto_log::PlayerLogBodyGcgAddCard::set_card_id(v39, *(_DWORD *)(v4 + 48));
            v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            proto_log::PlayerLogBodyGcgAddCard::set_add_count(v40, counta);
            v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            proto_log::PlayerLogBodyGcgAddCard::set_before_count(v41, before_count);
            v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            v43 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v44 = &v43->num;
            if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v44);
            }
            proto_log::PlayerLogBodyGcgAddCard::set_after_count(v42, v43->num);
            if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
              __asan_report_load8(thisa);
            player = thisa->player_;
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v53, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgAddCard,void>(
              (std::shared_ptr<google::protobuf::Message> *const)&__r,
              (const std::shared_ptr<proto_log::PlayerLogBodyGcgAddCard> *)(v4 + 96));
            Player::printStatLog(player, (MessagePtr *)&__r, &v53, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v53);
            v7 = 0;
            std::shared_ptr<proto_log::PlayerLogBodyGcgAddCard>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgAddCard> *const)(v4 + 96));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
            proto::GCGDSCardNumChangeNotify::~GCGDSCardNumChangeNotify((proto::GCGDSCardNumChangeNotify *const)(v4 + 128));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v54,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/card_game/gcg_deck_system.cpp",
              "addCard",
              448);
            v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v54,
                    (const char (*)[33])"card num exceed limit. card_id: ");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v4 + 48));
            v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" num: ");
            v18 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v18->num);
            v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" limit: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &card_config_ptr->limit);
            common::milog::MiLogStream::~MiLogStream(&v54);
            v7 = 12206;
          }
        }
        std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v4 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "addCard",
          437);
        v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v54,
                (const char (*)[43])"findGCGDeckCardExcelConfig fail. card_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v54);
        v7 = 12208;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "addCard",
      426);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v54, (const char (*)[21])off_25704620);
    common::milog::MiLogStream::~MiLogStream(&v54);
    v7 = -1;
  }
  result = v7;
  if ( v55 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
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

// Line 479: range 00000000150DCB28-00000000150DD10C
void __fastcall GCGDeckSystem::addCardProficiency(GCGDeckSystem *const this, uint32_t card_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  uint32_t *p_num; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  SelectType_0 v13; // r14d
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rsi
  __int64 v17; // rdx
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::shared_ptr<GCGAddCardProficiencyEvent> __r; // [rsp+10h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v22; // [rsp+20h] [rbp-E0h] BYREF
  char v23[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 card_id:478 64 16 12 card_ptr:481 96 32 10 notify:509";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::addCardProficiency;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = card_id;
  GCGDeckSystem::findCard((GCGDeckSystem *const)(v2 + 64), (uint32_t)this);
  if ( std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "addCardProficiency",
      484);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[29])"find card_id fail. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    p_num = &v6->num;
    if ( *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_num);
    }
    if ( v6->num )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      v10 = GCGGameExcelConfigMgr::getCardType(
              &v9->design_config.txt_config_mgr.gcg_game_config_mgr,
              *(_DWORD *)(v2 + 48)) != GCG_CARD_CHARACTER;
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( v10 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "addCardProficiency",
          495);
        v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                (common::milog::MiLogStream *const)(v2 + 96),
                (const char (*)[35])"card_type not character. card_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      }
      else
      {
        v12 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v12->proficiency >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->proficiency >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->proficiency);
        }
        v16 = 1LL;
        v13 = SAFE_ADD<unsigned int,int>(v12->proficiency, 1);
        v14 = (__int64)std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v15 = *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000);
        LOBYTE(v16) = v15 != 0;
        v17 = (v15 != 0) & (unsigned __int8)(v15 <= 3);
        if ( (_BYTE)v17 )
          v14 = __asan_report_store4(v14 + 8, v16, v17);
        *(_DWORD *)(v14 + 8) = v13;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        EventComp = Player::getEventComp(this->player_);
        v19 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        common::tools::perf::make_shared<GCGAddCardProficiencyEvent,unsigned int &,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v2 + 48),
          &v19->proficiency,
          (unsigned int *)(v2 + 48));
        std::shared_ptr<BaseEvent>::shared_ptr<GCGAddCardProficiencyEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v22,
          &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v22);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v22);
        std::shared_ptr<GCGAddCardProficiencyEvent>::~shared_ptr(&__r);
        proto::GCGDSCardProficiencyNotify::GCGDSCardProficiencyNotify((proto::GCGDSCardProficiencyNotify *const)(v2 + 96));
        proto::GCGDSCardProficiencyNotify::set_card_id(
          (proto::GCGDSCardProficiencyNotify *const)(v2 + 96),
          *(_DWORD *)(v2 + 48));
        v20 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v20->proficiency >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v20->proficiency >> 3) + 0x7FFF8000) <= 3 )
        {
          v20 = (std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v20->proficiency);
        }
        proto::GCGDSCardProficiencyNotify::set_proficiency(
          (proto::GCGDSCardProficiencyNotify *const)(v2 + 96),
          v20->proficiency);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
        proto::GCGDSCardProficiencyNotify::~GCGDSCardProficiencyNotify((proto::GCGDSCardProficiencyNotify *const)(v2 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "addCardProficiency",
        489);
      v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[25])"card num is 0. card_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    }
  }
  std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v2 + 64));
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 516: range 00000000150DD10E-00000000150DD9B8
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall GCGDeckSystem::unlockCardFace(GCGDeckSystem *const this, uint32_t card_id, unsigned int face_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  PlayerEventComp *EventComp; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockCardFace,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockCardFace,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *v20; // r14
  __int64 result; // rax
  std::string v22; // [rsp+0h] [rbp-180h] OVERLAPPED BYREF
  char *val; // [rsp+20h] [rbp-160h] BYREF
  const GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+28h] [rbp-158h]
  std::shared_ptr<GCGUnlockCardFaceEvent> __r; // [rsp+30h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> v26; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-130h] BYREF
  char v28[272]; // [rsp+70h] [rbp-110h] BYREF

  v22._M_string_length = (std::string::size_type)this;
  v22._M_dataplus._M_p = (std::string::pointer)__PAIR64__(card_id, face_type);
  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 10 holder:553 64 4 11 card_id:515 80 4 13 face_type:515 96 16 12 card_ptr:534 128 16 11 l"
                        "og_ptr:554 160 32 10 notify:545";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::unlockCardFace;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 64) = HIDWORD(v22._M_dataplus._M_p);
  *(_DWORD *)(v3 + 80) = v22._M_dataplus._M_p;
  if ( GCGDeckSystem::isCardFaceUnlock(
         (const GCGDeckSystem *const)v22._M_string_length,
         *(_DWORD *)(v3 + 64),
         *(data::GCGCardFaceType *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "unlockCardFace",
      519);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v27,
           (const char (*)[36])"card face already unlock. card_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" face_type: ");
    val = (char *)data::enumValToStr((data::GCGCardFaceType)*(_DWORD *)(v3 + 80));
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v9 = 12209;
  }
  else if ( !GCGDeckSystem::isCardIdValid((const GCGDeckSystem *const)v22._M_string_length, *(_DWORD *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "unlockCardFace",
      524);
    v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v27,
            (const char (*)[27])"card id invalid. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v9 = 12208;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.gcg_deck_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
    if ( !GCGDeckExcelConfigMgr::isCardFaceTypeValid(
            gcg_deck_config_mgr,
            *(_DWORD *)(v3 + 64),
            *(data::GCGCardFaceType *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "unlockCardFace",
        530);
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v27,
              (const char (*)[34])"invalid card face type. card_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" face_type: ");
      val = (char *)data::enumValToStr((data::GCGCardFaceType)*(_DWORD *)(v3 + 80));
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v9 = 12208;
    }
    else
    {
      GCGDeckSystem::getCard((GCGDeckSystem *const)(v3 + 96), v22._M_string_length);
      if ( std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "unlockCardFace",
          537);
        v14 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v27,
                (const char (*)[24])"getCard fail. card_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v9 = 12208;
      }
      else
      {
        v15 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        std::set<data::GCGCardFaceType>::insert(
          &v15->unlock_card_face_set,
          (const std::set<data::GCGCardFaceType>::value_type *)(v3 + 80));
        if ( *(_BYTE *)((v22._M_string_length >> 3) + 0x7FFF8000) )
          __asan_report_load8(v22._M_string_length);
        EventComp = Player::getEventComp(*(Player *const *)v22._M_string_length);
        *((_DWORD *)&v22._anon_0._M_allocated_capacity + 3) = *(_DWORD *)(v3 + 80);
        common::tools::perf::make_shared<GCGUnlockCardFaceEvent,unsigned int &,unsigned int>(
          (unsigned int *)&__r,
          (unsigned int *)(v3 + 64),
          (unsigned int *)&v22._anon_0._M_allocated_capacity + 3,
          (unsigned int *)(v3 + 64));
        std::shared_ptr<BaseEvent>::shared_ptr<GCGUnlockCardFaceEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v26,
          &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v26);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v26);
        std::shared_ptr<GCGUnlockCardFaceEvent>::~shared_ptr(&__r);
        proto::GCGDSCardFaceUnlockNotify::GCGDSCardFaceUnlockNotify((proto::GCGDSCardFaceUnlockNotify *const)(v3 + 160));
        proto::GCGDSCardFaceUnlockNotify::set_card_id(
          (proto::GCGDSCardFaceUnlockNotify *const)(v3 + 160),
          *(_DWORD *)(v3 + 64));
        proto::GCGDSCardFaceUnlockNotify::set_face_type(
          (proto::GCGDSCardFaceUnlockNotify *const)(v3 + 160),
          *(_DWORD *)(v3 + 80));
        if ( *(_BYTE *)((v22._M_string_length >> 3) + 0x7FFF8000) )
          __asan_report_load8(v22._M_string_length);
        Player::sendProto(*(Player *const *)v22._M_string_length, (const google::protobuf::Message *)(v3 + 160));
        GCGDeckSystem::setCardFaceType(
          (GCGDeckSystem *const)v22._M_string_length,
          *(_DWORD *)(v3 + 64),
          *(data::GCGCardFaceType *)(v3 + 80));
        if ( *(_BYTE *)((v22._M_string_length >> 3) + 0x7FFF8000) )
          __asan_report_load8(v22._M_string_length);
        BasicComp = Player::getBasicComp(*(Player *const *)v22._M_string_length);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v27, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xEB3u, v22);
        std::string::~string(&v27);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgUnlockCardFace>();
        v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockCardFace,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockCardFace,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        proto_log::PlayerLogBodyGcgUnlockCardFace::set_card_id(v18, *(_DWORD *)(v3 + 64));
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockCardFace,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockCardFace,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        proto_log::PlayerLogBodyGcgUnlockCardFace::set_face_type(v19, *(_DWORD *)(v3 + 80));
        if ( *(_BYTE *)((v22._M_string_length >> 3) + 0x7FFF8000) )
          __asan_report_load8(v22._M_string_length);
        v20 = *(Player **)v22._M_string_length;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v26, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgUnlockCardFace,void>(
          (std::shared_ptr<google::protobuf::Message> *const)&__r,
          (const std::shared_ptr<proto_log::PlayerLogBodyGcgUnlockCardFace> *)(v3 + 128));
        Player::printStatLog(v20, (MessagePtr *)&__r, &v26, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v26);
        v9 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyGcgUnlockCardFace>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgUnlockCardFace> *const)(v3 + 128));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
        proto::GCGDSCardFaceUnlockNotify::~GCGDSCardFaceUnlockNotify((proto::GCGDSCardFaceUnlockNotify *const)(v3 + 160));
      }
      std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v3 + 96));
    }
  }
  result = v9;
  if ( v28 == (char *)v3 )
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
  return result;
};

// Line 563: range 00000000150DD9BA-00000000150DDE20
__int64 __fastcall GCGDeckSystem::setCardFaceType(
        GCGDeckSystem *const this,
        uint32_t card_id,
        unsigned __int32 face_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  __int64 v11; // rsi
  common::milog::MiLogStream *v12; // rax
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rdx
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-D8h] BYREF
  char v19[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 card_id:562 64 16 12 card_ptr:574 96 32 10 notify:582";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::setCardFaceType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = card_id;
  if ( !GCGDeckSystem::isCardIdValid(this, *(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "setCardFaceType",
      566);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[27])"card id invalid. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    v7 = 12208;
  }
  else if ( !GCGDeckSystem::isCardFaceUnlock(this, *(_DWORD *)(v3 + 48), (data::GCGCardFaceType)face_type) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "setCardFaceType",
      571);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[29])"card face is lock. card_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" face_type: ");
    val = (char *)data::enumValToStr((data::GCGCardFaceType)face_type);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    v7 = 12210;
  }
  else
  {
    GCGDeckSystem::findCard((GCGDeckSystem *const)(v3 + 64), (uint32_t)this);
    v11 = 0LL;
    if ( std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "setCardFaceType",
        577);
      v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)(v3 + 96),
              (const char (*)[25])"findCard fail. card_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v7 = 12208;
    }
    else
    {
      v13 = (__int64)std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v14 = *(_BYTE *)(((unsigned __int64)(v13 + 112) >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v14 != 0;
      v15 = (v14 != 0) & (unsigned __int8)(v14 <= 3);
      if ( (_BYTE)v15 )
        v13 = __asan_report_store4(v13 + 112, v11, v15);
      *(_DWORD *)(v13 + 112) = face_type;
      proto::GCGDSCardFaceUpdateNotify::GCGDSCardFaceUpdateNotify((proto::GCGDSCardFaceUpdateNotify *const)(v3 + 96));
      proto::GCGDSCardFaceUpdateNotify::set_card_id(
        (proto::GCGDSCardFaceUpdateNotify *const)(v3 + 96),
        *(_DWORD *)(v3 + 48));
      proto::GCGDSCardFaceUpdateNotify::set_face_type((proto::GCGDSCardFaceUpdateNotify *const)(v3 + 96), face_type);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 96));
      v7 = 0;
      proto::GCGDSCardFaceUpdateNotify::~GCGDSCardFaceUpdateNotify((proto::GCGDSCardFaceUpdateNotify *const)(v3 + 96));
    }
    std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v3 + 64));
  }
  result = v7;
  if ( v19 == (char *)v3 )
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
  return result;
};

// Line 590: range 00000000150DDE22-00000000150DDF60
data::GCGCardFaceType __cdecl GCGDeckSystem::getCardFaceType(const GCGDeckSystem *const this, uint32_t card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  data::GCGCardFaceType face_type; // r14d
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  data::GCGCardFaceType result; // eax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 card_ptr:591";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::getCardFaceType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  GCGDeckSystem::findCard((const GCGDeckSystem *const)(v2 + 32), (uint32_t)this);
  if ( std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v2 + 32), 0LL) )
  {
    face_type = GCG_CARD_FACE_NORMAL;
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->face_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->face_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->face_type);
    }
    face_type = v6->face_type;
  }
  std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v2 + 32));
  result = face_type;
  if ( v8 == (char *)v2 )
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

// Line 600: range 00000000150DDF62-00000000150DE0F1
__int64 __fastcall GCGDeckSystem::isCardFaceUnlock(
        const GCGDeckSystem *const this,
        uint32_t card_id,
        data::GCGCardFaceType face_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int v8; // eax
  __int64 result; // rax
  char v11[144]; // [rsp+10h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 face_type:599 64 16 12 card_ptr:601";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::isCardFaceUnlock;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = face_type;
  GCGDeckSystem::findCard((const GCGDeckSystem *const)(v3 + 64), (uint32_t)this);
  if ( std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v3 + 64), 0LL) )
  {
    v6 = 0;
  }
  else if ( *(_DWORD *)(v3 + 48) )
  {
    v7 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    LOBYTE(v8) = common::tools::MiscUtils::isContains<std::set<data::GCGCardFaceType>,data::GCGCardFaceType>(
                   &v7->unlock_card_face_set,
                   (const data::GCGCardFaceType *)(v3 + 48));
    v6 = v8;
  }
  else
  {
    v6 = 1;
  }
  std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v3 + 64));
  result = v6;
  if ( v11 == (char *)v3 )
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

// Line 614: range 00000000150DE0F2-00000000150DE616
__int64 __fastcall GCGDeckSystem::unlockField(GCGDeckSystem *const this, __int32 field_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockField,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v12; // [rsp+0h] [rbp-130h]
  GCGDeckSystem *thisa; // [rsp+8h] [rbp-128h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v15; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+60h] [rbp-D0h] BYREF

  v12._M_string_length = (std::string::size_type)this;
  HIDWORD(v12._M_dataplus._M_p) = field_id;
  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 10 holder:634 48 4 12 field_id:613 64 16 11 log_ptr:635 96 24 10 notify:629";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::unlockField;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = field_id;
  if ( GCGDeckSystem::isFieldUnlock(this, *(_DWORD *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "unlockField",
      617);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v16,
           (const char (*)[33])"field already unlock. field_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    v6 = 12212;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v12._anon_0._M_allocated_capacity = (std::string::size_type)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.gcg_deck_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v15);
    *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::GCGDeckExcelConfigMgrBase::findGCGDeckFieldExcelConfig(
                                                                          (const data::GCGDeckExcelConfigMgrBase *const)v12._anon_0._M_allocated_capacity,
                                                                          *(_DWORD *)(v2 + 48));
    if ( *(&v12._anon_0._M_allocated_capacity + 1) )
    {
      std::set<unsigned int>::insert(&this->unlock_field_id_set, (const std::set<unsigned int>::value_type *)(v2 + 48));
      proto::GCGDSFieldUnlockNotify::GCGDSFieldUnlockNotify((proto::GCGDSFieldUnlockNotify *const)(v2 + 96));
      proto::GCGDSFieldUnlockNotify::set_field_id((proto::GCGDSFieldUnlockNotify *const)(v2 + 96), *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v16, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xEB5u, v12);
      std::string::~string(&v16);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgUnlockField>();
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockField,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockField,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      proto_log::PlayerLogBodyGcgUnlockField::set_field_id(v9, *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa);
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v15, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgUnlockField,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyGcgUnlockField> *)(v2 + 64));
      Player::printStatLog(player, &p_body_ptr, &v15, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v15);
      v6 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyGcgUnlockField>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgUnlockField> *const)(v2 + 64));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
      proto::GCGDSFieldUnlockNotify::~GCGDSFieldUnlockNotify((proto::GCGDSFieldUnlockNotify *const)(v2 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "unlockField",
        624);
      v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v16,
             (const char (*)[45])"findGCGDeckFieldExcelConfig fail. field_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      v6 = 12213;
    }
  }
  result = v6;
  if ( v17 == (char *)v2 )
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
  return result;
};

// Line 643: range 00000000150DE618-00000000150DE6F2
bool __fastcall GCGDeckSystem::isFieldUnlock(const GCGDeckSystem *const this, uint32_t field_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 field_id:642";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::isFieldUnlock;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = field_id;
  if ( *(_DWORD *)(v2 + 32) )
    result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
               &this->unlock_field_id_set,
               (const unsigned int *)(v2 + 32));
  else
    result = 1;
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

// Line 652: range 00000000150DE6F4-00000000150DEC18
__int64 __fastcall GCGDeckSystem::unlockCardBack(GCGDeckSystem *const this, __int32 card_back_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockCardBack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v12; // [rsp+0h] [rbp-130h]
  GCGDeckSystem *thisa; // [rsp+8h] [rbp-128h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v15; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+60h] [rbp-D0h] BYREF

  v12._M_string_length = (std::string::size_type)this;
  HIDWORD(v12._M_dataplus._M_p) = card_back_id;
  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 10 holder:672 48 4 16 card_back_id:651 64 16 11 log_ptr:673 96 24 10 notify:667";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::unlockCardBack;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = card_back_id;
  if ( GCGDeckSystem::isCardBackUnlock(this, *(_DWORD *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "unlockCardBack",
      655);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v16,
           (const char (*)[41])"card_back already unlock. card_back_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    v6 = 12215;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v12._anon_0._M_allocated_capacity = (std::string::size_type)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.gcg_deck_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v15);
    *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::GCGDeckExcelConfigMgrBase::findGCGDeckBackExcelConfig(
                                                                          (const data::GCGDeckExcelConfigMgrBase *const)v12._anon_0._M_allocated_capacity,
                                                                          *(_DWORD *)(v2 + 48));
    if ( *(&v12._anon_0._M_allocated_capacity + 1) )
    {
      std::set<unsigned int>::insert(
        &this->unlock_card_back_id_set,
        (const std::set<unsigned int>::value_type *)(v2 + 48));
      proto::GCGDSCardBackUnlockNotify::GCGDSCardBackUnlockNotify((proto::GCGDSCardBackUnlockNotify *const)(v2 + 96));
      proto::GCGDSCardBackUnlockNotify::set_card_back_id(
        (proto::GCGDSCardBackUnlockNotify *const)(v2 + 96),
        *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v16, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xEB4u, v12);
      std::string::~string(&v16);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgUnlockCardBack>();
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockCardBack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgUnlockCardBack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      proto_log::PlayerLogBodyGcgUnlockCardBack::set_card_back_id(v9, *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa);
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v15, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgUnlockCardBack,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyGcgUnlockCardBack> *)(v2 + 64));
      Player::printStatLog(player, &p_body_ptr, &v15, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v15);
      v6 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyGcgUnlockCardBack>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgUnlockCardBack> *const)(v2 + 64));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
      proto::GCGDSCardBackUnlockNotify::~GCGDSCardBackUnlockNotify((proto::GCGDSCardBackUnlockNotify *const)(v2 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "unlockCardBack",
        662);
      v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v16,
             (const char (*)[48])"findGCGDeckBackExcelConfig fail. card_back_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      v6 = 12216;
    }
  }
  result = v6;
  if ( v17 == (char *)v2 )
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
  return result;
};

// Line 681: range 00000000150DEC1A-00000000150DECF4
bool __fastcall GCGDeckSystem::isCardBackUnlock(const GCGDeckSystem *const this, uint32_t card_back_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 16 card_back_id:680";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::isCardBackUnlock;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = card_back_id;
  if ( *(_DWORD *)(v2 + 32) )
    result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
               &this->unlock_card_back_id_set,
               (const unsigned int *)(v2 + 32));
  else
    result = 1;
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

// Line 690: range 00000000150DECF6-00000000150DF054
__int64 __fastcall GCGDeckSystem::unlockDeck(GCGDeckSystem *const this, uint32_t deck_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+10h] [rbp-F0h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 deck_id:689 64 24 10 notify:705";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::unlockDeck;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = deck_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( data::GCGDeckExcelConfigMgrBase::findGCGDeckStorageExcelConfig(gcg_deck_config_mgr, *(_DWORD *)(v2 + 48)) )
  {
    if ( GCGDeckSystem::isDeckUnlock(this, *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "unlockDeck",
        700);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v11,
             (const char (*)[33])"deck already unlocked. deck_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v11);
      v6 = 12222;
    }
    else
    {
      std::set<unsigned int>::insert(&this->unlock_deck_id_set, (const std::set<unsigned int>::value_type *)(v2 + 48));
      proto::GCGDSDeckUnlockNotify::GCGDSDeckUnlockNotify((proto::GCGDSDeckUnlockNotify *const)(v2 + 64));
      proto::GCGDSDeckUnlockNotify::set_deck_id((proto::GCGDSDeckUnlockNotify *const)(v2 + 64), *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
      v6 = 0;
      proto::GCGDSDeckUnlockNotify::~GCGDSDeckUnlockNotify((proto::GCGDSDeckUnlockNotify *const)(v2 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "unlockDeck",
      695);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"findGCGDeckStorageExcelConfig fail. deck_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
    v6 = -1;
  }
  result = v6;
  if ( v12 == (char *)v2 )
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

// Line 712: range 00000000150DF056-00000000150DF125
bool __fastcall GCGDeckSystem::isDeckUnlock(const GCGDeckSystem *const this, uint32_t deck_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 deck_id:711";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::isDeckUnlock;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = deck_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->unlock_deck_id_set,
             (const unsigned int *)(v2 + 32));
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

// Line 717: range 00000000150DF126-00000000150DF5FD
__int64 __fastcall GCGDeckSystem::setCurDeckId(GCGDeckSystem *const this, uint32_t deck_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::pair<GCGDeckValidType,unsigned int> *p_p; // rsi
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // ecx
  char v14; // al
  __int64 result; // rax
  std::pair<GCGDeckValidType,unsigned int> __p; // [rsp+18h] [rbp-F8h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 deck_id:716 64 16 12 deck_ptr:723 96 24 10 notify:738";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::setCurDeckId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = deck_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_deck_id_);
  }
  if ( this->cur_deck_id_ == *(_DWORD *)(v2 + 48) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "setCurDeckId",
      720);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v17,
           (const char (*)[32])"already current deck. deck_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = 0;
  }
  else
  {
    GCGDeckSystem::findDeck((const GCGDeckSystem *const)(v2 + 64), (uint32_t)this);
    if ( std::operator==<GCGDSDeck>((const std::shared_ptr<GCGDSDeck> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "setCurDeckId",
        726);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v17,
             (const char (*)[25])"findDeck fail. deck_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      v6 = 12207;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      __p = GCGDeckSystem::checkDeckValid(this, v8);
      v9 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      p_p = &__p;
      std::pair<GCGDeckValidType,unsigned int>::operator=(&v9->valid_state, &__p);
      v11 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( !GCGDSDeck::isValid(v11) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "setCurDeckId",
          733);
        v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v17,
                (const char (*)[24])"deck invalid. deck_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v17);
        v6 = 12207;
      }
      else
      {
        v13 = *(_DWORD *)(v2 + 48);
        v14 = *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000);
        if ( v14 != 0 && v14 <= 3 )
        {
          LOBYTE(p_p) = v14 != 0;
          __asan_report_store4(&this->cur_deck_id_, p_p, &this->cur_deck_id_);
        }
        this->cur_deck_id_ = v13;
        proto::GCGDSCurDeckChangeNotify::GCGDSCurDeckChangeNotify((proto::GCGDSCurDeckChangeNotify *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_deck_id_);
        }
        proto::GCGDSCurDeckChangeNotify::set_deck_id(
          (proto::GCGDSCurDeckChangeNotify *const)(v2 + 96),
          this->cur_deck_id_);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
        v6 = 0;
        proto::GCGDSCurDeckChangeNotify::~GCGDSCurDeckChangeNotify((proto::GCGDSCurDeckChangeNotify *const)(v2 + 96));
      }
    }
    std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v2 + 64));
  }
  result = v6;
  if ( v18 == (char *)v2 )
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
  return result;
};

// Line 745: range 00000000150DF5FE-00000000150DF9C8
void __cdecl GCGDeckSystem::resetCurDeck(GCGDeckSystem *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __int64 v7; // rsi
  uint32_t v8; // ecx
  char v9; // al
  uint32_t min_create_time; // [rsp+1Ch] [rbp-B4h]
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *__for_range; // [rsp+30h] [rbp-A0h]
  std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > *__in; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *id; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *deck_ptr; // [rsp+48h] [rbp-88h]
  char v17[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:756";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::resetCurDeck;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_deck_id_, v1, &this->cur_deck_id_);
  }
  this->cur_deck_id_ = 0;
  min_create_time = -1;
  __for_range = &this->deck_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::begin(&this->deck_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::end(&this->deck_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
    deck_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
    v5 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v5->create_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->create_time >> 3) + 0x7FFF8000) <= 3 )
    {
      v5 = (std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v5->create_time);
    }
    if ( min_create_time > v5->create_time )
    {
      v6 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v6->create_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v6->create_time >> 3) + 0x7FFF8000) <= 3 )
      {
        v6 = (std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->create_time);
      }
      min_create_time = v6->create_time;
      v7 = ((unsigned __int8)id & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v8 = *id;
      v9 = *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000);
      if ( v9 != 0 && v9 <= 3 )
      {
        LOBYTE(v7) = v9 != 0;
        __asan_report_store4(&this->cur_deck_id_, v7, &this->cur_deck_id_);
      }
      this->cur_deck_id_ = v8;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator++(&__for_begin);
  }
  proto::GCGDSCurDeckChangeNotify::GCGDSCurDeckChangeNotify((proto::GCGDSCurDeckChangeNotify *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_deck_id_);
  }
  proto::GCGDSCurDeckChangeNotify::set_deck_id((proto::GCGDSCurDeckChangeNotify *const)(v2 + 32), this->cur_deck_id_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::GCGDSCurDeckChangeNotify::~GCGDSCurDeckChangeNotify((proto::GCGDSCurDeckChangeNotify *const)(v2 + 32));
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

// Line 762: range 00000000150DF9CA-00000000150DFC8E
__int64 __fastcall GCGDeckSystem::isDeckValid(const GCGDeckSystem *const this, uint32_t deck_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r15d
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::pair<GCGDeckValidType,unsigned int> __p; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 deck_id:761 64 16 12 deck_ptr:763";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::isDeckValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = deck_id;
  GCGDeckSystem::findDeck((const GCGDeckSystem *const)(v2 + 64), (uint32_t)this);
  if ( std::operator==<GCGDSDeck>((const std::shared_ptr<GCGDSDeck> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "isDeckValid",
      766);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"findDeck fail. deck_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = 0;
  }
  else
  {
    v7 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    __p = GCGDeckSystem::checkDeckValid(this, v7);
    v8 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::pair<GCGDeckValidType,unsigned int>::operator=(&v8->valid_state, &__p);
    v9 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( !GCGDSDeck::isValid(v9) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "isDeckValid",
        773);
      v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v13,
              (const char (*)[24])"deck invalid. deck_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
      v6 = 0;
    }
    else
    {
      v6 = 1;
    }
  }
  std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v2 + 64));
  result = v6;
  if ( v14 == (char *)v2 )
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

// Line 780: range 00000000150DFC90-00000000150DFEE0
int32_t __cdecl GCGDeckSystem::checkDeckName(const GCGDeckSystem *const this, const std::string *name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+18h] [rbp-A8h] BYREF
  uint32_t deck_name_size_limit; // [rsp+1Ch] [rbp-A4h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 ret:786";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::checkDeckName;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( (unsigned __int8)std::string::empty(name) )
  {
    result = 12218;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    deck_name_size_limit = ConstValueExcelConfigMgr::getGCGDeckNameSizeLimit(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    *(_DWORD *)(v2 + 32) = Hk4eUtils::checkStrUtf8Len2(name, deck_name_size_limit);
    if ( *(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "checkDeckName",
        789);
      v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v13,
             (const char (*)[30])"checkStrUtf8Len2 fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = 12218;
    }
    else
    {
      result = 0;
    }
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
  return result;
};

// Line 796: range 00000000150DFEE2-00000000150E012F
__int64 __fastcall GCGDeckSystem::deleteDeck(GCGDeckSystem *const this, uint32_t deck_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  __int64 result; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 deck_id:795 64 16 12 deck_ptr:797";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::deleteDeck;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = deck_id;
  GCGDeckSystem::findDeck((const GCGDeckSystem *const)(v2 + 64), (uint32_t)this);
  if ( std::operator==<GCGDSDeck>((const std::shared_ptr<GCGDSDeck> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "deleteDeck",
      800);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v8,
           (const char (*)[25])"findDeck fail. deck_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v8);
    v6 = 12207;
  }
  else if ( std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::size(&this->deck_map_) > 1 )
  {
    std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::erase(
      &this->deck_map_,
      (const std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::key_type *)(v2 + 48));
    if ( GCGDeckSystem::getCurDeckId(this) == *(_DWORD *)(v2 + 48) )
      GCGDeckSystem::resetCurDeck(this);
    v6 = 0;
  }
  else
  {
    v6 = 12223;
  }
  std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v2 + 64));
  result = v6;
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

// Line 816: range 00000000150E0130-00000000150E017D
std::shared_ptr<const GCGDSDeck> __cdecl GCGDeckSystem::findConstDeck(
        const GCGDeckSystem *const this,
        uint32_t deck_id)
{
  std::shared_ptr<const GCGDSDeck> result; // rax
  std::shared_ptr<GCGDSDeck> __r; // [rsp+20h] [rbp-10h] BYREF

  GCGDeckSystem::findDeck((const GCGDeckSystem *const)&__r, deck_id);
  std::shared_ptr<GCGDSDeck const>::shared_ptr<GCGDSDeck,void>((std::shared_ptr<const GCGDSDeck> *const)this, &__r);
  std::shared_ptr<GCGDSDeck>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 821: range 00000000150E017E-00000000150E032B
uint32_t __cdecl GCGDeckSystem::getValidDeckNum(const GCGDeckSystem *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned int val; // [rsp+18h] [rbp-68h] BYREF
  uint32_t valid_deck_num; // [rsp+1Ch] [rbp-64h]
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > *v11; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *deck_id; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *deck_ptr; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-30h] BYREF

  valid_deck_num = 0;
  __for_range = &this->deck_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::begin(&this->deck_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::end(&this->deck_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator*(&__for_begin);
    deck_id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(v11);
    deck_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(v11);
    if ( std::operator==<GCGDSDeck>(0LL, deck_ptr) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "getValidDeckNum",
        827);
      v1 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v14,
             (const char (*)[30])"deck_ptr is nullptr, deck_id:");
      v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, deck_id);
      v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v2, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      v4 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
      if ( GCGDSDeck::isValid(v4) )
        ++valid_deck_num;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator++(&__for_begin);
  }
  return valid_deck_num;
};

// Line 839: range 00000000150E032C-00000000150E0762
GCGDeckSystem *__fastcall GCGDeckSystem::createDeck(GCGDeckSystem *const this, const GCGDeckSystem *deck_id, int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rdx
  int Now; // r14d
  __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rdx
  std::shared_ptr<GCGDSDeck> *v18; // rax
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 deck_id:838 64 16 12 deck_ptr:855";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::createDeck;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  if ( *(_DWORD *)(v3 + 48) )
  {
    GCGDeckSystem::findDeck((const GCGDeckSystem *const)(v3 + 64), (uint32_t)deck_id);
    v6 = std::operator!=<GCGDSDeck>((const std::shared_ptr<GCGDSDeck> *)(v3 + 64), 0LL);
    std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v3 + 64));
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "createDeck",
        847);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v22,
             (const char (*)[32])"deck already created. deck_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      std::shared_ptr<GCGDSDeck>::shared_ptr((std::shared_ptr<GCGDSDeck> *const)this, 0LL);
    }
    else
    {
      v8 = *(unsigned int *)(v3 + 48);
      if ( !GCGDeckSystem::isDeckUnlock(deck_id, v8) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "createDeck",
          852);
        v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v22,
               (const char (*)[26])"deck is locked. deck_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
        std::shared_ptr<GCGDSDeck>::shared_ptr((std::shared_ptr<GCGDSDeck> *const)this, 0LL);
      }
      else
      {
        common::tools::perf::make_shared<GCGDSDeck>();
        v10 = *(_DWORD *)(v3 + 48);
        v11 = (unsigned __int64)std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v12 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
        LOBYTE(v8) = v12 != 0;
        v13 = (v12 != 0) & (unsigned __int8)(v12 <= 3);
        if ( (_BYTE)v13 )
          v11 = __asan_report_store4(v11, v8, v13);
        *(_DWORD *)v11 = v10;
        Now = common::tools::TimeUtils::getNow();
        v15 = (__int64)std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v16 = *(_BYTE *)(((unsigned __int64)(v15 + 96) >> 3) + 0x7FFF8000);
        LOBYTE(v8) = v16 != 0;
        v17 = (v16 != 0) & (unsigned __int8)(v16 <= 3);
        if ( (_BYTE)v17 )
          v15 = __asan_report_store4(v15 + 96, v8, v17);
        *(_DWORD *)(v15 + 96) = Now;
        v18 = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::operator[](
                &deck_id->deck_map_,
                (const std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::key_type *)(v3 + 48));
        std::shared_ptr<GCGDSDeck>::operator=(v18, (const std::shared_ptr<GCGDSDeck> *)(v3 + 64));
        std::shared_ptr<GCGDSDeck>::shared_ptr(
          (std::shared_ptr<GCGDSDeck> *const)this,
          (std::shared_ptr<GCGDSDeck> *)(v3 + 64));
        std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v3 + 64));
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "createDeck",
      842);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v22, (const char (*)[14])"deck_id is 0.");
    common::milog::MiLogStream::~MiLogStream(&v22);
    std::shared_ptr<GCGDSDeck>::shared_ptr((std::shared_ptr<GCGDSDeck> *const)this, 0LL);
  }
  if ( v23 == (char *)v3 )
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

// Line 863: range 00000000150E0764-00000000150E08F1
const GCGDeckSystem *__fastcall GCGDeckSystem::findDeck(const GCGDeckSystem *const this, __int64 deck_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 deck_id:862 64 8 8 iter:864";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::findDeck;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::find(
                                                                                      (const std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *const)(deck_id + 160),
                                                                                      (const std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::end((const std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *const)(deck_id + 160))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > > *const)(v3 + 64));
    std::shared_ptr<GCGDSDeck>::shared_ptr((std::shared_ptr<GCGDSDeck> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<GCGDSDeck>::shared_ptr((std::shared_ptr<GCGDSDeck> *const)this, 0LL);
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

// Line 873: range 00000000150E08F2-00000000150E0A52
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGDSDeck> __cdecl GCGDeckSystem::getDeck(GCGDeckSystem *const this, uint32_t deck_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<GCGDSDeck> result; // rax
  int deck_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  deck_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 deck_ptr:874";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::getDeck;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  GCGDeckSystem::findDeck((const GCGDeckSystem *const)(v3 + 32), *(__int64 *)&deck_id, deck_ida);
  if ( std::operator==<GCGDSDeck>((const std::shared_ptr<GCGDSDeck> *)(v3 + 32), 0LL) )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    GCGDeckSystem::createDeck(this, *(const GCGDeckSystem **)&deck_id, deck_ida);
  }
  else
  {
    std::shared_ptr<GCGDSDeck>::shared_ptr(
      (std::shared_ptr<GCGDSDeck> *const)this,
      (std::shared_ptr<GCGDSDeck> *)(v3 + 32));
  }
  std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GCGDSDeck,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 884: range 00000000150E0D64-00000000150E1905
int32_t __cdecl GCGDeckSystem::checkDeckCanSave(
        const GCGDeckSystem *const this,
        const std::vector<unsigned int> *character_card_vec,
        const std::vector<unsigned int> *card_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rax
  _DWORD *v14; // rdx
  unsigned __int64 v15; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v16; // rax
  uint32_t v17; // esi
  common::milog::MiLogStream *v18; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v19; // rax
  _DWORD *v20; // rdx
  unsigned __int64 v21; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v22; // rax
  uint32_t v23; // esi
  common::milog::MiLogStream *v24; // rax
  int32_t result; // eax
  int32_t ret_0; // [rsp+20h] [rbp-200h]
  int32_t ret; // [rsp+24h] [rbp-1FCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-1F8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-1F0h] BYREF
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+38h] [rbp-1E8h]
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+40h] [rbp-1E0h]
  const GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+48h] [rbp-1D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-1D0h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+58h] [rbp-1C8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-1C0h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+68h] [rbp-1B8h]
  std::pair<unsigned int const,unsigned int> *v39; // [rsp+70h] [rbp-1B0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *card_id_0; // [rsp+78h] [rbp-1A8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+80h] [rbp-1A0h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+88h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *card_id; // [rsp+90h] [rbp-190h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+98h] [rbp-188h]
  std::shared_ptr<Config> v45; // [rsp+A0h] [rbp-180h] BYREF
  common::milog::MiLogStream v46; // [rsp+B0h] [rbp-170h] BYREF
  char v47[336]; // [rsp+D0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 23 deck_card_num_limit:888 64 4 28 character_card_num_limit:889 80 4 11 card_id:938 96 8 "
                        "16 global_check:902 128 48 18 card_count_map:918 208 48 28 character_card_count_map:937";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::checkDeckCanSave;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v45);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.gcg_game_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v45);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v45);
  *(_DWORD *)(v3 + 48) = ConstValueExcelConfigMgr::getGCGDeckCardLimitSize(const_value_config_mgr);
  *(_DWORD *)(v3 + 64) = ConstValueExcelConfigMgr::getGCGDeckCharacterLimitSize(const_value_config_mgr);
  if ( std::vector<unsigned int>::size(card_vec) <= *(unsigned int *)(v3 + 48) )
  {
    if ( std::vector<unsigned int>::size(character_card_vec) <= *(unsigned int *)(v3 + 64) )
    {
      *(_QWORD *)(v3 + 96) = gcg_deck_config_mgr;
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 128));
      __for_range = card_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(card_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(card_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        *(_DWORD *)(v3 + 80) = *v14;
        v15 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                  (std::map<unsigned int,unsigned int> *const)(v3 + 128),
                                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0 && (char)((v15 & 7) + 3) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load4(v15);
        ++*(_DWORD *)v15;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 128);
      __for_begin._M_current = (const unsigned int *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 128))._M_node;
      __for_end._M_current = (const unsigned int *)std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
        card_id = std::get<0ul,unsigned int const,unsigned int>(__in);
        v16 = std::get<1ul,unsigned int const,unsigned int>(__in);
        num = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        v17 = *num;
        if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(card_id);
        }
        ret = GCGDeckSystem::checkDeckCanSave(std::vector<unsigned int> const&,std::vector<unsigned int> const&)const::{lambda(unsigned int,unsigned int)#1}::operator()(
                (const GCGDeckSystem::checkDeckCanSave::<lambda(uint32_t, uint32_t)> *const)(v3 + 96),
                *card_id,
                v17);
        if ( ret )
        {
          v9 = ret;
          goto LABEL_52;
        }
        if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(card_id);
        }
        if ( GCGGameExcelConfigMgr::getCardType(gcg_game_config_mgr, *card_id) == GCG_CARD_CHARACTER )
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_deck_system.cpp",
            "checkDeckCanSave",
            933);
          v18 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v46,
                  (const char (*)[52])"card type error, can't be character card. card_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, card_id);
          common::milog::MiLogStream::~MiLogStream(&v46);
          v9 = 12208;
          goto LABEL_52;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      }
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
      __for_range_1 = character_card_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(character_card_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v19 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        *(_DWORD *)(v3 + 80) = *v20;
        if ( *(_DWORD *)(v3 + 80) )
        {
          v21 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                    (std::map<unsigned int,unsigned int> *const)(v3 + 208),
                                    (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) != 0 && (char)((v21 & 7) + 3) >= *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load4(v21);
          ++*(_DWORD *)v21;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      __for_range_2 = (std::map<unsigned int,unsigned int> *)(v3 + 208);
      __for_begin._M_current = (const unsigned int *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 208))._M_node;
      __for_end._M_current = (const unsigned int *)std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
      {
        v39 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
        card_id_0 = std::get<0ul,unsigned int const,unsigned int>(v39);
        v22 = std::get<1ul,unsigned int const,unsigned int>(v39);
        num_0 = v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        v23 = *num_0;
        if ( *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(card_id_0);
        }
        ret_0 = GCGDeckSystem::checkDeckCanSave(std::vector<unsigned int> const&,std::vector<unsigned int> const&)const::{lambda(unsigned int,unsigned int)#1}::operator()(
                  (const GCGDeckSystem::checkDeckCanSave::<lambda(uint32_t, uint32_t)> *const)(v3 + 96),
                  *card_id_0,
                  v23);
        if ( ret_0 )
        {
          v9 = ret_0;
          goto LABEL_51;
        }
        if ( *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(card_id_0);
        }
        if ( GCGGameExcelConfigMgr::getCardType(gcg_game_config_mgr, *card_id_0) != GCG_CARD_CHARACTER )
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_deck_system.cpp",
            "checkDeckCanSave",
            956);
          v24 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v46,
                  (const char (*)[51])"card type error, must be character card. card_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, card_id_0);
          common::milog::MiLogStream::~MiLogStream(&v46);
          v9 = 12208;
          goto LABEL_51;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      }
      v9 = 0;
LABEL_51:
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
LABEL_52:
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "checkDeckCanSave",
        899);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v46,
              (const char (*)[41])"character card size exceed limit. size: ");
      __for_end._M_current = (const unsigned int *)std::vector<unsigned int>::size(character_card_vec);
      v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v10,
              (const unsigned __int64 *)&__for_end);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" limit: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v46);
      v9 = 12204;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "checkDeckCanSave",
      893);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v46,
           (const char (*)[31])"card size exceed limit. size: ");
    __for_end._M_current = (const unsigned int *)std::vector<unsigned int>::size(card_vec);
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v6,
           (const unsigned __int64 *)&__for_end);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" limit: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v46);
    v9 = 12205;
  }
  result = v9;
  if ( v47 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
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
  return result;
};

// Line 902: range 00000000150E0A54-00000000150E0D63
__int64 __fastcall GCGDeckSystem::checkDeckCanSave(std::vector<unsigned int> const&,std::vector<unsigned int> const&)const::{lambda(unsigned int,unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t card_id,
        uint32_t num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const data::GCGDeckCardExcelConfig *card_config_ptr; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 card_id:902 64 4 7 num:902";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::checkDeckCanSave(std::vector<unsigned int> const&,std::vector<unsigned int> const&)const::{lambda(unsigned int,unsigned int)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = card_id;
  *(_DWORD *)(v3 + 64) = num;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  card_config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(
                      *(const data::GCGDeckExcelConfigMgrBase *const *)__closure,
                      *(_DWORD *)(v3 + 48));
  if ( card_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&card_config_ptr->limit);
    }
    if ( card_config_ptr->limit >= *(_DWORD *)(v3 + 64) )
    {
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "operator()",
        913);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v15,
             (const char (*)[33])"card num exceed limit. card_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" num: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" limit: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &card_config_ptr->limit);
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 12205LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "operator()",
      907);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v15,
           (const char (*)[31])"findCardConfig fail. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 12208LL;
  }
  if ( v16 == (char *)v3 )
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

// Line 964: range 00000000150E1906-00000000150E1AB7
std::pair<GCGDeckValidType,unsigned int> __cdecl GCGDeckSystem::checkDeckValid(
        const GCGDeckSystem *const this,
        const GCGDSDeck *deck)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::pair<GCGDeckValidType,unsigned int> v6; // r14
  std::pair<GCGDeckValidType,unsigned int> v7; // rax
  std::shared_ptr<Config> v8; // [rsp+10h] [rbp-C0h] BYREF
  char v9[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 16 ban_card_set:965";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)GCGDeckSystem::checkDeckValid;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  FeatureSwitchMgr::getGCGBanCardSet(v2 + 1, &v5->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  v6 = GCGDeckSystem::checkDeckValid(this, deck, v2 + 1);
  std::set<unsigned int>::~set(v2 + 1);
  v7 = v6;
  if ( v9 == (char *)v2 )
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
  return v7;
};

// Line 970: range 00000000150E1AB8-00000000150E2310
std::pair<GCGDeckValidType,unsigned int> __cdecl GCGDeckSystem::checkDeckValid(
        const GCGDeckSystem *const this,
        const GCGDSDeck *deck,
        const std::set<unsigned int> *ban_card_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  const unsigned int *M_current; // r14
  unsigned __int64 v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  bool v19; // r14
  std::pair<GCGDeckValidType,unsigned int> v20; // rax
  GCGDeckValidType __x; // [rsp+24h] [rbp-15Ch] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-158h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-150h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+38h] [rbp-148h]
  const GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+40h] [rbp-140h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+48h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *card_id; // [rsp+50h] [rbp-130h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+58h] [rbp-128h]
  std::pair<GCGDeckValidType,int> __p; // [rsp+60h] [rbp-120h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+68h] [rbp-118h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+70h] [rbp-110h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+78h] [rbp-108h] BYREF
  std::shared_ptr<Config> v34; // [rsp+80h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+90h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 have_num:987 64 4 11 card_id:981 80 48 18 card_count_map:972";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::checkDeckValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862724] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 80));
  __for_range = &deck->character_card_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&deck->character_card_vec)._M_current;
  __for_begin_0._M_current = std::vector<unsigned int>::end(&deck->character_card_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_begin_0) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 48) = *v7;
    if ( !*(_DWORD *)(v3 + 48) )
    {
      *(_DWORD *)(v3 + 64) = 0;
      __x = INVALID_1;
      __p = std::make_pair<GCGDeckValidType,int>(&__x, (int *)(v3 + 64));
      std::pair<GCGDeckValidType,unsigned int>::pair<GCGDeckValidType,int,true>(
        (std::pair<GCGDeckValidType,unsigned int> *const)&__for_end,
        &__p);
      M_current = __for_end._M_current;
      goto LABEL_35;
    }
    v9 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                             (std::map<unsigned int,unsigned int> *const)(v3 + 80),
                             (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load4(v9);
    ++*(_DWORD *)v9;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &deck->card_vec;
  __for_begin_0._M_current = std::vector<unsigned int>::begin(&deck->card_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&deck->card_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end) )
  {
    v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    *(_DWORD *)(v3 + 64) = *v11;
    v12 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                              (std::map<unsigned int,unsigned int> *const)(v3 + 80),
                              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load4(v12);
    ++*(_DWORD *)v12;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
  }
  __for_range_1 = (std::map<unsigned int,unsigned int> *)(v3 + 80);
  __for_begin_0._M_current = (const unsigned int *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 80))._M_node;
  __for_end._M_current = (const unsigned int *)std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v3 + 80))._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
    card_id = std::get<0ul,unsigned int const,unsigned int>(__in);
    num = std::get<1ul,unsigned int const,unsigned int>(__in);
    if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_id);
    }
    *(_DWORD *)(v3 + 48) = GCGDeckSystem::getCardNum(this, *card_id);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(num);
    }
    if ( *num > *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "checkDeckValid",
        990);
      v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v35,
              (const char (*)[36])"card num large than have. card_id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, card_id);
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" num: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, num);
      v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" have_num: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v35);
      __x = CARD_NOT_ENOUGH;
      M_current = (const unsigned int *)std::make_pair<GCGDeckValidType,unsigned int const&>(&__x, card_id);
      goto LABEL_35;
    }
    if ( std::set<unsigned int>::count(ban_card_set, card_id) )
    {
      *(_DWORD *)(v3 + 64) = 3;
      M_current = (const unsigned int *)std::make_pair<GCGDeckValidType,unsigned int const&>(
                                          (GCGDeckValidType *)(v3 + 64),
                                          card_id);
      goto LABEL_35;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v34);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
  v19 = !GCGDeckExcelConfigMgr::isDeckValid(
           gcg_deck_config_mgr,
           &v18->design_config.txt_config_mgr,
           &deck->character_card_vec,
           &deck->card_vec);
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( v19 )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "checkDeckValid",
      1002);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v35, (const char (*)[14])"deck invalid.");
    common::milog::MiLogStream::~MiLogStream(&v35);
    *(_DWORD *)(v3 + 64) = 0;
    __x = INVALID_1;
    __for_begin._M_current = (const unsigned int *)std::make_pair<GCGDeckValidType,int>(&__x, (int *)(v3 + 64));
    std::pair<GCGDeckValidType,unsigned int>::pair<GCGDeckValidType,int,true>(
      (std::pair<GCGDeckValidType,unsigned int> *const)&__for_end,
      (std::pair<GCGDeckValidType,int> *)&__for_begin);
  }
  else
  {
    *(_DWORD *)(v3 + 64) = 0;
    __x = PASSED;
    __for_begin_0._M_current = (const unsigned int *)std::make_pair<GCGDeckValidType,int>(&__x, (int *)(v3 + 64));
    std::pair<GCGDeckValidType,unsigned int>::pair<GCGDeckValidType,int,true>(
      (std::pair<GCGDeckValidType,unsigned int> *const)&__for_end,
      (std::pair<GCGDeckValidType,int> *)&__for_begin_0);
  }
  M_current = __for_end._M_current;
LABEL_35:
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 80));
  v20 = (std::pair<GCGDeckValidType,unsigned int>)M_current;
  if ( v36 == (char *)v3 )
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
  return v20;
};

// Line 1009: range 00000000150E2312-00000000150E2397
bool __cdecl GCGDeckSystem::isCardIdValid(const GCGDeckSystem *const this, uint32_t card_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool v3; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  v3 = data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(
         &v2->design_config.txt_config_mgr.gcg_deck_config_mgr,
         card_id) != 0LL;
  std::shared_ptr<Config>::~shared_ptr(v5);
  return v3;
};

// Line 1014: range 00000000150E2398-00000000150E2783
__int64 __fastcall GCGDeckSystem::isCardCanAdd(const GCGDeckSystem *const this, uint32_t card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+10h] [rbp-C0h]
  const data::GCGDeckCardExcelConfig *card_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 num:1027 64 4 12 card_id:1013";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::isCardCanAdd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = card_id;
  if ( !GCGDeckSystem::isCardIdValid(this, *(_DWORD *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "isCardCanAdd",
      1017);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v16,
           (const char (*)[27])"card id invalid. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.gcg_deck_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v15);
    card_config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(
                        gcg_deck_config_mgr,
                        *(_DWORD *)(v2 + 64));
    if ( card_config_ptr )
    {
      *(_DWORD *)(v2 + 48) = GCGDeckSystem::getCardNum(this, *(_DWORD *)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&card_config_ptr->limit);
      }
      if ( card_config_ptr->limit > *(_DWORD *)(v2 + 48) )
      {
        result = 1LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "isCardCanAdd",
          1030);
        v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v16,
               (const char (*)[33])"card num exceed limit. card_id: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
        v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" num: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" limit: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &card_config_ptr->limit);
        common::milog::MiLogStream::~MiLogStream(&v16);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "isCardCanAdd",
        1024);
      v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v16,
             (const char (*)[49])"findGCGDeckCardExcelConfig is nullptr. card_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0LL;
    }
  }
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
  return result;
};

// Line 1037: range 00000000150E2784-00000000150E29A8
bool __fastcall GCGDeckSystem::isCardNumExceeded(const GCGDeckSystem *const this, uint32_t card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  bool result; // al
  uint32_t CardNum; // ecx
  GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+10h] [rbp-A0h]
  const data::GCGDeckCardExcelConfig *card_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 card_id:1036";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::isCardNumExceeded;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = card_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  card_config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(
                      gcg_deck_config_mgr,
                      *(_DWORD *)(v2 + 32));
  if ( card_config_ptr )
  {
    CardNum = GCGDeckSystem::getCardNum(this, *(_DWORD *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&card_config_ptr->limit);
    }
    result = CardNum >= card_config_ptr->limit;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "isCardNumExceeded",
      1042);
    v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v11,
           (const char (*)[49])"findGCGDeckCardExcelConfig is nullptr. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0;
  }
  if ( v12 == (char *)v2 )
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

// Line 1049: range 00000000150E29AA-00000000150E2AF1
uint32_t __cdecl GCGDeckSystem::getCardNum(const GCGDeckSystem *const this, uint32_t card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t num; // r14d
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  uint32_t *p_num; // rax
  uint32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 card_ptr:1050";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::getCardNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  GCGDeckSystem::findCard((const GCGDeckSystem *const)(v2 + 32), (uint32_t)this);
  if ( std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v2 + 32), 0LL) )
  {
    num = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_num = &v6->num;
    if ( *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_num);
    }
    num = v6->num;
  }
  std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v2 + 32));
  result = num;
  if ( v9 == (char *)v2 )
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

// Line 1059: range 00000000150E2AF2-00000000150E2C30
uint32_t __cdecl GCGDeckSystem::getCardProficiency(const GCGDeckSystem *const this, uint32_t card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t proficiency; // r14d
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t result; // eax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 card_ptr:1060";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::getCardProficiency;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  GCGDeckSystem::findCard((const GCGDeckSystem *const)(v2 + 32), (uint32_t)this);
  if ( std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v2 + 32), 0LL) )
  {
    proficiency = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->proficiency >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->proficiency >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->proficiency);
    }
    proficiency = v6->proficiency;
  }
  std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v2 + 32));
  result = proficiency;
  if ( v8 == (char *)v2 )
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

// Line 1070: range 00000000150E2C32-00000000150E3572
__int64 __fastcall GCGDeckSystem::tryGrantProficiencyReward(
        GCGDeckSystem *const this,
        uint32_t card_id,
        uint32_t proficiency_reward_taken_idx)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  uint32_t proficiency; // r14d
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  PlayerItemComp *v33; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  __int64 result; // rax
  uint32_t reward_idx; // [rsp+10h] [rbp-150h]
  int32_t ret; // [rsp+14h] [rbp-14Ch]
  unsigned __int64 val; // [rsp+18h] [rbp-148h] BYREF
  const GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+20h] [rbp-140h]
  const data::GCGProficiencyRewardExcelConfig *proficiency_config_ptr; // [rsp+28h] [rbp-138h]
  const std::vector<data::GCGProficiencyReward> *proficiency_reward_list; // [rsp+30h] [rbp-130h]
  const data::GCGProficiencyReward *proficiency_reward; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v44; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v45; // [rsp+50h] [rbp-110h] BYREF
  char v46[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 14 reward_id:1113 64 4 12 card_id:1069 80 4 33 proficiency_reward_taken_idx:1069 96 16 13"
                        " card_ptr:1076 128 24 11 reason:1114";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::tryGrantProficiencyReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 64) = card_id;
  *(_DWORD *)(v3 + 80) = proficiency_reward_taken_idx;
  if ( *(_DWORD *)(v3 + 80) )
  {
    GCGDeckSystem::findCard((GCGDeckSystem *const)(v3 + 96), (uint32_t)this);
    if ( std::operator==<GCGDSCard>(0LL, (const std::shared_ptr<GCGDSCard> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "tryGrantProficiencyReward",
        1079);
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v45,
             (const char (*)[24])"card not find, card_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v45);
      v7 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v44);
      gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.gcg_deck_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v44);
      proficiency_config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGProficiencyRewardExcelConfig(
                                 gcg_deck_config_mgr,
                                 *(_DWORD *)(v3 + 64));
      if ( proficiency_config_ptr )
      {
        v10 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
               &v10->proficiency_reward_taken_idx_set,
               (const unsigned int *)(v3 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_deck_system.cpp",
            "tryGrantProficiencyReward",
            1092);
          v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v45,
                  (const char (*)[48])"proficiency_reward_taken_idx is taken, card_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v3 + 64));
          v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  v12,
                  (const char (*)[31])" proficiency_reward_taken_idx:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v45);
          v7 = -1;
        }
        else
        {
          proficiency_reward_list = &proficiency_config_ptr->proficiency_reward_list;
          reward_idx = *(_DWORD *)(v3 + 80) - 1;
          if ( reward_idx < std::vector<data::GCGProficiencyReward>::size(&proficiency_config_ptr->proficiency_reward_list) )
          {
            proficiency_reward = std::vector<data::GCGProficiencyReward>::operator[](
                                   proficiency_reward_list,
                                   reward_idx);
            if ( *(_BYTE *)(((unsigned __int64)&proficiency_reward->proficiency >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&proficiency_reward->proficiency >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&proficiency_reward->proficiency);
            }
            proficiency = proficiency_reward->proficiency;
            v20 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v20->proficiency >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v20->proficiency >> 3) + 0x7FFF8000) <= 3 )
            {
              v20 = (std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v20->proficiency);
            }
            if ( proficiency <= v20->proficiency )
            {
              if ( *(_BYTE *)(((unsigned __int64)&proficiency_reward->reward_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)proficiency_reward + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proficiency_reward->reward_id >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(&proficiency_reward->reward_id);
              }
              *(_DWORD *)(v3 + 48) = proficiency_reward->reward_id;
              ActionReason::ActionReason(
                (ActionReason *const)(v3 + 128),
                ACTION_REASON_GCG_PROFICIENCY_REWARD,
                ITEM_LIMIT_GCG_PROFICIENCY_REWARD);
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              ItemComp = Player::getItemComp(this->player_);
              ret = PlayerItemComp::checkGrantReward(ItemComp, *(_DWORD *)(v3 + 48), (const ActionReason *)(v3 + 128));
              if ( ret )
              {
                common::milog::MiLogStream::create(
                  &v45,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/card_game/gcg_deck_system.cpp",
                  "tryGrantProficiencyReward",
                  1118);
                v30 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        &v45,
                        (const char (*)[35])"checkGrantReward failed, card_id: ");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        (const unsigned int *)(v3 + 64));
                v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v31,
                        (const char (*)[12])" reward_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v45);
                v7 = ret;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                  __asan_report_load8(this);
                v33 = Player::getItemComp(this->player_);
                PlayerItemComp::grantReward(v33, *(_DWORD *)(v3 + 48), (const ActionReason *)(v3 + 128), 0LL);
                v34 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                std::set<unsigned int>::emplace<unsigned int &>(
                  &v34->proficiency_reward_taken_idx_set,
                  (unsigned int *)(v3 + 80),
                  (unsigned int *)&v34->proficiency_reward_taken_idx_set);
                v7 = 0;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/card_game/gcg_deck_system.cpp",
                "tryGrantProficiencyReward",
                1109);
              v21 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v45,
                      (const char (*)[37])off_25705F00);
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      (const unsigned int *)(v3 + 64));
              v23 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      v22,
                      (const char (*)[31])" proficiency_reward_taken_idx:");
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v23,
                      (const unsigned int *)(v3 + 80));
              v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v24,
                      (const char (*)[14])" proficiency:");
              v26 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &v26->proficiency);
              v28 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v27,
                      (const char (*)[19])" proficiency need:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                &proficiency_reward->proficiency);
              common::milog::MiLogStream::~MiLogStream(&v45);
              v7 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/card_game/gcg_deck_system.cpp",
              "tryGrantProficiencyReward",
              1102);
            v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v45,
                    (const char (*)[31])"next reward not find, card_id:");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(v3 + 64));
            v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    v15,
                    (const char (*)[31])" proficiency_reward_taken_idx:");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v3 + 80));
            v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v17,
                    (const char (*)[19])" reward_list_size:");
            val = std::vector<data::GCGProficiencyReward>::size(proficiency_reward_list);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v18, &val);
            common::milog::MiLogStream::~MiLogStream(&v45);
            v7 = -1;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "tryGrantProficiencyReward",
          1086);
        v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               &v45,
               (const char (*)[48])"ProficiencyRewardExcelConfig not find, card_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v45);
        v7 = -1;
      }
    }
    std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v3 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "tryGrantProficiencyReward",
      1073);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v45,
           (const char (*)[44])"proficiency_reward_taken_idx is 0, card_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v45);
    v7 = -1;
  }
  result = v7;
  if ( v46 == (char *)v3 )
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

// Line 1128: range 00000000150E3574-00000000150E381B
uint32_t __cdecl GCGDeckSystem::getTotalCardNum(const GCGDeckSystem *const this, data::GCGCardType card_type)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  char v5; // al
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  uint32_t *p_num; // rax
  unsigned int val; // [rsp+10h] [rbp-80h] BYREF
  uint32_t total_num; // [rsp+14h] [rbp-7Ch]
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+28h] [rbp-68h]
  const std::map<unsigned int,std::shared_ptr<GCGDSCard>> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > *v15; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *card_id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *card_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v18; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-30h] BYREF

  total_num = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.gcg_game_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v18);
  __for_range = &this->card_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::begin(&this->card_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::end(&this->card_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator*(&__for_begin);
    card_id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSCard>>(v15);
    card_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<GCGDSCard>>(v15);
    if ( std::operator==<GCGDSCard>(card_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "getTotalCardNum",
        1135);
      v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v19,
             (const char (*)[30])"card_ptr is nullptr, card_id:");
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, card_id);
      v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      if ( card_type == GCG_CARD_INVALID )
        goto LABEL_12;
      if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(card_id);
      }
      if ( card_type == GCGGameExcelConfigMgr::getCardType(gcg_game_config_mgr, *card_id) )
LABEL_12:
        v5 = 0;
      else
        v5 = 1;
      if ( !v5 )
      {
        v6 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
        p_num = &v6->num;
        if ( *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_num);
        }
        total_num += v6->num;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator++(&__for_begin);
  }
  return total_num;
};

// Line 1149: range 00000000150E381C-00000000150E383A
uint32_t __cdecl GCGDeckSystem::getTotalCharacterCardNum(const GCGDeckSystem *const this)
{
  return GCGDeckSystem::getTotalCardNum(this, GCG_CARD_CHARACTER);
};

// Line 1154: range 00000000150E383C-00000000150E3AC4
uint32_t __cdecl GCGDeckSystem::getUnlockGoldFaceNum(const GCGDeckSystem *const this, data::GCGCardType card_type)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  char v5; // al
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int val; // [rsp+10h] [rbp-80h] BYREF
  uint32_t unlock_gold_face_num; // [rsp+14h] [rbp-7Ch]
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+28h] [rbp-68h]
  const std::map<unsigned int,std::shared_ptr<GCGDSCard>> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > *v14; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *card_id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *card_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-30h] BYREF

  unlock_gold_face_num = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.gcg_game_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  __for_range = &this->card_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::begin(&this->card_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::end(&this->card_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator*(&__for_begin);
    card_id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSCard>>(v14);
    card_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<GCGDSCard>>(v14);
    if ( std::operator==<GCGDSCard>(0LL, card_ptr) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "getUnlockGoldFaceNum",
        1161);
      v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v18,
             (const char (*)[30])"card_ptr is nullptr, card_id:");
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, card_id);
      v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      if ( card_type == GCG_CARD_INVALID )
        goto LABEL_12;
      if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(card_id);
      }
      if ( card_type == GCGGameExcelConfigMgr::getCardType(gcg_game_config_mgr, *card_id) )
LABEL_12:
        v5 = 0;
      else
        v5 = 1;
      if ( !v5 )
      {
        val = 1;
        v6 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
        if ( common::tools::MiscUtils::isContains<std::set<data::GCGCardFaceType>,data::GCGCardFaceType>(
               &v6->unlock_card_face_set,
               (const data::GCGCardFaceType *)&val) )
        {
          ++unlock_gold_face_num;
        }
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator++(&__for_begin);
  }
  return unlock_gold_face_num;
};

// Line 1178: range 00000000150E3AC6-00000000150E3AE4
uint32_t __cdecl GCGDeckSystem::getUnlockCharacterGoldFaceNum(const GCGDeckSystem *const this)
{
  return GCGDeckSystem::getUnlockGoldFaceNum(this, GCG_CARD_CHARACTER);
};

// Line 1183: range 00000000150E3AE6-00000000150E3D7B
uint32_t __cdecl GCGDeckSystem::getReachProficiencyCharacterNum(
        const GCGDeckSystem *const this,
        uint32_t proficiency_value)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned int val; // [rsp+10h] [rbp-80h] BYREF
  uint32_t character_num; // [rsp+14h] [rbp-7Ch]
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+28h] [rbp-68h]
  const std::map<unsigned int,std::shared_ptr<GCGDSCard>> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > *v13; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *card_id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *card_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v16; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  character_num = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.gcg_game_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  __for_range = &this->card_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::begin(&this->card_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::end(&this->card_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator*(&__for_begin);
    card_id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSCard>>(v13);
    card_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<GCGDSCard>>(v13);
    if ( std::operator==<GCGDSCard>(0LL, card_ptr) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "getReachProficiencyCharacterNum",
        1190);
      v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v17,
             (const char (*)[30])"card_ptr is nullptr, card_id:");
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, card_id);
      v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(card_id);
      }
      if ( GCGGameExcelConfigMgr::getCardType(gcg_game_config_mgr, *card_id) == GCG_CARD_CHARACTER )
      {
        v5 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v5->proficiency >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v5->proficiency >> 3) + 0x7FFF8000) <= 3 )
        {
          v5 = (std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v5->proficiency);
        }
        if ( proficiency_value <= v5->proficiency )
          ++character_num;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator++(&__for_begin);
  }
  return character_num;
};

// Line 1207: range 00000000150E3D7C-00000000150E40D5
GCGDeckSystem *__fastcall GCGDeckSystem::createCard(GCGDeckSystem *const this, const GCGDeckSystem *card_id, int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rdx
  std::shared_ptr<GCGDSCard> *v14; // rax
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 card_id:1206 64 16 13 card_ptr:1218";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::createCard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  GCGDeckSystem::findCard((GCGDeckSystem *const)(v3 + 64), (uint32_t)card_id);
  v6 = std::operator!=<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v3 + 64), 0LL);
  std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v3 + 64));
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "createCard",
      1210);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v18,
           (const char (*)[35])"card_id already created. deck_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    std::shared_ptr<GCGDSCard>::shared_ptr((std::shared_ptr<GCGDSCard> *const)this, 0LL);
  }
  else
  {
    v8 = *(unsigned int *)(v3 + 48);
    if ( !GCGDeckSystem::isCardIdValid(card_id, v8) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "createCard",
        1215);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v18,
             (const char (*)[30])"card_id is invalid. deck_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      std::shared_ptr<GCGDSCard>::shared_ptr((std::shared_ptr<GCGDSCard> *const)this, 0LL);
    }
    else
    {
      common::tools::perf::make_shared<GCGDSCard>();
      v10 = *(_DWORD *)(v3 + 48);
      v11 = (unsigned __int64)std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v12 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v12 != 0;
      v13 = (v12 != 0) & (unsigned __int8)(v12 <= 3);
      if ( (_BYTE)v13 )
        v11 = __asan_report_store4(v11, v8, v13);
      *(_DWORD *)v11 = v10;
      v14 = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::operator[](
              &card_id->card_map_,
              (const std::map<unsigned int,std::shared_ptr<GCGDSCard>>::key_type *)(v3 + 48));
      std::shared_ptr<GCGDSCard>::operator=(v14, (const std::shared_ptr<GCGDSCard> *)(v3 + 64));
      std::shared_ptr<GCGDSCard>::shared_ptr(
        (std::shared_ptr<GCGDSCard> *const)this,
        (std::shared_ptr<GCGDSCard> *)(v3 + 64));
      std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v3 + 64));
    }
  }
  if ( v19 == (char *)v3 )
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

// Line 1225: range 00000000150E40D6-00000000150E4263
const GCGDeckSystem *__fastcall GCGDeckSystem::findCard(const GCGDeckSystem *const this, __int64 card_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 card_id:1224 64 8 9 iter:1226";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::findCard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<GCGDSCard>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::find(
                                                                                      (const std::map<unsigned int,std::shared_ptr<GCGDSCard>> *const)(card_id + 208),
                                                                                      (const std::map<unsigned int,std::shared_ptr<GCGDSCard>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::end((const std::map<unsigned int,std::shared_ptr<GCGDSCard>> *const)(card_id + 208))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<GCGDSCard>::shared_ptr((std::shared_ptr<GCGDSCard> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > > *const)(v3 + 64));
    std::shared_ptr<GCGDSCard>::shared_ptr((std::shared_ptr<GCGDSCard> *const)this, &v6->second);
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

// Line 1235: range 00000000150E4264-00000000150E43F1
GCGDeckSystem *__fastcall GCGDeckSystem::findCard(GCGDeckSystem *const this, __int64 card_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 card_id:1234 64 8 9 iter:1236";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::findCard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<GCGDSCard>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::find(
                                                                                (std::map<unsigned int,std::shared_ptr<GCGDSCard>> *const)(card_id + 208),
                                                                                (const std::map<unsigned int,std::shared_ptr<GCGDSCard>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::end((std::map<unsigned int,std::shared_ptr<GCGDSCard>> *const)(card_id + 208))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<GCGDSCard>::shared_ptr((std::shared_ptr<GCGDSCard> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > > *const)(v3 + 64));
    std::shared_ptr<GCGDSCard>::shared_ptr((std::shared_ptr<GCGDSCard> *const)this, &v6->second);
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

// Line 1245: range 00000000150E43F2-00000000150E4552
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGDSCard> __cdecl GCGDeckSystem::getCard(GCGDeckSystem *const this, uint32_t card_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<GCGDSCard> result; // rax
  int card_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  card_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 card_ptr:1246";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::getCard;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  GCGDeckSystem::findCard((GCGDeckSystem *const)(v3 + 32), *(__int64 *)&card_id, card_ida);
  if ( std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v3 + 32), 0LL) )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    GCGDeckSystem::createCard(this, *(const GCGDeckSystem **)&card_id, card_ida);
  }
  else
  {
    std::shared_ptr<GCGDSCard>::shared_ptr(
      (std::shared_ptr<GCGDSCard> *const)this,
      (std::shared_ptr<GCGDSCard> *)(v3 + 32));
  }
  std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GCGDSCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1255: range 00000000150E4554-00000000150E4A27
void __cdecl GCGDeckSystem::tryUnlockDeck(GCGDeckSystem *const this)
{
  data::GCGDeckUnlockCondition unlock_cond; // eax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t level; // [rsp+14h] [rbp-8Ch]
  std::unordered_map<unsigned int,data::GCGDeckStorageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::unordered_map<unsigned int,data::GCGDeckStorageExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  char *val; // [rsp+28h] [rbp-78h] BYREF
  PlayerGCGComp *gcg_comp; // [rsp+30h] [rbp-70h]
  const GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+38h] [rbp-68h]
  const std::unordered_map<unsigned int,data::GCGDeckStorageExcelConfig> *__for_range; // [rsp+40h] [rbp-60h]
  const std::pair<unsigned int const,data::GCGDeckStorageExcelConfig> *v14; // [rsp+48h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGDeckStorageExcelConfig> >::type *id; // [rsp+50h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckStorageExcelConfig> >::type *config; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  gcg_comp = Player::getGCGComp(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  __for_range = &gcg_deck_config_mgr->gcg_deck_storage_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::GCGDeckStorageExcelConfig>::begin(&gcg_deck_config_mgr->gcg_deck_storage_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::GCGDeckStorageExcelConfig>::end(&gcg_deck_config_mgr->gcg_deck_storage_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGDeckStorageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckStorageExcelConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::GCGDeckStorageExcelConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckStorageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGDeckStorageExcelConfig>(v14);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !GCGDeckSystem::isDeckUnlock(this, *id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->unlock_cond);
      }
      unlock_cond = config->unlock_cond;
      if ( unlock_cond )
      {
        if ( unlock_cond == DUEL_LEVEL )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->unlock_param);
          }
          level = config->unlock_param;
          if ( level <= PlayerGCGComp::getLevel(gcg_comp) )
          {
            if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(id);
            }
            if ( (unsigned int)GCGDeckSystem::unlockDeck(this, *id) )
            {
              common::milog::MiLogStream::create(
                &v18,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/card_game/gcg_deck_system.cpp",
                "tryUnlockDeck",
                1282);
              v3 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                     &v18,
                     (const char (*)[23])"unlock deck fail. id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, id);
              common::milog::MiLogStream::~MiLogStream(&v18);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/card_game/gcg_deck_system.cpp",
            "tryUnlockDeck",
            1289);
          v4 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                 &v18,
                 (const char (*)[22])"unsupport cond type. ");
          if ( *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->unlock_cond);
          }
          val = (char *)data::enumValToStr(config->unlock_cond);
          v5 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v4, (const char *const *)&val);
          v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, id);
          common::milog::MiLogStream::~MiLogStream(&v18);
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(id);
        }
        if ( (unsigned int)GCGDeckSystem::unlockDeck(this, *id) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/card_game/gcg_deck_system.cpp",
            "tryUnlockDeck",
            1271);
          v2 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                 &v18,
                 (const char (*)[23])"unlock deck fail. id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, id);
          common::milog::MiLogStream::~MiLogStream(&v18);
        }
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckStorageExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 1297: range 00000000150E4A28-00000000150E4B87
int32_t __cdecl GCGDeckSystem::onGMAddCardAll(GCGDeckSystem *const this)
{
  uint32_t *p_limit; // rax
  __int32 limit; // edi
  std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,data::GCGDeckCardExcelConfig> *v8; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGDeckCardExcelConfig> >::type *id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckCardExcelConfig> >::type *config; // [rsp+38h] [rbp-18h]
  std::shared_ptr<Config> v11; // [rsp+40h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.gcg_deck_config_mgr.gcg_deck_card_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::GCGDeckCardExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::GCGDeckCardExcelConfig>(v8);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckCardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGDeckCardExcelConfig>(v8);
    p_limit = &config->limit;
    if ( *(_BYTE *)(((unsigned __int64)p_limit >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_limit >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_limit);
    }
    limit = config->limit;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      limit = (int)id;
      __asan_report_load4(id);
    }
    GCGDeckSystem::addCard(this, *id, limit, 1);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckCardExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1306: range 00000000150E4B88-00000000150E4BB1
int32_t __cdecl GCGDeckSystem::onGMAddCard(GCGDeckSystem *const this, uint32_t card_id)
{
  return GCGDeckSystem::addCard(this, card_id, 1, 1);
};

// Line 1311: range 00000000150E4BB2-00000000150E4E38
int32_t __cdecl GCGDeckSystem::onGMDeleteCard(GCGDeckSystem *const this, uint32_t card_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  char v7; // cl
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  uint32_t *p_num; // rax
  int32_t result; // eax
  char v12[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 card_ptr:1312 64 32 11 notify:1319";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::onGMDeleteCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  GCGDeckSystem::findCard((GCGDeckSystem *const)(v2 + 32), (__int64)this, card_id);
  v5 = 0LL;
  if ( !std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = *(_BYTE *)(((unsigned __int64)&v6->num >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)((((_BYTE)v6 + 4) & 7) + 3) >= v7 )
    {
      LOBYTE(v5) = v7 != 0;
      __asan_report_store4(&v6->num, v5, v6);
    }
    v6->num = 0;
    proto::GCGDSCardNumChangeNotify::GCGDSCardNumChangeNotify((proto::GCGDSCardNumChangeNotify *const)(v2 + 64));
    proto::GCGDSCardNumChangeNotify::set_card_id((proto::GCGDSCardNumChangeNotify *const)(v2 + 64), card_id);
    v8 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_num = &v8->num;
    if ( *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_num);
    }
    proto::GCGDSCardNumChangeNotify::set_num((proto::GCGDSCardNumChangeNotify *const)(v2 + 64), v8->num);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    proto::GCGDSCardNumChangeNotify::~GCGDSCardNumChangeNotify((proto::GCGDSCardNumChangeNotify *const)(v2 + 64));
  }
  std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v2 + 32));
  result = 0;
  if ( v12 == (char *)v2 )
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
  return result;
};

// Line 1327: range 00000000150E4E3A-00000000150E4E5B
int32_t __cdecl GCGDeckSystem::onGMUnlockCardBack(GCGDeckSystem *const this, uint32_t card_back_id)
{
  return GCGDeckSystem::unlockCardBack(this, card_back_id);
};

// Line 1332: range 00000000150E4E5C-00000000150E4E7D
int32_t __cdecl GCGDeckSystem::onGMUnlockField(GCGDeckSystem *const this, uint32_t field_id)
{
  return GCGDeckSystem::unlockField(this, field_id);
};

// Line 1337: range 00000000150E4E7E-00000000150E4EA5
int32_t __cdecl GCGDeckSystem::onGMUnlockCardFace(GCGDeckSystem *const this, uint32_t card_id, uint32_t face_type)
{
  return GCGDeckSystem::unlockCardFace(this, card_id, face_type);
};

// Line 1342: range 00000000150E4EA6-00000000150E517E
int32_t __cdecl GCGDeckSystem::onGMUnlockCardFaceAll(GCGDeckSystem *const this, uint32_t face_type)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSCard>> *__for_range; // [rsp+28h] [rbp-D8h]
  std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-D0h]
  std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > *__in; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *card_ptr; // [rsp+48h] [rbp-B8h]
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 16 card_id_set:1343";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)GCGDeckSystem::onGMUnlockCardFaceAll;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set(v2 + 1);
  __for_range = &this->card_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::begin(&this->card_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::end(&this->card_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSCard>>(__in);
    card_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGDSCard>>(__in);
    std::set<unsigned int>::insert(v2 + 1, id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator++(&__for_begin);
  }
  __for_range_0 = v2 + 1;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Base_ptr)std::set<unsigned int>::begin(v2 + 1)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Base_ptr)std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    GCGDeckSystem::unlockCardFace(this, *v6, face_type);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  std::set<unsigned int>::~set(v2 + 1);
  result = 0;
  if ( v15 == (char *)v2 )
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
  return result;
};

// Line 1355: range 00000000150E5180-00000000150E5458
int32_t __cdecl GCGDeckSystem::onGMSetCardFaceAll(GCGDeckSystem *const this, uint32_t face_type)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSCard>> *__for_range; // [rsp+28h] [rbp-D8h]
  std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-D0h]
  std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > *__in; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::type *card_ptr; // [rsp+48h] [rbp-B8h]
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 16 card_id_set:1356";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)GCGDeckSystem::onGMSetCardFaceAll;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set(v2 + 1);
  __for_range = &this->card_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::begin(&this->card_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSCard>>::end(&this->card_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSCard>>(__in);
    card_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGDSCard>>(__in);
    std::set<unsigned int>::insert(v2 + 1, id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard>>>::operator++(&__for_begin);
  }
  __for_range_0 = v2 + 1;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Base_ptr)std::set<unsigned int>::begin(v2 + 1)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSCard> > >::_Base_ptr)std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    GCGDeckSystem::setCardFaceType(this, *v6, face_type);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  std::set<unsigned int>::~set(v2 + 1);
  result = 0;
  if ( v15 == (char *)v2 )
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
  return result;
};

// Line 1369: range 00000000150E545A-00000000150E591F
__int64 __fastcall GCGDeckSystem::onGMSetDeck(
        GCGDeckSystem *const this,
        uint32_t deck_id,
        const std::string *name,
        const std::vector<unsigned int> *character_card_vec,
        const std::vector<unsigned int> *card_vec)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  std::pair<GCGDeckValidType,unsigned int> __p; // [rsp+38h] [rbp-D8h] BYREF
  std::shared_ptr<GCGSaveDeckEvent> __r; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+80h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 12 deck_id:1368 64 16 13 deck_ptr:1375";
  *(_QWORD *)(v5 + 16) = GCGDeckSystem::onGMSetDeck;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = deck_id;
  if ( !GCGDeckSystem::isDeckUnlock(this, *(_DWORD *)(v5 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "onGMSetDeck",
      1372);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v25,
           (const char (*)[26])"deck is locked. deck_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v25);
    v9 = 12201;
  }
  else
  {
    GCGDeckSystem::getDeck((GCGDeckSystem *const)(v5 + 64), (uint32_t)this);
    if ( std::operator==<GCGDSDeck>((const std::shared_ptr<GCGDSDeck> *)(v5 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "onGMSetDeck",
        1378);
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v25,
              (const char (*)[30])"getDeck is nullptr. deck_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
      v9 = 12207;
    }
    else
    {
      v11 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      std::string::operator=(&v11->name, name);
      v12 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      std::vector<unsigned int>::operator=(&v12->character_card_vec, character_card_vec);
      v13 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      std::vector<unsigned int>::operator=(&v13->card_vec, card_vec);
      v14 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      __p = GCGDeckSystem::checkDeckValid(this, v14);
      v15 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      std::pair<GCGDeckValidType,unsigned int>::operator=(&v15->valid_state, &__p);
      v16 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( !GCGDSDeck::isValid(v16) )
      {
        GCGDeckSystem::deleteDeck(this, *(_DWORD *)(v5 + 48));
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "onGMSetDeck",
          1390);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v25, (const char (*)[14])"invalid deck.");
        common::milog::MiLogStream::~MiLogStream(&v25);
        v9 = -1;
      }
      else
      {
        GCGDeckSystem::setCurDeckId(this, *(_DWORD *)(v5 + 48));
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        EventComp = Player::getEventComp(this->player_);
        common::tools::perf::make_shared<GCGSaveDeckEvent,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v5 + 48));
        std::shared_ptr<BaseEvent>::shared_ptr<GCGSaveDeckEvent,void>(&p_event_ptr, &__r);
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        std::shared_ptr<GCGSaveDeckEvent>::~shared_ptr(&__r);
        v9 = 0;
      }
    }
    std::shared_ptr<GCGDSDeck>::~shared_ptr((std::shared_ptr<GCGDSDeck> *const)(v5 + 64));
  }
  result = v9;
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1401: range 00000000150E5920-00000000150E5EC0
__int64 __fastcall GCGDeckSystem::onGMSetCardProficiency(GCGDeckSystem *const this, uint32_t card_id, uint32_t num)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  uint32_t *p_num; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 v12; // rsi
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rdx
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  __int64 result; // rax
  std::shared_ptr<GCGAddCardProficiencyEvent> __r; // [rsp+10h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v24; // [rsp+20h] [rbp-E0h] BYREF
  char v25[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 card_id:1400 64 16 13 card_ptr:1403 96 32 11 notify:1424";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::onGMSetCardProficiency;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = card_id;
  GCGDeckSystem::findCard((GCGDeckSystem *const)(v3 + 64), (__int64)this, *(_DWORD *)(v3 + 48));
  if ( std::operator==<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "onGMSetCardProficiency",
      1406);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[29])"find card_id fail. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    p_num = &v8->num;
    if ( *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_num);
    }
    if ( v8->num )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
      v12 = *(unsigned int *)(v3 + 48);
      v13 = GCGGameExcelConfigMgr::getCardType(&v11->design_config.txt_config_mgr.gcg_game_config_mgr, v12) != GCG_CARD_CHARACTER;
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( v13 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "onGMSetCardProficiency",
          1417);
        v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                (common::milog::MiLogStream *const)(v3 + 96),
                (const char (*)[35])"card_type not character. card_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
        v7 = -1;
      }
      else
      {
        v15 = (__int64)std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v16 = *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000);
        LOBYTE(v12) = v16 != 0;
        v17 = (v16 != 0) & (unsigned __int8)(v16 <= 3);
        if ( (_BYTE)v17 )
          v15 = __asan_report_store4(v15 + 8, v12, v17);
        *(_DWORD *)(v15 + 8) = num;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        EventComp = Player::getEventComp(this->player_);
        v19 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        common::tools::perf::make_shared<GCGAddCardProficiencyEvent,unsigned int &,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v3 + 48),
          &v19->proficiency,
          (unsigned int *)(v3 + 48));
        std::shared_ptr<BaseEvent>::shared_ptr<GCGAddCardProficiencyEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v24,
          &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v24);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v24);
        std::shared_ptr<GCGAddCardProficiencyEvent>::~shared_ptr(&__r);
        proto::GCGDSCardProficiencyNotify::GCGDSCardProficiencyNotify((proto::GCGDSCardProficiencyNotify *const)(v3 + 96));
        proto::GCGDSCardProficiencyNotify::set_card_id(
          (proto::GCGDSCardProficiencyNotify *const)(v3 + 96),
          *(_DWORD *)(v3 + 48));
        v20 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v20->proficiency >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v20->proficiency >> 3) + 0x7FFF8000) <= 3 )
        {
          v20 = (std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v20->proficiency);
        }
        proto::GCGDSCardProficiencyNotify::set_proficiency(
          (proto::GCGDSCardProficiencyNotify *const)(v3 + 96),
          v20->proficiency);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 96));
        v7 = 0;
        proto::GCGDSCardProficiencyNotify::~GCGDSCardProficiencyNotify((proto::GCGDSCardProficiencyNotify *const)(v3 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "onGMSetCardProficiency",
        1411);
      v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)(v3 + 96),
              (const char (*)[25])"card num is 0. card_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v7 = -1;
    }
  }
  std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v3 + 64));
  result = v7;
  if ( v25 == (char *)v3 )
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
  return result;
};

// Line 1432: range 00000000150E5EC2-00000000150E5F32
void __cdecl GCGDeckSystem::onGMClearCard(GCGDeckSystem *const this)
{
  __int64 v1; // rsi
  uint32_t *p_cur_deck_id; // rdx

  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::clear(&this->card_map_);
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::clear(&this->deck_map_);
  p_cur_deck_id = &this->cur_deck_id_;
  if ( *(_BYTE *)(((unsigned __int64)p_cur_deck_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_cur_deck_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_deck_id_, v1, p_cur_deck_id);
  }
  this->cur_deck_id_ = 0;
};

// Line 1439: range 00000000150E5F34-00000000150E5F52
void __cdecl GCGDeckSystem::onGMClearCardBack(GCGDeckSystem *const this)
{
  std::set<unsigned int>::clear(&this->unlock_card_back_id_set);
};

// Line 1444: range 00000000150E5F54-00000000150E5F72
void __cdecl GCGDeckSystem::onGMClearField(GCGDeckSystem *const this)
{
  std::set<unsigned int>::clear(&this->unlock_field_id_set);
};

// Line 1449: range 00000000150E5F74-00000000150E607A
void __cdecl GCGDeckSystem::onGMClearCardFace(GCGDeckSystem *const this, uint32_t card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 card_ptr:1450";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::onGMClearCardFace;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  GCGDeckSystem::findCard((GCGDeckSystem *const)(v2 + 32), (__int64)this, card_id);
  if ( std::operator!=<GCGDSCard>((const std::shared_ptr<GCGDSCard> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::set<data::GCGCardFaceType>::clear(&v5->unlock_card_face_set);
  }
  std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1459: range 00000000150E607C-00000000150E6736
__int64 __fastcall GCGDeckSystem::deleteCardByMuip(GCGDeckSystem *const this, uint32_t card_id, uint32_t del_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // r14d
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::vector<unsigned int> *p_character_card_vec; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v16; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  __int64 result; // rax
  uint32_t i; // [rsp+14h] [rbp-12Ch]
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  const GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+28h] [rbp-118h]
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+30h] [rbp-110h]
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *__for_range; // [rsp+40h] [rbp-100h]
  std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > *__in; // [rsp+48h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *id; // [rsp+50h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *deck_ptr; // [rsp+58h] [rbp-E8h]
  std::vector<unsigned int> *card_vec; // [rsp+60h] [rbp-E0h]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __rhs; // [rsp+68h] [rbp-D8h] BYREF
  common::milog::MiLogStream v36; // [rsp+70h] [rbp-D0h] BYREF
  char v37[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 card_id:1458 48 4 12 del_num:1458 64 8 7 it:1482 96 16 13 card_ptr:1468";
  *(_QWORD *)(v3 + 16) = GCGDeckSystem::deleteCardByMuip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = card_id;
  *(_DWORD *)(v3 + 48) = del_num;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.gcg_game_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(gcg_deck_config_mgr, *(_DWORD *)(v3 + 32)) )
  {
    GCGDeckSystem::findCard((GCGDeckSystem *const)(v3 + 96), (__int64)this, *(_DWORD *)(v3 + 32));
    if ( std::operator==<GCGDSCard>(0LL, (const std::shared_ptr<GCGDSCard> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "deleteCardByMuip",
        1471);
      v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v36,
             (const char (*)[25])"findCard fail. card_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v36);
      v7 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v10 = (unsigned int *)std::min<unsigned int>(&v9->num, (const unsigned int *)(v3 + 48));
      v11 = (int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = *v11;
      v13 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v13->num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->num >> 3) + 0x7FFF8000) )
      {
        v13 = (std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->num);
      }
      v13->num -= v12;
      __for_range = &this->deck_map_;
      __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::begin(&this->deck_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::end(&this->deck_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator*(&__for_begin);
        id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
        deck_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
        if ( std::operator!=<GCGDSDeck>(deck_ptr, 0LL) )
        {
          if ( GCGGameExcelConfigMgr::getCardType(gcg_game_config_mgr, *(_DWORD *)(v3 + 32)) == GCG_CARD_CHARACTER )
            p_character_card_vec = &std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr)->character_card_vec;
          else
            p_character_card_vec = &std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr)->card_vec;
          card_vec = p_character_card_vec;
          for ( i = 0; i < *(_DWORD *)(v3 + 48); ++i )
          {
            M_current = std::vector<unsigned int>::end(card_vec)._M_current;
            v16._M_current = std::vector<unsigned int>::begin(card_vec)._M_current;
            *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                                     v16,
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                                     (const unsigned int *)(v3 + 32));
            __rhs._M_current = std::vector<unsigned int>::end(card_vec)._M_current;
            if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
                   (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 64),
                   &__rhs) )
            {
              break;
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__rhs,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 64));
            std::vector<unsigned int>::erase(card_vec, (std::vector<unsigned int>::const_iterator)__rhs._M_current);
          }
          v17 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
          __rhs._M_current = (unsigned int *)GCGDeckSystem::checkDeckValid(this, v17);
          v18 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
          std::pair<GCGDeckValidType,unsigned int>::operator=(
            &v18->valid_state,
            (std::conditional<true,std::pair<GCGDeckValidType,unsigned int>&&,std::__nonesuch_no_braces&&>::type)&__rhs);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator++(&__for_begin);
      }
      GCGDeckSystem::notifyAllData(this);
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "deleteCardByMuip",
        1494);
      v19 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v36, (const char (*)[24])off_25706660);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
      v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" del_num: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v36);
      v7 = 0;
    }
    std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v3 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "deleteCardByMuip",
      1465);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v36,
           (const char (*)[43])"findGCGDeckCardExcelConfig fail. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v36);
    v7 = -1;
  }
  result = v7;
  if ( v37 == (char *)v3 )
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

// Line 1500: range 00000000150E6738-00000000150E6DB8
__int64 __fastcall GCGDeckSystem::deleteCardFaceByMuip(GCGDeckSystem *const this, uint32_t card_face_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  char *v15; // rsi
  std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  const GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+20h] [rbp-E0h]
  const data::GCGCardFaceExcelConfig *config_ptr; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 8) = "4 48 4 12 card_id:1509 64 4 19 card_face_type:1510 80 4 17 card_face_id:1499 96 16 13 card_ptr:1516";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::deleteCardFaceByMuip;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 80) = card_face_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  gcg_deck_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGCardFaceExcelConfig(gcg_deck_config_mgr, *(_DWORD *)(v2 + 80));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->card_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->card_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->card_id);
    }
    *(_DWORD *)(v2 + 48) = config_ptr->card_id;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->card_face_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->card_face_type >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->card_face_type);
    }
    *(_DWORD *)(v2 + 64) = config_ptr->card_face_type;
    if ( *(_DWORD *)(v2 + 64) )
    {
      GCGDeckSystem::findCard((GCGDeckSystem *const)(v2 + 96), (__int64)this, *(_DWORD *)(v2 + 48));
      if ( std::operator==<GCGDSCard>(0LL, (const std::shared_ptr<GCGDSCard> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "deleteCardFaceByMuip",
          1519);
        v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v27, (const char (*)[24])off_257068A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v6 = -1;
      }
      else if ( (unsigned __int8)GCGDeckSystem::isCardFaceUnlock(
                                   this,
                                   *(_DWORD *)(v2 + 48),
                                   (data::GCGCardFaceType)*(_DWORD *)(v2 + 64)) != 1 )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "deleteCardFaceByMuip",
          1524);
        v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v27,
                (const char (*)[29])"card face is lock. card_id: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" face_type: ");
        val = *(_DWORD *)(v2 + 64);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v6 = -1;
      }
      else
      {
        v14 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v15 = (char *)(v2 + 64);
        std::set<data::GCGCardFaceType>::erase(
          &v14->unlock_card_face_set,
          (const std::set<data::GCGCardFaceType>::key_type *)(v2 + 64));
        v16 = std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v16->face_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v16->face_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v16 = (std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v16->face_type);
        }
        if ( v16->face_type == *(_DWORD *)(v2 + 64) )
        {
          v17 = (__int64)std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          v18 = *(_BYTE *)(((unsigned __int64)(v17 + 112) >> 3) + 0x7FFF8000);
          LOBYTE(v15) = v18 != 0;
          v19 = (v18 != 0) & (unsigned __int8)(v18 <= 3);
          if ( (_BYTE)v19 )
            v17 = __asan_report_store4(v17 + 112, v15, v19);
          *(_DWORD *)(v17 + 112) = 0;
        }
        GCGDeckSystem::notifyAllData(this);
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_deck_system.cpp",
          "deleteCardFaceByMuip",
          1535);
        v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v27, (const char (*)[29])off_257068E0);
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 48));
        v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])" face_type: ");
        val = *(_DWORD *)(v2 + 64);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v6 = 0;
      }
      std::shared_ptr<GCGDSCard>::~shared_ptr((std::shared_ptr<GCGDSCard> *const)(v2 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_deck_system.cpp",
        "deleteCardFaceByMuip",
        1513);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v27,
             (const char (*)[39])"invalid card_face_type. card_face_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 80));
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])" card_face_type:");
      val = *(_DWORD *)(v2 + 64);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v6 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "deleteCardFaceByMuip",
      1505);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v27,
           (const char (*)[48])"findGCGCardFaceExcelConfig fail. card_face_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v6 = -1;
  }
  result = v6;
  if ( v28 == (char *)v2 )
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

// Line 1541: range 00000000150E6DBA-00000000150E713C
__int64 __fastcall GCGDeckSystem::deleteCardBackByMuip(GCGDeckSystem *const this, uint32_t card_back_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *v7; // rsi
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *__for_range; // [rsp+20h] [rbp-A0h]
  std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > *__in; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *id; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *deck_ptr; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-80h] BYREF
  char v20[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 card_back_id:1540";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::deleteCardBackByMuip;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = card_back_id;
  if ( !GCGDeckSystem::isCardBackUnlock(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "deleteCardBackByMuip",
      1544);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v19,
           (const char (*)[40])"card_back has not unlock, card_back_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    std::set<unsigned int>::erase(&this->unlock_card_back_id_set, (const std::set<unsigned int>::key_type *)(v2 + 32));
    __for_range = &this->deck_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::begin(&this->deck_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::end(&this->deck_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
      deck_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
      v7 = deck_ptr;
      if ( std::operator!=<GCGDSDeck>(0LL, deck_ptr) )
      {
        v8 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v8->card_back_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v8->card_back_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v8 = (std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->card_back_id);
        }
        if ( v8->card_back_id == *(_DWORD *)(v2 + 32) )
        {
          v9 = (__int64)std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
          v10 = *(_BYTE *)(((unsigned __int64)(v9 + 88) >> 3) + 0x7FFF8000);
          LOBYTE(v7) = v10 != 0;
          v11 = (v10 != 0) & (unsigned __int8)(v10 <= 3);
          if ( (_BYTE)v11 )
            v9 = __asan_report_store4(v9 + 88, v7, v11);
          *(_DWORD *)(v9 + 88) = 0;
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator++(&__for_begin);
    }
    GCGDeckSystem::notifyAllData(this);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "deleteCardBackByMuip",
      1560);
    v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v19, (const char (*)[34])off_257069E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0LL;
  }
  if ( v20 == (char *)v2 )
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

// Line 1566: range 00000000150E713E-00000000150E74D2
__int64 __fastcall GCGDeckSystem::deleteDeckFieldByMuip(GCGDeckSystem *const this, uint32_t deck_field_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *v7; // rsi
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  uint32_t *p_field_id; // rax
  std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  common::milog::MiLogStream *v12; // rax
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>> *__for_range; // [rsp+20h] [rbp-A0h]
  std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > *__in; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *id; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGDSDeck> > >::type *deck_ptr; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-80h] BYREF
  char v20[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 deck_field_id:1565";
  *(_QWORD *)(v2 + 16) = GCGDeckSystem::deleteDeckFieldByMuip;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = deck_field_id;
  if ( !GCGDeckSystem::isFieldUnlock(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "deleteDeckFieldByMuip",
      1569);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v19,
           (const char (*)[32])"field has not unlock, field_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    std::set<unsigned int>::erase(&this->unlock_field_id_set, (const std::set<unsigned int>::key_type *)(v2 + 32));
    __for_range = &this->deck_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::begin(&this->deck_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::end(&this->deck_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
      deck_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGDSDeck>>(__in);
      v7 = deck_ptr;
      if ( std::operator!=<GCGDSDeck>(0LL, deck_ptr) )
      {
        v8 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
        p_field_id = &v8->field_id;
        if ( *(_BYTE *)(((unsigned __int64)p_field_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_field_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_field_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_field_id);
        }
        if ( v8->field_id == *(_DWORD *)(v2 + 32) )
        {
          v10 = std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)deck_ptr);
          v11 = *(_BYTE *)(((unsigned __int64)&v10->field_id >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (char)((((_BYTE)v10 + 92) & 7) + 3) >= v11 )
          {
            LOBYTE(v7) = v11 != 0;
            __asan_report_store4(&v10->field_id, v7, v10);
          }
          v10->field_id = 0;
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGDSDeck>>>::operator++(&__for_begin);
    }
    GCGDeckSystem::notifyAllData(this);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_deck_system.cpp",
      "deleteDeckFieldByMuip",
      1585);
    v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(&v19, (const char (*)[36])off_25706AE0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0LL;
  }
  if ( v20 == (char *)v2 )
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
