// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/regional_play/player_regional_play_comp.cpp

// Line 31: range 0000000015CAB934-0000000015CAB9E4
int32_t __cdecl DeathZoneData::fromBin(DeathZoneData *const this, const proto::DeathZoneBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  bool v4; // dl
  bool is_open; // cl
  char v6; // dl
  __int64 v7; // rdx
  const proto::DeathZoneBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::DeathZoneBin::id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = v3 != 0 && (char)(((unsigned __int8)this & 7) + 3) >= v3;
  if ( v4 )
    __asan_report_store4(this, bin, v4);
  this->id = v2;
  is_open = proto::DeathZoneBin::is_open(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, bin, v7);
  this->is_open = is_open;
  return 0;
};

// Line 38: range 0000000015CAB9E6-0000000015CABA98
int32_t __cdecl DeathZoneData::toBin(const DeathZoneData *const this, proto::DeathZoneBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::DeathZoneBin::set_id(bin, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::DeathZoneBin::set_is_open(bin, this->is_open);
  return 0;
};

// Line 45: range 0000000015CABA9A-0000000015CABB4C
int32_t __cdecl DeathZoneData::toClient(const DeathZoneData *const this, proto::DeathZoneInfo *info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::DeathZoneInfo::set_id(info, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::DeathZoneInfo::set_is_open(info, this->is_open);
  return 0;
};

// Line 52: range 0000000015CABB4E-0000000015CAC025
int32_t __cdecl PlayerRegionalPlayComp::fromBin(
        PlayerRegionalPlayComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rcx
  float *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,float> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r12
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  int32_t result; // eax
  DeathZoneData *v13; // r15
  unsigned int *v14; // rcx
  DeathZoneData *v15; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> >,bool> v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rcx
  const std::string *v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-D0h] BYREF
  float v21; // [rsp+24h] [rbp-CCh] BYREF
  google::protobuf::RepeatedPtrField<proto::DeathZoneBin>::const_iterator __for_begin_0; // [rsp+28h] [rbp-C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::DeathZoneBin>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const proto::PlayerRegionalPlayCompBin *proto_comp; // [rsp+38h] [rbp-B8h]
  const google::protobuf::RepeatedPtrField<proto::RegionalPlayVarBin> *__for_range; // [rsp+40h] [rbp-B0h]
  const google::protobuf::RepeatedPtrField<proto::DeathZoneBin> *__for_range_0; // [rsp+48h] [rbp-A8h]
  const proto::DeathZoneBin *death_zone_bin; // [rsp+50h] [rbp-A0h]
  const proto::RegionalPlayVarBin *v28; // [rsp+58h] [rbp-98h]
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-90h] BYREF
  char v30[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 death_zone_data:64";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::fromBin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  proto_comp = proto::PlayerDataBin::regional_play_bin(player_data_bin);
  __for_range = proto::PlayerRegionalPlayCompBin::var_bin_list(proto_comp);
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RegionalPlayVarBin>::begin(__for_range).it_;
  *(google::protobuf::RepeatedPtrField<proto::RegionalPlayVarBin>::const_iterator *)(v3 + 32) = google::protobuf::RepeatedPtrField<proto::RegionalPlayVarBin>::end(__for_range);
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::RegionalPlayVarBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::RegionalPlayVarBin> *const)&__for_end,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::RegionalPlayVarBin>::iterator *)(v3 + 32)) )
  {
    v28 = google::protobuf::internal::RepeatedPtrIterator<proto::RegionalPlayVarBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::RegionalPlayVarBin> *const)&__for_end);
    *(float *)v2.m128i_i32 = proto::RegionalPlayVarBin::value(v28);
    LODWORD(v21) = _mm_cvtsi128_si32(v2);
    v20 = proto::RegionalPlayVarBin::type(v28);
    v8 = std::map<unsigned int,float>::emplace<unsigned int,float>(&this->var_map_, &v20, &v21, v6, v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "fromBin",
        58);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v29,
             (const char (*)[27])"[REGIONAL_PLAY] var type: ");
      LODWORD(v21) = proto::RegionalPlayVarBin::type(v28);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)&v21);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" duplicated");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = -1;
      goto LABEL_19;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::RegionalPlayVarBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::RegionalPlayVarBin> *const)&__for_end);
  }
  __for_range_0 = proto::PlayerRegionalPlayCompBin::death_zone_bin_list(proto_comp);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::DeathZoneBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::DeathZoneBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::DeathZoneBin const>::operator!=(
            &__for_begin_0,
            &__for_end) )
  {
    death_zone_bin = google::protobuf::internal::RepeatedPtrIterator<proto::DeathZoneBin const>::operator*(&__for_begin_0);
    *(_DWORD *)(v3 + 32) = 0;
    *(_BYTE *)(v3 + 36) = 0;
    DeathZoneData::fromBin((DeathZoneData *const)(v3 + 32), death_zone_bin);
    v13 = std::move<DeathZoneData &>((DeathZoneData *)(v3 + 32));
    LODWORD(v21) = proto::DeathZoneBin::id(death_zone_bin);
    v16 = std::map<unsigned int,DeathZoneData>::emplace<unsigned int,DeathZoneData>(
            &this->death_zone_map_,
            (unsigned int *)&v21,
            v13,
            v14,
            v15);
    if ( !v16.second )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "fromBin",
        68);
      v17 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v29,
              (const char (*)[38])"[DEATH_ZONE] duplicate death_zone_id:");
      LODWORD(v21) = proto::DeathZoneBin::id(death_zone_bin);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)&v21);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v18, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::DeathZoneBin const>::operator++(&__for_begin_0);
  }
  v19 = proto::PlayerRegionalPlayCompBin::last_play_name[abi:cxx11](proto_comp);
  std::string::operator=(&this->last_play_name_, v19);
  result = 0;
LABEL_19:
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 76: range 0000000015CAC026-0000000015CAC23C
int32_t __cdecl PlayerRegionalPlayComp::toBin(
        PlayerRegionalPlayComp *const this,
        proto::PlayerDataBin *player_data_bin)
{
  std::map<unsigned int,float>::iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,float>::iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  proto::PlayerRegionalPlayCompBin *proto_comp; // [rsp+28h] [rbp-58h]
  std::map<unsigned int,float> *__for_range; // [rsp+30h] [rbp-50h]
  std::map<unsigned int,DeathZoneData> *__for_range_0; // [rsp+38h] [rbp-48h]
  const std::pair<unsigned int const,DeathZoneData> *v8; // [rsp+40h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,DeathZoneData> >::type *_; // [rsp+48h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,DeathZoneData> >::type *death_zone_data; // [rsp+50h] [rbp-30h]
  proto::DeathZoneBin *death_zone_bin; // [rsp+58h] [rbp-28h]
  const std::pair<unsigned int const,float> *v12; // [rsp+60h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,float> >::type *v13; // [rsp+68h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,float> >::type *v14; // [rsp+70h] [rbp-10h]
  proto::RegionalPlayVarBin *v15; // [rsp+78h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_regional_play_bin(player_data_bin);
  __for_range = &this->var_map_;
  __for_begin._M_node = std::map<unsigned int,float>::begin(&this->var_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,float>::end(&this->var_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,float>>::operator*(&__for_begin);
    v13 = std::get<0ul,unsigned int const,float>(v12);
    v14 = (std::tuple_element<1,const std::pair<unsigned int const,float> >::type *)std::get<1ul,unsigned int const,float>(v12);
    v15 = proto::PlayerRegionalPlayCompBin::add_var_bin_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    proto::RegionalPlayVarBin::set_type(v15, *v13);
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    proto::RegionalPlayVarBin::set_value(v15, *v14);
    std::_Rb_tree_iterator<std::pair<unsigned int const,float>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->death_zone_map_;
  __for_begin._M_node = std::map<unsigned int,DeathZoneData>::begin(&this->death_zone_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,DeathZoneData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> >::_Self *)&__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> > *const)&__for_begin);
    _ = std::get<0ul,unsigned int const,DeathZoneData>(v8);
    death_zone_data = (std::tuple_element<1,const std::pair<unsigned int const,DeathZoneData> >::type *)std::get<1ul,unsigned int const,DeathZoneData>(v8);
    death_zone_bin = proto::PlayerRegionalPlayCompBin::add_death_zone_bin_list(proto_comp);
    DeathZoneData::toBin(death_zone_data, death_zone_bin);
    std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> > *const)&__for_begin);
  }
  proto::PlayerRegionalPlayCompBin::set_last_play_name(proto_comp, &this->last_play_name_);
  return 0;
};

// Line 94: range 0000000015CAC23E-0000000015CAC25C
int32_t __cdecl PlayerRegionalPlayComp::init(PlayerRegionalPlayComp *const this)
{
  PlayerRegionalPlayComp::tryInitDeathZoneData(this);
  return 0;
};

// Line 100: range 0000000015CAC25E-0000000015CAC5C9
void __cdecl PlayerRegionalPlayComp::tryInitDeathZoneData(PlayerRegionalPlayComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::tuple_element<0,const std::pair<unsigned int const,data::ConfigDeathZone> >::type v5; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,data::ConfigDeathZone> >::type *v6; // rsi
  std::map<unsigned int,DeathZoneData>::mapped_type *v7; // rax
  std::tuple_element<0,const std::pair<unsigned int const,data::ConfigDeathZone> >::type *v8; // rdx
  char v9; // cl
  bool is_default_open; // r14
  std::tuple_element<0,const std::pair<unsigned int const,data::ConfigDeathZone> >::type *v11; // rsi
  std::map<unsigned int,DeathZoneData>::mapped_type *v12; // rdx
  char v13; // cl
  std::map<unsigned int,data::ConfigDeathZone>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::map<unsigned int,data::ConfigDeathZone>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  const std::map<unsigned int,data::ConfigDeathZone> *death_zone_config_map; // [rsp+28h] [rbp-A8h]
  const std::map<unsigned int,data::ConfigDeathZone> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::pair<unsigned int const,data::ConfigDeathZone> *v19; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ConfigDeathZone> >::type *death_zone_id; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ConfigDeathZone> >::type *death_zone_config; // [rsp+48h] [rbp-88h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-80h] BYREF
  char v23[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 iter:104";
  *(_QWORD *)(v1 + 16) = PlayerRegionalPlayComp::tryInitDeathZoneData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  death_zone_config_map = JsonConfigMgr::getDeathZoneConfigMap(&v4->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  __for_range = death_zone_config_map;
  __for_begin._M_node = std::map<unsigned int,data::ConfigDeathZone>::begin(death_zone_config_map)._M_node;
  __for_end._M_node = std::map<unsigned int,data::ConfigDeathZone>::end(death_zone_config_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ConfigDeathZone>>::operator*(&__for_begin);
    death_zone_id = std::get<0ul,unsigned int const,data::ConfigDeathZone>(v19);
    death_zone_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ConfigDeathZone> >::type *)std::get<1ul,unsigned int const,data::ConfigDeathZone>(v19);
    *(std::map<unsigned int,DeathZoneData>::iterator *)(v1 + 32) = std::map<unsigned int,DeathZoneData>::find(
                                                                     &this->death_zone_map_,
                                                                     death_zone_id);
    __y._M_node = std::map<unsigned int,DeathZoneData>::end(&this->death_zone_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> >::_Self *)(v1 + 32),
            &__y) )
    {
      if ( *(_BYTE *)(((unsigned __int64)death_zone_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)death_zone_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)death_zone_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(death_zone_id);
      }
      v5 = *death_zone_id;
      v6 = death_zone_id;
      v7 = std::map<unsigned int,DeathZoneData>::operator[](&this->death_zone_map_, death_zone_id);
      v8 = (std::tuple_element<0,const std::pair<unsigned int const,data::ConfigDeathZone> >::type *)v7;
      v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
      if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
      {
        LOBYTE(v6) = v9 != 0;
        __asan_report_store4(v7, v6, (_BYTE)v7);
      }
      *v8 = v5;
      if ( *(_BYTE *)(((unsigned __int64)&death_zone_config->is_default_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)death_zone_config + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&death_zone_config->is_default_open >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load1(&death_zone_config->is_default_open);
      }
      is_default_open = death_zone_config->is_default_open;
      v11 = death_zone_id;
      v12 = std::map<unsigned int,DeathZoneData>::operator[](&this->death_zone_map_, death_zone_id);
      v13 = *(_BYTE *)(((unsigned __int64)&v12->is_open >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (((unsigned __int8)v12 + 4) & 7) >= v13 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store1(&v12->is_open, v11, v12);
      }
      v12->is_open = is_default_open;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ConfigDeathZone>>::operator++(&__for_begin);
  }
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

// Line 115: range 0000000015CAC5CA-0000000015CAC5E8
int32_t __cdecl PlayerRegionalPlayComp::notifyAllData(PlayerRegionalPlayComp *const this)
{
  PlayerRegionalPlayComp::notifyPlayerDeathZone(this);
  return 0;
};

// Line 121: range 0000000015CAC5EA-0000000015CAC710
int32_t __cdecl PlayerRegionalPlayComp::onLogout(PlayerRegionalPlayComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  int32_t result; // eax
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 23 death_zone_play_ptr:123";
  *(_QWORD *)(v1 + 16) = PlayerRegionalPlayComp::onLogout;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerRegionalPlayComp::findRegionalPlay<DeathZoneRegionalPlay>((PlayerRegionalPlayComp *const)(v1 + 32));
  if ( std::operator!=<DeathZoneRegionalPlay>(0LL, (const std::shared_ptr<DeathZoneRegionalPlay> *)(v1 + 32)) )
  {
    v4 = std::__shared_ptr_access<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    DeathZoneRegionalPlay::logDestroyDeathZone(v4);
  }
  std::shared_ptr<DeathZoneRegionalPlay>::~shared_ptr((std::shared_ptr<DeathZoneRegionalPlay> *const)(v1 + 32));
  result = 0;
  if ( v6 == (char *)v1 )
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

// Line 132: range 0000000015CAC712-0000000015CAC90C
void __cdecl PlayerRegionalPlayComp::broadcastDeathZoneData(const PlayerRegionalPlayComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 20 player_world_ptr:133 80 48 10 notify:136";
  *(_QWORD *)(v1 + 16) = PlayerRegionalPlayComp::broadcastDeathZoneData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v1 + 48));
  if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 48)) )
  {
    proto::DeathZoneInfoNotify::DeathZoneInfoNotify((proto::DeathZoneInfoNotify *const)(v1 + 80));
    PlayerRegionalPlayComp::fillDeathZoneDataNotify(this, (proto::DeathZoneInfoNotify *)(v1 + 80));
    v4 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    World::notifyAllPlayer<proto::DeathZoneInfoNotify>(v4, (const proto::DeathZoneInfoNotify *)(v1 + 80), 0);
    proto::DeathZoneInfoNotify::~DeathZoneInfoNotify((proto::DeathZoneInfoNotify *const)(v1 + 80));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 48));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 143: range 0000000015CAC90E-0000000015CACAAF
void __cdecl PlayerRegionalPlayComp::notifyPlayerDeathZone(const PlayerRegionalPlayComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:144";
  *(_QWORD *)(v1 + 16) = PlayerRegionalPlayComp::notifyPlayerDeathZone;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::PlayerDeathZoneNotify::PlayerDeathZoneNotify((proto::PlayerDeathZoneNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_death_zone_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_death_zone_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_death_zone_id_);
  }
  proto::PlayerDeathZoneNotify::set_cur_death_zone_id(
    (proto::PlayerDeathZoneNotify *const)(v1 + 32),
    this->cur_death_zone_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::PlayerDeathZoneNotify::~PlayerDeathZoneNotify((proto::PlayerDeathZoneNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
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

// Line 150: range 0000000015CACAB0-0000000015CAD060
BaseRegionalPlayPtr __cdecl PlayerRegionalPlayComp::createAndInitRegionalPlayPtr(
        PlayerRegionalPlayComp *const this,
        const std::string *play_name)
{
  std::string *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const std::string *v9; // r8
  unsigned int *v10; // r9
  common::milog::MiLogStream *v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char v14; // al
  BaseRegionalPlayPtr result; // rax
  std::string *play_namea; // [rsp+8h] [rbp-F8h]
  int v17; // [rsp+28h] [rbp-D8h] BYREF
  data::RegionalPlayType play_type; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<MichiaeMatsuriRegionalPlay> __r; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<LightStoneRegionalPlay> v20; // [rsp+40h] [rbp-C0h] BYREF
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+80h] [rbp-80h] BYREF

  play_namea = v2;
  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 play_ptr:151 64 16 14 config_ptr:153";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::createAndInitRegionalPlayPtr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  std::shared_ptr<BaseRegionalPlay>::shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)(v3 + 32), 0LL);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  JsonConfigMgr::findRegionalPlayConfig(
    (const JsonConfigMgr *const)(v3 + 64),
    (const std::string *)&v6->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( std::operator==<data::ConfigRegionalPlayBase>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/player_regional_play_comp.cpp",
      "createAndInitRegionalPlayPtr",
      156);
    v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v22,
           (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, play_namea);
    common::milog::MiLogStream::~MiLogStream(&v22);
    std::shared_ptr<BaseRegionalPlay>::shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)this, 0LL);
    goto LABEL_34;
  }
  v8 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v8->play_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->play_type >> 3) + 0x7FFF8000) <= 3 )
  {
    v8 = (std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->play_type);
  }
  play_type = v8->play_type;
  if ( play_type == DeathZone_0 )
  {
    v17 = 3000;
    if ( *(_BYTE *)(((unsigned __int64)(&play_name->_anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
      __asan_report_load8(&play_name->_anon_0._M_allocated_capacity + 1);
    common::tools::perf::make_shared<DeathZoneRegionalPlay,Player &,std::string const&,unsigned int>(
      (Player *)&v21,
      *((const std::string **)&play_name->_anon_0._M_allocated_capacity + 1),
      (unsigned int *)play_namea,
      (Player *)&v17,
      v9,
      v10);
    std::shared_ptr<BaseRegionalPlay>::operator=<DeathZoneRegionalPlay>(
      (std::shared_ptr<BaseRegionalPlay> *const)(v3 + 32),
      (std::shared_ptr<DeathZoneRegionalPlay> *)&v21);
    std::shared_ptr<DeathZoneRegionalPlay>::~shared_ptr((std::shared_ptr<DeathZoneRegionalPlay> *const)&v21);
    goto LABEL_23;
  }
  if ( play_type > DeathZone_0 )
    goto LABEL_22;
  if ( play_type == MichiaeMatsuri )
  {
    v17 = 2500;
    if ( *(_BYTE *)(((unsigned __int64)(&play_name->_anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
      __asan_report_load8(&play_name->_anon_0._M_allocated_capacity + 1);
    common::tools::perf::make_shared<MichiaeMatsuriRegionalPlay,Player &,std::string const&,unsigned int>(
      (Player *)&__r,
      *((const std::string **)&play_name->_anon_0._M_allocated_capacity + 1),
      (unsigned int *)play_namea,
      (Player *)&v17,
      v9,
      v10);
    std::shared_ptr<BaseRegionalPlay>::operator=<MichiaeMatsuriRegionalPlay>(
      (std::shared_ptr<BaseRegionalPlay> *const)(v3 + 32),
      &__r);
    std::shared_ptr<MichiaeMatsuriRegionalPlay>::~shared_ptr(&__r);
    goto LABEL_23;
  }
  if ( play_type == LightStone )
  {
    v17 = 2600;
    if ( *(_BYTE *)(((unsigned __int64)(&play_name->_anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
      __asan_report_load8(&play_name->_anon_0._M_allocated_capacity + 1);
    common::tools::perf::make_shared<LightStoneRegionalPlay,Player &,std::string const&,unsigned int>(
      (Player *)&v20,
      *((const std::string **)&play_name->_anon_0._M_allocated_capacity + 1),
      (unsigned int *)play_namea,
      (Player *)&v17,
      v9,
      v10);
    std::shared_ptr<BaseRegionalPlay>::operator=<LightStoneRegionalPlay>(
      (std::shared_ptr<BaseRegionalPlay> *const)(v3 + 32),
      &v20);
    std::shared_ptr<LightStoneRegionalPlay>::~shared_ptr(&v20);
  }
  else
  {
LABEL_22:
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/player_regional_play_comp.cpp",
      "createAndInitRegionalPlayPtr",
      179);
    v11 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v22,
            (const char (*)[56])"[REGIONAL_PLAY] create regional play failed, play_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, play_namea);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( !std::operator!=<BaseRegionalPlay>(0LL, (const std::shared_ptr<BaseRegionalPlay> *)(v3 + 32)) )
    goto LABEL_30;
LABEL_23:
  v12 = (unsigned __int64)std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8(v12);
  v13 = *(_QWORD *)v12 + 16LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8(*(_QWORD *)v12 + 16LL);
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v13)(v12) )
    v14 = 1;
  else
LABEL_30:
    v14 = 0;
  if ( v14 )
    std::shared_ptr<BaseRegionalPlay>::shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)this, 0LL);
  else
    std::shared_ptr<BaseRegionalPlay>::shared_ptr(
      (std::shared_ptr<BaseRegionalPlay> *const)this,
      (std::shared_ptr<BaseRegionalPlay> *)(v3 + 32));
LABEL_34:
  std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v3 + 64));
  std::shared_ptr<BaseRegionalPlay>::~shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)(v3 + 32));
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
  result._M_ptr = (std::__shared_ptr<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 192: range 0000000015CAD062-0000000015CAD0B7
BaseRegionalPlayPtr __cdecl PlayerRegionalPlayComp::getLastRegionalPlayPtr(const PlayerRegionalPlayComp *const this)
{
  const std::string *v1; // rsi
  BaseRegionalPlayPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = PlayerRegionalPlayComp::findRegionalPlayPtr(this, v1);
  result._M_ptr = (std::__shared_ptr<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 197: range 0000000015CAD0B8-0000000015CAD1F5
BaseRegionalPlayPtr __cdecl PlayerRegionalPlayComp::findRegionalPlayPtr(
        const PlayerRegionalPlayComp *const this,
        const std::string *play_name)
{
  const std::string *v2; // rdx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<BaseRegionalPlay> *p_second; // rdx
  BaseRegionalPlayPtr result; // rax
  const std::string *play_namea; // [rsp+8h] [rbp-88h]
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > >::_Self __y; // [rsp+28h] [rbp-68h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  play_namea = v2;
  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:198";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::findRegionalPlayPtr;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::const_iterator *)(v3 + 32) = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::find(
                                                                                            (const std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)&play_name[1]._M_string_length,
                                                                                            play_namea);
  __y._M_node = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::end((const std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)&play_name[1]._M_string_length)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > >::_Self *)(v3 + 32),
         &__y) )
  {
    p_second = &std::_Rb_tree_const_iterator<std::pair<std::string const,std::shared_ptr<BaseRegionalPlay>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > > *const)(v3 + 32))->second;
    std::shared_ptr<BaseRegionalPlay>::shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)this, p_second);
  }
  else
  {
    std::shared_ptr<BaseRegionalPlay>::shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)this, 0LL);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 207: range 0000000015CAD1F6-0000000015CAD46F
const PlayerRegionalPlayComp *__fastcall PlayerRegionalPlayComp::findRegionalPlayPtrByVarType(
        const PlayerRegionalPlayComp *const this,
        __int64 var_type,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  const RegionalPlayVarJsonConfig *RegionalPlayVarJsonConfig; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 var_type:206";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::findRegionalPlayPtrByVarType;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  v7 = *(unsigned int *)(v3 + 32);
  RegionalPlayVarJsonConfig = JsonConfigMgr::findRegionalPlayVarJsonConfig(&v6->design_config.json_config_mgr, v7);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( RegionalPlayVarJsonConfig )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v7);
    PlayerRegionalPlayComp::findRegionalPlayPtr(this, (const std::string *)var_type);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/player_regional_play_comp.cpp",
      "findRegionalPlayPtrByVarType",
      211);
    v8 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v15,
           (const char (*)[64])"[REGIONAL_PLAY] findRegionalPlayVarJsonConfig failed, var_type:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)(var_type + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(var_type + 24);
    operator<<(v9, *(const Player **)(var_type + 24));
    common::milog::MiLogStream::~MiLogStream(&v15);
    std::shared_ptr<BaseRegionalPlay>::shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)this, 0LL);
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 218: range 0000000015CAD470-0000000015CAD710
BaseRegionalPlayPtr __cdecl PlayerRegionalPlayComp::getOrCreateRegionalPlayPtr(
        PlayerRegionalPlayComp *const this,
        const std::string *play_name)
{
  const std::string *v2; // rdx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rcx
  std::shared_ptr<BaseRegionalPlay> *v8; // rax
  BaseRegionalPlayPtr result; // rax
  const std::string *play_namea; // [rsp+8h] [rbp-A8h]
  std::shared_ptr<BaseRegionalPlay> __r; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  play_namea = v2;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 play_ptr:219";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::getOrCreateRegionalPlayPtr;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerRegionalPlayComp::findRegionalPlayPtr((const PlayerRegionalPlayComp *const)(v3 + 32), play_name);
  if ( !std::operator==<BaseRegionalPlay>(0LL, (const std::shared_ptr<BaseRegionalPlay> *)(v3 + 32)) )
    goto LABEL_10;
  PlayerRegionalPlayComp::createAndInitRegionalPlayPtr((PlayerRegionalPlayComp *const)&__r, play_name);
  std::shared_ptr<BaseRegionalPlay>::operator=((std::shared_ptr<BaseRegionalPlay> *const)(v3 + 32), &__r);
  std::shared_ptr<BaseRegionalPlay>::~shared_ptr(&__r);
  if ( !std::operator==<BaseRegionalPlay>(0LL, (const std::shared_ptr<BaseRegionalPlay> *)(v3 + 32)) )
  {
    v8 = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::operator[](
           (std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)&play_name[1]._M_string_length,
           play_namea);
    std::shared_ptr<BaseRegionalPlay>::operator=(v8, (const std::shared_ptr<BaseRegionalPlay> *)(v3 + 32));
LABEL_10:
    std::shared_ptr<BaseRegionalPlay>::shared_ptr(
      (std::shared_ptr<BaseRegionalPlay> *const)this,
      (std::shared_ptr<BaseRegionalPlay> *)(v3 + 32));
    goto LABEL_11;
  }
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/regional_play/player_regional_play_comp.cpp",
    "getOrCreateRegionalPlayPtr",
    225);
  v6 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
         &v12,
         (const char (*)[64])"[REGIONAL_PLAY] createAndInitRegionalPlayPtr failed, play_name:");
  v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, play_namea);
  if ( *(_BYTE *)(((unsigned __int64)(&play_name->_anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&play_name->_anon_0._M_allocated_capacity + 1);
  operator<<(v7, *((const Player **)&play_name->_anon_0._M_allocated_capacity + 1));
  common::milog::MiLogStream::~MiLogStream(&v12);
  std::shared_ptr<BaseRegionalPlay>::shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)this, 0LL);
LABEL_11:
  std::shared_ptr<BaseRegionalPlay>::~shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)(v3 + 32));
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 234: range 0000000015CAD712-0000000015CAD76A
std::set<std::string> *__cdecl PlayerRegionalPlayComp::getResumeRegionalPlaySet[abi:cxx11](
        std::set<std::string> *retstr,
        PlayerRegionalPlayComp *const this)
{
  std::set<std::string>::set(retstr);
  PlayerRegionalPlayComp::tryResumeDeathZone(this, retstr);
  return retstr;
};

// Line 243: range 0000000015CAD76C-0000000015CADCC2
void __cdecl PlayerRegionalPlayComp::tryResumeDeathZone(
        PlayerRegionalPlayComp *const this,
        std::set<std::string> *play_name_set)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rcx
  data::SceneType scene_type; // [rsp+18h] [rbp-D8h]
  float v15; // [rsp+1Ch] [rbp-D4h]
  const RegionalPlayVarJsonConfig *RegionalPlayVarJsonConfig; // [rsp+20h] [rbp-D0h]
  const std::string *play_name; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 var_type:255 64 16 17 cur_scene_ptr:244";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::tryResumeDeathZone;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/player_regional_play_comp.cpp",
      "tryResumeDeathZone",
      247);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v19,
           (const char (*)[41])"[REGIONAL_PLAY] cur_scene_ptr is nullptr");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    scene_type = Scene::getSceneType(v7);
    if ( scene_type == SCENE_WORLD || scene_type == SCENE_ROOM )
    {
      *(_DWORD *)(v3 + 48) = 3001;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
      RegionalPlayVarJsonConfig = JsonConfigMgr::findRegionalPlayVarJsonConfig(
                                    &v8->design_config.json_config_mgr,
                                    *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v18);
      if ( RegionalPlayVarJsonConfig )
      {
        play_name = &RegionalPlayVarJsonConfig->play_name;
        *(float *)v2.m128i_i32 = PlayerRegionalPlayComp::getVarValue(this, *(_DWORD *)(v3 + 48));
        v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
        if ( *(_BYTE *)(((unsigned __int64)&RegionalPlayVarJsonConfig->init_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)RegionalPlayVarJsonConfig + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&RegionalPlayVarJsonConfig->init_value >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&RegionalPlayVarJsonConfig->init_value);
        }
        if ( std::fabs(RegionalPlayVarJsonConfig->init_value - v15) > 0.00000011920929
          || PlayerRegionalPlayComp::checkCanCreateRegionalPlay(this, play_name) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/regional_play/player_regional_play_comp.cpp",
            "tryResumeDeathZone",
            266);
          v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v19,
                  (const char (*)[43])"[REGIONAL_PLAY] ResumeDeathZone play_name:");
          v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, play_name);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v13, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v19);
          std::set<std::string>::insert(play_name_set, play_name);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/regional_play/player_regional_play_comp.cpp",
          "tryResumeDeathZone",
          259);
        v9 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
               &v19,
               (const char (*)[64])"[REGIONAL_PLAY] findRegionalPlayVarJsonConfig failed, var_type:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v3 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v10, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  if ( v20 == (char *)v3 )
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

// Line 272: range 0000000015CADCC4-0000000015CAE347
void __cdecl PlayerRegionalPlayComp::tryStartDeathZone(PlayerRegionalPlayComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerPolygonComp *PolygonComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  std::shared_ptr<BaseRegionalPlay> *v14; // rax
  std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  BaseRegionalPlay *v16; // rax
  uint32_t cur_polygon_id; // [rsp+1Ch] [rbp-F4h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+40h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 14 config_ptr:279 64 16 12 play_ptr:292 96 32 13 play_name:274";
  *(_QWORD *)(v1 + 16) = PlayerRegionalPlayComp::tryStartDeathZone;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  PolygonComp = Player::getPolygonComp(this->player_);
  cur_polygon_id = PlayerPolygonComp::getCurPolygonId(PolygonComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  JsonConfigMgr::findRegionalPlayNameByPolygonId[abi:cxx11](
    (std::string *)(v1 + 96),
    &v5->design_config.json_config_mgr,
    cur_polygon_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  if ( !(unsigned __int8)std::string::empty(v1 + 96)
    && PlayerRegionalPlayComp::checkCanCreateRegionalPlay(this, (const std::string *)(v1 + 96)) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 64));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    JsonConfigMgr::findRegionalPlayConfig(
      (const JsonConfigMgr *const)(v1 + 32),
      (const std::string *)&v7->design_config.json_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
    if ( std::operator==<data::ConfigRegionalPlayBase>(
           0LL,
           (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "tryStartDeathZone",
        282);
      v8 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             &v18,
             (const char (*)[58])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name:");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      PlayerRegionalPlayComp::findRegionalPlayPtr(
        (const PlayerRegionalPlayComp *const)(v1 + 64),
        (const std::string *)this);
      v10 = std::operator!=<BaseRegionalPlay>(0LL, (const std::shared_ptr<BaseRegionalPlay> *)(v1 + 64));
      std::shared_ptr<BaseRegionalPlay>::~shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)(v1 + 64));
      if ( !v10 )
      {
        v12 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v12->play_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->play_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->play_type);
        }
        if ( v12->play_type == DeathZone_0 )
        {
          PlayerRegionalPlayComp::createAndInitRegionalPlayPtr(
            (PlayerRegionalPlayComp *const)(v1 + 64),
            (const std::string *)this);
          if ( std::operator==<BaseRegionalPlay>(0LL, (const std::shared_ptr<BaseRegionalPlay> *)(v1 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v18,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/regional_play/player_regional_play_comp.cpp",
              "tryStartDeathZone",
              295);
            v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v18,
                    (const char (*)[52])"[REGIONAL_PLAY] create DeathZoneRegionalPlay failed");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v13, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v18);
          }
          else
          {
            v14 = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::operator[](
                    &this->play_ptr_map_,
                    (const std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::key_type *)(v1 + 96));
            std::shared_ptr<BaseRegionalPlay>::operator=(v14, (const std::shared_ptr<BaseRegionalPlay> *)(v1 + 64));
            v15 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            if ( !BaseRegionalPlay::getIsEnabled(v15) )
            {
              v16 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              BaseRegionalPlay::enable(v16);
            }
          }
          std::shared_ptr<BaseRegionalPlay>::~shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)(v1 + 64));
        }
        goto LABEL_29;
      }
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "tryStartDeathZone",
        287);
      v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v18,
              (const char (*)[51])"[REGIONAL_PLAY] RegionalPlay has exist, play_name:");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v18);
LABEL_29:
    std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v1 + 32));
  }
  std::string::~string((void *)(v1 + 96));
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 307: range 0000000015CAE348-0000000015CAE60E
void __fastcall PlayerRegionalPlayComp::tryInitVariable(PlayerRegionalPlayComp *const this, uint32_t type, float value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  char *v10; // rsi
  std::map<unsigned int,float>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  char v13; // cl
  int v14; // [rsp+Ch] [rbp-C4h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,float> >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 8 type:306 48 4 9 value:306 64 8 8 iter:313";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::tryInitVariable;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = type;
  *(float *)(v3 + 48) = value;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    *(std::map<unsigned int,float>::iterator *)(v3 + 64) = std::map<unsigned int,float>::find(
                                                             &this->var_map_,
                                                             (const std::map<unsigned int,float>::key_type *)(v3 + 32));
    __y._M_node = std::map<unsigned int,float>::end(&this->var_map_)._M_node;
    if ( !std::operator!=((const std::_Rb_tree_iterator<std::pair<unsigned int const,float> >::_Self *)(v3 + 64), &__y) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "tryInitVariable",
        319);
      v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v16,
             (const char (*)[38])"[REGIONAL_PLAY] init variable, type: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" ,value: ");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v9, (const float *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      v14 = *(_DWORD *)(v3 + 48);
      v10 = (char *)(v3 + 32);
      v11 = std::map<unsigned int,float>::operator[](
              &this->var_map_,
              (const std::map<unsigned int,float>::key_type *)(v3 + 32));
      v12 = v11;
      v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
      {
        LOBYTE(v10) = v13 != 0;
        __asan_report_store4(v11, v10, (_BYTE)v11);
      }
      *v12 = v14;
    }
  }
  if ( v17 == (char *)v3 )
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

// Line 324: range 0000000015CAE610-0000000015CAE6E3
std::map<unsigned int,float>::mapped_type __fastcall PlayerRegionalPlayComp::getVariableInVarMap(
        const PlayerRegionalPlayComp *const this,
        uint32_t type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<unsigned int,float>::mapped_type result; // xmm0_4
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 type:323";
  *(_QWORD *)(v2 + 16) = PlayerRegionalPlayComp::getVariableInVarMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = type;
  result = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,float>>(
             &this->var_map_,
             (const std::map<unsigned int,float>::key_type *)(v2 + 32),
             0.0);
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

// Line 329: range 0000000015CAE6E4-0000000015CAE880
float __fastcall PlayerRegionalPlayComp::getVarValue(PlayerRegionalPlayComp *const this, uint32_t type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,float> >::pointer v5; // rdx
  float *p_second; // rax
  float result; // xmm0_4
  std::_Rb_tree_iterator<std::pair<unsigned int const,float> >::_Self __y; // [rsp+10h] [rbp-90h] BYREF
  std::map<unsigned int,float> *valid_var_map; // [rsp+18h] [rbp-88h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 type:328 64 8 8 iter:331";
  *(_QWORD *)(v2 + 16) = PlayerRegionalPlayComp::getVarValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = type;
  valid_var_map = PlayerRegionalPlayComp::getValidVarMap(this);
  *(std::map<unsigned int,float>::iterator *)(v2 + 64) = std::map<unsigned int,float>::find(
                                                           valid_var_map,
                                                           (const std::map<unsigned int,float>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,float>::end(valid_var_map)._M_node;
  if ( std::operator!=((const std::_Rb_tree_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 64), &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,float>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,float> > *const)(v2 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v5->second;
  }
  else
  {
    result = 0.0;
  }
  if ( v10 == (char *)v2 )
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

// Line 341: range 0000000015CAE882-0000000015CAEF94
__int64 __fastcall PlayerRegionalPlayComp::setVarValue(PlayerRegionalPlayComp *const this, uint32_t type, __m128 value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __m128i v6; // xmm0
  std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  char *v18; // rsi
  std::map<unsigned int,float>::mapped_type *v19; // rax
  float *v20; // rdx
  char v21; // cl
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  BaseRegionalPlay *v24; // rax
  BaseRegionalPlay *v25; // rax
  std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rcx
  __int64 result; // rax
  float new_value; // [rsp+2Ch] [rbp-E4h]
  float max_value; // [rsp+30h] [rbp-E0h]
  float min_value; // [rsp+34h] [rbp-DCh]
  std::map<unsigned int,float> *valid_var_map; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v39; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v40; // [rsp+60h] [rbp-B0h] BYREF
  char v41[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 8 type:340 48 4 9 value:340 64 16 12 play_ptr:342";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::setVarValue;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = type;
  value = (__m128)value.m128_u32[0];
  *(_DWORD *)(v3 + 48) = value.m128_i32[0];
  PlayerRegionalPlayComp::findRegionalPlayPtrByVarType(
    (const PlayerRegionalPlayComp *const)(v3 + 64),
    (__int64)this,
    *(_DWORD *)(v3 + 32));
  if ( std::operator==<BaseRegionalPlay>(0LL, (const std::shared_ptr<BaseRegionalPlay> *)(v3 + 64))
    || (v7 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
        !BaseRegionalPlay::isValidVarType(v7, *(_DWORD *)(v3 + 32))) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/regional_play/player_regional_play_comp.cpp",
      "setVarValue",
      345);
    v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v40,
           (const char (*)[45])"[REGIONAL_PLAY] play_ptr_ invalid, var_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v40);
    v10 = -1;
  }
  else
  {
    v11 = (unsigned __int64)std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    v12 = *(_QWORD *)v11 + 24LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(*(_QWORD *)v11 + 24LL);
    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD))v12)(v11, *(unsigned int *)(v3 + 32)) != 1 )
    {
      v10 = -1;
    }
    else
    {
      v13 = (unsigned __int64)std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(v13);
      v14 = *(_QWORD *)v13 + 32LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(*(_QWORD *)v13 + 32LL);
      *(double *)v6.m128i_i64 = (*(double (__fastcall **)(unsigned __int64, _QWORD))v14)(
                                  v13,
                                  *(unsigned int *)(v3 + 32));
      max_value = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      v15 = (unsigned __int64)std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v15);
      v16 = *(_QWORD *)v15 + 40LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(*(_QWORD *)v15 + 40LL);
      *(double *)v6.m128i_i64 = (*(double (__fastcall **)(unsigned __int64, _QWORD))v16)(
                                  v15,
                                  *(unsigned int *)(v3 + 32));
      min_value = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      if ( min_value < max_value )
      {
        new_value = *(float *)(v3 + 48);
        if ( new_value <= max_value )
        {
          if ( min_value > *(float *)(v3 + 48) )
            new_value = min_value;
        }
        else
        {
          new_value = max_value;
        }
        valid_var_map = PlayerRegionalPlayComp::getValidVarMap(this);
        v18 = (char *)(v3 + 32);
        v19 = std::map<unsigned int,float>::operator[](
                valid_var_map,
                (const std::map<unsigned int,float>::key_type *)(v3 + 32));
        v20 = v19;
        v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
        if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
        {
          LOBYTE(v18) = v21 != 0;
          __asan_report_store4(v19, v18, (_BYTE)v19);
        }
        *v20 = new_value;
        v22 = (unsigned __int64)std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8(v22);
        v23 = *(_QWORD *)v22 + 56LL;
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8(*(_QWORD *)v22 + 56LL);
        (*(void (__fastcall **)(unsigned __int64, _QWORD))v23)(v22, *(unsigned int *)(v3 + 32));
        v24 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( BaseRegionalPlay::checkCanDestory(v24) )
        {
          v25 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          BaseRegionalPlay::disable(v25);
          v26 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          BaseRegionalPlay::getPlayName[abi:cxx11]((std::string *)&v40, v26);
          std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::erase(
            &this->play_ptr_map_,
            (const std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::key_type *)&v40);
          std::string::~string(&v40);
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/regional_play/player_regional_play_comp.cpp",
            "setVarValue",
            378);
          v27 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v39,
                  (const char (*)[47])"[REGIONAL_PLAY] setVarValue destory play_name:");
          v28 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          BaseRegionalPlay::getPlayName[abi:cxx11]((std::string *)&v40, v28);
          v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)&v40);
          v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])" var_type:");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v30,
                  (const unsigned int *)(v3 + 32));
          v32 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])" value:");
          v33 = common::milog::MiLogStream::operator<<<float,(float *)0>(v32, (const float *)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v33, this->player_);
          std::string::~string(&v40);
          common::milog::MiLogStream::~MiLogStream(&v39);
        }
        v10 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/regional_play/player_regional_play_comp.cpp",
          "setVarValue",
          357);
        v17 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v40,
                (const char (*)[58])"[REGIONAL_PLAY] max_vlaue or min_value invalid, var_type:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v40);
        v10 = -1;
      }
    }
  }
  std::shared_ptr<BaseRegionalPlay>::~shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)(v3 + 64));
  result = v10;
  if ( v41 == (char *)v3 )
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

// Line 384: range 0000000015CAEF96-0000000015CAF149
__int64 __fastcall PlayerRegionalPlayComp::addVarValue(
        PlayerRegionalPlayComp *const this,
        uint32_t type,
        float add_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __m128i v6; // xmm0
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  __m128 v9; // xmm0
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 add_value:383";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::addVarValue;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(float *)(v3 + 32) = add_value;
  v6 = 0LL;
  if ( *(float *)(v3 + 32) > 0.0 )
  {
    *(float *)v6.m128i_i32 = PlayerRegionalPlayComp::getVarValue(this, type);
    v9 = (__m128)_mm_cvtsi32_si128(_mm_cvtsi128_si32(v6));
    v9.m128_f32[0] = SAFE_ADD<float,float>(v9.m128_f32[0], *(float *)(v3 + 32));
    result = PlayerRegionalPlayComp::setVarValue(this, type, v9);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/player_regional_play_comp.cpp",
      "addVarValue",
      387);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v10,
           (const char (*)[36])"[REGIONAL_PLAY] add_value invalid: ");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v7, (const float *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0xFFFFFFFFLL;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 395: range 0000000015CAF14A-0000000015CAF2F7
__int64 __fastcall PlayerRegionalPlayComp::subVarValue(
        PlayerRegionalPlayComp *const this,
        uint32_t type,
        float sub_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __m128i v6; // xmm0
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  __m128 v9; // xmm0
  float old_value; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 sub_value:394";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::subVarValue;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(float *)(v3 + 32) = sub_value;
  v6 = 0LL;
  if ( *(float *)(v3 + 32) > 0.0 )
  {
    *(float *)v6.m128i_i32 = PlayerRegionalPlayComp::getVarValue(this, type);
    old_value = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
    v9 = (__m128)LODWORD(old_value);
    v9.m128_f32[0] = old_value - *(float *)(v3 + 32);
    result = PlayerRegionalPlayComp::setVarValue(this, type, v9);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/player_regional_play_comp.cpp",
      "subVarValue",
      398);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v11,
           (const char (*)[36])"[REGIONAL_PLAY] sub_value invalid: ");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v7, (const float *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 406: range 0000000015CAF2F8-0000000015CAF526
__int64 __fastcall PlayerRegionalPlayComp::strictSubVarValue(
        PlayerRegionalPlayComp *const this,
        uint32_t type,
        float sub_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __m128i v6; // xmm0
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  __m128 v9; // xmm0
  float old_value; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 sub_value:405";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::strictSubVarValue;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(float *)(v3 + 32) = sub_value;
  v6 = 0LL;
  if ( *(float *)(v3 + 32) > 0.0 )
  {
    *(float *)v6.m128i_i32 = PlayerRegionalPlayComp::getVarValue(this, type);
    old_value = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
    if ( *(float *)(v3 + 32) <= old_value )
    {
      v9 = (__m128)LODWORD(old_value);
      v9.m128_f32[0] = old_value - *(float *)(v3 + 32);
      result = PlayerRegionalPlayComp::setVarValue(this, type, v9);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "strictSubVarValue",
        415);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v11,
        (const char (*)[33])"[REGIONAL_PLAY] not enough value");
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/player_regional_play_comp.cpp",
      "strictSubVarValue",
      409);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v11,
           (const char (*)[36])"[REGIONAL_PLAY] sub_value invalid: ");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v7, (const float *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 423: range 0000000015CAF528-0000000015CAF5DE
std::map<unsigned int,float> *__cdecl PlayerRegionalPlayComp::getValidVarMap(PlayerRegionalPlayComp *const this)
{
  PlayerMpComp *MpComp; // rax
  PlayerSceneComp *SceneComp; // rax
  char v3; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  if ( !PlayerMpComp::isInMpMode(MpComp) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    v3 = 1;
  else
LABEL_8:
    v3 = 0;
  if ( v3 )
    return &this->mp_var_map_;
  else
    return &this->var_map_;
};

// Line 433: range 0000000015CAF5E0-0000000015CAF895
uint32_t __cdecl PlayerRegionalPlayComp::getLastPlayType(const PlayerRegionalPlayComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t play_type; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t result; // eax
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 config_ptr:438";
  *(_QWORD *)(v1 + 16) = PlayerRegionalPlayComp::getLastPlayType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( (unsigned __int8)std::string::empty(&this->last_play_name_) )
  {
    play_type = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
    JsonConfigMgr::findRegionalPlayConfig(
      (const JsonConfigMgr *const)(v1 + 32),
      (const std::string *)&v5->design_config.json_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v10);
    if ( std::operator==<data::ConfigRegionalPlayBase>(
           0LL,
           (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "getLastPlayType",
        441);
      v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v11,
             (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
      v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &this->last_play_name_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v7, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v11);
      play_type = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v8->play_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->play_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->play_type);
      }
      play_type = v8->play_type;
    }
    std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v1 + 32));
  }
  result = play_type;
  if ( v12 == (char *)v1 )
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

// Line 448: range 0000000015CAF896-0000000015CAFE8F
void __cdecl PlayerRegionalPlayComp::onEnterScene(
        PlayerRegionalPlayComp *const this,
        ScenePtr *p_scene_ptr,
        bool is_reenter)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerMpComp *MpComp; // rax
  Player *v7; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  PlayerPolygonComp *PolygonComp; // rax
  JsonConfigMgr *p_json_config_mgr; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  BaseRegionalPlay *v16; // rax
  std::set<std::string>::iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::set<std::string>::iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  std::set<std::string> *__for_range; // [rsp+30h] [rbp-160h]
  const std::string *play_name; // [rsp+38h] [rbp-158h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-150h] BYREF
  char v22[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 16 20 owner_player_ptr:460 80 16 12 play_ptr:481 112 32 13 play_name:473 176 48 17 play_name_set:472";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::onEnterScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  if ( !std::operator==<Scene>(0LL, p_scene_ptr) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    MpComp = Player::getMpComp(this->player_);
    PlayerMpComp::isInMpMode(MpComp);
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
    Scene::getOwnPlayer((const Scene *const)(v3 + 48));
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 48)) )
    {
      proto::DeathZoneInfoNotify::DeathZoneInfoNotify((proto::DeathZoneInfoNotify *const)(v3 + 176));
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      RegionalPlayComp = Player::getRegionalPlayComp(v7);
      PlayerRegionalPlayComp::fillDeathZoneDataNotify(RegionalPlayComp, (proto::DeathZoneInfoNotify *)(v3 + 176));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 176));
      proto::DeathZoneInfoNotify::~DeathZoneInfoNotify((proto::DeathZoneInfoNotify *const)(v3 + 176));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    PolygonComp = Player::getPolygonComp(this->player_);
    PlayerPolygonComp::updatePolygon(PolygonComp, 0LL);
    PlayerRegionalPlayComp::getResumeRegionalPlaySet[abi:cxx11]((std::set<std::string> *)(v3 + 176), this);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 80));
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80))->design_config.json_config_mgr;
    v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
    SceneId = Scene::getSceneId(v11);
    JsonConfigMgr::findRegionalPlayNameBySceneId[abi:cxx11]((std::string *)(v3 + 112), p_json_config_mgr, SceneId);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
    if ( (unsigned __int8)std::string::empty(v3 + 112) != 1 )
      std::set<std::string>::insert(
        (std::set<std::string> *const)(v3 + 176),
        (const std::set<std::string>::value_type *)(v3 + 112));
    __for_range = (std::set<std::string> *)(v3 + 176);
    __for_begin._M_node = std::set<std::string>::begin((const std::set<std::string> *const)(v3 + 176))._M_node;
    __for_end._M_node = std::set<std::string>::end((const std::set<std::string> *const)(v3 + 176))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      play_name = std::_Rb_tree_const_iterator<std::string>::operator*(&__for_begin);
      PlayerRegionalPlayComp::getOrCreateRegionalPlayPtr(
        (PlayerRegionalPlayComp *const)(v3 + 80),
        (const std::string *)this);
      if ( std::operator==<BaseRegionalPlay>(0LL, (const std::shared_ptr<BaseRegionalPlay> *)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/regional_play/player_regional_play_comp.cpp",
          "onEnterScene",
          484);
        v13 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                &v21,
                (const char (*)[62])"[REGIONAL_PLAY] getOrCreateRegionalPlayPtr failed, play_name:");
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, play_name);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v14, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v21);
      }
      else
      {
        v15 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        if ( !BaseRegionalPlay::getIsEnabled(v15) )
        {
          v16 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
          BaseRegionalPlay::enable(v16);
        }
      }
      std::shared_ptr<BaseRegionalPlay>::~shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)(v3 + 80));
      std::_Rb_tree_const_iterator<std::string>::operator++(&__for_begin);
    }
    std::string::~string((void *)(v3 + 112));
    std::set<std::string>::~set((std::set<std::string> *const)(v3 + 176));
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 48));
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 495: range 0000000015CAFE90-0000000015CB0240
void __cdecl PlayerRegionalPlayComp::onLeaveScene(PlayerRegionalPlayComp *const this)
{
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  BaseRegionalPlay *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *__for_range; // [rsp+20h] [rbp-E0h]
  std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > *__in; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > >::type *play_name; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > >::type *play_ptr; // [rsp+38h] [rbp-C8h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-C0h] BYREF
  char v15[160]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = (std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 16 play_ptr_map:496";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerRegionalPlayComp::onLeaveScene;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::map(v1 + 1, &this->play_ptr_map_);
  __for_range = v1 + 1;
  __for_begin._M_node = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::begin(v1 + 1)._M_node;
  __for_end._M_node = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::end(v1 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<BaseRegionalPlay>>>::operator*(&__for_begin);
    play_name = std::get<0ul,std::string const,std::shared_ptr<BaseRegionalPlay>>(__in);
    play_ptr = std::get<1ul,std::string const,std::shared_ptr<BaseRegionalPlay>>(__in);
    if ( std::operator==<BaseRegionalPlay>(0LL, play_ptr) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "onLeaveScene",
        501);
      v4 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v14,
             (const char (*)[49])"[REGIONAL_PLAY] play_ptr_ is nullptr, play_name:");
      v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, play_name);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      v6 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      BaseRegionalPlay::disable(v6);
      std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::erase(&this->play_ptr_map_, play_name);
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "onLeaveScene",
        506);
      v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v14,
             (const char (*)[48])"[REGIONAL_PLAY] onLeaveScene destory play_name:");
      v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, play_name);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<BaseRegionalPlay>>>::operator++(&__for_begin);
  }
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::~map(v1 + 1);
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 511: range 0000000015CB0242-0000000015CB0937
void __cdecl PlayerRegionalPlayComp::onChangePolygon(PlayerRegionalPlayComp *const this, uint32_t cur_polygon_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  BaseRegionalPlay *v10; // rax
  BaseRegionalPlay *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  BaseRegionalPlay *v17; // rax
  uint32_t death_zone_id; // [rsp+1Ch] [rbp-134h]
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *__for_range; // [rsp+30h] [rbp-120h]
  std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > *__in; // [rsp+38h] [rbp-118h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > >::type *play_name; // [rsp+40h] [rbp-110h]
  std::tuple_element<1,std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > >::type *play_ptr; // [rsp+48h] [rbp-108h]
  char v25[256]; // [rsp+50h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 12 play_ptr:542 80 32 13 play_name:539 144 48 16 play_ptr_map:521";
  *(_QWORD *)(v2 + 16) = PlayerRegionalPlayComp::onChangePolygon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 48));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  death_zone_id = JsonConfigMgr::findDeathZoneIdByPolygonId(&v5->design_config.json_config_mgr, cur_polygon_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_death_zone_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_death_zone_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_death_zone_id_);
  }
  if ( death_zone_id != this->cur_death_zone_id_ )
  {
    this->cur_death_zone_id_ = death_zone_id;
    PlayerRegionalPlayComp::notifyPlayerDeathZone(this);
  }
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::map(
    (std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)(v2 + 144),
    &this->play_ptr_map_);
  __for_range = (std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *)(v2 + 144);
  __for_begin._M_node = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::begin((std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)(v2 + 144))._M_node;
  __for_end._M_node = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::end((std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)(v2 + 144))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<BaseRegionalPlay>>>::operator*(&__for_begin);
    play_name = std::get<0ul,std::string const,std::shared_ptr<BaseRegionalPlay>>(__in);
    play_ptr = std::get<1ul,std::string const,std::shared_ptr<BaseRegionalPlay>>(__in);
    if ( std::operator==<BaseRegionalPlay>(0LL, play_ptr) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 80),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "onChangePolygon",
        526);
      v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             (common::milog::MiLogStream *const)(v2 + 80),
             (const char (*)[49])"[REGIONAL_PLAY] play_ptr_ is nullptr, play_name:");
      v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, play_name);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_21:
      operator<<(v7, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 80));
      goto LABEL_22;
    }
    v8 = (unsigned __int64)std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8);
    v9 = *(_QWORD *)v8 + 72LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)v8 + 72LL);
    (*(void (__fastcall **)(unsigned __int64, _QWORD))v9)(v8, cur_polygon_id);
    v10 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
    if ( BaseRegionalPlay::checkCanDestory(v10) )
    {
      v11 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      BaseRegionalPlay::disable(v11);
      std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::erase(&this->play_ptr_map_, play_name);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 80),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "onChangePolygon",
        534);
      v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              (common::milog::MiLogStream *const)(v2 + 80),
              (const char (*)[51])"[REGIONAL_PLAY] onChangePolygon destory play_name:");
      v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, play_name);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_21;
    }
LABEL_22:
    std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<BaseRegionalPlay>>>::operator++(&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 48));
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  JsonConfigMgr::findRegionalPlayNameByPolygonId[abi:cxx11](
    (std::string *)(v2 + 80),
    &v13->design_config.json_config_mgr,
    cur_polygon_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 48));
  if ( (unsigned __int8)std::string::empty(v2 + 80) != 1
    && PlayerRegionalPlayComp::checkCanCreateRegionalPlay(this, (const std::string *)(v2 + 80)) )
  {
    PlayerRegionalPlayComp::getOrCreateRegionalPlayPtr(
      (PlayerRegionalPlayComp *const)(v2 + 48),
      (const std::string *)this);
    if ( std::operator!=<BaseRegionalPlay>(0LL, (const std::shared_ptr<BaseRegionalPlay> *)(v2 + 48)) )
    {
      v15 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( !BaseRegionalPlay::getIsEnabled(v15) )
      {
        v17 = std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        BaseRegionalPlay::enable(v17);
      }
    }
    std::shared_ptr<BaseRegionalPlay>::~shared_ptr((std::shared_ptr<BaseRegionalPlay> *const)(v2 + 48));
  }
  std::string::~string((void *)(v2 + 80));
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::~map((std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)(v2 + 144));
  if ( v25 == (char *)v2 )
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
};

// Line 551: range 0000000015CB0938-0000000015CB0FC6
void __cdecl PlayerRegionalPlayComp::onRebornTeam(PlayerRegionalPlayComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  bool *p_is_can_be_reset_after_respawn; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  std::vector<data::ConfigRegionalPlayVarData>::iterator __for_begin_0; // [rsp+20h] [rbp-140h] BYREF
  std::vector<data::ConfigRegionalPlayVarData>::iterator __for_end_0; // [rsp+28h] [rbp-138h] BYREF
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *__for_range; // [rsp+30h] [rbp-130h]
  std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > *__in; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > >::type *play_name; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,std::pair<const std::string,std::shared_ptr<BaseRegionalPlay> > >::type *play_ptr; // [rsp+48h] [rbp-118h]
  std::vector<data::ConfigRegionalPlayVarData> *__for_range_0; // [rsp+50h] [rbp-110h]
  const data::ConfigRegionalPlayVarData *v23; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v24; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+90h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 12 var_type:571 48 16 14 config_ptr:560 80 48 16 play_ptr_map:552";
  *(_QWORD *)(v1 + 16) = PlayerRegionalPlayComp::onRebornTeam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::map(
    (std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)(v1 + 80),
    &this->play_ptr_map_);
  __for_range = (std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *)(v1 + 80);
  __for_begin._M_node = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::begin((std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)(v1 + 80))._M_node;
  __for_end._M_node = std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::end((std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)(v1 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<BaseRegionalPlay>>>::operator*(&__for_begin);
    play_name = std::get<0ul,std::string const,std::shared_ptr<BaseRegionalPlay>>(__in);
    play_ptr = std::get<1ul,std::string const,std::shared_ptr<BaseRegionalPlay>>(__in);
    if ( std::operator==<BaseRegionalPlay>(0LL, play_ptr) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "onRebornTeam",
        557);
      v4 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v25,
             (const char (*)[48])"[REGIONAL_PLAY] play_ptr is nullptr, play_name:");
      v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, play_name);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v5, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
      JsonConfigMgr::findRegionalPlayConfig(
        (const JsonConfigMgr *const)(v1 + 48),
        (const std::string *)&v6->design_config.json_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( std::operator==<data::ConfigRegionalPlayBase>(
             0LL,
             (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v1 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/regional_play/player_regional_play_comp.cpp",
          "onRebornTeam",
          563);
        v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
               &v25,
               (const char (*)[58])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name:");
        v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, play_name);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v8, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      else
      {
        __for_range_0 = &std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48))->var_list;
        __for_begin_0._M_current = std::vector<data::ConfigRegionalPlayVarData>::begin(__for_range_0)._M_current;
        __for_end_0._M_current = std::vector<data::ConfigRegionalPlayVarData>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          v23 = __gnu_cxx::__normal_iterator<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>::operator*(&__for_begin_0);
          p_is_can_be_reset_after_respawn = &v23->is_can_be_reset_after_respawn;
          if ( *(_BYTE *)(((unsigned __int64)p_is_can_be_reset_after_respawn >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_can_be_reset_after_respawn & 7) >= *(_BYTE *)(((unsigned __int64)p_is_can_be_reset_after_respawn >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_can_be_reset_after_respawn);
          }
          if ( v23->is_can_be_reset_after_respawn )
          {
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            *(_DWORD *)(v1 + 32) = v23->var_type;
            PlayerRegionalPlayComp::setVarValue(this, *(_DWORD *)(v1 + 32), (__m128)0LL);
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/regional_play/player_regional_play_comp.cpp",
              "onRebornTeam",
              573);
            v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    &v25,
                    (const char (*)[24])"onRebornTeam reset var:");
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v10,
                    (const unsigned int *)(v1 + 32));
            v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v11,
                    (const char (*)[12])" play_name:");
            v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, play_name);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v13, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v25);
          }
          __gnu_cxx::__normal_iterator<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>::operator++(&__for_begin_0);
        }
      }
      std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v1 + 48));
    }
    std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<BaseRegionalPlay>>>::operator++(&__for_begin);
  }
  std::map<std::string,std::shared_ptr<BaseRegionalPlay>>::~map((std::map<std::string,std::shared_ptr<BaseRegionalPlay>> *const)(v1 + 80));
  if ( v26 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 580: range 0000000015CB0FC8-0000000015CB18D0
bool __cdecl PlayerRegionalPlayComp::checkCanCreateRegionalPlay(
        PlayerRegionalPlayComp *const this,
        const std::string *play_name)
{
  bool v2; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rcx
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  PlayerPolygonComp *PolygonComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Player *v15; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // r15d
  bool result; // al
  const DeathZoneData *death_zone_data_ptr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 18 cur_polygon_id:603 48 4 17 death_zone_id:604 64 16 14 config_ptr:581 96 16 13 scene_pt"
                        "r:587 128 16 20 owner_player_ptr:597";
  *(_QWORD *)(v3 + 16) = PlayerRegionalPlayComp::checkCanCreateRegionalPlay;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  JsonConfigMgr::findRegionalPlayConfig(
    (const JsonConfigMgr *const)(v3 + 64),
    (const std::string *)&v6->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( !std::operator==<data::ConfigRegionalPlayBase>(
          0LL,
          (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v3 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "checkCanCreateRegionalPlay",
        590);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v23,
             (const char (*)[34])"[REGIONAL_PLAY] cur scene is null");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v2 = 0;
      goto LABEL_40;
    }
    v10 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v10->play_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->play_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->play_type);
    }
    if ( v10->play_type != DeathZone_0 )
      goto LABEL_39;
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    Scene::getOwnPlayer((const Scene *const)(v3 + 128));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "checkCanCreateRegionalPlay",
        600);
      v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v23,
              (const char (*)[41])"[REGIONAL_PLAY] owner_player_ptr is null");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      PolygonComp = Player::getPolygonComp(this->player_);
      *(_DWORD *)(v3 + 32) = PlayerPolygonComp::getCurPolygonId(PolygonComp);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      *(_DWORD *)(v3 + 48) = JsonConfigMgr::findDeathZoneIdByPolygonId(
                               &v13->design_config.json_config_mgr,
                               *(_DWORD *)(v3 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( *(_DWORD *)(v3 + 48) )
      {
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        RegionalPlayComp = Player::getRegionalPlayComp(v15);
        death_zone_data_ptr = PlayerRegionalPlayComp::findDeathZoneData(RegionalPlayComp, *(_DWORD *)(v3 + 48));
        if ( death_zone_data_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&death_zone_data_ptr->is_open >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)death_zone_data_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&death_zone_data_ptr->is_open >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load1(&death_zone_data_ptr->is_open);
          }
          if ( death_zone_data_ptr->is_open )
          {
            v19 = 1;
LABEL_38:
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
            if ( v19 != 1 )
            {
LABEL_40:
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
              goto LABEL_41;
            }
LABEL_39:
            v2 = 1;
            goto LABEL_40;
          }
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/regional_play/player_regional_play_comp.cpp",
            "checkCanCreateRegionalPlay",
            618);
          v18 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
                  &v23,
                  (const char (*)[82])"[REGIONAL_PLAY] death zone is closed, cannot create regional play, death_zone_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/regional_play/player_regional_play_comp.cpp",
            "checkCanCreateRegionalPlay",
            613);
          v17 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v23,
                  (const char (*)[57])"[REGIONAL_PLAY] findDeathZoneData failed, death_zone_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/regional_play/player_regional_play_comp.cpp",
          "checkCanCreateRegionalPlay",
          607);
        v14 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v23,
                (const char (*)[55])"[REGIONAL_PLAY] death_zone_id is zero, cur_polygon_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
    }
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v2 = 0;
    v19 = 0;
    goto LABEL_38;
  }
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/regional_play/player_regional_play_comp.cpp",
    "checkCanCreateRegionalPlay",
    584);
  v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
         &v23,
         (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
  v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, play_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v8, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v23);
  v2 = 0;
LABEL_41:
  std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v3 + 64));
  result = v2;
  if ( v24 == (char *)v3 )
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

// Line 626: range 0000000015CB1AEE-0000000015CB258E
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PlayerRegionalPlayComp::setDeathZoneSwitch(
        PlayerRegionalPlayComp *const this,
        ScenePtr *p_scene_ptr,
        uint32_t death_zone_id,
        bool is_open)
{
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rcx
  unsigned int v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::const_iterator *p_for_end; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> >::pointer v15; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> >::pointer v21; // rdx
  char v22; // cl
  Scene *v23; // r15
  unsigned __int64 v24; // rsi OVERLAPPED
  char *v25; // rsi
  int32_t v26; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  char v28; // cl
  __int64 v29; // rax
  char v30; // dl
  bool v31; // dl
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  char v34; // cl
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v35; // rax
  Scene *v36; // rax
  uint32_t BlockGroupComp; // eax
  Group *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rcx
  __int64 result; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-110h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-108h] BYREF
  const data::ConfigDeathZone *death_zone_config_ptr; // [rsp+40h] [rbp-100h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v51; // [rsp+50h] [rbp-F0h] BYREF
  char v52[208]; // [rsp+70h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 17 death_zone_id:625 64 8 8 iter:639 96 16 11 evt_ptr:671 128 16 13 group_ptr:679";
  *(_QWORD *)(v5 + 16) = PlayerRegionalPlayComp::setDeathZoneSwitch;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  *(_DWORD *)(v5 + 48) = death_zone_id;
  if ( std::operator==<Scene>(0LL, p_scene_ptr) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/player_regional_play_comp.cpp",
      "setDeathZoneSwitch",
      629);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v51,
           (const char (*)[37])"[REGIONAL_PLAY] scene_ptr is nullptr");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v51);
    v9 = -1;
    goto LABEL_43;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 128));
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
  death_zone_config_ptr = JsonConfigMgr::findDeathZoneConfig(&v10->design_config.json_config_mgr, *(_DWORD *)(v5 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 128));
  if ( !death_zone_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/player_regional_play_comp.cpp",
      "setDeathZoneSwitch",
      635);
    v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
            &v51,
            (const char (*)[59])"[REGIONAL_PLAY] findDeathZoneConfig failed, death_zone_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  *(std::map<unsigned int,DeathZoneData>::iterator *)(v5 + 64) = std::map<unsigned int,DeathZoneData>::find(
                                                                   &this->death_zone_map_,
                                                                   (const std::map<unsigned int,DeathZoneData>::key_type *)(v5 + 48));
  __for_end._M_current = (const unsigned int *)std::map<unsigned int,DeathZoneData>::end(&this->death_zone_map_)._M_node;
  p_for_end = &__for_end;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> >::_Self *)(v5 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/player_regional_play_comp.cpp",
      "setDeathZoneSwitch",
      642);
    v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v51,
            (const char (*)[39])"[REGIONAL_PLAY] invalid death_zone_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v14, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v51);
    v9 = -1;
  }
  else
  {
    v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> > *const)(v5 + 64));
    p_is_open = &v15->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( is_open == v15->second.is_open )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "setDeathZoneSwitch",
        647);
      v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v51,
              (const char (*)[31])"[REGIONAL_PLAY] death_zone_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 48));
      v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v18, (const char (*)[21])off_259CCAE0);
      v20 = common::milog::MiLogStream::operator<<(v19, is_open);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v20, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v51);
      v9 = 0;
    }
    else
    {
      v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DeathZoneData> > *const)(v5 + 64));
      v22 = *(_BYTE *)(((unsigned __int64)&v21->second.is_open >> 3) + 0x7FFF8000);
      if ( v22 != 0 && (((unsigned __int8)v21 + 8) & 7) >= v22 )
      {
        LOBYTE(p_for_end) = v22 != 0;
        __asan_report_store1(&v21->second.is_open, p_for_end, v21);
      }
      v21->second.is_open = is_open;
      v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
      v24 = *(unsigned int *)(v5 + 48) | v4 & 0xFFFFFF0000000000LL | ((unsigned __int64)is_open << 32);
      std::function<ForeachPolicy ()(Player &)>::function<PlayerRegionalPlayComp::setDeathZoneSwitch(std::shared_ptr<Scene>,unsigned int,bool)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v51,
        (PlayerRegionalPlayComp::setDeathZoneSwitch::<lambda(Player&)>)v24);
      Scene::foreachPlayer(v23, (std::function<ForeachPolicy(Player&)> *)&v51);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v51);
      PlayerRegionalPlayComp::broadcastDeathZoneData(this);
      EventUtil::createEvent((data::EventType)(v5 + 96));
      v25 = (char *)(v5 + 96);
      if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v5 + 96)) )
      {
        v26 = *(_DWORD *)(v5 + 48);
        v27 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        v28 = *(_BYTE *)(((unsigned __int64)&v27->param1 >> 3) + 0x7FFF8000);
        if ( v28 != 0 && (char)((((_BYTE)v27 + 44) & 7) + 3) >= v28 )
        {
          LOBYTE(v25) = v28 != 0;
          __asan_report_store4(&v27->param1, v25, (_BYTE)v27);
        }
        v27->param1 = v26;
        v29 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        v30 = *(_BYTE *)(((unsigned __int64)(v29 + 48) >> 3) + 0x7FFF8000);
        LOBYTE(v25) = v30 != 0;
        v31 = v30 != 0 && v30 <= 3;
        if ( v31 )
          v29 = __asan_report_store4(v29 + 48, v25, v31);
        *(_DWORD *)(v29 + 48) = is_open;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        v33 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        v34 = *(_BYTE *)(((unsigned __int64)&v33->uid >> 3) + 0x7FFF8000);
        if ( v34 != 0 && (char)((((_BYTE)v33 + 60) & 7) + 3) >= v34 )
        {
          LOBYTE(v25) = v34 != 0;
          __asan_report_store4(&v33->uid, v25, (_BYTE)v33);
        }
        v33->uid = Uid;
        __for_range = &death_zone_config_ptr->group_list;
        __for_begin._M_current = std::vector<unsigned int>::begin(&death_zone_config_ptr->group_list)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v35 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v35);
          }
          v36 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
          BlockGroupComp = (unsigned int)Scene::getBlockGroupComp(v36);
          SceneBlockGroupComp::getActiveGroup((SceneBlockGroupComp *const)(v5 + 128), BlockGroupComp);
          if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v5 + 128)) )
          {
            v38 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
            Group::handleEvent(v38, (EventPtr *)(v5 + 96));
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v5 + 128));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
      }
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/regional_play/player_regional_play_comp.cpp",
        "setDeathZoneSwitch",
        686);
      v39 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v51,
              (const char (*)[50])"[REGIONAL_PLAY] setDeathZoneSwitch death_zone_id:");
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v5 + 48));
      v41 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v40, (const char (*)[10])" is_open:");
      v42 = common::milog::MiLogStream::operator<<(v41, is_open);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v42, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v51);
      v9 = 0;
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v5 + 96));
    }
  }
LABEL_43:
  result = v9;
  if ( v52 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 652: range 0000000015CB18D2-0000000015CB1AEC
ForeachPolicy __cdecl PlayerRegionalPlayComp::setDeathZoneSwitch(std::shared_ptr<Scene>,unsigned int,bool)::{lambda(Player &)#1}::operator()(
        const PlayerRegionalPlayComp::setDeathZoneSwitch::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  DeathZoneRegionalPlay *p_is_open; // rdi
  bool is_open; // cl
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  ForeachPolicy result; // eax
  char v10[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 23 death_zone_play_ptr:654";
  *(_QWORD *)(v2 + 16) = PlayerRegionalPlayComp::setDeathZoneSwitch(std::shared_ptr<Scene>,unsigned int,bool)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getRegionalPlayComp(player);
  PlayerRegionalPlayComp::findRegionalPlay<DeathZoneRegionalPlay>((PlayerRegionalPlayComp *const)(v2 + 32));
  if ( std::operator!=<DeathZoneRegionalPlay>(0LL, (const std::shared_ptr<DeathZoneRegionalPlay> *)(v2 + 32)) )
  {
    p_is_open = std::__shared_ptr_access<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DeathZoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)__closure + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&__closure->__is_open >> 3) + 0x7FFF8000) )
    {
      p_is_open = (DeathZoneRegionalPlay *)&__closure->__is_open;
      __asan_report_load1(&__closure->__is_open);
    }
    is_open = __closure->__is_open;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      p_is_open = (DeathZoneRegionalPlay *)__closure;
      __asan_report_load4(__closure);
    }
    DeathZoneRegionalPlay::onDeathZoneStatusChange(p_is_open, __closure->__death_zone_id, is_open);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)__closure + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&__closure->__is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&__closure->__is_open);
    }
    if ( __closure->__is_open )
    {
      RegionalPlayComp = Player::getRegionalPlayComp(player);
      PlayerRegionalPlayComp::tryStartDeathZone(RegionalPlayComp);
    }
  }
  std::shared_ptr<DeathZoneRegionalPlay>::~shared_ptr((std::shared_ptr<DeathZoneRegionalPlay> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
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

// Line 691: range 0000000015CB2590-0000000015CB26E8
const DeathZoneData *__fastcall PlayerRegionalPlayComp::findDeathZoneData(
        const PlayerRegionalPlayComp *const this,
        uint32_t death_zone_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const DeathZoneData *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,DeathZoneData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 death_zone_id:690 64 8 8 iter:692";
  *(_QWORD *)(v2 + 16) = PlayerRegionalPlayComp::findDeathZoneData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = death_zone_id;
  *(std::map<unsigned int,DeathZoneData>::const_iterator *)(v2 + 64) = std::map<unsigned int,DeathZoneData>::find(
                                                                         &this->death_zone_map_,
                                                                         (const std::map<unsigned int,DeathZoneData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,DeathZoneData>::end(&this->death_zone_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,DeathZoneData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,DeathZoneData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,DeathZoneData> > *const)(v2 + 64))->second;
  }
  if ( v7 == (char *)v2 )
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

// Line 701: range 0000000015CB26EA-0000000015CB279D
void __cdecl PlayerRegionalPlayComp::fillDeathZoneDataNotify(
        const PlayerRegionalPlayComp *const this,
        proto::DeathZoneInfoNotify *notify)
{
  proto::DeathZoneInfo *v2; // rax
  std::map<unsigned int,DeathZoneData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,DeathZoneData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,DeathZoneData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,DeathZoneData> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,DeathZoneData> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,DeathZoneData> >::type *death_zone_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->death_zone_map_;
  __for_begin._M_node = std::map<unsigned int,DeathZoneData>::begin(&this->death_zone_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,DeathZoneData>::end(&this->death_zone_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,DeathZoneData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,DeathZoneData>(v6);
    death_zone_data = (std::tuple_element<1,const std::pair<unsigned int const,DeathZoneData> >::type *)std::get<1ul,unsigned int const,DeathZoneData>(v6);
    v2 = proto::DeathZoneInfoNotify::add_death_zone_info_list(notify);
    DeathZoneData::toClient(death_zone_data, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,DeathZoneData>>::operator++(&__for_begin);
  }
};
