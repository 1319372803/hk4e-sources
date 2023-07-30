// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/equip.cpp

// Line 23: range 0000000016C9CFE2-0000000016C9D117
int32_t __cdecl Equip::fromBin(Equip *const this, const proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int v5; // eax
  __int64 v6; // rdx
  char v7; // al
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  const proto::EquipBin *proto_equip_bin; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( Item::fromBin(this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/equip.cpp",
      "fromBin",
      26);
    v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v10, (const char (*)[9])"item_id:");
    val = Item::getItemId(this);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v3, (const char (*)[16])" fromBin failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    proto_equip_bin = proto::ItemBin::equip(proto_item_bin);
    LOBYTE(v5) = proto::EquipBin::is_locked(proto_equip_bin);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000);
    if ( v7 < 0 )
    {
      LOBYTE(proto_item_bin) = v7 != 0;
      __asan_report_store1(&this->is_locked_, proto_item_bin, v6);
    }
    this->is_locked_ = v6;
    return 0;
  }
};

// Line 36: range 0000000016C9D118-0000000016C9D250
int32_t __cdecl Equip::toBin(const Equip *const this, proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::EquipBin *proto_equip_bin; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( Item::toBin(this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/equip.cpp",
      "toBin",
      39);
    v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v7, (const char (*)[9])"item_id:");
    val = Item::getItemId(this);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])" toBin failed");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    proto_equip_bin = proto::ItemBin::mutable_equip(proto_item_bin);
    if ( *(char *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_locked_);
    proto::EquipBin::set_is_locked(proto_equip_bin, this->is_locked_);
    return 0;
  }
};

// Line 49: range 0000000016C9D252-0000000016C9D38A
int32_t __cdecl Equip::toClient(const Equip *const this, proto::Item *proto_item)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::Equip *proto_equip; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( Item::toClient(this, proto_item) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/equip.cpp",
      "toClient",
      52);
    v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v7, (const char (*)[9])"item_id:");
    val = Item::getItemId(this);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v3, (const char (*)[17])" toClient failed");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    proto_equip = proto::Item::mutable_equip(proto_item);
    if ( *(char *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_locked_);
    proto::Equip::set_is_locked(proto_equip, this->is_locked_);
    return 0;
  }
};

// Line 62: range 0000000016C9D38C-0000000016C9D468
int32_t __cdecl Equip::toSnapshot(const Equip *const this, proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( !Item::toSnapshot(this, proto_item_bin) )
    return 0;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/item/equip.cpp",
    "toSnapshot",
    65);
  v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v6, (const char (*)[9])"item_id:");
  val = Item::getItemId(this);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v3, (const char (*)[19])" toSnapshot failed");
  common::milog::MiLogStream::~MiLogStream(&v6);
  return -1;
};

// Line 73: range 0000000016C9D46A-0000000016C9D9FF
int32_t __cdecl Equip::init(Equip *const this, Player *player, bool is_first_create)
{
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  Equip *v6; // rdx
  unsigned int (__fastcall **v7)(Equip *); // rax
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // rbx
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v10; // rbx
  Equip *v11; // rdx
  unsigned int (__fastcall **v12)(Equip *); // rax
  WeaponExcelConfigMgr *p_weapon_config_mgr; // rbx
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rbx
  Equip *v17; // rdx
  __int64 (__fastcall **v18)(Equip *); // rax
  data::ItemType v19; // eax
  PlayerBasicComp *BasicComp; // rax
  bool v21; // al
  unsigned int val; // [rsp+20h] [rbp-60h] BYREF
  uint32_t initial_lock_state; // [rsp+24h] [rbp-5Ch]
  char *v25; // [rsp+28h] [rbp-58h] BYREF
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+30h] [rbp-50h]
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-30h] BYREF

  if ( Item::init(this, player, is_first_create) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/equip.cpp",
      "init",
      76);
    v3 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v29, (const char (*)[9])"item_id:");
    val = Item::getItemId(this);
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v4, (const char (*)[13])" init failed");
    common::milog::MiLogStream::~MiLogStream(&v29);
    return -1;
  }
  initial_lock_state = 0;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned int (__fastcall **)(Equip *))(this->_vptr_Item + 9);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*v7)(v6) == 3 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.reliquary_config_mgr;
    ItemId = Item::getItemId(this);
    reliquary_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryExcelConfig(p_reliquary_config_mgr, ItemId);
    std::shared_ptr<Config>::~shared_ptr(&v28);
    if ( !reliquary_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/equip.cpp",
        "init",
        85);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v29,
              (const char (*)[41])"findReliquaryExcelConfig fails, item_id:");
      val = Item::getItemId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      return -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->initial_lock_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->initial_lock_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&reliquary_config_ptr->initial_lock_state);
    }
    initial_lock_state = reliquary_config_ptr->initial_lock_state;
LABEL_28:
    if ( is_first_create )
    {
      v21 = 1;
      if ( initial_lock_state != 1 )
      {
        if ( initial_lock_state != 2
          || (BasicComp = Player::getBasicComp(player), PlayerBasicComp::getIsAutoUnlockSpecificEquip(BasicComp)) )
        {
          v21 = 0;
        }
      }
      Equip::setIsLocked(this, v21);
    }
    return 0;
  }
  v11 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (unsigned int (__fastcall **)(Equip *))(this->_vptr_Item + 9);
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*v12)(v11) == 4 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    p_weapon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.weapon_config_mgr;
    v14 = Item::getItemId(this);
    weapon_config_ptr = data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(p_weapon_config_mgr, v14);
    std::shared_ptr<Config>::~shared_ptr(&v28);
    if ( !weapon_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/equip.cpp",
        "init",
        95);
      v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v29,
              (const char (*)[38])"findWeaponExcelConfig fails, item_id:");
      val = Item::getItemId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      return -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->initial_lock_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->initial_lock_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&weapon_config_ptr->initial_lock_state);
    }
    initial_lock_state = weapon_config_ptr->initial_lock_state;
    goto LABEL_28;
  }
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/item/equip.cpp",
    "init",
    102);
  v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v29,
          (const char (*)[22])"unexpected item_type:");
  v17 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v18 = (__int64 (__fastcall **)(Equip *))(this->_vptr_Item + 9);
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v19 = (unsigned int)(*v18)(v17);
  v25 = (char *)data::enumValToStr(v19);
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v16, (const char *const *)&v25);
  common::milog::MiLogStream::~MiLogStream(&v29);
  return -1;
};

// Line 114: range 0000000016C9DA00-0000000016C9DA2D
int32_t __cdecl Equip::setOwner(Equip *const this, AvatarPtr *p_avatar_ptr)
{
  std::weak_ptr<Avatar>::operator=<Avatar>(&this->avatar_wtr_, p_avatar_ptr);
  return 0;
};

// Line 120: range 0000000016C9DA2E-0000000016C9DA50
int32_t __cdecl Equip::resetOwner(Equip *const this)
{
  std::__weak_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::reset(&this->avatar_wtr_);
  return 0;
};

// Line 126: range 0000000016C9DA52-0000000016C9DB47
uint32_t __cdecl Equip::getWeight(Equip *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  const data::ItemConfig *item_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  item_config_ptr = Item::getItemConfig(this);
  if ( item_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->weight >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&item_config_ptr->weight >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&item_config_ptr->weight);
    }
    return item_config_ptr->weight;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/equip.cpp",
      "getWeight",
      130);
    v1 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v5,
           (const char (*)[32])"findItemConfig failed, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 138: range 0000000016C9DB48-0000000016C9DB56
uint32_t __cdecl Equip::getItemCount(const Equip *const this)
{
  return 1;
};

// Line 143: range 0000000016C9DB58-0000000016C9DBAD
int32_t __cdecl Equip::checkConsume(Equip *const this)
{
  bool v1; // bl
  std::shared_ptr<Avatar> __a; // [rsp+10h] [rbp-20h] BYREF

  Equip::getOwner((const Equip *const)&__a);
  v1 = std::operator!=<Avatar>(&__a, 0LL);
  std::shared_ptr<Avatar>::~shared_ptr(&__a);
  if ( v1 )
    return 653;
  else
    return 0;
};

// Line 153: range 0000000016C9DBAE-0000000016C9DBE0
int32_t __cdecl Equip::toShowEquipInfo(const Equip *const this, proto::ShowEquip *show_equip)
{
  uint32_t ItemId; // edx

  ItemId = Item::getItemId(this);
  proto::ShowEquip::set_item_id(show_equip, ItemId);
  return 0;
};
