// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/reliquary.cpp

// Line 27: range 0000000017570CCE-0000000017571025
int32_t __cdecl Reliquary::fromBin(Reliquary *const this, const proto::ItemBin *proto_item_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  uint32_t v6; // ecx
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rdx
  char v10; // al
  uint32_t v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h]
  const proto::EquipBin *proto_equip_bin; // [rsp+20h] [rbp-A0h]
  const proto::ReliquaryBin *proto_reliquary_bin; // [rsp+28h] [rbp-98h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-88h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 17 append_prop_id:40";
  *(_QWORD *)(v2 + 16) = Reliquary::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( Equip::fromBin((Equip *const)this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/reliquary.cpp",
      "fromBin",
      30);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v19, (const char (*)[14])"fromBin fails");
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = -1;
  }
  else
  {
    proto_equip_bin = proto::ItemBin::equip(proto_item_bin);
    proto_reliquary_bin = proto::EquipBin::reliquary(proto_equip_bin);
    v6 = proto::ReliquaryBin::level(proto_reliquary_bin);
    v7 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
    LOBYTE(proto_item_bin) = v7 != 0;
    v8 = (v7 != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= v7);
    if ( (_BYTE)v8 )
      __asan_report_store4(&this->level_, proto_item_bin, v8);
    this->level_ = v6;
    v9 = proto::ReliquaryBin::exp(proto_reliquary_bin);
    v10 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(proto_item_bin) = v10 != 0;
      __asan_report_store4(&this->exp_, proto_item_bin, v9);
    }
    this->exp_ = v9;
    v11 = proto::ReliquaryBin::main_prop_id(proto_reliquary_bin);
    v12 = *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000);
    LOBYTE(proto_item_bin) = v12 != 0;
    v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= v12);
    if ( (_BYTE)v13 )
      __asan_report_store4(&this->main_prop_id_, proto_item_bin, v13);
    this->main_prop_id_ = v11;
    __for_range = proto::ReliquaryBin::append_prop_id_list(proto_reliquary_bin);
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
      std::vector<unsigned int>::emplace_back<unsigned int &>(
        &this->append_prop_id_vec_,
        (unsigned int *)(v2 + 32),
        (unsigned int *)&this->append_prop_id_vec_);
      ++__for_begin;
    }
    result = 0;
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

// Line 50: range 0000000017571026-00000000175712B4
int32_t __cdecl Reliquary::toBin(const Reliquary *const this, proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int *v4; // rax
  unsigned int *v5; // rdx
  unsigned int val; // [rsp+10h] [rbp-60h] BYREF
  unsigned int append_prop_id; // [rsp+14h] [rbp-5Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  proto::EquipBin *proto_equip_bin; // [rsp+28h] [rbp-48h]
  proto::ReliquaryBin *proto_reliquary_bin; // [rsp+30h] [rbp-40h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-30h] BYREF

  if ( Equip::toBin((const Equip *const)this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/reliquary.cpp",
      "toBin",
      53);
    v2 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v13,
           (const char (*)[22])"toBin fails, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    proto_equip_bin = proto::ItemBin::mutable_equip(proto_item_bin);
    proto_reliquary_bin = proto::EquipBin::mutable_reliquary(proto_equip_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    proto::ReliquaryBin::set_level(proto_reliquary_bin, this->level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->exp_);
    }
    proto::ReliquaryBin::set_exp(proto_reliquary_bin, this->exp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->main_prop_id_);
    }
    proto::ReliquaryBin::set_main_prop_id(proto_reliquary_bin, this->main_prop_id_);
    __for_range = &this->append_prop_id_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->append_prop_id_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->append_prop_id_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v4 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      append_prop_id = *v5;
      proto::ReliquaryBin::add_append_prop_id_list(proto_reliquary_bin, append_prop_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 72: range 00000000175712B6-0000000017571523
int32_t __cdecl Reliquary::toClient(const Reliquary *const this, proto::Item *proto_item)
{
  unsigned int *v3; // rax
  google::protobuf::uint32 *v4; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  proto::Equip *proto_equip; // [rsp+28h] [rbp-48h]
  proto::Reliquary *proto_reliquary; // [rsp+30h] [rbp-40h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  if ( Equip::toClient((const Equip *const)this, proto_item) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/reliquary.cpp",
      "toClient",
      75);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v10, (const char (*)[15])"toClient fails");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    proto_equip = proto::Item::mutable_equip(proto_item);
    proto_reliquary = proto::Equip::mutable_reliquary(proto_equip);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    proto::Reliquary::set_level(proto_reliquary, this->level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->exp_);
    }
    proto::Reliquary::set_exp(proto_reliquary, this->exp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->main_prop_id_);
    }
    proto::Reliquary::set_main_prop_id(proto_reliquary, this->main_prop_id_);
    __for_range = &this->append_prop_id_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->append_prop_id_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->append_prop_id_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v3 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v4 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3);
      }
      proto::Reliquary::add_append_prop_id_list(proto_reliquary, *v4);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 93: range 0000000017571524-0000000017571767
int32_t __cdecl Reliquary::toSnapshot(const Reliquary *const this, proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int *v4; // rax
  unsigned int *v5; // rdx
  unsigned int val; // [rsp+10h] [rbp-60h] BYREF
  unsigned int append_prop_id; // [rsp+14h] [rbp-5Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  proto::EquipBin *proto_equip_bin; // [rsp+28h] [rbp-48h]
  proto::ReliquaryBin *proto_reliquary_bin; // [rsp+30h] [rbp-40h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-30h] BYREF

  if ( Equip::toSnapshot((const Equip *const)this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/reliquary.cpp",
      "toSnapshot",
      96);
    v2 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v13,
           (const char (*)[27])"toSnapshot fails, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    proto_equip_bin = proto::ItemBin::mutable_equip(proto_item_bin);
    proto_reliquary_bin = proto::EquipBin::mutable_reliquary(proto_equip_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    proto::ReliquaryBin::set_level(proto_reliquary_bin, this->level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->main_prop_id_);
    }
    proto::ReliquaryBin::set_main_prop_id(proto_reliquary_bin, this->main_prop_id_);
    __for_range = &this->append_prop_id_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->append_prop_id_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->append_prop_id_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v4 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      append_prop_id = *v5;
      proto::ReliquaryBin::add_append_prop_id_list(proto_reliquary_bin, append_prop_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 111: range 0000000017571768-0000000017571808
int32_t __cdecl Reliquary::toClient(const Reliquary *const this, proto::SceneReliquaryInfo *reliquary_info)
{
  uint32_t ItemId; // edx
  uint64_t Guid; // rdx

  ItemId = Item::getItemId(this);
  proto::SceneReliquaryInfo::set_item_id(reliquary_info, ItemId);
  Guid = Item::getGuid(this);
  proto::SceneReliquaryInfo::set_guid(reliquary_info, Guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto::SceneReliquaryInfo::set_level(reliquary_info, this->level_);
  return 0;
};

// Line 119: range 000000001757180A-0000000017571A88
int32_t __cdecl Reliquary::toShowEquipInfo(const Reliquary *const this, proto::ShowEquip *show_equip)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int *v4; // rax
  unsigned int *v5; // rdx
  unsigned int val; // [rsp+18h] [rbp-58h] BYREF
  unsigned int append_prop_id; // [rsp+1Ch] [rbp-54h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  proto::Reliquary *proto_reliquary; // [rsp+30h] [rbp-40h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-30h] BYREF

  if ( Equip::toShowEquipInfo((const Equip *const)this, show_equip) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/reliquary.cpp",
      "toShowEquipInfo",
      122);
    v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v12,
           (const char (*)[34])"toShowEquipInfo failed, item_id::");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    proto_reliquary = proto::ShowEquip::mutable_reliquary(show_equip);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    proto::Reliquary::set_level(proto_reliquary, this->level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->exp_);
    }
    proto::Reliquary::set_exp(proto_reliquary, this->exp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->main_prop_id_);
    }
    proto::Reliquary::set_main_prop_id(proto_reliquary, this->main_prop_id_);
    __for_range = &this->append_prop_id_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->append_prop_id_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->append_prop_id_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v4 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      append_prop_id = *v5;
      proto::Reliquary::add_append_prop_id_list(proto_reliquary, append_prop_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 140: range 0000000017571A8A-000000001757221C
int32_t __cdecl Reliquary::init(Reliquary *const this, Player *player, bool is_first_create)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // r13
  PlayerItemComp *ItemComp; // r14
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v12; // r13
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // r14
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // r13
  unsigned int (__fastcall **v16)(Reliquary *const); // rax
  common::milog::MiLogStream *v17; // r13
  uint32_t MainPropId; // [rsp+8h] [rbp-D8h]
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  uint32_t idx; // [rsp+30h] [rbp-B0h]
  uint32_t main_prop_id; // [rsp+34h] [rbp-ACh]
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-90h] BYREF
  char v26[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 18 append_prop_id:174";
  *(_QWORD *)(v3 + 16) = Reliquary::init;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( Equip::init((Equip *const)this, player, is_first_create) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/reliquary.cpp",
      "init",
      143);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v25,
           (const char (*)[32])"Reliquary init failed, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = -1;
    goto LABEL_29;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  if ( !this->level_ )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/reliquary.cpp",
      "init",
      149);
    v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v25,
           (const char (*)[30])"invalid equip_level, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = -1;
    goto LABEL_29;
  }
  reliquary_config_ptr = Reliquary::getReliquaryConfig(this);
  if ( !reliquary_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/reliquary.cpp",
      "init",
      156);
    v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v25,
           (const char (*)[35])"getReliquaryConfig fails, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = -1;
    goto LABEL_29;
  }
  if ( is_first_create )
  {
    ItemComp = Player::getItemComp(player);
    ItemId = Item::getItemId(this);
    main_prop_id = PlayerItemComp::generateReliquaryMainPropId(ItemComp, ItemId);
    if ( !main_prop_id )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/item/reliquary.cpp",
        "init",
        165);
      v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v25,
              (const char (*)[45])"generateReliquaryMainPropId failed, item_id:");
      val = Item::getItemId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = -1;
      goto LABEL_29;
    }
    Reliquary::setMainPropId(this, main_prop_id);
    std::vector<unsigned int>::clear(&this->append_prop_id_vec_);
    for ( idx = 0; ; ++idx )
    {
      if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->append_prop_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)reliquary_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->append_prop_num >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&reliquary_config_ptr->append_prop_num);
      }
      if ( idx >= reliquary_config_ptr->append_prop_num )
        break;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.reliquary_config_mgr;
      MainPropId = Reliquary::getMainPropId(this);
      v14 = Item::getItemId(this);
      *(_DWORD *)(v3 + 32) = ReliquaryExcelConfigMgr::generateAppendPropId(
                               p_reliquary_config_mgr,
                               v14,
                               MainPropId,
                               &this->append_prop_id_vec_);
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( !*(_DWORD *)(v3 + 32) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/item/reliquary.cpp",
          "init",
          177);
        v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v25,
                (const char (*)[38])"generateAppendPropId failed, item_id:");
        val = Item::getItemId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = -1;
        goto LABEL_29;
      }
      std::vector<unsigned int>::emplace_back<unsigned int &>(
        &this->append_prop_id_vec_,
        (unsigned int *)(v3 + 32),
        (unsigned int *)&this->append_prop_id_vec_);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v16 = (unsigned int (__fastcall **)(Reliquary *const))(this->_vptr_Item + 14);
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*v16)(this) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/reliquary.cpp",
      "init",
      186);
    v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v25,
            (const char (*)[27])"calcProp failed, item_id::");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = -1;
  }
  else
  {
    result = 0;
  }
LABEL_29:
  if ( v26 == (char *)v3 )
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

// Line 194: range 000000001757221E-000000001757222C
data::ItemType __cdecl Reliquary::getItemType(const Reliquary *const this)
{
  return 3;
};

// Line 200: range 000000001757222E-000000001757232B
data::EquipType __cdecl Reliquary::getEquipType(const Reliquary *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  reliquary_config_ptr = Reliquary::getReliquaryConfig(this);
  if ( reliquary_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->equip_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reliquary_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->equip_type >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&reliquary_config_ptr->equip_type);
    }
    return reliquary_config_ptr->equip_type;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/reliquary.cpp",
      "getEquipType",
      204);
    v1 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v5,
           (const char (*)[26])"getConfig fails, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 212: range 000000001757232C-000000001757240B
ItemParam __cdecl Reliquary::toItemParam(const Reliquary *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ItemParam v4; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 item_param:213";
  *(_QWORD *)(v1 + 16) = Reliquary::toItemParam;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(ItemParam *)(v1 + 32) = Item::toItemParam(this);
  *(_DWORD *)(v1 + 40) = Reliquary::getLevel(this);
  v4 = *(ItemParam *)(v1 + 32);
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v4;
};

// Line 220: range 000000001757240C-000000001757252D
const data::ReliquaryExcelConfig *__cdecl Reliquary::getReliquaryConfig(const Reliquary *const this)
{
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // rbx
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.reliquary_config_mgr;
  ItemId = Item::getItemId(this);
  reliquary_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryExcelConfig(p_reliquary_config_mgr, ItemId);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( reliquary_config_ptr )
    return reliquary_config_ptr;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/item/reliquary.cpp",
    "getReliquaryConfig",
    224);
  v3 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
         &v8,
         (const char (*)[41])"findReliquaryExcelConfig fails, item_id:");
  val = Item::getItemId(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  common::milog::MiLogStream::~MiLogStream(&v8);
  return 0LL;
};

// Line 232: range 000000001757252E-0000000017572623
uint32_t __cdecl Reliquary::getRankLevel(const Reliquary *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  reliquary_config_ptr = Reliquary::getReliquaryConfig(this);
  if ( reliquary_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&reliquary_config_ptr->rank_level);
    }
    return reliquary_config_ptr->rank_level;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/reliquary.cpp",
      "getRankLevel",
      236);
    v1 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v5,
           (const char (*)[26])"getConfig fails, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 244: range 0000000017572624-000000001757326B
__int64 __fastcall Reliquary::addExp(Reliquary *const this, __int32 exp, __int8 is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rbx
  unsigned int v7; // r14d
  uint32_t level; // r14d
  Player *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // r15
  uint32_t v12; // r14d
  uint32_t RankLevel; // eax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t v19; // ecx
  uint32_t v20; // r14d
  ReliquaryExcelConfigMgr *v21; // r14
  uint32_t v22; // r15d
  uint32_t v23; // eax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // ecx
  uint32_t v31; // r14d
  Player *v32; // rax
  Player *v33; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  std::string v36; // [rsp+0h] [rbp-110h]
  unsigned int ItemId; // [rsp+24h] [rbp-ECh] BYREF
  unsigned int val; // [rsp+28h] [rbp-E8h] BYREF
  uint32_t old_level; // [rsp+2Ch] [rbp-E4h]
  const data::ReliquaryLevelExcelConfig *level_config_ptr; // [rsp+30h] [rbp-E0h]
  const data::ReliquaryLevelExcelConfig *next_level_config_ptr; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<ReliquaryAddExpEvent> __r; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v43; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v44; // [rsp+60h] [rbp-B0h] BYREF
  char v45[144]; // [rsp+80h] [rbp-90h] BYREF

  *(&v36._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v36._anon_0._M_allocated_capacity) = exp;
  v36._anon_0._M_local_buf[0] = is_notify;
  v3 = (unsigned __int64)v45;
  v36._M_string_length = (std::string::size_type)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 9 holer:264 48 4 7 exp:243 64 16 14 player_ptr:257";
  *(_QWORD *)(v3 + 16) = Reliquary::addExp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = exp;
  if ( *(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    level = this->level_;
    if ( level < Reliquary::getMaxLevel(this) )
    {
      Item::getItemOwner((Item *const)(v3 + 64));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/reliquary.cpp",
          "addExp",
          260);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v44, (const char (*)[19])"player_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v44);
        v7 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        BasicComp = Player::getBasicComp(v9);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v44, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x6B0u, v36);
        std::string::~string(&v44);
        if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 124) >> 3) + 0x7FFF8000) != 0
          && (char)(((v36._anon_0._M_local_buf[8] + 124) & 7) + 3) >= *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity
                                                                                   + 1)
                                                                                 + 124) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 124);
        }
        old_level = *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 124);
        if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 128) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 128) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 128);
        }
        *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 128) += *(_DWORD *)(v3 + 48);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v43);
        p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.reliquary_config_mgr;
        if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 124) >> 3) + 0x7FFF8000) != 0
          && (char)(((v36._anon_0._M_local_buf[8] + 124) & 7) + 3) >= *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity
                                                                                   + 1)
                                                                                 + 124) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 124);
        }
        v12 = *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 124);
        RankLevel = Reliquary::getRankLevel(*((const Reliquary *const *)&v36._anon_0._M_allocated_capacity + 1));
        level_config_ptr = ReliquaryExcelConfigMgr::findReliquaryLevelExcelConfig(
                             p_reliquary_config_mgr,
                             RankLevel,
                             v12);
        std::shared_ptr<Config>::~shared_ptr(&v43);
        if ( level_config_ptr )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 128) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 128) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 128);
            }
            v19 = *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 128);
            if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&level_config_ptr->exp);
            }
            if ( v19 < level_config_ptr->exp )
              break;
            if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 124) >> 3) + 0x7FFF8000) != 0
              && (char)(((v36._anon_0._M_local_buf[8] + 124) & 7) + 3) >= *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity
                                                                                       + 1)
                                                                                     + 124) >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 124);
            }
            v20 = *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 124);
            if ( v20 >= Reliquary::getMaxLevel(*((Reliquary *const *)&v36._anon_0._M_allocated_capacity + 1)) )
              break;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v43);
            v21 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.reliquary_config_mgr;
            if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 124) >> 3) + 0x7FFF8000) != 0
              && (char)(((v36._anon_0._M_local_buf[8] + 124) & 7) + 3) >= *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity
                                                                                       + 1)
                                                                                     + 124) >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 124);
            }
            v22 = *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 124) + 1;
            v23 = Reliquary::getRankLevel(*((const Reliquary *const *)&v36._anon_0._M_allocated_capacity + 1));
            next_level_config_ptr = ReliquaryExcelConfigMgr::findReliquaryLevelExcelConfig(v21, v23, v22);
            std::shared_ptr<Config>::~shared_ptr(&v43);
            if ( !next_level_config_ptr )
            {
              common::milog::MiLogStream::create(
                &v44,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/item/reliquary.cpp",
                "addExp",
                287);
              v24 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v44,
                      (const char (*)[46])"findWeaponLevelExcelConfig failed, weapon_id:");
              ItemId = Item::getItemId(*((const Item *const *)&v36._anon_0._M_allocated_capacity + 1));
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &ItemId);
              v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" level:");
              if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 124) >> 3) + 0x7FFF8000) != 0
                && (char)(((v36._anon_0._M_local_buf[8] + 124) & 7) + 3) >= *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity
                                                                                         + 1)
                                                                                       + 124) >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 124);
              }
              val = *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 124) + 1;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
              common::milog::MiLogStream::~MiLogStream(&v44);
              break;
            }
            if ( Reliquary::upgradeLevel(*((Reliquary *const *)&v36._anon_0._M_allocated_capacity + 1), 0) )
            {
              common::milog::MiLogStream::create(
                &v44,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/item/reliquary.cpp",
                "addExp",
                292);
              v27 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v44,
                      (const char (*)[38])"weapon upgradeLevel fails, weapon_id:");
              val = Item::getItemId(*((const Item *const *)&v36._anon_0._M_allocated_capacity + 1));
              v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
              v29 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v28, (const char (*)[8])" level:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(*(&v36._anon_0._M_allocated_capacity + 1) + 124));
              common::milog::MiLogStream::~MiLogStream(&v44);
              break;
            }
            if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 128) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 128) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 128);
            }
            v30 = *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 128);
            if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&level_config_ptr->exp);
            }
            *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 128) = v30 - level_config_ptr->exp;
            level_config_ptr = next_level_config_ptr;
          }
          if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 124) >> 3) + 0x7FFF8000) != 0
            && (char)(((v36._anon_0._M_local_buf[8] + 124) & 7) + 3) >= *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity
                                                                                     + 1)
                                                                                   + 124) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 124);
          }
          v31 = *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 124);
          if ( v31 >= Reliquary::getMaxLevel(*((Reliquary *const *)&v36._anon_0._M_allocated_capacity + 1)) )
          {
            if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 128) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 128) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(
                *(&v36._anon_0._M_allocated_capacity + 1) + 128,
                ((v36._anon_0._M_local_buf[8] + 124) & 7u) + 3,
                *(&v36._anon_0._M_allocated_capacity + 1) + 128);
            }
            *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 128) = 0;
          }
          if ( v36._anon_0._M_local_buf[0] )
            Item::notifyItemChange(*((Item *const *)&v36._anon_0._M_allocated_capacity + 1));
          if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 124) >> 3) + 0x7FFF8000) != 0
            && (char)(((v36._anon_0._M_local_buf[8] + 124) & 7) + 3) >= *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity
                                                                                     + 1)
                                                                                   + 124) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 124);
          }
          if ( old_level != *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 124) )
          {
            v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            Reliquary::logRelicLevelup(
              *((Reliquary *const *)&v36._anon_0._M_allocated_capacity + 1),
              v32,
              old_level,
              1u);
          }
          v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          EventComp = Player::getEventComp(v33);
          val = Item::getItemId(*((const Item *const *)&v36._anon_0._M_allocated_capacity + 1));
          common::tools::perf::make_shared<ReliquaryAddExpEvent,unsigned int,unsigned int &>(
            (unsigned int *)&__r,
            &val,
            (unsigned int *)(v3 + 48),
            &val);
          std::shared_ptr<BaseEvent>::shared_ptr<ReliquaryAddExpEvent,void>(
            (std::shared_ptr<BaseEvent> *const)&v43,
            &__r);
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v43);
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v43);
          std::shared_ptr<ReliquaryAddExpEvent>::~shared_ptr(&__r);
          v7 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/reliquary.cpp",
            "addExp",
            273);
          v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v44,
                  (const char (*)[46])"findReliquaryLevelExcelConfig fails, item_id:");
          ItemId = Item::getItemId(*((const Item *const *)&v36._anon_0._M_allocated_capacity + 1));
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &ItemId);
          v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" rank_level:");
          val = Reliquary::getRankLevel(*((const Reliquary *const *)&v36._anon_0._M_allocated_capacity + 1));
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
          v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v18,
            (const unsigned int *)(*(&v36._anon_0._M_allocated_capacity + 1) + 124));
          common::milog::MiLogStream::~MiLogStream(&v44);
          v7 = -1;
        }
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/reliquary.cpp",
      "addExp",
      247);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v44,
           (const char (*)[27])"weapn addExp 0, weapon_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v7 = 0;
  }
  result = v7;
  if ( v36._M_string_length == v3 )
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

// Line 319: range 000000001757326C-0000000017573AF2
int32_t __cdecl Reliquary::upgradeLevel(Reliquary *const this, bool is_notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v8; // rax
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // r14
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v11; // r14
  void (__fastcall **v12)(Reliquary *const); // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  FightPropComp *FightPropComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  FightPropComp *v16; // r14
  const std::map<data::FightPropType,float> *Prop; // rax
  Player *v18; // rax
  unsigned int *p_rank_level; // r14
  const unsigned int *v20; // r9
  int32_t result; // eax
  std::_Rb_tree_header *v22; // [rsp+0h] [rbp-1E0h]
  uint32_t main_prop_id; // [rsp+8h] [rbp-1D8h]
  unsigned int *main_prop_ida; // [rsp+8h] [rbp-1D8h]
  PlayerEventComp *const main_prop_idb; // [rsp+8h] [rbp-1D8h]
  unsigned int val; // [rsp+2Ch] [rbp-1B4h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+30h] [rbp-1B0h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+38h] [rbp-1A8h] BYREF
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+40h] [rbp-1A0h]
  const std::vector<unsigned int> *level_vec; // [rsp+48h] [rbp-198h]
  Equip __r[3]; // [rsp+50h] [rbp-190h] BYREF

  v2 = (unsigned __int64)&__r[0].prop_map_._M_t._M_impl.std::_Rb_tree_header;
  v22 = &__r[0].prop_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 13 old_level:347 64 16 14 avatar_ptr:352 96 16 14 player_ptr:359 128 48 20 fight_prop_gua"
                        "rd:320 208 48 16 old_prop_map:330";
  *(_QWORD *)(v2 + 16) = Reliquary::upgradeLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v2 + 128));
  Equip::getOwner(__r);
  std::shared_ptr<Creature>::shared_ptr<Avatar,void>(
    (std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount,
    (std::shared_ptr<Avatar> *)__r);
  FightPropGuard::addCreature((FightPropGuard *const)(v2 + 128), (CreaturePtr *)&__r[0]._M_weak_this._M_refcount, 0);
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount);
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)__r);
  reliquary_config_ptr = Reliquary::getReliquaryConfig(this);
  if ( !reliquary_config_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__r[0].guid_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/reliquary.cpp",
      "upgradeLevel",
      326);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           (common::milog::MiLogStream *const)&__r[0].guid_,
           (const char (*)[26])"getConfig fails, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0].guid_);
    v6 = -1;
    goto LABEL_26;
  }
  std::map<data::FightPropType,float>::map((std::map<data::FightPropType,float> *const)(v2 + 208));
  std::map<data::FightPropType,float>::swap((std::map<data::FightPropType,float> *const)(v2 + 208), &this->prop_map_);
  level_vec = &reliquary_config_ptr->add_prop_levels;
  __rhs._M_current = std::vector<unsigned int>::end(&reliquary_config_ptr->add_prop_levels)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  val = this->level_ + 1;
  M_current = std::vector<unsigned int>::end(level_vec)._M_current;
  v8._M_current = std::vector<unsigned int>::begin(level_vec)._M_current;
  __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                       v8,
                       (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                       &val)._M_current;
  if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs) )
    goto LABEL_12;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&__r[0]._M_weak_this._M_refcount);
  p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r[0]._M_weak_this._M_refcount)->design_config.txt_config_mgr.reliquary_config_mgr;
  main_prop_id = Reliquary::getMainPropId(this);
  ItemId = Item::getItemId(this);
  *(_DWORD *)(v2 + 48) = ReliquaryExcelConfigMgr::generateAppendPropId(
                           p_reliquary_config_mgr,
                           ItemId,
                           main_prop_id,
                           &this->append_prop_id_vec_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r[0]._M_weak_this._M_refcount);
  if ( *(_DWORD *)(v2 + 48) )
  {
    std::vector<unsigned int>::push_back(
      &this->append_prop_id_vec_,
      (const std::vector<unsigned int>::value_type *)(v2 + 48));
LABEL_12:
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    *(_DWORD *)(v2 + 48) = this->level_++;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (void (__fastcall **)(Reliquary *const))(this->_vptr_Item + 14);
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*v12)(this);
    Equip::getOwner((const Equip *const)(v2 + 64));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 64), 0LL) )
    {
      v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FightPropComp = Creature::getFightPropComp(v13);
      FightPropComp::reduceProps(FightPropComp, (const FightPropMap *)(v2 + 208), 0);
      v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v16 = Creature::getFightPropComp(v15);
      Prop = Equip::getProp((const Equip *const)this);
      FightPropComp::modifyProps(v16, Prop, 0);
    }
    Item::getItemOwner((Item *const)(v2 + 96));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
    {
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      main_prop_ida = (unsigned int *)Player::getEventComp(v18);
      p_rank_level = &reliquary_config_ptr->rank_level;
      val = Item::getItemId(this);
      common::tools::perf::make_shared<ReliquaryLevelupEvent,unsigned int,unsigned int const&,unsigned int &,unsigned int &>(
        (unsigned int *)__r,
        &val,
        p_rank_level,
        &this->level_,
        (unsigned int *)(v2 + 48),
        v20,
        (unsigned int *)&__r[0].prop_map_._M_t._M_impl.std::_Rb_tree_header,
        main_prop_ida);
      std::shared_ptr<BaseEvent>::shared_ptr<ReliquaryLevelupEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&__r[0]._M_weak_this._M_refcount,
        (std::shared_ptr<ReliquaryLevelupEvent> *)__r);
      PlayerEventComp::notifyEvent(main_prop_idb, (BaseEventPtr *)&__r[0]._M_weak_this._M_refcount);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r[0]._M_weak_this._M_refcount);
      std::shared_ptr<ReliquaryLevelupEvent>::~shared_ptr((std::shared_ptr<ReliquaryLevelupEvent> *const)__r);
    }
    if ( is_notify )
      Item::notifyItemChange(this);
    v6 = 0;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
    goto LABEL_25;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&__r[0].guid_,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/item/reliquary.cpp",
    "upgradeLevel",
    340);
  v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          (common::milog::MiLogStream *const)&__r[0].guid_,
          (const char (*)[38])"generateAppendPropId failed, item_id:");
  val = Item::getItemId(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0].guid_);
  std::map<data::FightPropType,float>::swap((std::map<data::FightPropType,float> *const)(v2 + 208), &this->prop_map_);
  v6 = -1;
LABEL_25:
  std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v2 + 208));
LABEL_26:
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v2 + 128));
  result = v6;
  if ( v22 == (std::_Rb_tree_header *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
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
  return result;
};

// Line 374: range 0000000017573AF4-0000000017573BA1
uint32_t __cdecl Reliquary::getTotalExp(Reliquary *const this)
{
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // rbx
  uint32_t Level; // r12d
  uint32_t RankLevel; // eax
  uint32_t total_exp; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.reliquary_config_mgr;
  Level = Reliquary::getLevel(this);
  RankLevel = Reliquary::getRankLevel(this);
  total_exp = ReliquaryExcelConfigMgr::getTotalExpToLevel(p_reliquary_config_mgr, RankLevel, Level);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return total_exp + Reliquary::getExp(this);
};

// Line 381: range 0000000017573BA2-0000000017573C64
uint32_t __cdecl Reliquary::getRemainExpToMax(Reliquary *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t rank_level; // [rsp+10h] [rbp-30h]
  uint32_t total_exp; // [rsp+14h] [rbp-2Ch]
  uint32_t max_level; // [rsp+18h] [rbp-28h]
  uint32_t max_exp; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v7[2]; // [rsp+20h] [rbp-20h] BYREF

  rank_level = Reliquary::getRankLevel(this);
  total_exp = Reliquary::getTotalExp(this);
  max_level = Reliquary::getMaxLevel(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7);
  max_exp = ReliquaryExcelConfigMgr::getTotalExpToLevel(
              &v1->design_config.txt_config_mgr.reliquary_config_mgr,
              rank_level,
              max_level);
  std::shared_ptr<Config>::~shared_ptr(v7);
  if ( max_exp <= total_exp )
    return 0;
  else
    return max_exp - total_exp;
};

// Line 398: range 0000000017573C66-0000000017573CD8
uint32_t __cdecl Reliquary::getMaxLevel(Reliquary *const this)
{
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+18h] [rbp-8h]

  reliquary_config_ptr = Reliquary::getReliquaryConfig(this);
  if ( !reliquary_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->max_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)reliquary_config_ptr - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->max_level >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&reliquary_config_ptr->max_level);
  }
  return reliquary_config_ptr->max_level;
};

// Line 410: range 0000000017573CDA-00000000175744BE
int32_t __cdecl Reliquary::calcProp(Reliquary *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // r14
  uint32_t MainPropId; // eax
  common::milog::MiLogStream *v6; // r14
  int32_t result; // eax
  ReliquaryExcelConfigMgr *v8; // r14
  uint32_t Level; // r15d
  uint32_t RankLevel; // eax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  data::FightPropType prop_type; // ecx
  std::map<data::FightPropType,float>::mapped_type *v15; // rax
  float v16; // xmm1_4
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v17; // rax
  _DWORD *v18; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::map<data::FightPropType,float>::mapped_type *v21; // rax
  float v22; // xmm1_4
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  std::vector<data::PropValConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<data::PropValConfig>::const_iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  const data::ReliquaryMainPropExcelConfig *main_prop_config_ptr; // [rsp+30h] [rbp-D0h]
  const data::ReliquaryLevelExcelConfig *level_config_ptr; // [rsp+38h] [rbp-C8h]
  const std::vector<data::PropValConfig> *__for_range; // [rsp+40h] [rbp-C0h]
  const data::PropValConfig *add_prop; // [rsp+48h] [rbp-B8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-B0h]
  const data::ReliquaryAffixExcelConfig *append_prop_config_ptr; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v32; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-90h] BYREF
  char v34[112]; // [rsp+90h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 18 append_prop_id:438";
  *(_QWORD *)(v1 + 16) = Reliquary::calcProp;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  std::map<data::FightPropType,float>::clear(&this->prop_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.reliquary_config_mgr;
  MainPropId = Reliquary::getMainPropId(this);
  main_prop_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryMainPropExcelConfig(
                           p_reliquary_config_mgr,
                           MainPropId);
  std::shared_ptr<Config>::~shared_ptr(&v32);
  if ( main_prop_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v8 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.reliquary_config_mgr;
    Level = Reliquary::getLevel(this);
    RankLevel = Reliquary::getRankLevel(this);
    level_config_ptr = ReliquaryExcelConfigMgr::findReliquaryLevelExcelConfig(v8, RankLevel, Level);
    std::shared_ptr<Config>::~shared_ptr(&v32);
    if ( level_config_ptr )
    {
      __for_range = &level_config_ptr->add_props;
      __for_begin._M_current = std::vector<data::PropValConfig>::begin(&level_config_ptr->add_props)._M_current;
      __for_end._M_current = std::vector<data::PropValConfig>::end(&level_config_ptr->add_props)._M_current;
      while ( __gnu_cxx::operator!=<data::PropValConfig const*,std::vector<data::PropValConfig>>(
                &__for_begin,
                &__for_end) )
      {
        add_prop = __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)&add_prop->prop_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&add_prop->prop_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&add_prop->prop_type);
        }
        prop_type = add_prop->prop_type;
        if ( *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->prop_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->prop_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&main_prop_config_ptr->prop_type);
        }
        if ( prop_type == main_prop_config_ptr->prop_type )
        {
          v15 = std::map<data::FightPropType,float>::operator[](&this->prop_map_, &add_prop->prop_type);
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          v16 = *v15;
          if ( *(_BYTE *)(((unsigned __int64)&add_prop->value >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)add_prop + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&add_prop->value >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(&add_prop->value);
          }
          *v15 = add_prop->value + v16;
          break;
        }
        __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator++(&__for_begin);
      }
      __for_range_0 = &this->append_prop_id_vec_;
      __for_begin._M_current = (const data::PropValConfig *)std::vector<unsigned int>::begin(&this->append_prop_id_vec_)._M_current;
      __for_end._M_current = (const data::PropValConfig *)std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v17 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        v18 = v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v17);
        }
        *(_DWORD *)(v1 + 32) = *v18;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
        append_prop_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryAffixExcelConfig(
                                   &v19->design_config.txt_config_mgr.reliquary_config_mgr,
                                   *(_DWORD *)(v1 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v32);
        if ( !append_prop_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/reliquary.cpp",
            "calcProp",
            443);
          v20 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v33,
                  (const char (*)[49])"findReliquaryExcelConfig failed, append_prop_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v33);
          result = -1;
          goto LABEL_33;
        }
        v21 = std::map<data::FightPropType,float>::operator[](&this->prop_map_, &append_prop_config_ptr->prop_type);
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        v22 = *v21;
        if ( *(_BYTE *)(((unsigned __int64)&append_prop_config_ptr->prop_value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&append_prop_config_ptr->prop_value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&append_prop_config_ptr->prop_value);
        }
        *v21 = append_prop_config_ptr->prop_value + v22;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/reliquary.cpp",
        "calcProp",
        424);
      v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v33,
              (const char (*)[50])"findReliquaryLevelExcelConfig failed, rank_level:");
      val = Reliquary::getRankLevel(this);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" level:");
      *(_DWORD *)(v1 + 32) = Reliquary::getLevel(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/reliquary.cpp",
      "calcProp",
      417);
    v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v33,
           (const char (*)[55])"findReliquaryMainPropExcelConfig failed, main_prop_id:");
    *(_DWORD *)(v1 + 32) = Reliquary::getMainPropId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = -1;
  }
LABEL_33:
  if ( v34 == (char *)v1 )
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

// Line 455: range 00000000175744C0-0000000017574716
void __cdecl Reliquary::getRelicLog(const Reliquary *const this, proto_log::RelicLog *relic_log)
{
  uint64_t Guid; // rdx
  uint32_t ItemId; // edx
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+30h] [rbp-10h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  Guid = Item::getGuid(this);
  proto_log::RelicLog::set_guid(relic_log, Guid);
  ItemId = Item::getItemId(this);
  proto_log::RelicLog::set_relic_id(relic_log, ItemId);
  reliquary_config_ptr = Reliquary::getReliquaryConfig(this);
  if ( reliquary_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->equip_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reliquary_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->equip_type >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&reliquary_config_ptr->equip_type);
    }
    proto_log::RelicLog::set_part(relic_log, reliquary_config_ptr->equip_type);
    if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&reliquary_config_ptr->rank_level);
    }
    proto_log::RelicLog::set_rank_level(relic_log, reliquary_config_ptr->rank_level);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto_log::RelicLog::set_level(relic_log, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->main_prop_id_);
  }
  proto_log::RelicLog::set_main_prop_id(relic_log, this->main_prop_id_);
  __for_range = &this->append_prop_id_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->append_prop_id_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->append_prop_id_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto_log::RelicLog::add_append_prop_id_list(relic_log, *v5);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
};

// Line 474: range 0000000017574718-00000000175748F7
void __cdecl Reliquary::logRelicLevelup(Reliquary *const this, Player *player, uint32_t level_before, uint32_t op)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyRelicLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto_log::RelicLog *v8; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRelicLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRelicLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-80h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-70h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 25 relic_levelup_log_ptr:475";
  *(_QWORD *)(v4 + 16) = Reliquary::logRelicLevelup;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRelicLevelup>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyRelicLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRelicLevelup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v8 = proto_log::PlayerLogBodyRelicLevelup::mutable_relic(v7);
  Reliquary::getRelicLog(this, v8);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyRelicLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRelicLevelup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::PlayerLogBodyRelicLevelup::set_relic_level_before(v9, level_before);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRelicLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRelicLevelup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::PlayerLogBodyRelicLevelup::set_op(v10, op);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRelicLevelup,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyRelicLevelup> *)(v4 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyRelicLevelup>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRelicLevelup> *const)(v4 + 32));
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
