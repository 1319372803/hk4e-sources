// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/weapon.cpp

// Line 25: range 00000000175748F8-0000000017574C29
int32_t __cdecl Weapon::fromBin(Weapon *const this, const proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // al
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned int v13; // ebx
  const unsigned int *v14; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  unsigned int *v16; // rdx
  char v17; // cl
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  const proto::EquipBin *proto_equip_bin; // [rsp+20h] [rbp-90h]
  const proto::WeaponBin *proto_weapon_bin; // [rsp+28h] [rbp-88h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-80h]
  const unsigned int *p_affix_id; // [rsp+38h] [rbp-78h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-50h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-30h] BYREF

  if ( Equip::fromBin((Equip *const)this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "fromBin",
      28);
    v2 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v25,
           (const char (*)[25])"fromBin fails, item_id::");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    return -1;
  }
  else
  {
    proto_equip_bin = proto::ItemBin::equip(proto_item_bin);
    proto_weapon_bin = proto::EquipBin::weapon(proto_equip_bin);
    v4 = proto::WeaponBin::level(proto_weapon_bin);
    v5 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
    LOBYTE(proto_item_bin) = v5 != 0;
    v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= v5);
    if ( (_BYTE)v6 )
      __asan_report_store4(&this->level_, proto_item_bin, v6);
    this->level_ = v4;
    v7 = proto::WeaponBin::exp(proto_weapon_bin);
    v8 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(proto_item_bin) = v8 != 0;
      __asan_report_store4(&this->exp_, proto_item_bin, v7);
    }
    this->exp_ = v7;
    v9 = proto::WeaponBin::promote_level(proto_weapon_bin);
    v10 = *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000);
    LOBYTE(proto_item_bin) = v10 != 0;
    v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= v10);
    if ( (_BYTE)v11 )
      __asan_report_store4(&this->promote_level_, proto_item_bin, v11);
    this->promote_level_ = v9;
    __for_range = proto::WeaponBin::affix_map(proto_weapon_bin);
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p_affix_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
      v12 = (unsigned __int64)(p_affix_id + 1);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v12);
      v13 = p_affix_id[1];
      v14 = p_affix_id;
      v15 = std::map<unsigned int,unsigned int>::operator[](&this->affix_map_, p_affix_id);
      v16 = v15;
      v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
      {
        LOBYTE(v14) = v17 != 0;
        __asan_report_store4(v15, v14, v15);
      }
      *v16 = v13;
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 46: range 0000000017574C2A-0000000017574F59
int32_t __cdecl Weapon::toBin(const Weapon *const this, proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v5; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v6; // rsi
  unsigned int *v7; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v8; // rdx
  char v9; // cl
  unsigned int val; // [rsp+14h] [rbp-7Ch] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::EquipBin *proto_equip_bin; // [rsp+28h] [rbp-68h]
  proto::WeaponBin *proto_weapon_bin; // [rsp+30h] [rbp-60h]
  google::protobuf::Map<unsigned int,unsigned int> *affix_map; // [rsp+38h] [rbp-58h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-50h]
  const std::pair<unsigned int const,unsigned int> *v17; // [rsp+48h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *affix_id; // [rsp+50h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *affix_level; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-30h] BYREF

  if ( Equip::toBin((const Equip *const)this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "toBin",
      49);
    v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v20,
           (const char (*)[30])"weapon toBin failed, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    proto_equip_bin = proto::ItemBin::mutable_equip(proto_item_bin);
    proto_weapon_bin = proto::EquipBin::mutable_weapon(proto_equip_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    proto::WeaponBin::set_level(proto_weapon_bin, this->level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->exp_);
    }
    proto::WeaponBin::set_exp(proto_weapon_bin, this->exp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->promote_level_);
    }
    proto::WeaponBin::set_promote_level(proto_weapon_bin, this->promote_level_);
    affix_map = proto::WeaponBin::mutable_affix_map(proto_weapon_bin);
    __for_range = &this->affix_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->affix_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->affix_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      affix_id = std::get<0ul,unsigned int const,unsigned int>(v17);
      v4 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v17);
      affix_level = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      v5 = *affix_level;
      v6 = affix_id;
      v7 = google::protobuf::Map<unsigned int,unsigned int>::operator[](affix_map, affix_id);
      v8 = v7;
      v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
      if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
      {
        LOBYTE(v6) = v9 != 0;
        __asan_report_store4(v7, v6, v7);
      }
      *v8 = v5;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 68: range 0000000017575098-00000000175752D2
int32_t __cdecl Weapon::toClient(const Weapon *const this, proto::Item *proto_item)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  proto::Equip *proto_equip; // [rsp+18h] [rbp-48h]
  proto::Weapon *proto_weapon; // [rsp+20h] [rbp-40h]
  google::protobuf::Map<unsigned int,unsigned int> *affix_map; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( Equip::toClient((const Equip *const)this, proto_item) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "toClient",
      71);
    v2 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v8,
           (const char (*)[27])"toClient failed, item_id::");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    proto_equip = proto::Item::mutable_equip(proto_item);
    proto_weapon = proto::Equip::mutable_weapon(proto_equip);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    proto::Weapon::set_level(proto_weapon, this->level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->exp_);
    }
    proto::Weapon::set_exp(proto_weapon, this->exp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->promote_level_);
    }
    proto::Weapon::set_promote_level(proto_weapon, this->promote_level_);
    affix_map = proto::Weapon::mutable_affix_map(proto_weapon);
    std::function<ForeachPolicy ()(unsigned int,unsigned int)>::function<Weapon::toClient(proto::Item &)::{lambda(unsigned int,unsigned int)#1},void,void>(
      (std::function<ForeachPolicy(unsigned int,unsigned int)> *const)&v8,
      (Weapon::toClient::<lambda(uint32_t, uint32_t)>)affix_map);
    Weapon::foreachSkillAffix(this, (std::function<ForeachPolicy(unsigned int,unsigned int)> *)&v8);
    std::function<ForeachPolicy ()(unsigned int,unsigned int)>::~function((std::function<ForeachPolicy(unsigned int,unsigned int)> *const)&v8);
    return 0;
  }
};

// Line 82: range 0000000017574F5A-0000000017575096
__int64 __fastcall Weapon::toClient(proto::Item &)const::{lambda(unsigned int,unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t affix_id,
        uint32_t affix_level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // rdx
  unsigned __int64 v6; // r12
  char *v7; // rsi
  unsigned int *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  __int64 result; // rax
  char v13[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 64);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 affix_id:82";
  *(_QWORD *)(v3 + 16) = Weapon::toClient(proto::Item &)const::{lambda(unsigned int,unsigned int)#1}::operator();
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = affix_id;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = v5 - 32;
  v8 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
         *(google::protobuf::Map<unsigned int,unsigned int> *const *)__closure,
         (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)v5 - 8);
  v9 = v8;
  v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
  {
    LOBYTE(v7) = v10 != 0;
    __asan_report_store4(v8, v7, v8);
  }
  *v9 = affix_level;
  result = 0LL;
  if ( v13 == (char *)v3 )
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

// Line 93: range 00000000175752D4-0000000017575626
int32_t __cdecl Weapon::toSnapshot(const Weapon *const this, proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  std::pair<unsigned int const,unsigned int> *v4; // rax
  std::pair<unsigned int const,unsigned int> *v5; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v7; // ebx
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v8; // rsi
  unsigned int *v9; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v10; // rdx
  char v11; // cl
  unsigned int val; // [rsp+14h] [rbp-7Ch] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::EquipBin *proto_equip_bin; // [rsp+28h] [rbp-68h]
  proto::WeaponBin *proto_weapon_bin; // [rsp+30h] [rbp-60h]
  google::protobuf::Map<unsigned int,unsigned int> *affix_map; // [rsp+38h] [rbp-58h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *affix_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *affix_level; // [rsp+50h] [rbp-40h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+58h] [rbp-38h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-30h] BYREF

  if ( Equip::toSnapshot((const Equip *const)this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "toSnapshot",
      96);
    v2 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v22,
           (const char (*)[35])"weapon toSnapshot failed, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    return -1;
  }
  else
  {
    proto_equip_bin = proto::ItemBin::mutable_equip(proto_item_bin);
    proto_weapon_bin = proto::EquipBin::mutable_weapon(proto_equip_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    proto::WeaponBin::set_level(proto_weapon_bin, this->level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->promote_level_);
    }
    proto::WeaponBin::set_promote_level(proto_weapon_bin, this->promote_level_);
    affix_map = proto::WeaponBin::mutable_affix_map(proto_weapon_bin);
    __for_range = &this->affix_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->affix_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->affix_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v4 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v5 = v4;
      if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v4, 8LL);
      }
      __in = *v5;
      affix_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
      v6 = std::get<1ul,unsigned int const,unsigned int>(&__in);
      affix_level = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      v7 = *affix_level;
      v8 = affix_id;
      v9 = google::protobuf::Map<unsigned int,unsigned int>::operator[](affix_map, affix_id);
      v10 = v9;
      v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
      if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
      {
        LOBYTE(v8) = v11 != 0;
        __asan_report_store4(v9, v8, v9);
      }
      *v10 = v7;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 114: range 0000000017575628-0000000017575E65
int32_t __cdecl Weapon::init(Weapon *const this, Player *player, bool is_first_create)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t result; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // r14
  EquipAffixExcelConfigMgr *p_equip_affix_config_mgr; // rcx
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  EquipAffixExcelConfigMgr *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int (__fastcall **v19)(Weapon *const); // rax
  common::milog::MiLogStream *v20; // r14
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,unsigned int> *v25; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *affix_id; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *affix_level; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<Config> v28; // [rsp+50h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v29; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-B0h] BYREF
  common::milog::MiLogStream v31; // [rsp+90h] [rbp-90h] BYREF
  char v32[112]; // [rsp+B0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 19 affix_max_level:140";
  *(_QWORD *)(v3 + 16) = Weapon::init;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( Equip::init((Equip *const)this, player, is_first_create) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "init",
      117);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v31,
           (const char (*)[29])"weapon init failed, item_id:");
    *(_DWORD *)(v3 + 32) = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    if ( this->level_ )
    {
      if ( Weapon::getWeaponExcelConfig(this) )
      {
        __for_range = &this->affix_map_;
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->affix_map_)._M_node;
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->affix_map_)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          affix_id = std::get<0ul,unsigned int const,unsigned int>(v25);
          affix_level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v25);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v28);
          p_equip_affix_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.equip_affix_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(affix_id);
          }
          v11 = !EquipAffixExcelConfigMgr::isEquipAffixValid(p_equip_affix_config_mgr, *affix_id);
          std::shared_ptr<Config>::~shared_ptr(&v28);
          if ( v11 )
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/item/weapon.cpp",
              "init",
              137);
            v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v30,
                    (const char (*)[36])"isEquipAffixValid failed, affix_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, affix_id);
            common::milog::MiLogStream::~MiLogStream(&v30);
            result = -1;
            goto LABEL_33;
          }
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v29);
          v13 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.equip_affix_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(affix_id);
          }
          *(_DWORD *)(v3 + 32) = EquipAffixExcelConfigMgr::findEquipAffixMaxLevel(v13, *affix_id);
          std::shared_ptr<Config>::~shared_ptr(&v29);
          if ( *(int *)(v3 + 32) < 0 )
            goto LABEL_24;
          if ( *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)affix_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_level >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(affix_level);
          }
          if ( *affix_level > *(_DWORD *)(v3 + 32) )
          {
LABEL_24:
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/item/weapon.cpp",
              "init",
              143);
            v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v31,
                    (const char (*)[41])"findEquipAffixMaxLevel failed, affix_id:");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, affix_id);
            v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v15,
                    (const char (*)[14])" affix_level:");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, affix_level);
            v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v17,
                    (const char (*)[18])" affix_max_level:");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v31);
            result = -1;
            goto LABEL_33;
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v19 = (unsigned int (__fastcall **)(Weapon *const))(this->_vptr_Item + 14);
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( (*v19)(this) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/weapon.cpp",
            "init",
            150);
          v20 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v31,
                  (const char (*)[27])"calcProp failed, item_id::");
          *(_DWORD *)(v3 + 32) = Item::getItemId(this);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v31);
          result = -1;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/weapon.cpp",
          "init",
          129);
        v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v31,
               (const char (*)[38])"getWeaponExcelConfig failed, item_id:");
        *(_DWORD *)(v3 + 32) = Item::getItemId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/weapon.cpp",
        "init",
        123);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v31,
             (const char (*)[30])"invalid equip_level, item_id:");
      *(_DWORD *)(v3 + 32) = Item::getItemId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v31);
      result = -1;
    }
  }
LABEL_33:
  if ( v32 == (char *)v3 )
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

// Line 158: range 0000000017575E66-0000000017575E74
data::ItemType __cdecl Weapon::getItemType(const Weapon *const this)
{
  return 4;
};

// Line 163: range 0000000017575E76-0000000017575E84
data::EquipType __cdecl Weapon::getEquipType(const Weapon *const this)
{
  return 6;
};

// Line 169: range 0000000017575E86-0000000017575F75
ItemParam __cdecl Weapon::toItemParam(const Weapon *const this)
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
  *(_QWORD *)(v1 + 8) = "1 32 16 14 item_param:170";
  *(_QWORD *)(v1 + 16) = Weapon::toItemParam;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(ItemParam *)(v1 + 32) = Item::toItemParam(this);
  *(_DWORD *)(v1 + 40) = Weapon::getLevel(this);
  *(_DWORD *)(v1 + 44) = Weapon::getPromoteLevel(this);
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

// Line 177: range 00000000175760B4-00000000175762DE
int32_t __cdecl Weapon::toShowEquipInfo(const Weapon *const this, proto::ShowEquip *show_equip)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  proto::Weapon *proto_weapon; // [rsp+20h] [rbp-40h]
  google::protobuf::Map<unsigned int,unsigned int> *affix_map; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( Equip::toShowEquipInfo((const Equip *const)this, show_equip) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "toShowEquipInfo",
      180);
    v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v7,
           (const char (*)[34])"toShowEquipInfo failed, item_id::");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    proto_weapon = proto::ShowEquip::mutable_weapon(show_equip);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    proto::Weapon::set_level(proto_weapon, this->level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->exp_);
    }
    proto::Weapon::set_exp(proto_weapon, this->exp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->promote_level_);
    }
    proto::Weapon::set_promote_level(proto_weapon, this->promote_level_);
    affix_map = proto::Weapon::mutable_affix_map(proto_weapon);
    std::function<ForeachPolicy ()(unsigned int,unsigned int)>::function<Weapon::toShowEquipInfo(proto::ShowEquip &)::{lambda(unsigned int,unsigned int)#1},void,void>(
      (std::function<ForeachPolicy(unsigned int,unsigned int)> *const)&v7,
      (Weapon::toShowEquipInfo::<lambda(uint32_t, uint32_t)>)affix_map);
    Weapon::foreachSkillAffix(this, (std::function<ForeachPolicy(unsigned int,unsigned int)> *)&v7);
    std::function<ForeachPolicy ()(unsigned int,unsigned int)>::~function((std::function<ForeachPolicy(unsigned int,unsigned int)> *const)&v7);
    return 0;
  }
};

// Line 190: range 0000000017575F76-00000000175760B2
__int64 __fastcall Weapon::toShowEquipInfo(proto::ShowEquip &)const::{lambda(unsigned int,unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t affix_id,
        uint32_t affix_level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // rdx
  unsigned __int64 v6; // r12
  char *v7; // rsi
  unsigned int *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  __int64 result; // rax
  char v13[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 64);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 affix_id:190";
  *(_QWORD *)(v3 + 16) = Weapon::toShowEquipInfo(proto::ShowEquip &)const::{lambda(unsigned int,unsigned int)#1}::operator();
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = affix_id;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = v5 - 32;
  v8 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
         *(google::protobuf::Map<unsigned int,unsigned int> *const *)__closure,
         (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)v5 - 8);
  v9 = v8;
  v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
  {
    LOBYTE(v7) = v10 != 0;
    __asan_report_store4(v8, v7, v8);
  }
  *v9 = affix_level;
  result = 0LL;
  if ( v13 == (char *)v3 )
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

// Line 199: range 00000000175762E0-000000001757631A
int32_t __cdecl Weapon::calcProp(Weapon *const this)
{
  std::map<data::FightPropType,float>::clear(&this->prop_map_);
  Weapon::assignLevelProp(this);
  Weapon::assignPromoteProp(this);
  return 0;
};

// Line 210: range 000000001757631C-0000000017576944
int32_t __cdecl Weapon::assignLevelProp(Weapon *const this)
{
  common::milog::MiLogStream *v1; // rbx
  data::FightPropType *p_prop_type; // rsi
  std::map<data::FightPropType,float>::mapped_type *v4; // rax
  float *v5; // rdx
  char v6; // cl
  const GrowCurveExcelConfigMgr *p_grow_curve_config_mgr; // rdi
  data::GrowCurveType type; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  data::ArithType arith; // eax
  std::map<data::FightPropType,float>::mapped_type *v13; // rax
  float v14; // xmm1_4
  std::map<data::FightPropType,float>::mapped_type *v15; // rax
  float v16; // xmm1_4
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rbx
  float init_value; // [rsp+4h] [rbp-8Ch]
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::vector<data::WeaponProperty>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::vector<data::WeaponProperty>::const_iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+30h] [rbp-60h]
  const std::vector<data::WeaponProperty> *__for_range; // [rsp+38h] [rbp-58h]
  const data::WeaponProperty *weapon_prop; // [rsp+40h] [rbp-50h]
  const data::GrowCurveInfo *curve_info_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v29; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-30h] BYREF

  weapon_config_ptr = Weapon::getWeaponExcelConfig(this);
  if ( weapon_config_ptr )
  {
    __for_range = &weapon_config_ptr->weapon_prop;
    __for_begin._M_current = std::vector<data::WeaponProperty>::begin(&weapon_config_ptr->weapon_prop)._M_current;
    __for_end._M_current = std::vector<data::WeaponProperty>::end(&weapon_config_ptr->weapon_prop)._M_current;
    while ( __gnu_cxx::operator!=<data::WeaponProperty const*,std::vector<data::WeaponProperty>>(
              &__for_begin,
              &__for_end) )
    {
      weapon_prop = __gnu_cxx::__normal_iterator<data::WeaponProperty const*,std::vector<data::WeaponProperty>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&weapon_prop->prop_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&weapon_prop->prop_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&weapon_prop->prop_type);
      }
      if ( weapon_prop->prop_type )
      {
        if ( *(_BYTE *)(((unsigned __int64)&weapon_prop->init_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)weapon_prop + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weapon_prop->init_value >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&weapon_prop->init_value);
        }
        init_value = weapon_prop->init_value;
        p_prop_type = &weapon_prop->prop_type;
        v4 = std::map<data::FightPropType,float>::operator[](&this->prop_map_, &weapon_prop->prop_type);
        v5 = v4;
        v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
        if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
        {
          LOBYTE(p_prop_type) = v6 != 0;
          __asan_report_store4(v4, p_prop_type, v4);
        }
        *v5 = init_value;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        p_grow_curve_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.grow_curve_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&weapon_prop->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&weapon_prop->type >> 3) + 0x7FFF8000) <= 3 )
        {
          p_grow_curve_config_mgr = (const GrowCurveExcelConfigMgr *)&weapon_prop->type;
          __asan_report_load4(&weapon_prop->type);
        }
        type = weapon_prop->type;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          p_grow_curve_config_mgr = (const GrowCurveExcelConfigMgr *)&this->level_;
          __asan_report_load4(&this->level_);
        }
        curve_info_ptr = GrowCurveExcelConfigMgr::findWeaponCurveInfo(p_grow_curve_config_mgr, this->level_, type);
        std::shared_ptr<Config>::~shared_ptr(&v29);
        if ( curve_info_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&curve_info_ptr->arith >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)curve_info_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curve_info_ptr->arith >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(&curve_info_ptr->arith);
          }
          arith = curve_info_ptr->arith;
          if ( arith == ARITH_ADD )
          {
            v13 = std::map<data::FightPropType,float>::operator[](&this->prop_map_, &weapon_prop->prop_type);
            if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v13);
            }
            v14 = *v13;
            if ( *(_BYTE *)(((unsigned __int64)&curve_info_ptr->value >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&curve_info_ptr->value >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&curve_info_ptr->value);
            }
            *v13 = curve_info_ptr->value + v14;
          }
          else if ( arith == ARITH_MULTI )
          {
            v15 = std::map<data::FightPropType,float>::operator[](&this->prop_map_, &weapon_prop->prop_type);
            if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v15);
            }
            v16 = *v15;
            if ( *(_BYTE *)(((unsigned __int64)&curve_info_ptr->value >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&curve_info_ptr->value >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&curve_info_ptr->value);
            }
            *v15 = curve_info_ptr->value * v16;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/item/weapon.cpp",
              "assignLevelProp",
              243);
            v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    &v30,
                    (const char (*)[15])"invalid arith:");
            v18 = common::milog::MiLogStream::operator<<<data::ArithType,(data::ArithType*)0>(
                    v17,
                    &curve_info_ptr->arith);
            v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v18,
                    (const char (*)[12])" weapon_id:");
            val = Item::getItemId(this);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
            common::milog::MiLogStream::~MiLogStream(&v30);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/weapon.cpp",
            "assignLevelProp",
            226);
          v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 &v30,
                 (const char (*)[34])"findWeaponCurveInfo failes, type:");
          v10 = common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(
                  v9,
                  &weapon_prop->type);
          v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" weapon_id:");
          val = Item::getItemId(this);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
      }
      __gnu_cxx::__normal_iterator<data::WeaponProperty const*,std::vector<data::WeaponProperty>>::operator++(&__for_begin);
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "assignLevelProp",
      214);
    v1 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v30,
           (const char (*)[40])"getWeaponExcelConfig failed, weapon_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    return -1;
  }
};

// Line 254: range 0000000017576946-0000000017576E62
int32_t __cdecl Weapon::assignPromoteProp(Weapon *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  WeaponExcelConfigMgr *p_weapon_config_mgr; // r15
  uint32_t promote_level; // r14d
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v9; // r14
  Weapon::assignPromoteProp::<lambda(const auto:23&)> v10; // r15d
  const data::WeaponProperty *M_current; // r14
  std::vector<data::WeaponProperty>::const_iterator v12; // rax
  std::map<data::FightPropType,float>::mapped_type *v13; // rax
  float v14; // xmm1_4
  std::vector<data::PropValConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<data::PropValConfig>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  __gnu_cxx::__normal_iterator<const data::WeaponProperty*,std::vector<data::WeaponProperty> > __lhs; // [rsp+20h] [rbp-D0h] BYREF
  __gnu_cxx::__normal_iterator<const data::WeaponProperty*,std::vector<data::WeaponProperty> > __rhs; // [rsp+28h] [rbp-C8h] BYREF
  const data::WeaponPromoteExcelConfig *weapon_promote_config_ptr; // [rsp+30h] [rbp-C0h]
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+38h] [rbp-B8h]
  const std::vector<data::PropValConfig> *__for_range; // [rsp+40h] [rbp-B0h]
  const data::PropValConfig *prop_val_config; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-90h] BYREF
  char v25[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 prop_type:273";
  *(_QWORD *)(v1 + 16) = Weapon::assignPromoteProp;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  p_weapon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.weapon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  promote_level = this->promote_level_;
  ItemId = Item::getItemId(this);
  weapon_promote_config_ptr = WeaponExcelConfigMgr::findWeaponPromoteExcelConfig(
                                p_weapon_config_mgr,
                                ItemId,
                                promote_level);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( weapon_promote_config_ptr )
  {
    weapon_config_ptr = Weapon::getWeaponExcelConfig(this);
    if ( weapon_config_ptr )
    {
      __for_range = &weapon_promote_config_ptr->add_props;
      __for_begin._M_current = std::vector<data::PropValConfig>::begin(&weapon_promote_config_ptr->add_props)._M_current;
      __for_end._M_current = std::vector<data::PropValConfig>::end(&weapon_promote_config_ptr->add_props)._M_current;
      while ( __gnu_cxx::operator!=<data::PropValConfig const*,std::vector<data::PropValConfig>>(
                &__for_begin,
                &__for_end) )
      {
        prop_val_config = __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)&prop_val_config->prop_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&prop_val_config->prop_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&prop_val_config->prop_type);
        }
        *(_DWORD *)(v1 + 32) = prop_val_config->prop_type;
        __rhs._M_current = std::vector<data::WeaponProperty>::end(&weapon_config_ptr->weapon_prop)._M_current;
        v10.__prop_type = *(_DWORD *)(v1 + 32);
        M_current = std::vector<data::WeaponProperty>::end(&weapon_config_ptr->weapon_prop)._M_current;
        v12._M_current = std::vector<data::WeaponProperty>::begin(&weapon_config_ptr->weapon_prop)._M_current;
        __lhs._M_current = std::find_if<__gnu_cxx::__normal_iterator<data::WeaponProperty const*,std::vector<data::WeaponProperty>>,Weapon::assignPromoteProp(void)::{lambda(__gnu_cxx::__normal_iterator<data::WeaponProperty const*,std::vector<data::WeaponProperty>> const&)#1}>(
                             v12,
                             (__gnu_cxx::__normal_iterator<const data::WeaponProperty*,std::vector<data::WeaponProperty> >)M_current,
                             v10)._M_current;
        if ( __gnu_cxx::operator!=<data::WeaponProperty const*,std::vector<data::WeaponProperty>>(&__lhs, &__rhs) )
        {
          v13 = std::map<data::FightPropType,float>::operator[](
                  &this->prop_map_,
                  (const std::map<data::FightPropType,float>::key_type *)(v1 + 32));
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          v14 = *v13;
          if ( *(_BYTE *)(((unsigned __int64)&prop_val_config->value >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)prop_val_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&prop_val_config->value >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&prop_val_config->value);
          }
          *v13 = prop_val_config->value + v14;
        }
        __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator++(&__for_begin);
      }
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/weapon.cpp",
        "assignPromoteProp",
        265);
      v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v24,
             (const char (*)[40])"getWeaponExcelConfig failed, weapon_id:");
      *(_DWORD *)(v1 + 32) = Item::getItemId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "assignPromoteProp",
      258);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v24,
           (const char (*)[43])"findWeaponPromoteExcelConfig fails, level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->promote_level_);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = -1;
  }
  if ( v25 == (char *)v1 )
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

// Line 274: range 00000000176072EA-0000000017607378
bool __cdecl Weapon::assignPromoteProp::_lambda_const_auto_23___::operator()_data::WeaponProperty_(
        const Weapon::assignPromoteProp::<lambda(const auto:23&)> *const __closure,
        const data::WeaponProperty *weapon_prop)
{
  data::FightPropType prop_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&weapon_prop->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&weapon_prop->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&weapon_prop->prop_type);
  }
  prop_type = weapon_prop->prop_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return prop_type == __closure->__prop_type;
};

// Line 287: range 0000000017576E64-0000000017576F59
uint32_t __cdecl Weapon::getRankLevel(const Weapon *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  weapon_config_ptr = Weapon::getWeaponExcelConfig(this);
  if ( weapon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&weapon_config_ptr->rank_level);
    }
    return weapon_config_ptr->rank_level;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "getRankLevel",
      291);
    v1 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v5,
           (const char (*)[26])"getConfig fails, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 298: range 0000000017576F5A-0000000017577F28
__int64 __fastcall Weapon::addExp(Weapon *const this, uint32_t exp, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rbx
  unsigned int v7; // r14d
  uint32_t level; // r14d
  common::milog::MiLogStream *v9; // r14
  WeaponExcelConfigMgr *p_weapon_config_mgr; // r14
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  WeaponExcelConfigMgr *v15; // rcx
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::vector<unsigned int>::size_type v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t v25; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v26; // rax
  uint32_t *v27; // rdx
  uint32_t v28; // r14d
  WeaponExcelConfigMgr *v29; // rcx
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  std::vector<unsigned int>::size_type v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rcx
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v42; // rax
  int *v43; // rdx
  int v44; // ecx
  uint32_t v45; // r14d
  Player *v46; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  unsigned int v50; // [rsp+10h] [rbp-110h] BYREF
  unsigned int val; // [rsp+14h] [rbp-10Ch] BYREF
  uint32_t old_level; // [rsp+18h] [rbp-108h]
  uint32_t promote_level_before; // [rsp+1Ch] [rbp-104h]
  unsigned __int64 Guid; // [rsp+20h] [rbp-100h] BYREF
  const data::WeaponLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-F8h]
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+30h] [rbp-F0h]
  const data::WeaponLevelExcelConfig *next_level_config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v58; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v59; // [rsp+50h] [rbp-D0h] BYREF
  char v60[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 14 rank_index:325 48 4 7 exp:297 64 16 14 player_ptr:311 96 16 13 event_ptr:383";
  *(_QWORD *)(v3 + 16) = Weapon::addExp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = exp;
  if ( *(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    level = this->level_;
    if ( level < Weapon::getMaxLevel(this) )
    {
      Item::getItemOwner((Item *const)(v3 + 64));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/weapon.cpp",
          "addExp",
          314);
        v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v59,
               (const char (*)[25])"getItemOwner fail. guid:");
        Guid = Item::getGuid(this);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &Guid);
        common::milog::MiLogStream::~MiLogStream(&v59);
        v7 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v58);
        p_weapon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v58)->design_config.txt_config_mgr.weapon_config_mgr;
        ItemId = Item::getItemId(this);
        weapon_config_ptr = data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(p_weapon_config_mgr, ItemId);
        std::shared_ptr<Config>::~shared_ptr(&v58);
        if ( weapon_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&weapon_config_ptr->rank_level);
          }
          *(_DWORD *)(v3 + 32) = weapon_config_ptr->rank_level - 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->level_);
          }
          old_level = this->level_;
          if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->promote_level_);
          }
          promote_level_before = this->promote_level_;
          if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->exp_);
          }
          this->exp_ += *(_DWORD *)(v3 + 48);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v58);
          v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v58)->design_config.txt_config_mgr.weapon_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->level_);
          }
          level_config_ptr = data::WeaponExcelConfigMgrBase::findWeaponLevelExcelConfig(v15, this->level_);
          std::shared_ptr<Config>::~shared_ptr(&v58);
          if ( level_config_ptr )
          {
            v19 = *(unsigned int *)(v3 + 32);
            if ( v19 < std::vector<unsigned int>::size(&level_config_ptr->required_exps) )
            {
              while ( 1 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->exp_);
                }
                v25 = this->exp_;
                v26 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&level_config_ptr->required_exps, *(unsigned int *)(v3 + 32));
                v27 = v26;
                if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v26);
                }
                if ( v25 < *v27 )
                  goto LABEL_53;
                if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->level_);
                }
                v28 = this->level_;
                if ( v28 >= Weapon::getMaxLevel(this) )
                  goto LABEL_53;
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v58);
                v29 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v58)->design_config.txt_config_mgr.weapon_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->level_);
                }
                next_level_config_ptr = data::WeaponExcelConfigMgrBase::findWeaponLevelExcelConfig(
                                          v29,
                                          this->level_ + 1);
                std::shared_ptr<Config>::~shared_ptr(&v58);
                if ( !next_level_config_ptr )
                {
                  common::milog::MiLogStream::create(
                    &v59,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/item/weapon.cpp",
                    "addExp",
                    354);
                  v30 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                          &v59,
                          (const char (*)[46])"findWeaponLevelExcelConfig failed, weapon_id:");
                  v50 = Item::getItemId(this);
                  v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &v50);
                  v32 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])" level:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3)
                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4(&this->level_);
                  }
                  val = this->level_ + 1;
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
                  common::milog::MiLogStream::~MiLogStream(&v59);
                  goto LABEL_53;
                }
                v33 = *(unsigned int *)(v3 + 32);
                if ( v33 >= std::vector<unsigned int>::size(&next_level_config_ptr->required_exps) )
                  break;
                if ( Weapon::upgradeLevel(this, 0) )
                {
                  common::milog::MiLogStream::create(
                    &v59,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/item/weapon.cpp",
                    "addExp",
                    364);
                  v39 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                          &v59,
                          (const char (*)[38])"weapon upgradeLevel fails, weapon_id:");
                  val = Item::getItemId(this);
                  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &val);
                  v41 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v40, (const char (*)[8])" level:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &this->level_);
                  common::milog::MiLogStream::~MiLogStream(&v59);
LABEL_53:
                  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3)
                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4(&this->level_);
                  }
                  v45 = this->level_;
                  if ( v45 >= Weapon::getMaxLevel(this) )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(&this->exp_, (((_BYTE)this + 124) & 7u) + 3, &this->exp_);
                    }
                    this->exp_ = 0;
                  }
                  if ( is_notify )
                    Item::notifyItemChange(this);
                  Weapon::logWeaponLevelup(this, old_level, promote_level_before, 1u);
                  val = Item::getItemId(this);
                  common::tools::perf::make_shared<WeaponAddExpEvent,unsigned int,unsigned int &>(
                    (unsigned int *)(v3 + 96),
                    &val,
                    (unsigned int *)(v3 + 48),
                    &val);
                  v46 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                  EventComp = Player::getEventComp(v46);
                  std::shared_ptr<BaseEvent>::shared_ptr<WeaponAddExpEvent,void>(
                    (std::shared_ptr<BaseEvent> *const)&v58,
                    (const std::shared_ptr<WeaponAddExpEvent> *)(v3 + 96));
                  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v58);
                  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v58);
                  v7 = 0;
                  std::shared_ptr<WeaponAddExpEvent>::~shared_ptr((std::shared_ptr<WeaponAddExpEvent> *const)(v3 + 96));
                  goto LABEL_62;
                }
                v42 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&level_config_ptr->required_exps, *(unsigned int *)(v3 + 32));
                v43 = (int *)v42;
                if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v42);
                }
                v44 = *v43;
                if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->exp_);
                }
                this->exp_ -= v44;
                level_config_ptr = next_level_config_ptr;
              }
              common::milog::MiLogStream::create(
                &v59,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/item/weapon.cpp",
                "addExp",
                359);
              v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      &v59,
                      (const char (*)[12])"rank_index:");
              v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v34,
                      (const unsigned int *)(v3 + 32));
              v36 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v35,
                      (const char (*)[21])" too big, weapon_id:");
              v50 = Item::getItemId(this);
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &v50);
              v38 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v37, (const char (*)[8])" level:");
              if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->level_);
              }
              val = this->level_ + 1;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
              common::milog::MiLogStream::~MiLogStream(&v59);
              v7 = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v59,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/item/weapon.cpp",
                "addExp",
                340);
              v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      &v59,
                      (const char (*)[12])"rank_index:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v3 + 32));
              v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v21,
                      (const char (*)[21])" too big, weapon_id:");
              val = Item::getItemId(this);
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
              v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" level:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->level_);
              common::milog::MiLogStream::~MiLogStream(&v59);
              v7 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/item/weapon.cpp",
              "addExp",
              335);
            v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v59,
                    (const char (*)[45])"findWeaponLevelExcelConfig fails, weapon_id:");
            val = Item::getItemId(this);
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
            v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" level:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->level_);
            common::milog::MiLogStream::~MiLogStream(&v59);
            v7 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/weapon.cpp",
            "addExp",
            321);
          v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v59,
                  (const char (*)[40])"findWeaponExcelConfig fails, weapon_id:");
          val = Item::getItemId(this);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->level_);
          common::milog::MiLogStream::~MiLogStream(&v59);
          v7 = -1;
        }
      }
LABEL_62:
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
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/weapon.cpp",
      "addExp",
      301);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v59,
           (const char (*)[27])"weapn addExp 0, weapon_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v59);
    v7 = 0;
  }
  result = v7;
  if ( v60 == (char *)v3 )
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

// Line 389: range 0000000017577F2A-0000000017578472
int32_t __cdecl Weapon::upgradeLevel(Weapon *const this, bool is_notify)
{
  unsigned __int64 p_guid; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  FightPropComp *FightPropComp; // r14
  const std::map<data::FightPropType,float> *Prop; // rax
  void (__fastcall **v8)(Weapon *const); // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  FightPropComp *v10; // r14
  const std::map<data::FightPropType,float> *v11; // rax
  Player *v12; // rax
  PlayerItemComp *ItemComp; // rcx
  Player *v14; // rax
  PlayerEventComp *EventComp; // r15
  unsigned int *v16; // r8
  unsigned int *v17; // r9
  int32_t result; // eax
  unsigned int ItemId; // [rsp+2Ch] [rbp-114h] BYREF
  Equip __r[2]; // [rsp+30h] [rbp-110h] BYREF

  p_guid = (unsigned __int64)&__r[0].guid_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      p_guid = v3;
  }
  *(_QWORD *)p_guid = 1102416563LL;
  *(_QWORD *)(p_guid + 8) = "4 32 4 13 old_level:400 48 16 14 avatar_ptr:394 80 16 14 player_ptr:409 112 48 20 fight_prop_guard:390";
  *(_QWORD *)(p_guid + 16) = Weapon::upgradeLevel;
  v4 = (_DWORD *)(p_guid >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(p_guid + 112));
  Equip::getOwner(__r);
  std::shared_ptr<Creature>::shared_ptr<Avatar,void>(
    (std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount,
    (std::shared_ptr<Avatar> *)__r);
  FightPropGuard::addCreature((FightPropGuard *const)(p_guid + 112), (CreaturePtr *)&__r[0]._M_weak_this._M_refcount, 0);
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount);
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)__r);
  Equip::getOwner((const Equip *const)(p_guid + 48));
  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(p_guid + 48), 0LL) )
  {
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_guid + 48));
    FightPropComp = Creature::getFightPropComp(v5);
    Prop = Equip::getProp((const Equip *const)this);
    FightPropComp::reduceProps(FightPropComp, Prop, 0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  *(_DWORD *)(p_guid + 32) = this->level_++;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (void (__fastcall **)(Weapon *const))(this->_vptr_Item + 14);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  (*v8)(this);
  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(p_guid + 48), 0LL) )
  {
    v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_guid + 48));
    v10 = Creature::getFightPropComp(v9);
    v11 = Equip::getProp((const Equip *const)this);
    FightPropComp::modifyProps(v10, v11, 0);
  }
  Item::getItemOwner((Item *const)(p_guid + 80));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(p_guid + 80), 0LL) )
  {
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_guid + 80));
    ItemComp = Player::getItemComp(v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    PlayerItemComp::addWeaponLevelupNum(ItemComp, *(_DWORD *)(p_guid + 32), this->level_);
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_guid + 80));
    EventComp = Player::getEventComp(v14);
    ItemId = Item::getItemId(this);
    common::tools::perf::make_shared<WeaponLevelupEvent,unsigned int,unsigned int &,unsigned int &>(
      (unsigned int *)__r,
      &ItemId,
      &this->level_,
      (unsigned int *)(p_guid + 32),
      v16,
      v17);
    std::shared_ptr<BaseEvent>::shared_ptr<WeaponLevelupEvent,void>(
      (std::shared_ptr<BaseEvent> *const)&__r[0]._M_weak_this._M_refcount,
      (std::shared_ptr<WeaponLevelupEvent> *)__r);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r[0]._M_weak_this._M_refcount);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r[0]._M_weak_this._M_refcount);
    std::shared_ptr<WeaponLevelupEvent>::~shared_ptr((std::shared_ptr<WeaponLevelupEvent> *const)__r);
  }
  if ( is_notify )
    Item::notifyItemChange(this);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_guid + 80));
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(p_guid + 48));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(p_guid + 112));
  result = 0;
  if ( &__r[0].guid_ == (uint64_t *)p_guid )
  {
    *(_QWORD *)((p_guid >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_guid >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((p_guid >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)p_guid = 1172321806LL;
    *(_QWORD *)((p_guid >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_guid >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_guid >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 425: range 0000000017578474-0000000017578BC0
int32_t __cdecl Weapon::upgradePromoteLevel(Weapon *const this, bool is_notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  WeaponExcelConfigMgr *p_weapon_config_mgr; // r15
  uint32_t promote_level; // r14d
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  FightPropComp *FightPropComp; // r14
  const std::map<data::FightPropType,float> *Prop; // rax
  void (__fastcall **v14)(Weapon *const); // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  FightPropComp *v16; // r14
  const std::map<data::FightPropType,float> *v17; // rax
  Player *v18; // rax
  PlayerEventComp *EventComp; // r15
  unsigned int *v20; // r8
  unsigned int *v21; // r9
  int32_t result; // eax
  unsigned int v23; // [rsp+24h] [rbp-14Ch] BYREF
  uint32_t level_before; // [rsp+28h] [rbp-148h]
  uint32_t promote_level_before; // [rsp+2Ch] [rbp-144h]
  unsigned __int64 val; // [rsp+30h] [rbp-140h] BYREF
  const data::WeaponPromoteExcelConfig *promote_config_ptr; // [rsp+38h] [rbp-138h]
  Equip __r[2]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)&__r[0].prop_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 21 old_promote_level:446 48 16 14 avatar_ptr:440 80 16 14 player_ptr:455 112 48 20 fight_prop_guard:426";
  *(_QWORD *)(v2 + 16) = Weapon::upgradePromoteLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v2 + 112));
  Equip::getOwner(__r);
  std::shared_ptr<Creature>::shared_ptr<Avatar,void>(
    (std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount,
    (std::shared_ptr<Avatar> *)__r);
  FightPropGuard::addCreature((FightPropGuard *const)(v2 + 112), (CreaturePtr *)&__r[0]._M_weak_this._M_refcount, 0);
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&__r[0]._M_weak_this._M_refcount);
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  level_before = this->level_;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  promote_level_before = this->promote_level_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&__r[0]._M_weak_this._M_refcount);
  p_weapon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r[0]._M_weak_this._M_refcount)->design_config.txt_config_mgr.weapon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  promote_level = this->promote_level_;
  ItemId = Item::getItemId(this);
  promote_config_ptr = WeaponExcelConfigMgr::findWeaponPromoteExcelConfig(p_weapon_config_mgr, ItemId, promote_level);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r[0]._M_weak_this._M_refcount);
  if ( promote_config_ptr )
  {
    Equip::getOwner((const Equip *const)(v2 + 48));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 48), 0LL) )
    {
      v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      FightPropComp = Creature::getFightPropComp(v11);
      Prop = Equip::getProp((const Equip *const)this);
      FightPropComp::reduceProps(FightPropComp, Prop, 0);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->promote_level_);
    }
    *(_DWORD *)(v2 + 32) = this->promote_level_++;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (void (__fastcall **)(Weapon *const))(this->_vptr_Item + 14);
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*v14)(this);
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 48), 0LL) )
    {
      v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v16 = Creature::getFightPropComp(v15);
      v17 = Equip::getProp((const Equip *const)this);
      FightPropComp::modifyProps(v16, v17, 0);
    }
    Item::getItemOwner((Item *const)(v2 + 80));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 80), 0LL) )
    {
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      EventComp = Player::getEventComp(v18);
      v23 = Item::getItemId(this);
      common::tools::perf::make_shared<WeaponPromoteEvent,unsigned int,unsigned int &,unsigned int &>(
        (unsigned int *)__r,
        &v23,
        &this->promote_level_,
        (unsigned int *)(v2 + 32),
        v20,
        v21);
      std::shared_ptr<BaseEvent>::shared_ptr<WeaponPromoteEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&__r[0]._M_weak_this._M_refcount,
        (std::shared_ptr<WeaponPromoteEvent> *)__r);
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r[0]._M_weak_this._M_refcount);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r[0]._M_weak_this._M_refcount);
      std::shared_ptr<WeaponPromoteEvent>::~shared_ptr((std::shared_ptr<WeaponPromoteEvent> *const)__r);
    }
    if ( is_notify )
      Item::notifyItemChange(this);
    Weapon::logWeaponLevelup(this, level_before, promote_level_before, 2u);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 80));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__r[0].guid_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "upgradePromoteLevel",
      435);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           (common::milog::MiLogStream *const)&__r[0].guid_,
           (const char (*)[43])"findWeaponPromoteExcelConfig failed. guid:");
    val = Item::getGuid(this);
    v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" promote_level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->promote_level_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__r[0].guid_);
  }
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v2 + 112));
  result = 0;
  if ( &__r[0].prop_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v2 )
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
  return result;
};

// Line 471: range 0000000017578BC2-0000000017578CD2
uint32_t __cdecl Weapon::getTotalExp(Weapon *const this)
{
  WeaponExcelConfigMgr *p_weapon_config_mgr; // r12
  uint32_t level; // ebx
  uint32_t ItemId; // eax
  uint32_t total_exp; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  p_weapon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.weapon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  level = this->level_;
  ItemId = Item::getItemId(this);
  total_exp = WeaponExcelConfigMgr::getTotalExpToLevel(p_weapon_config_mgr, ItemId, level);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->exp_);
  }
  return this->exp_ + total_exp;
};

// Line 477: range 0000000017578CD4-0000000017578D94
uint32_t __cdecl Weapon::getRemainExpToMax(Weapon *const this)
{
  WeaponExcelConfigMgr *p_weapon_config_mgr; // rbx
  uint32_t ItemId; // eax
  uint32_t total_exp; // [rsp+14h] [rbp-2Ch]
  uint32_t max_level; // [rsp+18h] [rbp-28h]
  uint32_t max_exp; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v7[2]; // [rsp+20h] [rbp-20h] BYREF

  total_exp = Weapon::getTotalExp(this);
  max_level = Weapon::getMaxLevel(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  p_weapon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7)->design_config.txt_config_mgr.weapon_config_mgr;
  ItemId = Item::getItemId(this);
  max_exp = WeaponExcelConfigMgr::getTotalExpToLevel(p_weapon_config_mgr, ItemId, max_level);
  std::shared_ptr<Config>::~shared_ptr(v7);
  if ( max_exp <= total_exp )
    return 0;
  else
    return max_exp - total_exp;
};

// Line 493: range 0000000017578D96-00000000175790D4
uint32_t __cdecl Weapon::getMaxLevel(Weapon *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  WeaponExcelConfigMgr *p_weapon_config_mgr; // r15
  uint32_t promote_level; // r14d
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t *v12; // rax
  uint32_t *v13; // rdx
  const data::WeaponPromoteExcelConfig *promote_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-90h] BYREF
  char v17[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 18 hard_max_level:502";
  *(_QWORD *)(v1 + 16) = Weapon::getMaxLevel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  p_weapon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.weapon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  promote_level = this->promote_level_;
  ItemId = Item::getItemId(this);
  promote_config_ptr = WeaponExcelConfigMgr::findWeaponPromoteExcelConfig(p_weapon_config_mgr, ItemId, promote_level);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( promote_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    *(_DWORD *)(v1 + 32) = WeaponExcelConfigMgr::getWeaponMaxLevel(&v11->design_config.txt_config_mgr.weapon_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    v12 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v1 + 32), &promote_config_ptr->unlock_max_level);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    result = *v13;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "getMaxLevel",
      497);
    v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v16,
           (const char (*)[48])"findWeaponPromoteExcelConfig failed, weapon_id:");
    *(_DWORD *)(v1 + 32) = Item::getItemId(this);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" promote_level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->promote_level_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0;
  }
  if ( v17 == (char *)v1 )
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

// Line 508: range 00000000175790D6-00000000175791F7
const data::WeaponExcelConfig *__cdecl Weapon::getWeaponExcelConfig(const Weapon *const this)
{
  WeaponExcelConfigMgr *p_weapon_config_mgr; // rbx
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_weapon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.weapon_config_mgr;
  ItemId = Item::getItemId(this);
  weapon_config_ptr = data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(p_weapon_config_mgr, ItemId);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( weapon_config_ptr )
    return weapon_config_ptr;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/item/weapon.cpp",
    "getWeaponExcelConfig",
    512);
  v3 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
         &v8,
         (const char (*)[41])"findWeaponExcelConfig failed, weapon_id:");
  val = Item::getItemId(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  common::milog::MiLogStream::~MiLogStream(&v8);
  return 0LL;
};

// Line 520: range 00000000175791F8-0000000017579420
uint32_t __cdecl Weapon::getAwakenLevel(const Weapon *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::pair<unsigned int const,unsigned int> *v4; // rax
  std::pair<unsigned int const,unsigned int> *v5; // rdx
  const unsigned int *v6; // rax
  _DWORD *v7; // rdx
  uint32_t result; // eax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *affix_id; // [rsp+28h] [rbp-78h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *affix_level; // [rsp+30h] [rbp-70h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+38h] [rbp-68h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 16 awaken_level:521";
  *(_QWORD *)(v1 + 16) = Weapon::getAwakenLevel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  __for_range = &this->affix_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->affix_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->affix_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v5 = v4;
    if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v4, 8LL);
    }
    __in = *v5;
    affix_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
    affix_level = std::get<1ul,unsigned int const,unsigned int>(&__in);
    v6 = std::max<unsigned int>((const unsigned int *)(v1 + 32), affix_level);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v1 + 32) = *v7;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  result = *(_DWORD *)(v1 + 32);
  if ( v15 == (char *)v1 )
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

// Line 530: range 0000000017579422-00000000175795B4
__int64 __fastcall Weapon::getAffixLevel(const Weapon *const this, uint32_t affix_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 affix_id:529 64 8 8 iter:531";
  *(_QWORD *)(v2 + 16) = Weapon::getAffixLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = affix_id;
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        &this->affix_map_,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->affix_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second;
  }
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

// Line 541: range 00000000175795B6-00000000175799D0
int32_t __cdecl Weapon::calcAwakenScoinCost(const Weapon *const this, uint32_t *scoin_cost)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  int32_t result; // eax
  std::vector<unsigned int>::size_type v7; // r14
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<unsigned int>::size_type v11; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v12; // rax
  uint32_t *v13; // rdx
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  const data::WeaponExcelConfig *weapon_excel_config_ptr; // [rsp+20h] [rbp-A0h]
  const std::vector<unsigned int> *scoin_cost_vec; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-90h] BYREF
  char v25[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 awaken_level:551";
  *(_QWORD *)(v2 + 16) = Weapon::calcAwakenScoinCost;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  weapon_excel_config_ptr = Weapon::getWeaponExcelConfig(this);
  if ( weapon_excel_config_ptr )
  {
    scoin_cost_vec = &weapon_excel_config_ptr->awaken_costs;
    *(_DWORD *)(v2 + 32) = Weapon::getAwakenLevel(this);
    v7 = *(unsigned int *)(v2 + 32);
    if ( v7 < std::vector<unsigned int>::size(scoin_cost_vec) )
    {
      v11 = *(unsigned int *)(v2 + 32);
      v12 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  scoin_cost_vec,
                                                                                                  v11);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v14 = *v13;
      v15 = *(_BYTE *)(((unsigned __int64)scoin_cost >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v15 != 0;
      v16 = (v15 != 0) & (unsigned __int8)((char)(((unsigned __int8)scoin_cost & 7) + 3) >= v15);
      if ( (_BYTE)v16 )
        __asan_report_store4(scoin_cost, v11, v16);
      *scoin_cost = v14;
      if ( *scoin_cost )
      {
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/weapon.cpp",
          "calcAwakenScoinCost",
          562);
        v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v24,
                (const char (*)[28])"scoin cost is 0, weapon_id:");
        val = Item::getItemId(this);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" awaken_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v24);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/weapon.cpp",
        "calcAwakenScoinCost",
        554);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v24,
             (const char (*)[33])"awaken level is full, weapon_id:");
      val = Item::getItemId(this);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" awaken_level:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/weapon.cpp",
      "calcAwakenScoinCost",
      545);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v24,
           (const char (*)[47])"weapon_excel_config_ptr is nullptr, weapon_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = -1;
  }
  if ( v25 == (char *)v2 )
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

// Line 570: range 00000000175799D2-0000000017579C7D
int32_t __cdecl Weapon::upgradeAffixLevel(
        Weapon *const this,
        const std::map<unsigned int,unsigned int> *delta_affix_level_map,
        bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  std::map<unsigned int,unsigned int>::mapped_type v7; // esi
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  EquipComp *EquipComp; // rax
  int32_t result; // eax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *affix_id; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *delta_affix_level; // [rsp+48h] [rbp-78h]
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 avatar_ptr:576";
  *(_QWORD *)(v3 + 16) = Weapon::upgradeAffixLevel;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = delta_affix_level_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(delta_affix_level_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(delta_affix_level_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    affix_id = std::get<0ul,unsigned int const,unsigned int>(v15);
    delta_affix_level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
    v6 = std::map<unsigned int,unsigned int>::operator[](&this->affix_map_, affix_id);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v7 = *v6;
    if ( *(_BYTE *)(((unsigned __int64)delta_affix_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)delta_affix_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta_affix_level >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(delta_affix_level);
    }
    *v6 = v7 + *delta_affix_level;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  Equip::getOwner((const Equip *const)(v3 + 32));
  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
  {
    v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    EquipComp = Avatar::getEquipComp(v8);
    EquipComp::refreshAffix(EquipComp, EQUIP_WEAPON);
  }
  if ( is_notify )
    Item::notifyItemChange(this);
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
  result = 0;
  if ( v18 == (char *)v3 )
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

// Line 590: range 0000000017579C7E-0000000017579FBF
int32_t __cdecl Weapon::foreachSkillAffix(
        const Weapon *const this,
        std::function<ForeachPolicy(unsigned int,unsigned int)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  unsigned int *v6; // rax
  unsigned int *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t *v9; // rax
  uint32_t *v10; // rdx
  unsigned int __a; // [rsp+14h] [rbp-BCh] BYREF
  unsigned int affix_id; // [rsp+18h] [rbp-B8h]
  uint32_t affix_level; // [rsp+1Ch] [rbp-B4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+30h] [rbp-A0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-80h] BYREF
  char v20[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 affix_max_level:599";
  *(_QWORD *)(v2 + 16) = Weapon::foreachSkillAffix;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  weapon_config_ptr = Weapon::getWeaponExcelConfig(this);
  if ( weapon_config_ptr )
  {
    __for_range = &weapon_config_ptr->skill_affix;
    __for_begin._M_current = std::vector<unsigned int>::begin(&weapon_config_ptr->skill_affix)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&weapon_config_ptr->skill_affix)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      affix_id = *v7;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
      *(_DWORD *)(v2 + 32) = EquipAffixExcelConfigMgr::findEquipAffixMaxLevel(
                               &v8->design_config.txt_config_mgr.equip_affix_config_mgr,
                               affix_id);
      std::shared_ptr<Config>::~shared_ptr(&v18);
      __a = Weapon::getAffixLevel(this, affix_id);
      v9 = (uint32_t *)std::min<unsigned int>(&__a, (const unsigned int *)(v2 + 32));
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      affix_level = *v10;
      if ( std::function<ForeachPolicy ()(unsigned int,unsigned int)>::operator()(p_func, affix_id, affix_level) )
      {
        result = 1;
        goto LABEL_16;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/weapon.cpp",
      "foreachSkillAffix",
      594);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v19,
      (const char (*)[29])"findWeaponExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = -1;
  }
LABEL_16:
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

// Line 609: range 000000001757A030-000000001757A1DD
void __cdecl Weapon::getWeaponLog(const Weapon *const this, proto_log::WeaponLog *weapon_log)
{
  uint64_t Guid; // rdx
  uint32_t ItemId; // edx
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+18h] [rbp-38h]
  std::function<ForeachPolicy(unsigned int,unsigned int)> p_func; // [rsp+20h] [rbp-30h] BYREF

  Guid = Item::getGuid(this);
  proto_log::WeaponLog::set_guid(weapon_log, Guid);
  ItemId = Item::getItemId(this);
  proto_log::WeaponLog::set_weapon_id(weapon_log, ItemId);
  weapon_config_ptr = Weapon::getWeaponExcelConfig(this);
  if ( weapon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->weapon_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)weapon_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->weapon_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&weapon_config_ptr->weapon_type);
    }
    proto_log::WeaponLog::set_speciality(weapon_log, weapon_config_ptr->weapon_type);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto_log::WeaponLog::set_level(weapon_log, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  proto_log::WeaponLog::set_promote_level(weapon_log, this->promote_level_);
  std::function<ForeachPolicy ()(unsigned int,unsigned int)>::function<Weapon::getWeaponLog(proto_log::WeaponLog &)::{lambda(unsigned int,unsigned int)#1},void,void>(
    &p_func,
    (Weapon::getWeaponLog::<lambda(uint32_t, uint32_t)>)weapon_log);
  Weapon::foreachSkillAffix(this, &p_func);
  std::function<ForeachPolicy ()(unsigned int,unsigned int)>::~function(&p_func);
};

// Line 619: range 0000000017579FC0-000000001757A02E
ForeachPolicy __cdecl Weapon::getWeaponLog(proto_log::WeaponLog &)const::{lambda(unsigned int,unsigned int)#1}::operator()(
        const Weapon::getWeaponLog::<lambda(uint32_t, uint32_t)> *const __closure,
        uint32_t affix_id,
        uint32_t affix_level)
{
  proto_log::AffixLog *affix_log; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  affix_log = proto_log::WeaponLog::add_affix_list(__closure->__weapon_log);
  proto_log::AffixLog::set_affix_id(affix_log, affix_id);
  proto_log::AffixLog::set_affix_level(affix_log, affix_level);
  return 0;
};

// Line 630: range 000000001757A1DE-000000001757A633
void __cdecl Weapon::logWeaponLevelup(
        Weapon *const this,
        uint32_t level_before,
        uint32_t promote_level_before,
        uint32_t op)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  proto_log::WeaponLog *v10; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *v14; // r14
  std::string v15; // [rsp+0h] [rbp-110h]
  google::protobuf::uint32 opa; // [rsp+Ch] [rbp-104h]
  google::protobuf::uint32 promote_level_beforea; // [rsp+10h] [rbp-100h]
  google::protobuf::uint32 level_beforea; // [rsp+14h] [rbp-FCh]
  const Weapon *const thisa; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+60h] [rbp-B0h] BYREF

  *(&v15._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v15._anon_0._M_allocated_capacity) = level_before;
  *(_DWORD *)v15._anon_0._M_local_buf = promote_level_before;
  HIDWORD(v15._M_string_length) = op;
  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 9 holer:641 64 16 14 player_ptr:635 96 16 26 weapon_levelup_log_ptr:642";
  *(_QWORD *)(v4 + 16) = Weapon::logWeaponLevelup;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  if ( level_before != this->level_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  if ( *(_DWORD *)v15._anon_0._M_local_buf != this->promote_level_ )
  {
LABEL_10:
    Item::getItemOwner((Item *const)(v4 + 64));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/weapon.cpp",
        "logWeaponLevelup",
        638);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"player_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      BasicComp = Player::getBasicComp(v7);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v22, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x6A6u, v15);
      std::string::~string(&v22);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyWeaponLevelup>();
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v10 = proto_log::PlayerLogBodyWeaponLevelup::mutable_weapon(v9);
      Weapon::getWeaponLog(thisa, v10);
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyWeaponLevelup::set_weapon_level_before(v11, level_beforea);
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyWeaponLevelup::set_promote_level_before(v12, promote_level_beforea);
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponLevelup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyWeaponLevelup::set_op(v13, opa);
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWeaponLevelup,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyWeaponLevelup> *)(v4 + 96));
      Player::printStatLog(v14, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyWeaponLevelup>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWeaponLevelup> *const)(v4 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  }
  if ( v23 == (char *)v4 )
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

// Line 652: range 000000001757A634-000000001757A7EA
void __cdecl Weapon::getWeaponAwakenLog(Weapon *const this, proto_log::PlayerLogBodyWeaponAwaken *weapon_awaken_log)
{
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rdx
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *affix_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *affix_level; // [rsp+38h] [rbp-18h]
  proto_log::AffixLog *affix_log; // [rsp+40h] [rbp-10h]
  std::pair<unsigned int const,unsigned int> v10; // [rsp+48h] [rbp-8h] BYREF

  __for_range = &this->affix_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->affix_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->affix_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2, 8LL);
    }
    v10 = *v3;
    affix_id = std::get<0ul,unsigned int const,unsigned int>(&v10);
    affix_level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v10);
    affix_log = proto_log::PlayerLogBodyWeaponAwaken::add_cur_affix_list(weapon_awaken_log);
    if ( *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(affix_id);
    }
    proto_log::AffixLog::set_affix_id(affix_log, *affix_id);
    if ( *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)affix_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affix_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(affix_level);
    }
    proto_log::AffixLog::set_affix_level(affix_log, *affix_level);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 663: range 000000001757A7EC-000000001757A8EB
bool __cdecl Weapon::isCanFood(const Weapon *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  const data::WeaponExcelConfig *weapon_excel_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  weapon_excel_config_ptr = Weapon::getWeaponExcelConfig(this);
  if ( weapon_excel_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&weapon_excel_config_ptr->enhance_rule >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weapon_excel_config_ptr->enhance_rule >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&weapon_excel_config_ptr->enhance_rule);
    }
    return weapon_excel_config_ptr->enhance_rule == 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/weapon.cpp",
      "isCanFood",
      667);
    v1 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v5,
           (const char (*)[42])"weapon excel config not found, weapon_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};
