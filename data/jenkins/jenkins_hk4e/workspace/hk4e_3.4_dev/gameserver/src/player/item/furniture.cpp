// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/furniture.cpp

// Line 20: range 00000000175550E6-000000001755521B
int32_t __cdecl Furniture::fromBin(Furniture *const this, const proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  __int64 v5; // rdx
  char v6; // al
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  const proto::FurnitureBin *proto_furniture_bin; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( Item::fromBin(this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/furniture.cpp",
      "fromBin",
      23);
    v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v9, (const char (*)[9])"item_id:");
    val = Item::getItemId(this);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v3, (const char (*)[16])" fromBin failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else
  {
    proto_furniture_bin = proto::ItemBin::furniture(proto_item_bin);
    v5 = proto::FurnitureBin::count(proto_furniture_bin);
    v6 = *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000);
    if ( v6 != 0 && v6 <= 3 )
    {
      LOBYTE(proto_item_bin) = v6 != 0;
      __asan_report_store4(&this->count_, proto_item_bin, v5);
    }
    this->count_ = v5;
    return 0;
  }
};

// Line 33: range 000000001755521C-0000000017555350
int32_t __cdecl Furniture::toBin(const Furniture *const this, proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::FurnitureBin *proto_furniture_bin; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( Item::toBin(this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/furniture.cpp",
      "toBin",
      36);
    v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v7, (const char (*)[9])"item_id:");
    val = Item::getItemId(this);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])" toBin failed");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    proto_furniture_bin = proto::ItemBin::mutable_furniture(proto_item_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->count_);
    }
    proto::FurnitureBin::set_count(proto_furniture_bin, this->count_);
    return 0;
  }
};

// Line 46: range 0000000017555352-0000000017555486
int32_t __cdecl Furniture::toClient(const Furniture *const this, proto::Item *proto_item)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::Furniture *proto_furniture; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( Item::toClient(this, proto_item) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/furniture.cpp",
      "toClient",
      49);
    v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v7, (const char (*)[9])"item_id:");
    val = Item::getItemId(this);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v3, (const char (*)[17])" toClient failed");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    proto_furniture = proto::Item::mutable_furniture(proto_item);
    if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->count_);
    }
    proto::Furniture::set_count(proto_furniture, this->count_);
    return 0;
  }
};

// Line 59: range 0000000017555488-0000000017555665
int32_t __cdecl Furniture::init(Furniture *const this, Player *player, bool is_first_create)
{
  common::milog::MiLogStream *v3; // rbx
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rbx
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v7; // rbx
  unsigned int val; // [rsp+24h] [rbp-4Ch] BYREF
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v10; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-30h] BYREF

  if ( Item::init(this, player, is_first_create) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/furniture.cpp",
      "init",
      62);
    v3 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v11,
           (const char (*)[27])"Item init failed, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.home_config_mgr;
    ItemId = Item::getItemId(this);
    furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                             p_home_config_mgr,
                             ItemId);
    std::shared_ptr<Config>::~shared_ptr(&v10);
    if ( furniture_config_ptr )
    {
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/furniture.cpp",
        "init",
        69);
      v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v11,
             (const char (*)[51])"findHomeWorldFurnitureExcelConfig failed, item_id:");
      val = Item::getItemId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return -1;
    }
  }
};

// Line 81: range 0000000017555666-000000001755579C
uint32_t __cdecl Furniture::getWeight(Furniture *const this)
{
  common::milog::MiLogStream *v1; // rbx
  uint32_t weight; // ecx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  const data::ItemConfig *item_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  item_config_ptr = Item::getItemConfig(this);
  if ( item_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->weight >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&item_config_ptr->weight >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&item_config_ptr->weight);
    }
    weight = item_config_ptr->weight;
    if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->count_);
    }
    return weight * this->count_;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/furniture.cpp",
      "getWeight",
      85);
    v1 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v6,
           (const char (*)[32])"findItemConfig failed, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 93: range 000000001755579E-00000000175557AC
data::ItemType __cdecl Furniture::getItemType(const Furniture *const this)
{
  return 6;
};

// Line 98: range 00000000175557AE-00000000175557F5
uint32_t __cdecl Furniture::getItemCount(const Furniture *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count_);
  }
  return this->count_;
};

// Line 103: range 00000000175557F6-000000001755588B
int32_t __cdecl Furniture::checkConsume(Furniture *const this)
{
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rbx
  uint32_t ItemId; // eax
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.home_config_mgr;
  ItemId = Item::getItemId(this);
  LOBYTE(p_home_config_mgr) = HomeWorldExcelConfigMgr::isCustomNodeFurnitrue(p_home_config_mgr, ItemId);
  std::shared_ptr<Config>::~shared_ptr(v4);
  if ( (_BYTE)p_home_config_mgr )
    return 0;
  else
    return -1;
};

// Line 114: range 000000001755588C-0000000017555DC3
int32_t __cdecl Furniture::merge(Furniture *const this, ItemPtr *p_item_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t ItemId; // r14d
  common::milog::MiLogStream *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r12
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rdx
  uint32_t v14; // edx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  __int64 (__fastcall **v18)(Furniture *const); // rax
  Furniture *v19; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-90h] BYREF
  char v24[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 furniture_ptr:128";
  *(_QWORD *)(v2 + 16) = Furniture::merge;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<Item>(p_item_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/furniture.cpp",
      "merge",
      117);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v23, (const char (*)[20])"item_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
    ItemId = Item::getItemId(v6);
    if ( ItemId == Item::getItemId(this) )
    {
      std::dynamic_pointer_cast<Furniture,Item>((const std::shared_ptr<Item> *)(v2 + 32));
      if ( std::operator==<Furniture>((const std::shared_ptr<Furniture> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/furniture.cpp",
          "merge",
          131);
        v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v23,
                (const char (*)[38])"dynamic_pointer_cast failed, item_id:");
        v22 = Item::getItemId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v22);
        common::milog::MiLogStream::~MiLogStream(&v23);
        v5 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v13 = (unsigned __int64)(v12->_vptr_Item + 8);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v14 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v13)(v12);
        if ( Furniture::addCount(this, v14) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/furniture.cpp",
            "merge",
            139);
          v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v23,
                  (const char (*)[26])"addCount failed, item_id:");
          val = Item::getItemId(this);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" cur_count:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v18 = (__int64 (__fastcall **)(Furniture *const))(this->_vptr_Item + 8);
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v22 = (*v18)(this);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v22);
          common::milog::MiLogStream::~MiLogStream(&v23);
          v5 = -1;
        }
        else
        {
          v19 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          Furniture::setCount(v19, 0);
          v5 = 0;
        }
      }
      std::shared_ptr<Furniture>::~shared_ptr((std::shared_ptr<Furniture> *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/furniture.cpp",
        "merge",
        123);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v23, (const char (*)[31])off_2612C680);
      val = Item::getItemId(this);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" target item_id:");
      v22 = Item::getItemId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &v22);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v5 = -1;
    }
  }
  result = v5;
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

// Line 150: range 0000000017555DC4-0000000017555E12
// local variable allocation has failed, the output may be wrong!
void __cdecl Furniture::setCount(Furniture *const this, uint32_t count)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count_, *(_QWORD *)&count, &this->count_);
  }
  this->count_ = count;
};

// Line 155: range 0000000017555E14-0000000017556104
int32_t __cdecl Furniture::addCount(Furniture *const this, uint32_t count)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  HomeWorldExcelConfigMgr *p_home_config_mgr; // r14
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v7; // r14
  int32_t result; // eax
  __int64 (__fastcall **v9)(Furniture *const); // rax
  unsigned int v10; // eax
  uint32_t *v11; // rax
  uint32_t *v12; // rdx
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-90h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 total_amount:163";
  *(_QWORD *)(v2 + 16) = Furniture::addCount;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.home_config_mgr;
  ItemId = Item::getItemId(this);
  furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(p_home_config_mgr, ItemId);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( furniture_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (__int64 (__fastcall **)(Furniture *const))(this->_vptr_Item + 8);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (*v9)(this);
    *(_DWORD *)(v2 + 32) = SAFE_ADD<unsigned int,unsigned int>(v10, count);
    v11 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v2 + 32), &furniture_config_ptr->stack_limit);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    Furniture::setCount(this, *v12);
    Item::notifyItemChange(this);
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/furniture.cpp",
      "addCount",
      159);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v15,
           (const char (*)[51])"findHomeWorldFurnitureExcelConfig failed, item_id:");
    *(_DWORD *)(v2 + 32) = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
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
  return result;
};

// Line 173: range 0000000017556106-00000000175564FC
__int64 __fastcall Furniture::subCount(Furniture *const this, uint32_t count)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int (__fastcall **v5)(Furniture *const); // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 (__fastcall **v9)(Furniture *const); // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 (__fastcall **v12)(Furniture *const); // rax
  __int64 (__fastcall **v13)(Furniture *const); // rax
  int v14; // eax
  unsigned int (__fastcall **v15)(Furniture *const); // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  unsigned int v18; // [rsp+18h] [rbp-98h] BYREF
  uint32_t real_sub_cout; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-90h] BYREF
  char v21[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 count:172";
  *(_QWORD *)(v2 + 16) = Furniture::subCount;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = count;
  real_sub_cout = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned int (__fastcall **)(Furniture *const))(this->_vptr_Item + 8);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*v5)(this) < *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/furniture.cpp",
      "subCount",
      177);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v20,
           (const char (*)[32])"split materail failed, item_id:");
    val = Item::getItemId(this);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" cur_count:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (__int64 (__fastcall **)(Furniture *const))(this->_vptr_Item + 8);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = (*v9)(this);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &v18);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" split_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (__int64 (__fastcall **)(Furniture *const))(this->_vptr_Item + 8);
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    real_sub_cout = (*v12)(this);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = (__int64 (__fastcall **)(Furniture *const))(this->_vptr_Item + 8);
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = (*v13)(this);
  Furniture::setCount(this, v14 - real_sub_cout);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = (unsigned int (__fastcall **)(Furniture *const))(this->_vptr_Item + 8);
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*v15)(this) )
    Item::notifyItemChange(this);
  result = 0LL;
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

// Line 194: range 00000000175564FE-000000001755661F
const data::HomeWorldFurnitureExcelConfig *__cdecl Furniture::getFurnitureConfig(const Furniture *const this)
{
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rbx
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.home_config_mgr;
  ItemId = Item::getItemId(this);
  furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(p_home_config_mgr, ItemId);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( furniture_config_ptr )
    return furniture_config_ptr;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/item/furniture.cpp",
    "getFurnitureConfig",
    198);
  v3 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
         &v8,
         (const char (*)[51])"findHomeWorldFurnitureExcelConfig failed, item_id:");
  val = Item::getItemId(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  common::milog::MiLogStream::~MiLogStream(&v8);
  return 0LL;
};
