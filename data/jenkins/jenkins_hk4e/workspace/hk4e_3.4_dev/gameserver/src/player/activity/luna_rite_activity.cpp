// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/luna_rite_activity.cpp

// Line 29: range 0000000014553D16-0000000014553EE7
int32_t __cdecl LunaRiteAreaInfo::fromBin(LunaRiteAreaInfo *const this, const proto::LunaRiteAreaBin *bin)
{
  uint32_t v2; // edx
  uint32_t v3; // ecx
  google::protobuf::uint32 v4; // esi
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  uint32_t v7; // ecx
  uint32_t v8; // edx

  v2 = proto::LunaRiteAreaBin::area_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->area_id = v2;
  v3 = proto::LunaRiteAreaBin::finish_battle_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_battle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_battle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_battle_id);
  }
  this->finish_battle_id = v3;
  v4 = proto::LunaRiteAreaBin::hint_status(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_status >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_status >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_status);
  }
  this->hint_status = v4;
  v5 = proto::LunaRiteAreaBin::sacrifice_list(bin);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->sacrifice_set, v5);
  v6 = proto::LunaRiteAreaBin::sacrifice_reward_list(bin);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->sacrifice_reward_set, v6);
  v7 = proto::LunaRiteAreaBin::chest_searching_num(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->chest_searching_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chest_searching_num >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chest_searching_num);
  }
  this->chest_searching_num = v7;
  v8 = proto::LunaRiteAreaBin::rune_searching_num(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->rune_searching_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rune_searching_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rune_searching_num);
  }
  this->rune_searching_num = v8;
  return 0;
};

// Line 41: range 0000000014553EE8-00000000145540B7
int32_t __cdecl LunaRiteAreaInfo::toBin(const LunaRiteAreaInfo *const this, proto::LunaRiteAreaBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::LunaRiteAreaBin::set_area_id(bin, this->area_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_battle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_battle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LunaRiteAreaBin::set_finish_battle_id(bin, this->finish_battle_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_status >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_status >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::LunaRiteAreaBin::set_hint_status(bin, this->hint_status);
  if ( *(_BYTE *)(((unsigned __int64)&this->chest_searching_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chest_searching_num >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LunaRiteAreaBin::set_chest_searching_num(bin, this->chest_searching_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->rune_searching_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rune_searching_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::LunaRiteAreaBin::set_rune_searching_num(bin, this->rune_searching_num);
  v2 = proto::LunaRiteAreaBin::mutable_sacrifice_list(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->sacrifice_set, v2);
  v3 = proto::LunaRiteAreaBin::mutable_sacrifice_reward_list(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->sacrifice_reward_set, v3);
  return 0;
};

// Line 53: range 00000000145540B8-00000000145541ED
int32_t __cdecl LunaRiteAreaInfo::toClient(const LunaRiteAreaInfo *const this, proto::LunaRiteAreaInfo *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::LunaRiteAreaInfo::set_area_id(proto, this->area_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_battle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_battle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LunaRiteAreaInfo::set_challenge_index(proto, this->finish_battle_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_status >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_status >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::LunaRiteAreaInfo::set_hint_status(proto, this->hint_status);
  v2 = proto::LunaRiteAreaInfo::mutable_sacrifice_list(proto);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->sacrifice_set, v2);
  v3 = proto::LunaRiteAreaInfo::mutable_sacrifice_reward_list(proto);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->sacrifice_reward_set, v3);
  return 0;
};

// Line 64: range 00000000145541EE-0000000014554342
int32_t __cdecl LunaRiteHintPoint::fromBin(LunaRiteHintPoint *const this, const proto::LunaRiteHintPointBin *bin)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx
  uint32_t v4; // ecx
  google::protobuf::uint32 v5; // edi

  v2 = proto::LunaRiteHintPointBin::group_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->group_id = v2;
  v3 = proto::LunaRiteHintPointBin::config_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = v3;
  v4 = proto::LunaRiteHintPointBin::area_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_id);
  }
  this->area_id = v4;
  v5 = proto::LunaRiteHintPointBin::type(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    v5 = (_DWORD)this + 28;
    __asan_report_store4(&this->type);
  }
  this->type = v5;
  return 0;
};

// Line 73: range 0000000014554344-0000000014554497
int32_t __cdecl LunaRiteHintPoint::toBin(const LunaRiteHintPoint *const this, proto::LunaRiteHintPointBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LunaRiteHintPointBin::set_group_id(bin, this->group_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LunaRiteHintPointBin::set_config_id(bin, this->config_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LunaRiteHintPointBin::set_area_id(bin, this->area_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LunaRiteHintPointBin::set_type(bin, this->type);
  return 0;
};

// Line 82: range 0000000014554498-00000000145545C3
int32_t __cdecl LunaRiteHintPoint::toClient(const LunaRiteHintPoint *const this, proto::LunaRiteHintPoint *proto)
{
  proto::Vector *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LunaRiteHintPoint::set_index(proto, this->index);
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LunaRiteHintPoint::set_area_id(proto, this->area_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LunaRiteHintPoint::set_type(proto, this->type);
  v2 = proto::LunaRiteHintPoint::mutable_pos(proto);
  Vector3::toClient(&this->pos, v2);
  return 0;
};

// Line 91: range 00000000145545C4-0000000014554D5B
int32_t __cdecl LunaRiteActivity::fromScheduleBin(LunaRiteActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t result; // eax
  LunaRiteAreaInfo *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t HintPointIndex; // ecx
  uint32_t v14; // edx
  uint32_t refresh_time; // ecx
  google::protobuf::RepeatedPtrField<proto::LunaRiteHintPointBin>::const_iterator __for_begin_0; // [rsp+10h] [rbp-110h] BYREF
  google::protobuf::RepeatedPtrField<proto::LunaRiteHintPointBin>::const_iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  const proto::LunaRiteScheduleBin *luna_rite_bin; // [rsp+20h] [rbp-100h]
  const google::protobuf::RepeatedPtrField<proto::LunaRiteAreaBin> *__for_range; // [rsp+28h] [rbp-F8h]
  const LuaConfigMgr *lua_config_mgr; // [rsp+30h] [rbp-F0h]
  const google::protobuf::RepeatedPtrField<proto::LunaRiteHintPointBin> *__for_range_0; // [rsp+38h] [rbp-E8h]
  const proto::LunaRiteHintPointBin *hint_point_bin; // [rsp+40h] [rbp-E0h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+48h] [rbp-D8h]
  LunaRiteHintPoint *hint_point; // [rsp+50h] [rbp-D0h]
  const proto::LunaRiteAreaBin *area_info_bin; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 group_id:109 48 4 13 config_id:110 64 8 7 key:117";
  *(_QWORD *)(v2 + 16) = LunaRiteActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  if ( proto::ActivityScheduleBin::detail_case(bin) == kLunaRiteBin )
  {
    std::map<unsigned int,LunaRiteAreaInfo>::clear(&this->area_info_map_);
    std::map<unsigned long,LunaRiteHintPoint>::clear(&this->hint_point_map_);
    if ( *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->hint_point_index_);
    }
    this->hint_point_index_ = 0;
    luna_rite_bin = proto::ActivityScheduleBin::luna_rite_bin(bin);
    __for_range = proto::LunaRiteScheduleBin::area_bin_list(luna_rite_bin);
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::LunaRiteAreaBin>::begin(__for_range).it_;
    *(google::protobuf::RepeatedPtrField<proto::LunaRiteAreaBin>::const_iterator *)(v2 + 64) = google::protobuf::RepeatedPtrField<proto::LunaRiteAreaBin>::end(__for_range);
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::LunaRiteAreaBin const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::LunaRiteAreaBin> *const)&__for_end,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::LunaRiteAreaBin>::iterator *)(v2 + 64)) )
    {
      area_info_bin = google::protobuf::internal::RepeatedPtrIterator<proto::LunaRiteAreaBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::LunaRiteAreaBin> *const)&__for_end);
      *(_DWORD *)(v2 + 48) = proto::LunaRiteAreaBin::area_id(area_info_bin);
      v9 = std::map<unsigned int,LunaRiteAreaInfo>::operator[](
             &this->area_info_map_,
             (std::map<unsigned int,LunaRiteAreaInfo>::key_type *)(v2 + 48));
      LunaRiteAreaInfo::fromBin(v9, area_info_bin);
      google::protobuf::internal::RepeatedPtrIterator<proto::LunaRiteAreaBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::LunaRiteAreaBin> *const)&__for_end);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.lua_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v26);
    __for_range_0 = proto::LunaRiteScheduleBin::hint_point_bin_list(luna_rite_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::LunaRiteHintPointBin>::begin(__for_range_0).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::LunaRiteHintPointBin>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::LunaRiteHintPointBin const>::operator!=(
              &__for_begin_0,
              &__for_end) )
    {
      hint_point_bin = google::protobuf::internal::RepeatedPtrIterator<proto::LunaRiteHintPointBin const>::operator*(&__for_begin_0);
      *(_DWORD *)(v2 + 32) = proto::LunaRiteHintPointBin::group_id(hint_point_bin);
      *(_DWORD *)(v2 + 48) = proto::LunaRiteHintPointBin::config_id(hint_point_bin);
      gadget_script_config_ptr = LuaConfigMgr::findGadgetScriptConfig(
                                   lua_config_mgr,
                                   *(_DWORD *)(v2 + 32),
                                   *(_DWORD *)(v2 + 48));
      if ( gadget_script_config_ptr )
      {
        *(_QWORD *)(v2 + 64) = LunaRiteActivity::genGroupKey(this, *(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 48));
        hint_point = std::map<unsigned long,LunaRiteHintPoint>::operator[](
                       &this->hint_point_map_,
                       (const std::map<long unsigned int,LunaRiteHintPoint>::key_type *)(v2 + 64));
        LunaRiteHintPoint::fromBin(hint_point, hint_point_bin);
        HintPointIndex = LunaRiteActivity::getHintPointIndex(this);
        if ( *(_BYTE *)(((unsigned __int64)&hint_point->index >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)hint_point + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hint_point->index >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4(&hint_point->index);
        }
        hint_point->index = HintPointIndex;
        if ( (((unsigned __int8)hint_point + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&hint_point->pos >> 3)
                                                                  + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&hint_point->pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&hint_point->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)hint_point + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&hint_point->pos.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_store_n(&hint_point->pos, 12LL);
        }
        if ( (((unsigned __int8)gadget_script_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->pos >> 3)
                                                                                + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&gadget_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)gadget_script_config_ptr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&gadget_script_config_ptr->pos.z
                                                                                  + 3) >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load_n(&gadget_script_config_ptr->pos, 12LL);
        }
        hint_point->pos = gadget_script_config_ptr->pos;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/luna_rite_activity.cpp",
          "fromScheduleBin",
          114);
        v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v27,
                (const char (*)[48])"[LUNA_RITE]can't find gadget config. group_id: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" config_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::LunaRiteHintPointBin const>::operator++(&__for_begin_0);
    }
    v14 = proto::LunaRiteScheduleBin::atmosphere(luna_rite_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->atmosphere_);
    }
    this->atmosphere_ = v14;
    refresh_time = proto::LunaRiteScheduleBin::last_refresh_time(luna_rite_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->last_refresh_time_);
    }
    this->last_refresh_time_ = refresh_time;
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/luna_rite_activity.cpp",
      "fromScheduleBin",
      94);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v27,
           (const char (*)[37])"[LUNA_RITE] detail_case error. uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" detail_case: ");
    *(_DWORD *)(v2 + 48) = proto::ActivityScheduleBin::detail_case(bin);
    common::milog::MiLogStream::operator<<<proto::ActivityScheduleBin::DetailCase,(proto::ActivityScheduleBin::DetailCase*)0>(
      v7,
      (const proto::ActivityScheduleBin::DetailCase *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0;
  }
  if ( v28 == (char *)v2 )
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

// Line 129: range 0000000014554D5C-0000000014554F66
int32_t __cdecl LunaRiteActivity::toScheduleBin(const LunaRiteActivity *const this, proto::ActivityScheduleBin *bin)
{
  proto::LunaRiteAreaBin *v2; // rax
  proto::LunaRiteHintPointBin *v3; // rax
  std::map<unsigned int,LunaRiteAreaInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,LunaRiteAreaInfo>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  proto::LunaRiteScheduleBin *luna_rite_bin; // [rsp+28h] [rbp-48h]
  const std::map<unsigned int,LunaRiteAreaInfo> *__for_range; // [rsp+30h] [rbp-40h]
  const std::map<long unsigned int,LunaRiteHintPoint> *__for_range_0; // [rsp+38h] [rbp-38h]
  const std::pair<long unsigned int const,LunaRiteHintPoint> *v10; // [rsp+40h] [rbp-30h]
  std::tuple_element<0,const std::pair<long unsigned int const,LunaRiteHintPoint> >::type *key; // [rsp+48h] [rbp-28h]
  std::tuple_element<1,const std::pair<long unsigned int const,LunaRiteHintPoint> >::type *hint_point_info; // [rsp+50h] [rbp-20h]
  const std::pair<unsigned int const,LunaRiteAreaInfo> *v13; // [rsp+58h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,LunaRiteAreaInfo> >::type *area_id; // [rsp+60h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,LunaRiteAreaInfo> >::type *area_info; // [rsp+68h] [rbp-8h]

  luna_rite_bin = proto::ActivityScheduleBin::mutable_luna_rite_bin(bin);
  __for_range = &this->area_info_map_;
  __for_begin._M_node = std::map<unsigned int,LunaRiteAreaInfo>::begin(&this->area_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,LunaRiteAreaInfo>::end(&this->area_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator*(&__for_begin);
    area_id = std::get<0ul,unsigned int const,LunaRiteAreaInfo>(v13);
    area_info = (std::tuple_element<1,const std::pair<unsigned int const,LunaRiteAreaInfo> >::type *)std::get<1ul,unsigned int const,LunaRiteAreaInfo>(v13);
    v2 = proto::LunaRiteScheduleBin::add_area_bin_list(luna_rite_bin);
    LunaRiteAreaInfo::toBin(area_info, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->hint_point_map_;
  __for_begin._M_node = std::map<unsigned long,LunaRiteHintPoint>::begin(&this->hint_point_map_)._M_node;
  __for_end._M_node = std::map<unsigned long,LunaRiteHintPoint>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> >::_Self *)&__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned long const,LunaRiteHintPoint>>::operator*((const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> > *const)&__for_begin);
    key = std::get<0ul,unsigned long const,LunaRiteHintPoint>(v10);
    hint_point_info = (std::tuple_element<1,const std::pair<long unsigned int const,LunaRiteHintPoint> >::type *)std::get<1ul,unsigned long const,LunaRiteHintPoint>(v10);
    v3 = proto::LunaRiteScheduleBin::add_hint_point_bin_list(luna_rite_bin);
    LunaRiteHintPoint::toBin(hint_point_info, v3);
    std::_Rb_tree_const_iterator<std::pair<unsigned long const,LunaRiteHintPoint>>::operator++((std::_Rb_tree_const_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::LunaRiteScheduleBin::set_atmosphere(luna_rite_bin, this->atmosphere_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LunaRiteScheduleBin::set_last_refresh_time(luna_rite_bin, this->last_refresh_time_);
  return 0;
};

// Line 145: range 0000000014554F68-00000000145551F2
int32_t __cdecl LunaRiteActivity::toClient(LunaRiteActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  proto::LunaRiteAreaInfo *v4; // rax
  proto::LunaRiteHintPoint *v5; // rax
  unsigned int val; // [rsp+14h] [rbp-8Ch] BYREF
  std::map<unsigned int,LunaRiteAreaInfo>::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::map<unsigned int,LunaRiteAreaInfo>::iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  proto::LunaRiteDetailInfo *luna_rite_info; // [rsp+28h] [rbp-78h]
  std::map<unsigned int,LunaRiteAreaInfo> *__for_range; // [rsp+30h] [rbp-70h]
  std::map<long unsigned int,LunaRiteHintPoint> *__for_range_0; // [rsp+38h] [rbp-68h]
  const std::pair<long unsigned int const,LunaRiteHintPoint> *v12; // [rsp+40h] [rbp-60h]
  std::tuple_element<0,const std::pair<long unsigned int const,LunaRiteHintPoint> >::type *key; // [rsp+48h] [rbp-58h]
  std::tuple_element<1,const std::pair<long unsigned int const,LunaRiteHintPoint> >::type *point_info; // [rsp+50h] [rbp-50h]
  const std::pair<unsigned int const,LunaRiteAreaInfo> *v15; // [rsp+58h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,LunaRiteAreaInfo> >::type *area_id; // [rsp+60h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,LunaRiteAreaInfo> >::type *area_info; // [rsp+68h] [rbp-38h]
  common::milog::MiLogStream v18; // [rsp+70h] [rbp-30h] BYREF

  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/luna_rite_activity.cpp",
      "toClient",
      148);
    v2 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v18,
           (const char (*)[49])"[LUNA_RITE] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return -1;
  }
  else
  {
    luna_rite_info = proto::ActivityInfo::mutable_luna_rite_info(activity_info);
    __for_range = &this->area_info_map_;
    __for_begin._M_node = std::map<unsigned int,LunaRiteAreaInfo>::begin(&this->area_info_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,LunaRiteAreaInfo>::end(&this->area_info_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator*(&__for_begin);
      area_id = std::get<0ul,unsigned int const,LunaRiteAreaInfo>(v15);
      area_info = (std::tuple_element<1,const std::pair<unsigned int const,LunaRiteAreaInfo> >::type *)std::get<1ul,unsigned int const,LunaRiteAreaInfo>(v15);
      v4 = proto::LunaRiteDetailInfo::add_area_info_list(luna_rite_info);
      LunaRiteAreaInfo::toClient(area_info, v4);
      std::_Rb_tree_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator++(&__for_begin);
    }
    __for_range_0 = &this->hint_point_map_;
    __for_begin._M_node = std::map<unsigned long,LunaRiteHintPoint>::begin(&this->hint_point_map_)._M_node;
    __for_end._M_node = std::map<unsigned long,LunaRiteHintPoint>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> >::_Self *)&__for_end) )
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned long const,LunaRiteHintPoint>>::operator*((const std::_Rb_tree_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> > *const)&__for_begin);
      key = std::get<0ul,unsigned long const,LunaRiteHintPoint>(v12);
      point_info = (std::tuple_element<1,const std::pair<long unsigned int const,LunaRiteHintPoint> >::type *)std::get<1ul,unsigned long const,LunaRiteHintPoint>(v12);
      v5 = proto::LunaRiteDetailInfo::add_hint_point(luna_rite_info);
      LunaRiteHintPoint::toClient(point_info, v5);
      std::_Rb_tree_iterator<std::pair<unsigned long const,LunaRiteHintPoint>>::operator++((std::_Rb_tree_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> > *const)&__for_begin);
    }
    return 0;
  }
};

// Line 165: range 00000000145551F4-0000000014555251
int32_t __cdecl LunaRiteActivity::init(LunaRiteActivity *const this)
{
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    LunaRiteActivity::registerObserver(this);
  }
  return 0;
};

// Line 175: range 0000000014555252-000000001455526C
void __cdecl LunaRiteActivity::onLogin(LunaRiteActivity *const this)
{
  LunaRiteActivity::tryRefresh(this);
};

// Line 180: range 000000001455526E-0000000014555288
void __cdecl LunaRiteActivity::onStart(LunaRiteActivity *const this)
{
  LunaRiteActivity::registerObserver(this);
};

// Line 185: range 000000001455528A-00000000145552A4
void __cdecl LunaRiteActivity::onSettle(LunaRiteActivity *const this)
{
  LunaRiteActivity::unregisterObserver(this);
};

// Line 190: range 00000000145552A6-000000001455576F
void __cdecl LunaRiteActivity::registerObserver(LunaRiteActivity *const this)
{
  unsigned __int64 p_pending_que; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<LunaRiteActivity> *EventComp; // [rsp+10h] [rbp-F0h]
  std::weak_ptr<LunaRiteActivity> *v5; // [rsp+20h] [rbp-E0h]
  std::weak_ptr<LunaRiteActivity> *p_this_wtr; // [rsp+30h] [rbp-D0h]
  PlayerEventComp varC0; // [rsp+40h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 12 this_ptr:191 64 16 12 this_wtr:192";
  *(_QWORD *)(p_pending_que + 16) = LunaRiteActivity::registerObserver;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this((std::enable_shared_from_this<BaseActivity> *const)&varC0.event_center_);
  std::dynamic_pointer_cast<LunaRiteActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(p_pending_que + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&varC0.event_center_);
  std::weak_ptr<LunaRiteActivity>::weak_ptr<LunaRiteActivity,void>(
    (std::weak_ptr<LunaRiteActivity> *const)(p_pending_que + 64),
    (const std::shared_ptr<LunaRiteActivity> *)(p_pending_que + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->group_bundle_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<LunaRiteActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<LunaRiteActivity>::weak_ptr(
      (std::weak_ptr<LunaRiteActivity> *const)&varC0.event_center_,
      (const std::weak_ptr<LunaRiteActivity> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<LunaRiteActivity,GroupBundleFinishEvent>(
      &varC0,
      p_this_wtr,
      (void (*)(LunaRiteActivity *, const GroupBundleFinishEvent *))&varC0.event_center_);
    std::weak_ptr<Observer>::operator=(&this->group_bundle_obs_wtr_, (std::weak_ptr<Observer> *)&varC0);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<LunaRiteActivity>::~weak_ptr((std::weak_ptr<LunaRiteActivity> *const)&varC0.event_center_);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->world_gather_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = (std::weak_ptr<LunaRiteActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<LunaRiteActivity>::weak_ptr(
      (std::weak_ptr<LunaRiteActivity> *const)&varC0.event_center_,
      (const std::weak_ptr<LunaRiteActivity> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<LunaRiteActivity,WorldGatherEvent>(
      (PlayerEventComp *const)&varC0._M_weak_this._M_refcount,
      EventComp,
      (void (*)(LunaRiteActivity *, const WorldGatherEvent *))&varC0.event_center_);
    std::weak_ptr<Observer>::operator=(
      &this->world_gather_obs_wtr_,
      (std::weak_ptr<Observer> *)&varC0._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0._M_weak_this._M_refcount);
    std::weak_ptr<LunaRiteActivity>::~weak_ptr((std::weak_ptr<LunaRiteActivity> *const)&varC0.event_center_);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->chest_open_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = (std::weak_ptr<LunaRiteActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<LunaRiteActivity>::weak_ptr(
      (std::weak_ptr<LunaRiteActivity> *const)&varC0._M_weak_this._M_refcount,
      (const std::weak_ptr<LunaRiteActivity> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<LunaRiteActivity,ChestOpenEvent>(
      (PlayerEventComp *const)&varC0.event_center_,
      v5,
      (void (*)(LunaRiteActivity *, const ChestOpenEvent *))&varC0._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::operator=(&this->chest_open_obs_wtr_, (std::weak_ptr<Observer> *)&varC0.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0.event_center_);
    std::weak_ptr<LunaRiteActivity>::~weak_ptr((std::weak_ptr<LunaRiteActivity> *const)&varC0._M_weak_this._M_refcount);
  }
  std::weak_ptr<LunaRiteActivity>::~weak_ptr((std::weak_ptr<LunaRiteActivity> *const)(p_pending_que + 64));
  std::shared_ptr<LunaRiteActivity>::~shared_ptr((std::shared_ptr<LunaRiteActivity> *const)(p_pending_que + 32));
  if ( &varC0.event_center_.context_.pending_que_ == (std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *)p_pending_que )
  {
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_pending_que = 1172321806LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 208: range 0000000014555770-00000000145558E6
void __cdecl LunaRiteActivity::unregisterObserver(LunaRiteActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax
  PlayerEventComp *v3; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->group_bundle_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->group_bundle_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->group_bundle_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->world_gather_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->world_gather_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->world_gather_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->chest_open_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v3, &this->chest_open_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->chest_open_obs_wtr_);
  }
};

// Line 227: range 00000000145558E8-000000001455623D
void __cdecl LunaRiteActivity::onGroupBundleFinish(LunaRiteActivity *const this, const GroupBundleFinishEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  uint32_t id; // ecx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  PlayerGroupLinkComp *GroupLinkComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  google::protobuf::RepeatedField<unsigned int> *v14; // rax
  Player *player; // r14
  PlayerGroupLinkComp *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::string eventa; // [rsp+0h] [rbp-160h]
  LunaRiteActivity *thisa; // [rsp+8h] [rbp-158h]
  const ActivityLunaRiteExcelConfigMgr *activity_luna_rite_config_mgr; // [rsp+18h] [rbp-148h]
  const data::LunaRiteBattleExcelConfig *config_ptr; // [rsp+20h] [rbp-140h]
  LunaRiteAreaInfo *area_info; // [rsp+28h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v26; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-110h] BYREF
  char v28[240]; // [rsp+70h] [rbp-F0h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 10 holder:245 48 4 13 bundle_id:232 64 4 11 area_id:240 80 4 18 next_bundle_id:254 96 16 "
                        "11 log_ptr:246 128 24 10 notify:270";
  *(_QWORD *)(v2 + 16) = LunaRiteActivity::onGroupBundleFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->bundle_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->bundle_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = event->bundle_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    *(&eventa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_luna_rite_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
    config_ptr = ActivityLunaRiteExcelConfigMgr::findLunaRiteBattleExcelConfigByBundleId(
                   *((const ActivityLunaRiteExcelConfigMgr *const *)&eventa._anon_0._M_allocated_capacity + 1),
                   *(_DWORD *)(v2 + 48));
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->region_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->region_type >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 64) = config_ptr->region_type;
      area_info = std::map<unsigned int,LunaRiteAreaInfo>::operator[](
                    &this->area_info_map_,
                    (const std::map<unsigned int,LunaRiteAreaInfo>::key_type *)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      id = config_ptr->id;
      if ( *(_BYTE *)(((unsigned __int64)&area_info->finish_battle_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)area_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&area_info->finish_battle_id >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_store4(&area_info->finish_battle_id);
      }
      area_info->finish_battle_id = id;
      BaseActivity::notifyClientData((BaseActivity *const)this, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v27, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xDBAu, eventa);
      std::string::~string(&v27);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyLunaRiteChallenge>();
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)area_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)area_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyLunaRiteChallenge::set_area_id(v10, area_info->area_id);
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyLunaRiteChallenge::set_group_bundle_id(v11, *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GroupLinkComp = Player::getGroupLinkComp(thisa->player_);
      PlayerGroupLinkComp::getGroupIdVec((std::vector<unsigned int> *)(v2 + 128), GroupLinkComp, *(_DWORD *)(v2 + 48));
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v14 = proto_log::PlayerLogBodyLunaRiteChallenge::mutable_group_id_list(v13);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
        (const std::vector<unsigned int> *)(v2 + 128),
        v14);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v26, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLunaRiteChallenge,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyLunaRiteChallenge> *)(v2 + 96));
      Player::printStatLog(player, &p_body_ptr, &v26, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v26);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
      std::shared_ptr<proto_log::PlayerLogBodyLunaRiteChallenge>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLunaRiteChallenge> *const)(v2 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
      *(_DWORD *)(v2 + 80) = ActivityLunaRiteExcelConfigMgr::findNextBundleId(
                               activity_luna_rite_config_mgr,
                               *(_DWORD *)(v2 + 48));
      if ( *(_DWORD *)(v2 + 80) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v16 = Player::getGroupLinkComp(thisa->player_);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( PlayerGroupLinkComp::registerGroupBundle(v16, *(_DWORD *)(v2 + 80), thisa->activity_id_) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/luna_rite_activity.cpp",
            "onGroupBundleFinish",
            259);
          v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v27,
                  (const char (*)[45])"register next group bundle fail. bundle_id: ");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v2 + 80));
          v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" area_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
        else
        {
          proto::LunaRiteGroupBundleRegisterNotify::LunaRiteGroupBundleRegisterNotify((proto::LunaRiteGroupBundleRegisterNotify *const)(v2 + 128));
          proto::LunaRiteGroupBundleRegisterNotify::set_group_link_bundle_id(
            (proto::LunaRiteGroupBundleRegisterNotify *const)(v2 + 128),
            *(_DWORD *)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v2 + 128));
          proto::LunaRiteGroupBundleRegisterNotify::~LunaRiteGroupBundleRegisterNotify((proto::LunaRiteGroupBundleRegisterNotify *const)(v2 + 128));
        }
      }
      else
      {
        proto::LunaRiteAreaFinishNotify::LunaRiteAreaFinishNotify((proto::LunaRiteAreaFinishNotify *const)(v2 + 128));
        proto::LunaRiteAreaFinishNotify::set_area_id(
          (proto::LunaRiteAreaFinishNotify *const)(v2 + 128),
          *(_DWORD *)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v2 + 128));
        proto::LunaRiteAreaFinishNotify::~LunaRiteAreaFinishNotify((proto::LunaRiteAreaFinishNotify *const)(v2 + 128));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/luna_rite_activity.cpp",
        "onGroupBundleFinish",
        237);
      v6 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
             &v27,
             (const char (*)[72])"[LUNA_RITE] findLunaRiteBattleExcelConfigByBundleId failed, bundle_id: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v7, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
  }
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 277: range 000000001455623E-00000000145562D6
void __cdecl LunaRiteActivity::onWorldGatherFinish(LunaRiteActivity *const this, const WorldGatherEvent *event)
{
  uint32_t config_id; // edx

  if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_id = event->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  LunaRiteActivity::onSearchingUpdate(this, event->group_id, config_id, RUNE);
};

// Line 282: range 00000000145562D8-0000000014556379
void __cdecl LunaRiteActivity::onChestOpenFinish(LunaRiteActivity *const this, const ChestOpenEvent *event)
{
  int config_id; // edi

  if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_id = event->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
  {
    config_id = (_DWORD)event + 28;
    __asan_report_load4();
  }
  LunaRiteActivity::onSearchingUpdate(this, event->group_id, config_id, CHEST);
};

// Line 287: range 000000001455637A-0000000014556C9F
void __fastcall LunaRiteActivity::onSearchingUpdate(
        LunaRiteActivity *const this,
        uint32_t group_id,
        uint32_t config_id,
        LunaRiteActivity::SearchingType type)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> >::pointer v19; // rax
  PlayerWatcherComp *WatcherComp; // rax
  uint32_t area_id; // [rsp+28h] [rbp-158h]
  uint32_t max_chest_num; // [rsp+2Ch] [rbp-154h]
  uint32_t max_rune_num; // [rsp+30h] [rbp-150h]
  uint32_t index; // [rsp+34h] [rbp-14Ch]
  std::_Rb_tree_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> >::_Self __y; // [rsp+38h] [rbp-148h] BYREF
  const ActivityLunaRiteExcelConfigMgr *activity_luna_rite_config_mgr; // [rsp+40h] [rbp-140h]
  LunaRiteAreaInfo *area_info; // [rsp+48h] [rbp-138h]
  std::shared_ptr<Config> v30; // [rsp+50h] [rbp-130h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-120h] BYREF
  char v32[256]; // [rsp+80h] [rbp-100h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 12 group_id:286 64 4 13 config_id:286 80 8 7 key:330 112 8 8 iter:332 144 40 10 notify:338";
  *(_QWORD *)(v4 + 16) = LunaRiteActivity::onSearchingUpdate;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 48) = group_id;
  *(_DWORD *)(v4 + 64) = config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  activity_luna_rite_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.activity_luna_rite_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v30);
  area_id = ActivityLunaRiteExcelConfigMgr::getAreaIdByGroupId(activity_luna_rite_config_mgr, *(_DWORD *)(v4 + 48));
  if ( area_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( PlayerSceneComp::isGotOneoffGatherPointByGroupConfigId(
           SceneComp,
           4u,
           *(_DWORD *)(v4 + 48),
           *(_DWORD *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/luna_rite_activity.cpp",
        "onSearchingUpdate",
        297);
      v8 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
             &v31,
             (const char (*)[67])"[LUNA_RITE] isGotOneoffGatherPointByGroupConfigId true. group_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" config_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_10:
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v31);
      goto LABEL_44;
    }
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/luna_rite_activity.cpp",
      "onSearchingUpdate",
      300);
    v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v31,
            (const char (*)[43])"[LUNA_RITE] onSearchingUpdate.  group_id: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" config_id: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v15, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    area_info = LunaRiteActivity::getAreaInfo(this, area_id);
    if ( type )
    {
      if ( type != CHEST )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/luna_rite_activity.cpp",
          "onSearchingUpdate",
          317);
        v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v31,
                (const char (*)[35])"[LUNA_RITE] ERROR TYPE. group_id: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" config_id: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_10;
      }
      if ( *(_BYTE *)(((unsigned __int64)&area_info->chest_searching_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)area_info + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&area_info->chest_searching_num >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++area_info->chest_searching_num;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&area_info->rune_searching_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&area_info->rune_searching_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ++area_info->rune_searching_num;
    }
    max_chest_num = ActivityLunaRiteExcelConfigMgr::getChestNum(activity_luna_rite_config_mgr, area_id);
    max_rune_num = ActivityLunaRiteExcelConfigMgr::getRuneNum(activity_luna_rite_config_mgr, area_id);
    if ( max_chest_num + max_rune_num )
    {
      if ( *(_BYTE *)(((unsigned __int64)&area_info->chest_searching_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)area_info + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&area_info->chest_searching_num >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( max_chest_num <= area_info->chest_searching_num )
      {
        if ( *(_BYTE *)(((unsigned __int64)&area_info->rune_searching_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&area_info->rune_searching_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( max_rune_num <= area_info->rune_searching_num )
        {
          if ( *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&area_info->hint_status);
          }
          area_info->hint_status = LUNA_RITE_HINT_STATUS_FINISH;
          BaseActivity::notifyClientData((BaseActivity *const)this, 0);
        }
      }
    }
    *(_QWORD *)(v4 + 80) = LunaRiteActivity::genGroupKey(this, *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 64));
    *(std::map<long unsigned int,LunaRiteHintPoint>::iterator *)(v4 + 112) = std::map<unsigned long,LunaRiteHintPoint>::find(
                                                                               &this->hint_point_map_,
                                                                               (const std::map<long unsigned int,LunaRiteHintPoint>::key_type *)(v4 + 80));
    __y._M_node = std::map<unsigned long,LunaRiteHintPoint>::end(&this->hint_point_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> >::_Self *)(v4 + 112),
           &__y) )
    {
      v19 = std::_Rb_tree_iterator<std::pair<unsigned long const,LunaRiteHintPoint>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,LunaRiteHintPoint> > *const)(v4 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v19->second.index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v19->second.index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      index = v19->second.index;
      std::map<unsigned long,LunaRiteHintPoint>::erase[abi:cxx11](
        &this->hint_point_map_,
        *(std::map<long unsigned int,LunaRiteHintPoint>::iterator *)(v4 + 112));
      proto::LunaRiteHintPointRemoveNotify::LunaRiteHintPointRemoveNotify((proto::LunaRiteHintPointRemoveNotify *const)(v4 + 144));
      proto::LunaRiteHintPointRemoveNotify::add_hint_point_index(
        (proto::LunaRiteHintPointRemoveNotify *const)(v4 + 144),
        index);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v4 + 144));
      proto::LunaRiteHintPointRemoveNotify::~LunaRiteHintPointRemoveNotify((proto::LunaRiteHintPointRemoveNotify *const)(v4 + 144));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(this->player_);
    PlayerWatcherComp::triggerLunaRiteSearch(WatcherComp, area_id);
  }
LABEL_44:
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 346: range 0000000014556CA0-0000000014556DA3
void __cdecl LunaRiteActivity::onClear(LunaRiteActivity *const this)
{
  std::map<unsigned int,LunaRiteAreaInfo>::clear(&this->area_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->atmosphere_);
  }
  this->atmosphere_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_refresh_time_);
  }
  this->last_refresh_time_ = 0;
  std::map<unsigned long,LunaRiteHintPoint>::clear(&this->hint_point_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_point_index_);
  }
  this->hint_point_index_ = 0;
};

// Line 355: range 0000000014556DA4-0000000014556E51
void __cdecl LunaRiteActivity::fillActivityCoinInfo(
        LunaRiteActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  uint32_t atmosphere; // ebx
  unsigned int *v3; // rax
  uint32_t *v4; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::key_type key[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  atmosphere = this->atmosphere_;
  key[0] = 131;
  v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, key);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = atmosphere;
};

// Line 360: range 0000000014557994-000000001455804E
__int64 __fastcall LunaRiteActivity::onNpcTalkTakeHintPoint(
        LunaRiteActivity *const this,
        uint32_t area_id,
        proto::LunaRiteHintPointRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const BaseActivity *v11; // rdx
  const BaseActivity *v12; // rcx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  ActivityLunaRiteExcelConfigMgr *activity_luna_rite_config_mgr; // [rsp+20h] [rbp-E0h]
  const data::LunaRiteSearchingExcelConfig *searching_excel_config_ptr; // [rsp+28h] [rbp-D8h]
  LunaRiteAreaInfo *area_info; // [rsp+30h] [rbp-D0h]
  LuaConfigMgr *lua_config_mgr; // [rsp+38h] [rbp-C8h]
  const std::set<unsigned int> *chest_group_id_set_ptr; // [rsp+40h] [rbp-C0h]
  const std::set<unsigned int> *rune_group_id_set_ptr; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[160]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 area_id:359 64 32 26 random_take_hint_point:383";
  *(_QWORD *)(v3 + 16) = LunaRiteActivity::onNpcTalkTakeHintPoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = area_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  activity_luna_rite_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_luna_rite_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  searching_excel_config_ptr = data::ActivityLunaRiteExcelConfigMgrBase::findLunaRiteSearchingExcelConfig(
                                 activity_luna_rite_config_mgr,
                                 *(_DWORD *)(v3 + 48));
  if ( searching_excel_config_ptr )
  {
    area_info = LunaRiteActivity::getAreaInfo(this, *(_DWORD *)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::LunaRiteHintPointRsp::set_hint_status(rsp_0, area_info->hint_status);
    if ( *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( area_info->hint_status )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/luna_rite_activity.cpp",
        "onNpcTalkTakeHintPoint",
        372);
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             (common::milog::MiLogStream *const)(v3 + 64),
             (const char (*)[36])"[LUNA_RITE]already taken. area_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" status: ");
      common::milog::MiLogStream::operator<<<proto::LunaRiteHintStatusType,(proto::LunaRiteHintStatusType*)0>(
        v10,
        &area_info->hint_status);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
      result = 0LL;
    }
    else
    {
      v11 = (const BaseActivity *)this;
      if ( *(_BYTE *)(((unsigned __int64)&searching_excel_config_ptr->chest_cond >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&searching_excel_config_ptr->chest_cond >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( !BaseActivity::isMeetCond(v11, searching_excel_config_ptr->chest_cond) )
        goto LABEL_18;
      v12 = (const BaseActivity *)this;
      if ( *(_BYTE *)(((unsigned __int64)&searching_excel_config_ptr->rune_cond >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)searching_excel_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&searching_excel_config_ptr->rune_cond >> 3)
                                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !BaseActivity::isMeetCond(v12, searching_excel_config_ptr->rune_cond) )
LABEL_18:
        v13 = 1;
      else
        v13 = 0;
      if ( v13 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/luna_rite_activity.cpp",
          "onNpcTalkTakeHintPoint",
          377);
        v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)(v3 + 64),
                (const char (*)[36])"[LUNA_RITE]cond not meet. area_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
        result = 10009LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&area_info->hint_status);
        }
        area_info->hint_status = LUNA_RITE_HINT_STATUS_NO_COUNT;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v22);
        lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.lua_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v22);
        *(_QWORD *)(v3 + 64) = this;
        *(_QWORD *)(v3 + 72) = lua_config_mgr;
        *(_DWORD *)(v3 + 80) = *(_DWORD *)(v3 + 48);
        *(_QWORD *)(v3 + 88) = rsp_0;
        chest_group_id_set_ptr = ActivityLunaRiteExcelConfigMgr::findChestGroupIdSet(
                                   activity_luna_rite_config_mgr,
                                   *(_DWORD *)(v3 + 48));
        if ( chest_group_id_set_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&searching_excel_config_ptr->chest_mark_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&searching_excel_config_ptr->chest_mark_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          LunaRiteActivity::onNpcTalkTakeHintPoint(unsigned int,proto::LunaRiteHintPointRsp &)::{lambda(std::set<unsigned int> const&,proto::LunaRiteHintPointType,unsigned int)#1}::operator()(
            (const LunaRiteActivity::onNpcTalkTakeHintPoint::<lambda(const std::set<unsigned int>&, proto::LunaRiteHintPointType, uint32_t)> *const)(v3 + 64),
            chest_group_id_set_ptr,
            LUNA_RITE_HINT_TYPE_CHEST,
            searching_excel_config_ptr->chest_mark_num);
        }
        rune_group_id_set_ptr = ActivityLunaRiteExcelConfigMgr::findRuneGroupIdSet(
                                  activity_luna_rite_config_mgr,
                                  *(_DWORD *)(v3 + 48));
        if ( rune_group_id_set_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&searching_excel_config_ptr->rune_mark_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)searching_excel_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&searching_excel_config_ptr->rune_mark_num >> 3)
                                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          LunaRiteActivity::onNpcTalkTakeHintPoint(unsigned int,proto::LunaRiteHintPointRsp &)::{lambda(std::set<unsigned int> const&,proto::LunaRiteHintPointType,unsigned int)#1}::operator()(
            (const LunaRiteActivity::onNpcTalkTakeHintPoint::<lambda(const std::set<unsigned int>&, proto::LunaRiteHintPointType, uint32_t)> *const)(v3 + 64),
            rune_group_id_set_ptr,
            LUNA_RITE_HINT_TYPE_RUNE,
            searching_excel_config_ptr->rune_mark_num);
        }
        if ( *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::LunaRiteHintPointRsp::set_hint_status(rsp_0, area_info->hint_status);
        result = 0LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/luna_rite_activity.cpp",
      "onNpcTalkTakeHintPoint",
      365);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[51])"[LUNA_RITE]findLunaRiteSearchingExcelConfig fail. ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = 10004LL;
  }
  if ( v23 == (char *)v3 )
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

// Line 383: range 0000000014556E52-0000000014557992
void __cdecl LunaRiteActivity::onNpcTalkTakeHintPoint(unsigned int,proto::LunaRiteHintPointRsp &)::{lambda(std::set<unsigned int> const&,proto::LunaRiteHintPointType,unsigned int)#1}::operator()(
        const LunaRiteActivity::onNpcTalkTakeHintPoint::<lambda(const std::set<unsigned int>&, proto::LunaRiteHintPointType, uint32_t)> *const __closure,
        const std::set<unsigned int> *group_id_set,
        proto::LunaRiteHintPointType type,
        uint32_t num)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rdx
  __int64 this; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v10; // rax
  LunaRiteActivity *v11; // rcx
  unsigned __int64 n; // rax
  LunaRiteActivity *v13; // rdi
  uint32_t *p_config_id; // rcx
  LunaRiteHintPoint *v15; // rdx
  uint32_t area_id; // ecx
  unsigned __int64 v17; // rax
  proto::LunaRiteHintPoint *v18; // rax
  uint32_t index; // [rsp+20h] [rbp-200h]
  uint32_t scene_id; // [rsp+24h] [rbp-1FCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-1F8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-1F0h] BYREF
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_begin_0; // [rsp+38h] [rbp-1E8h] BYREF
  std::vector<long unsigned int>::iterator __for_begin_1; // [rsp+40h] [rbp-1E0h] BYREF
  std::vector<long unsigned int>::iterator __for_end_0; // [rsp+48h] [rbp-1D8h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-1D0h]
  std::vector<long unsigned int> *__for_range_1; // [rsp+58h] [rbp-1C8h]
  unsigned __int64 *key; // [rsp+60h] [rbp-1C0h]
  LunaRiteHintPoint *hint_point; // [rsp+68h] [rbp-1B8h]
  const std::map<unsigned int,unsigned int> *one_off_record_map; // [rsp+70h] [rbp-1B0h]
  const GroupScriptConfig *group_info_config_ptr; // [rsp+78h] [rbp-1A8h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_0; // [rsp+80h] [rbp-1A0h]
  const std::pair<unsigned int const,GadgetScriptConfig> *v36; // [rsp+88h] [rbp-198h]
  std::tuple_element<0,const std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id; // [rsp+90h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_config; // [rsp+98h] [rbp-188h]
  std::vector<long unsigned int> data_vec; // [rsp+A0h] [rbp-180h] BYREF
  common::milog::MiLogStream v40; // [rsp+C0h] [rbp-160h] BYREF
  std::map<unsigned int,unsigned int> v41; // [rsp+E0h] [rbp-140h] BYREF
  char v42[272]; // [rsp+110h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 group_id:386 64 24 18 result_key_vec:404 128 56 16 pos_info_map:385";
  *(_QWORD *)(v4 + 16) = LunaRiteActivity::onNpcTalkTakeHintPoint(unsigned int,proto::LunaRiteHintPointRsp &)::{lambda(std::set<unsigned int> const&,proto::LunaRiteHintPointType,unsigned int)#1}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  std::unordered_map<unsigned long,Vector3>::unordered_map((std::unordered_map<long unsigned int,Vector3> *const)(v4 + 128));
  __for_range = group_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(group_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(group_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 48) = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__lua_config_mgr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene_id = LuaConfigMgr::getSceneIdByGroupId(__closure->__lua_config_mgr, *(_DWORD *)(v4 + 48));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = (__int64)__closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
      this = __asan_report_load8();
    SceneComp = Player::getSceneComp(*(Player *const *)(this + 24));
    PlayerSceneComp::getOneOffRecord(&v41, SceneComp, PROT_ENTITY_GADGET, scene_id, 0, *(_DWORD *)(v4 + 48));
    one_off_record_map = &v41;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__lua_config_mgr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    group_info_config_ptr = LuaConfigMgr::findGroupScriptConfig(__closure->__lua_config_mgr, *(_DWORD *)(v4 + 48));
    if ( group_info_config_ptr )
    {
      __for_range_0 = &group_info_config_ptr->gadget_config_map;
      __for_begin_0._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(&group_info_config_ptr->gadget_config_map)._M_cur;
      __for_begin_1._M_current = (unsigned __int64 *)std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                &__for_begin_0,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)&__for_begin_1) )
      {
        v36 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*(&__for_begin_0);
        config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(v36);
        gadget_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v36);
        if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>(
                one_off_record_map,
                config_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v11 = __closure->__this;
          if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          __for_end_0._M_current = (unsigned __int64 *)LunaRiteActivity::genGroupKey(
                                                         v11,
                                                         *(_DWORD *)(v4 + 48),
                                                         *config_id);
          n = (unsigned __int64)std::unordered_map<unsigned long,Vector3>::operator[](
                                  (std::unordered_map<long unsigned int,Vector3> *const)(v4 + 128),
                                  (std::unordered_map<long unsigned int,Vector3>::key_type *)&__for_end_0);
          if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
          {
            n = __asan_report_store_n(n, 12LL);
          }
          if ( (((unsigned __int8)gadget_config + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_config->pos >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&gadget_config->pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&gadget_config->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)gadget_config + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&gadget_config->pos.z + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            n = __asan_report_load_n(&gadget_config->pos, 12LL);
          }
          *(Vector3 *)n = gadget_config->pos;
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++(&__for_begin_0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/luna_rite_activity.cpp",
        "operator()",
        393);
      v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v40,
              (const char (*)[29])"[LUNA_RITE]can't find group:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
    std::map<unsigned int,unsigned int>::~map(&v41);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v4 + 64));
  common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned long,Vector3>>(
    &data_vec,
    (const std::unordered_map<long unsigned int,Vector3> *)(v4 + 128));
  common::tools::RandomUtils::quickRandomSelect<unsigned long>(
    &data_vec,
    (std::vector<long unsigned int> *)(v4 + 64),
    num);
  std::vector<unsigned long>::~vector(&data_vec);
  __for_range_1 = (std::vector<long unsigned int> *)(v4 + 64);
  __for_begin_1._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v4 + 64))._M_current;
  __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin_1, &__for_end_0) )
  {
    key = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin_1);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    index = LunaRiteActivity::getHintPointIndex(__closure->__this);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    hint_point = std::map<unsigned long,LunaRiteHintPoint>::operator[](&__closure->__this->hint_point_map_, key);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = __closure->__this;
    p_config_id = &hint_point->config_id;
    v15 = hint_point;
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      v13 = (LunaRiteActivity *)key;
      __asan_report_load8();
    }
    LunaRiteActivity::getGroupAndConfigByKey(v13, *key, &v15->group_id, p_config_id);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__area_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__area_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    area_id = __closure->__area_id;
    if ( *(_BYTE *)(((unsigned __int64)&hint_point->area_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)hint_point + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hint_point->area_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_store4(&hint_point->area_id);
    }
    hint_point->area_id = area_id;
    if ( *(_BYTE *)(((unsigned __int64)&hint_point->index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)hint_point + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hint_point->index >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&hint_point->index);
    }
    hint_point->index = index;
    v17 = (unsigned __int64)std::unordered_map<unsigned long,Vector3>::operator[](
                              (std::unordered_map<long unsigned int,Vector3> *const)(v4 + 128),
                              key);
    if ( (((unsigned __int8)hint_point + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&hint_point->pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&hint_point->pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&hint_point->pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)hint_point + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&hint_point->pos.z + 3) >> 3)
                                                              + 0x7FFF8000) )
    {
      v17 = __asan_report_store_n(&hint_point->pos, 12LL);
    }
    if ( (char)(v17 & 7) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) && *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v17 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v17 + 11) & 7) >= *(_BYTE *)(((v17 + 11) >> 3) + 0x7FFF8000) )
    {
      v17 = __asan_report_load_n(v17, 12LL);
    }
    hint_point->pos = *(Vector3 *)v17;
    if ( *(_BYTE *)(((unsigned __int64)&hint_point->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)hint_point + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hint_point->type >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&hint_point->type);
    }
    hint_point->type = type;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__rsp >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = proto::LunaRiteHintPointRsp::add_hint_point(__closure->__rsp);
    LunaRiteHintPoint::toClient(hint_point, v18);
    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin_1);
  }
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 64));
  std::unordered_map<unsigned long,Vector3>::~unordered_map((std::unordered_map<long unsigned int,Vector3> *const)(v4 + 128));
  if ( v42 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 433: range 0000000014558050-0000000014558438
__int64 __fastcall LunaRiteActivity::getSearchingPercent(LunaRiteActivity *const this, uint32_t area_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  uint32_t *v8; // rdx
  const unsigned int *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  uint32_t cur_chest_num; // [rsp+1Ch] [rbp-D4h]
  uint32_t total_max_count; // [rsp+28h] [rbp-C8h]
  unsigned int percent; // [rsp+2Ch] [rbp-C4h]
  ActivityLunaRiteExcelConfigMgr *activity_luna_rite_config_mgr; // [rsp+30h] [rbp-C0h]
  LunaRiteAreaInfo *area_info; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 17 max_chest_num:442 48 4 16 max_rune_num:443 64 4 11 area_id:432";
  *(_QWORD *)(v2 + 16) = LunaRiteActivity::getSearchingPercent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = area_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  activity_luna_rite_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_luna_rite_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( data::ActivityLunaRiteExcelConfigMgrBase::findLunaRiteSearchingExcelConfig(
         activity_luna_rite_config_mgr,
         *(_DWORD *)(v2 + 64)) )
  {
    area_info = LunaRiteActivity::getAreaInfo(this, *(_DWORD *)(v2 + 64));
    *(_DWORD *)(v2 + 32) = ActivityLunaRiteExcelConfigMgr::getChestNum(
                             activity_luna_rite_config_mgr,
                             *(_DWORD *)(v2 + 64));
    *(_DWORD *)(v2 + 48) = ActivityLunaRiteExcelConfigMgr::getRuneNum(
                             activity_luna_rite_config_mgr,
                             *(_DWORD *)(v2 + 64));
    v8 = (uint32_t *)std::min<unsigned int>(&area_info->chest_searching_num, (const unsigned int *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    cur_chest_num = *v8;
    v9 = std::min<unsigned int>(&area_info->rune_searching_num, (const unsigned int *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    total_max_count = 2 * *(_DWORD *)(v2 + 48) + *(_DWORD *)(v2 + 32);
    if ( total_max_count )
    {
      percent = 100 * (2 * *v9 + cur_chest_num) / total_max_count;
      result = 100LL;
      if ( percent <= 0x64 )
        result = percent;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/luna_rite_activity.cpp",
        "getSearchingPercent",
        452);
      v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v17,
              (const char (*)[45])"[LUNA_RITE]searching_max_num is 0. area_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/luna_rite_activity.cpp",
      "getSearchingPercent",
      437);
    v5 = common::milog::MiLogStream::operator<<<LunaRiteActivity,(LunaRiteActivity*)0>(&v17, this);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           v5,
           (const char (*)[25])"area id error. area_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0LL;
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
  return result;
};

// Line 460: range 000000001455843A-00000000145586BF
__int64 __fastcall LunaRiteActivity::checkAddAtmosphere(const LunaRiteActivity *const this, uint32_t add_atmosphere)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 add_atmosphere:459";
  *(_QWORD *)(v2 + 16) = LunaRiteActivity::checkAddAtmosphere;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_atmosphere;
  if ( *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->atmosphere_ && *(_DWORD *)(v2 + 32) && *(_DWORD *)(v2 + 32) + this->atmosphere_ < this->atmosphere_ )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->atmosphere_ || *(_DWORD *)(v2 + 32) || *(_DWORD *)(v2 + 32) + this->atmosphere_ <= this->atmosphere_ )
  {
    result = 0LL;
  }
  else
  {
LABEL_14:
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/luna_rite_activity.cpp",
      "checkAddAtmosphere",
      463);
    v5 = common::milog::MiLogStream::operator<<<LunaRiteActivity,(LunaRiteActivity*)0>(&v10, this);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           v5,
           (const char (*)[28])" token over flow, cur num: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->atmosphere_);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 617LL;
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
  return result;
};

// Line 470: range 00000000145586C0-0000000014558AA5
int32_t __cdecl LunaRiteActivity::addAtmosphere(
        LunaRiteActivity *const this,
        uint32_t add_atmosphere,
        const ActionReason *reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t v6; // r14d
  PlayerBasicComp *BasicComp; // rax
  SelectType v8; // edx
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v13; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  unsigned int add_atmospherea; // [rsp+14h] [rbp-ACh]
  LunaRiteActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_coin; // [rsp+2Ch] [rbp-94h]
  std::string v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v13._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v13._anon_0._M_allocated_capacity) = add_atmosphere;
  v13._M_string_length = (std::string::size_type)reason;
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 22 log_context_holder:476";
  *(_QWORD *)(v3 + 16) = LunaRiteActivity::addAtmosphere;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  ret = LunaRiteActivity::checkAddAtmosphere(this, add_atmosphere);
  if ( ret )
  {
    v6 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x67u, v13);
    std::string::~string(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->atmosphere_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_coin = thisa->atmosphere_;
    v8 = SAFE_ADD<unsigned int,unsigned int>(old_coin, add_atmospherea);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->atmosphere_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->atmosphere_);
    }
    thisa->atmosphere_ = v8;
    if ( old_coin < thisa->atmosphere_ )
    {
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(thisa->player_);
      if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                              + 0x7FFF8000) )
      {
        ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
        __asan_report_load4();
      }
      vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
      if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
      {
        ItemComp = reasona;
        __asan_report_load4();
      }
      vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->atmosphere_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
      {
        ItemComp = (PlayerItemComp *)&thisa->atmosphere_;
        __asan_report_load4();
      }
      PlayerItemComp::logPlayerAddCoin(
        ItemComp,
        ITEM_VIRTUAL_LUNA_RITE_ATMOSPHERE,
        old_coin,
        thisa->atmosphere_,
        vptr_PlayerCompBase,
        vptr_PlayerCompBase_high,
        0);
      BaseActivity::updateAllConds((BaseActivity *const)thisa);
    }
    v6 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  }
  result = v6;
  if ( v20 == (char *)v3 )
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

// Line 490: range 0000000014558AA6-00000000145597D5
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall LunaRiteActivity::sacrifice(LunaRiteActivity *const this, uint32_t area_id, uint32_t battle_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  PlayerItemComp *v20; // rax
  int32_t v21; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  int32_t *p_param1; // rax
  int32_t v24; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  uint32_t *p_uid; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v29; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteSacrifice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteSacrifice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // r14
  google::protobuf::uint32 v32; // eax
  Player *v33; // r14
  __int64 result; // rax
  std::string v35; // [rsp+0h] [rbp-1D0h] OVERLAPPED BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-1B0h] BYREF
  const ActivityLunaRiteExcelConfigMgr *activity_luna_rite_config_mgr; // [rsp+28h] [rbp-1A8h]
  const data::LunaRiteBattleExcelConfig *sacrifice_config_ptr; // [rsp+30h] [rbp-1A0h]
  LunaRiteAreaInfo *area_info; // [rsp+38h] [rbp-198h]
  PlayerGroupLinkComp *gruop_link_comp; // [rsp+40h] [rbp-190h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-188h]
  std::shared_ptr<google::protobuf::Message> v42; // [rsp+50h] [rbp-180h] BYREF
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-170h] BYREF
  char v44[336]; // [rsp+80h] [rbp-150h] BYREF

  v35._M_string_length = (std::string::size_type)this;
  v35._M_dataplus._M_p = (std::string::pointer)__PAIR64__(area_id, battle_id);
  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 1 10 holder:521 48 4 7 ret:527 64 4 11 area_id:489 80 4 13 battle_id:489 96 8 10 reason:534"
                        " 128 16 14 item_param:523 160 16 11 log_ptr:555 192 16 13 event_ptr:537 224 24 17 bundle_id_vec:544";
  *(_QWORD *)(v3 + 16) = LunaRiteActivity::sacrifice;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 64) = HIDWORD(v35._M_dataplus._M_p);
  *(_DWORD *)(v3 + 80) = v35._M_dataplus._M_p;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v42);
  activity_luna_rite_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.txt_config_mgr.activity_luna_rite_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v42);
  sacrifice_config_ptr = data::ActivityLunaRiteExcelConfigMgrBase::findLunaRiteBattleExcelConfig(
                           activity_luna_rite_config_mgr,
                           *(_DWORD *)(v3 + 80));
  if ( sacrifice_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&sacrifice_config_ptr->consecrate_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&sacrifice_config_ptr->consecrate_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( sacrifice_config_ptr->consecrate_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&sacrifice_config_ptr->region_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sacrifice_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sacrifice_config_ptr->region_type >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( sacrifice_config_ptr->region_type == *(_DWORD *)(v3 + 64) )
      {
        area_info = LunaRiteActivity::getAreaInfo((LunaRiteActivity *const)v35._M_string_length, *(_DWORD *)(v3 + 64));
        if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
               &area_info->sacrifice_set,
               (const unsigned int *)(v3 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/luna_rite_activity.cpp",
            "sacrifice",
            518);
          v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v43,
                  (const char (*)[48])"[LUNA_RITE] already in sacrifice_set, area_id: ");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v3 + 64));
          v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" battle_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v43);
          v7 = 10006;
        }
        else
        {
          if ( *(_BYTE *)(((v35._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(*(Player *const *)(v35._M_string_length + 24));
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v43, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xDBBu, v35);
          std::string::~string(&v43);
          *(_DWORD *)(v3 + 128) = 0;
          *(_DWORD *)(v3 + 132) = 0;
          *(_DWORD *)(v3 + 136) = 0;
          *(_DWORD *)(v3 + 140) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&sacrifice_config_ptr->consecrate_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&sacrifice_config_ptr->consecrate_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 128) = sacrifice_config_ptr->consecrate_id;
          *(_DWORD *)(v3 + 132) = 1;
          if ( *(_BYTE *)(((v35._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = Player::getItemComp(*(Player *const *)(v35._M_string_length + 24));
          *(_DWORD *)(v3 + 48) = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 128));
          if ( *(_DWORD *)(v3 + 48) )
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/luna_rite_activity.cpp",
              "sacrifice",
              530);
            v17 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v43,
                    (const char (*)[41])"[LUNA_RITE] checkSubItem fail. item_id: ");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v3 + 128));
            v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" ret: ");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v43);
            v7 = *(_DWORD *)(v3 + 48);
          }
          else
          {
            std::set<unsigned int>::insert(
              &area_info->sacrifice_set,
              (const std::set<unsigned int>::value_type *)(v3 + 80));
            SubItemReason::SubItemReason((SubItemReason *const)(v3 + 96), ACTION_REASON_LUNA_RITE_SACRIFICE);
            if ( *(_BYTE *)(((v35._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v20 = Player::getItemComp(*(Player *const *)(v35._M_string_length + 24));
            PlayerItemComp::subItem(v20, (const ItemParam *)(v3 + 128), (const SubItemReason *)(v3 + 96));
            EventUtil::createEvent((std::shared_ptr<Event> *)(v3 + 192), 84);
            if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v3 + 192)) )
            {
              v21 = *(_DWORD *)(v3 + 64);
              v22 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              p_param1 = &v22->param1;
              if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(p_param1);
              }
              v22->param1 = v21;
              v24 = std::set<unsigned int>::size(&area_info->sacrifice_set);
              v25 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              if ( *(_BYTE *)(((unsigned __int64)&v25->param2 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v25->param2 >> 3) + 0x7FFF8000) <= 3 )
              {
                v25 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v25->param2);
              }
              v25->param2 = v24;
              if ( *(_BYTE *)(((v35._M_string_length + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(*(const Player *const *)(v35._M_string_length + 24));
              v27 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              p_uid = &v27->uid;
              if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(p_uid);
              }
              v27->uid = Uid;
              if ( *(_BYTE *)(((v35._M_string_length + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              gruop_link_comp = Player::getGroupLinkComp(*(Player *const *)(v35._M_string_length + 24));
              if ( *(_BYTE *)(((v35._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((v35._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              PlayerGroupLinkComp::findGroupBundleByActivity(
                (std::vector<unsigned int> *)(v3 + 224),
                gruop_link_comp,
                *(_DWORD *)(v35._M_string_length + 32));
              __for_range = (std::vector<unsigned int> *)(v3 + 224);
              *((std::vector<unsigned int>::iterator *)&v35._anon_0._M_allocated_capacity + 1) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 224));
              __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 224))._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&v35._anon_0._M_allocated_capacity
                      + 1,
                        &__for_end) )
              {
                v29 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&v35._anon_0._M_allocated_capacity
                      + 1);
                if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                HIDWORD(v35._anon_0._M_allocated_capacity) = *v29;
                if ( ActivityLunaRiteExcelConfigMgr::getAreaIdByBundleId(activity_luna_rite_config_mgr, *v29) == *(_DWORD *)(v3 + 64) )
                {
                  std::shared_ptr<Event>::shared_ptr(
                    (std::shared_ptr<Event> *const)&v42,
                    (const std::shared_ptr<Event> *)(v3 + 192));
                  PlayerGroupLinkComp::broadcastActiveGroupLuaEvent(
                    gruop_link_comp,
                    HIDWORD(v35._anon_0._M_allocated_capacity),
                    (EventPtr *)&v42);
                  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)&v42);
                }
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(
                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&v35._anon_0._M_allocated_capacity
                + 1);
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 224));
            }
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 192));
            common::tools::perf::make_shared<proto_log::PlayerLogBodyLunaRiteSacrifice>();
            v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteSacrifice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteSacrifice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            if ( *(_BYTE *)(((unsigned __int64)area_info >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)area_info >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyLunaRiteSacrifice::set_area_id(v30, area_info->area_id);
            v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteSacrifice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLunaRiteSacrifice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            v32 = std::set<unsigned int>::size(&area_info->sacrifice_set);
            proto_log::PlayerLogBodyLunaRiteSacrifice::set_progress(v31, v32);
            if ( *(_BYTE *)(((v35._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v33 = *(Player **)(v35._M_string_length + 24);
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v42, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLunaRiteSacrifice,void>(
              (std::shared_ptr<google::protobuf::Message> *const)(v3 + 192),
              (const std::shared_ptr<proto_log::PlayerLogBodyLunaRiteSacrifice> *)(v3 + 160));
            Player::printStatLog(v33, (MessagePtr *)(v3 + 192), &v42, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 192));
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v42);
            std::shared_ptr<proto_log::PlayerLogBodyLunaRiteSacrifice>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLunaRiteSacrifice> *const)(v3 + 160));
            v7 = 0;
          }
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/luna_rite_activity.cpp",
          "sacrifice",
          505);
        v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v43,
               (const char (*)[41])"[LUNA_RITE] area_id not match, area_id: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v3 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" battle_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v43);
        v7 = 10004;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/luna_rite_activity.cpp",
        "sacrifice",
        500);
      v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v43,
             (const char (*)[44])"[LUNA_RITE] consecrate_id is 0, battle_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v43);
      v7 = 5;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/luna_rite_activity.cpp",
      "sacrifice",
      495);
    v6 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v43,
           (const char (*)[64])"[LUNA_RITE] findLunaRiteBattleBuffExcelConfig fail, battle_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v43);
    v7 = 5;
  }
  result = v7;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 564: range 00000000145597D6-000000001455A069
__int64 __fastcall LunaRiteActivity::takeSacrificeReward(
        LunaRiteActivity *const this,
        uint32_t area_id,
        uint32_t buff_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::set<unsigned int>::size_type v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  PlayerItemComp *p_reward_id; // rdi
  ActivityLunaRiteExcelConfigMgr *activity_luna_rite_config_mgr; // [rsp+18h] [rbp-108h]
  const data::LunaRiteBattleBuffExcelConfig *buff_config_ptr; // [rsp+20h] [rbp-100h]
  LunaRiteAreaInfo *area_info; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Config> v32; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-E0h] BYREF
  char v34[192]; // [rsp+60h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 ret:594 64 4 11 area_id:563 80 4 11 buff_id:563 96 24 10 reason:593";
  *(_QWORD *)(v3 + 16) = LunaRiteActivity::takeSacrificeReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 64) = area_id;
  *(_DWORD *)(v3 + 80) = buff_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  activity_luna_rite_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.activity_luna_rite_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v32);
  buff_config_ptr = data::ActivityLunaRiteExcelConfigMgrBase::findLunaRiteBattleBuffExcelConfig(
                      activity_luna_rite_config_mgr,
                      *(_DWORD *)(v3 + 80));
  if ( buff_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->region_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)buff_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->region_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( buff_config_ptr->region_type == *(_DWORD *)(v3 + 64) )
    {
      area_info = LunaRiteActivity::getAreaInfo(this, *(_DWORD *)(v3 + 64));
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             &area_info->sacrifice_reward_set,
             (const unsigned int *)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/luna_rite_activity.cpp",
          "takeSacrificeReward",
          580);
        v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v33,
                (const char (*)[44])"[LUNA_RITE] reward already taken, area_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 64));
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" buff_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v33);
        result = 10007LL;
      }
      else
      {
        v16 = std::set<unsigned int>::size(&area_info->sacrifice_set);
        if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->number >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&buff_config_ptr->number >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v16 >= buff_config_ptr->number )
        {
          if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)buff_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->reward_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( buff_config_ptr->reward_id )
          {
            ActionReason::ActionReason(
              (ActionReason *const)(v3 + 96),
              ACTION_REASON_LUNA_RITE_TAKE_SACRIFICE_REWARD,
              ITEM_LIMIT_ACTIVITY_LUNA_RITE);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            ItemComp = Player::getItemComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)buff_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->reward_id >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 48) = PlayerItemComp::checkGrantReward(
                                     ItemComp,
                                     buff_config_ptr->reward_id,
                                     (const ActionReason *)(v3 + 96));
            if ( *(_DWORD *)(v3 + 48) )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/luna_rite_activity.cpp",
                "takeSacrificeReward",
                597);
              v24 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v33,
                      (const char (*)[47])"[LUNA_RITE] checkGrantReward fail. reward_id: ");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      &buff_config_ptr->reward_id);
              v26 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])" ret: ");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v26, (const int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v33);
              result = *(unsigned int *)(v3 + 48);
            }
            else
            {
              std::set<unsigned int>::insert(
                &area_info->sacrifice_reward_set,
                (const std::set<unsigned int>::value_type *)(v3 + 80));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              p_reward_id = Player::getItemComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)buff_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->reward_id >> 3)
                                                                               + 0x7FFF8000) )
              {
                p_reward_id = (PlayerItemComp *)&buff_config_ptr->reward_id;
                __asan_report_load4();
              }
              PlayerItemComp::grantReward(p_reward_id, buff_config_ptr->reward_id, (const ActionReason *)(v3 + 96), 0LL);
              result = 0LL;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/luna_rite_activity.cpp",
              "takeSacrificeReward",
              590);
            v20 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v33,
                    (const char (*)[49])"[LUNA_RITE] sacrifice count no reward, area_id: ");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 64));
            v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" buff_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v33);
            result = 5LL;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/luna_rite_activity.cpp",
            "takeSacrificeReward",
            585);
          v17 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v33,
                  (const char (*)[50])"[LUNA_RITE] sacrifice count not enough, area_id: ");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 64));
          v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" buff_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v33);
          result = 10008LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/luna_rite_activity.cpp",
        "takeSacrificeReward",
        574);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v33,
              (const char (*)[41])"[LUNA_RITE] area_id not match, area_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" buff_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = 10004LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/luna_rite_activity.cpp",
      "takeSacrificeReward",
      569);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v33,
           (const char (*)[53])"[LUNA_RITE] findLunaRiteBattleBuffExcelConfig fail. ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" buff_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = 5LL;
  }
  if ( v34 == (char *)v3 )
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

// Line 606: range 000000001455A06A-000000001455A2F3
std::vector<unsigned int> *__fastcall LunaRiteActivity::getSacrificeIndexVec(
        std::vector<unsigned int> *retstr,
        const LunaRiteActivity *const this,
        uint32_t area_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::pointer v6; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::pointer v8; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v9; // r13
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-99h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::_Self __y; // [rsp+28h] [rbp-98h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 area_id:605 64 8 8 iter:607";
  *(_QWORD *)(v3 + 16) = LunaRiteActivity::getSacrificeIndexVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = area_id;
  *(std::map<unsigned int,LunaRiteAreaInfo>::const_iterator *)(v3 + 64) = std::map<unsigned int,LunaRiteAreaInfo>::find(
                                                                            &this->area_info_map_,
                                                                            (const std::map<unsigned int,LunaRiteAreaInfo>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,LunaRiteAreaInfo>::cend(&this->area_info_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> > *const)(v3 + 64));
    M_node = std::set<unsigned int>::begin(&v6->second.sacrifice_set)._M_node;
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> > *const)(v3 + 64));
    v9 = std::set<unsigned int>::end(&v8->second.sacrifice_set)._M_node;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      retstr,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      (std::_Rb_tree_const_iterator<unsigned int>)v9,
      &__a);
    std::allocator<unsigned int>::~allocator(&__a);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned int>::vector(retstr);
  }
  if ( v14 == (char *)v3 )
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

// Line 616: range 000000001455A2F4-000000001455A454
std::set<unsigned int>::size_type __fastcall LunaRiteActivity::getSacrificeNum(
        const LunaRiteActivity *const this,
        uint32_t area_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::pointer v5; // rax
  std::set<unsigned int>::size_type result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 area_id:615 64 8 8 iter:617";
  *(_QWORD *)(v2 + 16) = LunaRiteActivity::getSacrificeNum;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = area_id;
  *(std::map<unsigned int,LunaRiteAreaInfo>::const_iterator *)(v2 + 64) = std::map<unsigned int,LunaRiteAreaInfo>::find(
                                                                            &this->area_info_map_,
                                                                            (const std::map<unsigned int,LunaRiteAreaInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,LunaRiteAreaInfo>::cend(&this->area_info_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> > *const)(v2 + 64));
    result = std::set<unsigned int>::size(&v5->second.sacrifice_set);
  }
  else
  {
    result = 0LL;
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

// Line 626: range 000000001455A456-000000001455A6DF
std::vector<unsigned int> *__fastcall LunaRiteActivity::getSacrificeRewardIndexVec(
        std::vector<unsigned int> *retstr,
        const LunaRiteActivity *const this,
        uint32_t area_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::pointer v6; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::pointer v8; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v9; // r13
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-99h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::_Self __y; // [rsp+28h] [rbp-98h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 area_id:625 64 8 8 iter:627";
  *(_QWORD *)(v3 + 16) = LunaRiteActivity::getSacrificeRewardIndexVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = area_id;
  *(std::map<unsigned int,LunaRiteAreaInfo>::const_iterator *)(v3 + 64) = std::map<unsigned int,LunaRiteAreaInfo>::find(
                                                                            &this->area_info_map_,
                                                                            (const std::map<unsigned int,LunaRiteAreaInfo>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,LunaRiteAreaInfo>::cend(&this->area_info_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> > *const)(v3 + 64));
    M_node = std::set<unsigned int>::begin(&v6->second.sacrifice_reward_set)._M_node;
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> > *const)(v3 + 64));
    v9 = std::set<unsigned int>::end(&v8->second.sacrifice_reward_set)._M_node;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      retstr,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      (std::_Rb_tree_const_iterator<unsigned int>)v9,
      &__a);
    std::allocator<unsigned int>::~allocator(&__a);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned int>::vector(retstr);
  }
  if ( v14 == (char *)v3 )
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

// Line 636: range 000000001455A6E0-000000001455A8BD
LunaRiteAreaInfo *__fastcall LunaRiteActivity::getAreaInfo(LunaRiteActivity *const this, uint32_t area_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // ecx
  LunaRiteAreaInfo *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> > __x; // [rsp+20h] [rbp-90h] BYREF
  LunaRiteAreaInfo *area_info; // [rsp+28h] [rbp-88h]
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 area_id:635 64 8 8 iter:637";
  *(_QWORD *)(v2 + 16) = LunaRiteActivity::getAreaInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = area_id;
  *(std::map<unsigned int,LunaRiteAreaInfo>::iterator *)(v2 + 64) = std::map<unsigned int,LunaRiteAreaInfo>::find(
                                                                      &this->area_info_map_,
                                                                      (const std::map<unsigned int,LunaRiteAreaInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,LunaRiteAreaInfo>::cend(&this->area_info_map_)._M_node;
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::_Rb_tree_const_iterator(
    &__x,
    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> >::iterator *)(v2 + 64));
  if ( std::operator==(&__x, &__y) )
  {
    area_info = std::map<unsigned int,LunaRiteAreaInfo>::operator[](
                  &this->area_info_map_,
                  (const std::map<unsigned int,LunaRiteAreaInfo>::key_type *)(v2 + 48));
    v5 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)area_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)area_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(area_info);
    }
    area_info->area_id = v5;
    result = area_info;
  }
  else
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,LunaRiteAreaInfo> > *const)(v2 + 64))->second;
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

// Line 648: range 000000001455A8BE-000000001455A8E9
void __cdecl LunaRiteActivity::onDailyRefresh(LunaRiteActivity *const this)
{
  LunaRiteActivity::tryRefresh(this);
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// Line 654: range 000000001455A8EA-000000001455AA9B
bool __cdecl LunaRiteActivity::checkCondIsMeet(LunaRiteActivity *const this, const data::NewActivityCond *cond)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  std::vector<int>::const_reference v6; // rdx
  uint32_t count; // [rsp+14h] [rbp-3Ch]
  unsigned __int64 val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type != NEW_ACTIVITY_COND_LUNA_RITE_ATMOSPHERE )
    return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
  if ( std::vector<int>::size(&cond->param) )
  {
    v6 = std::vector<int>::operator[](&cond->param, 0LL);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    count = *v6;
    return count <= LunaRiteActivity::getAtmosphere(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/luna_rite_activity.cpp",
      "checkCondIsMeet",
      661);
    v2 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v9, (const char (*)[12])"cond_type: ");
    v3 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
           v2,
           &cond->type);
    v4 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v3, (const char (*)[21])" param num invalid: ");
    val = std::vector<int>::size(&cond->param);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0;
  }
};

// Line 674: range 000000001455AA9C-000000001455ACEE
void __cdecl LunaRiteActivity::tryRefresh(LunaRiteActivity *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t now; // [rsp+18h] [rbp-48h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-44h]
  std::map<unsigned int,LunaRiteAreaInfo>::iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::map<unsigned int,LunaRiteAreaInfo>::iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  std::map<unsigned int,LunaRiteAreaInfo> *__for_range; // [rsp+30h] [rbp-30h]
  std::pair<unsigned int const,LunaRiteAreaInfo> *__in; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,LunaRiteAreaInfo> >::type *_; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,LunaRiteAreaInfo> >::type *area_info; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v11; // [rsp+50h] [rbp-10h] BYREF

  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( now > this->last_refresh_time_
    && !common::tools::TimeUtils::isSameDay(now, this->last_refresh_time_, time_offset) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->last_refresh_time_);
    }
    this->last_refresh_time_ = now;
    __for_range = &this->area_info_map_;
    __for_begin._M_node = std::map<unsigned int,LunaRiteAreaInfo>::begin(&this->area_info_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,LunaRiteAreaInfo>::end(&this->area_info_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,LunaRiteAreaInfo>(__in);
      area_info = std::get<1ul,unsigned int const,LunaRiteAreaInfo>(__in);
      if ( *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( area_info->hint_status != LUNA_RITE_HINT_STATUS_FINISH )
        area_info->hint_status = LUNA_RITE_HINT_STATUS_DEFAULT;
      std::_Rb_tree_iterator<std::pair<unsigned int const,LunaRiteAreaInfo>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->hint_point_index_);
    }
    this->hint_point_index_ = 0;
    std::map<unsigned long,LunaRiteHintPoint>::clear(&this->hint_point_map_);
  }
};

// Line 695: range 000000001455ACF0-000000001455ADF7
int32_t __cdecl LunaRiteActivity::clearByGm(LunaRiteActivity *const this)
{
  std::map<unsigned int,LunaRiteAreaInfo>::clear(&this->area_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->atmosphere_);
  }
  this->atmosphere_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_refresh_time_);
  }
  this->last_refresh_time_ = 0;
  std::map<unsigned long,LunaRiteHintPoint>::clear(&this->hint_point_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_point_index_);
  }
  this->hint_point_index_ = 0;
  return 0;
};

// Line 705: range 000000001455ADF8-000000001455B612
__int64 __fastcall LunaRiteActivity::onGMSetSacrifice(LunaRiteActivity *const this, uint32_t area_id, uint32_t num)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  size_t v9; // rax
  std::set<unsigned int> *p_sacrifice_set; // r14
  const std::set<unsigned int>::value_type *v11; // rax
  int32_t v12; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  int32_t *p_param1; // rax
  int32_t v15; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  uint32_t *p_uid; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v20; // rdx
  __int64 result; // rax
  uint32_t bundle_id; // [rsp+14h] [rbp-19Ch]
  std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-198h] BYREF
  std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-190h] BYREF
  size_t i; // [rsp+28h] [rbp-188h]
  const ActivityLunaRiteExcelConfigMgr *activity_luna_rite_config_mgr; // [rsp+30h] [rbp-180h]
  const std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig> *__for_range; // [rsp+38h] [rbp-178h]
  LunaRiteAreaInfo *area_info; // [rsp+40h] [rbp-170h]
  PlayerGroupLinkComp *gruop_link_comp; // [rsp+48h] [rbp-168h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-160h]
  const std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> *v32; // [rsp+58h] [rbp-158h]
  std::tuple_element<0,const std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *battle_id; // [rsp+60h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *config; // [rsp+68h] [rbp-148h]
  std::shared_ptr<Config> v35; // [rsp+70h] [rbp-140h] BYREF
  common::milog::MiLogStream v36; // [rsp+80h] [rbp-130h] BYREF
  char v37[272]; // [rsp+A0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 11 area_id:704 64 16 13 event_ptr:730 96 24 17 battle_id_vec:707 160 24 17 bundle_id_vec:737";
  *(_QWORD *)(v3 + 16) = LunaRiteActivity::onGMSetSacrifice;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = area_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v35);
  activity_luna_rite_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.activity_luna_rite_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v35);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
  __for_range = &activity_luna_rite_config_mgr->luna_rite_battle_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::begin(&activity_luna_rite_config_mgr->luna_rite_battle_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::end(&activity_luna_rite_config_mgr->luna_rite_battle_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false>::operator*(&__for_begin);
    battle_id = std::get<0ul,unsigned int const,data::LunaRiteBattleExcelConfig>(v32);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LunaRiteBattleExcelConfig>(v32);
    if ( *(_BYTE *)(((unsigned __int64)&config->region_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->region_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( config->region_type == *(_DWORD *)(v3 + 48) )
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 96), battle_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/luna_rite_activity.cpp",
      "onGMSetSacrifice",
      717);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v36,
           (const char (*)[31])"empty battle_id_vec. area_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v8 = -1;
  }
  else
  {
    area_info = LunaRiteActivity::getAreaInfo(this, *(_DWORD *)(v3 + 48));
    std::set<unsigned int>::clear(&area_info->sacrifice_set);
    for ( i = 0LL; i < num; ++i )
    {
      v9 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 96));
      if ( i >= v9 )
        break;
      p_sacrifice_set = &area_info->sacrifice_set;
      v11 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 96), i);
      std::set<unsigned int>::insert(p_sacrifice_set, v11);
    }
    EventUtil::createEvent((std::shared_ptr<Event> *)(v3 + 64), 84);
    if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v3 + 64)) )
    {
      v12 = *(_DWORD *)(v3 + 48);
      v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      p_param1 = &v13->param1;
      if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_param1);
      }
      v13->param1 = v12;
      v15 = std::set<unsigned int>::size(&area_info->sacrifice_set);
      v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v16->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v16->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        v16 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v16->param2);
      }
      v16->param2 = v15;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      p_uid = &v18->uid;
      if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_uid);
      }
      v18->uid = Uid;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      gruop_link_comp = Player::getGroupLinkComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerGroupLinkComp::findGroupBundleByActivity(
        (std::vector<unsigned int> *)(v3 + 160),
        gruop_link_comp,
        this->activity_id_);
      __for_range_0 = (std::vector<unsigned int> *)(v3 + 160);
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 160))._M_current;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v20 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        bundle_id = *v20;
        if ( ActivityLunaRiteExcelConfigMgr::getAreaIdByBundleId(activity_luna_rite_config_mgr, *v20) == *(_DWORD *)(v3 + 48) )
        {
          std::shared_ptr<Event>::shared_ptr(
            (std::shared_ptr<Event> *const)&v35,
            (const std::shared_ptr<Event> *)(v3 + 64));
          PlayerGroupLinkComp::broadcastActiveGroupLuaEvent(gruop_link_comp, bundle_id, (EventPtr *)&v35);
          std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)&v35);
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
    }
    v8 = 0;
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 64));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  result = v8;
  if ( v37 == (char *)v3 )
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

// Line 750: range 000000001455B614-000000001455B7D5
int32_t __cdecl LunaRiteActivity::onGMHint(LunaRiteActivity *const this, uint32_t area_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  LunaRiteAreaInfo *area_info; // [rsp+18h] [rbp-B8h]
  char v7[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 7 rsp:756";
  *(_QWORD *)(v2 + 16) = LunaRiteActivity::onGMHint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  area_info = LunaRiteActivity::getAreaInfo(this, area_id);
  if ( *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&area_info->hint_status >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( area_info->hint_status != LUNA_RITE_HINT_STATUS_FINISH )
    area_info->hint_status = LUNA_RITE_HINT_STATUS_DEFAULT;
  proto::LunaRiteHintPointRsp::LunaRiteHintPointRsp((proto::LunaRiteHintPointRsp *const)(v2 + 32));
  LunaRiteActivity::onNpcTalkTakeHintPoint(this, area_id, (proto::LunaRiteHintPointRsp *)(v2 + 32));
  proto::LunaRiteHintPointRsp::~LunaRiteHintPointRsp((proto::LunaRiteHintPointRsp *const)(v2 + 32));
  result = 0;
  if ( v7 == (char *)v2 )
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
  return result;
};
