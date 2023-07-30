// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/item_store.cpp

// Line 34: range 000000001755A68C-000000001755AD57
int32_t __cdecl ItemStore::fromBin(ItemStore *const this, const proto::ItemStoreBin *data_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  google::protobuf::RepeatedPtrField<proto::ItemBin>::const_iterator *p_for_end; // rsi
  uint32_t ItemComp; // r15d
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  int v14; // r15d
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  bool v22; // r15
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  unsigned int v28; // eax
  __int64 v29; // rdx
  char v30; // al
  int32_t result; // eax
  google::protobuf::uint32 guid; // [rsp+14h] [rbp-FCh]
  unsigned int val; // [rsp+38h] [rbp-D8h] BYREF
  unsigned int v35; // [rsp+3Ch] [rbp-D4h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemBin>::const_iterator __for_begin; // [rsp+40h] [rbp-D0h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemBin>::const_iterator __for_end; // [rsp+48h] [rbp-C8h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-C0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ItemBin> *proto_item_list; // [rsp+58h] [rbp-B8h]
  const google::protobuf::RepeatedPtrField<proto::ItemBin> *__for_range; // [rsp+60h] [rbp-B0h]
  const proto::ItemBin *proto_item_bin; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<Item> p_item_ptr; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v43; // [rsp+80h] [rbp-90h] BYREF
  char v44[112]; // [rsp+A0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 item_ptr:38";
  *(_QWORD *)(v3 + 16) = ItemStore::fromBin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  proto_item_list = proto::ItemStoreBin::item_list(data_bin);
  __for_range = proto_item_list;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemBin>::begin(proto_item_list).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemBin>::end(proto_item_list).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::ItemBin const>::operator!=(&__for_begin, &__for_end) )
      break;
    proto_item_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ItemBin const>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = (unsigned int)Player::getItemComp(this->player_);
    proto::ItemBin::guid(proto_item_bin);
    guid = proto::ItemBin::item_id(proto_item_bin);
    v8 = proto::ItemBin::item_type(proto_item_bin);
    PlayerItemComp::createItem((PlayerItemComp *const)(v3 + 32), ItemComp, v8, guid);
    if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "fromBin",
        42);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v43,
             (const char (*)[29])"createItem fails, item_type:");
      val = proto::ItemBin::item_type(proto_item_bin);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" item_id:");
      v35 = proto::ItemBin::item_id(proto_item_bin);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v35);
      v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" guid:");
      v38 = proto::ItemBin::guid(proto_item_bin);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &v38);
      common::milog::MiLogStream::~MiLogStream(&v43);
      v2 = -1;
      v14 = 0;
    }
    else
    {
      v15 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = (unsigned __int64)(v15->_vptr_Item + 2);
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const proto::ItemBin *))v16)(
             v15,
             proto_item_bin) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/item_store.cpp",
          "fromBin",
          49);
        v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v43,
                (const char (*)[32])"item fromBin failed, item_type:");
        val = proto::ItemBin::item_type(proto_item_bin);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" item_id:");
        v35 = proto::ItemBin::item_id(proto_item_bin);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &v35);
        v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" guid:");
        v38 = proto::ItemBin::guid(proto_item_bin);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v21, &v38);
        common::milog::MiLogStream::~MiLogStream(&v43);
        v2 = -1;
        v14 = 0;
      }
      else
      {
        std::shared_ptr<Item>::shared_ptr(&p_item_ptr, (const std::shared_ptr<Item> *)(v3 + 32));
        v22 = ItemStore::emplaceItem(this, &p_item_ptr, 0) != 0;
        std::shared_ptr<Item>::~shared_ptr(&p_item_ptr);
        if ( v22 )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/item_store.cpp",
            "fromBin",
            56);
          v23 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v43,
                  (const char (*)[32])"emplace item failed, item_type:");
          val = proto::ItemBin::item_type(proto_item_bin);
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
          v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" item_id:");
          v35 = proto::ItemBin::item_id(proto_item_bin);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &v35);
          v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])" guid:");
          v38 = proto::ItemBin::guid(proto_item_bin);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v27, &v38);
          common::milog::MiLogStream::~MiLogStream(&v43);
          v2 = -1;
          v14 = 0;
        }
        else
        {
          v14 = 1;
        }
      }
    }
    std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 32));
    if ( v14 != 1 )
      goto LABEL_24;
    google::protobuf::internal::RepeatedPtrIterator<proto::ItemBin const>::operator++(&__for_begin);
  }
  LOBYTE(v28) = proto::ItemStoreBin::is_material_item_num_alarmed(data_bin);
  v29 = v28;
  v30 = *(_BYTE *)(((unsigned __int64)&this->is_material_item_num_alarmed_ >> 3) + 0x7FFF8000);
  if ( v30 < 0 )
  {
    LOBYTE(p_for_end) = v30 != 0;
    __asan_report_store1(&this->is_material_item_num_alarmed_, p_for_end, v29);
  }
  this->is_material_item_num_alarmed_ = v29;
  v2 = 0;
LABEL_24:
  result = v2;
  if ( v44 == (char *)v3 )
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

// Line 68: range 000000001755AD58-000000001755B266
int32_t __cdecl ItemStore::toBin(ItemStore *const this, proto::ItemStoreBin *data_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  int v18; // r15d
  proto::ItemBin *v19; // r15
  proto::ItemBin *v20; // rax
  int32_t result; // eax
  data::ItemType val; // [rsp+20h] [rbp-110h] BYREF
  unsigned int ItemId; // [rsp+24h] [rbp-10Ch] BYREF
  std::map<long unsigned int,std::shared_ptr<Item>>::iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::map<long unsigned int,std::shared_ptr<Item>>::iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-F8h] BYREF
  std::map<long unsigned int,std::shared_ptr<Item>> *__for_range; // [rsp+40h] [rbp-F0h]
  const std::pair<long unsigned int const,std::shared_ptr<Item> > *v28; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::shared_ptr<Item> > >::type *guid; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<Item> > >::type *item_ptr; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-D0h] BYREF
  char v32[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 17 proto_item_bin:77";
  *(_QWORD *)(v3 + 16) = ItemStore::toBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  __for_range = &this->item_map_;
  __for_begin._M_node = std::map<unsigned long,std::shared_ptr<Item>>::begin(&this->item_map_)._M_node;
  __for_end._M_node = std::map<unsigned long,std::shared_ptr<Item>>::end(&this->item_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v28 = std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Item>>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned long const,std::shared_ptr<Item>>(v28);
    item_ptr = (std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<Item> > >::type *)std::get<1ul,unsigned long const,std::shared_ptr<Item>>(v28);
    if ( std::operator==<Item>(item_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "toBin",
        73);
      v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v31,
             (const char (*)[27])"item_ptr is nullptr, guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, guid);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v2 = -1;
      goto LABEL_24;
    }
    proto::ItemBin::ItemBin((proto::ItemBin *const)(v3 + 48));
    v7 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(v7->_vptr_Item + 3);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v8)(
           v7,
           v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "toBin",
        80);
      v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v31,
             (const char (*)[36])"item_ptr fromBin failed, item_type:");
      v10 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = (unsigned __int64)(v10->_vptr_Item + 9);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11)(v10);
      v12 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(v9, &val);
      v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" item_id:");
      v14 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
      ItemId = Item::getItemId(v14);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &ItemId);
      v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" guid:");
      v17 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
      v26 = Item::getGuid(v17);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v16, &v26);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v2 = -1;
      v18 = 0;
    }
    else
    {
      v19 = std::move<proto::ItemBin &>((proto::ItemBin *)(v3 + 48));
      v20 = proto::ItemStoreBin::add_item_list(data_bin);
      proto::ItemBin::operator=(v20, v19);
      v18 = 1;
    }
    proto::ItemBin::~ItemBin((proto::ItemBin *const)(v3 + 48));
    if ( v18 != 1 )
      goto LABEL_24;
    std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Item>>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_material_item_num_alarmed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_material_item_num_alarmed_);
  proto::ItemStoreBin::set_is_material_item_num_alarmed(data_bin, this->is_material_item_num_alarmed_);
  v2 = 0;
LABEL_24:
  result = v2;
  if ( v32 == (char *)v3 )
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

// Line 95: range 000000001755B268-000000001755B91C
int32_t __cdecl ItemStore::init(ItemStore *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned int (__fastcall *v8)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, _QWORD); // r8
  common::milog::MiLogStream *v9; // rbx
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::set<long unsigned int> *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  std::map<long unsigned int,std::shared_ptr<Item>>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::map<long unsigned int,std::shared_ptr<Item>>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::initializer_list<data::ItemType>::const_iterator __for_begin_0; // [rsp+28h] [rbp-108h]
  std::map<long unsigned int,std::shared_ptr<Item>> *__for_range; // [rsp+30h] [rbp-100h]
  std::initializer_list<data::ItemType> *__for_range_0; // [rsp+38h] [rbp-F8h]
  std::initializer_list<data::ItemType>::const_iterator __for_end_0; // [rsp+40h] [rbp-F0h]
  const std::pair<long unsigned int const,std::shared_ptr<Item> > *v30; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::shared_ptr<Item> > >::type *guid; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<Item> > >::type *item_ptr; // [rsp+58h] [rbp-D8h]
  std::initializer_list<data::ItemType> v33; // [rsp+60h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v34; // [rsp+70h] [rbp-C0h] BYREF
  common::milog::MiLogStream v35; // [rsp+80h] [rbp-B0h] BYREF
  char v36[144]; // [rsp+A0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 13 item_type:114 48 4 11 cur_num:116 64 4 14 hard_limit:117";
  *(_QWORD *)(v1 + 16) = ItemStore::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116348;
  __for_range = &this->item_map_;
  __for_begin._M_node = std::map<unsigned long,std::shared_ptr<Item>>::begin(&this->item_map_)._M_node;
  __for_end._M_node = std::map<unsigned long,std::shared_ptr<Item>>::end(&this->item_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v30 = std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Item>>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned long const,std::shared_ptr<Item>>(v30);
    item_ptr = (std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<Item> > >::type *)std::get<1ul,unsigned long const,std::shared_ptr<Item>>(v30);
    if ( std::operator==<Item>(item_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/item/item_store.cpp",
        "init",
        100);
      v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v35,
             (const char (*)[27])"item_ptr is nullptr, guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, guid);
      common::milog::MiLogStream::~MiLogStream(&v35);
      result = -1;
      goto LABEL_27;
    }
    v6 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = (unsigned __int64)(v6->_vptr_Item + 6);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, _QWORD))v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v8(v6, this->player_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/item/item_store.cpp",
        "init",
        106);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v35,
             (const char (*)[27])"item init failed, item_id:");
      v10 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
      val = Item::getItemId(v10);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, guid);
      common::milog::MiLogStream::~MiLogStream(&v35);
      result = -1;
      goto LABEL_27;
    }
    v13 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
    val = Item::getItemId(v13);
    v14 = std::map<unsigned int,std::set<unsigned long>>::operator[](&this->item_id_map_, &val);
    std::set<unsigned long>::insert(v14, guid);
    std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Item>>>::operator++(&__for_begin);
  }
  v33._M_len = 4LL;
  v33._M_array = (std::initializer_list<data::ItemType>::iterator)&C_1759_7500225;
  __for_range_0 = &v33;
  __for_begin_0 = std::initializer_list<data::ItemType>::begin(&v33);
  __for_end_0 = std::initializer_list<data::ItemType>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_0);
    }
    *(data::ItemType *)(v1 + 32) = *__for_begin_0;
    *(_DWORD *)(v1 + 48) = ItemStore::getTotalNumByItemType(this, *(data::ItemType *)(v1 + 32));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
    *(_DWORD *)(v1 + 64) = ConstValueExcelConfigMgr::getItemHardLimitByItemType(
                             &v15->design_config.txt_config_mgr.const_value_config_mgr,
                             *(data::ItemType *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v34);
    if ( *(_DWORD *)(v1 + 48) > *(_DWORD *)(v1 + 64) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/item/item_store.cpp",
        "init",
        120);
      v16 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v35,
              (const char (*)[41])"item count exceed hard limit! item_type:");
      v17 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(
              v16,
              (const data::ItemType *)(v1 + 32));
      v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" cur_num:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v1 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" hard_limit:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v1 + 64));
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
    ++__for_begin_0;
  }
  result = 0;
LABEL_27:
  if ( v36 == (char *)v1 )
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

// Line 129: range 000000001755B91E-000000001755BAA8
ItemStore *__fastcall ItemStore::findItem(ItemStore *const this, uint64_t guid, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<Item> > >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<Item> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 iter:130 64 8 8 guid:128";
  *(_QWORD *)(v3 + 16) = ItemStore::findItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(_QWORD *)(v3 + 64) = a3;
  *(std::map<long unsigned int,std::shared_ptr<Item>>::iterator *)(v3 + 32) = std::map<unsigned long,std::shared_ptr<Item>>::find(
                                                                                (std::map<long unsigned int,std::shared_ptr<Item>> *const)(guid + 8),
                                                                                (const std::map<long unsigned int,std::shared_ptr<Item>>::key_type *)(v3 + 64));
  __y._M_node = std::map<unsigned long,std::shared_ptr<Item>>::end((std::map<long unsigned int,std::shared_ptr<Item>> *const)(guid + 8))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<Item> > >::_Self *)(v3 + 32),
         &__y) )
  {
    std::shared_ptr<Item>::shared_ptr((std::shared_ptr<Item> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Item>>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<Item> > > *const)(v3 + 32));
    std::shared_ptr<Item>::shared_ptr((std::shared_ptr<Item> *const)this, &v6->second);
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

// Line 143: range 000000001755BAAA-000000001755BAFA
MaterialPtr __cdecl ItemStore::findMaterial(ItemStore *const this, uint32_t item_id)
{
  MaterialPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = ItemStore::findItemByItemId<Material>(this, item_id);
  result._M_ptr = (std::__shared_ptr<Material,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 149: range 000000001755BAFC-000000001755BB4C
FurniturePtr __cdecl ItemStore::findFurniture(ItemStore *const this, uint32_t item_id)
{
  FurniturePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = ItemStore::findItemByItemId<Furniture>(this, item_id);
  result._M_ptr = (std::__shared_ptr<Furniture,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 155: range 000000001755BB4E-000000001755BC52
bool __cdecl ItemStore::hasItem(ItemStore *const this, uint64_t guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r15
  bool result; // al
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 item_ptr:156";
  *(_QWORD *)(v2 + 16) = ItemStore::hasItem;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ItemStore::findItem((ItemStore *const)(v2 + 32), (uint64_t)this, guid);
  v5 = std::operator!=<Item>((const std::shared_ptr<Item> *)(v2 + 32), 0LL);
  std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v2 + 32));
  result = v5;
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

// Line 169: range 000000001755BC54-000000001755BDB9
_BOOL8 __fastcall ItemStore::hasItemById(const ItemStore *const this, uint32_t item_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::pointer v5; // rax
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 item_id:168 64 8 8 iter:170";
  *(_QWORD *)(v2 + 16) = ItemStore::hasItemById;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = item_id;
  *(std::map<unsigned int,std::set<long unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned long>>::find(
                                                                                       &this->item_id_map_,
                                                                                       (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::set<unsigned long>>::end(&this->item_id_map_)._M_node;
  result = 0;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<long unsigned int> > > *const)(v2 + 64));
    if ( std::set<unsigned long>::size(&v5->second) )
      result = 1;
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

// Line 176: range 000000001755BDBA-000000001755C154
__int64 __fastcall ItemStore::getItemCount(ItemStore *const this, uint32_t item_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<long unsigned int>::reference v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rdx
  uint32_t count; // [rsp+14h] [rbp-10Ch]
  std::set<long unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::set<long unsigned int>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::set<long unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 11 item_id:175 64 8 8 iter:177 96 8 8 guid:185 128 16 12 item_ptr:187";
  *(_QWORD *)(v2 + 16) = ItemStore::getItemCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = item_id;
  *(std::map<unsigned int,std::set<long unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned long>>::find(
                                                                                 &this->item_id_map_,
                                                                                 (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v2 + 48));
  __for_end._M_node = std::map<unsigned int,std::set<unsigned long>>::end(&this->item_id_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Self *)&__for_end) )
  {
    result = 0LL;
  }
  else
  {
    count = 0;
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > > *const)(v2 + 64))->second;
    __for_begin._M_node = std::set<unsigned long>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned long>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_QWORD *)(v2 + 96) = *v6;
      ItemStore::findItem((ItemStore *const)(v2 + 128), (uint64_t)this, *(_QWORD *)(v2 + 96));
      if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v2 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/item_store.cpp",
          "getItemCount",
          190);
        v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v14,
               (const char (*)[31])"item_ptr is not nullptr, guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v7,
          (const unsigned __int64 *)(v2 + 96));
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
      else
      {
        v8 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v9 = (unsigned __int64)(v8->_vptr_Item + 8);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        count += (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v9)(v8);
      }
      std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v2 + 128));
      std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin);
    }
    result = count;
  }
  if ( v15 == (char *)v2 )
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

// Line 202: range 000000001755C156-000000001755C177
uint32_t __cdecl ItemStore::getMaterialCount(ItemStore *const this, uint32_t item_id)
{
  return ItemStore::getItemCount(this, item_id);
};

// Line 209: range 000000001755C178-000000001755C498
__int64 __fastcall ItemStore::getMaterialCountWithMaterialType(ItemStore *const this, uint32_t material_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::unordered_map<unsigned int,std::set<unsigned int>> *material_item_ids_map; // [rsp+30h] [rbp-C0h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v15; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 15 total_count:210 48 4 17 material_type:208 64 8 8 iter:212";
  *(_QWORD *)(v2 + 16) = ItemStore::getMaterialCountWithMaterialType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = material_type;
  *(_DWORD *)(v2 + 32) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  material_item_ids_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.material_config_mgr.material_item_ids_map;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            material_item_ids_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(material_item_ids_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end) )
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      *(_DWORD *)(v2 + 32) += ItemStore::getItemCount(this, *v6);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/item/item_store.cpp",
    "getMaterialCountWithMaterialType",
    220);
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v16, (const char (*)[15])"material_type:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" total_count:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v16);
  result = *(unsigned int *)(v2 + 32);
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

// Line 226: range 000000001755C49A-000000001755E59C
__int64 __fastcall ItemStore::dropItem(
        ItemStore *const this,
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *guid,
        uint32_t count,
        ItemPtr *drop_item_ptr)
{
  unsigned int v4; // r14d
  unsigned __int64 p_M_refcount; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  unsigned __int64 v36; // rdx
  int v37; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  bool isItemSystemClosed; // r15
  FeatureSwitchMgr *v40; // r15
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  uint32_t v42; // eax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  unsigned __int64 v56; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  int v59; // r15d
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  unsigned __int64 v62; // rdx
  Player *v63; // rsi
  common::milog::MiLogStream *v64; // r14
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rax
  common::milog::MiLogStream *v71; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  unsigned __int64 v73; // rdx
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  uint64_t v75; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rax
  bool isReliquarySystemClosed; // r15
  FeatureSwitchMgr *v78; // r15
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // rax
  uint32_t v80; // eax
  common::milog::MiLogStream *v81; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // r14
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v90; // rax
  int v91; // r15d
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v92; // rax
  common::milog::MiLogStream *v93; // r14
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v99; // rax
  bool v100; // r15
  common::milog::MiLogStream *v101; // r14
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v107; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v108; // rax
  uint64_t v109; // rax
  proto::ActionReasonType v110; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v111; // rax
  bool isWeaponSystemClosed; // r15
  FeatureSwitchMgr *p_feature_switch_mgr; // r15
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v114; // rax
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v116; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // r14
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v122; // rax
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v125; // rax
  int v126; // r15d
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v127; // rax
  common::milog::MiLogStream *v128; // r14
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v131; // rax
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v134; // rax
  bool v135; // r15
  common::milog::MiLogStream *v136; // r14
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v139; // rax
  common::milog::MiLogStream *v140; // rax
  common::milog::MiLogStream *v141; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v142; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v143; // rax
  uint64_t v144; // rax
  proto::ActionReasonType v145; // r15d
  common::milog::MiLogStream *v146; // r14
  common::milog::MiLogStream *v147; // rax
  common::milog::MiLogStream *v148; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v149; // rax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v152; // rax
  unsigned __int64 v153; // rdx
  common::milog::MiLogStream *v154; // rax
  common::milog::MiLogStream *v155; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v156; // rax
  __int64 result; // rax
  unsigned int v160; // [rsp+34h] [rbp-14Ch] BYREF
  unsigned int Uid; // [rsp+38h] [rbp-148h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-144h] BYREF
  int32_t ret; // [rsp+40h] [rbp-140h]
  uint32_t item_id; // [rsp+44h] [rbp-13Ch]
  uint32_t old_count; // [rsp+48h] [rbp-138h]
  uint32_t cur_count; // [rsp+4Ch] [rbp-134h]
  unsigned __int64 v167; // [rsp+50h] [rbp-130h] BYREF
  const data::ItemConfig *item_config_ptr; // [rsp+58h] [rbp-128h]
  Equip v169[2]; // [rsp+60h] [rbp-120h] BYREF

  p_M_refcount = (unsigned __int64)&v169[0].player_wtr_._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      p_M_refcount = v6;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "5 48 4 9 count:225 64 8 8 guid:225 96 8 10 reason:257 128 16 12 item_ptr:227 160 16 13 equip_ptr:355";
  *(_QWORD *)(p_M_refcount + 16) = ItemStore::dropItem;
  v7 = (_DWORD *)(p_M_refcount >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -219021312;
  v7[536862725] = -202178560;
  *(_QWORD *)(p_M_refcount + 64) = guid;
  *(_DWORD *)(p_M_refcount + 48) = count;
  ItemStore::findItem((ItemStore *const)(p_M_refcount + 128), (uint64_t)this, *(_QWORD *)(p_M_refcount + 64));
  if ( std::operator==<Item>((const std::shared_ptr<Item> *)(p_M_refcount + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/item_store.cpp",
      "dropItem",
      230);
    v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
           (const char (*)[21])"findItem fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
      v10,
      (const unsigned __int64 *)(p_M_refcount + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
    v4 = 601;
    goto LABEL_116;
  }
  v11 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (unsigned __int64)(v11->_vptr_Item + 11);
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ret = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12)(v11);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/item_store.cpp",
      "dropItem",
      237);
    v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
            (const char (*)[29])"Item cannot be cosumed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &Uid);
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" item_id:");
    v16 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    val = Item::getItemId(v16);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])" guid:");
    v19 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    *(_QWORD *)(p_M_refcount + 96) = Item::getGuid(v19);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
      v18,
      (const unsigned __int64 *)(p_M_refcount + 96));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
    v4 = ret;
    goto LABEL_116;
  }
  v20 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
  item_config_ptr = Item::getItemConfig(v20);
  if ( !item_config_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/item_store.cpp",
      "dropItem",
      245);
    v21 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
            (const char (*)[26])"getItemConfig fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &Uid);
    v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" item_id:");
    v24 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    val = Item::getItemId(v24);
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
    v26 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])" guid:");
    v27 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    *(_QWORD *)(p_M_refcount + 96) = Item::getGuid(v27);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
      v26,
      (const unsigned __int64 *)(p_M_refcount + 96));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
    v4 = -1;
    goto LABEL_116;
  }
  if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->dropable >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)item_config_ptr + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->dropable >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&item_config_ptr->dropable);
  }
  if ( !item_config_ptr->dropable )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/item_store.cpp",
      "dropItem",
      252);
    v28 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
            (const char (*)[27])"item is not dropable, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &Uid);
    v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v29, (const char (*)[10])" item_id:");
    v31 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    val = Item::getItemId(v31);
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
    v33 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])" guid:");
    v34 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    *(_QWORD *)(p_M_refcount + 96) = Item::getGuid(v34);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
      v33,
      (const unsigned __int64 *)(p_M_refcount + 96));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
    v4 = 603;
    goto LABEL_116;
  }
  SubItemReason::SubItemReason((SubItemReason *const)(p_M_refcount + 96), ACTION_REASON_DROP_ITEM);
  v35 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v36 = (unsigned __int64)(v35->_vptr_Item + 9);
  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v37 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v36)(v35);
  if ( v37 == 4 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v169);
    v111 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v169);
    isWeaponSystemClosed = FeatureSwitchMgr::isWeaponSystemClosed(&v111->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)v169);
    if ( isWeaponSystemClosed )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/item_store.cpp",
        "dropItem",
        346);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
        (const char (*)[37])"[FEATURE_SWITCH] WeaponSystem closed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
      v4 = 142;
      goto LABEL_116;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v169);
    p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v169)->feature_switch_mgr;
    v114 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    ItemId = Item::getItemId(v114);
    LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isWeaponClosed(p_feature_switch_mgr, ItemId);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)v169);
    if ( (_BYTE)p_feature_switch_mgr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/item_store.cpp",
        "dropItem",
        351);
      v116 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
               (const char (*)[40])"[FEATURE_SWITCH] WeaponSystem item_id: ");
      v117 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      val = Item::getItemId(v117);
      v118 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v116, &val);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v118, (const char (*)[8])" closed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
      v4 = 142;
      goto LABEL_116;
    }
    std::dynamic_pointer_cast<Equip,Item>((const std::shared_ptr<Item> *)(p_M_refcount + 160));
    if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(p_M_refcount + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "dropItem",
        358);
      v119 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
               (const char (*)[34])"dynamic_pointer_cast failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v120 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v119, &Uid);
      v121 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v120, (const char (*)[10])" item_id:");
      v122 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      val = Item::getItemId(v122);
      v123 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v121, &val);
      v124 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v123, (const char (*)[7])" guid:");
      v125 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      v167 = Item::getGuid(v125);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v124, &v167);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
      v4 = -1;
      v126 = 0;
    }
    else
    {
      v127 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
      if ( Equip::getIsLocked(v127) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/item_store.cpp",
          "dropItem",
          366);
        v128 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                 (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
                 (const char (*)[23])"Weapon is locked, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        v129 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v128, &Uid);
        v130 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v129, (const char (*)[10])" item_id:");
        v131 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
        val = Item::getItemId(v131);
        v132 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v130, &val);
        v133 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v132, (const char (*)[7])" guid:");
        v134 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
        v167 = Item::getGuid(v134);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v133, &v167);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
        v4 = 691;
        v126 = 0;
      }
      else
      {
        std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
        Equip::getOwner(v169);
        v135 = std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)v169, 0LL);
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)v169);
        if ( v135 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/item_store.cpp",
            "dropItem",
            373);
          v136 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                   (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
                   (const char (*)[23])"weapon is in use, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          v137 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v136, &Uid);
          v138 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v137, (const char (*)[10])" item_id:");
          v139 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
          val = Item::getItemId(v139);
          v140 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v138, &val);
          v141 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v140, (const char (*)[7])" guid:");
          v142 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
          v167 = Item::getGuid(v142);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v141, &v167);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
          v4 = 653;
          v126 = 0;
        }
        else
        {
          std::shared_ptr<Item>::operator=(drop_item_ptr, (const std::shared_ptr<Item> *)(p_M_refcount + 128));
          v143 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
          v144 = Item::getGuid(v143);
          ItemStore::delItem(this, v144, 1);
          v145 = *(_DWORD *)(p_M_refcount + 96);
          std::shared_ptr<Item>::shared_ptr(
            (std::shared_ptr<Item> *const)v169,
            (const std::shared_ptr<Item> *)(p_M_refcount + 128));
          ItemStore::logAddEquip(this, (ItemPtr *)v169, 0, v145, ITEM_LIMIT_NONE);
          std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)v169);
          v126 = 1;
        }
      }
    }
    std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(p_M_refcount + 160));
    if ( v126 == 1 )
      goto LABEL_115;
    goto LABEL_116;
  }
  if ( v37 > 4 )
  {
LABEL_108:
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/item_store.cpp",
      "dropItem",
      385);
    v146 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
             (const char (*)[30])"unsupport item for drop, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v160 = Player::getUid(this->player_);
    v147 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v146, &v160);
    v148 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v147, (const char (*)[10])" item_id:");
    v149 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    Uid = Item::getItemId(v149);
    v150 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v148, &Uid);
    v151 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v150, (const char (*)[12])" item_type:");
    v152 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    if ( *(_BYTE *)(((unsigned __int64)v152 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v153 = (unsigned __int64)(v152->_vptr_Item + 9);
    if ( *(_BYTE *)((v153 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v153)(v152);
    v154 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(v151, (const data::ItemType *)&val);
    v155 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v154, (const char (*)[7])" guid:");
    v156 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    v167 = Item::getGuid(v156);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v155, &v167);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
    v4 = -1;
    goto LABEL_116;
  }
  if ( v37 == 2 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v169);
    v38 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v169);
    isItemSystemClosed = FeatureSwitchMgr::isItemSystemClosed(&v38->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)v169);
    if ( isItemSystemClosed )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/item_store.cpp",
        "dropItem",
        265);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
        (const char (*)[35])"[FEATURE_SWITCH] ItemSystem closed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
      v4 = 142;
      goto LABEL_116;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v169);
    v40 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v169)->feature_switch_mgr;
    v41 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    v42 = Item::getItemId(v41);
    LOBYTE(v40) = FeatureSwitchMgr::isItemClosed(v40, v42);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)v169);
    if ( (_BYTE)v40 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/item_store.cpp",
        "dropItem",
        270);
      v43 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
              (const char (*)[38])"[FEATURE_SWITCH] ItemSystem item_id: ");
      v44 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      val = Item::getItemId(v44);
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v45, (const char (*)[8])" closed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
      v4 = 142;
      goto LABEL_116;
    }
    std::dynamic_pointer_cast<Material,Item>((const std::shared_ptr<Item> *)(p_M_refcount + 160));
    if ( std::operator==<Material>((const std::shared_ptr<Material> *)(p_M_refcount + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "dropItem",
        277);
      v46 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
              (const char (*)[34])"dynamic_pointer_cast failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v160 = Player::getUid(this->player_);
      v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &v160);
      v48 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v47, (const char (*)[10])" item_id:");
      v49 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      Uid = Item::getItemId(v49);
      v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &Uid);
      v51 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v50, (const char (*)[7])" guid:");
      v52 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      v167 = Item::getGuid(v52);
      v53 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v51, &v167);
      v54 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v53, (const char (*)[13])" item_count:");
      v55 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v56 = (unsigned __int64)(v55->_vptr_Item + 8);
      if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v60 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
      item_id = Item::getItemId(v60);
      v61 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
      if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v62 = (unsigned __int64)(v61->_vptr_Item + 8);
      if ( *(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      old_count = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v62)(v61);
      v63 = (Player *)std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Material::split((Material *const)v169, v63, (uint32_t)this->player_);
      std::shared_ptr<Item>::operator=(drop_item_ptr, (std::shared_ptr<Item> *)v169);
      std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)v169);
      if ( !std::operator==<Item>(drop_item_ptr, 0LL) )
      {
        v72 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
        if ( *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v73 = (unsigned __int64)(v72->_vptr_Item + 8);
        if ( *(_BYTE *)((v73 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        cur_count = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v73)(v72);
        if ( !cur_count )
        {
          v74 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
          v75 = Item::getGuid(v74);
          ItemStore::delItem(this, v75, 1);
        }
        ItemStore::logAddMaterial(
          this,
          item_id,
          old_count,
          cur_count,
          *(proto::ActionReasonType *)(p_M_refcount + 96),
          ITEM_LIMIT_NONE);
        v59 = 1;
LABEL_68:
        std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(p_M_refcount + 160));
        if ( v59 != 1 )
          goto LABEL_116;
        goto LABEL_115;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "dropItem",
        287);
      v64 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
              (const char (*)[24])"item split failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v160 = Player::getUid(this->player_);
      v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &v160);
      v66 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v65, (const char (*)[10])" item_id:");
      v67 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      Uid = Item::getItemId(v67);
      v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &Uid);
      v69 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v68, (const char (*)[7])" guid:");
      v70 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      v167 = Item::getGuid(v70);
      v71 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v69, &v167);
      v54 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v71, (const char (*)[13])" item_count:");
      v55 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v56 = (unsigned __int64)(v55->_vptr_Item + 8);
      if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v56)(v55);
    v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &val);
    v58 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v57, (const char (*)[14])" split_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v58,
      (const unsigned int *)(p_M_refcount + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
    v4 = -1;
    v59 = 0;
    goto LABEL_68;
  }
  if ( v37 != 3 )
    goto LABEL_108;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v169);
  v76 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v169);
  isReliquarySystemClosed = FeatureSwitchMgr::isReliquarySystemClosed(&v76->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)v169);
  if ( isReliquarySystemClosed )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/item_store.cpp",
      "dropItem",
      305);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
      (const char (*)[40])"[FEATURE_SWITCH] ReliquarySystem closed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
    v4 = 142;
    goto LABEL_116;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v169);
  v78 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v169)->feature_switch_mgr;
  v79 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
  v80 = Item::getItemId(v79);
  LOBYTE(v78) = FeatureSwitchMgr::isReliquaryClosed(v78, v80);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)v169);
  if ( (_BYTE)v78 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/item_store.cpp",
      "dropItem",
      310);
    v81 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
            (const char (*)[43])"[FEATURE_SWITCH] ReliquarySystem item_id: ");
    v82 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    val = Item::getItemId(v82);
    v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, &val);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v83, (const char (*)[8])" closed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
    v4 = 142;
    goto LABEL_116;
  }
  std::dynamic_pointer_cast<Equip,Item>((const std::shared_ptr<Item> *)(p_M_refcount + 160));
  if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(p_M_refcount + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/item_store.cpp",
      "dropItem",
      317);
    v84 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
            (const char (*)[34])"dynamic_pointer_cast failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, &Uid);
    v86 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v85, (const char (*)[10])" item_id:");
    v87 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    val = Item::getItemId(v87);
    v88 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, &val);
    v89 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v88, (const char (*)[7])" guid:");
    v90 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
    v167 = Item::getGuid(v90);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v89, &v167);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
    v4 = -1;
    v91 = 0;
  }
  else
  {
    v92 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
    if ( Equip::getIsLocked(v92) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "dropItem",
        325);
      v93 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
              (const char (*)[26])"Reliquary is locked, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v94 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v93, &Uid);
      v95 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v94, (const char (*)[10])" item_id:");
      v96 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      val = Item::getItemId(v96);
      v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v95, &val);
      v98 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v97, (const char (*)[7])" guid:");
      v99 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
      v167 = Item::getGuid(v99);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v98, &v167);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
      v4 = 691;
      v91 = 0;
    }
    else
    {
      std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
      Equip::getOwner(v169);
      v100 = std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)v169, 0LL);
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)v169);
      if ( v100 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v169[0]._M_weak_this._M_refcount,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/item_store.cpp",
          "dropItem",
          332);
        v101 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                 (common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount,
                 (const char (*)[23])"weapon is in use, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        v102 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v101, &Uid);
        v103 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v102, (const char (*)[10])" item_id:");
        v104 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
        val = Item::getItemId(v104);
        v105 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v103, &val);
        v106 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v105, (const char (*)[7])" guid:");
        v107 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
        v167 = Item::getGuid(v107);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v106, &v167);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v169[0]._M_weak_this._M_refcount);
        v4 = 653;
        v91 = 0;
      }
      else
      {
        std::shared_ptr<Item>::operator=(drop_item_ptr, (const std::shared_ptr<Item> *)(p_M_refcount + 128));
        v108 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
        v109 = Item::getGuid(v108);
        ItemStore::delItem(this, v109, 1);
        v110 = *(_DWORD *)(p_M_refcount + 96);
        std::shared_ptr<Item>::shared_ptr(
          (std::shared_ptr<Item> *const)v169,
          (const std::shared_ptr<Item> *)(p_M_refcount + 128));
        ItemStore::logAddEquip(this, (ItemPtr *)v169, 0, v110, ITEM_LIMIT_NONE);
        std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)v169);
        v91 = 1;
      }
    }
  }
  std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(p_M_refcount + 160));
  if ( v91 == 1 )
LABEL_115:
    v4 = 0;
LABEL_116:
  std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(p_M_refcount + 128));
  result = v4;
  if ( &v169[0].player_wtr_._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 398: range 000000001755E59E-000000001755EB25
int32_t __cdecl ItemStore::notifyAllItem(ItemStore *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::PlayerStoreNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // r14
  __int64 (__fastcall **v5)(ItemStore *const); // rax
  proto::StoreType v6; // eax
  std::__shared_ptr_access<proto::PlayerStoreNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  __int64 (__fastcall **v8)(ItemStore *const); // rax
  google::protobuf::uint32 v9; // eax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<proto::PlayerStoreNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rdx
  common::milog::MiLogStream *v16; // r14
  Player *player; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  std::map<long unsigned int,std::shared_ptr<Item>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::map<long unsigned int,std::shared_ptr<Item>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::map<long unsigned int,std::shared_ptr<Item>> *__for_range; // [rsp+28h] [rbp-C8h]
  const std::pair<long unsigned int const,std::shared_ptr<Item> > *v23; // [rsp+30h] [rbp-C0h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::shared_ptr<Item> > >::type *guid; // [rsp+38h] [rbp-B8h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<Item> > >::type *item_ptr; // [rsp+40h] [rbp-B0h]
  proto::Item *proto_item; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<proto::PlayerStoreNotify> __r; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-90h] BYREF
  char v29[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:399";
  *(_QWORD *)(v1 + 16) = ItemStore::notifyAllItem;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::PlayerStoreNotify>();
  v4 = std::__shared_ptr_access<proto::PlayerStoreNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerStoreNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (__int64 (__fastcall **)(ItemStore *const))(this->_vptr_ItemStore + 5);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned int)(*v5)(this);
  proto::PlayerStoreNotify::set_store_type(v4, v6);
  v7 = std::__shared_ptr_access<proto::PlayerStoreNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerStoreNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (__int64 (__fastcall **)(ItemStore *const))(this->_vptr_ItemStore + 6);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = (*v8)(this);
  proto::PlayerStoreNotify::set_weight_limit(v7, v9);
  __for_range = &this->item_map_;
  __for_begin._M_node = std::map<unsigned long,std::shared_ptr<Item>>::begin(&this->item_map_)._M_node;
  __for_end._M_node = std::map<unsigned long,std::shared_ptr<Item>>::end(&this->item_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v23 = std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Item>>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned long const,std::shared_ptr<Item>>(v23);
    item_ptr = (std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<Item> > >::type *)std::get<1ul,unsigned long const,std::shared_ptr<Item>>(v23);
    if ( std::operator==<Item>(0LL, item_ptr) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "notifyAllItem",
        407);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v28,
              (const char (*)[26])"item_ptr is nullptr, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, guid);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      v13 = std::__shared_ptr_access<proto::PlayerStoreNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerStoreNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      proto_item = proto::PlayerStoreNotify::add_item_list(v13);
      v14 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = (unsigned __int64)(v14->_vptr_Item + 4);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::Item *))v15)(
             v14,
             proto_item) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/item_store.cpp",
          "notifyAllItem",
          414);
        v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v28,
                (const char (*)[32])"item_ptr->toClient failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned long const,std::shared_ptr<Item>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerStoreNotify>(&__r);
  LODWORD(player) = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::PlayerStoreNotify>::~shared_ptr((std::shared_ptr<proto::PlayerStoreNotify> *const)(v1 + 32));
  result = (int)player;
  if ( v29 == (char *)v1 )
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

// Line 424: range 000000001755EB26-000000001755EF1F
int32_t __cdecl ItemStore::notifyMaxWeight(ItemStore *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // r14
  __int64 (__fastcall **v5)(ItemStore *const); // rax
  proto::StoreType v6; // eax
  std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  __int64 (__fastcall **v8)(ItemStore *const); // rax
  google::protobuf::uint32 v9; // eax
  std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t MaterialItemLimit; // eax
  std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t WeaponItemLimit; // eax
  std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t ReliquaryItemLimit; // eax
  std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t FurnitureItemLimit; // eax
  Player *player; // r14
  int32_t result; // eax
  std::shared_ptr<Config> v24; // [rsp+10h] [rbp-B0h] BYREF
  std::shared_ptr<Config> v25; // [rsp+20h] [rbp-A0h] BYREF
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-90h] BYREF
  std::shared_ptr<const google::protobuf::Message> v27; // [rsp+40h] [rbp-80h] BYREF
  char v28[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:425";
  *(_QWORD *)(v1 + 16) = ItemStore::notifyMaxWeight;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::StoreWeightLimitNotify>();
  v4 = std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (__int64 (__fastcall **)(ItemStore *const))(this->_vptr_ItemStore + 5);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned int)(*v5)(this);
  proto::StoreWeightLimitNotify::set_store_type(v4, v6);
  v7 = std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (__int64 (__fastcall **)(ItemStore *const))(this->_vptr_ItemStore + 6);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = (*v8)(this);
  proto::StoreWeightLimitNotify::set_weight_limit(v7, v9);
  v10 = std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  MaterialItemLimit = ConstValueExcelConfigMgr::getMaterialItemLimit(&v11->design_config.txt_config_mgr.const_value_config_mgr);
  proto::StoreWeightLimitNotify::set_material_count_limit(v10, MaterialItemLimit);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  v13 = std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  WeaponItemLimit = ConstValueExcelConfigMgr::getWeaponItemLimit(&v14->design_config.txt_config_mgr.const_value_config_mgr);
  proto::StoreWeightLimitNotify::set_weapon_count_limit(v13, WeaponItemLimit);
  std::shared_ptr<Config>::~shared_ptr(&v25);
  v16 = std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  ReliquaryItemLimit = ConstValueExcelConfigMgr::getReliquaryItemLimit(&v17->design_config.txt_config_mgr.const_value_config_mgr);
  proto::StoreWeightLimitNotify::set_reliquary_count_limit(v16, ReliquaryItemLimit);
  std::shared_ptr<Config>::~shared_ptr(&v26);
  v19 = std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::StoreWeightLimitNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  FurnitureItemLimit = ConstValueExcelConfigMgr::getFurnitureItemLimit(&v20->design_config.txt_config_mgr.const_value_config_mgr);
  proto::StoreWeightLimitNotify::set_furniture_count_limit(v19, FurnitureItemLimit);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::StoreWeightLimitNotify>((const std::shared_ptr<proto::StoreWeightLimitNotify> *)&v27);
  LODWORD(player) = Player::sendMessage(player, &v27, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v27);
  std::shared_ptr<proto::StoreWeightLimitNotify>::~shared_ptr((std::shared_ptr<proto::StoreWeightLimitNotify> *const)(v1 + 32));
  result = (int)player;
  if ( v28 == (char *)v1 )
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

// Line 437: range 000000001755EF20-000000001755EF4E
int32_t __cdecl ItemStore::notifyAllData(ItemStore *const this)
{
  int32_t ret; // [rsp+1Ch] [rbp-4h]

  ret = ItemStore::notifyMaxWeight(this);
  return ItemStore::notifyAllItem(this) | ret;
};

// Line 445: range 000000001755EF50-000000001755F044
int32_t __cdecl ItemStore::clear(ItemStore *const this)
{
  __int64 v1; // rsi
  uint32_t *p_total_material_num; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::map<unsigned long,std::shared_ptr<Item>>::clear(&this->item_map_);
  std::map<unsigned int,std::set<unsigned long>>::clear(&this->item_id_map_);
  p_total_material_num = &this->total_material_num_;
  if ( *(_BYTE *)(((unsigned __int64)p_total_material_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_total_material_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_material_num_, v1, p_total_material_num);
  }
  this->total_material_num_ = 0;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->total_weapon_num_, v3, v4);
  this->total_weapon_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_reliquary_num_, v3, &this->total_reliquary_num_);
  }
  this->total_reliquary_num_ = 0;
  return 0;
};

// Line 456: range 000000001755F046-000000001755F199
std::set<long unsigned int> *__fastcall ItemStore::getItemGuidSetByItemId(ItemStore *const this, uint32_t item_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::set<long unsigned int> *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 item_id:455 64 8 6 it:457";
  *(_QWORD *)(v2 + 16) = ItemStore::getItemGuidSetByItemId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = item_id;
  *(std::map<unsigned int,std::set<long unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned long>>::find(
                                                                                 &this->item_id_map_,
                                                                                 (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::set<unsigned long>>::end(&this->item_id_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Self *)(v2 + 64),
         &__y) )
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > > *const)(v2 + 64))->second;
  }
  else
  {
    result = 0LL;
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

// Line 467: range 000000001755F19A-000000001755FBC8
std::vector<AddItemResult> *__cdecl ItemStore::forceAddEquipByAddAvatar(
        std::vector<AddItemResult> *retstr,
        ItemStore *const this,
        uint32_t equip_id,
        const ActionReason *reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  bool v14; // r14
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned __int64 v24; // rdx
  AddItemResult *v25; // rdx
  data::ItemLimitType limit_type; // r15d
  proto::ActionReasonType reason_type; // r14d
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  unsigned int val; // [rsp+3Ch] [rbp-1F4h] BYREF
  std::vector<std::shared_ptr<Item>>::iterator __for_begin; // [rsp+40h] [rbp-1F0h] BYREF
  std::vector<std::shared_ptr<Item>>::iterator __for_end; // [rsp+48h] [rbp-1E8h] BYREF
  unsigned __int64 Guid; // [rsp+50h] [rbp-1E0h] BYREF
  std::vector<std::shared_ptr<Item>> *__for_range; // [rsp+58h] [rbp-1D8h]
  const std::shared_ptr<Item> *item_ptr; // [rsp+60h] [rbp-1D0h]
  const data::ItemConfig *item_config_ptr; // [rsp+68h] [rbp-1C8h]
  std::shared_ptr<Config> v44; // [rsp+70h] [rbp-1C0h] BYREF
  std::shared_ptr<Item> p_item_ptr; // [rsp+80h] [rbp-1B0h] BYREF
  std::shared_ptr<Item> v46; // [rsp+90h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v47; // [rsp+A0h] [rbp-190h] BYREF
  common::milog::MiLogStream v48; // [rsp+C0h] [rbp-170h] BYREF
  common::milog::MiLogStream v49; // [rsp+E0h] [rbp-150h] BYREF
  common::milog::MiLogStream v50; // [rsp+100h] [rbp-130h] BYREF
  char v51[272]; // [rsp+120h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 11 item_id:479 64 16 14 item_param:468 96 24 12 item_vec:469 160 24 14 add_result:499";
  *(_QWORD *)(v4 + 16) = ItemStore::forceAddEquipByAddAvatar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_DWORD *)(v4 + 68) = 1;
  *(_DWORD *)(v4 + 64) = equip_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  PlayerItemComp::createItem((std::vector<std::shared_ptr<Item>> *)(v4 + 96), ItemComp, (const ItemParam *)(v4 + 64));
  std::vector<AddItemResult>::vector(retstr);
  __for_range = (std::vector<std::shared_ptr<Item>> *)(v4 + 96);
  __for_begin._M_current = std::vector<std::shared_ptr<Item>>::begin((std::vector<std::shared_ptr<Item>> *const)(v4 + 96))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Item>>::end((std::vector<std::shared_ptr<Item>> *const)(v4 + 96))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Item> *,std::vector<std::shared_ptr<Item>>>(&__for_begin, &__for_end) )
  {
    item_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Item> *,std::vector<std::shared_ptr<Item>>>::operator*(&__for_begin);
    if ( std::operator==<Item>(item_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/item/item_store.cpp",
        "forceAddEquipByAddAvatar",
        475);
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v47,
             (const char (*)[26])"item_ptr is nullptr, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    else
    {
      v9 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
      *(_DWORD *)(v4 + 48) = Item::getItemId(v9);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v44);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44);
      item_config_ptr = ItemExcelConfigMgr::findItemConfig(
                          &v10->design_config.txt_config_mgr.item_config_mgr,
                          *(_DWORD *)(v4 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v44);
      if ( item_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&item_config_ptr->item_type);
        }
        if ( (unsigned int)(item_config_ptr->item_type - 3) > 1 )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/item/item_store.cpp",
            "forceAddEquipByAddAvatar",
            515);
          v28 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v50,
                  (const char (*)[19])"invalid item_type:");
          v29 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(
                  v28,
                  &item_config_ptr->item_type);
          v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])" guid:");
          v31 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          Guid = Item::getGuid(v31);
          v32 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v30, &Guid);
          v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
          common::milog::MiLogStream::~MiLogStream(&v50);
        }
        else
        {
          std::shared_ptr<Item>::shared_ptr(&p_item_ptr, item_ptr);
          v14 = ItemStore::emplaceItem(this, &p_item_ptr, 1) != 0;
          std::shared_ptr<Item>::~shared_ptr(&p_item_ptr);
          if ( v14 )
          {
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/item/item_store.cpp",
              "forceAddEquipByAddAvatar",
              494);
            v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v49,
                    (const char (*)[26])"emplace item failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
            v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" item_id:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v4 + 48));
            v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" guid:");
            v20 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
            Guid = Item::getGuid(v20);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v19, &Guid);
            common::milog::MiLogStream::~MiLogStream(&v49);
          }
          else
          {
            *(_QWORD *)(v4 + 160) = 0LL;
            *(_QWORD *)(v4 + 168) = 0LL;
            *(_QWORD *)(v4 + 176) = 0LL;
            *(_DWORD *)(v4 + 172) = 1;
            v21 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
            *(_QWORD *)(v4 + 160) = Item::getGuid(v21);
            v22 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
            *(_DWORD *)(v4 + 168) = Item::getItemId(v22);
            v23 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v24 = (unsigned __int64)(v23->_vptr_Item + 8);
            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v4 + 176) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v24)(v23);
            v25 = std::move<AddItemResult &>((AddItemResult *)(v4 + 160));
            std::vector<AddItemResult>::emplace_back<AddItemResult>(retstr, v25, v25);
            if ( *(_BYTE *)(((unsigned __int64)&reason->limit_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)reason + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reason->limit_type >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&reason->limit_type);
            }
            limit_type = reason->limit_type;
            if ( *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(reason);
            }
            reason_type = reason->reason_type;
            std::shared_ptr<Item>::shared_ptr(&v46, item_ptr);
            ItemStore::logAddEquip(this, &v46, 1u, reason_type, limit_type);
            std::shared_ptr<Item>::~shared_ptr(&v46);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/item/item_store.cpp",
          "forceAddEquipByAddAvatar",
          483);
        v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v48,
                (const char (*)[28])"findItemConfig failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v48);
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Item> *,std::vector<std::shared_ptr<Item>>>::operator++(&__for_begin);
  }
  std::vector<std::shared_ptr<Item>>::~vector((std::vector<std::shared_ptr<Item>> *const)(v4 + 96));
  if ( v51 == (char *)v4 )
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
  return retstr;
};

// Line 525: range 000000001755FBCA-000000001755FE66
int32_t __cdecl ItemStore::checkAddItem(ItemStore *const this, const ItemParam *item_param, const ActionReason *reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::initializer_list<ItemParam>::size_type v6; // rdx
  __int64 (__fastcall **v7)(ItemStore *const, __int64, const ActionReason *); // rax
  int32_t v8; // r14d
  int32_t result; // eax
  std::allocator<ItemParam> __a; // [rsp+2Fh] [rbp-A1h] BYREF
  std::initializer_list<ItemParam> __l; // [rsp+30h] [rbp-A0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 18 item_param_vec:526";
  *(_QWORD *)(v3 + 16) = ItemStore::checkAddItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( ((unsigned __int8)item_param & 7) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&item_param->promote_level + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)item_param + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&item_param->promote_level + 3) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load_n(item_param, 16LL);
  }
  v6 = *(_QWORD *)&item_param->level;
  __l._M_array = *(std::initializer_list<ItemParam>::iterator *)&item_param->item_id;
  __l._M_len = v6;
  std::allocator<ItemParam>::allocator(&__a);
  std::vector<ItemParam>::vector(
    (std::vector<ItemParam> *const)(v3 + 32),
    (std::initializer_list<ItemParam>)__PAIR128__(1LL, &__l),
    &__a);
  std::allocator<ItemParam>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (__int64 (__fastcall **)(ItemStore *const, __int64, const ActionReason *))(this->_vptr_ItemStore + 8);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (*v7)(this, v3 + 32, reason);
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 32));
  result = v8;
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

// Line 531: range 000000001755FE68-0000000017561FAF
int32_t __cdecl ItemStore::checkAddItemBatch(
        ItemStore *const this,
        const std::vector<ItemParam> *item_param_vec,
        const ActionReason *reason)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v11; // r14
  data::ItemType item_type; // eax
  const data::MaterialExcelConfig *v13; // rax
  uint32_t v14; // ecx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  uint32_t total_weapon_num; // ecx
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  uint32_t total_reliquary_num; // ecx
  common::milog::MiLogStream *v38; // r14
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  const data::HomeWorldFurnitureExcelConfig *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  int32_t v48; // r14d
  common::milog::MiLogStream *v49; // r14
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  uint32_t v52; // ecx
  common::milog::MiLogStream *v53; // r14
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // r14
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  unsigned int v72; // edx
  char v73; // al
  common::milog::MiLogStream *v74; // r14
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  unsigned int v81; // ecx
  char v82; // al
  common::milog::MiLogStream *v83; // r14
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  unsigned int v90; // edx
  char v91; // al
  common::milog::MiLogStream *v92; // r14
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  unsigned int v99; // ecx
  char v100; // al
  common::milog::MiLogStream *v101; // r14
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  PlayerItemComp *ItemComp; // rdi
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-27Ch] BYREF
  std::map<unsigned int,ItemParam>::iterator __for_begin; // [rsp+28h] [rbp-278h] BYREF
  std::map<unsigned int,ItemParam>::iterator __for_end; // [rsp+30h] [rbp-270h] BYREF
  std::map<unsigned int,ItemParam> *__for_range; // [rsp+38h] [rbp-268h]
  const std::pair<unsigned int const,ItemParam> *v116; // [rsp+40h] [rbp-260h]
  std::tuple_element<0,const std::pair<unsigned int const,ItemParam> >::type *item_id; // [rsp+48h] [rbp-258h]
  std::tuple_element<1,const std::pair<unsigned int const,ItemParam> >::type *item_param; // [rsp+50h] [rbp-250h]
  const data::ItemConfig *item_config_ptr; // [rsp+58h] [rbp-248h]
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+60h] [rbp-240h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+68h] [rbp-238h]
  std::shared_ptr<Config> v122; // [rsp+70h] [rbp-230h] BYREF
  std::shared_ptr<Config> v123; // [rsp+80h] [rbp-220h] BYREF
  std::shared_ptr<Config> v124; // [rsp+90h] [rbp-210h] BYREF
  std::shared_ptr<Config> v125; // [rsp+A0h] [rbp-200h] BYREF
  common::milog::MiLogStream v126; // [rsp+B0h] [rbp-1F0h] BYREF
  char v127[464]; // [rsp+D0h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v127;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 4 23 material_item_limit:534 48 4 21 weapon_item_limit:535 64 4 24 reliquary_item_limit:53"
                        "6 80 4 24 furniture_item_limit:537 96 4 28 total_add_material_count:538 112 4 26 total_add_weapo"
                        "n_count:539 128 4 29 total_add_reliquary_count:540 144 4 29 total_add_furniture_count:541 160 4 "
                        "18 cur_item_count:611 176 48 18 item_param_map:532 256 48 21 exceeded_item_set:542 336 48 26 exc"
                        "eeded_item_type_set:543";
  *(_QWORD *)(v3 + 16) = ItemStore::checkAddItemBatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = 61956;
  v5[536862727] = -218959118;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  PlayerItemComp::mergeItemParam((std::map<unsigned int,ItemParam> *)(v3 + 176), item_param_vec);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v122);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v122);
  *(_DWORD *)(v3 + 32) = ConstValueExcelConfigMgr::getMaterialItemLimit(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v122);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v123);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v123);
  *(_DWORD *)(v3 + 48) = ConstValueExcelConfigMgr::getWeaponItemLimit(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v123);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v124);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v124);
  *(_DWORD *)(v3 + 64) = ConstValueExcelConfigMgr::getReliquaryItemLimit(&v8->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v124);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v125);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v125);
  *(_DWORD *)(v3 + 80) = ConstValueExcelConfigMgr::getFurnitureItemLimit(&v9->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v125);
  *(_DWORD *)(v3 + 96) = 0;
  *(_DWORD *)(v3 + 112) = 0;
  *(_DWORD *)(v3 + 128) = 0;
  *(_DWORD *)(v3 + 144) = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 256));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 336));
  __for_range = (std::map<unsigned int,ItemParam> *)(v3 + 176);
  __for_begin._M_node = std::map<unsigned int,ItemParam>::begin((std::map<unsigned int,ItemParam> *const)(v3 + 176))._M_node;
  __for_end._M_node = std::map<unsigned int,ItemParam>::end((std::map<unsigned int,ItemParam> *const)(v3 + 176))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v116 = std::_Rb_tree_iterator<std::pair<unsigned int const,ItemParam>>::operator*(&__for_begin);
    item_id = std::get<0ul,unsigned int const,ItemParam>(v116);
    item_param = (std::tuple_element<1,const std::pair<unsigned int const,ItemParam> >::type *)std::get<1ul,unsigned int const,ItemParam>(v116);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v125);
    p_item_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v125)->design_config.txt_config_mgr.item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_param);
    }
    item_config_ptr = ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, item_param->item_id);
    std::shared_ptr<Config>::~shared_ptr(&v125);
    if ( !item_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v126,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "checkAddItemBatch",
        549);
      v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v126,
              (const char (*)[28])"findItemConfig failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_77:
      val = Player::getUid(this->player_);
      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v47 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v46, (const char (*)[10])" item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &item_param->item_id);
      common::milog::MiLogStream::~MiLogStream(&v126);
      v48 = -1;
      goto LABEL_156;
    }
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    item_type = item_config_ptr->item_type;
    if ( item_type == ITEM_FURNITURE )
    {
      if ( item_config_ptr )
        v45 = (const data::HomeWorldFurnitureExcelConfig *)__dynamic_cast(
                                                             item_config_ptr,
                                                             (const struct __class_type_info *)&`typeinfo for'data::ItemConfig,
                                                             (const struct __class_type_info *)&`typeinfo for'data::HomeWorldFurnitureExcelConfig,
                                                             0LL);
      else
        v45 = 0LL;
      furniture_config_ptr = v45;
      if ( !v45 )
      {
        common::milog::MiLogStream::create(
          &v126,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/item_store.cpp",
          "checkAddItemBatch",
          603);
        v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v126,
                (const char (*)[34])"dynamic_pointer_cast failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_77;
      }
      if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&furniture_config_ptr->special_furniture_type);
      }
      if ( furniture_config_ptr->special_furniture_type == VirtualFurnitrue )
      {
        common::milog::MiLogStream::create(
          &v126,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/item/item_store.cpp",
          "checkAddItemBatch",
          608);
        v49 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v126,
                (const char (*)[42])"virtual furniture cannot add to bag, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &val);
        v51 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v50, (const char (*)[13])" item_param:");
        operator<<(v51, item_param);
        common::milog::MiLogStream::~MiLogStream(&v126);
        v48 = -1;
        goto LABEL_156;
      }
      if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_param);
      }
      *(_DWORD *)(v3 + 160) = ItemStore::getItemCount(this, item_param->item_id);
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
      v52 = item_param->count + *(_DWORD *)(v3 + 160);
      if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->stack_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)furniture_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->stack_limit >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&furniture_config_ptr->stack_limit);
      }
      if ( v52 > furniture_config_ptr->stack_limit )
      {
        common::milog::MiLogStream::create(
          &v126,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/item/item_store.cpp",
          "checkAddItemBatch",
          614);
        v53 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v126,
                (const char (*)[29])"furniture exceed limit, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &val);
        v55 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v54, (const char (*)[10])" item_id:");
        v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &item_param->item_id);
        v57 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v56,
                (const char (*)[22])" cur_furniture_count:");
        v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v57,
                (const unsigned int *)(v3 + 160));
        v59 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v58, (const char (*)[12])" add_count:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &item_param->count);
        common::milog::MiLogStream::~MiLogStream(&v126);
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 256), &item_param->item_id);
      }
      if ( !*(_DWORD *)(v3 + 160) )
      {
        *(_DWORD *)(v3 + 144) = SAFE_ADD<unsigned int,int>(*(_DWORD *)(v3 + 144), 1);
        if ( *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->total_furniture_num_);
        }
        if ( this->total_furniture_num_ + 1 > *(_DWORD *)(v3 + 80) )
        {
          common::milog::MiLogStream::create(
            &v126,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/item/item_store.cpp",
            "checkAddItemBatch",
            622);
          v60 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v126,
                  (const char (*)[40])"furniture item count exceed limit, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &val);
          v62 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v61, (const char (*)[13])" item_param:");
          v63 = operator<<(v62, item_param);
          v64 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v63,
                  (const char (*)[22])" total_furniture_num:");
          v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &this->total_furniture_num_);
          v66 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v65,
                  (const char (*)[23])" furniture_item_limit:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v126);
          if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&item_config_ptr->item_type);
          }
          goto LABEL_70;
        }
      }
    }
    else
    {
      if ( item_type > ITEM_FURNITURE )
        goto LABEL_103;
      if ( item_type == ITEM_WEAPON )
      {
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        *(_DWORD *)(v3 + 112) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v3 + 112), item_param->count);
        if ( *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->total_weapon_num_);
        }
        total_weapon_num = this->total_weapon_num_;
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        if ( total_weapon_num + item_param->count > *(_DWORD *)(v3 + 48) )
        {
          common::milog::MiLogStream::create(
            &v126,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/item/item_store.cpp",
            "checkAddItemBatch",
            586);
          v30 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v126,
                  (const char (*)[37])"weapon item count exceed limit, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
          v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v31, (const char (*)[13])" item_param:");
          v33 = operator<<(v32, item_param);
          v34 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v33,
                  (const char (*)[19])" total_weapon_num:");
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &this->total_weapon_num_);
          v36 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v35,
                  (const char (*)[20])" weapon_item_limit:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v126);
          if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&item_config_ptr->item_type);
          }
          goto LABEL_70;
        }
      }
      else
      {
        if ( item_type > ITEM_WEAPON )
          goto LABEL_103;
        if ( item_type == ITEM_MATERIAL )
        {
          if ( item_config_ptr )
            v13 = (const data::MaterialExcelConfig *)__dynamic_cast(
                                                       item_config_ptr,
                                                       (const struct __class_type_info *)&`typeinfo for'data::ItemConfig,
                                                       (const struct __class_type_info *)&`typeinfo for'data::MaterialExcelConfig,
                                                       0LL);
          else
            v13 = 0LL;
          material_config_ptr = v13;
          if ( !v13 )
          {
            common::milog::MiLogStream::create(
              &v126,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/item/item_store.cpp",
              "checkAddItemBatch",
              561);
            v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v126,
                    (const char (*)[34])"dynamic_pointer_cast failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_77;
          }
          if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(item_param);
          }
          *(_DWORD *)(v3 + 160) = ItemStore::getItemCount(this, item_param->item_id);
          if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&item_param->count);
          }
          v14 = item_param->count + *(_DWORD *)(v3 + 160);
          if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&material_config_ptr->stack_limit);
          }
          if ( v14 > material_config_ptr->stack_limit )
          {
            common::milog::MiLogStream::create(
              &v126,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/item/item_store.cpp",
              "checkAddItemBatch",
              567);
            v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v126,
                    (const char (*)[28])"material exceed limit, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
            v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" item_id:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &item_param->item_id);
            v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v18,
                    (const char (*)[21])" cur_material_count:");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v3 + 160));
            v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v20,
                    (const char (*)[12])" add_count:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &item_param->count);
            common::milog::MiLogStream::~MiLogStream(&v126);
            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 256), &item_param->item_id);
          }
          if ( !*(_DWORD *)(v3 + 160) )
          {
            *(_DWORD *)(v3 + 96) = SAFE_ADD<unsigned int,int>(*(_DWORD *)(v3 + 96), 1);
            if ( *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->total_material_num_);
            }
            if ( this->total_material_num_ + 1 > *(_DWORD *)(v3 + 32) )
            {
              common::milog::MiLogStream::create(
                &v126,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/item/item_store.cpp",
                "checkAddItemBatch",
                575);
              v22 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v126,
                      (const char (*)[39])"material item count exceed limit, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
              v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v23,
                      (const char (*)[13])" item_param:");
              v25 = operator<<(v24, item_param);
              v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v25,
                      (const char (*)[21])" total_material_num:");
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v26,
                      &this->total_material_num_);
              v28 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v27,
                      (const char (*)[22])" material_item_limit:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream(&v126);
              if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(&item_config_ptr->item_type);
              }
              goto LABEL_70;
            }
          }
        }
        else
        {
          if ( item_type != ITEM_RELIQUARY )
          {
LABEL_103:
            common::milog::MiLogStream::create(
              &v126,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/item/item_store.cpp",
              "checkAddItemBatch",
              630);
            v67 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    &v126,
                    (const char (*)[24])"invalid item type, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, &val);
            v69 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v68,
                    (const char (*)[12])" item_type:");
            v70 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(
                    v69,
                    &item_config_ptr->item_type);
            v71 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v70,
                    (const char (*)[13])" item_param:");
            operator<<(v71, item_param);
            common::milog::MiLogStream::~MiLogStream(&v126);
            v48 = -1;
            goto LABEL_156;
          }
          if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&item_param->count);
          }
          *(_DWORD *)(v3 + 128) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v3 + 128), item_param->count);
          if ( *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->total_reliquary_num_);
          }
          total_reliquary_num = this->total_reliquary_num_;
          if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&item_param->count);
          }
          if ( total_reliquary_num + item_param->count > *(_DWORD *)(v3 + 64) )
          {
            common::milog::MiLogStream::create(
              &v126,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/item/item_store.cpp",
              "checkAddItemBatch",
              594);
            v38 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v126,
                    (const char (*)[29])"reliquary exceed limit, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
            v40 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v39,
                    (const char (*)[13])" item_param:");
            v41 = operator<<(v40, item_param);
            v42 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v41,
                    (const char (*)[22])" total_reliquary_num:");
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v42,
                    &this->total_reliquary_num_);
            v44 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v43,
                    (const char (*)[23])" reliquary_item_limit:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v126);
            if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&item_config_ptr->item_type);
            }
LABEL_70:
            val = item_config_ptr->item_type;
            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 336), &val);
          }
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,ItemParam>>::operator++(&__for_begin);
  }
  if ( !*(_DWORD *)(v3 + 96) )
    goto LABEL_112;
  v72 = *(_DWORD *)(v3 + 96);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_material_num_);
  }
  if ( SAFE_ADD<unsigned int,unsigned int>(this->total_material_num_, v72) > *(_DWORD *)(v3 + 32) )
    v73 = 1;
  else
LABEL_112:
    v73 = 0;
  if ( v73 )
  {
    common::milog::MiLogStream::create(
      &v126,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/item_store.cpp",
      "checkAddItemBatch",
      638);
    v74 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v126,
            (const char (*)[40])"total material count exceed limit, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, &val);
    v76 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v75,
            (const char (*)[27])" total_add_material_count:");
    v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, (const unsigned int *)(v3 + 96));
    v78 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v77,
            (const char (*)[21])" total_material_num:");
    v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, &this->total_material_num_);
    v80 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v79,
            (const char (*)[22])" material_item_limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v126);
    val = 2;
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 336), &val);
  }
  if ( !*(_DWORD *)(v3 + 112) )
    goto LABEL_122;
  v81 = *(_DWORD *)(v3 + 112);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_weapon_num_);
  }
  if ( SAFE_ADD<unsigned int,unsigned int>(this->total_weapon_num_, v81) > *(_DWORD *)(v3 + 48) )
    v82 = 1;
  else
LABEL_122:
    v82 = 0;
  if ( v82 )
  {
    common::milog::MiLogStream::create(
      &v126,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/item_store.cpp",
      "checkAddItemBatch",
      643);
    v83 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v126,
            (const char (*)[38])"total weapon count exceed limit, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v84 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, &val);
    v85 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v84,
            (const char (*)[25])" total_add_weapon_count:");
    v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v85, (const unsigned int *)(v3 + 112));
    v87 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v86, (const char (*)[19])" total_weapon_num:");
    v88 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v87, &this->total_weapon_num_);
    v89 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v88,
            (const char (*)[20])" weapon_item_limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v126);
    val = 4;
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 336), &val);
  }
  if ( !*(_DWORD *)(v3 + 128) )
    goto LABEL_132;
  v90 = *(_DWORD *)(v3 + 128);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_reliquary_num_);
  }
  if ( SAFE_ADD<unsigned int,unsigned int>(this->total_reliquary_num_, v90) > *(_DWORD *)(v3 + 64) )
    v91 = 1;
  else
LABEL_132:
    v91 = 0;
  if ( v91 )
  {
    common::milog::MiLogStream::create(
      &v126,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/item_store.cpp",
      "checkAddItemBatch",
      648);
    v92 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v126,
            (const char (*)[41])"total reliquary count exceed limit, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v93 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v92, &val);
    v94 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v93,
            (const char (*)[28])" total_add_reliquary_count:");
    v95 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, (const unsigned int *)(v3 + 128));
    v96 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v95,
            (const char (*)[22])" total_reliquary_num:");
    v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, &this->total_reliquary_num_);
    v98 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v97,
            (const char (*)[23])" reliquary_item_limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v126);
    val = 3;
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 336), &val);
  }
  if ( !*(_DWORD *)(v3 + 144) )
    goto LABEL_142;
  v99 = *(_DWORD *)(v3 + 144);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_furniture_num_);
  }
  if ( SAFE_ADD<unsigned int,unsigned int>(this->total_furniture_num_, v99) > *(_DWORD *)(v3 + 80) )
    v100 = 1;
  else
LABEL_142:
    v100 = 0;
  if ( v100 )
  {
    common::milog::MiLogStream::create(
      &v126,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/item_store.cpp",
      "checkAddItemBatch",
      653);
    v101 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v126,
             (const char (*)[41])"total furniture count exceed limit, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v102 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v101, &val);
    v103 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             v102,
             (const char (*)[28])" total_add_furniture_count:");
    v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v103,
             (const unsigned int *)(v3 + 144));
    v105 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             v104,
             (const char (*)[22])" total_furniture_num:");
    v106 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, &this->total_furniture_num_);
    v107 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             v106,
             (const char (*)[23])" furniture_item_limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v107, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v126);
    val = 6;
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 336), &val);
  }
  if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 256))
    || !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 336)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    PlayerItemComp::tryNotifyCheckAddItemExceedLimitNotify(
      ItemComp,
      reason,
      0,
      (const std::set<unsigned int> *)(v3 + 256),
      (const std::set<unsigned int> *)(v3 + 336));
    v48 = 617;
  }
  else
  {
    v48 = 0;
  }
LABEL_156:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 336));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 256));
  std::map<unsigned int,ItemParam>::~map((std::map<unsigned int,ItemParam> *const)(v3 + 176));
  result = v48;
  if ( v127 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 665: range 0000000017561FB0-000000001756226F
int32_t __cdecl ItemStore::checkAddItem(ItemStore *const this, ItemPtr *p_item_ptr, const ActionReason *reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // r12
  int32_t result; // eax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rdx
  __int64 (__fastcall **v11)(ItemStore *const, __int64, const ActionReason *); // rax
  unsigned int val; // [rsp+2Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 item_param:672";
  *(_QWORD *)(v3 + 16) = ItemStore::checkAddItem;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( std::operator==<Item>(p_item_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/item_store.cpp",
      "checkAddItem",
      668);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v14,
           (const char (*)[26])"checkAddItem failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 36) = 0;
    *(_DWORD *)(v3 + 40) = 0;
    *(_DWORD *)(v3 + 44) = 0;
    v8 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
    *(_DWORD *)(v3 + 32) = Item::getItemId(v8);
    v9 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (unsigned __int64)(v9->_vptr_Item + 8);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 36) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v10)(v9);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (__int64 (__fastcall **)(ItemStore *const, __int64, const ActionReason *))(this->_vptr_ItemStore + 7);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = (*v11)(this, v3 + 32, reason);
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
  return result;
};

// Line 680: range 0000000017562270-000000001756279A
int32_t __cdecl ItemStore::checkAddItemBatch(
        ItemStore *const this,
        const std::vector<std::shared_ptr<Item>> *item_vec,
        const ActionReason *reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint64_t Guid; // rdx
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rdx
  ItemParam *v17; // rax
  __int64 (__fastcall **v18)(ItemStore *const, __int64, const ActionReason *); // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-11Ch] BYREF
  std::vector<std::shared_ptr<Item>>::const_iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<std::shared_ptr<Item>>::const_iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-108h] BYREF
  const std::vector<std::shared_ptr<Item>> *__for_range; // [rsp+40h] [rbp-100h]
  const std::shared_ptr<Item> *item_ptr; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 item_param:697 64 24 18 item_param_vec:681";
  *(_QWORD *)(v3 + 16) = ItemStore::checkAddItemBatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 64));
  __for_range = item_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<Item>>::begin(item_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Item>>::end(item_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Item> const*,std::vector<std::shared_ptr<Item>>>(
            &__for_begin,
            &__for_end) )
  {
    item_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Item> const*,std::vector<std::shared_ptr<Item>>>::operator*(&__for_begin);
    if ( std::operator==<Item>(item_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "checkAddItemBatch",
        687);
      v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v27,
             (const char (*)[26])"item_ptr is nullptr, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v7 = -1;
      goto LABEL_24;
    }
    v8 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
    Guid = Item::getGuid(v8);
    if ( ItemStore::hasItem(this, Guid) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "checkAddItemBatch",
        693);
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v28,
              (const char (*)[30])"item_ptr has been owned, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" guid:");
      v13 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
      v24 = Item::getGuid(v13);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &v24);
      common::milog::MiLogStream::~MiLogStream(&v28);
      v7 = -1;
      goto LABEL_24;
    }
    *(_DWORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 36) = 0;
    *(_DWORD *)(v3 + 40) = 0;
    *(_DWORD *)(v3 + 44) = 0;
    v14 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
    *(_DWORD *)(v3 + 32) = Item::getItemId(v14);
    v15 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = (unsigned __int64)(v15->_vptr_Item + 8);
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 36) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v16)(v15);
    v17 = std::move<ItemParam &>((ItemParam *)(v3 + 32));
    std::vector<ItemParam>::emplace_back<ItemParam>((std::vector<ItemParam> *const)(v3 + 64), v17, v17);
    __gnu_cxx::__normal_iterator<std::shared_ptr<Item> const*,std::vector<std::shared_ptr<Item>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v18 = (__int64 (__fastcall **)(ItemStore *const, __int64, const ActionReason *))(this->_vptr_ItemStore + 8);
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (*v18)(this, v3 + 64, reason);
LABEL_24:
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 64));
  result = v7;
  if ( v29 == (char *)v3 )
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

// Line 707: range 000000001756279C-0000000017562AAD
std::vector<AddItemResult> *__cdecl ItemStore::addItem(
        std::vector<AddItemResult> *retstr,
        ItemStore *const this,
        const ItemParam *item_param,
        const ActionReason *reason)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::initializer_list<ItemParam>::size_type v7; // rdx
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(std::vector<AddItemResult> *, ItemStore *const, unsigned __int64, const ActionReason *); // r8
  std::allocator<ItemParam> __a; // [rsp+3Fh] [rbp-A1h] BYREF
  std::initializer_list<ItemParam> __l; // [rsp+40h] [rbp-A0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 18 item_param_vec:708";
  *(_QWORD *)(v4 + 16) = ItemStore::addItem;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( ((unsigned __int8)item_param & 7) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&item_param->promote_level + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)item_param + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&item_param->promote_level + 3) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load_n(item_param, 16LL);
  }
  v7 = *(_QWORD *)&item_param->level;
  __l._M_array = *(std::initializer_list<ItemParam>::iterator *)&item_param->item_id;
  __l._M_len = v7;
  std::allocator<ItemParam>::allocator(&__a);
  std::vector<ItemParam>::vector(
    (std::vector<ItemParam> *const)(v4 + 32),
    (std::initializer_list<ItemParam>)__PAIR128__(1LL, &__l),
    &__a);
  std::allocator<ItemParam>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(this->_vptr_ItemStore + 12);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = *(void (__fastcall **)(std::vector<AddItemResult> *, ItemStore *const, unsigned __int64, const ActionReason *))v8;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  v9(retstr, this, v4 + 32, reason);
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 32));
  if ( v15 == (char *)v4 )
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
  return retstr;
};

// Line 713: range 0000000017562AAE-0000000017562E6E
std::vector<AddItemResult> *__cdecl ItemStore::addItemBatch(
        std::vector<AddItemResult> *retstr,
        ItemStore *const this,
        const std::vector<ItemParam> *item_param_vec,
        const ActionReason *reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerItemComp *ItemComp; // rax
  std::shared_ptr<Item> *M_current; // r15
  std::shared_ptr<Item> *v9; // r14
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(std::vector<AddItemResult> *, ItemStore *const, unsigned __int64, const ActionReason *); // r8
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  __gnu_cxx::__normal_iterator<std::shared_ptr<Item>*,std::vector<std::shared_ptr<Item>> > __i; // [rsp+40h] [rbp-F0h] BYREF
  __gnu_cxx::__normal_iterator<const std::shared_ptr<Item>*,std::vector<std::shared_ptr<Item>> > __position; // [rsp+48h] [rbp-E8h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+50h] [rbp-E0h]
  const ItemParam *item_param; // [rsp+58h] [rbp-D8h]
  char v21[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 24 12 item_vec:714 96 24 16 tmp_item_vec:718";
  *(_QWORD *)(v4 + 16) = ItemStore::addItemBatch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234881024;
  v6[536862722] = -218959118;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  std::vector<std::shared_ptr<Item>>::vector((std::vector<std::shared_ptr<Item>> *const)(v4 + 32));
  __for_range = item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    PlayerItemComp::createItem((std::vector<std::shared_ptr<Item>> *)(v4 + 96), ItemComp, item_param);
    M_current = std::vector<std::shared_ptr<Item>>::end((std::vector<std::shared_ptr<Item>> *const)(v4 + 96))._M_current;
    v9 = std::vector<std::shared_ptr<Item>>::begin((std::vector<std::shared_ptr<Item>> *const)(v4 + 96))._M_current;
    __i._M_current = std::vector<std::shared_ptr<Item>>::end((std::vector<std::shared_ptr<Item>> *const)(v4 + 32))._M_current;
    __gnu_cxx::__normal_iterator<std::shared_ptr<Item> const*,std::vector<std::shared_ptr<Item>>>::__normal_iterator<std::shared_ptr<Item>*>(
      &__position,
      &__i);
    std::vector<std::shared_ptr<Item>>::insert<__gnu_cxx::__normal_iterator<std::shared_ptr<Item>*,std::vector<std::shared_ptr<Item>>>,void>(
      (std::vector<std::shared_ptr<Item>> *const)(v4 + 32),
      __position,
      (__gnu_cxx::__normal_iterator<std::shared_ptr<Item>*,std::vector<std::shared_ptr<Item>> >)v9,
      (__gnu_cxx::__normal_iterator<std::shared_ptr<Item>*,std::vector<std::shared_ptr<Item>> >)M_current);
    std::vector<std::shared_ptr<Item>>::~vector((std::vector<std::shared_ptr<Item>> *const)(v4 + 96));
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = (unsigned __int64)(this->_vptr_ItemStore + 14);
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v11 = *(void (__fastcall **)(std::vector<AddItemResult> *, ItemStore *const, unsigned __int64, const ActionReason *))v10;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  v11(retstr, this, v4 + 32, reason);
  std::vector<std::shared_ptr<Item>>::~vector((std::vector<std::shared_ptr<Item>> *const)(v4 + 32));
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 726: range 0000000017562E70-000000001756317C
std::vector<AddItemResult> *__cdecl ItemStore::addItem(
        std::vector<AddItemResult> *retstr,
        ItemStore *const this,
        ItemPtr *p_item_ptr,
        const ActionReason *reason)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::shared_ptr<Item> *i; // r13
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(std::vector<AddItemResult> *, ItemStore *const, unsigned __int64, const ActionReason *); // r8
  std::allocator<std::shared_ptr<Item> > __a; // [rsp+3Fh] [rbp-A1h] BYREF
  std::shared_ptr<Item> v14; // [rsp+40h] [rbp-A0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 12 item_vec:727";
  *(_QWORD *)(v4 + 16) = ItemStore::addItem;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  std::shared_ptr<Item>::shared_ptr(&v14, p_item_ptr);
  std::allocator<std::shared_ptr<Item>>::allocator(&__a);
  std::vector<std::shared_ptr<Item>>::vector(
    (std::vector<std::shared_ptr<Item>> *const)(v4 + 32),
    (std::initializer_list<std::shared_ptr<Item> >)__PAIR128__(1LL, &v14),
    &__a);
  std::allocator<std::shared_ptr<Item>>::~allocator(&__a);
  for ( i = (std::shared_ptr<Item> *)v15; i != &v14; std::shared_ptr<Item>::~shared_ptr(i) )
    --i;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(this->_vptr_ItemStore + 14);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = *(void (__fastcall **)(std::vector<AddItemResult> *, ItemStore *const, unsigned __int64, const ActionReason *))v8;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  v9(retstr, this, v4 + 32, reason);
  std::vector<std::shared_ptr<Item>>::~vector((std::vector<std::shared_ptr<Item>> *const)(v4 + 32));
  if ( v15 == (char *)v4 )
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
  return retstr;
};

// Line 732: range 000000001756317E-0000000017565DED
std::vector<AddItemResult> *__cdecl ItemStore::addItemBatch(
        std::vector<AddItemResult> *retstr,
        ItemStore *const this,
        const std::vector<std::shared_ptr<Item>> *item_vec,
        const ActionReason *reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  data::ItemType item_type; // eax
  uint32_t total_material_num; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  uint32_t total_weapon_num; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  uint32_t total_reliquary_num; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  uint32_t total_furniture_num; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  std::map<long unsigned int,std::shared_ptr<Item>>::size_type v58; // r14
  common::milog::MiLogStream *v59; // r14
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // r14
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // r14
  std::map<long unsigned int,std::shared_ptr<Item>>::size_type v67; // r14
  common::milog::MiLogStream *v68; // r14
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // r14
  data::ItemType v76; // eax
  PlayerBasicComp *v77; // rax
  common::milog::MiLogStream *v78; // r14
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v83; // rax
  Material *v84; // r14
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v85; // rax
  unsigned __int64 v86; // rdx
  uint32_t v87; // eax
  bool v88; // r14
  common::milog::MiLogStream *v89; // r14
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v94; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v95; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v96; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v97; // rax
  unsigned __int64 v98; // rdx
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v99; // rax
  unsigned __int64 v100; // rdx
  AddItemResult *v101; // rdx
  data::ItemLimitType v102; // r15d
  proto::ActionReasonType v103; // r14d
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v104; // rax
  unsigned __int64 v105; // rdx
  uint32_t v106; // edx
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v107; // rax
  unsigned __int64 v108; // rdx
  Material *v109; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v110; // rax
  unsigned __int64 v111; // rdx
  uint32_t v112; // eax
  common::milog::MiLogStream *v113; // r14
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v118; // rax
  unsigned __int64 v119; // rdx
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v120; // rax
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v121; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v122; // rax
  unsigned __int64 v123; // rdx
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v124; // rax
  unsigned __int64 v125; // rdx
  AddItemResult *v126; // rdx
  data::ItemLimitType v127; // r15d
  proto::ActionReasonType v128; // r14d
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v129; // rax
  unsigned __int64 v130; // rdx
  uint32_t v131; // ecx
  bool v132; // r14
  common::milog::MiLogStream *v133; // r14
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v138; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v139; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v140; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v141; // rax
  unsigned __int64 v142; // rdx
  AddItemResult *v143; // rdx
  data::ItemLimitType v144; // r15d
  proto::ActionReasonType v145; // r14d
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v147; // r14
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v152; // rax
  bool v153; // r14
  common::milog::MiLogStream *v154; // r14
  common::milog::MiLogStream *v155; // rax
  common::milog::MiLogStream *v156; // rax
  common::milog::MiLogStream *v157; // rax
  common::milog::MiLogStream *v158; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v159; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v160; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v161; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v162; // rax
  unsigned __int64 v163; // rdx
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v164; // rax
  unsigned __int64 v165; // rdx
  AddItemResult *v166; // rdx
  proto::ActionReasonType v167; // r14d
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v168; // rax
  unsigned __int64 v169; // rdx
  uint32_t v170; // edx
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v171; // rax
  unsigned __int64 v172; // rdx
  Furniture *v173; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v174; // rax
  unsigned __int64 v175; // rdx
  uint32_t v176; // eax
  common::milog::MiLogStream *v177; // r14
  common::milog::MiLogStream *v178; // rax
  common::milog::MiLogStream *v179; // rax
  common::milog::MiLogStream *v180; // rax
  common::milog::MiLogStream *v181; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v182; // rax
  unsigned __int64 v183; // rdx
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v184; // rax
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v185; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v186; // rax
  unsigned __int64 v187; // rdx
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v188; // rax
  unsigned __int64 v189; // rdx
  AddItemResult *v190; // rdx
  proto::ActionReasonType v191; // r14d
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v192; // rax
  unsigned __int64 v193; // rdx
  uint32_t v194; // ecx
  common::milog::MiLogStream *v195; // rax
  common::milog::MiLogStream *v196; // rax
  common::milog::MiLogStream *v197; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v198; // rax
  common::milog::MiLogStream *v199; // rax
  common::milog::MiLogStream *v200; // r14
  std::string v202; // [rsp+0h] [rbp-370h]
  unsigned int HardFurnitureItemLimit; // [rsp+30h] [rbp-340h] BYREF
  unsigned int val; // [rsp+34h] [rbp-33Ch] BYREF
  uint32_t old_count_0; // [rsp+38h] [rbp-338h]
  uint32_t old_count; // [rsp+3Ch] [rbp-334h]
  std::vector<std::shared_ptr<Item>>::const_iterator __for_begin; // [rsp+40h] [rbp-330h] BYREF
  std::vector<std::shared_ptr<Item>>::const_iterator __for_end; // [rsp+48h] [rbp-328h] BYREF
  unsigned __int64 Guid; // [rsp+50h] [rbp-320h] BYREF
  const std::vector<std::shared_ptr<Item>> *__for_range; // [rsp+58h] [rbp-318h]
  const std::shared_ptr<Item> *item_ptr; // [rsp+60h] [rbp-310h]
  const data::ItemConfig *item_config_ptr; // [rsp+68h] [rbp-308h]
  std::shared_ptr<Config> v213; // [rsp+70h] [rbp-300h] BYREF
  std::shared_ptr<Config> v214; // [rsp+80h] [rbp-2F0h] BYREF
  std::shared_ptr<Config> v215; // [rsp+90h] [rbp-2E0h] BYREF
  std::shared_ptr<Config> v216; // [rsp+A0h] [rbp-2D0h] BYREF
  std::shared_ptr<Config> v217; // [rsp+B0h] [rbp-2C0h] BYREF
  std::shared_ptr<Item> p_item_ptr; // [rsp+C0h] [rbp-2B0h] BYREF
  std::shared_ptr<Config> v219; // [rsp+D0h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v220; // [rsp+E0h] [rbp-290h] BYREF
  common::milog::MiLogStream v221; // [rsp+100h] [rbp-270h] BYREF
  common::milog::MiLogStream v222; // [rsp+120h] [rbp-250h] BYREF
  common::milog::MiLogStream v223; // [rsp+140h] [rbp-230h] BYREF
  common::milog::MiLogStream v224; // [rsp+160h] [rbp-210h] BYREF
  common::milog::MiLogStream v225; // [rsp+180h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v226; // [rsp+1A0h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v227; // [rsp+1C0h] [rbp-1B0h] BYREF
  std::string v228; // [rsp+1E0h] [rbp-190h] BYREF
  common::milog::MiLogStream v229; // [rsp+200h] [rbp-170h] BYREF
  std::string v230; // [rsp+220h] [rbp-150h] BYREF
  common::milog::MiLogStream v231; // [rsp+240h] [rbp-130h] BYREF
  char v232[272]; // [rsp+260h] [rbp-110h] BYREF

  *(&v202._anon_0._M_allocated_capacity + 1) = (std::string::size_type)item_vec;
  v202._anon_0._M_allocated_capacity = (std::string::size_type)reason;
  v4 = (unsigned __int64)v232;
  v202._M_string_length = (std::string::size_type)v232;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 1 10 holder:819 64 1 10 holder:898 80 4 11 item_id:742 96 16 16 material_ptr:820 128 16 17 "
                        "furniture_ptr:899 160 24 14 add_result:936";
  *(_QWORD *)(v4 + 16) = ItemStore::addItemBatch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  std::vector<AddItemResult>::vector(retstr);
  __for_range = (const std::vector<std::shared_ptr<Item>> *)*(&v202._anon_0._M_allocated_capacity + 1);
  __for_begin._M_current = std::vector<std::shared_ptr<Item>>::begin(*((const std::vector<std::shared_ptr<Item>> *const *)&v202._anon_0._M_allocated_capacity
                                                                     + 1))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Item>>::end(*((const std::vector<std::shared_ptr<Item>> *const *)&v202._anon_0._M_allocated_capacity
                                                                 + 1))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Item> const*,std::vector<std::shared_ptr<Item>>>(
            &__for_begin,
            &__for_end) )
  {
    item_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Item> const*,std::vector<std::shared_ptr<Item>>>::operator*(&__for_begin);
    if ( std::operator==<Item>(item_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v220,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/item/item_store.cpp",
        "addItemBatch",
        738);
      v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v220,
             (const char (*)[26])"item_ptr is nullptr, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v220);
      goto LABEL_203;
    }
    v8 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
    *(_DWORD *)(v4 + 80) = Item::getItemId(v8);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v213);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v213);
    item_config_ptr = ItemExcelConfigMgr::findItemConfig(
                        &v9->design_config.txt_config_mgr.item_config_mgr,
                        *(_DWORD *)(v4 + 80));
    std::shared_ptr<Config>::~shared_ptr(&v213);
    if ( !item_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v221,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/item/item_store.cpp",
        "addItemBatch",
        746);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v221,
              (const char (*)[28])"findItemConfig failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v221);
      goto LABEL_203;
    }
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    item_type = item_config_ptr->item_type;
    if ( item_type == ITEM_FURNITURE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->total_furniture_num_);
      }
      total_furniture_num = this->total_furniture_num_;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v217);
      v48 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v217);
      LOBYTE(total_furniture_num) = total_furniture_num >= ConstValueExcelConfigMgr::getHardFurnitureItemLimit(&v48->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v217);
      if ( (_BYTE)total_furniture_num )
      {
        common::milog::MiLogStream::create(
          &v225,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/item/item_store.cpp",
          "addItemBatch",
          786);
        v49 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v225,
                (const char (*)[50])"furniture exceed hard limit! total_furniture_num:");
        v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &this->total_furniture_num_);
        v51 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v50,
                (const char (*)[28])" hard_furniture_item_limit:");
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v219);
        v52 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v219);
        HardFurnitureItemLimit = ConstValueExcelConfigMgr::getHardFurnitureItemLimit(&v52->design_config.txt_config_mgr.const_value_config_mgr);
        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &HardFurnitureItemLimit);
        v54 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v53, (const char (*)[12])" lost_item:");
        v55 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
        v56 = operator<<(v54, v55);
        v57 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v56, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &val);
        std::shared_ptr<Config>::~shared_ptr(&v219);
        common::milog::MiLogStream::~MiLogStream(&v225);
        goto LABEL_203;
      }
    }
    else if ( item_type <= ITEM_FURNITURE )
    {
      if ( item_type == ITEM_WEAPON )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->total_weapon_num_);
        }
        total_weapon_num = this->total_weapon_num_;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v215);
        v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v215);
        LOBYTE(total_weapon_num) = total_weapon_num >= ConstValueExcelConfigMgr::getHardWeaponItemLimit(&v26->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v215);
        if ( (_BYTE)total_weapon_num )
        {
          common::milog::MiLogStream::create(
            &v223,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/item/item_store.cpp",
            "addItemBatch",
            766);
          v27 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v223,
                  (const char (*)[44])"weapon exceed hard limit! total_weapon_num:");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &this->total_weapon_num_);
          v29 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v28,
                  (const char (*)[25])" hard_weapon_item_limit:");
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v219);
          v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v219);
          HardFurnitureItemLimit = ConstValueExcelConfigMgr::getHardWeaponItemLimit(&v30->design_config.txt_config_mgr.const_value_config_mgr);
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &HardFurnitureItemLimit);
          v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])" lost_item:");
          v33 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          v34 = operator<<(v32, v33);
          v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
          std::shared_ptr<Config>::~shared_ptr(&v219);
          common::milog::MiLogStream::~MiLogStream(&v223);
          goto LABEL_203;
        }
      }
      else if ( item_type <= ITEM_WEAPON )
      {
        if ( item_type == ITEM_MATERIAL )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->total_material_num_);
          }
          total_material_num = this->total_material_num_;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v214);
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v214);
          LOBYTE(total_material_num) = total_material_num >= ConstValueExcelConfigMgr::getHardMaterialItemLimit(&v15->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v214);
          if ( (_BYTE)total_material_num )
          {
            common::milog::MiLogStream::create(
              &v222,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/item/item_store.cpp",
              "addItemBatch",
              756);
            v16 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v222,
                    (const char (*)[48])"material exceed hard limit! total_material_num:");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    &this->total_material_num_);
            v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v17,
                    (const char (*)[27])" hard_material_item_limit:");
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v219);
            v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v219);
            HardFurnitureItemLimit = ConstValueExcelConfigMgr::getHardMaterialItemLimit(&v19->design_config.txt_config_mgr.const_value_config_mgr);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &HardFurnitureItemLimit);
            v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v20,
                    (const char (*)[12])" lost_item:");
            v22 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
            v23 = operator<<(v21, v22);
            v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
            std::shared_ptr<Config>::~shared_ptr(&v219);
            common::milog::MiLogStream::~MiLogStream(&v222);
            goto LABEL_203;
          }
        }
        else if ( item_type == ITEM_RELIQUARY )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->total_reliquary_num_);
          }
          total_reliquary_num = this->total_reliquary_num_;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v216);
          v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v216);
          LOBYTE(total_reliquary_num) = total_reliquary_num >= ConstValueExcelConfigMgr::getHardReliquaryItemLimit(&v37->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v216);
          if ( (_BYTE)total_reliquary_num )
          {
            common::milog::MiLogStream::create(
              &v224,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/item/item_store.cpp",
              "addItemBatch",
              776);
            v38 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    &v224,
                    (const char (*)[50])"reliquary exceed hard limit! total_reliquary_num:");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    &this->total_reliquary_num_);
            v40 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    v39,
                    (const char (*)[28])" hard_reliquary_item_limit:");
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v219);
            v41 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v219);
            HardFurnitureItemLimit = ConstValueExcelConfigMgr::getHardReliquaryItemLimit(&v41->design_config.txt_config_mgr.const_value_config_mgr);
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &HardFurnitureItemLimit);
            v43 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v42,
                    (const char (*)[12])" lost_item:");
            v44 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
            v45 = operator<<(v43, v44);
            v46 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v45, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &val);
            std::shared_ptr<Config>::~shared_ptr(&v219);
            common::milog::MiLogStream::~MiLogStream(&v224);
            goto LABEL_203;
          }
        }
      }
    }
    v58 = std::map<unsigned long,std::shared_ptr<Item>>::size(&this->item_map_);
    if ( v58 >= ConstValueExcelConfigMgr::getMaxItemErrorCount() )
    {
      common::milog::MiLogStream::create(
        &v226,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/item/item_store.cpp",
        "addItemBatch",
        800);
      v59 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v226,
              (const char (*)[41])"item store map size too large, now_size:");
      Guid = std::map<unsigned long,std::shared_ptr<Item>>::size(&this->item_map_);
      v60 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v59, &Guid);
      v61 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v60, (const char (*)[8])" limit:");
      HardFurnitureItemLimit = ConstValueExcelConfigMgr::getMaxItemErrorCount();
      v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &HardFurnitureItemLimit);
      v63 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v62, (const char (*)[7])" item:");
      v64 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
      v65 = operator<<(v63, v64);
      v66 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v65, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &val);
      common::milog::MiLogStream::~MiLogStream(&v226);
      v67 = std::map<unsigned long,std::shared_ptr<Item>>::size(&this->item_map_);
      if ( v67 >= ConstValueExcelConfigMgr::getMaxItemCount() )
      {
        common::milog::MiLogStream::create(
          &v227,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/item/item_store.cpp",
          "addItemBatch",
          806);
        v68 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v227,
                (const char (*)[41])"item store map size too large, now_size:");
        Guid = std::map<unsigned long,std::shared_ptr<Item>>::size(&this->item_map_);
        v69 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v68, &Guid);
        v70 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v69, (const char (*)[8])" limit:");
        HardFurnitureItemLimit = ConstValueExcelConfigMgr::getMaxItemCount();
        v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &HardFurnitureItemLimit);
        v72 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v71, (const char (*)[12])" lost_item:");
        v73 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
        v74 = operator<<(v72, v73);
        v75 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v74, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, &val);
        common::milog::MiLogStream::~MiLogStream(&v227);
        goto LABEL_203;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    v76 = item_config_ptr->item_type;
    if ( v76 == ITEM_FURNITURE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11](&v230, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 64), 7u, v202);
      std::string::~string(&v230);
      ItemStore::findFurniture((ItemStore *const)(v4 + 128), (uint32_t)this);
      if ( std::operator==<Furniture>((const std::shared_ptr<Furniture> *)(v4 + 128), 0LL) )
      {
        std::dynamic_pointer_cast<Furniture,Item>((const std::shared_ptr<Item> *)&v219);
        std::shared_ptr<Furniture>::operator=(
          (std::shared_ptr<Furniture> *const)(v4 + 128),
          (std::shared_ptr<Furniture> *)&v219);
        std::shared_ptr<Furniture>::~shared_ptr((std::shared_ptr<Furniture> *const)&v219);
        if ( std::operator==<Furniture>((const std::shared_ptr<Furniture> *)(v4 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v231,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/item/item_store.cpp",
            "addItemBatch",
            905);
          v147 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                   &v231,
                   (const char (*)[28])"item is not furniture, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v148 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v147, &val);
          v149 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v148, (const char (*)[10])" item_id:");
          v150 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v149,
                   (const unsigned int *)(v4 + 80));
          v151 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v150, (const char (*)[7])" guid:");
          v152 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          Guid = Item::getGuid(v152);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v151, &Guid);
          common::milog::MiLogStream::~MiLogStream(&v231);
        }
        std::shared_ptr<Item>::shared_ptr((std::shared_ptr<Item> *const)&v219, item_ptr);
        v153 = ItemStore::emplaceItem(this, (ItemPtr *)&v219, 1) != 0;
        std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)&v219);
        if ( v153 )
        {
          common::milog::MiLogStream::create(
            &v231,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/item/item_store.cpp",
            "addItemBatch",
            910);
          v154 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                   &v231,
                   (const char (*)[26])"emplace item failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v155 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v154, &val);
          v156 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v155, (const char (*)[10])" item_id:");
          v157 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v156,
                   (const unsigned int *)(v4 + 80));
          v158 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v157, (const char (*)[7])" guid:");
          v159 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          Guid = Item::getGuid(v159);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v158, &Guid);
          common::milog::MiLogStream::~MiLogStream(&v231);
        }
        else
        {
          *(_QWORD *)(v4 + 160) = 0LL;
          *(_QWORD *)(v4 + 168) = 0LL;
          *(_QWORD *)(v4 + 176) = 0LL;
          v160 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          *(_QWORD *)(v4 + 160) = Item::getGuid(v160);
          v161 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          *(_DWORD *)(v4 + 168) = Item::getItemId(v161);
          v162 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v162 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v163 = (unsigned __int64)(v162->_vptr_Item + 8);
          if ( *(_BYTE *)((v163 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 172) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v163)(v162);
          v164 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v164 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v165 = (unsigned __int64)(v164->_vptr_Item + 8);
          if ( *(_BYTE *)((v165 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 176) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v165)(v164);
          v166 = std::move<AddItemResult &>((AddItemResult *)(v4 + 160));
          std::vector<AddItemResult>::emplace_back<AddItemResult>(retstr, v166, v166);
          if ( *(_BYTE *)((v202._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0
            && (char)((v202._anon_0._M_local_buf[0] & 7) + 3) >= *(_BYTE *)((v202._anon_0._M_allocated_capacity >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(v202._anon_0._M_allocated_capacity);
          }
          v167 = *(_DWORD *)v202._anon_0._M_allocated_capacity;
          v168 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v168 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v169 = (unsigned __int64)(v168->_vptr_Item + 8);
          if ( *(_BYTE *)((v169 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v170 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v169)(v168);
          ItemStore::logAddFurniture(this, *(_DWORD *)(v4 + 80), 0, v170, v167);
        }
      }
      else
      {
        v171 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        if ( *(_BYTE *)(((unsigned __int64)v171 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v172 = (unsigned __int64)(v171->_vptr_Item + 8);
        if ( *(_BYTE *)((v172 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        old_count_0 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v172)(v171);
        v173 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        v174 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
        if ( *(_BYTE *)(((unsigned __int64)v174 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v175 = (unsigned __int64)(v174->_vptr_Item + 8);
        if ( *(_BYTE *)((v175 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v176 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v175)(v174);
        if ( Furniture::addCount(v173, v176) )
        {
          common::milog::MiLogStream::create(
            &v231,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/item/item_store.cpp",
            "addItemBatch",
            931);
          v177 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                   &v231,
                   (const char (*)[28])"item add count failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          HardFurnitureItemLimit = Player::getUid(this->player_);
          v178 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v177, &HardFurnitureItemLimit);
          v179 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v178, (const char (*)[10])" item_id:");
          v180 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v179,
                   (const unsigned int *)(v4 + 80));
          v181 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v180, (const char (*)[8])" count:");
          v182 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v182 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v183 = (unsigned __int64)(v182->_vptr_Item + 8);
          if ( *(_BYTE *)((v183 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v183)(v182);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v181, &val);
          common::milog::MiLogStream::~MiLogStream(&v231);
        }
        else
        {
          *(_QWORD *)(v4 + 160) = 0LL;
          *(_QWORD *)(v4 + 168) = 0LL;
          *(_QWORD *)(v4 + 176) = 0LL;
          v184 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          *(_QWORD *)(v4 + 160) = Item::getGuid(v184);
          v185 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          *(_DWORD *)(v4 + 168) = Item::getItemId(v185);
          v186 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v186 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v187 = (unsigned __int64)(v186->_vptr_Item + 8);
          if ( *(_BYTE *)((v187 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 172) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v187)(v186);
          v188 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          if ( *(_BYTE *)(((unsigned __int64)v188 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v189 = (unsigned __int64)(v188->_vptr_Item + 8);
          if ( *(_BYTE *)((v189 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 176) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v189)(v188);
          v190 = std::move<AddItemResult &>((AddItemResult *)(v4 + 160));
          std::vector<AddItemResult>::emplace_back<AddItemResult>(retstr, v190, v190);
          if ( *(_BYTE *)((v202._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0
            && (char)((v202._anon_0._M_local_buf[0] & 7) + 3) >= *(_BYTE *)((v202._anon_0._M_allocated_capacity >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(v202._anon_0._M_allocated_capacity);
          }
          v191 = *(_DWORD *)v202._anon_0._M_allocated_capacity;
          v192 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          if ( *(_BYTE *)(((unsigned __int64)v192 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v193 = (unsigned __int64)(v192->_vptr_Item + 8);
          if ( *(_BYTE *)((v193 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v194 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v193)(v192);
          ItemStore::logAddFurniture(this, *(_DWORD *)(v4 + 80), old_count_0, v194, v191);
        }
      }
      std::shared_ptr<Furniture>::~shared_ptr((std::shared_ptr<Furniture> *const)(v4 + 128));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 64));
    }
    else
    {
      if ( v76 > ITEM_FURNITURE )
        goto LABEL_200;
      if ( v76 != ITEM_MATERIAL )
      {
        if ( v76 >= ITEM_MATERIAL && (unsigned int)(v76 - 3) <= 1 )
        {
          std::shared_ptr<Item>::shared_ptr(&p_item_ptr, item_ptr);
          v132 = ItemStore::emplaceItem(this, &p_item_ptr, 1) != 0;
          std::shared_ptr<Item>::~shared_ptr(&p_item_ptr);
          if ( v132 )
          {
            common::milog::MiLogStream::create(
              &v229,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/item/item_store.cpp",
              "addItemBatch",
              879);
            v133 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                     &v229,
                     (const char (*)[26])"emplace item failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v134 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v133, &val);
            v135 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                     v134,
                     (const char (*)[10])" item_id:");
            v136 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v135,
                     (const unsigned int *)(v4 + 80));
            v137 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v136, (const char (*)[7])" guid:");
            v138 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
            Guid = Item::getGuid(v138);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v137, &Guid);
            common::milog::MiLogStream::~MiLogStream(&v229);
          }
          else
          {
            *(_QWORD *)(v4 + 160) = 0LL;
            *(_QWORD *)(v4 + 168) = 0LL;
            *(_QWORD *)(v4 + 176) = 0LL;
            *(_DWORD *)(v4 + 172) = 1;
            v139 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
            *(_QWORD *)(v4 + 160) = Item::getGuid(v139);
            v140 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
            *(_DWORD *)(v4 + 168) = Item::getItemId(v140);
            v141 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
            if ( *(_BYTE *)(((unsigned __int64)v141 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v142 = (unsigned __int64)(v141->_vptr_Item + 8);
            if ( *(_BYTE *)((v142 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v4 + 176) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v142)(v141);
            v143 = std::move<AddItemResult &>((AddItemResult *)(v4 + 160));
            std::vector<AddItemResult>::emplace_back<AddItemResult>(retstr, v143, v143);
            if ( *(_BYTE *)(((v202._anon_0._M_allocated_capacity + 4) >> 3) + 0x7FFF8000) != 0
              && (char)(((v202._anon_0._M_local_buf[0] + 4) & 7) + 3) >= *(_BYTE *)(((v202._anon_0._M_allocated_capacity
                                                                                    + 4) >> 3)
                                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(v202._anon_0._M_allocated_capacity + 4);
            }
            v144 = *(_DWORD *)(v202._anon_0._M_allocated_capacity + 4);
            if ( *(_BYTE *)((v202._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0
              && (char)((v202._anon_0._M_local_buf[0] & 7) + 3) >= *(_BYTE *)((v202._anon_0._M_allocated_capacity >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(v202._anon_0._M_allocated_capacity);
            }
            v145 = *(_DWORD *)v202._anon_0._M_allocated_capacity;
            std::shared_ptr<Item>::shared_ptr((std::shared_ptr<Item> *const)&v219, item_ptr);
            ItemStore::logAddEquip(this, (ItemPtr *)&v219, 1u, v145, v144);
            std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)&v219);
          }
          goto LABEL_203;
        }
LABEL_200:
        common::milog::MiLogStream::create(
          &v231,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/item/item_store.cpp",
          "addItemBatch",
          950);
        v195 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 &v231,
                 (const char (*)[19])"invalid item_type:");
        v196 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(
                 v195,
                 &item_config_ptr->item_type);
        v197 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v196, (const char (*)[7])" guid:");
        v198 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
        Guid = Item::getGuid(v198);
        v199 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v197, &Guid);
        v200 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v199, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v200, &val);
        common::milog::MiLogStream::~MiLogStream(&v231);
        goto LABEL_203;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v77 = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11](&v228, v77);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 6u, v202);
      std::string::~string(&v228);
      ItemStore::findMaterial((ItemStore *const)(v4 + 96), (uint32_t)this);
      if ( std::operator==<Material>((const std::shared_ptr<Material> *)(v4 + 96), 0LL) )
      {
        std::dynamic_pointer_cast<Material,Item>((const std::shared_ptr<Item> *)&v219);
        std::shared_ptr<Material>::operator=(
          (std::shared_ptr<Material> *const)(v4 + 96),
          (std::shared_ptr<Material> *)&v219);
        std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)&v219);
        if ( std::operator==<Material>((const std::shared_ptr<Material> *)(v4 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v231,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/item/item_store.cpp",
            "addItemBatch",
            826);
          v78 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v231,
                  (const char (*)[27])"item is not material, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, &val);
          v80 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v79, (const char (*)[10])" item_id:");
          v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v80,
                  (const unsigned int *)(v4 + 80));
          v82 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v81, (const char (*)[7])" guid:");
          v83 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          Guid = Item::getGuid(v83);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v82, &Guid);
          common::milog::MiLogStream::~MiLogStream(&v231);
        }
        else
        {
          v84 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v85 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v86 = (unsigned __int64)(v85->_vptr_Item + 8);
          if ( *(_BYTE *)((v86 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v87 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v86)(v85);
          Material::tryAddDeleteCount(v84, v87);
        }
        std::shared_ptr<Item>::shared_ptr((std::shared_ptr<Item> *const)&v219, item_ptr);
        v88 = ItemStore::emplaceItem(this, (ItemPtr *)&v219, 1) != 0;
        std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)&v219);
        if ( v88 )
        {
          common::milog::MiLogStream::create(
            &v231,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/item/item_store.cpp",
            "addItemBatch",
            835);
          v89 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v231,
                  (const char (*)[26])"emplace item failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, &val);
          v91 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v90, (const char (*)[10])" item_id:");
          v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v91,
                  (const unsigned int *)(v4 + 80));
          v93 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v92, (const char (*)[7])" guid:");
          v94 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          Guid = Item::getGuid(v94);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v93, &Guid);
          common::milog::MiLogStream::~MiLogStream(&v231);
        }
        else
        {
          *(_QWORD *)(v4 + 160) = 0LL;
          *(_QWORD *)(v4 + 168) = 0LL;
          *(_QWORD *)(v4 + 176) = 0LL;
          v95 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          *(_QWORD *)(v4 + 160) = Item::getGuid(v95);
          v96 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          *(_DWORD *)(v4 + 168) = Item::getItemId(v96);
          v97 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v97 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v98 = (unsigned __int64)(v97->_vptr_Item + 8);
          if ( *(_BYTE *)((v98 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 172) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v98)(v97);
          v99 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v99 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v100 = (unsigned __int64)(v99->_vptr_Item + 8);
          if ( *(_BYTE *)((v100 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 176) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v100)(v99);
          v101 = std::move<AddItemResult &>((AddItemResult *)(v4 + 160));
          std::vector<AddItemResult>::emplace_back<AddItemResult>(retstr, v101, v101);
          if ( *(_BYTE *)(((v202._anon_0._M_allocated_capacity + 4) >> 3) + 0x7FFF8000) != 0
            && (char)(((v202._anon_0._M_local_buf[0] + 4) & 7) + 3) >= *(_BYTE *)(((v202._anon_0._M_allocated_capacity
                                                                                  + 4) >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(v202._anon_0._M_allocated_capacity + 4);
          }
          v102 = *(_DWORD *)(v202._anon_0._M_allocated_capacity + 4);
          if ( *(_BYTE *)((v202._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0
            && (char)((v202._anon_0._M_local_buf[0] & 7) + 3) >= *(_BYTE *)((v202._anon_0._M_allocated_capacity >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(v202._anon_0._M_allocated_capacity);
          }
          v103 = *(_DWORD *)v202._anon_0._M_allocated_capacity;
          v104 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v104 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v105 = (unsigned __int64)(v104->_vptr_Item + 8);
          if ( *(_BYTE *)((v105 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v106 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v105)(v104);
          ItemStore::logAddMaterial(this, *(_DWORD *)(v4 + 80), 0, v106, v103, v102);
        }
      }
      else
      {
        v107 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)v107 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v108 = (unsigned __int64)(v107->_vptr_Item + 8);
        if ( *(_BYTE *)((v108 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        old_count = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v108)(v107);
        v109 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        v110 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
        if ( *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v111 = (unsigned __int64)(v110->_vptr_Item + 8);
        if ( *(_BYTE *)((v111 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v112 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v111)(v110);
        if ( Material::addCount(v109, v112) )
        {
          common::milog::MiLogStream::create(
            &v231,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/item/item_store.cpp",
            "addItemBatch",
            856);
          v113 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                   &v231,
                   (const char (*)[28])"item add count failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          HardFurnitureItemLimit = Player::getUid(this->player_);
          v114 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v113, &HardFurnitureItemLimit);
          v115 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v114, (const char (*)[10])" item_id:");
          v116 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v115,
                   (const unsigned int *)(v4 + 80));
          v117 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v116, (const char (*)[8])" count:");
          v118 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v118 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v119 = (unsigned __int64)(v118->_vptr_Item + 8);
          if ( *(_BYTE *)((v119 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v119)(v118);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v117, &val);
          common::milog::MiLogStream::~MiLogStream(&v231);
        }
        else
        {
          *(_QWORD *)(v4 + 160) = 0LL;
          *(_QWORD *)(v4 + 168) = 0LL;
          *(_QWORD *)(v4 + 176) = 0LL;
          v120 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          *(_QWORD *)(v4 + 160) = Item::getGuid(v120);
          v121 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          *(_DWORD *)(v4 + 168) = Item::getItemId(v121);
          v122 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)item_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v122 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v123 = (unsigned __int64)(v122->_vptr_Item + 8);
          if ( *(_BYTE *)((v123 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 172) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v123)(v122);
          v124 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( *(_BYTE *)(((unsigned __int64)v124 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v125 = (unsigned __int64)(v124->_vptr_Item + 8);
          if ( *(_BYTE *)((v125 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 176) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v125)(v124);
          v126 = std::move<AddItemResult &>((AddItemResult *)(v4 + 160));
          std::vector<AddItemResult>::emplace_back<AddItemResult>(retstr, v126, v126);
          if ( *(_BYTE *)(((v202._anon_0._M_allocated_capacity + 4) >> 3) + 0x7FFF8000) != 0
            && (char)(((v202._anon_0._M_local_buf[0] + 4) & 7) + 3) >= *(_BYTE *)(((v202._anon_0._M_allocated_capacity
                                                                                  + 4) >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(v202._anon_0._M_allocated_capacity + 4);
          }
          v127 = *(_DWORD *)(v202._anon_0._M_allocated_capacity + 4);
          if ( *(_BYTE *)((v202._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0
            && (char)((v202._anon_0._M_local_buf[0] & 7) + 3) >= *(_BYTE *)((v202._anon_0._M_allocated_capacity >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(v202._anon_0._M_allocated_capacity);
          }
          v128 = *(_DWORD *)v202._anon_0._M_allocated_capacity;
          v129 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( *(_BYTE *)(((unsigned __int64)v129 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v130 = (unsigned __int64)(v129->_vptr_Item + 8);
          if ( *(_BYTE *)((v130 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v131 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v130)(v129);
          ItemStore::logAddMaterial(this, *(_DWORD *)(v4 + 80), old_count, v131, v128, v127);
        }
      }
      std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v4 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
    }
LABEL_203:
    __gnu_cxx::__normal_iterator<std::shared_ptr<Item> const*,std::vector<std::shared_ptr<Item>>>::operator++(&__for_begin);
  }
  if ( v202._M_string_length == v4 )
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
  return retstr;
};

// Line 960: range 0000000017565DEE-000000001756607B
int32_t __cdecl ItemStore::checkSubItem(ItemStore *const this, const ItemParam *item_param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::initializer_list<ItemParam>::size_type v5; // rdx
  __int64 (__fastcall **v6)(ItemStore *const, __int64); // rax
  int32_t v7; // r14d
  int32_t result; // eax
  std::allocator<ItemParam> __a; // [rsp+2Fh] [rbp-A1h] BYREF
  std::initializer_list<ItemParam> __l; // [rsp+30h] [rbp-A0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 18 item_param_vec:961";
  *(_QWORD *)(v2 + 16) = ItemStore::checkSubItem;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( ((unsigned __int8)item_param & 7) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&item_param->promote_level + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)item_param + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&item_param->promote_level + 3) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load_n(item_param, 16LL);
  }
  v5 = *(_QWORD *)&item_param->level;
  __l._M_array = *(std::initializer_list<ItemParam>::iterator *)&item_param->item_id;
  __l._M_len = v5;
  std::allocator<ItemParam>::allocator(&__a);
  std::vector<ItemParam>::vector(
    (std::vector<ItemParam> *const)(v2 + 32),
    (std::initializer_list<ItemParam>)__PAIR128__(1LL, &__l),
    &__a);
  std::allocator<ItemParam>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (__int64 (__fastcall **)(ItemStore *const, __int64))(this->_vptr_ItemStore + 16);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (*v6)(this, v2 + 32);
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 32));
  result = v7;
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

// Line 966: range 000000001756607C-0000000017567515
int32_t __cdecl ItemStore::checkSubItemBatch(ItemStore *const this, const std::vector<ItemParam> *item_param_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,const std::pair<unsigned int const,ItemParam> >::type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  data::ItemType item_type; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool v15; // r15
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // r15d
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  unsigned __int64 v23; // rdx
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  Material *v27; // rax
  uint32_t v28; // eax
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  unsigned __int64 v33; // rdx
  uint32_t v34; // eax
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  unsigned __int64 v41; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  bool isItemSystemClosed; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  bool isItemClosed; // r15
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  int v51; // r15d
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  unsigned __int64 v53; // rdx
  common::milog::MiLogStream *v54; // r14
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  unsigned __int64 v58; // rdx
  uint32_t v59; // eax
  common::milog::MiLogStream *v60; // r14
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r14
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  unsigned __int64 v66; // rdx
  common::milog::MiLogStream *v67; // r14
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  int32_t result; // eax
  unsigned int Uid; // [rsp+28h] [rbp-268h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-264h] BYREF
  uint32_t now; // [rsp+30h] [rbp-260h]
  uint32_t count; // [rsp+34h] [rbp-25Ch]
  std::map<unsigned int,ItemParam>::iterator __for_begin; // [rsp+38h] [rbp-258h] BYREF
  std::map<unsigned int,ItemParam>::iterator __for_end; // [rsp+40h] [rbp-250h] BYREF
  std::map<unsigned int,ItemParam> *__for_range; // [rsp+48h] [rbp-248h]
  const std::pair<unsigned int const,ItemParam> *v78; // [rsp+50h] [rbp-240h]
  std::tuple_element<0,const std::pair<unsigned int const,ItemParam> >::type *_; // [rsp+58h] [rbp-238h]
  std::tuple_element<1,const std::pair<unsigned int const,ItemParam> >::type *item_param; // [rsp+60h] [rbp-230h]
  const data::ItemConfig *item_config_ptr; // [rsp+68h] [rbp-228h]
  std::shared_ptr<Config> v82; // [rsp+70h] [rbp-220h] BYREF
  std::shared_ptr<Config> v83; // [rsp+80h] [rbp-210h] BYREF
  std::shared_ptr<Config> v84; // [rsp+90h] [rbp-200h] BYREF
  std::shared_ptr<Config> v85; // [rsp+A0h] [rbp-1F0h] BYREF
  std::shared_ptr<Config> v86; // [rsp+B0h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v87; // [rsp+C0h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v88; // [rsp+E0h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v89; // [rsp+100h] [rbp-190h] BYREF
  common::milog::MiLogStream v90; // [rsp+120h] [rbp-170h] BYREF
  common::milog::MiLogStream v91; // [rsp+140h] [rbp-150h] BYREF
  common::milog::MiLogStream v92; // [rsp+160h] [rbp-130h] BYREF
  common::milog::MiLogStream v93; // [rsp+180h] [rbp-110h] BYREF
  char v94[240]; // [rsp+1A0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 11 item_id:972 48 16 16 material_ptr:998 80 16 18 furniture_ptr:1037 112 48 18 item_param_map:968";
  *(_QWORD *)(v3 + 16) = ItemStore::checkSubItemBatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  now = common::tools::TimeUtils::getNow();
  PlayerItemComp::mergeItemParam((std::map<unsigned int,ItemParam> *)(v3 + 112), item_param_vec);
  __for_range = (std::map<unsigned int,ItemParam> *)(v3 + 112);
  __for_begin._M_node = std::map<unsigned int,ItemParam>::begin((std::map<unsigned int,ItemParam> *const)(v3 + 112))._M_node;
  __for_end._M_node = std::map<unsigned int,ItemParam>::end((std::map<unsigned int,ItemParam> *const)(v3 + 112))._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
    {
      v2 = 0;
      goto LABEL_94;
    }
    v78 = std::_Rb_tree_iterator<std::pair<unsigned int const,ItemParam>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,ItemParam>(v78);
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,ItemParam> >::type *)std::get<1ul,unsigned int const,ItemParam>(v78);
    item_param = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 32) = item_param->item_id;
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->count);
    }
    count = item_param->count;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v82);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v82);
    item_config_ptr = ItemExcelConfigMgr::findItemConfig(
                        &v7->design_config.txt_config_mgr.item_config_mgr,
                        *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v82);
    if ( !item_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v87,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/item/item_store.cpp",
        "checkSubItemBatch",
        978);
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v87,
             (const char (*)[28])"findItemConfig failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v87);
      v2 = -1;
      goto LABEL_94;
    }
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    item_type = item_config_ptr->item_type;
    if ( item_type != ITEM_FURNITURE )
      break;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v85);
    v42 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v85);
    isItemSystemClosed = FeatureSwitchMgr::isItemSystemClosed(&v42->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v85);
    if ( isItemSystemClosed )
    {
      common::milog::MiLogStream::create(
        &v90,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/item_store.cpp",
        "checkSubItemBatch",
        1028);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v90,
        (const char (*)[35])"[FEATURE_SWITCH] ItemSystem closed");
      common::milog::MiLogStream::~MiLogStream(&v90);
      v2 = 142;
      goto LABEL_94;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v86);
    v44 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v86);
    isItemClosed = FeatureSwitchMgr::isItemClosed(&v44->feature_switch_mgr, *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v86);
    if ( isItemClosed )
    {
      common::milog::MiLogStream::create(
        &v91,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/item_store.cpp",
        "checkSubItemBatch",
        1033);
      v46 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v91,
              (const char (*)[38])"[FEATURE_SWITCH] ItemSystem item_id: ");
      v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v47, (const char (*)[8])" closed");
      common::milog::MiLogStream::~MiLogStream(&v91);
      v2 = 142;
      goto LABEL_94;
    }
    ItemStore::findFurniture((ItemStore *const)(v3 + 80), (uint32_t)this);
    if ( std::operator==<Furniture>((const std::shared_ptr<Furniture> *)(v3 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v93,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/item_store.cpp",
        "checkSubItemBatch",
        1040);
      v48 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v93,
              (const char (*)[27])"findFurniture failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &val);
      v50 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v49, (const char (*)[10])" item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v93);
      v2 = 609;
      v51 = 0;
    }
    else
    {
      v52 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v53 = (unsigned __int64)(v52->_vptr_Item + 11);
      if ( *(_BYTE *)((v53 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v53)(v52) )
      {
        common::milog::MiLogStream::create(
          &v93,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/item/item_store.cpp",
          "checkSubItemBatch",
          1046);
        v54 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v93,
                (const char (*)[26])"checkConsume failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &val);
        v56 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v55, (const char (*)[10])" item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v93);
        v2 = -1;
        v51 = 0;
      }
      else
      {
        v57 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v58 = (unsigned __int64)(v57->_vptr_Item + 8);
        if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v59 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v58)(v57);
        if ( count <= v59 )
        {
          v51 = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v93,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/item/item_store.cpp",
            "checkSubItemBatch",
            1051);
          v60 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v93,
                  (const char (*)[22])"item not enough, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &Uid);
          v62 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v61, (const char (*)[10])" item_id:");
          v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v62,
                  (const unsigned int *)(v3 + 32));
          v64 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v63, (const char (*)[8])" count:");
          v65 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
          if ( *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v66 = (unsigned __int64)(v65->_vptr_Item + 8);
          if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v66)(v65);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &val);
          common::milog::MiLogStream::~MiLogStream(&v93);
          v2 = 609;
          v51 = 0;
        }
      }
    }
    std::shared_ptr<Furniture>::~shared_ptr((std::shared_ptr<Furniture> *const)(v3 + 80));
    if ( v51 != 1 )
      goto LABEL_94;
LABEL_92:
    std::_Rb_tree_iterator<std::pair<unsigned int const,ItemParam>>::operator++(&__for_begin);
  }
  if ( item_type > ITEM_FURNITURE )
    goto LABEL_91;
  if ( item_type == ITEM_MATERIAL )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v83);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v83);
    v13 = FeatureSwitchMgr::isItemSystemClosed(&v12->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v83);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/item_store.cpp",
        "checkSubItemBatch",
        989);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v88,
        (const char (*)[35])"[FEATURE_SWITCH] ItemSystem closed");
      common::milog::MiLogStream::~MiLogStream(&v88);
      v2 = 142;
      goto LABEL_94;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v84);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v84);
    v15 = FeatureSwitchMgr::isItemClosed(&v14->feature_switch_mgr, *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v84);
    if ( v15 )
    {
      common::milog::MiLogStream::create(
        &v89,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/item_store.cpp",
        "checkSubItemBatch",
        994);
      v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v89,
              (const char (*)[38])"[FEATURE_SWITCH] ItemSystem item_id: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" closed");
      common::milog::MiLogStream::~MiLogStream(&v89);
      v2 = 142;
      goto LABEL_94;
    }
    ItemStore::findMaterial((ItemStore *const)(v3 + 48), (uint32_t)this);
    if ( std::operator==<Material>((const std::shared_ptr<Material> *)(v3 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v93,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/item_store.cpp",
        "checkSubItemBatch",
        1001);
      v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v93,
              (const char (*)[26])"findMaterial failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v93);
      v2 = 609;
      v21 = 0;
    }
    else
    {
      v22 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = (unsigned __int64)(v22->_vptr_Item + 11);
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v23)(v22) )
      {
        common::milog::MiLogStream::create(
          &v93,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/item/item_store.cpp",
          "checkSubItemBatch",
          1007);
        v24 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v93,
                (const char (*)[26])"checkConsume failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
        v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])" item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v93);
        v2 = -1;
        v21 = 0;
      }
      else
      {
        v27 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        v28 = Material::getNextDeleteTime(v27);
        if ( now < v28 )
        {
          v32 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v33 = (unsigned __int64)(v32->_vptr_Item + 8);
          if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v34 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v33)(v32);
          if ( count <= v34 )
          {
            v21 = 1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v93,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/item/item_store.cpp",
              "checkSubItemBatch",
              1017);
            v35 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    &v93,
                    (const char (*)[22])"item not enough, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Uid = Player::getUid(this->player_);
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &Uid);
            v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v36, (const char (*)[10])" item_id:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v3 + 32));
            v39 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v38, (const char (*)[8])" count:");
            v40 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
            if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v41 = (unsigned __int64)(v40->_vptr_Item + 8);
            if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v41)(v40);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &val);
            common::milog::MiLogStream::~MiLogStream(&v93);
            v2 = 609;
            v21 = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v93,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/item/item_store.cpp",
            "checkSubItemBatch",
            1012);
          v29 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v93,
                  (const char (*)[26])"material is expired, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
          v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v30, (const char (*)[10])" item_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v93);
          v2 = 648;
          v21 = 0;
        }
      }
    }
    std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v3 + 48));
    if ( v21 != 1 )
      goto LABEL_94;
    goto LABEL_92;
  }
  if ( item_type < ITEM_MATERIAL || (unsigned int)(item_type - 3) > 1 )
  {
LABEL_91:
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/item_store.cpp",
      "checkSubItemBatch",
      1067);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v93, (const char (*)[23])"need to be implemented");
    common::milog::MiLogStream::~MiLogStream(&v93);
    v2 = -1;
    goto LABEL_94;
  }
  common::milog::MiLogStream::create(
    &v92,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/item/item_store.cpp",
    "checkSubItemBatch",
    1060);
  v67 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
          &v92,
          (const char (*)[57])"unsupported operation to delete equip with item_id: uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, &val);
  v69 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v68, (const char (*)[10])" item_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v92);
  v2 = -1;
LABEL_94:
  std::map<unsigned int,ItemParam>::~map((std::map<unsigned int,ItemParam> *const)(v3 + 112));
  result = v2;
  if ( v94 == (char *)v3 )
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
  return result;
};

// Line 1078: range 0000000017567516-0000000017567829
std::vector<SubItemResult> *__cdecl ItemStore::subItem(
        std::vector<SubItemResult> *retstr,
        ItemStore *const this,
        const ItemParam *item_param,
        const SubItemReason *reason)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::initializer_list<ItemParam>::size_type v7; // rdx
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(std::vector<SubItemResult> *, ItemStore *const, unsigned __int64, const SubItemReason *); // r8
  std::allocator<ItemParam> __a; // [rsp+3Fh] [rbp-A1h] BYREF
  std::initializer_list<ItemParam> __l; // [rsp+40h] [rbp-A0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 19 item_param_vec:1079";
  *(_QWORD *)(v4 + 16) = ItemStore::subItem;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( ((unsigned __int8)item_param & 7) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&item_param->promote_level + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)item_param + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&item_param->promote_level + 3) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load_n(item_param, 16LL);
  }
  v7 = *(_QWORD *)&item_param->level;
  __l._M_array = *(std::initializer_list<ItemParam>::iterator *)&item_param->item_id;
  __l._M_len = v7;
  std::allocator<ItemParam>::allocator(&__a);
  std::vector<ItemParam>::vector(
    (std::vector<ItemParam> *const)(v4 + 32),
    (std::initializer_list<ItemParam>)__PAIR128__(1LL, &__l),
    &__a);
  std::allocator<ItemParam>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(this->_vptr_ItemStore + 18);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = *(void (__fastcall **)(std::vector<SubItemResult> *, ItemStore *const, unsigned __int64, const SubItemReason *))v8;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  v9(retstr, this, v4 + 32, reason);
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 32));
  if ( v15 == (char *)v4 )
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
  return retstr;
};

// Line 1084: range 000000001756782A-0000000017568ACC
std::vector<SubItemResult> *__cdecl ItemStore::subItemBatch(
        std::vector<SubItemResult> *retstr,
        ItemStore *const this,
        const std::vector<ItemParam> *item_param_vec,
        const SubItemReason *reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  data::ItemType item_type; // eax
  PlayerBasicComp *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned __int64 v17; // rdx
  Material *v18; // rcx
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  unsigned __int64 v22; // rdx
  proto::ActionReasonType v23; // r14d
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  unsigned __int64 v25; // rdx
  uint32_t v26; // ecx
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  unsigned __int64 v28; // rdx
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint64_t v30; // rcx
  SubItemResult *v31; // rdx
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  unsigned __int64 v37; // rdx
  Furniture *v38; // rcx
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  unsigned __int64 v42; // rdx
  proto::ActionReasonType v43; // r14d
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  unsigned __int64 v45; // rdx
  uint32_t v46; // ecx
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  unsigned __int64 v48; // rdx
  std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  uint64_t Guid; // rcx
  SubItemResult *v51; // rdx
  std::string reasona; // [rsp+0h] [rbp-150h]
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  uint32_t old_count_0; // [rsp+30h] [rbp-120h]
  uint32_t old_count; // [rsp+34h] [rbp-11Ch]
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+38h] [rbp-118h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+40h] [rbp-110h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+48h] [rbp-108h]
  const ItemParam *item_param; // [rsp+50h] [rbp-100h]
  const data::ItemConfig *item_config_ptr; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v62; // [rsp+60h] [rbp-F0h] BYREF
  char v63[208]; // [rsp+80h] [rbp-D0h] BYREF

  *(&reasona._anon_0._M_allocated_capacity + 1) = (std::string::size_type)retstr;
  reasona._anon_0._M_allocated_capacity = (std::string::size_type)this;
  reasona._M_string_length = (std::string::size_type)item_param_vec;
  reasona._M_dataplus._M_p = (std::string::pointer)reason;
  v4 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 11 holder:1134 64 16 18 furniture_ptr:1135 96 24 15 sub_result:1149";
  *(_QWORD *)(v4 + 16) = ItemStore::subItemBatch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  std::vector<SubItemResult>::vector(retstr);
  __for_range = (const std::vector<ItemParam> *)reasona._M_string_length;
  __for_begin._M_current = std::vector<ItemParam>::begin((const std::vector<ItemParam> *const)reasona._M_string_length)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end((const std::vector<ItemParam> *const)reasona._M_string_length)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 64));
    p_item_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->design_config.txt_config_mgr.item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_param);
    }
    item_config_ptr = ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, item_param->item_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
    if ( !item_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/item/item_store.cpp",
        "subItemBatch",
        1092);
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v62,
             (const char (*)[28])"findItemConfig failed, uid:");
      if ( *(_BYTE *)(((reasona._anon_0._M_allocated_capacity + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_11:
      val = Player::getUid(*(const Player *const *)(reasona._anon_0._M_allocated_capacity + 128));
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &item_param->item_id);
      common::milog::MiLogStream::~MiLogStream(&v62);
      goto LABEL_104;
    }
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    item_type = item_config_ptr->item_type;
    if ( item_type == ITEM_FURNITURE )
    {
      if ( *(_BYTE *)(((reasona._anon_0._M_allocated_capacity + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(*(Player *const *)(reasona._anon_0._M_allocated_capacity + 128));
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v62, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 7u, reasona);
      std::string::~string(&v62);
      if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_param);
      }
      ItemStore::findFurniture((ItemStore *const)(v4 + 64), reasona._anon_0._M_allocated_capacity);
      if ( std::operator==<Furniture>((const std::shared_ptr<Furniture> *)(v4 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/item/item_store.cpp",
          "subItemBatch",
          1138);
        v33 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v62,
                (const char (*)[27])"findFurniture failed, uid:");
        if ( *(_BYTE *)(((reasona._anon_0._M_allocated_capacity + 128) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_67;
      }
      v36 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v37 = (unsigned __int64)(v36->_vptr_Item + 8);
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      old_count_0 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v37)(v36);
      v38 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
      if ( (unsigned int)Furniture::subCount(v38, item_param->count) )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/item/item_store.cpp",
          "subItemBatch",
          1145);
        v33 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v62,
                (const char (*)[22])"subCount failed, uid:");
        if ( *(_BYTE *)(((reasona._anon_0._M_allocated_capacity + 128) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
LABEL_67:
        val = Player::getUid(*(const Player *const *)(reasona._anon_0._M_allocated_capacity + 128));
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
        v35 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v34, (const char (*)[10])" item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &item_param->item_id);
        common::milog::MiLogStream::~MiLogStream(&v62);
      }
      else
      {
        v39 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        *(_QWORD *)(v4 + 96) = Item::getGuid(v39);
        v40 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        *(_DWORD *)(v4 + 104) = Item::getItemId(v40);
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        *(_DWORD *)(v4 + 108) = item_param->count;
        v41 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v42 = (unsigned __int64)(v41->_vptr_Item + 8);
        if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v4 + 112) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v42)(v41);
        if ( *(_BYTE *)(((unsigned __int64)reasona._M_dataplus._M_p >> 3) + 0x7FFF8000) != 0
          && (char)(((__int64)reasona._M_dataplus._M_p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona._M_dataplus._M_p >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(reasona._M_dataplus._M_p);
        }
        v43 = *(_DWORD *)reasona._M_dataplus._M_p;
        v44 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v45 = (unsigned __int64)(v44->_vptr_Item + 8);
        if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v46 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v45)(v44);
        if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_param);
        }
        ItemStore::logAddFurniture(
          (ItemStore *const)reasona._anon_0._M_allocated_capacity,
          item_param->item_id,
          old_count_0,
          v46,
          v43);
        v47 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v48 = (unsigned __int64)(v47->_vptr_Item + 8);
        if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( !(*(unsigned int (__fastcall **)(std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v48)(v47) )
        {
          v49 = std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Furniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          Guid = Item::getGuid(v49);
          ItemStore::delItem((ItemStore *const)reasona._anon_0._M_allocated_capacity, Guid, 1);
        }
        v51 = std::move<SubItemResult &>((SubItemResult *)(v4 + 96));
        std::vector<SubItemResult>::emplace_back<SubItemResult>(
          *((std::vector<SubItemResult> *const *)&reasona._anon_0._M_allocated_capacity + 1),
          v51,
          v51);
      }
      std::shared_ptr<Furniture>::~shared_ptr((std::shared_ptr<Furniture> *const)(v4 + 64));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
      goto LABEL_104;
    }
    if ( item_type <= ITEM_FURNITURE )
    {
      if ( item_type == ITEM_MATERIAL )
      {
        if ( *(_BYTE *)(((reasona._anon_0._M_allocated_capacity + 128) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v12 = Player::getBasicComp(*(Player *const *)(reasona._anon_0._M_allocated_capacity + 128));
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v62, v12);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 6u, reasona);
        std::string::~string(&v62);
        if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_param);
        }
        ItemStore::findMaterial((ItemStore *const)(v4 + 64), reasona._anon_0._M_allocated_capacity);
        if ( std::operator==<Material>((const std::shared_ptr<Material> *)(v4 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v62,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/item/item_store.cpp",
            "subItemBatch",
            1105);
          v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v62,
                  (const char (*)[26])"findMaterial failed, uid:");
          if ( *(_BYTE *)(((reasona._anon_0._M_allocated_capacity + 128) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          goto LABEL_27;
        }
        v16 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v17 = (unsigned __int64)(v16->_vptr_Item + 8);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        old_count = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v17)(v16);
        v18 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        if ( Material::subCount(v18, item_param->count) )
        {
          common::milog::MiLogStream::create(
            &v62,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/item/item_store.cpp",
            "subItemBatch",
            1112);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v62,
                  (const char (*)[22])"subCount failed, uid:");
          if ( *(_BYTE *)(((reasona._anon_0._M_allocated_capacity + 128) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
LABEL_27:
          val = Player::getUid(*(const Player *const *)(reasona._anon_0._M_allocated_capacity + 128));
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" item_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &item_param->item_id);
          common::milog::MiLogStream::~MiLogStream(&v62);
        }
        else
        {
          v19 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          *(_QWORD *)(v4 + 96) = Item::getGuid(v19);
          v20 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          *(_DWORD *)(v4 + 104) = Item::getItemId(v20);
          if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&item_param->count);
          }
          *(_DWORD *)(v4 + 108) = item_param->count;
          v21 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v22 = (unsigned __int64)(v21->_vptr_Item + 8);
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 112) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v22)(v21);
          if ( *(_BYTE *)(((unsigned __int64)reasona._M_dataplus._M_p >> 3) + 0x7FFF8000) != 0
            && (char)(((__int64)reasona._M_dataplus._M_p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona._M_dataplus._M_p >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(reasona._M_dataplus._M_p);
          }
          v23 = *(_DWORD *)reasona._M_dataplus._M_p;
          v24 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v25 = (unsigned __int64)(v24->_vptr_Item + 8);
          if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v26 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v25)(v24);
          if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(item_param);
          }
          ItemStore::logAddMaterial(
            (ItemStore *const)reasona._anon_0._M_allocated_capacity,
            item_param->item_id,
            old_count,
            v26,
            v23,
            ITEM_LIMIT_NONE);
          v27 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v28 = (unsigned __int64)(v27->_vptr_Item + 8);
          if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( !(*(unsigned int (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v28)(v27) )
          {
            v29 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v30 = Item::getGuid(v29);
            ItemStore::delItem((ItemStore *const)reasona._anon_0._M_allocated_capacity, v30, 1);
          }
          v31 = std::move<SubItemResult &>((SubItemResult *)(v4 + 96));
          std::vector<SubItemResult>::emplace_back<SubItemResult>(
            *((std::vector<SubItemResult> *const *)&reasona._anon_0._M_allocated_capacity + 1),
            v31,
            v31);
        }
        std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v4 + 64));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
        goto LABEL_104;
      }
      if ( item_type >= ITEM_MATERIAL && (unsigned int)(item_type - 3) <= 1 )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/item_store.cpp",
          "subItemBatch",
          1168);
        v8 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               &v62,
               (const char (*)[57])"unsupported operation to delete equip with item_id: uid:");
        if ( *(_BYTE *)(((reasona._anon_0._M_allocated_capacity + 128) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_11;
      }
    }
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/item_store.cpp",
      "subItemBatch",
      1175);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v62, (const char (*)[23])"need to be implemented");
    common::milog::MiLogStream::~MiLogStream(&v62);
LABEL_104:
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  if ( v63 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return (std::vector<SubItemResult> *)*(&reasona._anon_0._M_allocated_capacity + 1);
};

// Line 1187: range 0000000017568ACE-0000000017568CE1
int32_t __cdecl ItemStore::checkSubItem(ItemStore *const this, uint64_t guid)
{
  unsigned __int64 p_M_len; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 (__fastcall **v5)(ItemStore *const, __int64); // rax
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<long unsigned int> __a; // [rsp+27h] [rbp-99h] BYREF
  std::initializer_list<long unsigned int> __l; // [rsp+28h] [rbp-98h] BYREF

  p_M_len = (unsigned __int64)&__l._M_len;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      p_M_len = v3;
  }
  *(_QWORD *)p_M_len = 1102416563LL;
  *(_QWORD *)(p_M_len + 8) = "1 32 24 13 guid_vec:1188";
  *(_QWORD *)(p_M_len + 16) = ItemStore::checkSubItem;
  v4 = (_DWORD *)(p_M_len >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  __l._M_array = (std::initializer_list<long unsigned int>::iterator)guid;
  std::allocator<unsigned long>::allocator(&__a);
  std::vector<unsigned long>::vector(
    (std::vector<long unsigned int> *const)(p_M_len + 32),
    (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__l),
    &__a);
  std::allocator<unsigned long>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (__int64 (__fastcall **)(ItemStore *const, __int64))(this->_vptr_ItemStore + 20);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (*v5)(this, p_M_len + 32);
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(p_M_len + 32));
  result = v6;
  if ( &__l._M_len == (std::initializer_list<long unsigned int>::size_type *)p_M_len )
  {
    *(_QWORD *)((p_M_len >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_len >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_len = 1172321806LL;
    *(_QWORD *)((p_M_len >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_len >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1193: range 0000000017568CE2-0000000017569E7F
int32_t __cdecl ItemStore::checkSubItemBatch(ItemStore *const this, const std::vector<long unsigned int> *guid_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> >::reference v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // r15d
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool isWeaponSystemClosed; // r15
  FeatureSwitchMgr *v16; // r15
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t v18; // eax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  int v29; // r15d
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  unsigned __int64 v36; // rdx
  common::milog::MiLogStream *v37; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  bool isReliquarySystemClosed; // r15
  FeatureSwitchMgr *p_feature_switch_mgr; // r15
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v48; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  int v58; // r15d
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  common::milog::MiLogStream *v60; // r14
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  unsigned __int64 v65; // rdx
  common::milog::MiLogStream *v66; // r14
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  common::milog::MiLogStream *v72; // r14
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v77; // rax
  int32_t result; // eax
  unsigned int Uid; // [rsp+28h] [rbp-F8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-E8h] BYREF
  unsigned __int64 Guid; // [rsp+40h] [rbp-E0h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v85; // [rsp+50h] [rbp-D0h] BYREF
  char v86[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 9 guid:1194 64 16 13 item_ptr:1196 96 16 14 equip_ptr:1256";
  *(_QWORD *)(v3 + 16) = ItemStore::checkSubItemBatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  __for_range = guid_vec;
  __for_begin._M_current = std::vector<unsigned long>::begin(guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v3 + 32) = *v6;
    ItemStore::findItem((ItemStore *const)(v3 + 64), (uint64_t)this, *(_QWORD *)(v3 + 32));
    if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/item_store.cpp",
        "checkSubItemBatch",
        1199);
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v85,
             (const char (*)[22])"findItem failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v85);
      v2 = -1;
      v10 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = (unsigned __int64)(v11->_vptr_Item + 9);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12)(v11);
      if ( v13 == 3 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 96));
        v43 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        isReliquarySystemClosed = FeatureSwitchMgr::isReliquarySystemClosed(&v43->feature_switch_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
        if ( isReliquarySystemClosed )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/item/item_store.cpp",
            "checkSubItemBatch",
            1247);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v85,
            (const char (*)[40])"[FEATURE_SWITCH] ReliquarySystem closed");
          common::milog::MiLogStream::~MiLogStream(&v85);
          v2 = 142;
LABEL_63:
          v10 = 0;
          goto LABEL_68;
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 96));
        p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->feature_switch_mgr;
        v46 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        ItemId = Item::getItemId(v46);
        LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isReliquaryClosed(p_feature_switch_mgr, ItemId);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
        if ( (_BYTE)p_feature_switch_mgr )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/item/item_store.cpp",
            "checkSubItemBatch",
            1252);
          v48 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v85,
                  (const char (*)[43])"[FEATURE_SWITCH] ReliquarySystem item_id: ");
          v49 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          val = Item::getItemId(v49);
          v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &val);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v50, (const char (*)[8])" closed");
          common::milog::MiLogStream::~MiLogStream(&v85);
          v2 = 142;
          goto LABEL_63;
        }
        std::dynamic_pointer_cast<Equip,Item>((const std::shared_ptr<Item> *)(v3 + 96));
        if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/item_store.cpp",
            "checkSubItemBatch",
            1259);
          v51 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v85,
                  (const char (*)[34])"dynamic_pointer_cast failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &Uid);
          v53 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v52, (const char (*)[10])" item_id:");
          v54 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          val = Item::getItemId(v54);
          v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &val);
          v56 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v55, (const char (*)[7])" guid:");
          v57 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Guid = Item::getGuid(v57);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v56, &Guid);
          common::milog::MiLogStream::~MiLogStream(&v85);
          v2 = -1;
          v58 = 0;
        }
        else
        {
          v59 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( Equip::getIsLocked(v59) )
          {
            common::milog::MiLogStream::create(
              &v85,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/item/item_store.cpp",
              "checkSubItemBatch",
              1267);
            v60 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v85,
                    (const char (*)[26])"Reliquary is locked, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &val);
            v62 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v61, (const char (*)[7])" guid:");
            v63 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            Guid = Item::getGuid(v63);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v62, &Guid);
            common::milog::MiLogStream::~MiLogStream(&v85);
            v2 = 691;
            v58 = 0;
          }
          else
          {
            v64 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v65 = (unsigned __int64)(v64->_vptr_Item + 11);
            if ( *(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v65)(v64) )
            {
              common::milog::MiLogStream::create(
                &v85,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/item/item_store.cpp",
                "checkSubItemBatch",
                1273);
              v66 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      &v85,
                      (const char (*)[36])"item_ptr->checkConsume failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(this->player_);
              v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &Uid);
              v68 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v67, (const char (*)[7])" guid:");
              v69 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v68,
                      (const unsigned __int64 *)(v3 + 32));
              v70 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v69,
                      (const char (*)[10])" item_id:");
              v71 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              val = Item::getItemId(v71);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &val);
              common::milog::MiLogStream::~MiLogStream(&v85);
              v2 = -1;
              v58 = 0;
            }
            else
            {
              v58 = 1;
            }
          }
        }
        std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 96));
        if ( v58 != 1 )
          goto LABEL_63;
        goto LABEL_67;
      }
      if ( v13 == 4 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 96));
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        isWeaponSystemClosed = FeatureSwitchMgr::isWeaponSystemClosed(&v14->feature_switch_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
        if ( isWeaponSystemClosed )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/item/item_store.cpp",
            "checkSubItemBatch",
            1210);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v85,
            (const char (*)[37])"[FEATURE_SWITCH] WeaponSystem closed");
          common::milog::MiLogStream::~MiLogStream(&v85);
          v2 = 142;
LABEL_40:
          v10 = 0;
          goto LABEL_68;
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 96));
        v16 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->feature_switch_mgr;
        v17 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v18 = Item::getItemId(v17);
        LOBYTE(v16) = FeatureSwitchMgr::isWeaponClosed(v16, v18);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
        if ( (_BYTE)v16 )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/item/item_store.cpp",
            "checkSubItemBatch",
            1215);
          v19 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v85,
                  (const char (*)[40])"[FEATURE_SWITCH] WeaponSystem item_id: ");
          v20 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          val = Item::getItemId(v20);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" closed");
          common::milog::MiLogStream::~MiLogStream(&v85);
          v2 = 142;
          goto LABEL_40;
        }
        std::dynamic_pointer_cast<Equip,Item>((const std::shared_ptr<Item> *)(v3 + 96));
        if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/item_store.cpp",
            "checkSubItemBatch",
            1222);
          v22 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v85,
                  (const char (*)[34])"dynamic_pointer_cast failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &Uid);
          v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" item_id:");
          v25 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          val = Item::getItemId(v25);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
          v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])" guid:");
          v28 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Guid = Item::getGuid(v28);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v27, &Guid);
          common::milog::MiLogStream::~MiLogStream(&v85);
          v2 = -1;
          v29 = 0;
        }
        else
        {
          v30 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( Equip::getIsLocked(v30) )
          {
            common::milog::MiLogStream::create(
              &v85,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/item/item_store.cpp",
              "checkSubItemBatch",
              1230);
            v31 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v85,
                    (const char (*)[23])"Weapon is locked, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
            v33 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])" guid:");
            v34 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            Guid = Item::getGuid(v34);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v33, &Guid);
            common::milog::MiLogStream::~MiLogStream(&v85);
            v2 = 691;
            v29 = 0;
          }
          else
          {
            v35 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v36 = (unsigned __int64)(v35->_vptr_Item + 11);
            if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v36)(v35) )
            {
              common::milog::MiLogStream::create(
                &v85,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/item/item_store.cpp",
                "checkSubItemBatch",
                1236);
              v37 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      &v85,
                      (const char (*)[36])"item_ptr->checkConsume failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(this->player_);
              v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &Uid);
              v39 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v38, (const char (*)[7])" guid:");
              v40 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v39,
                      (const unsigned __int64 *)(v3 + 32));
              v41 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v40,
                      (const char (*)[10])" item_id:");
              v42 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              val = Item::getItemId(v42);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
              common::milog::MiLogStream::~MiLogStream(&v85);
              v2 = -1;
              v29 = 0;
            }
            else
            {
              v29 = 1;
            }
          }
        }
        std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 96));
        if ( v29 != 1 )
          goto LABEL_40;
LABEL_67:
        v10 = 1;
        goto LABEL_68;
      }
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "checkSubItemBatch",
        1281);
      v72 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v85,
              (const char (*)[52])"unsupported operation del material using guid, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, &Uid);
      v74 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v73, (const char (*)[7])" guid:");
      v75 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v74,
              (const unsigned __int64 *)(v3 + 32));
      v76 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v75, (const char (*)[10])" item_id:");
      v77 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      val = Item::getItemId(v77);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, &val);
      common::milog::MiLogStream::~MiLogStream(&v85);
      v2 = -1;
      v10 = 0;
    }
LABEL_68:
    std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 64));
    if ( v10 != 1 )
      goto LABEL_71;
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  v2 = 0;
LABEL_71:
  result = v2;
  if ( v86 == (char *)v3 )
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

// Line 1293: range 0000000017569E80-000000001756A117
std::vector<SubItemResult> *__cdecl ItemStore::subItem(
        std::vector<SubItemResult> *retstr,
        ItemStore *const this,
        uint64_t guid,
        const SubItemReason *reason)
{
  unsigned __int64 p_M_len; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(std::vector<SubItemResult> *, ItemStore *const, unsigned __int64, const SubItemReason *); // r8
  std::allocator<long unsigned int> __a; // [rsp+37h] [rbp-99h] BYREF
  std::initializer_list<long unsigned int> __l; // [rsp+38h] [rbp-98h] BYREF

  p_M_len = (unsigned __int64)&__l._M_len;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      p_M_len = v5;
  }
  *(_QWORD *)p_M_len = 1102416563LL;
  *(_QWORD *)(p_M_len + 8) = "1 32 24 13 guid_vec:1294";
  *(_QWORD *)(p_M_len + 16) = ItemStore::subItem;
  v6 = (_DWORD *)(p_M_len >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  __l._M_array = (std::initializer_list<long unsigned int>::iterator)guid;
  std::allocator<unsigned long>::allocator(&__a);
  std::vector<unsigned long>::vector(
    (std::vector<long unsigned int> *const)(p_M_len + 32),
    (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__l),
    &__a);
  std::allocator<unsigned long>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_ItemStore + 22);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = *(void (__fastcall **)(std::vector<SubItemResult> *, ItemStore *const, unsigned __int64, const SubItemReason *))v7;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  v8(retstr, this, p_M_len + 32, reason);
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(p_M_len + 32));
  if ( &__l._M_len == (std::initializer_list<long unsigned int>::size_type *)p_M_len )
  {
    *(_QWORD *)((p_M_len >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_len >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_len = 1172321806LL;
    *(_QWORD *)((p_M_len >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_len >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 1299: range 000000001756A118-000000001756A740
std::vector<SubItemResult> *__cdecl ItemStore::subItemBatch(
        std::vector<SubItemResult> *retstr,
        ItemStore *const this,
        const std::vector<long unsigned int> *guid_vec,
        const SubItemReason *reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> >::reference v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  SubItemResult *v15; // rdx
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint64_t Guid; // rcx
  proto::ActionReasonType reason_type; // r14d
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  unsigned int Uid; // [rsp+20h] [rbp-120h] BYREF
  unsigned int val; // [rsp+24h] [rbp-11Ch] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Item> p_item_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-F0h] BYREF
  char v35[208]; // [rsp+70h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 9 guid:1301 64 16 13 item_ptr:1303 96 24 15 sub_result:1316";
  *(_QWORD *)(v4 + 16) = ItemStore::subItemBatch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  std::vector<SubItemResult>::vector(retstr);
  __for_range = guid_vec;
  __for_begin._M_current = std::vector<unsigned long>::begin(guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v4 + 32) = *v7;
    ItemStore::findItem((ItemStore *const)(v4 + 64), (uint64_t)this, *(_QWORD *)(v4 + 32));
    if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/item_store.cpp",
        "subItemBatch",
        1306);
      v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v34,
             (const char (*)[22])"findItem failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, (const unsigned __int64 *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    else
    {
      v11 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = (unsigned __int64)(v11->_vptr_Item + 9);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12)(v11)
         - 3 > 1 )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/item_store.cpp",
          "subItemBatch",
          1329);
        v19 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v34,
                (const char (*)[52])"unsupported operation del material using guid, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &Uid);
        v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" guid:");
        v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v21,
                (const unsigned __int64 *)(v4 + 32));
        v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" item_id:");
        v24 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        val = Item::getItemId(v24);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      else
      {
        *(_QWORD *)(v4 + 96) = 0LL;
        *(_QWORD *)(v4 + 104) = 0LL;
        *(_QWORD *)(v4 + 112) = 0LL;
        *(_DWORD *)(v4 + 108) = 1;
        v13 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        *(_QWORD *)(v4 + 96) = Item::getGuid(v13);
        v14 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        *(_DWORD *)(v4 + 104) = Item::getItemId(v14);
        v15 = std::move<SubItemResult &>((SubItemResult *)(v4 + 96));
        std::vector<SubItemResult>::emplace_back<SubItemResult>(retstr, v15, v15);
        v16 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        Guid = Item::getGuid(v16);
        ItemStore::delItem(this, Guid, 1);
        if ( *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(reason);
        }
        reason_type = reason->reason_type;
        std::shared_ptr<Item>::shared_ptr(&p_item_ptr, (const std::shared_ptr<Item> *)(v4 + 64));
        ItemStore::logAddEquip(this, &p_item_ptr, 0, reason_type, ITEM_LIMIT_NONE);
        std::shared_ptr<Item>::~shared_ptr(&p_item_ptr);
      }
    }
    std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v4 + 64));
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  if ( v35 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 1340: range 000000001756A742-000000001756AEB2
__int64 __fastcall ItemStore::delItem(ItemStore *const this, uint64_t guid, bool is_notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Item *v9; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::set<long unsigned int> *v11; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<proto::StoreItemDelNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  __int64 (__fastcall **v22)(ItemStore *const); // rax
  proto::StoreType v23; // eax
  std::__shared_ptr_access<proto::StoreItemDelNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  Player *player; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-108h] BYREF
  std::shared_ptr<proto::StoreItemDelNotify> __r; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 14 item_type:1352 64 8 9 guid:1339 96 16 13 item_ptr:1341 128 16 15 notify_ptr:1374";
  *(_QWORD *)(v3 + 16) = ItemStore::delItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_QWORD *)(v3 + 64) = guid;
  ItemStore::findItem((ItemStore *const)(v3 + 96), (uint64_t)this, *(_QWORD *)(v3 + 64));
  if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/item_store.cpp",
      "delItem",
      1344);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v31,
           (const char (*)[37])"trying to delete nonexist item, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, (const unsigned __int64 *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v31);
    goto LABEL_42;
  }
  v9 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  Item::resetItemOwner(v9);
  std::map<unsigned long,std::shared_ptr<Item>>::erase(
    &this->item_map_,
    (const std::map<long unsigned int,std::shared_ptr<Item>>::key_type *)(v3 + 64));
  v10 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  val = Item::getItemId(v10);
  v11 = std::map<unsigned int,std::set<unsigned long>>::operator[](&this->item_id_map_, &val);
  std::set<unsigned long>::erase(v11, (const std::set<long unsigned int>::key_type *)(v3 + 64));
  v12 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = (unsigned __int64)(v12->_vptr_Item + 9);
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 48) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v13)(v12);
  v14 = *(_DWORD *)(v3 + 48);
  if ( v14 == 6 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->total_furniture_num_);
    }
    --this->total_furniture_num_;
    goto LABEL_34;
  }
  if ( v14 > 6 )
    goto LABEL_31;
  if ( v14 == 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->total_weapon_num_);
    }
    --this->total_weapon_num_;
    goto LABEL_34;
  }
  if ( v14 > 4 )
    goto LABEL_31;
  if ( v14 == 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->total_material_num_);
    }
    --this->total_material_num_;
    goto LABEL_34;
  }
  if ( v14 == 3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->total_reliquary_num_);
    }
    --this->total_reliquary_num_;
  }
  else
  {
LABEL_31:
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/item_store.cpp",
      "delItem",
      1368);
    v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v31,
            (const char (*)[19])"invalid item_type:");
    v16 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(
            v15,
            (const data::ItemType *)(v3 + 48));
    v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" guid:");
    v18 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    v29 = Item::getGuid(v18);
    v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &v29);
    v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
LABEL_34:
  if ( is_notify )
  {
    common::tools::perf::make_shared<proto::StoreItemDelNotify>();
    v21 = std::__shared_ptr_access<proto::StoreItemDelNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::StoreItemDelNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = (__int64 (__fastcall **)(ItemStore *const))(this->_vptr_ItemStore + 5);
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v23 = (unsigned int)(*v22)(this);
    proto::StoreItemDelNotify::set_store_type(v21, v23);
    v24 = std::__shared_ptr_access<proto::StoreItemDelNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::StoreItemDelNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    proto::StoreItemDelNotify::add_guid_list(v24, *(_QWORD *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::StoreItemDelNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::StoreItemDelNotify>::~shared_ptr((std::shared_ptr<proto::StoreItemDelNotify> *const)(v3 + 128));
  }
LABEL_42:
  std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 96));
  result = 0LL;
  if ( v32 == (char *)v3 )
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

// Line 1384: range 000000001756AEB4-000000001756B621
int32_t __cdecl ItemStore::emplaceItem(ItemStore *const this, ItemPtr *p_item_ptr, bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r13
  int32_t result; // eax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rdx
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 *v11; // rcx
  std::shared_ptr<Item> *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<long unsigned int const,std::shared_ptr<Item> > >,bool> v13; // rax
  common::milog::MiLogStream *v14; // r13
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r13
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Item *v18; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::set<long unsigned int> *v20; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int v22; // eax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r13
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r13
  Item *v29; // rax
  unsigned int val; // [rsp+24h] [rbp-ACh] BYREF
  std::set<long unsigned int>::value_type __x; // [rsp+28h] [rbp-A8h] BYREF
  PlayerPtr p_player_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-90h] BYREF
  char v35[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 item_type:1391";
  *(_QWORD *)(v3 + 16) = ItemStore::emplaceItem;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<Item>(p_item_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/item_store.cpp",
      "emplaceItem",
      1387);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v34,
           (const char (*)[38])"emplaceItem failed pointer null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = -1;
    goto LABEL_43;
  }
  v8 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = (unsigned __int64)(v8->_vptr_Item + 9);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 32) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v9)(v8);
  v10 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
  __x = Item::getGuid(v10);
  v13 = std::map<unsigned long,std::shared_ptr<Item>>::emplace<unsigned long,std::shared_ptr<Item>&>(
          &this->item_map_,
          &__x,
          p_item_ptr,
          v11,
          v12);
  if ( !v13.second )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/item/item_store.cpp",
      "emplaceItem",
      1394);
    v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v34,
            (const char (*)[21])"duplicate item, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" guid:");
    v17 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
    __x = Item::getGuid(v17);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v16, &__x);
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = -1;
    goto LABEL_43;
  }
  v18 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Player>((Player *)&p_player_ptr);
  Item::setItemOwner(v18, &p_player_ptr);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  v19 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
  val = Item::getItemId(v19);
  v20 = std::map<unsigned int,std::set<unsigned long>>::operator[](&this->item_id_map_, &val);
  v21 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
  __x = Item::getGuid(v21);
  std::set<unsigned long>::insert(v20, &__x);
  v22 = *(_DWORD *)(v3 + 32);
  if ( v22 == 6 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->total_furniture_num_);
    }
    ++this->total_furniture_num_;
    goto LABEL_40;
  }
  if ( v22 > 6 )
    goto LABEL_37;
  if ( v22 == 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->total_weapon_num_);
    }
    ++this->total_weapon_num_;
    goto LABEL_40;
  }
  if ( v22 > 4 )
    goto LABEL_37;
  if ( v22 == 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->total_material_num_);
    }
    ++this->total_material_num_;
    ItemStore::checkMaterialItemNumAlarm(this);
    goto LABEL_40;
  }
  if ( v22 == 3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->total_reliquary_num_);
    }
    ++this->total_reliquary_num_;
  }
  else
  {
LABEL_37:
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/item_store.cpp",
      "emplaceItem",
      1417);
    v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v34,
            (const char (*)[19])"invalid item_type:");
    v24 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(
            v23,
            (const data::ItemType *)(v3 + 32));
    v25 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])" guid:");
    v26 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
    __x = Item::getGuid(v26);
    v27 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v25, &__x);
    v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v27, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
LABEL_40:
  if ( is_notify )
  {
    v29 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
    Item::notifyItemChange(v29);
  }
  result = 0;
LABEL_43:
  if ( v35 == (char *)v3 )
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

// Line 1431: range 000000001756B622-000000001756B774
uint32_t __cdecl ItemStore::getTotalNumByItemType(const ItemStore *const this, data::ItemType item_type)
{
  if ( item_type == ITEM_FURNITURE )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->total_furniture_num_);
    }
    return this->total_furniture_num_;
  }
  else
  {
    if ( item_type > ITEM_FURNITURE )
      return 0;
    if ( item_type == ITEM_WEAPON )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->total_weapon_num_);
      }
      return this->total_weapon_num_;
    }
    if ( item_type > ITEM_WEAPON )
      return 0;
    if ( item_type == ITEM_MATERIAL )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->total_material_num_);
      }
      return this->total_material_num_;
    }
    else
    {
      if ( item_type != ITEM_RELIQUARY )
        return 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->total_reliquary_num_);
      }
      return this->total_reliquary_num_;
    }
  }
};

// Line 1450: range 000000001756B776-000000001756BB50
void __cdecl ItemStore::logAddMaterial(
        ItemStore *const this,
        uint32_t material_id,
        uint32_t old_count,
        uint32_t new_count,
        proto::ActionReasonType reason_type,
        data::ItemLimitType limit_type)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *player; // r14
  const data::MaterialExcelConfig *material_excel_config_ptr; // [rsp+20h] [rbp-C0h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-B0h] BYREF
  std::shared_ptr<google::protobuf::Message> v24; // [rsp+40h] [rbp-A0h] BYREF
  char v25[144]; // [rsp+50h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 16 25 add_material_log_ptr:1451 64 16 29 add_material_ext_log_ptr:1463";
  *(_QWORD *)(v6 + 16) = ItemStore::logAddMaterial;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862722] = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyAddMaterial>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyAddMaterial::set_material_id(v9, material_id);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  material_excel_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                &v10->design_config.txt_config_mgr.material_config_mgr,
                                material_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v24);
  if ( material_excel_config_ptr )
  {
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&material_excel_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_excel_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_excel_config_ptr->material_type >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(&material_excel_config_ptr->material_type);
    }
    proto_log::PlayerLogBodyAddMaterial::set_material_type(v11, material_excel_config_ptr->material_type);
  }
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyAddMaterial::set_add_num(v12, new_count - (unsigned __int64)old_count);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyAddMaterial::set_left_num(v13, new_count);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyAddMaterial::set_reason(v14, reason_type);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyExtAddMaterial>();
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodyExtAddMaterial::set_reason_type(v15, reason_type);
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtAddMaterial,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodyExtAddMaterial::set_item_limit_type(v16, limit_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyExtAddMaterial,void>(
    &v24,
    (const std::shared_ptr<proto_log::PlayerLogBodyExtAddMaterial> *)(v6 + 64));
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAddMaterial,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyAddMaterial> *)(v6 + 32));
  Player::printStatLog(player, &p_body_ptr, &v24, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v24);
  std::shared_ptr<proto_log::PlayerLogBodyExtAddMaterial>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyExtAddMaterial> *const)(v6 + 64));
  std::shared_ptr<proto_log::PlayerLogBodyAddMaterial>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAddMaterial> *const)(v6 + 32));
  if ( v25 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1472: range 000000001756BB52-000000001756C3A9
void __cdecl ItemStore::logAddEquip(
        ItemStore *const this,
        ItemPtr *p_item_ptr,
        uint32_t num_after,
        proto::ActionReasonType reason_type,
        data::ItemLimitType limit_type)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // eax
  PlayerBasicComp *v11; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  proto_log::WeaponLog *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  google::protobuf::int32 v16; // edx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *v20; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  proto_log::RelicLog *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  google::protobuf::int32 v26; // edx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  Player *player; // r14
  std::string v31; // [rsp+0h] [rbp-110h]
  google::protobuf::uint32 limit_typea; // [rsp+4h] [rbp-10Ch]
  google::protobuf::uint32 limit_typeb; // [rsp+4h] [rbp-10Ch]
  __int64 reason_typea; // [rsp+8h] [rbp-108h]
  __int64 reason_typeb; // [rsp+8h] [rbp-108h]
  ItemStore *thisa; // [rsp+18h] [rbp-F8h]
  ItemStore *thisb; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v40; // [rsp+40h] [rbp-D0h] BYREF
  char v41[176]; // [rsp+60h] [rbp-B0h] BYREF

  *(&v31._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v31._anon_0._M_allocated_capacity = (std::string::size_type)p_item_ptr;
  HIDWORD(v31._M_string_length) = num_after;
  LODWORD(v31._M_string_length) = reason_type;
  HIDWORD(v31._M_dataplus._M_p) = limit_type;
  v5 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 1 11 holder:1506 64 16 18 reliquary_ptr:1500 96 16 22 relic_add_log_ptr:1507";
  *(_QWORD *)(v5 + 16) = ItemStore::logAddEquip;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -219021312;
  v7[536862723] = -202178560;
  if ( std::operator==<Item>(0LL, p_item_ptr) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/item_store.cpp",
      "logAddEquip",
      1475);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v40, (const char (*)[17])"item_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v40);
  }
  else
  {
    v8 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(v8->_vptr_Item + 9);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v9)(v8);
    if ( v10 == 3 )
    {
      std::dynamic_pointer_cast<Reliquary,Item>((const std::shared_ptr<Item> *)(v5 + 64));
      if ( std::operator==<Reliquary>(0LL, (const std::shared_ptr<Reliquary> *)(v5 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/item_store.cpp",
          "logAddEquip",
          1503);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v40,
          (const char (*)[22])"reliquary_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v40);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v40, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x6AFu, v31);
        std::string::~string(&v40);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyRelicAdd>();
        v22 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        v24 = proto_log::PlayerLogBodyRelicAdd::mutable_relic(v23);
        Reliquary::getRelicLog(v22, v24);
        v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        if ( HIDWORD(reason_typeb) )
          v26 = 1;
        else
          v26 = -1;
        proto_log::PlayerLogBodyRelicAdd::set_relic_add(v25, v26);
        v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        proto_log::PlayerLogBodyRelicAdd::set_relic_num(v27, HIDWORD(reason_typeb));
        v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        proto_log::PlayerLogBodyRelicAdd::set_reason_type(v28, reason_typeb);
        v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRelicAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        proto_log::PlayerLogBodyRelicAdd::set_item_limit_type(v29, limit_typeb);
        if ( *(_BYTE *)(((unsigned __int64)&thisb->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = thisb->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRelicAdd,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyRelicAdd> *)(v5 + 96));
        Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        std::shared_ptr<proto_log::PlayerLogBodyRelicAdd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRelicAdd> *const)(v5 + 96));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
      }
      std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(v5 + 64));
    }
    else if ( v10 == 4 )
    {
      std::dynamic_pointer_cast<Weapon,Item>((const std::shared_ptr<Item> *)(v5 + 64));
      if ( std::operator==<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(v5 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/item_store.cpp",
          "logAddEquip",
          1485);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v40, (const char (*)[19])"weapon_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v40);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v11 = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v40, v11);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x6A5u, v31);
        std::string::~string(&v40);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyWeaponAdd>();
        v12 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        v14 = proto_log::PlayerLogBodyWeaponAdd::mutable_weapon(v13);
        Weapon::getWeaponLog(v12, v14);
        v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        if ( HIDWORD(reason_typea) )
          v16 = 1;
        else
          v16 = -1;
        proto_log::PlayerLogBodyWeaponAdd::set_weapon_add(v15, v16);
        v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        proto_log::PlayerLogBodyWeaponAdd::set_weapon_num(v17, HIDWORD(reason_typea));
        v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        proto_log::PlayerLogBodyWeaponAdd::set_reason_type(v18, reason_typea);
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWeaponAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        proto_log::PlayerLogBodyWeaponAdd::set_item_limit_type(v19, limit_typea);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v20 = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWeaponAdd,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyWeaponAdd> *)(v5 + 96));
        Player::printStatLog(v20, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        std::shared_ptr<proto_log::PlayerLogBodyWeaponAdd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWeaponAdd> *const)(v5 + 96));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
      }
      std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v5 + 64));
    }
  }
  if ( v41 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1523: range 000000001756C3AA-000000001756C669
void __cdecl ItemStore::logAddFurniture(
        ItemStore *const this,
        uint32_t furniture_id,
        uint32_t old_count,
        uint32_t new_count,
        proto::ActionReasonType reason_type)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  PlayerHomeComp *HomeComp; // rax
  uint32_t HomeLevel; // eax
  Player *player; // r14
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-90h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-80h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 26 add_furniture_log_ptr:1524";
  *(_QWORD *)(v5 + 16) = ItemStore::logAddFurniture;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyAddFurniture>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  proto_log::PlayerLogBodyAddFurniture::set_furniture_id(v8, furniture_id);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  proto_log::PlayerLogBodyAddFurniture::set_reason(v9, reason_type);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  proto_log::PlayerLogBodyAddFurniture::set_add_num(v10, new_count - (unsigned __int64)old_count);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  proto_log::PlayerLogBodyAddFurniture::set_left_num(v11, new_count);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddFurniture,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  HomeLevel = PlayerHomeComp::getHomeLevel(HomeComp);
  proto_log::PlayerLogBodyAddFurniture::set_home_level(v12, HomeLevel);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAddFurniture,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyAddFurniture> *)(v5 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyAddFurniture>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAddFurniture> *const)(v5 + 32));
  if ( v21 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1536: range 000000001756C66A-000000001756CCA0
void __cdecl ItemStore::checkMaterialItemNumAlarm(ItemStore *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  char v4; // r14
  uint32_t total_material_num; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  char v7; // r15
  Json::Value_0 *v8; // rax
  Json::Value_0 *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned int AlarmMaterialItemLimit; // eax
  Json::Value_0 *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned int MaterialItemLimit; // eax
  Json::Value_0 *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned int HardMaterialItemLimit; // eax
  Json::Value_0 *v18; // rax
  PlayerItemComp *ItemComp; // rax
  std::shared_ptr<Config> v20; // [rsp+10h] [rbp-F0h] BYREF
  Json::Value_0 other; // [rsp+20h] [rbp-E0h] BYREF
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 9 jval:1541";
  *(_QWORD *)(v1 + 16) = ItemStore::checkMaterialItemNumAlarm;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  v4 = 0;
  if ( *(char *)(((unsigned __int64)&this->is_material_item_num_alarmed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_material_item_num_alarmed_);
  if ( this->is_material_item_num_alarmed_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_material_num_);
  }
  total_material_num = this->total_material_num_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v4 = 1;
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  if ( total_material_num <= ConstValueExcelConfigMgr::getAlarmMaterialItemLimit(&v6->design_config.txt_config_mgr.const_value_config_mgr) )
LABEL_10:
    v7 = 1;
  else
    v7 = 0;
  if ( v4 )
    std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( !v7 )
  {
    Json::Value::Value(v1 + 48, 0LL);
    Json::Value::Value((Json::Value *)&other, "material_item_num");
    v8 = Json::Value::operator[]((Json::Value_0 *const)(v1 + 48), "type");
    Json::Value::operator=(v8, &other);
    Json::Value::~Value(&other);
    if ( *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->total_material_num_);
    }
    Json::Value::Value((Json::Value *)&other, this->total_material_num_);
    v9 = Json::Value::operator[]((Json::Value_0 *const)(v1 + 48), "total_material_num");
    Json::Value::operator=(v9, &other);
    Json::Value::~Value(&other);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    AlarmMaterialItemLimit = ConstValueExcelConfigMgr::getAlarmMaterialItemLimit(&v10->design_config.txt_config_mgr.const_value_config_mgr);
    Json::Value::Value((Json::Value *)&other, AlarmMaterialItemLimit);
    v12 = Json::Value::operator[]((Json::Value_0 *const)(v1 + 48), "alarm_material_limit_limit");
    Json::Value::operator=(v12, &other);
    Json::Value::~Value(&other);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    MaterialItemLimit = ConstValueExcelConfigMgr::getMaterialItemLimit(&v13->design_config.txt_config_mgr.const_value_config_mgr);
    Json::Value::Value((Json::Value *)&other, MaterialItemLimit);
    v15 = Json::Value::operator[]((Json::Value_0 *const)(v1 + 48), "soft_material_item_limit");
    Json::Value::operator=(v15, &other);
    Json::Value::~Value(&other);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    HardMaterialItemLimit = ConstValueExcelConfigMgr::getHardMaterialItemLimit(&v16->design_config.txt_config_mgr.const_value_config_mgr);
    Json::Value::Value((Json::Value *)&other, HardMaterialItemLimit);
    v18 = Json::Value::operator[]((Json::Value_0 *const)(v1 + 48), "hard_material_item_limit");
    Json::Value::operator=(v18, &other);
    Json::Value::~Value(&other);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    PlayerItemComp::asyncSendAlarmToPlatform(ItemComp, (Json::Value *)(v1 + 48));
    if ( *(char *)(((unsigned __int64)&this->is_material_item_num_alarmed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_material_item_num_alarmed_, v1 + 48, &this->is_material_item_num_alarmed_);
    this->is_material_item_num_alarmed_ = 1;
    Json::Value::~Value((Json::Value_0 *const)(v1 + 48));
  }
  if ( v22 == (char *)v1 )
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
