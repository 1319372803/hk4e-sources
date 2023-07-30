// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/item/equip_comp.cpp

// Line 35: range 00000000165E9BB6-00000000165EA644
int32_t __cdecl EquipComp::fromBin(EquipComp *const this, const proto::AvatarBin *bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v8; // rax
  int v9; // eax
  common::milog::MiLogStream *v10; // rcx
  int v11; // eax
  Avatar *v12; // rdx
  _QWORD *v13; // rax
  unsigned __int64 v14; // rax
  int v15; // r15d
  Player *v16; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  int v21; // r15d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  int v26; // eax
  const proto::AvatarEquipAffixBin *v27; // rax
  google::protobuf::uint32 v28; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v29; // rax
  google::protobuf::uint32 *v30; // rdx
  google::protobuf::uint32 v31; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v32; // rax
  google::protobuf::uint32 *v33; // rdx
  google::protobuf::uint32 v34; // eax
  uint64_t v35; // r14
  unsigned __int64 v36; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::ItemBin>::const_iterator __for_begin_0; // [rsp+28h] [rbp-168h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemBin>::const_iterator __for_end_0; // [rsp+30h] [rbp-160h] BYREF
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-158h]
  size_t idx; // [rsp+40h] [rbp-150h]
  const proto::FormalAvatarBin *formal_avatar_bin; // [rsp+48h] [rbp-148h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range; // [rsp+50h] [rbp-140h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-138h]
  const unsigned __int64 *guid; // [rsp+60h] [rbp-130h]
  const google::protobuf::RepeatedPtrField<proto::ItemBin> *__for_range_0; // [rsp+68h] [rbp-128h]
  const proto::ItemBin *item_data; // [rsp+70h] [rbp-120h]
  uint64_t player_time_ms; // [rsp+78h] [rbp-118h]
  char v49[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 11 affix_id:82 64 16 13 player_ptr:52 96 16 13 item_param:61 128 16 12 equip_ptr:62 160 3"
                        "2 19 equip_affix_info:81";
  *(_QWORD *)(v3 + 16) = EquipComp::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v8 = *baseclass_0 + 400LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  v9 = (*(__int64 (__fastcall **)(Avatar *))v8)(avatar);
  if ( v9 == 1 )
  {
    formal_avatar_bin = proto::AvatarBin::formal_avatar(bin);
    __for_range = proto::FormalAvatarBin::equip_guid_list(formal_avatar_bin);
    __for_begin = google::protobuf::RepeatedField<unsigned long>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned long>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      guid = __for_begin;
      std::vector<unsigned long>::emplace_back<unsigned long const&>(
        &this->equip_guid_vec_,
        __for_begin++,
        (const unsigned __int64 *)&this->equip_guid_vec_);
    }
    goto LABEL_47;
  }
  if ( v9 == 2 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/item/equip_comp.cpp",
      "fromBin",
      48);
    v10 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
            (common::milog::MiLogStream *const)(v3 + 160),
            (const char (*)[57])"trial avatar should not call EquipComp::fromBin, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this->avatar_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    goto LABEL_47;
  }
  v11 = proto::AvatarBin::equip_list_size(bin);
  std::vector<std::shared_ptr<Equip>>::reserve(&this->temp_equip_vec_, v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = this->avatar_;
  v13 = v12->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    v13 = (_QWORD *)__asan_report_load8();
  v14 = *v13 + 152LL;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    v14 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v14)(v3 + 64, v12);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/item/equip_comp.cpp",
      "fromBin",
      55);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[15])"player is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    v2 = -1;
    v15 = 0;
    goto LABEL_46;
  }
  __for_range_0 = proto::AvatarBin::equip_list(bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::ItemBin>::begin(__for_range_0).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::ItemBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    item_data = google::protobuf::internal::RepeatedPtrIterator<proto::ItemBin const>::operator*(&__for_begin_0);
    *(_QWORD *)(v3 + 96) = 0LL;
    *(_QWORD *)(v3 + 104) = 0LL;
    *(_DWORD *)(v3 + 100) = 1;
    *(_DWORD *)(v3 + 96) = proto::ItemBin::item_id(item_data);
    v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    ItemComp = Player::getItemComp(v16);
    PlayerItemComp::createTrialEquip((PlayerItemComp *const)(v3 + 128), (const ItemParam *)ItemComp);
    if ( std::operator==<Equip>(0LL, (const std::shared_ptr<Equip> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/item/equip_comp.cpp",
        "fromBin",
        65);
      v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[10])"equip_id:");
      *(_DWORD *)(v3 + 48) = proto::ItemBin::item_id(item_data);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v19,
              (const char (*)[22])" create fail, avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_32:
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v20, this->avatar_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v21 = 0;
      goto LABEL_42;
    }
    v22 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
      v22 = __asan_report_load8();
    v23 = *(_QWORD *)v22 + 16LL;
    if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
      v22 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, const proto::ItemBin *))v23)(v22, item_data) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/item/equip_comp.cpp",
        "fromBin",
        70);
      v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[10])"equip_id:");
      *(_DWORD *)(v3 + 48) = proto::ItemBin::item_id(item_data);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v25,
              (const char (*)[23])" fromBin fail, avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_32;
    }
    std::vector<std::shared_ptr<Equip>>::push_back(
      &this->temp_equip_vec_,
      (const std::vector<std::shared_ptr<Equip>>::value_type *)(v3 + 128));
    v21 = 1;
LABEL_42:
    std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 128));
    if ( v21 != 1 )
    {
      v15 = 0;
      goto LABEL_46;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::ItemBin const>::operator++(&__for_begin_0);
  }
  v15 = 1;
LABEL_46:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v15 )
  {
LABEL_47:
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player_time_ms = Avatar::getPlayerTimeMs(this->avatar_);
    for ( idx = 0LL; ; ++idx )
    {
      v26 = proto::AvatarBin::avatar_equip_affix_list_size(bin);
      if ( idx >= v26 )
        break;
      v27 = proto::AvatarBin::avatar_equip_affix_list(bin, idx);
      proto::AvatarEquipAffixBin::AvatarEquipAffixBin((proto::AvatarEquipAffixBin *const)(v3 + 160), v27);
      *(_DWORD *)(v3 + 48) = proto::AvatarEquipAffixBin::id((const proto::AvatarEquipAffixBin *const)(v3 + 160));
      v28 = proto::AvatarEquipAffixBin::cd((const proto::AvatarEquipAffixBin *const)(v3 + 160));
      v29 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->affix_id_to_cd_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v30 = v29;
      if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v29);
      }
      *v30 = v28;
      v31 = proto::AvatarEquipAffixBin::pass_cd_time((const proto::AvatarEquipAffixBin *const)(v3 + 160));
      v32 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->affix_id_to_pass_cd_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v33 = v32;
      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v32);
      }
      *v33 = v31;
      v34 = proto::AvatarEquipAffixBin::pass_cd_time((const proto::AvatarEquipAffixBin *const)(v3 + 160));
      v35 = player_time_ms - v34;
      v36 = (unsigned __int64)std::unordered_map<unsigned int,unsigned long>::operator[](
                                &this->affix_id_to_start_time_map_,
                                (const std::unordered_map<unsigned int,long unsigned int>::key_type *)(v3 + 48));
      if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
        v36 = __asan_report_store8(v36);
      *(_QWORD *)v36 = v35;
      proto::AvatarEquipAffixBin::~AvatarEquipAffixBin((proto::AvatarEquipAffixBin *const)(v3 + 160));
    }
    v2 = 0;
  }
  result = v2;
  if ( v49 == (char *)v3 )
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

// Line 92: range 00000000165EA646-00000000165EAEFD
int32_t __cdecl EquipComp::toBin(const EquipComp *const this, proto::AvatarBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v7; // rax
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint64_t Guid; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v18; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v19; // rdx
  common::milog::MiLogStream *v20; // rax
  google::protobuf::uint32 *v21; // rdx
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_end; // [rsp+10h] [rbp-100h] BYREF
  proto::FormalAvatarBin *formal_avatar_bin; // [rsp+18h] [rbp-F8h]
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range; // [rsp+20h] [rbp-F0h]
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v25; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+38h] [rbp-D8h]
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range_0; // [rsp+40h] [rbp-D0h]
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v29; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type_0; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr_0; // [rsp+58h] [rbp-B8h]
  proto::ItemBin *item_bin; // [rsp+60h] [rbp-B0h]
  proto::AvatarEquipAffixBin *equip_affix_info; // [rsp+68h] [rbp-A8h]
  common::milog::MiLogStream v34; // [rsp+70h] [rbp-A0h] BYREF
  char v35[128]; // [rsp+90h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 affix_id:133 64 8 8 iter:130";
  *(_QWORD *)(v2 + 16) = EquipComp::toBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v7 = *baseclass_0 + 400LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  v8 = (*(__int64 (__fastcall **)(Avatar *))v7)(avatar);
  if ( v8 == 1 )
  {
    formal_avatar_bin = proto::AvatarBin::mutable_formal_avatar(bin);
    __for_range = &this->equip_map_;
    *(std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator *)(v2 + 64) = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(&this->equip_map_);
    __for_end._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::end(__for_range)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)(v2 + 64),
              &__for_end) )
    {
      v25 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)(v2 + 64));
      equip_type = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(v25);
      equip_ptr = (std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *)std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(v25);
      if ( std::operator==<Equip>(equip_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/item/equip_comp.cpp",
          "toBin",
          102);
        v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               &v34,
               (const char (*)[48])"toBin failed, equip_ptr is nullptr, equip_type:");
        common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(v9, equip_type);
        common::milog::MiLogStream::~MiLogStream(&v34);
        result = -1;
        goto LABEL_43;
      }
      v11 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr);
      Guid = Item::getGuid(v11);
      proto::FormalAvatarBin::add_equip_guid_list(formal_avatar_bin, Guid);
      std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)(v2 + 64));
    }
  }
  else if ( v8 == 2 )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/item/equip_comp.cpp",
      "toBin",
      110);
    v13 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            &v34,
            (const char (*)[55])"trial avatar should not call EquipComp::toBin, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v13, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    __for_range_0 = &this->equip_map_;
    *(std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator *)(v2 + 64) = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(&this->equip_map_);
    __for_end._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)(v2 + 64),
              &__for_end) )
    {
      v29 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)(v2 + 64));
      equip_type_0 = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(v29);
      equip_ptr_0 = (std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *)std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(v29);
      if ( std::operator==<Equip>(equip_ptr_0, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/item/equip_comp.cpp",
          "toBin",
          117);
        v14 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v34,
                (const char (*)[48])"toBin failed, equip_ptr is nullptr, equip_type:");
        common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(v14, equip_type_0);
        common::milog::MiLogStream::~MiLogStream(&v34);
        result = -1;
        goto LABEL_43;
      }
      item_bin = proto::AvatarBin::add_equip_list(bin);
      v15 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr_0);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      v16 = *(_QWORD *)v15 + 24LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::ItemBin *))v16)(v15, item_bin) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/item/equip_comp.cpp",
          "toBin",
          123);
        v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v34,
                (const char (*)[32])"equip toBin failed, equip_type:");
        common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(v17, equip_type_0);
        common::milog::MiLogStream::~MiLogStream(&v34);
        result = -1;
        goto LABEL_43;
      }
      std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)(v2 + 64));
    }
  }
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::begin(&this->affix_id_to_pass_cd_map_);
  while ( 1 )
  {
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(&this->affix_id_to_pass_cd_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
      break;
    equip_affix_info = proto::AvatarBin::add_avatar_equip_affix_list(bin);
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = v18->first;
    proto::AvatarEquipAffixBin::set_id(equip_affix_info, *(_DWORD *)(v2 + 48));
    v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v19->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v19 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AvatarEquipAffixBin::set_pass_cd_time(equip_affix_info, v19->second);
    if ( !std::unordered_map<unsigned int,unsigned int>::count(
            &this->affix_id_to_cd_map_,
            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/item/equip_comp.cpp",
        "toBin",
        139);
      v20 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v34,
              (const char (*)[43])"affix_id dont record start_time, affix_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v34);
      result = -1;
      goto LABEL_43;
    }
    v21 = (google::protobuf::uint32 *)std::unordered_map<unsigned int,unsigned int>::at(
                                        &this->affix_id_to_cd_map_,
                                        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AvatarEquipAffixBin::set_cd(equip_affix_info, *v21);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(
      (std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64),
      0);
  }
  result = 0;
LABEL_43:
  if ( v35 == (char *)v2 )
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

// Line 148: range 00000000165EAEFE-00000000165EB38A
int32_t __cdecl EquipComp::toSnapshot(const EquipComp *const this, proto::AvatarSnapshotBin *snapshot_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int32_t v9; // r14d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  Player *v13; // rax
  PlayerBasicComp *BasicComp; // rax
  google::protobuf::uint64 v15; // rax
  int32_t result; // eax
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  proto::AvatarBin *bin; // [rsp+20h] [rbp-C0h]
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range; // [rsp+28h] [rbp-B8h]
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v21; // [rsp+30h] [rbp-B0h]
  std::tuple_element<0,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type; // [rsp+38h] [rbp-A8h]
  std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+40h] [rbp-A0h]
  proto::ItemBin *item_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-90h] BYREF
  char v26[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:149";
  *(_QWORD *)(v2 + 16) = EquipComp::toSnapshot;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v7 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v7)(v2 + 32, avatar);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/item/equip_comp.cpp",
      "toSnapshot",
      152);
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v25,
           (const char (*)[24])"getPlayer fail, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v9 = -1;
  }
  else
  {
    bin = proto::AvatarSnapshotBin::mutable_avatar_bin(snapshot_bin);
    __for_range = &this->equip_map_;
    __for_begin._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(&this->equip_map_)._M_node;
    __for_end._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::end(&this->equip_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v21 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*(&__for_begin);
      equip_type = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(v21);
      equip_ptr = (std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *)std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(v21);
      if ( !std::operator==<Equip>(0LL, equip_ptr) )
      {
        item_bin = proto::AvatarBin::add_equip_list(bin);
        v10 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v11 = *(_QWORD *)v10 + 40LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::ItemBin *))v11)(v10, item_bin) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/item/equip_comp.cpp",
            "toSnapshot",
            165);
          v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v25,
                  (const char (*)[30])"equip toBin fail, equip_type:");
          common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(v12, equip_type);
          common::milog::MiLogStream::~MiLogStream(&v25);
          v9 = -1;
          goto LABEL_26;
        }
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        BasicComp = Player::getBasicComp(v13);
        v15 = PlayerBasicComp::genGuid(BasicComp, GUID_ITEM);
        proto::ItemBin::set_guid(item_bin, v15);
      }
      std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++(&__for_begin);
    }
    v9 = 0;
  }
LABEL_26:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v9;
  if ( v26 == (char *)v2 )
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

// Line 175: range 00000000165EB38C-00000000165EB7D8
int32_t __cdecl EquipComp::toClient(const EquipComp *const this, proto::SceneAvatarInfo *avatar_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t ItemId; // edx
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int32_t result; // eax
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range; // [rsp+20h] [rbp-C0h]
  proto::SceneWeaponInfo *weapon_info; // [rsp+28h] [rbp-B8h]
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v16; // [rsp+30h] [rbp-B0h]
  std::tuple_element<0,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type; // [rsp+38h] [rbp-A8h]
  std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+40h] [rbp-A0h]
  proto::SceneReliquaryInfo *reliquary_info; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 reliquary_ptr:190";
  *(_QWORD *)(v2 + 16) = EquipComp::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->equip_map_;
  __for_begin._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(&this->equip_map_)._M_node;
  __for_end._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::end(&this->equip_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v16 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*(&__for_begin);
    equip_type = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(v16);
    equip_ptr = (std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *)std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(v16);
    if ( std::operator==<Equip>(equip_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "toClient",
        180);
      v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v20,
             (const char (*)[51])"toClient failed, equip_ptr is nullptr, equip_type:");
      common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(v5, equip_type);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      v6 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr);
      ItemId = Item::getItemId(v6);
      proto::SceneAvatarInfo::add_equip_id_list(avatar_info, ItemId);
      if ( *(_BYTE *)(((unsigned __int64)equip_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)equip_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)equip_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *equip_type != EQUIP_WEAPON )
      {
        std::dynamic_pointer_cast<Reliquary,Equip>((const std::shared_ptr<Equip> *)(v2 + 32));
        if ( std::operator==<Reliquary>((const std::shared_ptr<Reliquary> *)(v2 + 32), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/item/equip_comp.cpp",
            "toClient",
            193);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v20,
            (const char (*)[44])"std::dynamic_pointer_cast<Reliquary> failed");
          common::milog::MiLogStream::~MiLogStream(&v20);
        }
        else
        {
          reliquary_info = proto::SceneAvatarInfo::add_reliquary_list(avatar_info);
          v8 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          Reliquary::toClient(v8, reliquary_info);
        }
        std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(v2 + 32));
      }
    }
    std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++(&__for_begin);
  }
  if ( std::operator!=<AvatarWeaponGadget>(&this->weapon_gadget_ptr_, 0LL) )
  {
    weapon_info = proto::SceneAvatarInfo::mutable_weapon(avatar_info);
    v9 = (unsigned __int64)std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_gadget_ptr_);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(_QWORD *)v9 + 416LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, proto::SceneWeaponInfo *))v10)(v9, weapon_info);
  }
  result = 0;
  if ( v21 == (char *)v2 )
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

// Line 209: range 00000000165EB7DA-00000000165EBCB1
int32_t __cdecl EquipComp::toClient(const EquipComp *const this, proto::AvatarInfo *avatar_info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint64_t Guid; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  common::milog::MiLogStream *v9; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v10; // rdx
  int v11; // r14d
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v12; // rdx
  int32_t result; // eax
  uint32_t left_cd_time; // [rsp+1Ch] [rbp-E4h]
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range; // [rsp+28h] [rbp-D8h]
  proto::AvatarEquipAffixInfo *equip_affix_info; // [rsp+30h] [rbp-D0h]
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v18; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 equip_affix_id:223 64 8 8 iter:220";
  *(_QWORD *)(v2 + 16) = EquipComp::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  __for_range = &this->equip_map_;
  *(std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator *)(v2 + 64) = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(&this->equip_map_);
  __for_end._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::end(__for_range)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)(v2 + 64),
            &__for_end) )
  {
    v18 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)(v2 + 64));
    equip_type = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(v18);
    equip_ptr = (std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *)std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(v18);
    if ( std::operator==<Equip>(equip_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "toClient",
        214);
      v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v21,
             (const char (*)[51])"toClient failed, equip_ptr is nullptr, equip_type:");
      common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(v5, equip_type);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      v6 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr);
      Guid = Item::getGuid(v6);
      proto::AvatarInfo::add_equip_guid_list(avatar_info, Guid);
    }
    std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)(v2 + 64));
  }
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::begin(&this->affix_id_to_cd_map_);
  while ( 1 )
  {
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(&this->affix_id_to_cd_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
      break;
    equip_affix_info = proto::AvatarInfo::add_equip_affix_list(avatar_info);
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = v8->first;
    if ( std::unordered_map<unsigned int,unsigned int>::count(
           &this->affix_id_to_pass_cd_map_,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48)) )
    {
      v10 = std::unordered_map<unsigned int,unsigned int>::at(
              &this->affix_id_to_cd_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v11 = *v10;
      v12 = std::unordered_map<unsigned int,unsigned int>::at(
              &this->affix_id_to_pass_cd_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      left_cd_time = v11 - *v12;
      proto::AvatarEquipAffixInfo::set_equip_affix_id(equip_affix_info, *(_DWORD *)(v2 + 48));
      proto::AvatarEquipAffixInfo::set_left_cd_time(equip_affix_info, left_cd_time);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/item/equip_comp.cpp",
        "toClient",
        227);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v21,
             (const char (*)[34])"EquipAffixID not exist, affix_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(
      (std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64),
      0);
  }
  result = 0;
  if ( v22 == (char *)v2 )
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

// Line 238: range 00000000165EBCB2-00000000165EBE5B
int32_t __cdecl EquipComp::toShowAvatarInfo(const EquipComp *const this, proto::ShowAvatarInfo *show_avatar_info)
{
  common::milog::MiLogStream *v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v9; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+40h] [rbp-40h]
  proto::ShowEquip *show_equip; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &this->equip_map_;
  __for_begin._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(&this->equip_map_)._M_node;
  __for_end._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::end(&this->equip_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*(&__for_begin);
    equip_type = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(v9);
    equip_ptr = (std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *)std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(v9);
    if ( std::operator==<Equip>(equip_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "toShowAvatarInfo",
        243);
      v2 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v13,
             (const char (*)[59])"toShowAvatarInfo failed, equip_ptr is nullptr, equip_type:");
      common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(v2, equip_type);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      show_equip = proto::ShowAvatarInfo::add_equip_list(show_avatar_info);
      v3 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8();
      v4 = *(_QWORD *)v3 + 104LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, proto::ShowEquip *))v4)(v3, show_equip);
    }
    std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 253: range 00000000165EBE5C-00000000165EC9C0
int32_t __cdecl EquipComp::init(EquipComp *const this, std::vector<std::shared_ptr<Equip>> *p_equip_ptr_vec)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  Player *v10; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r14d
  const std::shared_ptr<Equip> *v14; // rax
  int v15; // r14d
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rsi
  std::shared_ptr<Equip> *M_current; // r14
  const std::shared_ptr<Equip> *v20; // rax
  int v21; // r14d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  std::shared_ptr<Equip> *v24; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >,bool> v25; // rax
  common::milog::MiLogStream *v26; // rax
  Equip *v27; // r14
  Equip *v28; // rdx
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  int32_t result; // eax
  unsigned int (__fastcall *__last)(std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // [rsp+8h] [rbp-178h]
  std::shared_ptr<Equip> *__lasta; // [rsp+8h] [rbp-178h]
  std::vector<std::shared_ptr<Equip>>::iterator __for_end_0; // [rsp+28h] [rbp-158h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+38h] [rbp-148h]
  std::vector<std::shared_ptr<Equip>> *__for_range_0; // [rsp+40h] [rbp-140h]
  std::vector<std::shared_ptr<Equip>> *__for_range_1; // [rsp+48h] [rbp-138h]
  std::vector<std::shared_ptr<Equip>> v41; // [rsp+50h] [rbp-130h] BYREF
  common::milog::MiLogStream v42; // [rsp+70h] [rbp-110h] BYREF
  char v43[240]; // [rsp+90h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 14 equip_type:296 64 8 14 equip_guid:261 96 16 14 player_ptr:254 128 16 13 equip_ptr:289 "
                        "160 16 13 equip_ptr:263";
  *(_QWORD *)(v3 + 16) = EquipComp::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v8 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v8)(v3 + 96, avatar);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/equip_comp.cpp",
      "init",
      257);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v42, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v42);
    v2 = -1;
  }
  else
  {
    __for_range = &this->equip_guid_vec_;
    __for_end_0._M_current = (std::shared_ptr<Equip> *)std::vector<unsigned long>::begin(&this->equip_guid_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned long>::end(&this->equip_guid_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
              (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)&__for_end_0,
              &__for_end) )
    {
      v9 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&__for_end_0);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      *(_QWORD *)(v3 + 64) = *(_QWORD *)v9;
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      ItemComp = Player::getItemComp(v10);
      PlayerItemComp::findItemInPack<Equip>((PlayerItemComp *const)(v3 + 160), (uint64_t)ItemComp);
      if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(v3 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/item/equip_comp.cpp",
          "init",
          266);
        v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v42, (const char (*)[24])off_25D2DAA0);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v12,
          (const unsigned __int64 *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v42);
        v2 = -1;
        v13 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<Equip>>::push_back(
          p_equip_ptr_vec,
          (const std::vector<std::shared_ptr<Equip>>::value_type *)(v3 + 160));
        v13 = 1;
      }
      std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 160));
      if ( v13 != 1 )
        goto LABEL_56;
      __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&__for_end_0);
    }
    __for_range_0 = &this->temp_equip_vec_;
    __for_end_0._M_current = std::vector<std::shared_ptr<Equip>>::begin(&this->temp_equip_vec_)._M_current;
    __for_end._M_current = (unsigned __int64 *)std::vector<std::shared_ptr<Equip>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Equip> *,std::vector<std::shared_ptr<Equip>>>(
              &__for_end_0,
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<Equip>*,std::vector<std::shared_ptr<Equip>> > *)&__for_end) )
    {
      v14 = __gnu_cxx::__normal_iterator<std::shared_ptr<Equip> *,std::vector<std::shared_ptr<Equip>>>::operator*(&__for_end_0);
      std::shared_ptr<Equip>::shared_ptr((std::shared_ptr<Equip> *const)(v3 + 160), v14);
      if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(v3 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/item/equip_comp.cpp",
          "init",
          276);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v42, (const char (*)[14])"equip is null");
        common::milog::MiLogStream::~MiLogStream(&v42);
        v2 = -1;
        v15 = 0;
      }
      else
      {
        v16 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v17 = (unsigned __int64)(v16->_vptr_Item + 6);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8();
        __last = *(unsigned int (__fastcall **)(std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v17;
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( __last(v16, v18, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/item/equip_comp.cpp",
            "init",
            281);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v42, (const char (*)[16])"equip init fail");
          common::milog::MiLogStream::~MiLogStream(&v42);
          v2 = -1;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 160));
      if ( v15 != 1 )
        goto LABEL_56;
      __gnu_cxx::__normal_iterator<std::shared_ptr<Equip> *,std::vector<std::shared_ptr<Equip>>>::operator++(&__for_end_0);
    }
    __lasta = std::vector<std::shared_ptr<Equip>>::end(&this->temp_equip_vec_)._M_current;
    M_current = std::vector<std::shared_ptr<Equip>>::begin(&this->temp_equip_vec_)._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<Equip>>::end(p_equip_ptr_vec)._M_current;
    __gnu_cxx::__normal_iterator<std::shared_ptr<Equip> const*,std::vector<std::shared_ptr<Equip>>>::__normal_iterator<std::shared_ptr<Equip>*>(
      (__gnu_cxx::__normal_iterator<const std::shared_ptr<Equip>*,std::vector<std::shared_ptr<Equip>> > *const)&__for_end,
      &__for_end_0);
    std::vector<std::shared_ptr<Equip>>::insert<__gnu_cxx::__normal_iterator<std::shared_ptr<Equip>*,std::vector<std::shared_ptr<Equip>>>,void>(
      p_equip_ptr_vec,
      (std::vector<std::shared_ptr<Equip>>::const_iterator)__for_end._M_current,
      (__gnu_cxx::__normal_iterator<std::shared_ptr<Equip>*,std::vector<std::shared_ptr<Equip>> >)M_current,
      (__gnu_cxx::__normal_iterator<std::shared_ptr<Equip>*,std::vector<std::shared_ptr<Equip>> >)__lasta);
    memset(&v41, 0, sizeof(v41));
    std::vector<std::shared_ptr<Equip>>::vector(&v41);
    std::vector<std::shared_ptr<Equip>>::swap(&v41, &this->temp_equip_vec_);
    std::vector<std::shared_ptr<Equip>>::~vector(&v41);
    __for_range_1 = p_equip_ptr_vec;
    *(std::vector<std::shared_ptr<Equip>>::iterator *)(v3 + 64) = std::vector<std::shared_ptr<Equip>>::begin(p_equip_ptr_vec);
    __for_end_0._M_current = std::vector<std::shared_ptr<Equip>>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Equip> *,std::vector<std::shared_ptr<Equip>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<Equip>*,std::vector<std::shared_ptr<Equip>> > *)(v3 + 64),
              &__for_end_0) )
    {
      v20 = __gnu_cxx::__normal_iterator<std::shared_ptr<Equip> *,std::vector<std::shared_ptr<Equip>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Equip>*,std::vector<std::shared_ptr<Equip>> > *const)(v3 + 64));
      std::shared_ptr<Equip>::shared_ptr((std::shared_ptr<Equip> *const)(v3 + 128), v20);
      if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(v3 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/item/equip_comp.cpp",
          "init",
          293);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v42, (const char (*)[14])"equip is null");
        common::milog::MiLogStream::~MiLogStream(&v42);
        v2 = -1;
        v21 = 0;
      }
      else
      {
        v22 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8();
        v23 = *(_QWORD *)v22 + 96LL;
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8();
        *(_DWORD *)(v3 + 48) = (*(__int64 (__fastcall **)(unsigned __int64))v23)(v22);
        v25 = std::map<data::EquipType,std::shared_ptr<Equip>>::emplace<data::EquipType&,std::shared_ptr<Equip>&>(
                &this->equip_map_,
                (data::EquipType *)(v3 + 48),
                (std::shared_ptr<Equip> *)(v3 + 128),
                (data::EquipType *)&this->equip_map_,
                v24);
        if ( !v25.second )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/item/equip_comp.cpp",
            "init",
            299);
          v26 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v42,
                  (const char (*)[22])"duplicate equip_type:");
          common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(
            v26,
            (const data::EquipType *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v42);
          v2 = -1;
          v21 = 0;
        }
        else
        {
          v27 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          toThisPtr<Avatar>((Avatar *)(v3 + 160));
          Equip::setOwner(v27, (AvatarPtr *)(v3 + 160));
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
          if ( *(_DWORD *)(v3 + 48) == 6
            && (v28 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128)),
                EquipComp::createAndSetWeaponGadget(this, v28)) )
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/item/equip_comp.cpp",
              "init",
              306);
            v30 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v42,
                    (const char (*)[38])"createAndSetWeaponGadget fails, guid:");
            v31 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            __for_end._M_current = (unsigned __int64 *)Item::getGuid(v31);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v30,
              (const unsigned __int64 *)&__for_end);
            common::milog::MiLogStream::~MiLogStream(&v42);
            v2 = -1;
            v21 = 0;
          }
          else
          {
            v21 = 1;
          }
        }
      }
      std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 128));
      if ( v21 != 1 )
        goto LABEL_56;
      __gnu_cxx::__normal_iterator<std::shared_ptr<Equip> *,std::vector<std::shared_ptr<Equip>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Equip>*,std::vector<std::shared_ptr<Equip>> > *const)(v3 + 64));
    }
    EquipComp::initReliquarySetEquipAffix(this);
    EquipComp::initWeaponEquipAffix(this);
    v2 = 0;
  }
LABEL_56:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  result = v2;
  if ( v43 == (char *)v3 )
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

// Line 320: range 00000000165EC9C2-00000000165ECA19
int32_t __cdecl EquipComp::onLogin(EquipComp *const this)
{
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  AbilityComp *AbilityComp; // rax

  if ( std::operator!=<AvatarWeaponGadget>(&this->weapon_gadget_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_gadget_ptr_);
    AbilityComp = Creature::getAbilityComp(v1);
    AbilityComp::onLogin(AbilityComp);
  }
  EquipComp::refreshWeaponAffixByLogin(this);
  return 0;
};

// Line 332: range 00000000165ECA1A-00000000165ECA71
int32_t __cdecl EquipComp::onDisconnect(EquipComp *const this)
{
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  AbilityComp *AbilityComp; // rax

  if ( std::operator!=<AvatarWeaponGadget>(&this->weapon_gadget_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_gadget_ptr_);
    AbilityComp = Creature::getAbilityComp(v1);
    AbilityComp::onDisconnect(AbilityComp);
  }
  EquipComp::updateAffixCdTime(this);
  return 0;
};

// Line 343: range 00000000165ECA72-00000000165ECF13
void __cdecl EquipComp::refreshWeaponAffixByLogin(EquipComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t PlatformType; // ecx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t v11; // esi
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-130h] BYREF
  char v13[272]; // [rsp+30h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 14 player_ptr:344 64 48 20 fight_prop_guard:352 144 48 25 refresh_ability_guard:353";
  *(_QWORD *)(v1 + 16) = EquipComp::refreshWeaponAffixByLogin;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v6 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v6)(v1 + 32, avatar);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/equip_comp.cpp",
      "refreshWeaponAffixByLogin",
      347);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v12, (const char (*)[19])"player_ptr is null");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    PlatformType = Player::getPlatformType(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_login_platform_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_login_platform_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( PlatformType != this->last_login_platform_type_ )
    {
      FightPropGuard::FightPropGuard((FightPropGuard *const)(v1 + 64));
      RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v1 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      FightPropGuard::addCreature((FightPropGuard *const)(v1 + 64), this->avatar_, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      RefreshAbilityGuard::addCreature((RefreshAbilityGuard *const)(v1 + 144), this->avatar_);
      EquipComp::refreshWeaponEquipAffix(this);
      RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v1 + 144));
      FightPropGuard::~FightPropGuard((FightPropGuard *const)(v1 + 64));
    }
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v11 = Player::getPlatformType(v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_login_platform_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_login_platform_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_login_platform_type_);
    }
    this->last_login_platform_type_ = v11;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 364: range 00000000165ECF14-00000000165ED085
__int64 __fastcall EquipComp::setInitWeapon(EquipComp *const this, uint64_t weapon_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 8 15 weapon_guid:363";
  *(_QWORD *)(v2 + 16) = EquipComp::setInitWeapon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = weapon_guid;
  if ( !std::vector<unsigned long>::empty(&this->equip_guid_vec_) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/equip_comp.cpp",
      "setInitWeapon",
      367);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v6,
      (const char (*)[28])"weapon has been initialzied");
    common::milog::MiLogStream::~MiLogStream(&v6);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    std::vector<unsigned long>::push_back(
      &this->equip_guid_vec_,
      (const std::vector<long unsigned int>::value_type *)(v2 + 32));
    result = 0LL;
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
  return result;
};

// Line 377: range 00000000165ED086-00000000165ED9CF
int32_t __cdecl EquipComp::createAndSetWeaponGadget(EquipComp *const this, Equip *equip)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Entity *v7; // r14
  AvatarWeaponGadget *v8; // r14
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Entity *v14; // r14
  Scene *v15; // rax
  uint32_t v16; // eax
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  unsigned __int64 v18; // rax
  unsigned int (__fastcall *v19)(std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  unsigned __int64 v25; // rax
  void (__fastcall *v26)(std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  common::milog::MiLogStream *v27; // rax
  int32_t result; // eax
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+28h] [rbp-118h]
  VisionContext v30; // [rsp+34h] [rbp-10Ch] BYREF
  std::shared_ptr<Avatar> __r; // [rsp+40h] [rbp-100h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 weapon_ptr:378 64 16 25 tmp_weapon_gadget_ptr:391 96 16 13 scene_ptr:410";
  *(_QWORD *)(v2 + 16) = EquipComp::createAndSetWeaponGadget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  toPtr<Weapon,Equip>((Equip *)(v2 + 32));
  if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/equip_comp.cpp",
      "createAndSetWeaponGadget",
      381);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v33, (const char (*)[19])"weapon_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v33);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    weapon_config_ptr = Weapon::getWeaponExcelConfig(v6);
    if ( weapon_config_ptr )
    {
      common::tools::perf::make_shared<AvatarWeaponGadget,unsigned int const&>(
        (const unsigned int *)(v2 + 64),
        &weapon_config_ptr->gadget_id);
      if ( std::operator==<AvatarWeaponGadget>((const std::shared_ptr<AvatarWeaponGadget> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/item/equip_comp.cpp",
          "createAndSetWeaponGadget",
          394);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v33,
          (const char (*)[30])"tmp_weapon_gadget_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v33);
        v5 = -1;
      }
      else
      {
        v7 = (Entity *)std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->gadget_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        std::to_string(&__rhs, weapon_config_ptr->gadget_id);
        std::operator+<char>((std::string *)&v33, "AvatarWeaponGadget_", &__rhs);
        Entity::setName(v7, (const std::string *)&v33);
        std::string::~string(&v33);
        std::string::~string(&__rhs);
        v8 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        std::shared_ptr<Weapon>::shared_ptr(
          (std::shared_ptr<Weapon> *const)(v2 + 96),
          (const std::shared_ptr<Weapon> *)(v2 + 32));
        AvatarWeaponGadget::setWeaponItem(v8, (WeaponPtr *)(v2 + 96));
        std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v2 + 96));
        v9 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        toThisPtr<Avatar>((Avatar *)&__r);
        std::shared_ptr<Creature>::shared_ptr<Avatar,void>((std::shared_ptr<Creature> *const)(v2 + 96), &__r);
        Creature::setOwner(v9, (CreaturePtr *)(v2 + 96));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 96));
        std::shared_ptr<Avatar>::~shared_ptr(&__r);
        v10 = (unsigned __int64)std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v11 = *(_QWORD *)v10 + 400LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/item/equip_comp.cpp",
            "createAndSetWeaponGadget",
            406);
          v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v33,
                  (const char (*)[21])"weapon init failed. ");
          v13 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          common::milog::MiLogStream::operator<<<AvatarWeaponGadget,(AvatarWeaponGadget*)0>(v12, v13);
          common::milog::MiLogStream::~MiLogStream(&v33);
          v5 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Entity::getScene((const Entity *const)(v2 + 96));
          if ( !std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
            goto LABEL_45;
          v14 = (Entity *)std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          v16 = Scene::genNewEntityId(v15, PROT_ENTITY_WEAPON);
          Entity::setEntityId(v14, v16);
          v17 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v18 = *(_QWORD *)v17->baseclass_0 + 56LL;
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            v18 = __asan_report_load8();
          v19 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v18;
          v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( v19(v17, v20, &VisionContext::meet_context) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/item/equip_comp.cpp",
              "createAndSetWeaponGadget",
              416);
            v21 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v33,
                    (const char (*)[28])"weapon enter scene failed. ");
            v22 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            common::milog::MiLogStream::operator<<<AvatarWeaponGadget,(AvatarWeaponGadget*)0>(v21, v22);
            common::milog::MiLogStream::~MiLogStream(&v33);
            v5 = -1;
          }
          else
          {
LABEL_45:
            if ( std::operator!=<AvatarWeaponGadget>(&this->weapon_gadget_ptr_, 0LL) )
            {
              v23 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_gadget_ptr_);
              Creature::changeLifeState(v23, LIFE_DEAD, 0LL, 1);
              v24 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_gadget_ptr_);
              if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v25 = *(_QWORD *)v24->baseclass_0 + 128LL;
              if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
                v25 = __asan_report_load8();
              v26 = *(void (__fastcall **)(std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v25;
              VisionContext::VisionContext(&v30, VISION_DIE);
              v26(v24, &v30);
            }
            std::shared_ptr<AvatarWeaponGadget>::operator=(
              &this->weapon_gadget_ptr_,
              (const std::shared_ptr<AvatarWeaponGadget> *)(v2 + 64));
            if ( std::operator==<AvatarWeaponGadget>(&this->weapon_gadget_ptr_, 0LL) )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/item/equip_comp.cpp",
                "createAndSetWeaponGadget",
                430);
              v27 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v33,
                      (const char (*)[37])"createWeaponGadget fails, gadget_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &weapon_config_ptr->gadget_id);
              common::milog::MiLogStream::~MiLogStream(&v33);
              v5 = -1;
            }
            else
            {
              v5 = 0;
            }
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
        }
      }
      std::shared_ptr<AvatarWeaponGadget>::~shared_ptr((std::shared_ptr<AvatarWeaponGadget> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "createAndSetWeaponGadget",
        387);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v33,
        (const char (*)[26])"weapon_config_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v33);
      v5 = -1;
    }
  }
  std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v2 + 32));
  result = v5;
  if ( v34 == (char *)v2 )
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

// Line 438: range 00000000165ED9D0-00000000165EDB58
const EquipComp *__fastcall EquipComp::findEquip(const EquipComp *const this, __int64 equip_type, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 equip_type:437 64 8 6 it:439";
  *(_QWORD *)(v3 + 16) = EquipComp::findEquip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator *)(v3 + 64) = std::map<data::EquipType,std::shared_ptr<Equip>>::find(
                                                                                     (const std::map<data::EquipType,std::shared_ptr<Equip>> *const)(equip_type + 32),
                                                                                     (const std::map<data::EquipType,std::shared_ptr<Equip>>::key_type *)(v3 + 48));
  __y._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::end((const std::map<data::EquipType,std::shared_ptr<Equip>> *const)(equip_type + 32))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<Equip>::shared_ptr((std::shared_ptr<Equip> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)(v3 + 64));
    std::shared_ptr<Equip>::shared_ptr((std::shared_ptr<Equip> *const)this, &v6->second);
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

// Line 452: range 00000000165EDB5A-00000000165EEB23
int32_t __cdecl EquipComp::wearEquip(EquipComp *const this, Equip *equip, bool is_notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r14d
  Player *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  unsigned __int64 v19; // rax
  bool isEquipSwitchClosed; // r14
  common::milog::MiLogStream *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  common::milog::MiLogStream *v24; // r14
  Avatar *v25; // rax
  WeaponExcelConfigMgr *p_weapon_config_mgr; // r14
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v28; // r14
  data::WeaponType weapon_type; // ecx
  Player *v30; // rax
  PlayerBasicComp *v31; // rax
  common::milog::MiLogStream *v33; // r14
  Equip *v34; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  EquipComp *EquipComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  EquipComp *v39; // r14
  Equip *v40; // rdx
  common::milog::MiLogStream *v41; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  EquipComp *v43; // r14
  Equip *v44; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  EquipComp *v49; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  EquipComp *v51; // rax
  Player *v52; // rsi
  int32_t result; // eax
  std::string v54; // [rsp+0h] [rbp-170h]
  bool is_notifya; // [rsp+Ch] [rbp-164h]
  Equip *equipa; // [rsp+10h] [rbp-160h]
  EquipComp *thisa; // [rsp+18h] [rbp-158h]
  unsigned int val; // [rsp+2Ch] [rbp-144h] BYREF
  proto_log::PlayerActionType player_action_type; // [rsp+30h] [rbp-140h]
  proto_log::PlayerWearEquipOpType wear_equip_op; // [rsp+34h] [rbp-13Ch]
  const data::ItemConfig *item_config_ptr; // [rsp+38h] [rbp-138h]
  const data::AvatarExcelConfig *avatar_excel_config_ptr; // [rsp+40h] [rbp-130h]
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Equip> p_equip_ptr; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v65; // [rsp+60h] [rbp-110h] BYREF
  char v66[240]; // [rsp+80h] [rbp-F0h] BYREF

  *(&v54._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v54._anon_0._M_allocated_capacity = (std::string::size_type)equip;
  BYTE4(v54._M_string_length) = is_notify;
  v3 = (unsigned __int64)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 1 10 holder:516 48 4 14 equip_type:467 64 16 14 player_ptr:453 96 16 17 old_equip_ptr:468 1"
                        "28 16 13 equip_ptr:469 160 16 19 equip_owner_ptr:470";
  *(_QWORD *)(v3 + 16) = EquipComp::wearEquip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v8 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v8)(v3 + 64, avatar);
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    item_config_ptr = Item::getItemConfig(equip);
    if ( !item_config_ptr )
      goto LABEL_19;
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BasicComp = Player::getBasicComp(v11);
    Level = PlayerBasicComp::getLevel(BasicComp);
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->use_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&item_config_ptr->use_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( Level < item_config_ptr->use_level )
      v14 = 1;
    else
LABEL_19:
      v14 = 0;
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v65,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "wearEquip",
        463);
      v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v65,
              (const char (*)[30])"player_level not enough, uid:");
      v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      *(_DWORD *)(v3 + 48) = Player::getUid(v16);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" item_id:");
      val = Item::getItemId(equip);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      common::milog::MiLogStream::~MiLogStream(&v65);
      v10 = 619;
      goto LABEL_91;
    }
    if ( *(_BYTE *)(((unsigned __int64)equip >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = (unsigned __int64)(equip->_vptr_Item + 12);
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v19 = __asan_report_load8();
    *(_DWORD *)(v3 + 48) = (*(__int64 (__fastcall **)(Equip *))v19)(equip);
    EquipComp::findEquip((const EquipComp *const)(v3 + 96), (__int64)this, *(_DWORD *)(v3 + 48));
    toThisPtr<Equip>((Equip *)(v3 + 128));
    Equip::getOwner((const Equip *const)(v3 + 160));
    player_action_type = PLAYER_ACTION_NONE;
    wear_equip_op = PLAYER_WEAR_EQUIP_OP_WEAR;
    std::shared_ptr<Equip>::shared_ptr(&p_equip_ptr, (const std::shared_ptr<Equip> *)(v3 + 96));
    isEquipSwitchClosed = EquipComp::isEquipSwitchClosed(this, &p_equip_ptr);
    std::shared_ptr<Equip>::~shared_ptr(&p_equip_ptr);
    if ( isEquipSwitchClosed )
    {
      v10 = 142;
LABEL_90:
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
      std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 128));
      std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 96));
      goto LABEL_91;
    }
    if ( std::operator==<Equip,Equip>(
           (const std::shared_ptr<Equip> *)(v3 + 96),
           (const std::shared_ptr<Equip> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v65,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/item/equip_comp.cpp",
        "wearEquip",
        483);
      v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v65, (const char (*)[14])"equip is same");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v21, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v65);
      v10 = -1;
      goto LABEL_90;
    }
    if ( *(_DWORD *)(v3 + 48) == 6 )
    {
      v22 = (unsigned __int64)AvatarCompBase::getAvatar(this);
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        v22 = __asan_report_load8();
      v23 = *(_QWORD *)v22 + 312LL;
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        v22 = __asan_report_load8();
      avatar_excel_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(unsigned __int64))v23)(v22);
      if ( !avatar_excel_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/item/equip_comp.cpp",
          "wearEquip",
          493);
        v24 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v65,
                (const char (*)[38])"avatar config not found, avatar_id = ");
        v25 = AvatarCompBase::getAvatar(this);
        val = Avatar::getAvatarId(v25);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
        common::milog::MiLogStream::~MiLogStream(&v65);
        v10 = -1;
        goto LABEL_90;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&p_equip_ptr);
      p_weapon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_equip_ptr)->design_config.txt_config_mgr.weapon_config_mgr;
      ItemId = Item::getItemId(equip);
      weapon_config_ptr = data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(p_weapon_config_mgr, ItemId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_equip_ptr);
      if ( !weapon_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/item/equip_comp.cpp",
          "wearEquip",
          500);
        v28 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v65,
                (const char (*)[36])"weapon config not found, item_id = ");
        val = Item::getItemId(equip);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
        common::milog::MiLogStream::~MiLogStream(&v65);
        v10 = -1;
        goto LABEL_90;
      }
      if ( *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->weapon_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)weapon_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->weapon_type >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      weapon_type = weapon_config_ptr->weapon_type;
      if ( *(_BYTE *)(((unsigned __int64)&avatar_excel_config_ptr->weapon_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&avatar_excel_config_ptr->weapon_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( weapon_type != avatar_excel_config_ptr->weapon_type )
      {
        v10 = -1;
        goto LABEL_90;
      }
      player_action_type = PLAYER_ACTION_WEAR_WEAPON;
    }
    else
    {
      player_action_type = PLAYER_ACTION_WEAR_RELIC;
    }
    v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v31 = Player::getBasicComp(v30);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v65, v31);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), player_action_type, v54);
    std::string::~string(&v65);
    if ( *(_DWORD *)(v3 + 48) == 6
      && std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 160), 0LL)
      && std::operator==<Equip>((const std::shared_ptr<Equip> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v65,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/item/equip_comp.cpp",
        "wearEquip",
        521);
      v33 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v65,
              (const char (*)[55])"weapon has owner, but avatar has no weapon, avatar_id:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Avatar::getAvatarId(thisa->avatar_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
      common::milog::MiLogStream::~MiLogStream(&v65);
      v10 = -1;
    }
    else
    {
      if ( std::operator!=<Equip>((const std::shared_ptr<Equip> *)(v3 + 96), 0LL) )
      {
        v34 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Equip::resetOwner(v34);
        wear_equip_op = PLAYER_WEAR_EQUIP_OP_CHANGE;
      }
      if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 160), 0LL) )
      {
        v35 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        EquipComp = Avatar::getEquipComp(v35);
        EquipComp::internalTakeOffEquip(EquipComp, *(data::EquipType *)(v3 + 48));
      }
      if ( common::tools::MiscUtils::isContains<std::map<data::EquipType,std::shared_ptr<Equip>>,data::EquipType>(
             &thisa->equip_map_,
             (const data::EquipType *)(v3 + 48)) )
      {
        EquipComp::internalTakeOffEquip(thisa, *(data::EquipType *)(v3 + 48));
      }
      std::shared_ptr<Equip>::shared_ptr(&p_equip_ptr, (const std::shared_ptr<Equip> *)(v3 + 128));
      EquipComp::internalWearEquip(thisa, *(data::EquipType *)(v3 + 48), &p_equip_ptr);
      std::shared_ptr<Equip>::~shared_ptr(&p_equip_ptr);
      if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 160), 0LL)
        && std::operator!=<Equip>((const std::shared_ptr<Equip> *)(v3 + 96), 0LL) )
      {
        v38 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v39 = Avatar::getEquipComp(v38);
        std::shared_ptr<Equip>::shared_ptr(&p_equip_ptr, (const std::shared_ptr<Equip> *)(v3 + 96));
        EquipComp::internalWearEquip(v39, *(data::EquipType *)(v3 + 48), &p_equip_ptr);
        std::shared_ptr<Equip>::~shared_ptr(&p_equip_ptr);
      }
      if ( *(_DWORD *)(v3 + 48) == 6 )
      {
        v40 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( EquipComp::createAndSetWeaponGadget(thisa, v40) )
        {
          common::milog::MiLogStream::create(
            &v65,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/item/equip_comp.cpp",
            "wearEquip",
            555);
          v41 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v65,
                  (const char (*)[31])"createAndSetWeaponGadget fails");
          if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v41, thisa->avatar_);
          common::milog::MiLogStream::~MiLogStream(&v65);
        }
        if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 160), 0LL) )
        {
          v42 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          v43 = Avatar::getEquipComp(v42);
          v44 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( EquipComp::createAndSetWeaponGadget(v43, v44) )
          {
            common::milog::MiLogStream::create(
              &v65,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/item/equip_comp.cpp",
              "wearEquip",
              559);
            v46 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v65,
                    (const char (*)[31])"createAndSetWeaponGadget fails");
            v47 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v46, v47);
            common::milog::MiLogStream::~MiLogStream(&v65);
          }
        }
      }
      if ( is_notifya )
      {
        EquipComp::equipChangeNotify(thisa, *(data::EquipType *)(v3 + 48));
        if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 160), 0LL) )
        {
          v48 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          v49 = Avatar::getEquipComp(v48);
          EquipComp::equipChangeNotify(v49, *(data::EquipType *)(v3 + 48));
        }
      }
      EquipComp::refreshAffix(thisa, *(data::EquipType *)(v3 + 48));
      if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 160), 0LL) )
      {
        v50 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v51 = Avatar::getEquipComp(v50);
        EquipComp::refreshAffix(v51, *(data::EquipType *)(v3 + 48));
      }
      if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Avatar::onAvatarEquipChange(thisa->avatar_);
      v52 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      EquipComp::logWearEquip(thisa, v52, wear_equip_op, equipa);
      v10 = 0;
    }
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    goto LABEL_90;
  }
  common::milog::MiLogStream::create(
    &v65,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/item/equip_comp.cpp",
    "wearEquip",
    456);
  v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v65, (const char (*)[19])"player_ptr is null");
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, this->avatar_);
  common::milog::MiLogStream::~MiLogStream(&v65);
  v10 = 1;
LABEL_91:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  result = v10;
  if ( v66 == (char *)v3 )
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

// Line 585: range 00000000165EEB24-00000000165EEC9E
int32_t __cdecl EquipComp::wearEquipKeepHpRate(EquipComp *const this, Equip *equip, bool is_notify)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  float prev_max_hp; // [rsp+20h] [rbp-10h]
  int32_t ret; // [rsp+24h] [rbp-Ch]
  float max_hp; // [rsp+28h] [rbp-8h]
  float cur_hp; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(float *)v3.m128i_i32 = Creature::getProp(this->avatar_, FIGHT_PROP_MAX_HP);
  prev_max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  ret = EquipComp::wearEquip(this, equip, is_notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(float *)v3.m128i_i32 = Creature::getProp(this->avatar_, FIGHT_PROP_MAX_HP);
  max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( prev_max_hp != max_hp )
  {
    v4 = (__m128i)LODWORD(prev_max_hp);
    if ( prev_max_hp > 0.00000011920929 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(float *)v4.m128i_i32 = Creature::getProp(this->avatar_, FIGHT_PROP_CUR_HP);
      cur_hp = (float)(COERCE_FLOAT(_mm_cvtsi128_si32(v4)) * max_hp) / prev_max_hp;
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Creature::setCurHp(this->avatar_, cur_hp, 1);
    }
  }
  return ret;
};

// Line 601: range 00000000165EECA0-00000000165EF462
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall EquipComp::takeOffEquip(EquipComp *const this, data::EquipType equip_type, bool is_notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rcx
  Player *v13; // rax
  PlayerBasicComp *BasicComp; // rax
  std::_Rb_tree_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::pointer v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  proto_log::RelicLog *v21; // rax
  Player *v22; // r14
  __int64 result; // rax
  std::string is_notifya; // [rsp+0h] [rbp-170h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-130h] BYREF
  char v28[272]; // [rsp+60h] [rbp-110h] BYREF

  is_notifya._M_string_length = (std::string::size_type)this;
  HIDWORD(is_notifya._M_dataplus._M_p) = equip_type;
  LOBYTE(is_notifya._M_dataplus._M_p) = is_notify;
  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 1 10 holder:620 48 4 14 equip_type:600 64 8 6 it:607 96 16 14 player_ptr:613 128 16 13 equi"
                        "p_ptr:621 160 16 17 reliquary_ptr:630 192 16 22 wear_relic_log_ptr:633";
  *(_QWORD *)(v3 + 16) = EquipComp::takeOffEquip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 48) = HIDWORD(is_notifya._M_dataplus._M_p);
  if ( *(_DWORD *)(v3 + 48) == 6 )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/item/equip_comp.cpp",
      "takeOffEquip",
      604);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v27, (const char (*)[16])"equip is weapon");
    if ( *(_BYTE *)(((is_notifya._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, *(const Avatar **)(is_notifya._M_string_length + 8));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v7 = 651;
  }
  else
  {
    *(std::map<data::EquipType,std::shared_ptr<Equip>>::iterator *)(v3 + 64) = std::map<data::EquipType,std::shared_ptr<Equip>>::find(
                                                                                 (std::map<data::EquipType,std::shared_ptr<Equip>> *const)(is_notifya._M_string_length + 32),
                                                                                 (const std::map<data::EquipType,std::shared_ptr<Equip>>::key_type *)(v3 + 48));
    *((std::map<data::EquipType,std::shared_ptr<Equip>>::iterator *)&is_notifya._anon_0._M_allocated_capacity + 1) = std::map<data::EquipType,std::shared_ptr<Equip>>::end((std::map<data::EquipType,std::shared_ptr<Equip>> *const)(is_notifya._M_string_length + 32));
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)(v3 + 64),
           (const std::_Rb_tree_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)&is_notifya._anon_0._M_allocated_capacity
         + 1) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/item/equip_comp.cpp",
        "takeOffEquip",
        610);
      v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v27, (const char (*)[23])off_25D2E3E0);
      common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(
        v8,
        (const data::EquipType *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v27);
      v7 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((is_notifya._M_string_length + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = *(_QWORD *)(is_notifya._M_string_length + 8);
      v10 = (_QWORD *)v9;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v10 = (_QWORD *)__asan_report_load8();
      v11 = *v10 + 152LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v11)(v3 + 96, v9);
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/item/equip_comp.cpp",
          "takeOffEquip",
          616);
        v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v27,
                (const char (*)[19])"player_ptr is null");
        if ( *(_BYTE *)(((is_notifya._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(
          v12,
          *(const Avatar **)(is_notifya._M_string_length + 8));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v7 = 1;
      }
      else
      {
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        BasicComp = Player::getBasicComp(v13);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v27, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x6B2u, is_notifya);
        std::string::~string(&v27);
        v15 = std::_Rb_tree_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)(v3 + 64));
        std::shared_ptr<Equip>::shared_ptr((std::shared_ptr<Equip> *const)(v3 + 128), &v15->second);
        EquipComp::internalTakeOffEquip((EquipComp *const)is_notifya._M_string_length, *(data::EquipType *)(v3 + 48));
        EquipComp::refreshAffix((EquipComp *const)is_notifya._M_string_length, *(data::EquipType *)(v3 + 48));
        if ( LOBYTE(is_notifya._M_dataplus._M_p) )
          EquipComp::equipChangeNotify((EquipComp *const)is_notifya._M_string_length, *(data::EquipType *)(v3 + 48));
        if ( *(_BYTE *)(((is_notifya._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Avatar::onAvatarEquipChange(*(Avatar *const *)(is_notifya._M_string_length + 8));
        std::dynamic_pointer_cast<Reliquary,Equip>((const std::shared_ptr<Equip> *)(v3 + 160));
        if ( std::operator!=<Reliquary>((const std::shared_ptr<Reliquary> *)(v3 + 160), 0LL) )
        {
          common::tools::perf::make_shared<proto_log::PlayerLogBodyWearRelic>();
          v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          proto_log::PlayerLogBodyWearRelic::set_op(v16, 2u);
          v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          if ( *(_BYTE *)(((is_notifya._M_string_length + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          AvatarId = Avatar::getAvatarId(*(const Avatar *const *)(is_notifya._M_string_length + 8));
          proto_log::PlayerLogBodyWearRelic::set_avatar_id(v17, AvatarId);
          v19 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          v21 = proto_log::PlayerLogBodyWearRelic::mutable_relic_log(v20);
          Reliquary::getRelicLog(v19, v21);
          v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWearRelic,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyWearRelic> *)(v3 + 192));
          Player::printStatLog(v22, &p_body_ptr, &p_body_ext_ptr, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
          std::shared_ptr<proto_log::PlayerLogBodyWearRelic>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWearRelic> *const)(v3 + 192));
        }
        v7 = 0;
        std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(v3 + 160));
        std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 128));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
    }
  }
  result = v7;
  if ( v28 == (char *)v3 )
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
  return result;
};

// Line 645: range 00000000165EF464-00000000165EF5DB
int32_t __cdecl EquipComp::takeOffEquipKeepHpRate(EquipComp *const this, data::EquipType equip_type, bool is_notify)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  float prev_max_hp; // [rsp+10h] [rbp-10h]
  int32_t ret; // [rsp+14h] [rbp-Ch]
  float max_hp; // [rsp+18h] [rbp-8h]
  float cur_hp; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(float *)v3.m128i_i32 = Creature::getProp(this->avatar_, FIGHT_PROP_MAX_HP);
  prev_max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  ret = EquipComp::takeOffEquip(this, equip_type, is_notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(float *)v3.m128i_i32 = Creature::getProp(this->avatar_, FIGHT_PROP_MAX_HP);
  max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( prev_max_hp != max_hp )
  {
    v4 = (__m128i)LODWORD(prev_max_hp);
    if ( prev_max_hp > 0.00000011920929 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(float *)v4.m128i_i32 = Creature::getProp(this->avatar_, FIGHT_PROP_CUR_HP);
      cur_hp = (float)(COERCE_FLOAT(_mm_cvtsi128_si32(v4)) * max_hp) / prev_max_hp;
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Creature::setCurHp(this->avatar_, cur_hp, 1);
    }
  }
  return ret;
};

// Line 661: range 00000000165EF5DC-00000000165EFA5B
int32_t __cdecl EquipComp::equipChangeNotify(EquipComp *const this, data::EquipType equip_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint64_t Guid; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t ItemId; // eax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint64_t v9; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t v11; // r14d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  int32_t result; // eax
  proto::SceneReliquaryInfo *reliquary_info; // [rsp+20h] [rbp-120h]
  proto::SceneWeaponInfo *weapon_info; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-110h] BYREF
  char v19[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 13 equip_ptr:666 64 16 17 reliquary_ptr:691 96 64 10 notify:663";
  *(_QWORD *)(v2 + 16) = EquipComp::equipChangeNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862725] = -202116109;
  proto::AvatarEquipChangeNotify::AvatarEquipChangeNotify((proto::AvatarEquipChangeNotify *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Guid = Avatar::getGuid(this->avatar_);
  proto::AvatarEquipChangeNotify::set_avatar_guid((proto::AvatarEquipChangeNotify *const)(v2 + 96), Guid);
  proto::AvatarEquipChangeNotify::set_equip_type((proto::AvatarEquipChangeNotify *const)(v2 + 96), equip_type);
  EquipComp::findEquip((const EquipComp *const)(v2 + 32), (__int64)this, equip_type);
  if ( std::operator!=<Equip>((const std::shared_ptr<Equip> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ItemId = Item::getItemId(v6);
    proto::AvatarEquipChangeNotify::set_item_id((proto::AvatarEquipChangeNotify *const)(v2 + 96), ItemId);
    v8 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v9 = Item::getGuid(v8);
    proto::AvatarEquipChangeNotify::set_equip_guid((proto::AvatarEquipChangeNotify *const)(v2 + 96), v9);
    v10 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( !Item::getItemConfig(v10) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "equipChangeNotify",
        676);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v18,
        (const char (*)[24])"item_config_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v18);
      v11 = -1;
      goto LABEL_22;
    }
    if ( equip_type == EQUIP_WEAPON )
    {
      weapon_info = proto::AvatarEquipChangeNotify::mutable_weapon((proto::AvatarEquipChangeNotify *const)(v2 + 96));
      if ( std::operator!=<AvatarWeaponGadget>(&this->weapon_gadget_ptr_, 0LL) )
      {
        v12 = (unsigned __int64)std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->weapon_gadget_ptr_);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        v13 = *(_QWORD *)v12 + 416LL;
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, proto::SceneWeaponInfo *))v13)(v12, weapon_info);
      }
    }
    else
    {
      std::dynamic_pointer_cast<Reliquary,Equip>((const std::shared_ptr<Equip> *)(v2 + 64));
      if ( std::operator!=<Reliquary>((const std::shared_ptr<Reliquary> *)(v2 + 64), 0LL) )
      {
        reliquary_info = proto::AvatarEquipChangeNotify::mutable_reliquary((proto::AvatarEquipChangeNotify *const)(v2 + 96));
        v14 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Reliquary::toClient(v14, reliquary_info);
      }
      std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(v2 + 64));
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v11 = Avatar::notifySceneTeam(this->avatar_, (const google::protobuf::Message *)(v2 + 96));
LABEL_22:
  std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v2 + 32));
  proto::AvatarEquipChangeNotify::~AvatarEquipChangeNotify((proto::AvatarEquipChangeNotify *const)(v2 + 96));
  result = v11;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 706: range 00000000165EFA5C-00000000165EFED1
std::map<data::FightPropType,float> *__cdecl EquipComp::getEquipCompProp(
        std::map<data::FightPropType,float> *retstr,
        EquipComp *const this)
{
  common::milog::MiLogStream *v2; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::map<data::FightPropType,float>::mapped_type *v4; // rax
  float v5; // xmm1_4
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  std::map<data::EquipType,std::shared_ptr<Equip>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::map<data::EquipType,std::shared_ptr<Equip>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::map<data::FightPropType,float>::const_iterator __for_begin_0; // [rsp+28h] [rbp-C8h] BYREF
  std::map<data::FightPropType,float>::const_iterator __for_end_0; // [rsp+30h] [rbp-C0h] BYREF
  std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range; // [rsp+38h] [rbp-B8h]
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__for_range_1; // [rsp+40h] [rbp-B0h]
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__for_range_2; // [rsp+48h] [rbp-A8h]
  const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > *v16; // [rsp+50h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *__0; // [rsp+58h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *affix_ptr_0; // [rsp+60h] [rbp-90h]
  const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > *v19; // [rsp+68h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *_; // [rsp+70h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *affix_ptr; // [rsp+78h] [rbp-78h]
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v22; // [rsp+80h] [rbp-70h]
  std::tuple_element<0,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type; // [rsp+88h] [rbp-68h]
  std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+90h] [rbp-60h]
  const std::map<data::FightPropType,float> *prop_map; // [rsp+98h] [rbp-58h]
  const std::map<data::FightPropType,float> *__for_range_0; // [rsp+A0h] [rbp-50h]
  const std::pair<const data::FightPropType,float> *v27; // [rsp+A8h] [rbp-48h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *prop_type; // [rsp+B0h] [rbp-40h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *prop; // [rsp+B8h] [rbp-38h]
  common::milog::MiLogStream v30; // [rsp+C0h] [rbp-30h] BYREF

  std::map<data::FightPropType,float>::map(retstr);
  __for_range = &this->equip_map_;
  __for_begin._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(&this->equip_map_)._M_node;
  __for_end._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::end(&this->equip_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v22 = std::_Rb_tree_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*(&__for_begin);
    equip_type = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(v22);
    equip_ptr = (std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *)std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(v22);
    if ( std::operator==<Equip>(equip_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/item/equip_comp.cpp",
        "getEquipCompProp",
        713);
      v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v30,
             (const char (*)[34])"equip_ptr is nullptr, equip_type:");
      common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(v2, equip_type);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      v3 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr);
      prop_map = Equip::getProp(v3);
      __for_range_0 = prop_map;
      __for_begin_0._M_node = std::map<data::FightPropType,float>::begin(prop_map)._M_node;
      __for_end_0._M_node = std::map<data::FightPropType,float>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v27 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin_0);
        prop_type = std::get<0ul,data::FightPropType const,float>(v27);
        prop = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>(v27);
        v4 = std::map<data::FightPropType,float>::operator[](retstr, prop_type);
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v5 = *v4;
        if ( *(_BYTE *)(((unsigned __int64)prop >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)prop & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v4 = *prop + v5;
        std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++(&__for_begin);
  }
  __for_range_1 = &this->weapon_affix_map_;
  __for_begin_0._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::begin(&this->weapon_affix_map_)._M_node;
  __for_end_0._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::_Self *)&__for_end_0) )
  {
    v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > > *const)&__for_begin_0);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<EquipAffix>>(v19);
    affix_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<EquipAffix>>(v19);
    v6 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)affix_ptr);
    BaseTalent::getProp(v6, retstr);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > > *const)&__for_begin_0);
  }
  __for_range_2 = &this->reliquary_set_affix_map_;
  __for_begin_0._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::begin(&this->reliquary_set_affix_map_)._M_node;
  __for_end_0._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::_Self *)&__for_end_0) )
  {
    v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > > *const)&__for_begin_0);
    __0 = std::get<0ul,unsigned int const,std::shared_ptr<EquipAffix>>(v16);
    affix_ptr_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<EquipAffix>>(v16);
    v7 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)affix_ptr_0);
    BaseTalent::getProp(v7, retstr);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > > *const)&__for_begin_0);
  }
  return retstr;
};

// Line 738: range 00000000165EFED2-00000000165EFF03
void __cdecl EquipComp::refreshAffix(EquipComp *const this, data::EquipType equip_type)
{
  if ( equip_type == EQUIP_WEAPON )
    EquipComp::refreshWeaponEquipAffix(this);
  else
    EquipComp::refreshReliquarySetEquipAffix(this);
};

// Line 751: range 00000000165EFF04-00000000165F0991
std::multimap<unsigned int,unsigned int> *__cdecl EquipComp::calcReliquarySetEquipAffix(
        std::multimap<unsigned int,unsigned int> *retstr,
        EquipComp *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<data::EquipType>::reference v5; // rdx
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v14; // rdx
  unsigned int *v15; // r8
  ReliquaryExcelConfigMgr *v16; // rcx
  const unsigned int *v17; // r8
  common::milog::MiLogStream *v18; // rax
  uint32_t current_equip_num; // [rsp+1Ch] [rbp-1E4h]
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-1D8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-1D0h] BYREF
  std::set<data::EquipType>::iterator __for_begin; // [rsp+38h] [rbp-1C8h] BYREF
  std::set<data::EquipType>::iterator __for_end; // [rsp+40h] [rbp-1C0h] BYREF
  const std::set<data::EquipType> *__for_range; // [rsp+48h] [rbp-1B8h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-1B0h]
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range_2; // [rsp+58h] [rbp-1A8h]
  const std::pair<unsigned int,unsigned int> *v28; // [rsp+60h] [rbp-1A0h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *set_id_0; // [rsp+68h] [rbp-198h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *affix_level; // [rsp+70h] [rbp-190h]
  const data::ReliquarySetExcelConfig *reliquary_set_config_ptr_0; // [rsp+78h] [rbp-188h]
  const std::pair<unsigned int const,unsigned int> *v32; // [rsp+80h] [rbp-180h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *set_id; // [rsp+88h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *equip_num; // [rsp+90h] [rbp-170h]
  const data::ReliquarySetExcelConfig *reliquary_set_config_ptr; // [rsp+98h] [rbp-168h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+A0h] [rbp-160h]
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+A8h] [rbp-158h]
  common::milog::MiLogStream v38; // [rsp+B0h] [rbp-150h] BYREF
  common::milog::MiLogStream v39; // [rsp+D0h] [rbp-130h] BYREF
  char v40[272]; // [rsp+F0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 15 affix_level:789 48 16 17 reliquary_ptr:757 80 24 21 reliquary_set_vec:753 144 48 25 re"
                        "liquary_set_num_map:752";
  *(_QWORD *)(v2 + 16) = EquipComp::calcReliquarySetEquipAffix;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 144));
  std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 80));
  __for_range = &ReliquaryExcelConfigMgr::reliquary_equip_type_set;
  __for_begin._M_node = std::set<data::EquipType>::begin(&ReliquaryExcelConfigMgr::reliquary_equip_type_set)._M_node;
  __for_end._M_node = std::set<data::EquipType>::end(&ReliquaryExcelConfigMgr::reliquary_equip_type_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<data::EquipType>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    EquipComp::findEquip<Reliquary>((EquipComp *const)(v2 + 48), (data::EquipType)this);
    if ( !std::operator==<Reliquary>((const std::shared_ptr<Reliquary> *)(v2 + 48), 0LL) )
    {
      v6 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      reliquary_config_ptr = Reliquary::getReliquaryConfig(v6);
      if ( reliquary_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->set_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->set_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( reliquary_config_ptr->set_id )
        {
          v9 = std::map<unsigned int,unsigned int>::operator[](
                 (std::map<unsigned int,unsigned int> *const)(v2 + 144),
                 &reliquary_config_ptr->set_id);
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ++*v9;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/item/equip_comp.cpp",
          "calcReliquarySetEquipAffix",
          765);
        v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
               &v39,
               (const char (*)[36])"getReliquaryConfig failed, item_id:");
        v8 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        *(_DWORD *)(v2 + 32) = Item::getItemId(v8);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
    }
    std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(v2 + 48));
    std::_Rb_tree_const_iterator<data::EquipType>::operator++(&__for_begin);
  }
  __for_range_0 = (std::map<unsigned int,unsigned int> *)(v2 + 144);
  __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v2 + 144))._M_node;
  __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v32 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
    set_id = std::get<0ul,unsigned int const,unsigned int>(v32);
    equip_num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v32);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 48));
    p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48))->design_config.txt_config_mgr.reliquary_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)set_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)set_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)set_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    reliquary_set_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquarySetExcelConfig(
                                 p_reliquary_config_mgr,
                                 *set_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 48));
    if ( reliquary_set_config_ptr )
    {
      if ( std::vector<unsigned int>::empty(&reliquary_set_config_ptr->set_need_num) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/item/equip_comp.cpp",
          "calcReliquarySetEquipAffix",
          784);
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v39, (const char (*)[9])"set_id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, set_id);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v13,
          (const char (*)[27])" set_need_num is empty !!!");
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)equip_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)equip_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)equip_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        current_equip_num = *equip_num;
        *(_DWORD *)(v2 + 32) = 0;
        __for_range_1 = &reliquary_set_config_ptr->set_need_num;
        __for_begin._M_node = (std::_Rb_tree_const_iterator<data::EquipType>::_Base_ptr)std::vector<unsigned int>::begin(&reliquary_set_config_ptr->set_need_num)._M_current;
        __for_end._M_node = (std::_Rb_tree_const_iterator<data::EquipType>::_Base_ptr)std::vector<unsigned int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
        {
          v14 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( current_equip_num < *v14 )
            break;
          std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int const&,unsigned int &>(
            (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 80),
            set_id,
            (unsigned int *)(v2 + 32),
            set_id,
            v15);
          ++*(_DWORD *)(v2 + 32);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "calcReliquarySetEquipAffix",
        779);
      v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v38,
              (const char (*)[44])"findReliquarySetExcelConfig failed, set_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, set_id);
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
  }
  std::multimap<unsigned int,unsigned int>::multimap(retstr);
  __for_range_2 = (std::vector<std::pair<unsigned int,unsigned int>> *)(v2 + 80);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<data::EquipType>::_Base_ptr)std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 80))._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<data::EquipType>::_Base_ptr)std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_2)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
            (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_end) )
  {
    v28 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
    set_id_0 = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v28);
    affix_level = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v28);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 48));
    v16 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48))->design_config.txt_config_mgr.reliquary_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)set_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)set_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)set_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    reliquary_set_config_ptr_0 = data::ReliquaryExcelConfigMgrBase::findReliquarySetExcelConfig(v16, *set_id_0);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 48));
    if ( reliquary_set_config_ptr_0 )
    {
      std::multimap<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
        retstr,
        &reliquary_set_config_ptr_0->equip_affix_id,
        affix_level,
        &reliquary_set_config_ptr_0->equip_affix_id,
        v17);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "calcReliquarySetEquipAffix",
        808);
      v18 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v39,
              (const char (*)[44])"findReliquarySetExcelConfig failed, set_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, set_id_0);
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
  }
  std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 80));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 144));
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return retstr;
};

// Line 819: range 00000000165F0AD0-00000000165F1005
std::multimap<unsigned int,unsigned int> *__cdecl EquipComp::calcWeaponEquipAffix(
        std::multimap<unsigned int,unsigned int> *retstr,
        EquipComp *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t PlatformType; // eax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t object_id; // [rsp+14h] [rbp-ECh]
  const ExclusiveRuleExcelConfigMgr *p_exclusive_rule_config_mgr; // [rsp+18h] [rbp-E8h]
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // [rsp+18h] [rbp-E8h]
  EquipComp::calcWeaponEquipAffix::<lambda(uint32_t, uint32_t)> thisa; // [rsp+20h] [rbp-E0h]
  unsigned int val; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int ItemId; // [rsp+3Ch] [rbp-C4h] BYREF
  std::shared_ptr<Config> v23; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+70h] [rbp-90h] BYREF

  thisa.__affix_id_map = retstr;
  thisa.__this = this;
  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 player_ptr:821 64 16 14 weapon_ptr:827";
  *(_QWORD *)(v2 + 16) = EquipComp::calcWeaponEquipAffix;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::multimap<unsigned int,unsigned int>::multimap(retstr);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v7 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v7)(v2 + 32, avatar);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/equip_comp.cpp",
      "calcWeaponEquipAffix",
      824);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v24, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    EquipComp::findEquip<Weapon>((EquipComp *const)(v2 + 64), (data::EquipType)this);
    if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "calcWeaponEquipAffix",
        830);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v24,
        (const char (*)[31])"findEquip(EQUIP_WEAPON) failed");
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v23);
      p_exclusive_rule_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.exclusive_rule_config_mgr;
      v8 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      object_id = Item::getItemId(v8);
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      PlatformType = Player::getPlatformType(v9);
      LOBYTE(p_exclusive_rule_config_mgr) = !ExclusiveRuleExcelConfigMgr::isExclusiveObjectCanUse(
                                               p_exclusive_rule_config_mgr,
                                               PlatformType,
                                               EXCLUSIVE_RULE_WEAPON_AFFIX,
                                               object_id);
      std::shared_ptr<Config>::~shared_ptr(&v23);
      if ( (_BYTE)p_exclusive_rule_config_mgr )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/item/equip_comp.cpp",
          "calcWeaponEquipAffix",
          837);
        v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v24,
                (const char (*)[49])"weapon is exclusive affix disable platform_type:");
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        val = Player::getPlatformType(v12);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" item_id:");
        v15 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        ItemId = Item::getItemId(v15);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &ItemId);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        v19 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        std::function<ForeachPolicy ()(unsigned int,unsigned int)>::function<EquipComp::calcWeaponEquipAffix(void)::{lambda(unsigned int,unsigned int)#1},void,void>(
          (std::function<ForeachPolicy(unsigned int,unsigned int)> *const)&v24,
          thisa);
        Weapon::foreachSkillAffix(v19, (std::function<ForeachPolicy(unsigned int,unsigned int)> *)&v24);
        std::function<ForeachPolicy ()(unsigned int,unsigned int)>::~function((std::function<ForeachPolicy(unsigned int,unsigned int)> *const)&v24);
      }
    }
    std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v2 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v25 == (char *)v2 )
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
  return retstr;
};

// Line 841: range 00000000165F0992-00000000165F0ACE
__int64 __fastcall EquipComp::calcWeaponEquipAffix(void)::{lambda(unsigned int,unsigned int)#1}::operator()(
        const EquipComp::calcWeaponEquipAffix::<lambda(uint32_t, uint32_t)> *const __closure,
        uint32_t affix_id,
        uint32_t affix_level,
        __int64 a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // r12
  __int64 result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = v5 + 96;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 12 affix_id:841 64 4 15 affix_level:841";
  *(_QWORD *)(v5 + 16) = EquipComp::calcWeaponEquipAffix(void)::{lambda(unsigned int,unsigned int)#1}::operator();
  v8 = (_DWORD *)(v5 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = affix_id;
  *(_DWORD *)(v5 + 64) = affix_level;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__affix_id_map >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  std::multimap<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
    __closure->__affix_id_map,
    (unsigned int *)(v7 - 48),
    (unsigned int *)(v7 - 32),
    (unsigned int *)__closure->__affix_id_map,
    a5);
  result = 0LL;
  if ( v11 == (char *)v5 )
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

// Line 851: range 00000000165F1006-00000000165F1428
void __cdecl EquipComp::initReliquarySetEquipAffix(EquipComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v4; // rax
  std::pair<unsigned int const,unsigned int> *v5; // rdx
  const EquipAffixExcelConfigMgr *p_equip_affix_config_mgr; // rdi
  uint32_t v7; // ecx
  std::shared_ptr<EquipAffix> *v8; // r8
  std::multimap<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::multimap<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::multimap<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *affix_id; // [rsp+28h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *affix_level; // [rsp+30h] [rbp-C0h]
  std::pair<unsigned int const,unsigned int> v15; // [rsp+38h] [rbp-B8h] BYREF
  std::multimap<unsigned int,unsigned int> v16; // [rsp+40h] [rbp-B0h] BYREF
  char v17[128]; // [rsp+70h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 18 affix_ident_id:854 64 16 13 affix_ptr:855";
  *(_QWORD *)(v1 + 16) = EquipComp::initReliquarySetEquipAffix;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  EquipComp::calcReliquarySetEquipAffix(&v16, this);
  __for_range = &v16;
  __for_begin._M_node = std::multimap<unsigned int,unsigned int>::begin(&v16)._M_node;
  __for_end._M_node = std::multimap<unsigned int,unsigned int>::end(&v16)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v5 = v4;
    if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v4, 8LL);
    }
    v15 = *v5;
    affix_id = std::get<0ul,unsigned int const,unsigned int>(&v15);
    affix_level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v15);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 64));
    p_equip_affix_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->design_config.txt_config_mgr.equip_affix_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) )
    {
      p_equip_affix_config_mgr = (const EquipAffixExcelConfigMgr *)affix_level;
      __asan_report_load4();
    }
    v7 = *affix_level;
    if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
    {
      p_equip_affix_config_mgr = (const EquipAffixExcelConfigMgr *)affix_id;
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = EquipAffixExcelConfigMgr::findEquipAffixIdentId(p_equip_affix_config_mgr, *affix_id, v7);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    EquipComp::createEquipAffixPtr((EquipComp *const)(v1 + 64), (uint32_t)this, *affix_id);
    if ( std::operator!=<EquipAffix>((const std::shared_ptr<EquipAffix> *)(v1 + 64), 0LL) )
      std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::emplace<unsigned int &,std::shared_ptr<EquipAffix>&>(
        &this->reliquary_set_affix_map_,
        (unsigned int *)(v1 + 48),
        (std::shared_ptr<EquipAffix> *)(v1 + 64),
        (unsigned int *)&this->reliquary_set_affix_map_,
        v8);
    std::shared_ptr<EquipAffix>::~shared_ptr((std::shared_ptr<EquipAffix> *const)(v1 + 64));
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  std::multimap<unsigned int,unsigned int>::~multimap(&v16);
  if ( v17 == (char *)v1 )
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
};

// Line 865: range 00000000165F142A-00000000165F1931
void __cdecl EquipComp::initWeaponEquipAffix(EquipComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v4; // rax
  std::pair<unsigned int const,unsigned int> *v5; // rdx
  const EquipAffixExcelConfigMgr *p_equip_affix_config_mgr; // rdi
  uint32_t v7; // ecx
  std::shared_ptr<EquipAffix> *v8; // r8
  std::multimap<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-130h] BYREF
  std::multimap<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-128h] BYREF
  std::multimap<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *affix_id; // [rsp+28h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *affix_level; // [rsp+30h] [rbp-110h]
  std::pair<unsigned int const,unsigned int> v15; // [rsp+38h] [rbp-108h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-100h] BYREF
  std::multimap<unsigned int,unsigned int> v17; // [rsp+60h] [rbp-E0h] BYREF
  char v18[176]; // [rsp+90h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 18 affix_ident_id:875 64 16 14 weapon_ptr:866 96 16 13 affix_ptr:876";
  *(_QWORD *)(v1 + 16) = EquipComp::initWeaponEquipAffix;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  EquipComp::findEquip<Weapon>((EquipComp *const)(v1 + 64), (data::EquipType)this);
  if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/equip_comp.cpp",
      "initWeaponEquipAffix",
      869);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v16,
      (const char (*)[39])"findEquip<Weapon>(EQUIP_WEAPON) failed");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    EquipComp::calcWeaponEquipAffix(&v17, this);
    __for_range = &v17;
    __for_begin._M_node = std::multimap<unsigned int,unsigned int>::begin(&v17)._M_node;
    __for_end._M_node = std::multimap<unsigned int,unsigned int>::end(&v17)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v4 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v5 = v4;
      if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v4, 8LL);
      }
      v15 = *v5;
      affix_id = std::get<0ul,unsigned int const,unsigned int>(&v15);
      affix_level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v15);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v1 + 96));
      p_equip_affix_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.txt_config_mgr.equip_affix_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)affix_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) )
      {
        p_equip_affix_config_mgr = (const EquipAffixExcelConfigMgr *)affix_level;
        __asan_report_load4();
      }
      v7 = *affix_level;
      if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
      {
        p_equip_affix_config_mgr = (const EquipAffixExcelConfigMgr *)affix_id;
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = EquipAffixExcelConfigMgr::findEquipAffixIdentId(p_equip_affix_config_mgr, *affix_id, v7);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)affix_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      EquipComp::createEquipAffixPtr((EquipComp *const)(v1 + 96), (uint32_t)this, *affix_id);
      if ( std::operator!=<EquipAffix>((const std::shared_ptr<EquipAffix> *)(v1 + 96), 0LL) )
        std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::emplace<unsigned int &,std::shared_ptr<EquipAffix>&>(
          &this->weapon_affix_map_,
          (unsigned int *)(v1 + 48),
          (std::shared_ptr<EquipAffix> *)(v1 + 96),
          (unsigned int *)&this->weapon_affix_map_,
          v8);
      std::shared_ptr<EquipAffix>::~shared_ptr((std::shared_ptr<EquipAffix> *const)(v1 + 96));
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    std::multimap<unsigned int,unsigned int>::~multimap(&v17);
  }
  std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v1 + 64));
  if ( v18 == (char *)v1 )
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

// Line 886: range 00000000165F1932-00000000165F2289
void __cdecl EquipComp::refreshReliquarySetEquipAffix(EquipComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v10; // rax
  std::pair<unsigned int const,unsigned int> *v11; // rdx
  const EquipAffixExcelConfigMgr *p_equip_affix_config_mgr; // rdi
  uint32_t v13; // ecx
  std::shared_ptr<EquipAffix> *v14; // r8
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::multimap<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+10h] [rbp-130h] BYREF
  std::multimap<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+18h] [rbp-128h] BYREF
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__for_range; // [rsp+20h] [rbp-120h]
  std::multimap<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *affix_id; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *affix_level; // [rsp+38h] [rbp-108h]
  const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > *v36; // [rsp+40h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *affix_ident_id; // [rsp+48h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *affix_ptr; // [rsp+50h] [rbp-F0h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+58h] [rbp-E8h] BYREF
  common::milog::MiLogStream v40; // [rsp+60h] [rbp-E0h] BYREF
  std::multimap<unsigned int,unsigned int> v41; // [rsp+80h] [rbp-C0h] BYREF
  char v42[144]; // [rsp+B0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 18 affix_ident_id:904 64 16 13 affix_ptr:905";
  *(_QWORD *)(v1 + 16) = EquipComp::refreshReliquarySetEquipAffix;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  __for_range = &this->reliquary_set_affix_map_;
  __for_end_0._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::begin(&this->reliquary_set_affix_map_)._M_node;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::end(&this->reliquary_set_affix_map_)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::_Self *)&__for_end_0,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::_Self *)&__for_end) )
  {
    v36 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > > *const)&__for_end_0);
    affix_ident_id = std::get<0ul,unsigned int const,std::shared_ptr<EquipAffix>>(v36);
    affix_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<EquipAffix>>(v36);
    if ( std::operator==<EquipAffix>(0LL, affix_ptr) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/item/equip_comp.cpp",
        "refreshReliquarySetEquipAffix",
        892);
      v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v40,
             (const char (*)[31])"affix is null, affix_ident_id:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, affix_ident_id);
      v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_9:
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v40);
      goto LABEL_37;
    }
    v7 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)affix_ptr);
    if ( BaseTalent::disable(v7) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "refreshReliquarySetEquipAffix",
        897);
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v40,
             (const char (*)[35])"affix diable fail, affix_ident_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, affix_ident_id);
      v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_9;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > > *const)&__for_end_0);
  }
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::clear(&this->reliquary_set_affix_map_);
  EquipComp::calcReliquarySetEquipAffix(&v41, this);
  __for_range_0 = &v41;
  __for_begin_0._M_node = std::multimap<unsigned int,unsigned int>::begin(&v41)._M_node;
  __for_end_0._M_node = std::multimap<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
    v11 = v10;
    if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v10, 8LL);
    }
    __for_end = *v11;
    affix_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
    affix_level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 64));
    p_equip_affix_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->design_config.txt_config_mgr.equip_affix_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) )
    {
      p_equip_affix_config_mgr = (const EquipAffixExcelConfigMgr *)affix_level;
      __asan_report_load4();
    }
    v13 = *affix_level;
    if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
    {
      p_equip_affix_config_mgr = (const EquipAffixExcelConfigMgr *)affix_id;
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = EquipAffixExcelConfigMgr::findEquipAffixIdentId(p_equip_affix_config_mgr, *affix_id, v13);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    EquipComp::createEquipAffixPtr((EquipComp *const)(v1 + 64), (uint32_t)this, *affix_id);
    if ( std::operator==<EquipAffix>((const std::shared_ptr<EquipAffix> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/item/equip_comp.cpp",
        "refreshReliquarySetEquipAffix",
        908);
      v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v40,
              (const char (*)[25])"affix is null, affix_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, affix_id);
      v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" affix_level:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, affix_level);
      v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v18, (const char (*)[17])" affix_ident_id:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v1 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_30:
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v21, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v40);
      goto LABEL_35;
    }
    std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::emplace<unsigned int &,std::shared_ptr<EquipAffix>&>(
      &this->reliquary_set_affix_map_,
      (unsigned int *)(v1 + 48),
      (std::shared_ptr<EquipAffix> *)(v1 + 64),
      (unsigned int *)&this->reliquary_set_affix_map_,
      v14);
    v22 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( BaseTalent::enable(v22) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "refreshReliquarySetEquipAffix",
        914);
      v23 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v40,
              (const char (*)[29])"affix enable fail, affix_id:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, affix_id);
      v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])" affix_level:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, affix_level);
      v27 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v26, (const char (*)[17])" affix_ident_id:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v1 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_30;
    }
LABEL_35:
    std::shared_ptr<EquipAffix>::~shared_ptr((std::shared_ptr<EquipAffix> *const)(v1 + 64));
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
  }
  std::multimap<unsigned int,unsigned int>::~multimap(&v41);
LABEL_37:
  if ( v42 == (char *)v1 )
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
};

// Line 922: range 00000000165F228A-00000000165F2CB8
void __cdecl EquipComp::refreshWeaponEquipAffix(EquipComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v10; // rax
  std::pair<unsigned int const,unsigned int> *v11; // rdx
  const EquipAffixExcelConfigMgr *p_equip_affix_config_mgr; // rdi
  uint32_t v13; // ecx
  std::shared_ptr<EquipAffix> *v14; // r8
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::multimap<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+10h] [rbp-150h] BYREF
  std::multimap<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+18h] [rbp-148h] BYREF
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__for_range; // [rsp+20h] [rbp-140h]
  std::multimap<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-138h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *affix_id; // [rsp+30h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *affix_level; // [rsp+38h] [rbp-128h]
  const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > *v36; // [rsp+40h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *affix_ident_id; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *affix_ptr; // [rsp+50h] [rbp-110h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+58h] [rbp-108h] BYREF
  common::milog::MiLogStream v40; // [rsp+60h] [rbp-100h] BYREF
  std::multimap<unsigned int,unsigned int> v41; // [rsp+80h] [rbp-E0h] BYREF
  char v42[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 18 affix_ident_id:947 64 16 14 weapon_ptr:938 96 16 13 affix_ptr:948";
  *(_QWORD *)(v1 + 16) = EquipComp::refreshWeaponEquipAffix;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  __for_range = &this->weapon_affix_map_;
  __for_end_0._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::begin(&this->weapon_affix_map_)._M_node;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::end(&this->weapon_affix_map_)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::_Self *)&__for_end_0,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::_Self *)&__for_end) )
  {
    v36 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > > *const)&__for_end_0);
    affix_ident_id = std::get<0ul,unsigned int const,std::shared_ptr<EquipAffix>>(v36);
    affix_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<EquipAffix>>(v36);
    if ( std::operator==<EquipAffix>(0LL, affix_ptr) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/item/equip_comp.cpp",
        "refreshWeaponEquipAffix",
        928);
      v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v40,
             (const char (*)[31])"affix is null, affix_ident_id:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, affix_ident_id);
      v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_9:
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v40);
      goto LABEL_40;
    }
    v7 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)affix_ptr);
    if ( BaseTalent::disable(v7) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "refreshWeaponEquipAffix",
        933);
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v40,
             (const char (*)[35])"affix diable fail, affix_ident_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, affix_ident_id);
      v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_9;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > > *const)&__for_end_0);
  }
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::clear(&this->weapon_affix_map_);
  EquipComp::findEquip<Weapon>((EquipComp *const)(v1 + 64), (data::EquipType)this);
  if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/equip_comp.cpp",
      "refreshWeaponEquipAffix",
      941);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v40,
      (const char (*)[39])"findEquip<Weapon>(EQUIP_WEAPON) failed");
    common::milog::MiLogStream::~MiLogStream(&v40);
    goto LABEL_39;
  }
  EquipComp::calcWeaponEquipAffix(&v41, this);
  __for_range_0 = &v41;
  __for_begin_0._M_node = std::multimap<unsigned int,unsigned int>::begin(&v41)._M_node;
  __for_end_0._M_node = std::multimap<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
    v11 = v10;
    if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v10, 8LL);
    }
    __for_end = *v11;
    affix_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
    affix_level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 96));
    p_equip_affix_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.txt_config_mgr.equip_affix_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) )
    {
      p_equip_affix_config_mgr = (const EquipAffixExcelConfigMgr *)affix_level;
      __asan_report_load4();
    }
    v13 = *affix_level;
    if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
    {
      p_equip_affix_config_mgr = (const EquipAffixExcelConfigMgr *)affix_id;
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = EquipAffixExcelConfigMgr::findEquipAffixIdentId(p_equip_affix_config_mgr, *affix_id, v13);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    EquipComp::createEquipAffixPtr((EquipComp *const)(v1 + 96), (uint32_t)this, *affix_id);
    if ( std::operator==<EquipAffix>((const std::shared_ptr<EquipAffix> *)(v1 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/item/equip_comp.cpp",
        "refreshWeaponEquipAffix",
        951);
      v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v40,
              (const char (*)[25])"affix is null, affix_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, affix_id);
      v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" affix_level:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, affix_level);
      v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v18, (const char (*)[17])" affix_ident_id:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v1 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_32:
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v21, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v40);
      goto LABEL_37;
    }
    std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::emplace<unsigned int &,std::shared_ptr<EquipAffix>&>(
      &this->weapon_affix_map_,
      (unsigned int *)(v1 + 48),
      (std::shared_ptr<EquipAffix> *)(v1 + 96),
      (unsigned int *)&this->weapon_affix_map_,
      v14);
    v22 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( BaseTalent::enable(v22) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "refreshWeaponEquipAffix",
        957);
      v23 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v40,
              (const char (*)[29])"affix enable fail, affix_id:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, affix_id);
      v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])" affix_level:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, affix_level);
      v27 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v26, (const char (*)[17])" affix_ident_id:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v1 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_32;
    }
LABEL_37:
    std::shared_ptr<EquipAffix>::~shared_ptr((std::shared_ptr<EquipAffix> *const)(v1 + 96));
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
  }
  std::multimap<unsigned int,unsigned int>::~multimap(&v41);
LABEL_39:
  std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v1 + 64));
LABEL_40:
  if ( v42 == (char *)v1 )
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

// Line 965: range 00000000165F2CBA-00000000165F2DF8
int32_t __cdecl EquipComp::enableAllEquipTalent(EquipComp *const this)
{
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__for_range; // [rsp+20h] [rbp-40h]
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__for_range_0; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > *v8; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *__0; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *equip_affix_ptr_0; // [rsp+40h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > *v11; // [rsp+48h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *_; // [rsp+50h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *equip_affix_ptr; // [rsp+58h] [rbp-8h]

  __for_range = &this->weapon_affix_map_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::begin(&this->weapon_affix_map_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::end(&this->weapon_affix_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<EquipAffix>>(v11);
    equip_affix_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<EquipAffix>>(v11);
    v1 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_affix_ptr);
    BaseTalent::enable(v1);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->reliquary_set_affix_map_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::begin(&this->reliquary_set_affix_map_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator*(&__for_begin);
    __0 = std::get<0ul,unsigned int const,std::shared_ptr<EquipAffix>>(v8);
    equip_affix_ptr_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<EquipAffix>>(v8);
    v2 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_affix_ptr_0);
    BaseTalent::enable(v2);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 979: range 00000000165F2DFA-00000000165F2F38
int32_t __cdecl EquipComp::disableAllEquipTalent(EquipComp *const this)
{
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__for_range; // [rsp+20h] [rbp-40h]
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__for_range_0; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > *v8; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *__0; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *equip_affix_ptr_0; // [rsp+40h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > *v11; // [rsp+48h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *_; // [rsp+50h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *equip_affix_ptr; // [rsp+58h] [rbp-8h]

  __for_range = &this->weapon_affix_map_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::begin(&this->weapon_affix_map_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::end(&this->weapon_affix_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<EquipAffix>>(v11);
    equip_affix_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<EquipAffix>>(v11);
    v1 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_affix_ptr);
    BaseTalent::disable(v1);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->reliquary_set_affix_map_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::begin(&this->reliquary_set_affix_map_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator*(&__for_begin);
    __0 = std::get<0ul,unsigned int const,std::shared_ptr<EquipAffix>>(v8);
    equip_affix_ptr_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<EquipAffix>>(v8);
    v2 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_affix_ptr_0);
    BaseTalent::disable(v2);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 993: range 00000000165F2F3A-00000000165F33F3
void __fastcall EquipComp::onAffixStart(
        EquipComp *const this,
        uint32_t equip_affix_data_id,
        float affix_cd,
        uint32_t *left_cd_time)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v9; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  google::protobuf::uint32 *v15; // rdx
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v18; // r14
  int cd_time_ms; // [rsp+2Ch] [rbp-104h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  std::string val; // [rsp+60h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+80h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 23 equip_affix_data_id:992 64 16 15 player_ptr:1006 96 16 27 wrong_affix_cd_log_ptr:1009";
  *(_QWORD *)(v4 + 16) = EquipComp::onAffixStart;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = equip_affix_data_id;
  cd_time_ms = (int)(float)(1000.0 * affix_cd);
  if ( EquipComp::isHasEquipAffixCD(this, *(_DWORD *)(v4 + 48)) )
  {
    EquipComp::initEquipAffixCD(this, *(_DWORD *)(v4 + 48), cd_time_ms, left_cd_time);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    avatar = this->avatar_;
    baseclass_0 = avatar->baseclass_0;
    if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
      baseclass_0 = (_QWORD *)__asan_report_load8();
    v9 = *baseclass_0 + 152LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Avatar *))v9)(v4 + 64, avatar);
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
    {
      common::tools::perf::make_shared<proto_log::AntiCheatBodyEquipAffixCdWrong>();
      v10 = std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarId = Avatar::getAvatarId(this->avatar_);
      proto_log::AntiCheatBodyEquipAffixCdWrong::set_avatar_id(v10, AvatarId);
      v12 = std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::AntiCheatBodyEquipAffixCdWrong::set_affix_id(v12, *(_DWORD *)(v4 + 48));
      v13 = std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::AntiCheatBodyEquipAffixCdWrong::set_affix_cd(v13, cd_time_ms);
      v14 = std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v15 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->affix_id_to_pass_cd_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::AntiCheatBodyEquipAffixCdWrong::set_affix_pass_time(v14, *v15);
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/item/equip_comp.cpp",
        "onAffixStart",
        1014);
      v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v22, (const char (*)[13])"[AntiCheat] ");
      v17 = std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEquipAffixCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, v17);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyEquipAffixCdWrong,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::AntiCheatBodyEquipAffixCdWrong> *)(v4 + 96));
      Player::printAntiCheatLog(v18, ANTI_CHEAT_ACTION_EQUIP_AFFIX_CD_WRONG, &p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<proto_log::AntiCheatBodyEquipAffixCdWrong>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyEquipAffixCdWrong> *const)(v4 + 96));
    }
    EquipComp::initEquipAffixCD(this, *(_DWORD *)(v4 + 48), cd_time_ms, left_cd_time);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  }
  if ( v24 == (char *)v4 )
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
};

// Line 1025: range 00000000165F33F4-00000000165F35F8
void __cdecl EquipComp::updateAffixCdTime(EquipComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v4; // rdx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 24 equip_affix_data_id:1028 64 8 9 iter:1026";
  *(_QWORD *)(v1 + 16) = EquipComp::updateAffixCdTime;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,unsigned int>::begin(&this->affix_id_to_cd_map_);
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->affix_id_to_cd_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v1 + 64),
            &__y) )
      break;
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = v4->first;
    EquipComp::updateAffixCdTime(this, *(_DWORD *)(v1 + 48));
    if ( std::unordered_map<unsigned int,unsigned int>::count(
           &this->affix_id_to_pass_cd_map_,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 48)) )
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(
        (std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v1 + 64),
        0);
    }
    else
    {
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,unsigned int>::erase(
                                                                                &this->affix_id_to_cd_map_,
                                                                                *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v1 + 64));
    }
  }
  if ( v6 == (char *)v1 )
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
};

// Line 1044: range 00000000165F35FA-00000000165F39AE
void __fastcall EquipComp::updateAffixCdTime(EquipComp *const this, uint32_t equip_affix_data_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v9; // rdx
  unsigned __int64 v10; // rax
  int v11; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v12; // rax
  _DWORD *v13; // rdx
  uint64_t player_time_ms; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 24 equip_affix_data_id:1043";
  *(_QWORD *)(v2 + 16) = EquipComp::updateAffixCdTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = equip_affix_data_id;
  if ( std::unordered_map<unsigned int,unsigned int>::count(
         &this->affix_id_to_pass_cd_map_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32)) )
  {
    if ( !std::unordered_map<unsigned int,unsigned long>::count(
            &this->affix_id_to_start_time_map_,
            (const std::unordered_map<unsigned int,long unsigned int>::key_type *)(v2 + 32))
      || !std::unordered_map<unsigned int,unsigned int>::count(
            &this->affix_id_to_cd_map_,
            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/item/equip_comp.cpp",
        "updateAffixCdTime",
        1053);
      v6 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v15,
             (const char (*)[60])"EquipAffixStart but dont record start_time or cd, affix_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player_time_ms = Avatar::getPlayerTimeMs(this->avatar_);
      v7 = (unsigned __int64)std::unordered_map<unsigned int,unsigned long>::operator[](
                               &this->affix_id_to_start_time_map_,
                               (const std::unordered_map<unsigned int,long unsigned int>::key_type *)(v2 + 32));
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      v8 = player_time_ms - *(_QWORD *)v7;
      v9 = std::unordered_map<unsigned int,unsigned int>::operator[](
             &this->affix_id_to_cd_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v8 < *v9 )
      {
        v10 = (unsigned __int64)std::unordered_map<unsigned int,unsigned long>::operator[](
                                  &this->affix_id_to_start_time_map_,
                                  (const std::unordered_map<unsigned int,long unsigned int>::key_type *)(v2 + 32));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v11 = player_time_ms - *(_QWORD *)v10;
        v12 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->affix_id_to_pass_cd_map_,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v12);
        }
        *v13 = v11;
      }
      else
      {
        std::unordered_map<unsigned int,unsigned long>::erase(
          &this->affix_id_to_start_time_map_,
          (const std::unordered_map<unsigned int,long unsigned int>::key_type *)(v2 + 32));
        std::unordered_map<unsigned int,unsigned int>::erase(
          &this->affix_id_to_pass_cd_map_,
          (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      }
    }
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1074: range 00000000165F39B0-00000000165F3A9E
bool __fastcall EquipComp::isHasEquipAffixCD(EquipComp *const this, uint32_t equip_affix_data_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 24 equip_affix_data_id:1073";
  *(_QWORD *)(v2 + 16) = EquipComp::isHasEquipAffixCD;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = equip_affix_data_id;
  EquipComp::updateAffixCdTime(this, *(_DWORD *)(v2 + 32));
  result = std::unordered_map<unsigned int,unsigned int>::count(
             &this->affix_id_to_pass_cd_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32)) == 0;
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

// Line 1081: range 00000000165F3AA0-00000000165F3D01
void __fastcall EquipComp::initEquipAffixCD(
        EquipComp *const this,
        uint32_t equip_affix_data_id,
        uint32_t cd_time_ms,
        unsigned __int64 left_cd_time)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  unsigned __int64 v11; // rax
  uint64_t start_time_ms; // [rsp+28h] [rbp-78h]
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 24 equip_affix_data_id:1080";
  *(_QWORD *)(v4 + 16) = EquipComp::initEquipAffixCD;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = equip_affix_data_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  start_time_ms = Avatar::getPlayerTimeMs(this->avatar_);
  v7 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->affix_id_to_cd_map_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 32));
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = cd_time_ms;
  v9 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->affix_id_to_pass_cd_map_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 32));
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = 0;
  v11 = (unsigned __int64)std::unordered_map<unsigned int,unsigned long>::operator[](
                            &this->affix_id_to_start_time_map_,
                            (const std::unordered_map<unsigned int,long unsigned int>::key_type *)(v4 + 32));
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_store8(v11);
  *(_QWORD *)v11 = start_time_ms;
  if ( *(_BYTE *)((left_cd_time >> 3) + 0x7FFF8000) != 0
    && (char)((left_cd_time & 7) + 3) >= *(_BYTE *)((left_cd_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(left_cd_time);
  }
  *(_DWORD *)left_cd_time = cd_time_ms;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1091: range 00000000165F3D02-00000000165F4314
void __fastcall EquipComp::internalWearEquip(EquipComp *const this, data::EquipType equip_type, EquipPtr *p_equip_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::shared_ptr<Equip> *v11; // rax
  Equip *v12; // r14
  FightPropComp *FightPropComp; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::map<data::FightPropType,float> *Prop; // rax
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v18; // rax
  Player *v19; // rax
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<Equip> *v21; // r8
  bool *v22; // r9
  std::shared_ptr<Avatar> __args_0; // [rsp+2Fh] [rbp-E1h] BYREF
  std::shared_ptr<Avatar> v25; // [rsp+40h] [rbp-D0h] BYREF
  AvatarPtr p_avatar_ptr; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 equip_type:1090 64 16 15 player_ptr:1106";
  *(_QWORD *)(v3 + 16) = EquipComp::internalWearEquip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = equip_type;
  if ( common::tools::MiscUtils::isContains<std::map<data::EquipType,std::shared_ptr<Equip>>,data::EquipType>(
         &this->equip_map_,
         (const data::EquipType *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/equip_comp.cpp",
      "internalWearEquip",
      1094);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v27,
           (const char (*)[34])"equip already exists. equip_type:");
    v7 = common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(
           v6,
           (const data::EquipType *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    goto LABEL_27;
  }
  if ( std::operator==<Equip>(0LL, p_equip_ptr) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/equip_comp.cpp",
      "internalWearEquip",
      1099);
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v27,
           (const char (*)[27])"equip is null. equip_type:");
    v10 = common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(
            v9,
            (const data::EquipType *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  v11 = std::map<data::EquipType,std::shared_ptr<Equip>>::operator[](
          &this->equip_map_,
          (const std::map<data::EquipType,std::shared_ptr<Equip>>::key_type *)(v3 + 48));
  std::shared_ptr<Equip>::operator=(v11, p_equip_ptr);
  v12 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_equip_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Avatar>((Avatar *)&p_avatar_ptr);
  Equip::setOwner(v12, &p_avatar_ptr);
  std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  FightPropComp = Creature::getFightPropComp(this->avatar_);
  v14 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_equip_ptr);
  Prop = Equip::getProp(v14);
  FightPropComp::modifyProps(FightPropComp, Prop, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v18 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    v18 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v18)(v3 + 64, avatar);
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
  {
    v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    EventComp = Player::getEventComp(v19);
    LOBYTE(__args_0._M_ptr) = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Avatar>((Avatar *)((char *)&__args_0._M_ptr + 1));
    common::tools::perf::make_shared<WearOrTakeOffEquipEvent,std::shared_ptr<Avatar>,std::shared_ptr&<Equip>,bool>(
      &v25,
      (std::shared_ptr<Equip> *)((char *)&__args_0._M_ptr + 1),
      (bool *)p_equip_ptr,
      &__args_0,
      v21,
      v22);
    std::shared_ptr<BaseEvent>::shared_ptr<WearOrTakeOffEquipEvent,void>(
      (std::shared_ptr<BaseEvent> *const)&p_avatar_ptr,
      (std::shared_ptr<WearOrTakeOffEquipEvent> *)&v25);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_avatar_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_avatar_ptr);
    std::shared_ptr<WearOrTakeOffEquipEvent>::~shared_ptr((std::shared_ptr<WearOrTakeOffEquipEvent> *const)&v25);
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)((char *)&__args_0._M_ptr + 1));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
LABEL_27:
  if ( v28 == (char *)v3 )
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

// Line 1115: range 00000000165F4316-00000000165F492F
void __fastcall EquipComp::internalTakeOffEquip(EquipComp *const this, data::EquipType equip_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::_Rb_tree_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  Equip *v12; // rax
  FightPropComp *FightPropComp; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::map<data::FightPropType,float> *Prop; // rax
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v18; // rax
  Player *v19; // rax
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<Equip> *v21; // r8
  bool *v22; // r9
  std::shared_ptr<Avatar> __args_0; // [rsp+17h] [rbp-129h] BYREF
  std::shared_ptr<Avatar> v24; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 15 equip_type:1114 64 8 9 iter:1116 96 16 14 equip_ptr:1122 128 16 15 player_ptr:1132";
  *(_QWORD *)(v2 + 16) = EquipComp::internalTakeOffEquip;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = equip_type;
  *(std::map<data::EquipType,std::shared_ptr<Equip>>::iterator *)(v2 + 64) = std::map<data::EquipType,std::shared_ptr<Equip>>::find(
                                                                               &this->equip_map_,
                                                                               (const std::map<data::EquipType,std::shared_ptr<Equip>>::key_type *)(v2 + 48));
  *(std::map<data::EquipType,std::shared_ptr<Equip>>::iterator *)((char *)&__args_0._M_ptr + 1) = std::map<data::EquipType,std::shared_ptr<Equip>>::end(&this->equip_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)((char *)&__args_0._M_ptr + 1)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/equip_comp.cpp",
      "internalTakeOffEquip",
      1119);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v26,
           (const char (*)[29])"equip not found. equip_type:");
    v6 = common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(
           v5,
           (const data::EquipType *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)(v2 + 64));
    std::shared_ptr<Equip>::shared_ptr((std::shared_ptr<Equip> *const)(v2 + 96), &v8->second);
    if ( std::operator==<Equip>(0LL, (const std::shared_ptr<Equip> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "internalTakeOffEquip",
        1125);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v26,
             (const char (*)[27])"equip is null. equip_type:");
      v10 = common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(
              v9,
              (const data::EquipType *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      std::map<data::EquipType,std::shared_ptr<Equip>>::erase[abi:cxx11](
        &this->equip_map_,
        *(std::map<data::EquipType,std::shared_ptr<Equip>>::iterator *)(v2 + 64));
      v12 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Equip::resetOwner(v12);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      FightPropComp = Creature::getFightPropComp(this->avatar_);
      v14 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Prop = Equip::getProp(v14);
      FightPropComp::reduceProps(FightPropComp, Prop, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      avatar = this->avatar_;
      baseclass_0 = avatar->baseclass_0;
      if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
        baseclass_0 = (_QWORD *)__asan_report_load8();
      v18 = *baseclass_0 + 152LL;
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Avatar *))v18)(v2 + 128, avatar);
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
      {
        v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        EventComp = Player::getEventComp(v19);
        LOBYTE(__args_0._M_ptr) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        toThisPtr<Avatar>((Avatar *)((char *)&__args_0._M_refcount._M_pi + 1));
        common::tools::perf::make_shared<WearOrTakeOffEquipEvent,std::shared_ptr<Avatar>,std::shared_ptr&<Equip>,bool>(
          &v24,
          (std::shared_ptr<Equip> *)((char *)&__args_0._M_refcount._M_pi + 1),
          (bool *)(v2 + 96),
          &__args_0,
          v21,
          v22);
        std::shared_ptr<BaseEvent>::shared_ptr<WearOrTakeOffEquipEvent,void>(
          &p_event_ptr,
          (std::shared_ptr<WearOrTakeOffEquipEvent> *)&v24);
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        std::shared_ptr<WearOrTakeOffEquipEvent>::~shared_ptr((std::shared_ptr<WearOrTakeOffEquipEvent> *const)&v24);
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)((char *)&__args_0._M_refcount._M_pi + 1));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    }
    std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v2 + 96));
  }
  if ( v27 == (char *)v2 )
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

// Line 1140: range 00000000165F4930-00000000165F4CBC
EquipComp *__fastcall EquipComp::createEquipAffixPtr(EquipComp *const this, __int64 affix_id, uint32_t level, int a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int *v8; // r8
  unsigned int *v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const data::EquipAffixExcelConfig *affix_config_ptr; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 13 affix_id:1139 48 4 10 level:1139 64 16 14 affix_ptr:1151";
  *(_QWORD *)(v4 + 16) = EquipComp::createEquipAffixPtr;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 32) = level;
  *(_DWORD *)(v4 + 48) = a4;
  if ( *(_DWORD *)(v4 + 32)
    && (ServiceBox::findService<GameserverService>(),
        GameserverService::getConfig((GameserverService *const)(v4 + 64)),
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64)),
        affix_config_ptr = EquipAffixExcelConfigMgr::findEquipAffixExcelConfig(
                             &v7->design_config.txt_config_mgr.equip_affix_config_mgr,
                             *(_DWORD *)(v4 + 32),
                             *(_DWORD *)(v4 + 48)),
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64)),
        affix_config_ptr) )
  {
    if ( *(_BYTE *)(((unsigned __int64)(affix_id + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::tools::perf::make_shared<EquipAffix,Avatar &,unsigned int &,unsigned int &>(
      (Avatar *)(v4 + 64),
      *(unsigned int **)(affix_id + 8),
      (unsigned int *)(v4 + 32),
      (Avatar *)(v4 + 48),
      v8,
      v9);
    if ( std::operator==<EquipAffix>((const std::shared_ptr<EquipAffix> *)(v4 + 64), 0LL) )
    {
      std::shared_ptr<EquipAffix>::shared_ptr(
        (std::shared_ptr<EquipAffix> *const)this,
        (std::shared_ptr<EquipAffix> *)(v4 + 64));
    }
    else
    {
      v10 = (unsigned __int64)std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(_QWORD *)v10 + 8LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/item/equip_comp.cpp",
          "createEquipAffixPtr",
          1158);
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v20, (const char (*)[11])"affix_id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v4 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" level: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])" initMixin failed");
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      std::shared_ptr<EquipAffix>::shared_ptr(
        (std::shared_ptr<EquipAffix> *const)this,
        (std::shared_ptr<EquipAffix> *)(v4 + 64));
    }
    std::shared_ptr<EquipAffix>::~shared_ptr((std::shared_ptr<EquipAffix> *const)(v4 + 64));
  }
  else
  {
    std::shared_ptr<EquipAffix>::shared_ptr((std::shared_ptr<EquipAffix> *const)this, 0LL);
  }
  if ( v21 == (char *)v4 )
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
  return this;
};

// Line 1165: range 00000000165F4CBE-00000000165F4E4C
void __cdecl EquipComp::getAllTargetAbilitiesFromEquipComp(
        const EquipComp *const this,
        TargetAbilityVec *target_ability_vec,
        TargetAbilitySpecialMap *target_ability_special_map)
{
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rcx
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  const std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__for_range_0; // [rsp+38h] [rbp-38h]
  const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > *v10; // [rsp+40h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *affix_id_0; // [rsp+48h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *affix_ptr_0; // [rsp+50h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > *v13; // [rsp+58h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *affix_id; // [rsp+60h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *affix_ptr; // [rsp+68h] [rbp-8h]

  __for_range = &this->weapon_affix_map_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::begin(&this->weapon_affix_map_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::end(&this->weapon_affix_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator*(&__for_begin);
    affix_id = std::get<0ul,unsigned int const,std::shared_ptr<EquipAffix>>(v13);
    affix_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<EquipAffix>>(v13);
    if ( std::operator!=<EquipAffix>(0LL, affix_ptr) )
    {
      v3 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)affix_ptr);
      BaseTalent::getTargetAbilitiesFromTalent(v3, target_ability_vec, target_ability_special_map);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->reliquary_set_affix_map_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::begin(&this->reliquary_set_affix_map_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator*(&__for_begin);
    affix_id_0 = std::get<0ul,unsigned int const,std::shared_ptr<EquipAffix>>(v10);
    affix_ptr_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<EquipAffix>>(v10);
    if ( std::operator!=<EquipAffix>(0LL, affix_ptr_0) )
    {
      v4 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)affix_ptr_0);
      BaseTalent::getTargetAbilitiesFromTalent(v4, target_ability_vec, target_ability_special_map);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator++(&__for_begin);
  }
};

// Line 1184: range 00000000165F4E4E-00000000165F54AB
bool __cdecl EquipComp::isEquipSwitchClosed(EquipComp *const this, EquipPtr *p_equip_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isWeaponSystemClosed; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool isWeaponClosed; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool isReliquarySystemClosed; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  bool isReliquaryClosed; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned int val; // [rsp+18h] [rbp-A8h] BYREF
  data::EquipType equip_type; // [rsp+1Ch] [rbp-A4h]
  std::shared_ptr<Config> v24; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-90h] BYREF
  char v26[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 item_id:1191";
  *(_QWORD *)(v2 + 16) = EquipComp::isEquipSwitchClosed;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( std::operator==<Equip>(p_equip_ptr, 0LL) )
  {
    result = 0;
    goto LABEL_24;
  }
  v6 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_equip_ptr);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  v7 = *(_QWORD *)v6 + 96LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  equip_type = (*(unsigned int (__fastcall **)(unsigned __int64))v7)(v6);
  v8 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_equip_ptr);
  *(_DWORD *)(v2 + 32) = Item::getItemId(v8);
  if ( equip_type == EQUIP_WEAPON )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    isWeaponSystemClosed = FeatureSwitchMgr::isWeaponSystemClosed(&v9->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( isWeaponSystemClosed )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/item/equip_comp.cpp",
        "isEquipSwitchClosed",
        1196);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v25,
        (const char (*)[37])"[FEATURE_SWITCH] WeaponSystem closed");
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 1;
      goto LABEL_24;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    isWeaponClosed = FeatureSwitchMgr::isWeaponClosed(&v11->feature_switch_mgr, *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( isWeaponClosed )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/item/equip_comp.cpp",
        "isEquipSwitchClosed",
        1201);
      v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v25,
              (const char (*)[40])"[FEATURE_SWITCH] WeaponSystem item_id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" closed");
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 1;
      goto LABEL_24;
    }
LABEL_23:
    result = 0;
    goto LABEL_24;
  }
  if ( equip_type )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    isReliquarySystemClosed = FeatureSwitchMgr::isReliquarySystemClosed(&v16->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( isReliquarySystemClosed )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/item/equip_comp.cpp",
        "isEquipSwitchClosed",
        1215);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        &v25,
        (const char (*)[40])"[FEATURE_SWITCH] ReliquarySystem closed");
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 1;
      goto LABEL_24;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    isReliquaryClosed = FeatureSwitchMgr::isReliquaryClosed(&v18->feature_switch_mgr, *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( isReliquaryClosed )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/item/equip_comp.cpp",
        "isEquipSwitchClosed",
        1220);
      v20 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v25,
              (const char (*)[43])"[FEATURE_SWITCH] ReliquarySystem item_id: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" closed");
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 1;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/item/equip_comp.cpp",
    "isEquipSwitchClosed",
    1208);
  v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v25,
          (const char (*)[35])"equip_type equal EQUIP_NONE, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Avatar::getUid(this->avatar_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
  common::milog::MiLogStream::~MiLogStream(&v25);
  result = 0;
LABEL_24:
  if ( v26 == (char *)v2 )
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

// Line 1229: range 00000000165F54AC-00000000165F55FE
__int64 __fastcall EquipComp::isEquipSwitchClosed(EquipComp *const this, data::EquipType equip_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<data::EquipType,std::shared_ptr<Equip>>::mapped_type *v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // r13d
  __int64 result; // rax
  std::shared_ptr<Equip> p_equip_ptr; // [rsp+10h] [rbp-70h] BYREF
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 equip_type:1228";
  *(_QWORD *)(v2 + 16) = EquipComp::isEquipSwitchClosed;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = equip_type;
  if ( std::map<data::EquipType,std::shared_ptr<Equip>>::count(
         &this->equip_map_,
         (const std::map<data::EquipType,std::shared_ptr<Equip>>::key_type *)(v2 + 32)) )
  {
    v5 = std::map<data::EquipType,std::shared_ptr<Equip>>::operator[](
           &this->equip_map_,
           (const std::map<data::EquipType,std::shared_ptr<Equip>>::key_type *)(v2 + 32));
    std::shared_ptr<Equip>::shared_ptr(&p_equip_ptr, v5);
    LOBYTE(v6) = EquipComp::isEquipSwitchClosed(this, &p_equip_ptr);
    v7 = v6;
    std::shared_ptr<Equip>::~shared_ptr(&p_equip_ptr);
  }
  else
  {
    v7 = 0;
  }
  result = v7;
  if ( v10 == (char *)v2 )
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

// Line 1242: range 00000000165F5600-00000000165F5D18
void __cdecl EquipComp::logWearEquip(
        EquipComp *const this,
        Player *player,
        proto_log::PlayerWearEquipOpType wear_equip_op,
        Equip *equip)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWearWeapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWearWeapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyWearWeapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  proto_log::WeaponLog *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  uint32_t v24; // eax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  proto_log::RelicLog *v27; // rax
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int64 Guid; // [rsp+28h] [rbp-D8h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 18 reliquary_ptr:1260 64 16 23 wear_relic_log_ptr:1267";
  *(_QWORD *)(v4 + 16) = EquipComp::logWearEquip;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)equip >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(equip->_vptr_Item + 12);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(Equip *))v7)(equip) == 6 )
  {
    toPtr<Weapon,Equip>((Equip *)(v4 + 32));
    if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v4 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "logWearEquip",
        1248);
      v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v34,
             (const char (*)[25])"weapon is null, item_id:");
      val = Item::getItemId(equip);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" guid:");
      Guid = Item::getGuid(equip);
      v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &Guid);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    else
    {
      common::tools::perf::make_shared<proto_log::PlayerLogBodyWearWeapon>();
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyWearWeapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWearWeapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      proto_log::PlayerLogBodyWearWeapon::set_op(v12, wear_equip_op);
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyWearWeapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWearWeapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarId = Avatar::getAvatarId(this->avatar_);
      proto_log::PlayerLogBodyWearWeapon::set_avatar_id(v13, AvatarId);
      v15 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyWearWeapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWearWeapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      v17 = proto_log::PlayerLogBodyWearWeapon::mutable_weapon_log(v16);
      Weapon::getWeaponLog(v15, v17);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWearWeapon,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyWearWeapon> *)(v4 + 64));
      Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyWearWeapon>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWearWeapon> *const)(v4 + 64));
    }
    std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v4 + 32));
  }
  else
  {
    toPtr<Reliquary,Equip>((Equip *)(v4 + 32));
    if ( std::operator==<Reliquary>((const std::shared_ptr<Reliquary> *)(v4 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/item/equip_comp.cpp",
        "logWearEquip",
        1263);
      v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v34,
              (const char (*)[28])"reliquary is null, item_id:");
      val = Item::getItemId(equip);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" guid:");
      Guid = Item::getGuid(equip);
      v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v20, &Guid);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v21, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    else
    {
      common::tools::perf::make_shared<proto_log::PlayerLogBodyWearRelic>();
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      proto_log::PlayerLogBodyWearRelic::set_op(v22, wear_equip_op);
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = Avatar::getAvatarId(this->avatar_);
      proto_log::PlayerLogBodyWearRelic::set_avatar_id(v23, v24);
      v25 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWearRelic,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      v27 = proto_log::PlayerLogBodyWearRelic::mutable_relic_log(v26);
      Reliquary::getRelicLog(v25, v27);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWearRelic,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyWearRelic> *)(v4 + 64));
      Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyWearRelic>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWearRelic> *const)(v4 + 64));
    }
    std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(v4 + 32));
  }
  if ( v35 == (char *)v4 )
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
