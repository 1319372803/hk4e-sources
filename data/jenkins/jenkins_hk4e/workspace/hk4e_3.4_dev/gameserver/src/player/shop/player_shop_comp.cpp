// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/shop/player_shop_comp.cpp

// Line 42: range 0000000013E816CC-0000000013E817D0
int32_t __cdecl ShopGoodsRecord::fromBin(
        ShopGoodsRecord *const this,
        const proto::ShopGoodsRecordBin *goods_record_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  bool v4; // dl
  uint32_t v5; // ecx
  char v6; // dl
  bool v7; // dl
  uint32_t buy_time; // ecx
  char v9; // dl
  bool v10; // dl
  const proto::ShopGoodsRecordBin *goods_record_bina; // [rsp+0h] [rbp-10h]

  goods_record_bina = goods_record_bin;
  v2 = proto::ShopGoodsRecordBin::goods_id(goods_record_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(goods_record_bin) = v3 != 0;
  v4 = v3 != 0 && (char)(((unsigned __int8)this & 7) + 3) >= v3;
  if ( v4 )
    __asan_report_store4(this, goods_record_bin, v4);
  this->goods_id = v2;
  v5 = proto::ShopGoodsRecordBin::bought_num(goods_record_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->bought_num >> 3) + 0x7FFF8000);
  LOBYTE(goods_record_bin) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->bought_num, goods_record_bin, v7);
  this->bought_num = v5;
  buy_time = proto::ShopGoodsRecordBin::last_buy_time(goods_record_bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->last_buy_time >> 3) + 0x7FFF8000);
  LOBYTE(goods_record_bin) = v9 != 0;
  v10 = v9 != 0 && (char)((((_BYTE)this + 8) & 7) + 3) >= v9;
  if ( v10 )
    __asan_report_store4(&this->last_buy_time, goods_record_bin, v10);
  this->last_buy_time = buy_time;
  return 0;
};

// Line 50: range 0000000013E817D2-0000000013E818D3
int32_t __cdecl ShopGoodsRecord::toBin(const ShopGoodsRecord *const this, proto::ShopGoodsRecordBin *goods_record_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::ShopGoodsRecordBin::set_goods_id(goods_record_bin, this->goods_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->bought_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bought_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->bought_num);
  }
  proto::ShopGoodsRecordBin::set_bought_num(goods_record_bin, this->bought_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_buy_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_buy_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_buy_time);
  }
  proto::ShopGoodsRecordBin::set_last_buy_time(goods_record_bin, this->last_buy_time);
  return 0;
};

// Line 58: range 0000000013E818D4-0000000013E81DF6
int32_t __cdecl ShopRecord::fromBin(ShopRecord *const this, const proto::ShopRecordBin *shop_record_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t v5; // edx
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  ShopGoodsRecord *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  ShopGoodsRecord *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const proto::ShopRecordBin *shop_record_bina; // [rsp+0h] [rbp-C0h]
  google::protobuf::RepeatedPtrField<proto::ShopGoodsRecordBin>::const_iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::ShopGoodsRecordBin>::const_iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ShopGoodsRecordBin> *__for_range; // [rsp+20h] [rbp-A0h]
  const google::protobuf::RepeatedPtrField<proto::ShopGoodsRecordBin> *__for_range_0; // [rsp+28h] [rbp-98h]
  const proto::ShopGoodsRecordBin *goods_record_bin_0; // [rsp+30h] [rbp-90h]
  const proto::ShopGoodsRecordBin *goods_record_bin; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-80h] BYREF
  char v22[96]; // [rsp+60h] [rbp-60h] BYREF

  shop_record_bina = shop_record_bin;
  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 goods_id:78";
  *(_QWORD *)(v2 + 16) = ShopRecord::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::ShopRecordBin::shop_type(shop_record_bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(shop_record_bin) = v6 != 0;
    __asan_report_store4(this, shop_record_bin, v5);
  }
  this->shop_type = v5;
  __for_range = proto::ShopRecordBin::goods_record_list(shop_record_bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ShopGoodsRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ShopGoodsRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ShopGoodsRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    goods_record_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ShopGoodsRecordBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::ShopGoodsRecordBin::goods_id(goods_record_bin);
    if ( std::map<unsigned int,ShopGoodsRecord>::count(
           &this->goods_record_map,
           (const std::map<unsigned int,ShopGoodsRecord>::key_type *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "fromBin",
        65);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v21,
             (const char (*)[39])"[SHOP] goods_id duplicated, goods_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = -1;
      goto LABEL_21;
    }
    v9 = std::map<unsigned int,ShopGoodsRecord>::operator[](
           &this->goods_record_map,
           (const std::map<unsigned int,ShopGoodsRecord>::key_type *)(v2 + 32));
    if ( ShopGoodsRecord::fromBin(v9, goods_record_bin) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "fromBin",
        71);
      v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v21,
              (const char (*)[50])"[SHOP] ShopGoodsRecord fromBin failed, goods_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = -1;
      goto LABEL_21;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::ShopGoodsRecordBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::ShopRecordBin::history_goods_record_list(shop_record_bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ShopGoodsRecordBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ShopGoodsRecordBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ShopGoodsRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    goods_record_bin_0 = google::protobuf::internal::RepeatedPtrIterator<proto::ShopGoodsRecordBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::ShopGoodsRecordBin::goods_id(goods_record_bin_0);
    if ( std::map<unsigned int,ShopGoodsRecord>::count(
           &this->history_goods_record_map,
           (const std::map<unsigned int,ShopGoodsRecord>::key_type *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "fromBin",
        81);
      v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v21,
              (const char (*)[39])"[SHOP] goods_id duplicated, goods_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = -1;
      goto LABEL_21;
    }
    v12 = std::map<unsigned int,ShopGoodsRecord>::operator[](
            &this->history_goods_record_map,
            (const std::map<unsigned int,ShopGoodsRecord>::key_type *)(v2 + 32));
    if ( ShopGoodsRecord::fromBin(v12, goods_record_bin_0) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "fromBin",
        87);
      v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v21,
              (const char (*)[50])"[SHOP] ShopGoodsRecord fromBin failed, goods_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = -1;
      goto LABEL_21;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::ShopGoodsRecordBin const>::operator++(&__for_begin);
  }
  result = 0;
LABEL_21:
  if ( v22 == (char *)v2 )
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

// Line 95: range 0000000013E81DF8-0000000013E82109
int32_t __cdecl ShopRecord::toBin(const ShopRecord *const this, proto::ShopRecordBin *shop_record_bin)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v4; // rax
  std::map<unsigned int,ShopGoodsRecord>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<unsigned int,ShopGoodsRecord>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const std::map<unsigned int,ShopGoodsRecord> *__for_range; // [rsp+20h] [rbp-80h]
  const std::map<unsigned int,ShopGoodsRecord> *__for_range_0; // [rsp+28h] [rbp-78h]
  const std::pair<unsigned int const,ShopGoodsRecord> *v9; // [rsp+30h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,ShopGoodsRecord> >::type *goods_id_0; // [rsp+38h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,ShopGoodsRecord> >::type *goods_record_0; // [rsp+40h] [rbp-60h]
  proto::ShopGoodsRecordBin *goods_record_bin_0; // [rsp+48h] [rbp-58h]
  const std::pair<unsigned int const,ShopGoodsRecord> *v13; // [rsp+50h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,ShopGoodsRecord> >::type *goods_id; // [rsp+58h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,ShopGoodsRecord> >::type *goods_record; // [rsp+60h] [rbp-40h]
  proto::ShopGoodsRecordBin *goods_record_bin; // [rsp+68h] [rbp-38h]
  common::milog::MiLogStream v17; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::ShopRecordBin::set_shop_type(shop_record_bin, this->shop_type);
  __for_range = &this->goods_record_map;
  __for_begin._M_node = std::map<unsigned int,ShopGoodsRecord>::begin(&this->goods_record_map)._M_node;
  __for_end._M_node = std::map<unsigned int,ShopGoodsRecord>::end(&this->goods_record_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ShopGoodsRecord>>::operator*(&__for_begin);
    goods_id = std::get<0ul,unsigned int const,ShopGoodsRecord>(v13);
    goods_record = (std::tuple_element<1,const std::pair<unsigned int const,ShopGoodsRecord> >::type *)std::get<1ul,unsigned int const,ShopGoodsRecord>(v13);
    goods_record_bin = proto::ShopRecordBin::add_goods_record_list(shop_record_bin);
    if ( ShopGoodsRecord::toBin(goods_record, goods_record_bin) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "toBin",
        102);
      v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v17,
             (const char (*)[48])"[SHOP] ShopGoodsRecord toBin failed, goods_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, goods_id);
      common::milog::MiLogStream::~MiLogStream(&v17);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ShopGoodsRecord>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->history_goods_record_map;
  __for_begin._M_node = std::map<unsigned int,ShopGoodsRecord>::begin(&this->history_goods_record_map)._M_node;
  __for_end._M_node = std::map<unsigned int,ShopGoodsRecord>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ShopGoodsRecord>>::operator*(&__for_begin);
    goods_id_0 = std::get<0ul,unsigned int const,ShopGoodsRecord>(v9);
    goods_record_0 = (std::tuple_element<1,const std::pair<unsigned int const,ShopGoodsRecord> >::type *)std::get<1ul,unsigned int const,ShopGoodsRecord>(v9);
    goods_record_bin_0 = proto::ShopRecordBin::add_history_goods_record_list(shop_record_bin);
    if ( ShopGoodsRecord::toBin(goods_record_0, goods_record_bin_0) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "toBin",
        111);
      v4 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v17,
             (const char (*)[48])"[SHOP] ShopGoodsRecord toBin failed, goods_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, goods_id_0);
      common::milog::MiLogStream::~MiLogStream(&v17);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ShopGoodsRecord>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 119: range 0000000013E8210A-0000000013E824D7
int32_t __cdecl PlayerShopComp::fromBin(PlayerShopComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  ShopRecord *v9; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  google::protobuf::RepeatedPtrField<proto::ShopRecordBin>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::ShopRecordBin>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const proto::PlayerShopCompBin *proto_comp; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::ShopRecordBin> *__for_range; // [rsp+30h] [rbp-A0h]
  const proto::ShopRecordBin *shop_record_bin; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-90h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 shop_type:124";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_comp = proto::PlayerDataBin::shop_bin(player_data_bin);
  __for_range = proto::PlayerShopCompBin::shop_record_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ShopRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ShopRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ShopRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    shop_record_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ShopRecordBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::ShopRecordBin::shop_type(shop_record_bin);
    if ( std::map<unsigned int,ShopRecord>::count(
           &this->shop_record_map_,
           (const std::map<unsigned int,ShopRecord>::key_type *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "fromBin",
        127);
      v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v16,
             (const char (*)[35])"[SHOP] shop_type duplicated, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_9:
      val = Player::getUid(this->player_);
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" ,shop_type: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = -1;
      goto LABEL_16;
    }
    v9 = std::map<unsigned int,ShopRecord>::operator[](
           &this->shop_record_map_,
           (const std::map<unsigned int,ShopRecord>::key_type *)(v2 + 32));
    if ( ShopRecord::fromBin(v9, shop_record_bin) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "fromBin",
        133);
      v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v16,
             (const char (*)[40])"[SHOP] ShopRecord fromBin failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_9;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::ShopRecordBin const>::operator++(&__for_begin);
  }
  result = 0;
LABEL_16:
  if ( v17 == (char *)v2 )
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

// Line 142: range 0000000013E824D8-0000000013E826AF
int32_t __cdecl PlayerShopComp::toBin(PlayerShopComp *const this, proto::PlayerDataBin *player_data_bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,ShopRecord>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,ShopRecord>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::PlayerShopCompBin *proto_comp; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,ShopRecord> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,ShopRecord> *v11; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,ShopRecord> >::type *shop_type; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,ShopRecord> >::type *shop_record; // [rsp+50h] [rbp-40h]
  proto::ShopRecordBin *shop_record_bin; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_shop_bin(player_data_bin);
  __for_range = &this->shop_record_map_;
  __for_begin._M_node = std::map<unsigned int,ShopRecord>::begin(&this->shop_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ShopRecord>::end(&this->shop_record_map_)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
      return 0;
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord>>::operator*(&__for_begin);
    shop_type = std::get<0ul,unsigned int const,ShopRecord>(v11);
    shop_record = (std::tuple_element<1,const std::pair<unsigned int const,ShopRecord> >::type *)std::get<1ul,unsigned int const,ShopRecord>(v11);
    shop_record_bin = proto::PlayerShopCompBin::add_shop_record_list(proto_comp);
    if ( ShopRecord::toBin(shop_record, shop_record_bin) )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/shop/player_shop_comp.cpp",
    "toBin",
    150);
  v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v15,
         (const char (*)[38])"[SHOP] ShopRecord toBin failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])" ,shop_type: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, shop_type);
  common::milog::MiLogStream::~MiLogStream(&v15);
  return -1;
};

// Line 159: range 0000000013E826B0-0000000013E826BE
int32_t __cdecl PlayerShopComp::init(PlayerShopComp *const this)
{
  return 0;
};

// Line 164: range 0000000013E826C0-0000000013E828BF
int32_t __cdecl PlayerShopComp::clearShopRecord(PlayerShopComp *const this, data::ShopType shop_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  std::map<unsigned int,ShopRecord>::key_type __x; // [rsp+14h] [rbp-9Ch] BYREF
  std::map<unsigned int,ShopGoodsRecord>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::map<unsigned int,ShopGoodsRecord>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,ShopGoodsRecord> *goods_record_map; // [rsp+28h] [rbp-88h]
  std::map<unsigned int,ShopGoodsRecord> *__for_range; // [rsp+30h] [rbp-80h]
  const std::pair<unsigned int const,ShopGoodsRecord> *v11; // [rsp+38h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,ShopGoodsRecord> >::type *goods_id; // [rsp+40h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,ShopGoodsRecord> >::type *goods_record; // [rsp+48h] [rbp-68h]
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:165";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::clearShopRecord;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  __x = shop_type;
  *(std::map<unsigned int,ShopRecord>::iterator *)(v2 + 32) = std::map<unsigned int,ShopRecord>::find(
                                                                &this->shop_record_map_,
                                                                &__x);
  __for_end._M_node = std::map<unsigned int,ShopRecord>::end(&this->shop_record_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord> >::_Self *)(v2 + 32),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord> >::_Self *)&__for_end) )
  {
    goods_record_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord> > *const)(v2 + 32))->second.goods_record_map;
    __for_range = goods_record_map;
    __for_begin._M_node = std::map<unsigned int,ShopGoodsRecord>::begin(goods_record_map)._M_node;
    __for_end._M_node = std::map<unsigned int,ShopGoodsRecord>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord>>::operator*(&__for_begin);
      goods_id = std::get<0ul,unsigned int const,ShopGoodsRecord>(v11);
      goods_record = (std::tuple_element<1,const std::pair<unsigned int const,ShopGoodsRecord> >::type *)std::get<1ul,unsigned int const,ShopGoodsRecord>(v11);
      PlayerShopComp::addToHistoryGoodsRecord(this, shop_type, goods_record);
      std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord>>::operator++(&__for_begin);
    }
    std::map<unsigned int,ShopGoodsRecord>::clear(goods_record_map);
  }
  result = 0;
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

// Line 179: range 0000000013E828C0-0000000013E82CF4
void __cdecl PlayerShopComp::clearShopRecordByGm(
        PlayerShopComp *const this,
        const std::variant<bool,std::set<data::ShopType>,std::set<unsigned int> > *param)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::size_t v5; // rax
  common::milog::MiLogStream *v6; // rcx
  data::ShopType *v7; // rax
  data::ShopType *v8; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> >::pointer v9; // r14
  const std::set<unsigned int> *v10; // rax
  std::map<unsigned int,ShopRecord>::key_type __x; // [rsp+18h] [rbp-D8h] BYREF
  data::ShopType shop_type; // [rsp+1Ch] [rbp-D4h]
  std::map<unsigned int,ShopRecord>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::map<unsigned int,ShopRecord>::iterator __for_end_0; // [rsp+28h] [rbp-C8h] BYREF
  std::set<data::ShopType>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  std::map<unsigned int,ShopRecord> *__for_range_0; // [rsp+38h] [rbp-B8h]
  std::pair<unsigned int const,ShopRecord> *__in; // [rsp+40h] [rbp-B0h]
  std::tuple_element<0,std::pair<unsigned int const,ShopRecord> >::type *_; // [rsp+48h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int const,ShopRecord> >::type *shop_record; // [rsp+50h] [rbp-A0h]
  const std::set<data::ShopType> *__for_range; // [rsp+58h] [rbp-98h]
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-90h] BYREF
  char v22[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:195";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::clearShopRecordByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = std::variant<bool,std::set<data::ShopType>,std::set<unsigned int>>::index(param);
  if ( v5 == 2 )
  {
    __for_range_0 = &this->shop_record_map_;
    __for_begin._M_node = std::map<unsigned int,ShopRecord>::begin(&this->shop_record_map_)._M_node;
    __for_end_0._M_node = std::map<unsigned int,ShopRecord>::end(&this->shop_record_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end_0) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,ShopRecord>(__in);
      shop_record = std::get<1ul,unsigned int const,ShopRecord>(__in);
      *(std::map<unsigned int,ShopGoodsRecord>::iterator *)(v2 + 32) = std::map<unsigned int,ShopGoodsRecord>::begin(&shop_record->goods_record_map);
      while ( 1 )
      {
        __for_end._M_node = std::map<unsigned int,ShopGoodsRecord>::end(&shop_record->goods_record_map)._M_node;
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> >::_Self *)(v2 + 32),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> >::_Self *)&__for_end) )
          break;
        v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> > *const)(v2 + 32));
        v10 = std::get<2ul,bool,std::set<data::ShopType>,std::set<unsigned int>>(param);
        if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(v10, &v9->first) )
          *(std::map<unsigned int,ShopGoodsRecord>::iterator *)(v2 + 32) = std::map<unsigned int,ShopGoodsRecord>::erase[abi:cxx11](
                                                                             &shop_record->goods_record_map,
                                                                             *(std::map<unsigned int,ShopGoodsRecord>::iterator *)(v2 + 32));
        else
          *(std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> > *)(v2 + 32) = std::next<std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord>>>(
                                                                                                   *(std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> > *)(v2 + 32),
                                                                                                   1LL);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord>>::operator++(&__for_begin);
    }
  }
  else if ( v5 <= 2 )
  {
    if ( v5 )
    {
      __for_range = std::get<1ul,bool,std::set<data::ShopType>,std::set<unsigned int>>(param);
      *(std::set<data::ShopType>::iterator *)(v2 + 32) = std::set<data::ShopType>::begin(__for_range);
      __for_end._M_node = std::set<data::ShopType>::end(__for_range)._M_node;
      while ( std::operator!=((const std::_Rb_tree_const_iterator<data::ShopType>::_Self *)(v2 + 32), &__for_end) )
      {
        v7 = (data::ShopType *)std::_Rb_tree_const_iterator<data::ShopType>::operator*((const std::_Rb_tree_const_iterator<data::ShopType> *const)(v2 + 32));
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        shop_type = *v8;
        __x = shop_type;
        std::map<unsigned int,ShopRecord>::erase(&this->shop_record_map_, &__x);
        std::_Rb_tree_const_iterator<data::ShopType>::operator++((std::_Rb_tree_const_iterator<data::ShopType> *const)(v2 + 32));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/shop/player_shop_comp.cpp",
        "clearShopRecordByGm",
        183);
      v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v21,
             (const char (*)[38])"clear all shop records by gm, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v21);
      std::map<unsigned int,ShopRecord>::clear(&this->shop_record_map_);
    }
  }
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

// Line 208: range 0000000013E82CF6-0000000013E82EEC
void __cdecl PlayerShopComp::getShopmallData(PlayerShopComp *const this, proto::GetShopmallDataRsp *rsp_0)
{
  PlayerRechargeComp *RechargeComp; // rax
  char v3; // al
  std::vector<data::ShopmallEntranceExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::vector<data::ShopmallEntranceExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::vector<data::ShopmallEntranceExcelConfig> *shop_config_vec; // [rsp+28h] [rbp-28h]
  const std::vector<data::ShopmallEntranceExcelConfig> *__for_range; // [rsp+30h] [rbp-20h]
  const data::ShopmallEntranceExcelConfig *shop_config; // [rsp+38h] [rbp-18h]
  std::shared_ptr<Config> v9; // [rsp+40h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  shop_config_vec = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.shopmall_config_mgr.shopmall_entrance_excel_config_vec;
  std::shared_ptr<Config>::~shared_ptr(&v9);
  __for_range = shop_config_vec;
  __for_begin._M_current = std::vector<data::ShopmallEntranceExcelConfig>::begin(shop_config_vec)._M_current;
  __for_end._M_current = std::vector<data::ShopmallEntranceExcelConfig>::end(shop_config_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::ShopmallEntranceExcelConfig const*,std::vector<data::ShopmallEntranceExcelConfig>>(
            &__for_begin,
            &__for_end) )
  {
    shop_config = __gnu_cxx::__normal_iterator<data::ShopmallEntranceExcelConfig const*,std::vector<data::ShopmallEntranceExcelConfig>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&shop_config->shop_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_config->shop_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_config->shop_type);
    }
    if ( shop_config->shop_type != SHOP_TYPE_RECOMMEND )
      goto LABEL_10;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    RechargeComp = Player::getRechargeComp(this->player_);
    if ( !PlayerRechargeComp::isSupportCardProduct(RechargeComp) )
      v3 = 1;
    else
LABEL_10:
      v3 = 0;
    if ( !v3 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&shop_config->shop_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_config->shop_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&shop_config->shop_type);
      }
      if ( PlayerShopComp::isShopOpen(this, shop_config->shop_type) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&shop_config->shop_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&shop_config->shop_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&shop_config->shop_type);
        }
        proto::GetShopmallDataRsp::add_shop_type_list(rsp_0, shop_config->shop_type);
      }
    }
    __gnu_cxx::__normal_iterator<data::ShopmallEntranceExcelConfig const*,std::vector<data::ShopmallEntranceExcelConfig>>::operator++(&__for_begin);
  }
  proto::GetShopmallDataRsp::set_retcode(rsp_0, 0);
};

// Line 226: range 0000000013E82EEE-0000000013E836A6
int32_t __cdecl PlayerShopComp::getShopmallRecommendShop(PlayerShopComp *const this, proto::Shop *shop_proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerRechargeComp *RechargeComp; // rax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  char v10; // al
  ShopExcelConfigMgr *p_shop_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool v17; // r14
  PlayerRechargeComp *v18; // rdi
  unsigned int val; // [rsp+10h] [rbp-100h] BYREF
  uint32_t scoin_discount_rate; // [rsp+14h] [rbp-FCh]
  std::vector<data::ShopmallRecommendConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::vector<data::ShopmallRecommendConfig>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-E0h] BYREF
  const std::vector<data::ShopmallRecommendConfig> *recommend_config_vec; // [rsp+38h] [rbp-D8h]
  const std::vector<data::ShopmallRecommendConfig> *__for_range; // [rsp+40h] [rbp-D0h]
  const data::ShopmallRecommendConfig *recommend_config; // [rsp+48h] [rbp-C8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-C0h]
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+58h] [rbp-B8h]
  const data::ShopExcelConfig *shop_config_ptr; // [rsp+60h] [rbp-B0h]
  proto::ShopGoods *goods_proto; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<Config> v33; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v34; // [rsp+80h] [rbp-90h] BYREF
  char v35[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 goods_id:240";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::getShopmallRecommendShop;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RechargeComp = Player::getRechargeComp(this->player_);
  if ( !PlayerRechargeComp::isSupportCardProduct(RechargeComp) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "getShopmallRecommendShop",
      230);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(&v34, (const char (*)[49])off_2518B5C0);
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    recommend_config_vec = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.shopmall_config_mgr.shopmall_recommend_config_vec;
    std::shared_ptr<Config>::~shared_ptr(&v33);
    __for_range = recommend_config_vec;
    __for_begin._M_current = std::vector<data::ShopmallRecommendConfig>::begin(recommend_config_vec)._M_current;
    __for_end._M_current = std::vector<data::ShopmallRecommendConfig>::end(recommend_config_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::ShopmallRecommendConfig const*,std::vector<data::ShopmallRecommendConfig>>(
              &__for_begin,
              &__for_end) )
    {
      recommend_config = __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig const*,std::vector<data::ShopmallRecommendConfig>>::operator*(&__for_begin);
      if ( PlayerShopComp::isRecommendCondSatisfied(this, recommend_config) )
      {
        __for_range_0 = &recommend_config->goods_id_vec;
        __for_begin_0._M_current = std::vector<unsigned int>::begin(&recommend_config->goods_id_vec)._M_current;
        __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
          v8 = v7;
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v7);
          }
          *(_DWORD *)(v2 + 32) = *v8;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v33);
          v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
          goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
                               &v9->design_config.txt_config_mgr.shop_config_mgr,
                               *(_DWORD *)(v2 + 32));
          std::shared_ptr<Config>::~shared_ptr(&v33);
          if ( !goods_config_ptr )
            goto LABEL_21;
          if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)goods_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&goods_config_ptr->shop_type);
          }
          if ( PlayerShopComp::isShopOpen(this, goods_config_ptr->shop_type)
            && PlayerShopComp::isGoodsDisplaySatisfied(this, goods_config_ptr) )
          {
            v10 = 1;
          }
          else
          {
LABEL_21:
            v10 = 0;
          }
          if ( v10 )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v33);
            p_shop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.shop_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)goods_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&goods_config_ptr->shop_type);
            }
            shop_config_ptr = data::ShopExcelConfigMgrBase::findShopExcelConfig(
                                p_shop_config_mgr,
                                (data::ShopType)goods_config_ptr->shop_type);
            std::shared_ptr<Config>::~shared_ptr(&v33);
            if ( shop_config_ptr )
            {
              scoin_discount_rate = PlayerShopComp::getShopScoinDiscountRate(this, shop_config_ptr);
              goods_proto = proto::Shop::add_goods_list(shop_proto);
              if ( PlayerShopComp::fillShopGoodsData(this, scoin_discount_rate, goods_config_ptr, goods_proto) )
              {
                common::milog::MiLogStream::create(
                  &v34,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/shop/player_shop_comp.cpp",
                  "getShopmallRecommendShop",
                  257);
                v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v34,
                        (const char (*)[39])"[SHOP] fillShopGoodsData failed, uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                val = Player::getUid(this->player_);
                v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
                v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v14,
                        (const char (*)[13])" ,goods_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 32));
                common::milog::MiLogStream::~MiLogStream(&v34);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v34,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/shop/player_shop_comp.cpp",
                "getShopmallRecommendShop",
                249);
              v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      &v34,
                      (const char (*)[27])"findShopExcelConfig fails:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &goods_config_ptr->shop_type);
              common::milog::MiLogStream::~MiLogStream(&v34);
            }
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v33);
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
        v17 = !Config::isAudit(v16);
        std::shared_ptr<Config>::~shared_ptr(&v33);
        if ( v17 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v18 = Player::getRechargeComp(this->player_);
          PlayerRechargeComp::getShopRecommendProductList(v18, &recommend_config->config_id_vec, shop_proto);
        }
      }
      __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig const*,std::vector<data::ShopmallRecommendConfig>>::operator++(&__for_begin);
    }
    result = 0;
  }
  if ( v35 == (char *)v2 )
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

// Line 272: range 0000000013E836A8-0000000013E8393E
bool __cdecl PlayerShopComp::isRecommendCondSatisfied(
        const PlayerShopComp *const this,
        const data::ShopmallRecommendConfig *recommend_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<bool>::size_type v5; // rax
  bool v6; // r14
  bool result; // al
  data::LogicType logic_type; // [rsp+1Ch] [rbp-D4h]
  std::vector<data::ShopmallRecommendCond>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<data::ShopmallRecommendCond>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::vector<data::ShopmallRecommendCond> *__for_range; // [rsp+30h] [rbp-C0h]
  const data::ShopmallRecommendCond *cond; // [rsp+38h] [rbp-B8h]
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 18 cond_check_vec:279";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::isRecommendCondSatisfied;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&recommend_config->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&recommend_config->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&recommend_config->cond_comb);
  }
  logic_type = recommend_config->cond_comb;
  if ( logic_type == LOGIC_NONE )
    logic_type = LOGIC_AND;
  std::vector<bool>::vector((std::vector<bool> *const)(v2 + 48));
  v5 = std::vector<data::ShopmallRecommendCond>::size(&recommend_config->cond_vec);
  std::vector<bool>::reserve((std::vector<bool> *const)(v2 + 48), v5);
  __for_range = &recommend_config->cond_vec;
  __for_begin._M_current = std::vector<data::ShopmallRecommendCond>::begin(&recommend_config->cond_vec)._M_current;
  __for_end._M_current = std::vector<data::ShopmallRecommendCond>::end(&recommend_config->cond_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::ShopmallRecommendCond const*,std::vector<data::ShopmallRecommendCond>>(
            &__for_begin,
            &__for_end) )
  {
    cond = __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond const*,std::vector<data::ShopmallRecommendCond>>::operator*(&__for_begin);
    if ( PlayerShopComp::isCondSatisfied(this, cond) )
      std::vector<bool>::push_back((std::vector<bool> *const)(v2 + 48), 1);
    else
      std::vector<bool>::push_back((std::vector<bool> *const)(v2 + 48), 0);
    __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond const*,std::vector<data::ShopmallRecommendCond>>::operator++(&__for_begin);
  }
  v6 = CommonMiscs::evaluateLogicComb(logic_type, (const std::vector<bool> *)(v2 + 48));
  std::vector<bool>::~vector((std::vector<bool> *const)(v2 + 48));
  result = v6;
  if ( v13 == (char *)v2 )
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

// Line 296: range 0000000013E83940-0000000013E83AD3
bool __cdecl PlayerShopComp::isCondSatisfied(const PlayerShopComp *const this, const data::ShopmallRecommendCond *cond)
{
  data::ShopmallRecommendCondType type; // eax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  time_t v6; // rcx
  time_t Now; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  type = cond->type;
  if ( type == SHOPMALL_RECOMMEND_COND_TIME_END )
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cond->param1);
    }
    return Now <= cond->param1;
  }
  else
  {
    if ( type > SHOPMALL_RECOMMEND_COND_TIME_END )
      return 0;
    if ( type == SHOPMALL_RECOMMEND_COND_PLAYER_LEVEL_GE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      BasicComp = Player::getBasicComp(this->player_);
      Level = PlayerBasicComp::getLevel(BasicComp);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->param1);
      }
      return Level >= cond->param1;
    }
    else
    {
      if ( type != SHOPMALL_RECOMMEND_COND_TIME_BEGIN )
        return 0;
      v6 = common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->param1);
      }
      return v6 >= cond->param1;
    }
  }
};

// Line 315: range 0000000013E83AD4-0000000013E84699
int32_t __cdecl PlayerShopComp::onGetShopReq(
        PlayerShopComp *const this,
        const proto::GetShopReq *req,
        proto::GetShopRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t ShopmallRecommendShop; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rax
  _DWORD *v15; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  proto::ShopGoods *v18; // rcx
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  bool v23; // r14
  PlayerRechargeComp *RechargeComp; // rax
  uint32_t refresh_param; // edx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  PlayerReputationComp *ReputationComp; // rcx
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  uint32_t Level; // eax
  int32_t result; // eax
  uint32_t scoin_discount_rate; // [rsp+2Ch] [rbp-144h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  const data::ShopExcelConfig *shop_config_ptr; // [rsp+40h] [rbp-130h]
  proto::Shop *proto_shop; // [rsp+48h] [rbp-128h]
  std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-120h]
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+58h] [rbp-118h]
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-110h] BYREF
  char v44[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 shop_type:317 64 4 12 goods_id:349 80 4 21 next_refresh_time:378 96 16 23 city_reputat"
                        "ion_ptr:386 128 24 16 goods_id_vec:342";
  *(_QWORD *)(v3 + 16) = PlayerShopComp::onGetShopReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = proto::GetShopReq::shop_type(req);
  if ( !PlayerShopComp::isShopOpen(this, *(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "onGetShopReq",
      320);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v43,
           (const char (*)[31])"[SHOP] shop is not open, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" ,shop_type: ");
    common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(v8, (const data::ShopType *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v43);
    ShopmallRecommendShop = 706;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 96));
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    shop_config_ptr = data::ShopExcelConfigMgrBase::findShopExcelConfig(
                        &v10->design_config.txt_config_mgr.shop_config_mgr,
                        (data::ShopType)*(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
    if ( shop_config_ptr )
    {
      common::tools::TimeUtils::getNow();
      proto_shop = proto::GetShopRsp::mutable_shop(rsp_0);
      proto::Shop::set_shop_type(proto_shop, *(_DWORD *)(v3 + 48));
      if ( *(_DWORD *)(v3 + 48) == 900 )
      {
        ShopmallRecommendShop = PlayerShopComp::getShopmallRecommendShop(this, proto_shop);
      }
      else
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 128));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 96));
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v13 = ShopExcelConfigMgr::getGoodsIdVecByShopType(
                &v12->design_config.txt_config_mgr.shop_config_mgr,
                *(data::ShopType *)(v3 + 48),
                (std::vector<unsigned int> *)(v3 + 128)) == 0;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
        if ( v13 )
        {
          scoin_discount_rate = PlayerShopComp::getShopScoinDiscountRate(this, shop_config_ptr);
          __for_range = (std::vector<unsigned int> *)(v3 + 128);
          __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 128))._M_current;
          __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 128))._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
            v15 = v14;
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v14);
            }
            *(_DWORD *)(v3 + 64) = *v15;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v3 + 96));
            v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
                                 &v16->design_config.txt_config_mgr.shop_config_mgr,
                                 *(_DWORD *)(v3 + 64));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
            if ( !goods_config_ptr )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/shop/player_shop_comp.cpp",
                "onGetShopReq",
                354);
              v17 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v43,
                      (const char (*)[51])"[SHOP] findShopGoodsExcelConfig failed, goods_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream(&v43);
              ShopmallRecommendShop = -1;
              goto LABEL_53;
            }
            if ( PlayerShopComp::isGoodsDisplaySatisfied(this, goods_config_ptr) )
            {
              v18 = proto::Shop::add_goods_list(proto_shop);
              if ( PlayerShopComp::fillShopGoodsData(this, scoin_discount_rate, goods_config_ptr, v18) )
              {
                common::milog::MiLogStream::create(
                  &v43,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/shop/player_shop_comp.cpp",
                  "onGetShopReq",
                  365);
                v19 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v43,
                        (const char (*)[39])"[SHOP] fillShopGoodsData failed, uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
                v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v19,
                        (const unsigned int *)(v3 + 80));
                v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v20,
                        (const char (*)[13])" ,goods_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &goods_config_ptr->goods_id);
                common::milog::MiLogStream::~MiLogStream(&v43);
                ShopmallRecommendShop = -1;
                goto LABEL_53;
              }
            }
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
          }
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 96));
        v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v23 = ShopmallExcelConfigMgr::findShopmallShopConfig(
                &v22->design_config.txt_config_mgr.shopmall_config_mgr,
                *(_DWORD *)(v3 + 48)) != 0LL;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
        if ( v23 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          RechargeComp = Player::getRechargeComp(this->player_);
          PlayerRechargeComp::getShopProductList(RechargeComp, *(data::ShopType *)(v3 + 48), proto_shop);
        }
        if ( *(_BYTE *)(((unsigned __int64)&shop_config_ptr->refresh_param >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)shop_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_config_ptr->refresh_param >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&shop_config_ptr->refresh_param);
        }
        refresh_param = shop_config_ptr->refresh_param;
        if ( *(_BYTE *)(((unsigned __int64)&shop_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&shop_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&shop_config_ptr->refresh_type);
        }
        *(_DWORD *)(v3 + 80) = PlayerShopComp::getNextRefreshTime(this, shop_config_ptr->refresh_type, refresh_param, 0);
        proto::Shop::set_next_refresh_time(proto_shop, *(_DWORD *)(v3 + 80));
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/shop/player_shop_comp.cpp",
          "onGetShopReq",
          380);
        v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v43, (const char (*)[12])"shop_type: ");
        v27 = common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(
                v26,
                (const data::ShopType *)(v3 + 48));
        v28 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v27,
                (const char (*)[21])" next_refresh_time: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v43);
        if ( *(_BYTE *)(((unsigned __int64)&shop_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)shop_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_config_ptr->city_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&shop_config_ptr->city_id);
        }
        proto::Shop::set_city_id(proto_shop, shop_config_ptr->city_id);
        if ( *(_BYTE *)(((unsigned __int64)&shop_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)shop_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_config_ptr->city_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&shop_config_ptr->city_id);
        }
        if ( shop_config_ptr->city_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&shop_config_ptr->city_discount_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&shop_config_ptr->city_discount_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&shop_config_ptr->city_discount_level);
          }
          if ( shop_config_ptr->city_discount_level )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            ReputationComp = Player::getReputationComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&shop_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)shop_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_config_ptr->city_id >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&shop_config_ptr->city_id);
            }
            PlayerReputationComp::findCityReputationPtr(
              (PlayerReputationComp *const)(v3 + 96),
              (__int64)ReputationComp,
              shop_config_ptr->city_id);
            if ( std::operator!=<CityReputation>((const std::shared_ptr<CityReputation> *)(v3 + 96), 0LL) )
            {
              v30 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              if ( !CityReputation::checkCityReputationOpen(v30) )
              {
                v32 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                Level = CityReputation::getLevel(v32);
                proto::Shop::set_city_reputation_level(proto_shop, Level);
              }
            }
            std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 96));
          }
        }
        ShopmallRecommendShop = 0;
LABEL_53:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 128));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "onGetShopReq",
        327);
      v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v43,
              (const char (*)[28])"findShopExcelConfig fails: ");
      common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(v11, (const data::ShopType *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v43);
      ShopmallRecommendShop = -1;
    }
  }
  result = ShopmallRecommendShop;
  if ( v44 == (char *)v3 )
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

// Line 398: range 0000000013E8469A-0000000013E84B63
bool __fastcall PlayerShopComp::isShopOpen(const PlayerShopComp *const this, uint32_t shop_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool isShopClosed; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  bool result; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool isActivityShop; // r14
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  PlayerBasicComp *BasicComp; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  const data::ShopExcelConfig *shop_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 shop_type:397";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::isShopOpen;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = shop_type;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
  isShopClosed = FeatureSwitchMgr::isShopClosed(&v5->feature_switch_mgr, *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( isShopClosed )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "isShopOpen",
      401);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v19, (const char (*)[12])"shop_type: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" closed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    isActivityShop = ActivityShopExcelConfigMgr::isActivityShop(
                       &v10->design_config.txt_config_mgr.activity_shop_config_mgr,
                       *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( !isActivityShop || PlayerShopComp::findOpeningActivityScheduleId(this, *(_DWORD *)(v2 + 32)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
      shop_config_ptr = data::ShopExcelConfigMgrBase::findShopExcelConfig(
                          &v13->design_config.txt_config_mgr.shop_config_mgr,
                          (data::ShopType)*(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v18);
      if ( shop_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        BasicComp = Player::getBasicComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&shop_config_ptr->open_state_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&shop_config_ptr->open_state_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&shop_config_ptr->open_state_type);
        }
        result = PlayerBasicComp::isStateOpen(BasicComp, shop_config_ptr->open_state_type);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "isShopOpen",
          421);
        v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v19,
                (const char (*)[31])"findShopExcelConfig shop_type:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v19);
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/shop/player_shop_comp.cpp",
        "isShopOpen",
        410);
      v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v19,
              (const char (*)[52])"[ACTIVITY_SHOP] activity shop not open, shop_type: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0;
    }
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

// Line 426: range 0000000013E84B64-0000000013E851BF
bool __cdecl PlayerShopComp::isGoodsDisplaySatisfied(
        const PlayerShopComp *const this,
        const data::ShopGoodsExcelConfig *goods_config)
{
  FeatureSwitchMgr *p_feature_switch_mgr; // rdi
  uint32_t goods_id; // ecx
  bool isShopGoodsIdClosed; // bl
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  FeatureSwitchMgr *v10; // rcx
  bool isItemClosed; // bl
  common::milog::MiLogStream *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  ActivityShopExcelConfigMgr *p_activity_shop_config_mgr; // rcx
  bool isActivityShop; // bl
  common::milog::MiLogStream *v17; // rax
  uint32_t begin_time; // [rsp+10h] [rbp-50h]
  uint32_t schedule_id; // [rsp+14h] [rbp-4Ch]
  uint32_t now; // [rsp+18h] [rbp-48h]
  uint32_t before_secs; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v23; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->feature_switch_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    p_feature_switch_mgr = (FeatureSwitchMgr *)&goods_config->goods_id;
    __asan_report_load4(&goods_config->goods_id);
  }
  goods_id = goods_config->goods_id;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                + 0x7FFF8000) )
  {
    p_feature_switch_mgr = (FeatureSwitchMgr *)&goods_config->shop_type;
    __asan_report_load4(&goods_config->shop_type);
  }
  isShopGoodsIdClosed = FeatureSwitchMgr::isShopGoodsIdClosed(p_feature_switch_mgr, goods_config->shop_type, goods_id);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( isShopGoodsIdClosed )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "isGoodsDisplaySatisfied",
      429);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v24,
           (const char (*)[28])"[FEATURE_SWITCH] shop_type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &goods_config->shop_type);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" goods_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &goods_config->goods_id);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" closed");
    common::milog::MiLogStream::~MiLogStream(&v24);
    return 0;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v10 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->feature_switch_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->item_id);
  }
  isItemClosed = FeatureSwitchMgr::isItemClosed(v10, goods_config->item_id);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( isItemClosed )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "isGoodsDisplaySatisfied",
      434);
    v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v24,
            (const char (*)[40])"[FEATURE_SWITCH] isItemClosed item_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &goods_config->item_id);
    common::milog::MiLogStream::~MiLogStream(&v24);
    return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  Level = PlayerBasicComp::getLevel(BasicComp);
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->min_show_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->min_show_level >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->min_show_level);
  }
  if ( Level < goods_config->min_show_level )
    return 0;
  if ( !PlayerShopComp::isPlatformTypeSatisfied(this, goods_config) )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  p_activity_shop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.activity_shop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->shop_type);
  }
  isActivityShop = ActivityShopExcelConfigMgr::isActivityShop(p_activity_shop_config_mgr, goods_config->shop_type);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( !isActivityShop )
    goto LABEL_28;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->shop_type);
  }
  schedule_id = PlayerShopComp::findOpeningActivityScheduleId(this, goods_config->shop_type);
  if ( !schedule_id )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "isGoodsDisplaySatisfied",
      455);
    v17 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v24,
            (const char (*)[52])"[ACTIVITY_SHOP] activity shop not open, shop_type: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &goods_config->shop_type);
    common::milog::MiLogStream::~MiLogStream(&v24);
    return 0;
  }
  if ( !PlayerShopComp::isActivityGoodsDisplaySatisfied(this, schedule_id, goods_config) )
    return 0;
LABEL_28:
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->begin_timestamp);
  }
  begin_time = goods_config->begin_timestamp;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->display_days_before_sell >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->display_days_before_sell >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->display_days_before_sell);
  }
  if ( goods_config->display_days_before_sell )
  {
    before_secs = 86400 * goods_config->display_days_before_sell;
    if ( begin_time > before_secs )
      begin_time -= before_secs;
  }
  if ( now < begin_time )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->end_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->end_timestamp >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->end_timestamp);
  }
  return now <= goods_config->end_timestamp;
};

// Line 486: range 0000000013E851C0-0000000013E854E8
int32_t __cdecl PlayerShopComp::onBuyGoodsReq(
        PlayerShopComp *const this,
        const proto::BuyGoodsReq *req,
        proto::BuyGoodsRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  uint32_t v9; // ecx
  google::protobuf::uint32 v10; // edx
  uint32_t v11; // r14d
  const proto::ShopGoods *v12; // r13
  uint32_t v13; // esi
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
  const proto::ShopGoods *proto_goods; // [rsp+30h] [rbp-B0h]
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 goods_id:490";
  *(_QWORD *)(v3 + 16) = PlayerShopComp::onBuyGoodsReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( proto::BuyGoodsReq::shop_type(req) == 900 )
  {
    proto_goods = proto::BuyGoodsReq::goods(req);
    *(_DWORD *)(v3 + 32) = proto::ShopGoods::goods_id(proto_goods);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
                         &v6->design_config.txt_config_mgr.shop_config_mgr,
                         *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( goods_config_ptr )
    {
      v9 = proto::BuyGoodsReq::buy_count(req);
      if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&goods_config_ptr->shop_type);
      }
      ret = PlayerShopComp::internalBuyGoods(this, goods_config_ptr->shop_type, proto_goods, v9, rsp_0);
      v10 = proto::BuyGoodsReq::shop_type(req);
      proto::BuyGoodsRsp::set_shop_type(rsp_0, v10);
      result = ret;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "onBuyGoodsReq",
        494);
      v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v19,
             (const char (*)[50])"[SHOP] findShopGoodsExcelConfig failed, goods_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 701;
    }
  }
  else
  {
    v11 = proto::BuyGoodsReq::buy_count(req);
    v12 = proto::BuyGoodsReq::goods(req);
    v13 = proto::BuyGoodsReq::shop_type(req);
    result = PlayerShopComp::internalBuyGoods(this, v13, v12, v11, rsp_0);
  }
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

// Line 510: range 0000000013E854EA-0000000013E8593F
int32_t __cdecl PlayerShopComp::onBatchBuyGoodsReq(
        PlayerShopComp *const this,
        const proto::BatchBuyGoodsReq *req,
        proto::BatchBuyGoodsRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  unsigned int v7; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  google::protobuf::uint32 v9; // edx
  uint32_t v10; // r15d
  const proto::ShopGoods *v11; // rdx
  int v12; // r15d
  google::protobuf::uint32 v13; // eax
  proto::ShopGoods *v14; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-16Ch]
  google::protobuf::RepeatedPtrField<proto::BuyGoodsParam>::const_iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  google::protobuf::RepeatedPtrField<proto::BuyGoodsParam>::const_iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  google::protobuf::RepeatedPtrField<proto::ShopGoods>::const_iterator __for_begin_0; // [rsp+38h] [rbp-158h] BYREF
  google::protobuf::RepeatedPtrField<proto::ShopGoods>::const_iterator __for_end_0; // [rsp+40h] [rbp-150h] BYREF
  const google::protobuf::RepeatedPtrField<proto::BuyGoodsParam> *__for_range; // [rsp+48h] [rbp-148h]
  const proto::BuyGoodsParam *buy_goods_info; // [rsp+50h] [rbp-140h]
  proto::BuyGoodsParam *rsp_buy_goods_info; // [rsp+58h] [rbp-138h]
  const google::protobuf::RepeatedPtrField<proto::ShopGoods> *__for_range_0; // [rsp+60h] [rbp-130h]
  const proto::ShopGoods *goods; // [rsp+68h] [rbp-128h]
  std::shared_ptr<Config> v27; // [rsp+70h] [rbp-120h] BYREF
  char v28[272]; // [rsp+80h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 48 13 goods_map:523 128 64 17 buy_goods_rsp:526";
  *(_QWORD *)(v4 + 16) = PlayerShopComp::onBatchBuyGoodsReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -218959118;
  v6[536862726] = -202116109;
  if ( proto::BatchBuyGoodsReq::shop_type(req) == 2000 )
  {
    v7 = proto::BatchBuyGoodsReq::buy_goods_list_size(req);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
    LOBYTE(v7) = v7 >= ConstValueExcelConfigMgr::getBatchBuyGoodsCountLimit(&v8->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    if ( (_BYTE)v7 )
    {
      v3 = 709;
    }
    else
    {
      v9 = proto::BatchBuyGoodsReq::shop_type(req);
      proto::BatchBuyGoodsRsp::set_shop_type(rsp_0, v9);
      std::map<unsigned int,proto::ShopGoods>::map((std::map<unsigned int,proto::ShopGoods> *const)(v4 + 48));
      __for_range = proto::BatchBuyGoodsReq::buy_goods_list(req);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BuyGoodsParam>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BuyGoodsParam>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::BuyGoodsParam const>::operator!=(
                &__for_begin,
                &__for_end) )
      {
        buy_goods_info = google::protobuf::internal::RepeatedPtrIterator<proto::BuyGoodsParam const>::operator*(&__for_begin);
        proto::BuyGoodsRsp::BuyGoodsRsp((proto::BuyGoodsRsp *const)(v4 + 128));
        v10 = proto::BuyGoodsParam::buy_count(buy_goods_info);
        v11 = proto::BuyGoodsParam::goods(buy_goods_info);
        ret = PlayerShopComp::internalBuyGoods(this, 0x7D0u, v11, v10, (proto::BuyGoodsRsp *)(v4 + 128));
        if ( ret )
        {
          v3 = ret;
          v12 = 0;
        }
        else
        {
          rsp_buy_goods_info = proto::BatchBuyGoodsRsp::add_buy_goods_list(rsp_0);
          proto::BuyGoodsParam::CopyFrom(rsp_buy_goods_info, buy_goods_info);
          v13 = proto::BuyGoodsRsp::buy_count((const proto::BuyGoodsRsp *const)(v4 + 128));
          proto::BuyGoodsParam::set_buy_count(rsp_buy_goods_info, v13);
          __for_range_0 = proto::BuyGoodsRsp::goods_list((const proto::BuyGoodsRsp *const)(v4 + 128));
          __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::ShopGoods>::begin(__for_range_0).it_;
          __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::ShopGoods>::end(__for_range_0).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::ShopGoods const>::operator!=(
                    &__for_begin_0,
                    &__for_end_0) )
          {
            goods = google::protobuf::internal::RepeatedPtrIterator<proto::ShopGoods const>::operator*(&__for_begin_0);
            v14 = proto::BatchBuyGoodsRsp::add_goods_list(rsp_0);
            proto::ShopGoods::CopyFrom(v14, goods);
            google::protobuf::internal::RepeatedPtrIterator<proto::ShopGoods const>::operator++(&__for_begin_0);
          }
          v12 = 1;
        }
        proto::BuyGoodsRsp::~BuyGoodsRsp((proto::BuyGoodsRsp *const)(v4 + 128));
        if ( v12 != 1 )
          goto LABEL_19;
        google::protobuf::internal::RepeatedPtrIterator<proto::BuyGoodsParam const>::operator++(&__for_begin);
      }
      v3 = 0;
LABEL_19:
      std::map<unsigned int,proto::ShopGoods>::~map((std::map<unsigned int,proto::ShopGoods> *const)(v4 + 48));
    }
  }
  else
  {
    v3 = 708;
  }
  result = v3;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
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
  return result;
};

// Line 544: range 0000000013E85940-0000000013E8606C
int32_t __cdecl PlayerShopComp::onGetActivityShopSheetInfoReq(
        PlayerShopComp *const this,
        const proto::GetActivityShopSheetInfoReq *req,
        proto::GetActivityShopSheetInfoRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned int *v16; // rax
  unsigned int *v17; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t BeginTimeByOpenDay; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t ScheduleEndTime; // eax
  unsigned int sheet_id; // [rsp+28h] [rbp-F8h]
  uint32_t open_day; // [rsp+2Ch] [rbp-F4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-E8h] BYREF
  const data::ActivityShopOverallExcelConfig *excel_config; // [rsp+40h] [rbp-E0h]
  google::protobuf::RepeatedPtrField<proto::ActivityShopSheetInfo> *proto_sheet_info_list; // [rsp+48h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-D0h]
  proto::ActivityShopSheetInfo *proto_sheet_info; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v31; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v32; // [rsp+70h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 shop_type:545 64 4 15 schedule_id:562";
  *(_QWORD *)(v3 + 16) = PlayerShopComp::onGetActivityShopSheetInfoReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = proto::GetActivityShopSheetInfoReq::shop_type(req);
  proto::GetActivityShopSheetInfoRsp::set_shop_type(rsp_0, *(_DWORD *)(v3 + 48));
  if ( !PlayerShopComp::isShopOpen(this, *(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "onGetActivityShopSheetInfoReq",
      551);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v32,
           (const char (*)[31])"[SHOP] shop is not open, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" ,shop_type: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
    result = 706;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
    v11 = !ActivityShopExcelConfigMgr::isActivityShop(
             &v10->design_config.txt_config_mgr.activity_shop_config_mgr,
             *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v31);
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/shop/player_shop_comp.cpp",
        "onGetActivityShopSheetInfoReq",
        558);
      v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v32,
              (const char (*)[38])"[SHOP] not activity shop, shop_type: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = -1;
    }
    else
    {
      *(_DWORD *)(v3 + 64) = PlayerShopComp::findOpeningActivityScheduleId(this, *(_DWORD *)(v3 + 48));
      if ( *(_DWORD *)(v3 + 64) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v31);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
        excel_config = data::ActivityShopExcelConfigMgrBase::findActivityShopOverallExcelConfig(
                         &v14->design_config.txt_config_mgr.activity_shop_config_mgr,
                         *(_DWORD *)(v3 + 64));
        std::shared_ptr<Config>::~shared_ptr(&v31);
        if ( excel_config )
        {
          proto_sheet_info_list = proto::GetActivityShopSheetInfoRsp::mutable_sheet_info_list(rsp_0);
          __for_range = &excel_config->sheet_list;
          __for_begin._M_current = std::vector<unsigned int>::begin(&excel_config->sheet_list)._M_current;
          __for_end._M_current = std::vector<unsigned int>::end(&excel_config->sheet_list)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
            v17 = v16;
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v16);
            }
            sheet_id = *v17;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v31);
            v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
            open_day = ActivityShopExcelConfigMgr::getActivitySheetOpenDay(
                         &v18->design_config.txt_config_mgr.activity_shop_config_mgr,
                         sheet_id);
            std::shared_ptr<Config>::~shared_ptr(&v31);
            proto_sheet_info = google::protobuf::RepeatedPtrField<proto::ActivityShopSheetInfo>::Add(proto_sheet_info_list);
            proto::ActivityShopSheetInfo::set_sheet_id(proto_sheet_info, sheet_id);
            BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(*(_DWORD *)(v3 + 64), open_day);
            proto::ActivityShopSheetInfo::set_begin_time(proto_sheet_info, BeginTimeByOpenDay);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v31);
            v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
            ScheduleEndTime = NewActivityExcelConfigMgr::getScheduleEndTime(
                                &v20->design_config.txt_config_mgr.new_activity_config_mgr,
                                *(_DWORD *)(v3 + 64),
                                0);
            proto::ActivityShopSheetInfo::set_end_time(proto_sheet_info, ScheduleEndTime);
            std::shared_ptr<Config>::~shared_ptr(&v31);
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          result = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "onGetActivityShopSheetInfoReq",
            572);
          v15 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                  &v32,
                  (const char (*)[73])"[ACTIVITY_SHOP] findActivityShopOverallExcelConfig failed, schedule_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v32);
          result = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "onGetActivityShopSheetInfoReq",
          565);
        v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v32,
                (const char (*)[52])"[ACTIVITY_SHOP] activity shop not open, shop_type: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v32);
        result = -1;
      }
    }
  }
  if ( v33 == (char *)v3 )
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

// Line 590: range 0000000013E8606E-0000000013E8757A
__int64 __fastcall PlayerShopComp::internalBuyGoods(
        PlayerShopComp *const this,
        uint32_t shop_type,
        const proto::ShopGoods *proto_goods,
        uint32_t buy_count,
        proto::BuyGoodsRsp *rsp_0)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  unsigned int v11; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // r14
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  PlayerItemComp *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  char *v33; // rsi
  uint32_t v34; // ecx
  char v35; // al
  ShopGoodsRecord *v36; // rax
  uint32_t v37; // ecx
  char v38; // dl
  char *v39; // rsi
  bool v40; // dl
  bool v41; // dl
  PlayerItemComp *v42; // rax
  google::protobuf::RepeatedPtrField<proto::ShopGoods> *v43; // rax
  common::milog::MiLogStream *v44; // r14
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  PlayerItemComp *v52; // rcx
  uint32_t PackMaterialCount; // eax
  Player *player; // r14
  __int64 result; // rax
  std::string rsp_0a; // [rsp+0h] [rbp-280h]
  proto::BuyGoodsRsp *rsp_0b; // [rsp+0h] [rbp-280h]
  proto::ShopGoods *proto_goodsa; // [rsp+8h] [rbp-278h]
  const unsigned int *v59; // [rsp+10h] [rbp-270h]
  PlayerShopComp *thisa; // [rsp+18h] [rbp-268h]
  PlayerShopComp *thisb; // [rsp+18h] [rbp-268h]
  uint32_t scoin_discount_rate; // [rsp+28h] [rbp-258h]
  uint32_t now; // [rsp+2Ch] [rbp-254h]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-250h] BYREF
  const data::ShopExcelConfig *shop_config_ptr; // [rsp+38h] [rbp-248h]
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+40h] [rbp-240h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+48h] [rbp-238h]
  const proto::ItemParam *goods_item; // [rsp+50h] [rbp-230h]
  ShopRecord *shop_record; // [rsp+58h] [rbp-228h]
  ShopGoodsRecord *goods_record; // [rsp+60h] [rbp-220h]
  std::vector<ItemParam> *__for_range_0; // [rsp+68h] [rbp-218h]
  const ItemParam *cost_item_param; // [rsp+70h] [rbp-210h]
  proto_log::PlayerLogCurrencyCost *currency_cost_log; // [rsp+78h] [rbp-208h]
  const data::IdCountConfig *cost_item; // [rsp+80h] [rbp-200h]
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+88h] [rbp-1F8h] BYREF
  std::shared_ptr<PlayerBuyShopEvent> __r; // [rsp+90h] [rbp-1F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v77; // [rsp+A0h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v78; // [rsp+B0h] [rbp-1D0h] BYREF
  char v79[432]; // [rsp+D0h] [rbp-1B0h] BYREF

  *(&rsp_0a._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  rsp_0a._M_string_length = (std::string::size_type)proto_goods;
  rsp_0a._anon_0._M_allocated_capacity = __PAIR64__(shop_type, buy_count);
  rsp_0a._M_dataplus._M_p = (std::string::pointer)rsp_0;
  v5 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(384LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "14 32 1 10 holder:614 48 4 7 ret:591 64 4 12 goods_id:606 80 4 14 cost_scoin:615 96 4 14 cost_hc"
                        "oin:616 112 4 14 cost_mcoin:617 128 4 11 item_id:682 144 4 11 shop_id:683 160 4 13 shop_type:589"
                        " 176 4 13 buy_count:589 192 16 13 shop_item:650 224 16 21 buy_goods_log_ptr:687 256 24 18 item_p"
                        "aram_vec:620 320 24 17 action_reason:639";
  *(_QWORD *)(v5 + 16) = PlayerShopComp::internalBuyGoods;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -234556924;
  v7[536862723] = -234556924;
  v7[536862724] = -234556924;
  v7[536862725] = -234556924;
  v7[536862726] = -219021312;
  v7[536862727] = -219021312;
  v7[536862728] = -234881024;
  v7[536862729] = -218959118;
  v7[536862730] = -218103808;
  v7[536862731] = -202116109;
  *(_DWORD *)(v5 + 160) = shop_type;
  *(_DWORD *)(v5 + 176) = *(_DWORD *)rsp_0a._anon_0._M_local_buf;
  *(_DWORD *)(v5 + 48) = PlayerShopComp::checkBuyGoods(
                           this,
                           *(_DWORD *)(v5 + 160),
                           (const proto::ShopGoods *)rsp_0a._M_string_length,
                           *(_DWORD *)(v5 + 176));
  if ( *(_DWORD *)(v5 + 48) )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "internalBuyGoods",
      594);
    v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v78,
           (const char (*)[35])"[SHOP] checkBuyGoods failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v5 + 128) = Player::getUid(this->player_);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 128));
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" ,goods_id: ");
    *(_DWORD *)(v5 + 144) = proto::ShopGoods::goods_id((const proto::ShopGoods *const)rsp_0a._M_string_length);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 144));
    common::milog::MiLogStream::~MiLogStream(&v78);
    v11 = *(_DWORD *)(v5 + 48);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v77);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77);
    shop_config_ptr = data::ShopExcelConfigMgrBase::findShopExcelConfig(
                        &v12->design_config.txt_config_mgr.shop_config_mgr,
                        (data::ShopType)*(_DWORD *)(v5 + 160));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v77);
    if ( shop_config_ptr )
    {
      scoin_discount_rate = PlayerShopComp::getShopScoinDiscountRate(this, shop_config_ptr);
      *(_DWORD *)(v5 + 64) = proto::ShopGoods::goods_id((const proto::ShopGoods *const)rsp_0a._M_string_length);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v77);
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77);
      goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
                           &v14->design_config.txt_config_mgr.shop_config_mgr,
                           *(_DWORD *)(v5 + 64));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v77);
      if ( goods_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v78, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32), 0x66u, rsp_0a);
        std::string::~string(&v78);
        *(_DWORD *)(v5 + 80) = 0;
        *(_DWORD *)(v5 + 96) = 0;
        *(_DWORD *)(v5 + 112) = 0;
        PlayerShopComp::getGoodsCostCoin(
          thisa,
          scoin_discount_rate,
          goods_config_ptr,
          (uint32_t *)(v5 + 80),
          (uint32_t *)(v5 + 96),
          (uint32_t *)(v5 + 112));
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v5 + 256));
        if ( *(_DWORD *)(v5 + 96) )
        {
          LODWORD(v77._M_ptr) = 201;
          HIDWORD(v77._M_ptr) = *(_DWORD *)(v5 + 96) * *(_DWORD *)(v5 + 176);
          v77._M_refcount._M_pi = 0LL;
          std::vector<ItemParam>::emplace_back<ItemParam>(
            (std::vector<ItemParam> *const)(v5 + 256),
            (ItemParam *)&v77,
            (ItemParam *)&v77);
        }
        if ( *(_DWORD *)(v5 + 80) )
        {
          LODWORD(v77._M_ptr) = 202;
          HIDWORD(v77._M_ptr) = *(_DWORD *)(v5 + 80) * *(_DWORD *)(v5 + 176);
          v77._M_refcount._M_pi = 0LL;
          std::vector<ItemParam>::emplace_back<ItemParam>(
            (std::vector<ItemParam> *const)(v5 + 256),
            (ItemParam *)&v77,
            (ItemParam *)&v77);
        }
        if ( *(_DWORD *)(v5 + 112) )
        {
          LODWORD(v77._M_ptr) = 203;
          HIDWORD(v77._M_ptr) = *(_DWORD *)(v5 + 112) * *(_DWORD *)(v5 + 176);
          v77._M_refcount._M_pi = 0LL;
          std::vector<ItemParam>::emplace_back<ItemParam>(
            (std::vector<ItemParam> *const)(v5 + 256),
            (ItemParam *)&v77,
            (ItemParam *)&v77);
        }
        __for_range = &goods_config_ptr->cost_items;
        __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&goods_config_ptr->cost_items)._M_current;
        __for_end._M_current = std::vector<data::IdCountConfig>::end(&goods_config_ptr->cost_items)._M_current;
        while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                  &__for_begin,
                  &__for_end) )
        {
          cost_item = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)&cost_item->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cost_item->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&cost_item->id);
          }
          LODWORD(v77._M_ptr) = cost_item->id;
          if ( *(_BYTE *)(((unsigned __int64)&cost_item->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cost_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_item->count >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&cost_item->count);
          }
          HIDWORD(v77._M_ptr) = cost_item->count * *(_DWORD *)(v5 + 176);
          v77._M_refcount._M_pi = 0LL;
          std::vector<ItemParam>::emplace_back<ItemParam>(
            (std::vector<ItemParam> *const)(v5 + 256),
            (ItemParam *)&v77,
            (ItemParam *)&v77);
          __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
        }
        ActionReason::ActionReason((ActionReason *const)(v5 + 320), ACTION_REASON_SHOP, ITEM_LIMIT_UNLIMITED);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->player_);
        ItemComp = Player::getItemComp(thisa->player_);
        SubItemReason::SubItemReason((SubItemReason *const)&__for_end, (const ActionReason *)(v5 + 320));
        *(_DWORD *)(v5 + 48) = PlayerItemComp::subItemBatch(
                                 ItemComp,
                                 (const std::vector<ItemParam> *)(v5 + 256),
                                 (const SubItemReason *)&__for_end);
        if ( *(_DWORD *)(v5 + 48) )
        {
          common::milog::MiLogStream::create(
            &v78,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "internalBuyGoods",
            644);
          v18 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v78,
                  (const char (*)[34])"[SHOP] subItemBatch failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          *(_DWORD *)(v5 + 144) = Player::getUid(thisa->player_);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v5 + 144));
          v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" ,goods_id: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v5 + 64));
          v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" ,ret: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v78);
          v11 = *(_DWORD *)(v5 + 48);
        }
        else
        {
          goods_item = proto::ShopGoods::goods_item(proto_goodsa);
          *(_QWORD *)(v5 + 192) = 0LL;
          *(_QWORD *)(v5 + 200) = 0LL;
          *(_DWORD *)(v5 + 192) = proto::ItemParam::item_id(goods_item);
          *(_DWORD *)(v5 + 196) = *(_DWORD *)(v5 + 176) * proto::ItemParam::count(goods_item);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          v23 = Player::getItemComp(thisa->player_);
          *(_DWORD *)(v5 + 48) = PlayerItemComp::addItem(
                                   v23,
                                   (const ItemParam *)(v5 + 192),
                                   (const ActionReason *)(v5 + 320),
                                   0LL);
          if ( *(_DWORD *)(v5 + 48) )
          {
            common::milog::MiLogStream::create(
              &v78,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/shop/player_shop_comp.cpp",
              "internalBuyGoods",
              654);
            v24 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v78,
                    (const char (*)[29])"[SHOP] addItem failed, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            *(_DWORD *)(v5 + 144) = Player::getUid(thisa->player_);
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v5 + 144));
            v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v25,
                    (const char (*)[13])" ,goods_id: ");
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    (const unsigned int *)(v5 + 64));
            v28 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v27,
                    (const char (*)[17])" ,shop item id: ");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v5 + 192));
            v30 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v29,
                    (const char (*)[20])" ,shop item count: ");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v5 + 196));
            v32 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])" ,ret: ");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v32, (const int *)(v5 + 48));
            common::milog::MiLogStream::~MiLogStream(&v78);
            v11 = *(_DWORD *)(v5 + 48);
          }
          else
          {
            now = common::tools::TimeUtils::getNow();
            v33 = (char *)(v5 + 160);
            shop_record = std::map<unsigned int,ShopRecord>::operator[](
                            &thisa->shop_record_map_,
                            (const std::map<unsigned int,ShopRecord>::key_type *)(v5 + 160));
            v34 = *(_DWORD *)(v5 + 160);
            v35 = *(_BYTE *)(((unsigned __int64)shop_record >> 3) + 0x7FFF8000);
            if ( v35 != 0 && v35 <= 3 )
            {
              LOBYTE(v33) = v35 != 0;
              __asan_report_store4(shop_record, v33, (_BYTE)shop_record);
            }
            shop_record->shop_type = v34;
            v39 = (char *)(v5 + 64);
            v36 = std::map<unsigned int,ShopGoodsRecord>::operator[](
                    &shop_record->goods_record_map,
                    (const std::map<unsigned int,ShopGoodsRecord>::key_type *)(v5 + 64));
            goods_record = v36;
            v37 = *(_DWORD *)(v5 + 64);
            v38 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
            LOBYTE(v39) = v38 != 0;
            v40 = v38 != 0 && (char)(((unsigned __int8)v36 & 7) + 3) >= v38;
            if ( v40 )
              __asan_report_store4(v36, v39, v40);
            goods_record->goods_id = v37;
            if ( *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)goods_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4(&goods_record->bought_num);
            }
            goods_record->bought_num += *(_DWORD *)(v5 + 176);
            v41 = *(_BYTE *)(((unsigned __int64)&goods_record->last_buy_time >> 3) + 0x7FFF8000) != 0
               && (char)((((_BYTE)goods_record + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_record->last_buy_time >> 3)
                                                                          + 0x7FFF8000);
            if ( v41 )
              __asan_report_store4(&goods_record->last_buy_time, (((_BYTE)goods_record + 8) & 7u) + 3, v41);
            goods_record->last_buy_time = now;
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            v42 = Player::getItemComp(thisa->player_);
            PlayerItemComp::recordShopGoodsOutput(v42, *(_DWORD *)(v5 + 64), *(_DWORD *)(v5 + 176), now);
            proto::BuyGoodsRsp::set_shop_type(rsp_0b, *(_DWORD *)(v5 + 160));
            proto::BuyGoodsRsp::set_buy_count(rsp_0b, *(_DWORD *)(v5 + 176));
            v43 = proto::BuyGoodsRsp::mutable_goods_list(rsp_0b);
            if ( PlayerShopComp::fillNChooseOneGoodsData(thisa, goods_config_ptr, v43) )
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/shop/player_shop_comp.cpp",
                "internalBuyGoods",
                677);
              v44 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                      &v78,
                      (const char (*)[45])"[SHOP] fillNChooseOneGoodsData failed, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->player_);
              *(_DWORD *)(v5 + 144) = Player::getUid(thisa->player_);
              v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v44,
                      (const unsigned int *)(v5 + 144));
              v46 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v45,
                      (const char (*)[13])" ,goods_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v46,
                (const unsigned int *)(v5 + 64));
              common::milog::MiLogStream::~MiLogStream(&v78);
              v11 = -1;
            }
            else
            {
              *(_DWORD *)(v5 + 128) = proto::ItemParam::item_id(goods_item);
              if ( *(_BYTE *)(((unsigned __int64)&shop_config_ptr->shop_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&shop_config_ptr->shop_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&shop_config_ptr->shop_id);
              }
              *(_DWORD *)(v5 + 144) = shop_config_ptr->shop_id;
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->player_);
              EventComp = Player::getEventComp(thisa->player_);
              common::tools::perf::make_shared<PlayerBuyShopEvent,unsigned int &,unsigned int &,unsigned int &,unsigned int const&,unsigned int &>(
                (unsigned int *)&__r,
                (unsigned int *)(v5 + 160),
                (unsigned int *)(v5 + 128),
                (const unsigned int *)(v5 + 144),
                (unsigned int *)(v5 + 64),
                (unsigned int *)(v5 + 176),
                (unsigned int *)rsp_0b,
                (unsigned int *)proto_goodsa,
                v59,
                (unsigned int *)thisa);
              std::shared_ptr<BaseEvent>::shared_ptr<PlayerBuyShopEvent,void>(
                (std::shared_ptr<BaseEvent> *const)&v77,
                &__r);
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v77);
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v77);
              std::shared_ptr<PlayerBuyShopEvent>::~shared_ptr(&__r);
              common::tools::perf::make_shared<proto_log::PlayerLogBodyBuyGoods>();
              v48 = std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
              proto_log::PlayerLogBodyBuyGoods::set_shop_id(v48, *(_DWORD *)(v5 + 160));
              v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
              proto_log::PlayerLogBodyBuyGoods::set_goods_id(v49, *(_DWORD *)(v5 + 64));
              v50 = std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
              proto_log::PlayerLogBodyBuyGoods::set_goods_num(v50, *(_DWORD *)(v5 + 176));
              __for_range_0 = (std::vector<ItemParam> *)(v5 + 256);
              __for_begin._M_current = (const data::IdCountConfig *)std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v5 + 256))._M_current;
              __for_end._M_current = (const data::IdCountConfig *)std::vector<ItemParam>::end(__for_range_0)._M_current;
              while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                        (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_begin,
                        (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end) )
              {
                cost_item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
                v51 = std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBuyGoods,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
                currency_cost_log = proto_log::PlayerLogBodyBuyGoods::add_currency_cost_list(v51);
                if ( *(_BYTE *)(((unsigned __int64)cost_item_param >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)cost_item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_item_param >> 3)
                                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load4(cost_item_param);
                }
                proto_log::PlayerLogCurrencyCost::set_currency_id(currency_cost_log, cost_item_param->item_id);
                if ( *(_BYTE *)(((unsigned __int64)&cost_item_param->count >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)cost_item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_item_param->count >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(&cost_item_param->count);
                }
                proto_log::PlayerLogCurrencyCost::set_need_cost_num(currency_cost_log, cost_item_param->count);
                if ( *(_BYTE *)(((unsigned __int64)&cost_item_param->count >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)cost_item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_item_param->count >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(&cost_item_param->count);
                }
                proto_log::PlayerLogCurrencyCost::set_real_cost_num(currency_cost_log, cost_item_param->count);
                if ( *(_BYTE *)(((unsigned __int64)&thisb->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&thisb->player_);
                v52 = Player::getItemComp(thisb->player_);
                if ( *(_BYTE *)(((unsigned __int64)cost_item_param >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)cost_item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_item_param >> 3)
                                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load4(cost_item_param);
                }
                PackMaterialCount = PlayerItemComp::getPackMaterialCount(v52, cost_item_param->item_id);
                proto_log::PlayerLogCurrencyCost::set_left_num(currency_cost_log, PackMaterialCount);
                __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
              }
              if ( *(_BYTE *)(((unsigned __int64)&thisb->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisb->player_);
              player = thisb->player_;
              std::shared_ptr<google::protobuf::Message>::shared_ptr(&v77, 0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBuyGoods,void>(
                (std::shared_ptr<google::protobuf::Message> *const)&__r,
                (const std::shared_ptr<proto_log::PlayerLogBodyBuyGoods> *)(v5 + 224));
              Player::printStatLog(player, (MessagePtr *)&__r, &v77, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v77);
              v11 = 0;
              std::shared_ptr<proto_log::PlayerLogBodyBuyGoods>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBuyGoods> *const)(v5 + 224));
            }
          }
        }
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v5 + 256));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "internalBuyGoods",
          610);
        v15 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v78,
                (const char (*)[50])"[SHOP] findShopGoodsExcelConfig failed, goods_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 64));
        common::milog::MiLogStream::~MiLogStream(&v78);
        v11 = 701;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "internalBuyGoods",
        600);
      v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v78,
              (const char (*)[28])"findShopExcelConfig fails: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 160));
      common::milog::MiLogStream::~MiLogStream(&v78);
      v11 = -1;
    }
  }
  result = v11;
  if ( v79 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 705: range 0000000013E8757C-0000000013E8A5A6
__int64 __fastcall PlayerShopComp::checkBuyGoods(
        PlayerShopComp *const this,
        uint32_t shop_type,
        const proto::ShopGoods *proto_goods,
        uint32_t buy_count)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r13d
  common::milog::MiLogStream *v10; // r13
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r13
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  bool isShopGoodsIdClosed; // r13
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v27; // r13
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  bool isActivityShop; // r13
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r13
  google::protobuf::uint32 v41; // ecx
  char v42; // al
  common::milog::MiLogStream *v43; // r13
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r13
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r13
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r13
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r13
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r13
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // r13
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // r13
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // r13
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // r13
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // r13
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // r13
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  __int64 v86; // r13
  common::milog::MiLogStream *v87; // r13
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // r13
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rbx
  google::protobuf::uint32 v92; // ecx
  google::protobuf::uint32 v93; // ecx
  char v94; // al
  common::milog::MiLogStream *v95; // r13
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // r13
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // r13
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // r13
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // r13
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // r13
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  uint32_t *p_count; // rax
  common::milog::MiLogStream *v120; // r13
  common::milog::MiLogStream *v121; // rax
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  ItemParam *v127; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v129; // r13
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rax
  google::protobuf::uint32 v132; // r13d
  common::milog::MiLogStream *v134; // r13
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // r13
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // r13
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  PlayerItemComp *v141; // rax
  common::milog::MiLogStream *v142; // r13
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rax
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // rax
  PlayerItemComp *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
  common::milog::MiLogStream *v154; // rax
  common::milog::MiLogStream *v155; // rax
  common::milog::MiLogStream *v156; // rax
  common::milog::MiLogStream *v157; // rax
  common::milog::MiLogStream *v158; // rcx
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-244h] BYREF
  int32_t idx; // [rsp+30h] [rbp-240h]
  uint32_t scoin_discount_rate; // [rsp+34h] [rbp-23Ch]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+38h] [rbp-238h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+40h] [rbp-230h] BYREF
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+48h] [rbp-228h]
  const data::ShopExcelConfig *shop_config_ptr; // [rsp+50h] [rbp-220h]
  const proto::ItemParam *goods_item; // [rsp+58h] [rbp-218h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+60h] [rbp-210h]
  const data::IdCountConfig *cost_item_0; // [rsp+68h] [rbp-208h]
  const proto::ItemParam *proto_cost_item; // [rsp+70h] [rbp-200h]
  const data::IdCountConfig *cost_item; // [rsp+78h] [rbp-1F8h]
  common::milog::MiLogStream v174; // [rsp+80h] [rbp-1F0h] BYREF
  char v175[464]; // [rsp+A0h] [rbp-1D0h] BYREF

  v4 = (unsigned __int64)v175;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "16 48 4 12 goods_id:706 64 4 9 level:737 80 4 19 selling_item_id:763 96 4 7 now:780 112 4 13 buy"
                        "_limit:805 128 4 14 cost_scoin:832 144 4 14 cost_hcoin:833 160 4 14 cost_mcoin:834 176 4 7 ret:9"
                        "18 192 4 14 bought_num:809 208 4 15 schedule_id:748 224 4 13 shop_type:704 240 4 13 buy_count:70"
                        "4 256 16 13 shop_item:932 288 24 18 item_param_vec:875 352 24 17 action_reason:933";
  *(_QWORD *)(v4 + 16) = PlayerShopComp::checkBuyGoods;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -234556924;
  v6[536862726] = -234556924;
  v6[536862727] = -234556924;
  v6[536862728] = -219021312;
  v6[536862729] = -234881024;
  v6[536862730] = -218959118;
  v6[536862731] = -218103808;
  v6[536862732] = -202116109;
  *(_DWORD *)(v4 + 224) = shop_type;
  *(_DWORD *)(v4 + 240) = buy_count;
  *(_DWORD *)(v4 + 48) = proto::ShopGoods::goods_id(proto_goods);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 256));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
                       &v7->design_config.txt_config_mgr.shop_config_mgr,
                       *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 256));
  if ( !goods_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      710);
    v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v174,
           (const char (*)[51])"[SHOP] findShopGoodsExcelConfig failed, goods_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = 701;
    goto LABEL_179;
  }
  if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config_ptr->shop_type);
  }
  if ( goods_config_ptr->shop_type != *(_DWORD *)(v4 + 224) )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      716);
    v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v174,
            (const char (*)[36])"[SHOP] shop_type is conflict, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 208));
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" ,shop_type: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 224));
    v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v13,
            (const char (*)[20])" ,goods shop_type: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &goods_config_ptr->shop_type);
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = -1;
    goto LABEL_179;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 256));
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  shop_config_ptr = data::ShopExcelConfigMgrBase::findShopExcelConfig(
                      &v15->design_config.txt_config_mgr.shop_config_mgr,
                      (data::ShopType)*(_DWORD *)(v4 + 224));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 256));
  if ( !shop_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      722);
    v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v174,
            (const char (*)[28])"findShopExcelConfig fails: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 224));
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = -1;
    goto LABEL_179;
  }
  if ( !PlayerShopComp::isShopOpen(this, *(_DWORD *)(v4 + 224)) )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      728);
    v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v174,
            (const char (*)[31])"[SHOP] shop is not open, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 208));
    v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])" ,shop_type: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 224));
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = 706;
    goto LABEL_179;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 256));
  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  isShopGoodsIdClosed = FeatureSwitchMgr::isShopGoodsIdClosed(
                          &v20->feature_switch_mgr,
                          *(_DWORD *)(v4 + 224),
                          *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 256));
  if ( isShopGoodsIdClosed )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      733);
    v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v174, (const char (*)[11])"shop_type:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 224));
    v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" goods_id:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" closed");
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = 142;
    goto LABEL_179;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  *(_DWORD *)(v4 + 64) = PlayerBasicComp::getLevel(BasicComp);
  if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->min_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->min_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config_ptr->min_player_level);
  }
  if ( goods_config_ptr->min_player_level > *(_DWORD *)(v4 + 64) )
    goto LABEL_28;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->max_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config_ptr - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->max_player_level >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config_ptr->max_player_level);
  }
  if ( goods_config_ptr->max_player_level < *(_DWORD *)(v4 + 64) )
  {
LABEL_28:
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      740);
    v27 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v174,
            (const char (*)[43])"[SHOP] player level is not in range, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 208));
    v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" ,level: ");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 64));
    v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v30, (const char (*)[14])" ,min level: ");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v31,
            &goods_config_ptr->min_player_level);
    v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v32, (const char (*)[14])" ,max level: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &goods_config_ptr->max_player_level);
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = -1;
    goto LABEL_179;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 256));
  v34 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  isActivityShop = ActivityShopExcelConfigMgr::isActivityShop(
                     &v34->design_config.txt_config_mgr.activity_shop_config_mgr,
                     *(_DWORD *)(v4 + 224));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 256));
  if ( isActivityShop )
  {
    *(_DWORD *)(v4 + 208) = PlayerShopComp::findOpeningActivityScheduleId(this, *(_DWORD *)(v4 + 224));
    if ( !*(_DWORD *)(v4 + 208) )
    {
      common::milog::MiLogStream::create(
        &v174,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "checkBuyGoods",
        751);
      v36 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v174,
              (const char (*)[52])"[ACTIVITY_SHOP] activity shop not open, shop_type: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v4 + 224));
      common::milog::MiLogStream::~MiLogStream(&v174);
      v9 = -1;
      goto LABEL_179;
    }
    if ( !PlayerShopComp::checkBuyActivityGoods(this, *(_DWORD *)(v4 + 208), goods_config_ptr) )
    {
      common::milog::MiLogStream::create(
        &v174,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "checkBuyGoods",
        757);
      v37 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
              &v174,
              (const char (*)[60])"[ACTIVITY_SHOP] checkBuyActivityGoods failed, schedule_id: ");
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v37,
              (const unsigned int *)(v4 + 208));
      v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v38, (const char (*)[13])" ,goods_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v174);
      v9 = -1;
      goto LABEL_179;
    }
  }
  *(_DWORD *)(v4 + 80) = 0;
  if ( PlayerShopComp::getSellingItemId(this, goods_config_ptr, (uint32_t *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      766);
    v40 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v174,
            (const char (*)[38])"[SHOP] getSellingItemId failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_82:
    *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
    v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v4 + 208));
    v70 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v69, (const char (*)[13])" ,goods_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = -1;
    goto LABEL_179;
  }
  goods_item = proto::ShopGoods::goods_item(proto_goods);
  if ( proto::ItemParam::item_id(goods_item) != *(_DWORD *)(v4 + 80) )
    goto LABEL_44;
  v41 = proto::ItemParam::count(goods_item);
  if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config_ptr->item_count);
  }
  if ( v41 == goods_config_ptr->item_count )
    v42 = 0;
  else
LABEL_44:
    v42 = 1;
  if ( v42 )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      773);
    v43 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v174,
            (const char (*)[35])"[SHOP] item mismatch, req item_id:");
    *(_DWORD *)(v4 + 192) = proto::ItemParam::item_id(goods_item);
    v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v4 + 192));
    v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v44, (const char (*)[16])" ,shop item_id:");
    v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v4 + 80));
    v47 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v46, (const char (*)[13])" ,req count:");
    *(_DWORD *)(v4 + 208) = proto::ItemParam::count(goods_item);
    v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, (const unsigned int *)(v4 + 208));
    v49 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v48, (const char (*)[14])" ,shop count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &goods_config_ptr->item_count);
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = 707;
    goto LABEL_179;
  }
  *(_DWORD *)(v4 + 96) = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->begin_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config_ptr->begin_timestamp);
  }
  if ( goods_config_ptr->begin_timestamp > *(_DWORD *)(v4 + 96) )
    goto LABEL_54;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->end_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config_ptr - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->end_timestamp >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config_ptr->end_timestamp);
  }
  if ( goods_config_ptr->end_timestamp < *(_DWORD *)(v4 + 96) )
  {
LABEL_54:
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      783);
    v50 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v174,
            (const char (*)[39])"[SHOP] now time is not in range, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
    v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v4 + 208));
    v52 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v51, (const char (*)[13])" ,now time: ");
    v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v4 + 96));
    v54 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v53, (const char (*)[15])" ,begin time: ");
    v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v54,
            &goods_config_ptr->begin_timestamp);
    v56 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v55, (const char (*)[13])" ,end time: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &goods_config_ptr->end_timestamp);
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = 703;
    goto LABEL_179;
  }
  if ( !*(_DWORD *)(v4 + 240) )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      791);
    v57 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v174,
            (const char (*)[35])"[SHOP] goods buy_count is 0, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
    v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, (const unsigned int *)(v4 + 208));
    v59 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v58, (const char (*)[13])" ,goods_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = 705;
    goto LABEL_179;
  }
  if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->choose_one_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->choose_one_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config_ptr->choose_one_group_id);
  }
  if ( goods_config_ptr->choose_one_group_id && PlayerShopComp::isNChooseOneBought(this, goods_config_ptr) )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      799);
    v60 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v174,
            (const char (*)[38])"[SHOP] goods buy num not enough, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
    v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, (const unsigned int *)(v4 + 208));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v61, (const char (*)[13])" n choosed 1");
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = 704;
    goto LABEL_179;
  }
  if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config_ptr->buy_limit);
  }
  *(_DWORD *)(v4 + 112) = goods_config_ptr->buy_limit;
  PlayerShopComp::changeBuyLimitByLimitCondition(
    this,
    *(_DWORD *)(v4 + 224),
    *(_DWORD *)(v4 + 48),
    (uint32_t *)(v4 + 112));
  if ( *(_DWORD *)(v4 + 112) )
  {
    *(_DWORD *)(v4 + 192) = PlayerShopComp::refreshAndGetShopGoodsBoughtNum(this, goods_config_ptr);
    if ( SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v4 + 192), *(_DWORD *)(v4 + 240)) > *(_DWORD *)(v4 + 112) )
    {
      common::milog::MiLogStream::create(
        &v174,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/shop/player_shop_comp.cpp",
        "checkBuyGoods",
        812);
      v62 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v174,
              (const char (*)[38])"[SHOP] goods buy num not enough, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
      v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v62,
              (const unsigned int *)(v4 + 208));
      v64 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v63, (const char (*)[15])" ,bought num: ");
      v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v64,
              (const unsigned int *)(v4 + 192));
      v66 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v65, (const char (*)[14])" ,buy count: ");
      v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v66,
              (const unsigned int *)(v4 + 240));
      v68 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v67, (const char (*)[14])" ,buy limit: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, (const unsigned int *)(v4 + 112));
      common::milog::MiLogStream::~MiLogStream(&v174);
      v9 = 704;
      goto LABEL_179;
    }
  }
  if ( !PlayerShopComp::checkPreconditionSatisfy(this, goods_config_ptr) )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      821);
    v40 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v174,
            (const char (*)[46])"[SHOP] checkPreconditionSatisfy failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_82;
  }
  if ( !PlayerShopComp::isPlatformTypeSatisfied(this, goods_config_ptr) )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      828);
    v40 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v174,
            (const char (*)[42])"[SHOP] platform type not satisfied, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_82;
  }
  *(_DWORD *)(v4 + 128) = 0;
  *(_DWORD *)(v4 + 144) = 0;
  *(_DWORD *)(v4 + 160) = 0;
  scoin_discount_rate = PlayerShopComp::getShopScoinDiscountRate(this, shop_config_ptr);
  PlayerShopComp::getGoodsCostCoin(
    this,
    scoin_discount_rate,
    goods_config_ptr,
    (uint32_t *)(v4 + 128),
    (uint32_t *)(v4 + 144),
    (uint32_t *)(v4 + 160));
  if ( proto::ShopGoods::scoin(proto_goods) != *(_DWORD *)(v4 + 128) )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      840);
    v71 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v174,
            (const char (*)[29])"[SHOP] scoin mismatch, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 192) = Player::getUid(this->player_);
    v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, (const unsigned int *)(v4 + 192));
    v73 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v72, (const char (*)[14])" ,req scoin: ");
    *(_DWORD *)(v4 + 208) = proto::ShopGoods::scoin(proto_goods);
    v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, (const unsigned int *)(v4 + 208));
    v75 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v74, (const char (*)[15])" ,shop scoin: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, (const unsigned int *)(v4 + 128));
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = 707;
    goto LABEL_179;
  }
  if ( proto::ShopGoods::hcoin(proto_goods) != *(_DWORD *)(v4 + 144) )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      845);
    v76 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v174,
            (const char (*)[29])"[SHOP] scoin mismatch, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 192) = Player::getUid(this->player_);
    v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, (const unsigned int *)(v4 + 192));
    v78 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v77, (const char (*)[14])" ,req hcoin: ");
    *(_DWORD *)(v4 + 208) = proto::ShopGoods::hcoin(proto_goods);
    v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, (const unsigned int *)(v4 + 208));
    v80 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v79, (const char (*)[15])" ,shop hcoin: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, (const unsigned int *)(v4 + 144));
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = 707;
    goto LABEL_179;
  }
  if ( proto::ShopGoods::mcoin(proto_goods) != *(_DWORD *)(v4 + 160) )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      850);
    v81 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v174,
            (const char (*)[29])"[SHOP] mcoin mismatch, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 192) = Player::getUid(this->player_);
    v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, (const unsigned int *)(v4 + 192));
    v83 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v82, (const char (*)[14])" ,req mcoin: ");
    *(_DWORD *)(v4 + 208) = proto::ShopGoods::mcoin(proto_goods);
    v84 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, (const unsigned int *)(v4 + 208));
    v85 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v84, (const char (*)[15])" ,shop mcoin: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v85, (const unsigned int *)(v4 + 160));
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = 707;
    goto LABEL_179;
  }
  v86 = proto::ShopGoods::cost_item_list_size(proto_goods);
  if ( v86 != std::vector<data::IdCountConfig>::size(&goods_config_ptr->cost_items) )
  {
    common::milog::MiLogStream::create(
      &v174,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkBuyGoods",
      856);
    v87 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v174,
            (const char (*)[38])"[SHOP] cost item size mismatch, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 192) = Player::getUid(this->player_);
    v88 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v87, (const unsigned int *)(v4 + 192));
    v89 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v88, (const char (*)[13])" ,req size: ");
    *(_DWORD *)(v4 + 208) = proto::ShopGoods::cost_item_list_size(proto_goods);
    v90 = common::milog::MiLogStream::operator<<<int,(int *)0>(v89, (const int *)(v4 + 208));
    v91 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v90, (const char (*)[14])" ,shop size: ");
    __for_end._M_current = (const data::IdCountConfig *)std::vector<data::IdCountConfig>::size(&goods_config_ptr->cost_items);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v91, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream(&v174);
    v9 = 707;
    goto LABEL_179;
  }
  for ( idx = 0; ; ++idx )
  {
    if ( idx >= proto::ShopGoods::cost_item_list_size(proto_goods) )
    {
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 288));
      if ( *(_DWORD *)(v4 + 128) )
      {
        if ( *(_DWORD *)(v4 + 240)
          && (unsigned int)(*(_DWORD *)(v4 + 128) * *(_DWORD *)(v4 + 240)) / *(_DWORD *)(v4 + 128) != *(_DWORD *)(v4 + 240) )
        {
          common::milog::MiLogStream::create(
            &v174,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "checkBuyGoods",
            880);
          v104 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   &v174,
                   (const char (*)[29])"[SHOP] scoin overflow, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
          v105 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v104,
                   (const unsigned int *)(v4 + 208));
          v106 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                   v105,
                   (const char (*)[15])" ,cost_scoin: ");
          v107 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v106,
                   (const unsigned int *)(v4 + 128));
          v108 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v107,
                   (const char (*)[14])" ,buy_count: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v108, (const unsigned int *)(v4 + 240));
          common::milog::MiLogStream::~MiLogStream(&v174);
          v9 = -1;
LABEL_178:
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 288));
          goto LABEL_179;
        }
        *(_DWORD *)(v4 + 256) = 202;
        *(_DWORD *)(v4 + 260) = *(_DWORD *)(v4 + 128) * *(_DWORD *)(v4 + 240);
        *(_DWORD *)(v4 + 264) = 0;
        *(_DWORD *)(v4 + 268) = 0;
        std::vector<ItemParam>::emplace_back<ItemParam>(
          (std::vector<ItemParam> *const)(v4 + 288),
          (ItemParam *)(v4 + 256),
          (ItemParam *)(v4 + 256));
      }
      if ( *(_DWORD *)(v4 + 144) )
      {
        if ( *(_DWORD *)(v4 + 240)
          && (unsigned int)(*(_DWORD *)(v4 + 144) * *(_DWORD *)(v4 + 240)) / *(_DWORD *)(v4 + 144) != *(_DWORD *)(v4 + 240) )
        {
          common::milog::MiLogStream::create(
            &v174,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "checkBuyGoods",
            890);
          v109 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   &v174,
                   (const char (*)[29])"[SHOP] hcoin overflow, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
          v110 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v109,
                   (const unsigned int *)(v4 + 208));
          v111 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                   v110,
                   (const char (*)[15])" ,cost_hcoin: ");
          v112 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v111,
                   (const unsigned int *)(v4 + 144));
          v113 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v112,
                   (const char (*)[14])" ,buy_count: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v113, (const unsigned int *)(v4 + 240));
          common::milog::MiLogStream::~MiLogStream(&v174);
          v9 = -1;
          goto LABEL_178;
        }
        *(_DWORD *)(v4 + 256) = 201;
        *(_DWORD *)(v4 + 260) = *(_DWORD *)(v4 + 144) * *(_DWORD *)(v4 + 240);
        *(_DWORD *)(v4 + 264) = 0;
        *(_DWORD *)(v4 + 268) = 0;
        std::vector<ItemParam>::emplace_back<ItemParam>(
          (std::vector<ItemParam> *const)(v4 + 288),
          (ItemParam *)(v4 + 256),
          (ItemParam *)(v4 + 256));
      }
      if ( *(_DWORD *)(v4 + 160) )
      {
        if ( *(_DWORD *)(v4 + 240)
          && (unsigned int)(*(_DWORD *)(v4 + 160) * *(_DWORD *)(v4 + 240)) / *(_DWORD *)(v4 + 160) != *(_DWORD *)(v4 + 240) )
        {
          common::milog::MiLogStream::create(
            &v174,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "checkBuyGoods",
            900);
          v114 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   &v174,
                   (const char (*)[29])"[SHOP] mcoin overflow, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
          v115 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v114,
                   (const unsigned int *)(v4 + 208));
          v116 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                   v115,
                   (const char (*)[15])" ,cost_mcoin: ");
          v117 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v116,
                   (const unsigned int *)(v4 + 160));
          v118 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v117,
                   (const char (*)[14])" ,buy_count: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v118, (const unsigned int *)(v4 + 240));
          common::milog::MiLogStream::~MiLogStream(&v174);
          v9 = -1;
          goto LABEL_178;
        }
        *(_DWORD *)(v4 + 256) = 203;
        *(_DWORD *)(v4 + 260) = *(_DWORD *)(v4 + 160) * *(_DWORD *)(v4 + 240);
        *(_DWORD *)(v4 + 264) = 0;
        *(_DWORD *)(v4 + 268) = 0;
        std::vector<ItemParam>::emplace_back<ItemParam>(
          (std::vector<ItemParam> *const)(v4 + 288),
          (ItemParam *)(v4 + 256),
          (ItemParam *)(v4 + 256));
      }
      __for_range = &goods_config_ptr->cost_items;
      __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&goods_config_ptr->cost_items)._M_current;
      __for_end._M_current = std::vector<data::IdCountConfig>::end(&goods_config_ptr->cost_items)._M_current;
      while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                &__for_begin,
                &__for_end) )
      {
        cost_item_0 = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
        p_count = &cost_item_0->count;
        if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_count);
        }
        if ( cost_item_0->count
          && *(_DWORD *)(v4 + 240)
          && cost_item_0->count * *(_DWORD *)(v4 + 240) / cost_item_0->count != *(_DWORD *)(v4 + 240) )
        {
          common::milog::MiLogStream::create(
            &v174,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "checkBuyGoods",
            910);
          v120 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                   &v174,
                   (const char (*)[33])"[SHOP] cost_item overflow, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
          v121 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v120,
                   (const unsigned int *)(v4 + 208));
          v122 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                   v121,
                   (const char (*)[12])" ,item id: ");
          v123 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v122, &cost_item_0->id);
          v124 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                   v123,
                   (const char (*)[15])" ,item count: ");
          v125 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v124, &cost_item_0->count);
          v126 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v125,
                   (const char (*)[14])" ,buy_count: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v126, (const unsigned int *)(v4 + 240));
          common::milog::MiLogStream::~MiLogStream(&v174);
          v9 = -1;
          goto LABEL_178;
        }
        *(_QWORD *)(v4 + 256) = 0LL;
        *(_QWORD *)(v4 + 264) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&cost_item_0->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cost_item_0->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cost_item_0->id);
        }
        *(_DWORD *)(v4 + 256) = cost_item_0->id;
        if ( *(_BYTE *)(((unsigned __int64)&cost_item_0->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cost_item_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_item_0->count >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&cost_item_0->count);
        }
        *(_DWORD *)(v4 + 260) = cost_item_0->count * *(_DWORD *)(v4 + 240);
        v127 = std::move<ItemParam &>((ItemParam *)(v4 + 256));
        std::vector<ItemParam>::emplace_back<ItemParam>((std::vector<ItemParam> *const)(v4 + 288), v127, v127);
        __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      *(_DWORD *)(v4 + 176) = PlayerItemComp::checkSubItemBatch(ItemComp, (const std::vector<ItemParam> *)(v4 + 288));
      if ( *(_DWORD *)(v4 + 176) )
      {
        common::milog::MiLogStream::create(
          &v174,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkBuyGoods",
          921);
        v129 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                 &v174,
                 (const char (*)[39])"[SHOP] checkSubItemBatch failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
        v130 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v129,
                 (const unsigned int *)(v4 + 208));
        v131 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v130, (const char (*)[13])" ,goods_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v131, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v174);
        v9 = *(_DWORD *)(v4 + 176);
      }
      else if ( proto::ItemParam::count(goods_item)
             && *(_DWORD *)(v4 + 240)
             && (v132 = *(_DWORD *)(v4 + 240) * proto::ItemParam::count(goods_item),
                 v132 / proto::ItemParam::count(goods_item) != *(_DWORD *)(v4 + 240)) )
      {
        common::milog::MiLogStream::create(
          &v174,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkBuyGoods",
          928);
        v134 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                 &v174,
                 (const char (*)[28])"[SHOP] item overflow, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v135 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v134, &val);
        v136 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v135, (const char (*)[12])" ,item id: ");
        *(_DWORD *)(v4 + 192) = proto::ItemParam::item_id(goods_item);
        v137 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v136,
                 (const unsigned int *)(v4 + 192));
        v138 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                 v137,
                 (const char (*)[15])" ,item count: ");
        *(_DWORD *)(v4 + 208) = proto::ItemParam::count(goods_item);
        v139 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v138,
                 (const unsigned int *)(v4 + 208));
        v140 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                 v139,
                 (const char (*)[14])" ,buy_count: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v140, (const unsigned int *)(v4 + 240));
        common::milog::MiLogStream::~MiLogStream(&v174);
        v9 = -1;
      }
      else
      {
        *(_QWORD *)(v4 + 256) = 0LL;
        *(_QWORD *)(v4 + 264) = 0LL;
        *(_DWORD *)(v4 + 256) = proto::ItemParam::item_id(goods_item);
        *(_DWORD *)(v4 + 260) = *(_DWORD *)(v4 + 240) * proto::ItemParam::count(goods_item);
        ActionReason::ActionReason((ActionReason *const)(v4 + 352), ACTION_REASON_SHOP, ITEM_LIMIT_UNLIMITED);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v141 = Player::getItemComp(this->player_);
        *(_DWORD *)(v4 + 176) = PlayerItemComp::checkAddItem(
                                  v141,
                                  (const ItemParam *)(v4 + 256),
                                  (const ActionReason *)(v4 + 352));
        if ( *(_DWORD *)(v4 + 176) )
        {
          common::milog::MiLogStream::create(
            &v174,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/shop/player_shop_comp.cpp",
            "checkBuyGoods",
            937);
          v142 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                   &v174,
                   (const char (*)[34])"[SHOP] checkAddItem failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(_DWORD *)(v4 + 208) = Player::getUid(this->player_);
          v143 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v142,
                   (const unsigned int *)(v4 + 208));
          v144 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v143,
                   (const char (*)[13])" ,goods_id: ");
          v145 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v144,
                   (const unsigned int *)(v4 + 48));
          v146 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                   v145,
                   (const char (*)[17])" ,shop item id: ");
          v147 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v146,
                   (const unsigned int *)(v4 + 256));
          v148 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                   v147,
                   (const char (*)[20])" ,shop item count: ");
          v149 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v148,
                   (const unsigned int *)(v4 + 260));
          v150 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v149, (const char (*)[8])" ,ret: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v150, (const int *)(v4 + 176));
          common::milog::MiLogStream::~MiLogStream(&v174);
          v9 = *(_DWORD *)(v4 + 176);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v151 = Player::getItemComp(this->player_);
          *(_DWORD *)(v4 + 176) = PlayerItemComp::checkShopGoodsOutput(
                                    v151,
                                    *(_DWORD *)(v4 + 48),
                                    *(_DWORD *)(v4 + 240),
                                    *(_DWORD *)(v4 + 96),
                                    *(_DWORD *)(v4 + 112));
          if ( *(_DWORD *)(v4 + 176) )
          {
            common::milog::MiLogStream::create(
              &v174,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/shop/player_shop_comp.cpp",
              "checkBuyGoods",
              945);
            v152 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                     &v174,
                     (const char (*)[37])"checkShopGoodsOutput fail, goods_id:");
            v153 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v152,
                     (const unsigned int *)(v4 + 48));
            v154 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                     v153,
                     (const char (*)[12])" buy_count:");
            v155 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v154,
                     (const unsigned int *)(v4 + 240));
            v156 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v155, (const char (*)[6])" ret:");
            v157 = common::milog::MiLogStream::operator<<<int,(int *)0>(v156, (const int *)(v4 + 176));
            v158 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v157, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v158, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v174);
            v9 = *(_DWORD *)(v4 + 176);
          }
          else
          {
            v9 = 0;
          }
        }
      }
      goto LABEL_178;
    }
    proto_cost_item = proto::ShopGoods::cost_item_list(proto_goods, idx);
    cost_item = std::vector<data::IdCountConfig>::operator[](&goods_config_ptr->cost_items, idx);
    v92 = proto::ItemParam::item_id(proto_cost_item);
    if ( *(_BYTE *)(((unsigned __int64)&cost_item->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cost_item->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cost_item->id);
    }
    if ( v92 != cost_item->id )
      goto LABEL_107;
    v93 = proto::ItemParam::count(proto_cost_item);
    if ( *(_BYTE *)(((unsigned __int64)&cost_item->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cost_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_item->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&cost_item->count);
    }
    if ( v93 == cost_item->count )
      v94 = 0;
    else
LABEL_107:
      v94 = 1;
    if ( v94 )
      break;
  }
  common::milog::MiLogStream::create(
    &v174,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/shop/player_shop_comp.cpp",
    "checkBuyGoods",
    868);
  v95 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v174,
          (const char (*)[33])"[SHOP] cost item mismatch, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v96 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v95, &val);
  v97 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v96, (const char (*)[16])" ,req item_id: ");
  *(_DWORD *)(v4 + 192) = proto::ItemParam::item_id(proto_cost_item);
  v98 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v97, (const unsigned int *)(v4 + 192));
  v99 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v98, (const char (*)[14])" ,req count: ");
  *(_DWORD *)(v4 + 208) = proto::ItemParam::count(proto_cost_item);
  v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v99, (const unsigned int *)(v4 + 208));
  v101 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v100, (const char (*)[17])" ,shop item_id: ");
  v102 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v101, &cost_item->id);
  v103 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v102, (const char (*)[14])" ,shop count:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v103, &cost_item->count);
  common::milog::MiLogStream::~MiLogStream(&v174);
  v9 = 707;
LABEL_179:
  result = v9;
  if ( v175 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 953: range 0000000013E8A5A8-0000000013E8D142
bool __cdecl PlayerShopComp::checkPreconditionSatisfy(
        PlayerShopComp *const this,
        const data::ShopGoodsExcelConfig *goods_config)
{
  bool v2; // r13
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::string *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r13
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r13
  common::milog::MiLogStream *v12; // rax
  const std::string *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  int v15; // r15d
  std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  PlayerHomeComp *HomeComp; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r13
  const std::string *v23; // rax
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  const std::string *v27; // rax
  bool v28; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v29; // rax
  uint32_t *v30; // rdx
  std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  bool isWatcherFinished; // al
  const std::string *v33; // rax
  bool v34; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v35; // rax
  _DWORD *v36; // rdx
  PlayerQuestComp *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r13
  const std::string *v41; // rax
  bool v42; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v43; // rax
  _DWORD *v44; // rdx
  PlayerQuestComp *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r13
  const std::string *v49; // rax
  PlayerGCGComp *GCGComp; // rax
  PlayerGCGComp *v51; // rax
  GCGDeckSystem *DeckSystem; // rax
  const std::string *v53; // rax
  PlayerGCGComp *v54; // rax
  GCGDeckSystem *v55; // rax
  PlayerGCGComp *v56; // rax
  GCGLevelChallenge *LevelChallenge; // rax
  const std::string *v58; // rax
  common::milog::MiLogStream *v59; // rcx
  int v60; // r15d
  std::__shared_ptr_access<TreasureSeelieActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v67; // rax
  unsigned int *v68; // rdx
  bool result; // al
  std::allocator<char> __a; // [rsp+2Dh] [rbp-1E3h] BYREF
  bool is_quest_finished; // [rsp+2Eh] [rbp-1E2h]
  bool is_quest_finished_0; // [rsp+2Fh] [rbp-1E1h]
  data::QuestState quest_state_0; // [rsp+30h] [rbp-1E0h]
  data::QuestState quest_state; // [rsp+34h] [rbp-1DCh]
  uint32_t watcher_id; // [rsp+38h] [rbp-1D8h]
  unsigned int pre_goods_id; // [rsp+3Ch] [rbp-1D4h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-1D0h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+48h] [rbp-1C8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-1C0h] BYREF
  std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-1B8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-1B0h]
  std::vector<unsigned int> *__for_range; // [rsp+68h] [rbp-1A8h]
  const PlayerHomeComp *home_comp; // [rsp+70h] [rbp-1A0h]
  std::vector<unsigned int> *__for_range_2; // [rsp+78h] [rbp-198h]
  common::milog::MiLogStream v85; // [rsp+80h] [rbp-190h] BYREF
  char v86[368]; // [rsp+A0h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 13 level_id:1180 64 4 18 region_day_id:1196 80 16 17 activity_ptr:1202 112 24 20 pre_good"
                        "s_id_vec:959 176 24 17 quest_id_vec:1107 240 40 15 finish_vec:1113";
  *(_QWORD *)(v3 + 16) = PlayerShopComp::checkPreconditionSatisfy;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->precondition);
  }
  if ( goods_config->precondition == SHOP_PRECONDITION_NONE )
  {
    v2 = 1;
    goto LABEL_198;
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 112));
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->precondition);
  }
  if ( goods_config->precondition != SHOP_PRECONDITION_SPECIFY )
  {
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_REST )
    {
      if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&goods_config->shop_type);
      }
      *(_DWORD *)(v3 + 64) = goods_config->shop_type;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 80));
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      v8 = ShopExcelConfigMgr::getPreGoodsIdVecByShopType(
             &v7->design_config.txt_config_mgr.shop_config_mgr,
             *(data::ShopType *)(v3 + 64),
             (std::vector<unsigned int> *)(v3 + 112)) != 0;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
      if ( v8 )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          980);
        v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v85,
               (const char (*)[47])"getPreGoodsIdVecByShopType failed, shop_type: ");
        common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(v9, (const data::ShopType *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
        goto LABEL_197;
      }
      goto LABEL_189;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_SHEET_REST )
    {
      if ( *(_BYTE *)(((unsigned __int64)&goods_config->secondary_sheet_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_config - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->secondary_sheet_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&goods_config->secondary_sheet_id);
      }
      *(_DWORD *)(v3 + 64) = goods_config->secondary_sheet_id;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 80));
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      v11 = ShopExcelConfigMgr::getPreGoodsIdVecBySheetId(
              &v10->design_config.txt_config_mgr.shop_config_mgr,
              *(_DWORD *)(v3 + 64),
              (std::vector<unsigned int> *)(v3 + 112)) != 0;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
      if ( v11 )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          989);
        v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v85,
                (const char (*)[45])"getPreGoodsIdVecBySheetId failed, sheet_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
        goto LABEL_197;
      }
      goto LABEL_189;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_SHEET_TEASURE_MAP_REGION )
    {
      if ( !std::vector<std::string>::size(&goods_config->precondition_param_list) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          997);
        common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
          &v85,
          (const char (*)[48])"[SHOP] precondition_param_list.size less than 1");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
        goto LABEL_197;
      }
      *(_DWORD *)(v3 + 64) = 0;
      v13 = std::vector<std::string>::operator[](&goods_config->precondition_param_list, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v13, (unsigned int *)(v3 + 64), 1) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1003);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v85,
          (const char (*)[23])"[SHOP] strToNum failed");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
        goto LABEL_197;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<TreasureMapActivity>((PlayerActivityComp *const)(v3 + 80));
      if ( std::operator==<TreasureMapActivity>(0LL, (const std::shared_ptr<TreasureMapActivity> *)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1009);
        v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v85,
                (const char (*)[41])"[TREASURE_MAP] activity is not opening: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        v16 = std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        if ( TreasureMapActivity::isRegionDone(v16, *(_DWORD *)(v3 + 64)) )
        {
          v15 = 1;
LABEL_48:
          std::shared_ptr<TreasureMapActivity>::~shared_ptr((std::shared_ptr<TreasureMapActivity> *const)(v3 + 80));
          if ( v15 != 1 )
            goto LABEL_197;
          goto LABEL_189;
        }
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1014);
        v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v85,
                (const char (*)[27])"[TREASURE_MAP] region_id: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 64));
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])off_2518D660);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      operator<<(v14, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v85);
      v2 = 0;
      v15 = 0;
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_HOME_LEVEL )
    {
      if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition_param >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&goods_config->precondition_param >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&goods_config->precondition_param);
      }
      *(_DWORD *)(v3 + 48) = goods_config->precondition_param;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      home_comp = Player::getHomeComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      HomeComp = Player::getHomeComp(this->player_);
      if ( PlayerHomeComp::getHomeLevel(HomeComp) < *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1024);
        v20 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v85,
                (const char (*)[33])"check home level failed. level: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v3 + 48));
        v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])" now level: ");
        *(_DWORD *)(v3 + 64) = PlayerHomeComp::getHomeLevel(home_comp);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
        goto LABEL_197;
      }
      goto LABEL_189;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_QUEST_FINISH )
    {
      if ( !std::vector<std::string>::size(&goods_config->precondition_param_list) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1032);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v85,
          (const char (*)[41])"precondition_param_list size less than 1");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
        goto LABEL_197;
      }
      *(_DWORD *)(v3 + 64) = 0;
      v23 = std::vector<std::string>::operator[](&goods_config->precondition_param_list, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v23, (unsigned int *)(v3 + 64), 1) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1038);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v85,
          (const char (*)[23])"[SHOP] strToNum failed");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
        goto LABEL_197;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      QuestComp = Player::getQuestComp(this->player_);
      if ( PlayerQuestComp::getQuestState(QuestComp, *(_DWORD *)(v3 + 64)) != QUEST_STATE_FINISHED )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1043);
        v25 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v85,
                (const char (*)[38])"check quest finish failed. quest_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
        goto LABEL_197;
      }
      goto LABEL_189;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_SHEET_FLEUR_FAIR_WATCHER_FINISH )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<FleurFairActivity>((PlayerActivityComp *const)(v3 + 80));
      if ( std::operator==<FleurFairActivity>(0LL, (const std::shared_ptr<FleurFairActivity> *)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1052);
        v26 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v85,
                (const char (*)[39])"[FLEUR_FAIR] activity is not opening: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v26, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
      }
      else if ( std::vector<std::string>::size(&goods_config->precondition_param_list) )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 176));
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v85, ",", &__a);
        v27 = std::vector<std::string>::operator[](&goods_config->precondition_param_list, 0LL);
        v28 = common::tools::StringUtils::splitToList<unsigned int>(
                v27,
                (const std::string *)&v85,
                (std::vector<unsigned int> *)(v3 + 176),
                0) != 0;
        std::string::~string(&v85);
        std::allocator<char>::~allocator(&__a);
        if ( v28 )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "checkPreconditionSatisfy",
            1063);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v85,
            (const char (*)[19])"splitToList failed");
          common::milog::MiLogStream::~MiLogStream(&v85);
          v2 = 0;
        }
        else
        {
          std::vector<bool>::vector((std::vector<bool> *const)(v3 + 240));
          __for_range = (std::vector<unsigned int> *)(v3 + 176);
          __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 176))._M_current;
          __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end) )
          {
            v29 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
            v30 = v29;
            if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v29);
            }
            watcher_id = *v30;
            v31 = std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
            isWatcherFinished = BaseActivity::isWatcherFinished((const BaseActivity *const)v31, watcher_id);
            std::vector<bool>::push_back((std::vector<bool> *const)(v3 + 240), isWatcherFinished);
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
          }
          v2 = CommonMiscs::evaluateLogicComb(LOGIC_AND, (const std::vector<bool> *)(v3 + 240));
          std::vector<bool>::~vector((std::vector<bool> *const)(v3 + 240));
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 176));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1057);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v85,
          (const char (*)[41])"precondition_param_list size less than 1");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
      }
      std::shared_ptr<FleurFairActivity>::~shared_ptr((std::shared_ptr<FleurFairActivity> *const)(v3 + 80));
      goto LABEL_197;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_QUEST_FINISH_ALL )
    {
      if ( !std::vector<std::string>::size(&goods_config->precondition_param_list) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1077);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v85,
          (const char (*)[41])"precondition_param_list size less than 1");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
        goto LABEL_197;
      }
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 176));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v85, ",", &__a);
      v33 = std::vector<std::string>::operator[](&goods_config->precondition_param_list, 0LL);
      v34 = common::tools::StringUtils::splitToList<unsigned int>(
              v33,
              (const std::string *)&v85,
              (std::vector<unsigned int> *)(v3 + 176),
              0) != 0;
      std::string::~string(&v85);
      std::allocator<char>::~allocator(&__a);
      if ( v34 )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1083);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v85, (const char (*)[19])"splitToList failed");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
      }
      else
      {
        std::vector<bool>::vector((std::vector<bool> *const)(v3 + 240));
        __for_range_0 = (std::vector<unsigned int> *)(v3 + 176);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 176))._M_current;
        __for_begin_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_begin_0) )
        {
          v35 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          v36 = v35;
          if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v35);
          }
          *(_DWORD *)(v3 + 64) = *v36;
          is_quest_finished = 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v37 = Player::getQuestComp(this->player_);
          quest_state = PlayerQuestComp::getQuestState(v37, *(_DWORD *)(v3 + 64));
          if ( quest_state != QUEST_STATE_FINISHED )
          {
            common::milog::MiLogStream::create(
              &v85,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/shop/player_shop_comp.cpp",
              "checkPreconditionSatisfy",
              1093);
            v38 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v85, (const char (*)[8])" quest:");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    (const unsigned int *)(v3 + 64));
            v40 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v39,
                    (const char (*)[22])" not finished, state:");
            __for_end._M_current = (unsigned int *)data::enumValToStr(quest_state);
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v40, (const char *const *)&__for_end);
            common::milog::MiLogStream::~MiLogStream(&v85);
            is_quest_finished = 0;
          }
          std::vector<bool>::push_back((std::vector<bool> *const)(v3 + 240), is_quest_finished);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        v2 = CommonMiscs::evaluateLogicComb(LOGIC_AND, (const std::vector<bool> *)(v3 + 240));
        std::vector<bool>::~vector((std::vector<bool> *const)(v3 + 240));
      }
LABEL_110:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 176));
      goto LABEL_197;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_QUEST_FINISH_ANY )
    {
      if ( !std::vector<std::string>::size(&goods_config->precondition_param_list) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1104);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v85,
          (const char (*)[41])"precondition_param_list size less than 1");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
        goto LABEL_197;
      }
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 176));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v85, ",", &__a);
      v41 = std::vector<std::string>::operator[](&goods_config->precondition_param_list, 0LL);
      v42 = common::tools::StringUtils::splitToList<unsigned int>(
              v41,
              (const std::string *)&v85,
              (std::vector<unsigned int> *)(v3 + 176),
              0) != 0;
      std::string::~string(&v85);
      std::allocator<char>::~allocator(&__a);
      if ( v42 )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1110);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v85, (const char (*)[19])"splitToList failed");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
      }
      else
      {
        std::vector<bool>::vector((std::vector<bool> *const)(v3 + 240));
        __for_range_1 = (std::vector<unsigned int> *)(v3 + 176);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 176))._M_current;
        __for_begin_0._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_begin_0) )
        {
          v43 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          v44 = v43;
          if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v43);
          }
          *(_DWORD *)(v3 + 64) = *v44;
          is_quest_finished_0 = 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v45 = Player::getQuestComp(this->player_);
          quest_state_0 = PlayerQuestComp::getQuestState(v45, *(_DWORD *)(v3 + 64));
          if ( quest_state_0 != QUEST_STATE_FINISHED )
          {
            common::milog::MiLogStream::create(
              &v85,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/shop/player_shop_comp.cpp",
              "checkPreconditionSatisfy",
              1120);
            v46 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v85, (const char (*)[8])" quest:");
            v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v46,
                    (const unsigned int *)(v3 + 64));
            v48 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v47,
                    (const char (*)[22])" not finished, state:");
            __for_end._M_current = (unsigned int *)data::enumValToStr(quest_state_0);
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v48, (const char *const *)&__for_end);
            common::milog::MiLogStream::~MiLogStream(&v85);
            is_quest_finished_0 = 0;
          }
          std::vector<bool>::push_back((std::vector<bool> *const)(v3 + 240), is_quest_finished_0);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        v2 = CommonMiscs::evaluateLogicComb(LOGIC_OR, (const std::vector<bool> *)(v3 + 240));
        std::vector<bool>::~vector((std::vector<bool> *const)(v3 + 240));
      }
      goto LABEL_110;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_GCG_LEVEL )
    {
      if ( std::vector<std::string>::size(&goods_config->precondition_param_list) )
      {
        *(_DWORD *)(v3 + 64) = 0;
        v49 = std::vector<std::string>::operator[](&goods_config->precondition_param_list, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v49, (unsigned int *)(v3 + 64), 1) )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "checkPreconditionSatisfy",
            1137);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v85,
            (const char (*)[23])"[SHOP] strToNum failed");
          common::milog::MiLogStream::~MiLogStream(&v85);
          v2 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          GCGComp = Player::getGCGComp(this->player_);
          v2 = PlayerGCGComp::getLevel(GCGComp) >= *(_DWORD *)(v3 + 64);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1131);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v85,
          (const char (*)[41])"precondition_param_list size less than 1");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
      }
      goto LABEL_197;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_GCG_CARD_PROFICIENCY )
    {
      if ( std::vector<std::string>::size(&goods_config->precondition_param_list) > 1 )
      {
        *(_DWORD *)(v3 + 48) = 0;
        *(_DWORD *)(v3 + 64) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &>(
               &goods_config->precondition_param_list,
               (unsigned int *)(v3 + 48),
               (unsigned int *)(v3 + 64),
               (unsigned int *)&goods_config->precondition_param_list) )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "checkPreconditionSatisfy",
            1153);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v85,
            (const char (*)[19])"strVecToNum failed");
          common::milog::MiLogStream::~MiLogStream(&v85);
          v2 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v51 = Player::getGCGComp(this->player_);
          DeckSystem = PlayerGCGComp::getDeckSystem(v51);
          v2 = GCGDeckSystem::getCardProficiency(DeckSystem, *(_DWORD *)(v3 + 48)) >= *(_DWORD *)(v3 + 64);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1146);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v85,
          (const char (*)[41])"precondition_param_list size less than 1");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
      }
      goto LABEL_197;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_GCG_HAS_CARD )
    {
      if ( std::vector<std::string>::size(&goods_config->precondition_param_list) )
      {
        *(_DWORD *)(v3 + 64) = 0;
        v53 = std::vector<std::string>::operator[](&goods_config->precondition_param_list, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v53, (unsigned int *)(v3 + 64), 1) )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "checkPreconditionSatisfy",
            1168);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v85, (const char (*)[17])" strToNum failed");
          common::milog::MiLogStream::~MiLogStream(&v85);
          v2 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v54 = Player::getGCGComp(this->player_);
          v55 = PlayerGCGComp::getDeckSystem(v54);
          v2 = GCGDeckSystem::getCardNum(v55, *(_DWORD *)(v3 + 64)) != 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1162);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          &v85,
          (const char (*)[42])" precondition_param_list size less than 1");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
      }
      goto LABEL_197;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition == SHOP_PRECONDITION_GCG_LEVEL_CHALLENGE_FINISHED )
    {
      if ( std::vector<std::string>::size(&goods_config->precondition_param_list) > 1 )
      {
        *(_DWORD *)(v3 + 48) = 0;
        *(_DWORD *)(v3 + 64) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &>(
               &goods_config->precondition_param_list,
               (unsigned int *)(v3 + 48),
               (unsigned int *)(v3 + 64),
               (unsigned int *)&goods_config->precondition_param_list) )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "checkPreconditionSatisfy",
            1184);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v85,
            (const char (*)[19])"strVecToNum failed");
          common::milog::MiLogStream::~MiLogStream(&v85);
          v2 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v56 = Player::getGCGComp(this->player_);
          LevelChallenge = PlayerGCGComp::getLevelChallenge(v56);
          v2 = GCGLevelChallenge::getFinishedChallengeCount(LevelChallenge, *(_DWORD *)(v3 + 48)) >= *(_DWORD *)(v3 + 64);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "checkPreconditionSatisfy",
          1177);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v85,
          (const char (*)[41])"precondition_param_list size less than 2");
        common::milog::MiLogStream::~MiLogStream(&v85);
        v2 = 0;
      }
      goto LABEL_197;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->precondition);
    }
    if ( goods_config->precondition != SHOP_PRECONDITION_DONE_TEASURE_SEELIE_REGION )
    {
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "checkPreconditionSatisfy",
        1216);
      v64 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v85,
              (const char (*)[31])"precondition error. goods_id: ");
      v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &goods_config->goods_id);
      v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v65, (const char (*)[16])" precondition: ");
      common::milog::MiLogStream::operator<<<data::ShopPrecondition,(data::ShopPrecondition*)0>(
        v66,
        &goods_config->precondition);
      common::milog::MiLogStream::~MiLogStream(&v85);
      v2 = 0;
      goto LABEL_197;
    }
    if ( !std::vector<std::string>::size(&goods_config->precondition_param_list) )
    {
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "checkPreconditionSatisfy",
        1193);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        &v85,
        (const char (*)[48])"[SHOP] precondition_param_list.size less than 1");
      common::milog::MiLogStream::~MiLogStream(&v85);
      v2 = 0;
      goto LABEL_197;
    }
    *(_DWORD *)(v3 + 64) = 0;
    v58 = std::vector<std::string>::operator[](&goods_config->precondition_param_list, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v58, (unsigned int *)(v3 + 64), 1) )
    {
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "checkPreconditionSatisfy",
        1199);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v85,
        (const char (*)[37])"[SHOP] region_day_id strToNum failed");
      common::milog::MiLogStream::~MiLogStream(&v85);
      v2 = 0;
      goto LABEL_197;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getActivityComp(this->player_);
    PlayerActivityComp::findOpenningActivity<TreasureSeelieActivity>((PlayerActivityComp *const)(v3 + 80));
    if ( std::operator==<TreasureSeelieActivity>(0LL, (const std::shared_ptr<TreasureSeelieActivity> *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/shop/player_shop_comp.cpp",
        "checkPreconditionSatisfy",
        1205);
      v59 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v85,
              (const char (*)[44])"[TREASURE_SEELIE] activity is not opening: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      v61 = std::__shared_ptr_access<TreasureSeelieActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TreasureSeelieActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( TreasureSeelieActivity::isRegionDoneByOpenDay(v61, *(_DWORD *)(v3 + 64)) )
      {
        v60 = 1;
LABEL_186:
        std::shared_ptr<TreasureSeelieActivity>::~shared_ptr((std::shared_ptr<TreasureSeelieActivity> *const)(v3 + 80));
        if ( v60 != 1 )
          goto LABEL_197;
        goto LABEL_189;
      }
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/shop/player_shop_comp.cpp",
        "checkPreconditionSatisfy",
        1210);
      v62 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v85,
              (const char (*)[34])"[TREASURE_SEELIE] region_day_id: ");
      v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, (const unsigned int *)(v3 + 64));
      v59 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v63, (const char (*)[11])off_2518D660);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v59, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v85);
    v2 = 0;
    v60 = 0;
    goto LABEL_186;
  }
  if ( std::vector<std::string>::size(&goods_config->precondition_param_list) )
  {
    *(_DWORD *)(v3 + 64) = 0;
    v6 = std::vector<std::string>::operator[](&goods_config->precondition_param_list, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v6, (unsigned int *)(v3 + 64), 1) )
    {
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "checkPreconditionSatisfy",
        970);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v85,
        (const char (*)[23])"[SHOP] strToNum failed");
      common::milog::MiLogStream::~MiLogStream(&v85);
      v2 = 0;
      goto LABEL_197;
    }
    std::vector<unsigned int>::push_back(
      (std::vector<unsigned int> *const)(v3 + 112),
      (const std::vector<unsigned int>::value_type *)(v3 + 64));
LABEL_189:
    __for_range_2 = (std::vector<unsigned int> *)(v3 + 112);
    __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 112))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 112))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end) )
    {
      v67 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
      v68 = v67;
      if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v67 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v67);
      }
      pre_goods_id = *v68;
      if ( !PlayerShopComp::checkGoodsBoughtNumSatisfy(this, pre_goods_id) )
      {
        v2 = 0;
        goto LABEL_197;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    v2 = 1;
    goto LABEL_197;
  }
  common::milog::MiLogStream::create(
    &v85,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/shop/player_shop_comp.cpp",
    "checkPreconditionSatisfy",
    964);
  common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
    &v85,
    (const char (*)[48])"[SHOP] precondition_param_list.size less than 1");
  common::milog::MiLogStream::~MiLogStream(&v85);
  v2 = 0;
LABEL_197:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 112));
LABEL_198:
  result = v2;
  if ( v86 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1234: range 0000000013E8D144-0000000013E8D431
bool __fastcall PlayerShopComp::checkGoodsBoughtNumSatisfy(PlayerShopComp *const this, uint32_t goods_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  bool result; // al
  uint32_t v8; // edi
  uint32_t bought_num; // [rsp+14h] [rbp-BCh]
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 buy_limit:1244 64 4 13 goods_id:1233";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::checkGoodsBoughtNumSatisfy;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = goods_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
                       &v5->design_config.txt_config_mgr.shop_config_mgr,
                       *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( goods_config_ptr )
  {
    bought_num = PlayerShopComp::refreshAndGetShopGoodsBoughtNum(this, goods_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config_ptr->buy_limit);
    }
    *(_DWORD *)(v2 + 48) = goods_config_ptr->buy_limit;
    v8 = *(_DWORD *)(v2 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3)
                                                                      + 0x7FFF8000) )
    {
      v8 = (_DWORD)goods_config_ptr + 12;
      __asan_report_load4(&goods_config_ptr->shop_type);
    }
    PlayerShopComp::changeBuyLimitByLimitCondition(this, goods_config_ptr->shop_type, v8, (uint32_t *)(v2 + 48));
    if ( *(_DWORD *)(v2 + 48) )
      result = bought_num >= *(_DWORD *)(v2 + 48);
    else
      result = bought_num != 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/shop/player_shop_comp.cpp",
      "checkGoodsBoughtNumSatisfy",
      1238);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v13,
           (const char (*)[51])"[SHOP] findShopGoodsExcelConfig failed, goods_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0;
  }
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

// Line 1256: range 0000000013E8D432-0000000013E8DE96
uint32_t __cdecl PlayerShopComp::refreshAndGetShopGoodsBoughtNum(
        PlayerShopComp *const this,
        const data::ShopGoodsExcelConfig *goods_config)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord> >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> >::pointer v7; // rax
  uint32_t *p_last_buy_time; // rax
  uint32_t last_buy_time; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  bool v17; // dl
  uint32_t v18; // edx
  uint32_t v19; // edx
  uint32_t v20; // edx
  uint32_t refresh_type; // [rsp+14h] [rbp-FCh]
  uint32_t now; // [rsp+18h] [rbp-F8h]
  uint32_t refresh_param; // [rsp+1Ch] [rbp-F4h]
  uint32_t cur_passed_months; // [rsp+20h] [rbp-F0h]
  uint32_t cur_passed_weeks; // [rsp+28h] [rbp-E8h]
  uint32_t cur_passed_days; // [rsp+30h] [rbp-E0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord> >::_Self __y; // [rsp+38h] [rbp-D8h] BYREF
  ShopRecord *shop_record; // [rsp+40h] [rbp-D0h]
  ShopGoodsRecord *goods_record; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-C0h] BYREF
  char v31[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 shop_type:1257 64 8 14 shop_iter:1258 96 8 15 goods_iter:1265";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::refreshAndGetShopGoodsBoughtNum;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->shop_type);
  }
  *(_DWORD *)(v2 + 48) = goods_config->shop_type;
  *(std::map<unsigned int,ShopRecord>::iterator *)(v2 + 64) = std::map<unsigned int,ShopRecord>::find(
                                                                &this->shop_record_map_,
                                                                (const std::map<unsigned int,ShopRecord>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,ShopRecord>::end(&this->shop_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0;
    goto LABEL_66;
  }
  v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord> > *const)(v2 + 64));
  shop_record = &v6->second;
  *(std::map<unsigned int,ShopGoodsRecord>::iterator *)(v2 + 96) = std::map<unsigned int,ShopGoodsRecord>::find(
                                                                     &v6->second.goods_record_map,
                                                                     &goods_config->goods_id);
  __y._M_node = std::map<unsigned int,ShopGoodsRecord>::end(&shop_record->goods_record_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> >::_Self *)(v2 + 96),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> >::_Self *)&__y) )
  {
    result = 0;
    goto LABEL_66;
  }
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->refresh_type);
  }
  refresh_type = goods_config->refresh_type;
  v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> > *const)(v2 + 96));
  goods_record = &v7->second;
  p_last_buy_time = &v7->second.last_buy_time;
  if ( *(_BYTE *)(((unsigned __int64)p_last_buy_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_last_buy_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_last_buy_time >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(p_last_buy_time);
  }
  last_buy_time = goods_record->last_buy_time;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->begin_timestamp);
  }
  if ( last_buy_time < goods_config->begin_timestamp )
  {
    if ( *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_record->bought_num);
    }
    if ( goods_record->bought_num )
    {
      PlayerShopComp::addToHistoryGoodsRecord(this, *(_DWORD *)(v2 + 48), goods_record);
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/shop/player_shop_comp.cpp",
        "refreshAndGetShopGoodsBoughtNum",
        1278);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v30,
              (const char (*)[34])"reset goods bought num, goods_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &goods_config->goods_id);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" bought_num:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &goods_record->bought_num);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])" last_buy_time:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &goods_record->last_buy_time);
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v16, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v17 = *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)goods_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3)
                                                                    + 0x7FFF8000);
      if ( v17 )
        __asan_report_store4(&goods_record->bought_num, (((_BYTE)goods_record + 4) & 7u) + 3, v17);
      goods_record->bought_num = 0;
    }
    result = 0;
    goto LABEL_66;
  }
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->refresh_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->refresh_param >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->refresh_param);
  }
  refresh_param = goods_config->refresh_param;
  switch ( refresh_type )
  {
    case 0u:
      if ( *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&goods_record->bought_num);
      }
      result = goods_record->bought_num;
      break;
    case 3u:
      if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&goods_config->begin_timestamp);
      }
      cur_passed_days = PlayerShopComp::getPassedDays(this, goods_config->begin_timestamp, now);
      if ( *(_BYTE *)(((unsigned __int64)&goods_record->last_buy_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_record + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_record->last_buy_time >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&goods_record->last_buy_time);
      }
      v18 = goods_record->last_buy_time;
      if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&goods_config->begin_timestamp);
      }
      if ( cur_passed_days / refresh_param == PlayerShopComp::getPassedDays(this, goods_config->begin_timestamp, v18)
                                            / refresh_param )
      {
        if ( *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)goods_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&goods_record->bought_num);
        }
        result = goods_record->bought_num;
        break;
      }
LABEL_65:
      PlayerShopComp::addToHistoryGoodsRecord(this, *(_DWORD *)(v2 + 48), goods_record);
      std::map<unsigned int,ShopGoodsRecord>::erase[abi:cxx11](
        &shop_record->goods_record_map,
        *(std::map<unsigned int,ShopGoodsRecord>::iterator *)(v2 + 96));
      result = 0;
      break;
    case 2u:
      if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&goods_config->begin_timestamp);
      }
      cur_passed_weeks = PlayerShopComp::getPassedWeeks(this, goods_config->begin_timestamp, now, refresh_param);
      if ( *(_BYTE *)(((unsigned __int64)&goods_record->last_buy_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_record + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_record->last_buy_time >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&goods_record->last_buy_time);
      }
      v19 = goods_record->last_buy_time;
      if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&goods_config->begin_timestamp);
      }
      if ( cur_passed_weeks != PlayerShopComp::getPassedWeeks(this, goods_config->begin_timestamp, v19, refresh_param) )
        goto LABEL_65;
      if ( *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&goods_record->bought_num);
      }
      result = goods_record->bought_num;
      break;
    case 1u:
      if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&goods_config->begin_timestamp);
      }
      cur_passed_months = PlayerShopComp::getPassedMonths(this, goods_config->begin_timestamp, now, refresh_param);
      if ( *(_BYTE *)(((unsigned __int64)&goods_record->last_buy_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_record + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_record->last_buy_time >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&goods_record->last_buy_time);
      }
      v20 = goods_record->last_buy_time;
      if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&goods_config->begin_timestamp);
      }
      if ( cur_passed_months != PlayerShopComp::getPassedMonths(this, goods_config->begin_timestamp, v20, refresh_param) )
        goto LABEL_65;
      if ( *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_record->bought_num >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&goods_record->bought_num);
      }
      result = goods_record->bought_num;
      break;
    default:
      goto LABEL_65;
  }
LABEL_66:
  if ( v31 == (char *)v2 )
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

// Line 1334: range 0000000013E8DE98-0000000013E8E081
uint32_t __cdecl PlayerShopComp::getNextRefreshTime(
        PlayerShopComp *const this,
        data::ShopRefreshType refresh_type,
        uint32_t refresh_param,
        uint32_t begin_time)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t next_refresh_time; // [rsp+20h] [rbp-40h]
  uint32_t now; // [rsp+24h] [rbp-3Ch]
  uint32_t time_offset; // [rsp+28h] [rbp-38h]
  uint32_t next_refresh_need_days; // [rsp+30h] [rbp-30h]
  uint32_t cur_days_0; // [rsp+34h] [rbp-2Ch]
  uint32_t cur_week_day; // [rsp+38h] [rbp-28h]
  uint32_t cur_week_refresh_time; // [rsp+3Ch] [rbp-24h]
  uint32_t cur_days; // [rsp+40h] [rbp-20h]
  uint32_t cur_month_day; // [rsp+44h] [rbp-1Ch]
  uint32_t cur_month_left_days; // [rsp+4Ch] [rbp-14h]
  std::shared_ptr<Config> v18; // [rsp+50h] [rbp-10h] BYREF

  if ( refresh_type == SHOP_REFRESH_NONE )
    return 0;
  if ( !refresh_param )
    return 0;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  next_refresh_time = 0;
  switch ( refresh_type )
  {
    case SHOP_REFRESH_MONTHLY:
      cur_days = common::tools::TimeUtils::getTimeDay(now, time_offset);
      cur_month_day = common::tools::TimeUtils::getTimeMonthDay(now, time_offset);
      if ( cur_month_day >= refresh_param )
      {
        cur_month_left_days = common::tools::TimeUtils::getDaysOfMonth(now, time_offset) - cur_month_day;
        return common::tools::TimeUtils::getDailyStartTime(cur_month_left_days + cur_days + refresh_param, time_offset);
      }
      else
      {
        return common::tools::TimeUtils::getDailyStartTime(cur_days + refresh_param - cur_month_day, time_offset);
      }
    case SHOP_REFRESH_WEEKLY:
      cur_week_day = common::tools::TimeUtils::getTimeWeekDay(now, time_offset);
      cur_week_refresh_time = common::tools::TimeUtils::getWeekTime(now, time_offset) + 86400 * refresh_param - 86400;
      if ( cur_week_day >= refresh_param )
        return cur_week_refresh_time + 604800;
      else
        return cur_week_refresh_time;
    case SHOP_REFRESH_DAILY:
      next_refresh_need_days = refresh_param - PlayerShopComp::getPassedDays(this, begin_time, now) % refresh_param;
      cur_days_0 = common::tools::TimeUtils::getTimeDay(now, time_offset);
      return common::tools::TimeUtils::getDailyStartTime(cur_days_0 + next_refresh_need_days, time_offset);
  }
  return next_refresh_time;
};

// Line 1393: range 0000000013E8E082-0000000013E8E471
void __cdecl PlayerShopComp::getGoodsCostCoin(
        PlayerShopComp *const this,
        uint32_t scoin_discount_rate,
        const data::ShopGoodsExcelConfig *goods_config,
        uint32_t *cost_scoin,
        uint32_t *cost_hcoin,
        uint32_t *cost_mcoin)
{
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rbx
  uint32_t Now; // esi
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rsi
  bool v11; // dl
  uint32_t v12; // ecx
  char v13; // dl
  bool v14; // dl
  __int64 v15; // rsi
  uint32_t v16; // ecx
  char v17; // dl
  bool v18; // dl
  uint32_t DiscountScoin; // ecx
  char v20; // dl
  __int64 v21; // rsi
  bool v22; // dl
  __int64 v23; // rsi
  uint32_t discount_hcoin; // ecx
  char v25; // dl
  bool v26; // dl
  uint32_t discount_mcoin; // ecx
  char v28; // dl
  bool v29; // dl
  const data::ShopmallGoodsSaleConfig *sale_config_ptr; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v36[2]; // [rsp+40h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v36);
  p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v36)->design_config.txt_config_mgr.shopmall_config_mgr;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->goods_id);
  }
  sale_config_ptr = ShopmallExcelConfigMgr::findShopmallGoodsSaleConfigByTime(
                      p_shopmall_config_mgr,
                      goods_config->goods_id,
                      Now);
  std::shared_ptr<Config>::~shared_ptr(v36);
  if ( sale_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&sale_config_ptr->discount_scoin >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&sale_config_ptr->discount_scoin >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&sale_config_ptr->discount_scoin);
    }
    v21 = scoin_discount_rate;
    DiscountScoin = PlayerShopComp::getDiscountScoin(this, scoin_discount_rate, sale_config_ptr->discount_scoin);
    v20 = *(_BYTE *)(((unsigned __int64)cost_scoin >> 3) + 0x7FFF8000);
    LOBYTE(v21) = v20 != 0;
    v22 = v20 != 0 && (char)(((unsigned __int8)cost_scoin & 7) + 3) >= v20;
    if ( v22 )
      __asan_report_store4(cost_scoin, v21, v22);
    *cost_scoin = DiscountScoin;
    v23 = (((_BYTE)sale_config_ptr + 20) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&sale_config_ptr->discount_hcoin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)sale_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sale_config_ptr->discount_hcoin >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&sale_config_ptr->discount_hcoin);
    }
    discount_hcoin = sale_config_ptr->discount_hcoin;
    v25 = *(_BYTE *)(((unsigned __int64)cost_hcoin >> 3) + 0x7FFF8000);
    LOBYTE(v23) = v25 != 0;
    v26 = v25 != 0 && (char)(((unsigned __int8)cost_hcoin & 7) + 3) >= v25;
    if ( v26 )
      __asan_report_store4(cost_hcoin, v23, v26);
    *cost_hcoin = discount_hcoin;
    if ( *(_BYTE *)(((unsigned __int64)&sale_config_ptr->discount_mcoin >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&sale_config_ptr->discount_mcoin >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&sale_config_ptr->discount_mcoin);
    }
    discount_mcoin = sale_config_ptr->discount_mcoin;
    v28 = *(_BYTE *)(((unsigned __int64)cost_mcoin >> 3) + 0x7FFF8000);
    LOBYTE(v23) = v28 != 0;
    v29 = v28 != 0 && (char)(((unsigned __int8)cost_mcoin & 7) + 3) >= v28;
    if ( v29 )
      __asan_report_store4(cost_mcoin, v23, v29);
    *cost_mcoin = discount_mcoin;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->cost_scoin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->cost_scoin >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->cost_scoin);
    }
    v10 = scoin_discount_rate;
    v8 = PlayerShopComp::getDiscountScoin(this, scoin_discount_rate, goods_config->cost_scoin);
    v9 = *(_BYTE *)(((unsigned __int64)cost_scoin >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v9 != 0;
    v11 = v9 != 0 && (char)(((unsigned __int8)cost_scoin & 7) + 3) >= v9;
    if ( v11 )
      __asan_report_store4(cost_scoin, v10, v11);
    *cost_scoin = v8;
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->cost_hcoin >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->cost_hcoin >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->cost_hcoin);
    }
    v12 = goods_config->cost_hcoin;
    v13 = *(_BYTE *)(((unsigned __int64)cost_hcoin >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v13 != 0;
    v14 = v13 != 0 && (char)(((unsigned __int8)cost_hcoin & 7) + 3) >= v13;
    if ( v14 )
      __asan_report_store4(cost_hcoin, v10, v14);
    *cost_hcoin = v12;
    v15 = (((_BYTE)goods_config + 36) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->cost_mcoin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->cost_mcoin >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->cost_mcoin);
    }
    v16 = goods_config->cost_mcoin;
    v17 = *(_BYTE *)(((unsigned __int64)cost_mcoin >> 3) + 0x7FFF8000);
    LOBYTE(v15) = v17 != 0;
    v18 = v17 != 0 && (char)(((unsigned __int8)cost_mcoin & 7) + 3) >= v17;
    if ( v18 )
      __asan_report_store4(cost_mcoin, v15, v18);
    *cost_mcoin = v16;
  }
};

// Line 1410: range 0000000013E8E472-0000000013E8F2DD
int32_t __cdecl PlayerShopComp::fillShopGoodsData(
        PlayerShopComp *const this,
        uint32_t scoin_discount_rate,
        const data::ShopGoodsExcelConfig *goods_config,
        proto::ShopGoods *proto_goods)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // rcx
  int goods_id; // edi
  ShopExcelConfigMgr *p_shop_config_mgr; // rcx
  google::protobuf::uint32 *v14; // rax
  google::protobuf::uint32 *v15; // rdx
  uint32_t begin_timestamp; // ecx
  uint32_t refresh_param; // edx
  uint32_t GoodsDisableType; // edx
  google::protobuf::RepeatedField<unsigned int> *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  google::protobuf::uint32 bought_num; // [rsp+28h] [rbp-148h]
  uint32_t now; // [rsp+2Ch] [rbp-144h]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  proto::ItemParam *proto_item; // [rsp+40h] [rbp-130h]
  const data::ShopmallGoodsSaleConfig *sale_config_ptr; // [rsp+48h] [rbp-128h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+50h] [rbp-120h]
  const data::ShopSpecialKeysDataExcelConfig *shop_special_config_ptr; // [rsp+58h] [rbp-118h]
  const data::IdCountConfig *cost_item; // [rsp+60h] [rbp-110h]
  proto::ItemParam *proto_cost_item; // [rsp+68h] [rbp-108h]
  std::shared_ptr<Config> v38; // [rsp+70h] [rbp-100h] BYREF
  common::milog::MiLogStream v39; // [rsp+80h] [rbp-F0h] BYREF
  char v40[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 20 selling_item_id:1417 48 4 15 cost_scoin:1426 64 4 15 cost_hcoin:1427 80 4 15 cost_mcoi"
                        "n:1428 96 4 14 buy_limit:1456 112 4 22 next_refresh_time:1479 128 4 13 left_num:1469";
  *(_QWORD *)(v4 + 16) = PlayerShopComp::fillShopGoodsData;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -202116348;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->goods_id);
  }
  proto::ShopGoods::set_goods_id(proto_goods, goods_config->goods_id);
  proto_item = proto::ShopGoods::mutable_goods_item(proto_goods);
  *(_DWORD *)(v4 + 32) = 0;
  if ( PlayerShopComp::getSellingItemId(this, goods_config, (uint32_t *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/shop/player_shop_comp.cpp",
      "fillShopGoodsData",
      1420);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v39,
           (const char (*)[38])"[SHOP] getSellingItemId failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 128) = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 128));
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" ,goods_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &goods_config->goods_id);
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = -1;
  }
  else
  {
    proto::ItemParam::set_item_id(proto_item, *(_DWORD *)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->item_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->item_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->item_count);
    }
    proto::ItemParam::set_count(proto_item, goods_config->item_count);
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 64) = 0;
    *(_DWORD *)(v4 + 80) = 0;
    PlayerShopComp::getGoodsCostCoin(
      this,
      scoin_discount_rate,
      goods_config,
      (uint32_t *)(v4 + 48),
      (uint32_t *)(v4 + 64),
      (uint32_t *)(v4 + 80));
    proto::ShopGoods::set_scoin(proto_goods, *(_DWORD *)(v4 + 48));
    proto::ShopGoods::set_hcoin(proto_goods, *(_DWORD *)(v4 + 64));
    proto::ShopGoods::set_mcoin(proto_goods, *(_DWORD *)(v4 + 80));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v38);
    p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.shopmall_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->goods_id);
    }
    sale_config_ptr = ShopmallExcelConfigMgr::findShopmallGoodsSaleConfigByTime(
                        p_shopmall_config_mgr,
                        goods_config->goods_id,
                        now);
    std::shared_ptr<Config>::~shared_ptr(&v38);
    if ( sale_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&sale_config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&sale_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&sale_config_ptr->id);
      }
      proto::ShopGoods::set_discount_id(proto_goods, sale_config_ptr->id);
      if ( *(_BYTE *)(((unsigned __int64)&sale_config_ptr->discount_begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&sale_config_ptr->discount_begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&sale_config_ptr->discount_begin_timestamp);
      }
      proto::ShopGoods::set_discount_begin_time(proto_goods, sale_config_ptr->discount_begin_timestamp);
      if ( *(_BYTE *)(((unsigned __int64)&sale_config_ptr->discount_end_timestamp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sale_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sale_config_ptr->discount_end_timestamp >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&sale_config_ptr->discount_end_timestamp);
      }
      proto::ShopGoods::set_discount_end_time(proto_goods, sale_config_ptr->discount_end_timestamp);
    }
    __for_range = &goods_config->cost_items;
    __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&goods_config->cost_items)._M_current;
    __for_end._M_current = std::vector<data::IdCountConfig>::end(&goods_config->cost_items)._M_current;
    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(&__for_begin, &__for_end) )
    {
      cost_item = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
      proto_cost_item = proto::ShopGoods::add_cost_item_list(proto_goods);
      if ( *(_BYTE *)(((unsigned __int64)&cost_item->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cost_item->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cost_item->id);
      }
      proto::ItemParam::set_item_id(proto_cost_item, cost_item->id);
      if ( *(_BYTE *)(((unsigned __int64)&cost_item->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cost_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_item->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&cost_item->count);
      }
      proto::ItemParam::set_count(proto_cost_item, cost_item->count);
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
    }
    bought_num = PlayerShopComp::refreshAndGetShopGoodsBoughtNum(this, goods_config);
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->choose_one_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->choose_one_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->choose_one_group_id);
    }
    if ( goods_config->choose_one_group_id )
      bought_num = PlayerShopComp::isNChooseOneBought(this, goods_config);
    proto::ShopGoods::set_bought_num(proto_goods, bought_num);
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->buy_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->buy_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->buy_limit);
    }
    *(_DWORD *)(v4 + 96) = goods_config->buy_limit;
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->goods_id);
    }
    goods_id = goods_config->goods_id;
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      goods_id = (_DWORD)goods_config + 12;
      __asan_report_load4(&goods_config->shop_type);
    }
    PlayerShopComp::changeBuyLimitByLimitCondition(this, goods_config->shop_type, goods_id, (uint32_t *)(v4 + 96));
    proto::ShopGoods::set_buy_limit(proto_goods, *(_DWORD *)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->begin_timestamp);
    }
    proto::ShopGoods::set_begin_time(proto_goods, goods_config->begin_timestamp);
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->end_timestamp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->end_timestamp >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->end_timestamp);
    }
    proto::ShopGoods::set_end_time(proto_goods, goods_config->end_timestamp);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v38);
    p_shop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.shop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->goods_id);
    }
    shop_special_config_ptr = data::ShopExcelConfigMgrBase::findShopSpecialKeysDataExcelConfig(
                                p_shop_config_mgr,
                                goods_config->goods_id);
    std::shared_ptr<Config>::~shared_ptr(&v38);
    if ( shop_special_config_ptr )
    {
      if ( *(_DWORD *)(v4 + 96) )
      {
        *(_DWORD *)(v4 + 128) = *(_DWORD *)(v4 + 96) - bought_num;
        v14 = (google::protobuf::uint32 *)std::min<unsigned int>(
                                            (const unsigned int *)(v4 + 128),
                                            &shop_special_config_ptr->single_limit);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        proto::ShopGoods::set_single_limit(proto_goods, *v15);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&shop_special_config_ptr->single_limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)shop_special_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_special_config_ptr->single_limit >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&shop_special_config_ptr->single_limit);
        }
        proto::ShopGoods::set_single_limit(proto_goods, shop_special_config_ptr->single_limit);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->begin_timestamp);
    }
    begin_timestamp = goods_config->begin_timestamp;
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->refresh_param >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->refresh_param >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->refresh_param);
    }
    refresh_param = goods_config->refresh_param;
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->refresh_type);
    }
    *(_DWORD *)(v4 + 112) = PlayerShopComp::getNextRefreshTime(
                              this,
                              goods_config->refresh_type,
                              refresh_param,
                              begin_timestamp);
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->end_timestamp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->end_timestamp >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->end_timestamp);
    }
    if ( goods_config->end_timestamp && goods_config->end_timestamp < *(_DWORD *)(v4 + 112) )
      *(_DWORD *)(v4 + 112) = goods_config->end_timestamp;
    proto::ShopGoods::set_next_refresh_time(proto_goods, *(_DWORD *)(v4 + 112));
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->min_player_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->min_player_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->min_player_level);
    }
    proto::ShopGoods::set_min_level(proto_goods, goods_config->min_player_level);
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->max_player_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->max_player_level >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->max_player_level);
    }
    proto::ShopGoods::set_max_level(proto_goods, goods_config->max_player_level);
    GoodsDisableType = PlayerShopComp::findGoodsDisableType(this, *(_DWORD *)(v4 + 32));
    proto::ShopGoods::set_disable_type(proto_goods, GoodsDisableType);
    v19 = proto::ShopGoods::mutable_pre_goods_id_list(proto_goods);
    PlayerShopComp::fillPreGoodsIdList(this, goods_config, v19);
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->secondary_sheet_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->secondary_sheet_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->secondary_sheet_id);
    }
    proto::ShopGoods::set_secondary_sheet_id(proto_goods, goods_config->secondary_sheet_id);
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "fillShopGoodsData",
      1496);
    v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v39, (const char (*)[18])"[SHOP] goods_id: ");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &goods_config->goods_id);
    v22 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v21,
            (const char (*)[22])" ,next_refresh_time: ");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 112));
    v24 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v23,
            (const char (*)[27])" ,pre_goods_id_list size: ");
    *(_DWORD *)(v4 + 128) = proto::ShopGoods::pre_goods_id_list_size(proto_goods);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)(v4 + 128));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 0;
  }
  if ( v40 == (char *)v4 )
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
  return result;
};

// Line 1503: range 0000000013E8F2DE-0000000013E8F5BE
uint32_t __cdecl PlayerShopComp::getShopScoinDiscountRate(
        const PlayerShopComp *const this,
        const data::ShopExcelConfig *shop_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t scoin_discount_rate; // r14d
  PlayerReputationComp *ReputationComp; // rcx
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Level; // ecx
  char v10; // al
  uint32_t result; // eax
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 24 city_reputation_ptr:1511";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::getShopScoinDiscountRate;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&shop_config->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)shop_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_config->city_id >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&shop_config->city_id);
  }
  if ( !shop_config->city_id )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&shop_config->city_discount_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&shop_config->city_discount_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&shop_config->city_discount_level);
  }
  if ( shop_config->city_discount_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ReputationComp = Player::getReputationComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&shop_config->city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_config->city_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_config->city_id);
    }
    PlayerReputationComp::findCityReputationPtr(
      (PlayerReputationComp *const)(v2 + 32),
      (__int64)ReputationComp,
      shop_config->city_id);
    if ( !std::operator!=<CityReputation>((const std::shared_ptr<CityReputation> *)(v2 + 32), 0LL) )
      goto LABEL_21;
    v7 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( CityReputation::checkCityReputationOpen(v7) )
      goto LABEL_21;
    v8 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Level = CityReputation::getLevel(v8);
    if ( *(_BYTE *)(((unsigned __int64)&shop_config->city_discount_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_config->city_discount_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_config->city_discount_level);
    }
    if ( Level < shop_config->city_discount_level )
LABEL_21:
      v10 = 0;
    else
      v10 = 1;
    if ( v10 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&shop_config->scoin_discount_rate >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_config->scoin_discount_rate >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_config->scoin_discount_rate);
      }
      scoin_discount_rate = shop_config->scoin_discount_rate;
    }
    else
    {
      scoin_discount_rate = 0;
    }
    std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v2 + 32));
  }
  else
  {
LABEL_10:
    scoin_discount_rate = 0;
  }
  result = scoin_discount_rate;
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

// Line 1524: range 0000000013E8F5C0-0000000013E8F651
uint32_t __cdecl PlayerShopComp::getDiscountScoin(
        const PlayerShopComp *const this,
        uint32_t scoin_discount_rate,
        uint32_t scoin)
{
  uint32_t discount_scoin; // [rsp+14h] [rbp-Ch]

  if ( !scoin_discount_rate || scoin_discount_rate > 0x63 )
    return scoin;
  discount_scoin = scoin * (unsigned __int64)scoin_discount_rate / 0x64;
  if ( discount_scoin <= 5 )
    return scoin;
  if ( discount_scoin % 0xA > 4 )
    return discount_scoin - discount_scoin % 0xA + 5;
  return discount_scoin - discount_scoin % 0xA;
};

// Line 1544: range 0000000013E8F652-0000000013E904C2
uint32_t __cdecl PlayerShopComp::findGoodsDisableType(const PlayerShopComp *const this, uint32_t selling_item_id)
{
  uint32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t AvatarComp; // eax
  int v9; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t AvatarRepeatCount; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  PlayerHomeComp *HomeComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  PlayerAvatarComp *v16; // rax
  PlayerItemComp *ItemComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v19; // rax
  uint32_t *v20; // rdx
  PlayerHomeComp *v21; // rax
  int v22; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  PlayerGCGComp *GCGComp; // rax
  GCGDeckSystem *DeckSystem; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  bool v27; // r14
  PlayerGCGComp *v28; // rax
  GCGDeckSystem *v29; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  PlayerGCGComp *v31; // rax
  GCGDeckSystem *v32; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  PlayerGCGComp *v34; // rax
  GCGDeckSystem *v35; // rax
  uint32_t result; // eax
  bool is_all_unlock; // [rsp+2Bh] [rbp-125h]
  uint32_t field_id; // [rsp+2Ch] [rbp-124h]
  uint32_t card_back_id; // [rsp+30h] [rbp-120h]
  uint32_t card_id; // [rsp+34h] [rbp-11Ch]
  uint32_t bgm_id; // [rsp+38h] [rbp-118h]
  uint32_t costume_id; // [rsp+3Ch] [rbp-114h]
  uint32_t furniture_id; // [rsp+40h] [rbp-110h]
  uint32_t avatar_id; // [rsp+44h] [rbp-10Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-108h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-100h] BYREF
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+58h] [rbp-F8h]
  std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-F0h]
  const data::AvatarCardChangeExcelConfig *avatar_card_config_ptr; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<Config> v50; // [rsp+70h] [rbp-E0h] BYREF
  char v51[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 card_id:1630 48 4 14 card_face:1631 64 16 22 formal_avatar_ptr:1558 96 24 15 bgm_id_vec:1605";
  *(_QWORD *)(v3 + 16) = PlayerShopComp::findGoodsDisableType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v50);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
  material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                          &v6->design_config.txt_config_mgr.material_config_mgr,
                          selling_item_id);
  std::shared_ptr<Config>::~shared_ptr(&v50);
  if ( !material_config_ptr )
  {
    v2 = 0;
    goto LABEL_93;
  }
  if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&material_config_ptr->material_type);
  }
  if ( material_config_ptr->material_type == MATERIAL_AVATAR )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v50);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
    avatar_id = MaterialExcelConfigMgr::findAvatarIdByAvatarMaterial(
                  &v7->design_config.txt_config_mgr.material_config_mgr,
                  selling_item_id);
    std::shared_ptr<Config>::~shared_ptr(&v50);
    if ( !avatar_id )
    {
      v2 = 0;
      goto LABEL_93;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 64), AvatarComp);
    if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 64)) )
    {
      v2 = 0;
      v9 = 0;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v50);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
      avatar_card_config_ptr = data::MaterialExcelConfigMgrBase::findAvatarCardChangeExcelConfig(
                                 &v10->design_config.txt_config_mgr.material_config_mgr,
                                 avatar_id);
      std::shared_ptr<Config>::~shared_ptr(&v50);
      if ( avatar_card_config_ptr )
      {
        v11 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        AvatarRepeatCount = FormalAvatar::getAvatarRepeatCount(v11);
        if ( *(_BYTE *)(((unsigned __int64)&avatar_card_config_ptr->last_talent_item_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&avatar_card_config_ptr->last_talent_item_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&avatar_card_config_ptr->last_talent_item_count);
        }
        if ( AvatarRepeatCount < avatar_card_config_ptr->last_talent_item_count )
        {
          v9 = 1;
        }
        else
        {
          v2 = 1;
          v9 = 0;
        }
      }
      else
      {
        v2 = 0;
        v9 = 0;
      }
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 64));
    if ( v9 == 1 )
      goto LABEL_92;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&material_config_ptr->material_type);
    }
    if ( material_config_ptr->material_type == MATERIAL_FURNITURE_FORMULA )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v50);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
      furniture_id = MaterialExcelConfigMgr::findFurnitureIdByFurnitureFormulaMaterial(
                       &v13->design_config.txt_config_mgr.material_config_mgr,
                       selling_item_id);
      std::shared_ptr<Config>::~shared_ptr(&v50);
      if ( !furniture_id )
      {
        v2 = 0;
        goto LABEL_93;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      HomeComp = Player::getHomeComp(this->player_);
      if ( PlayerHomeComp::isFurnitureFormulaUnlocked(HomeComp, furniture_id) )
      {
        v2 = 2;
        goto LABEL_93;
      }
      goto LABEL_92;
    }
    if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&material_config_ptr->material_type);
    }
    if ( material_config_ptr->material_type == MATERIAL_COSTUME )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v50);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
      costume_id = MaterialExcelConfigMgr::findCostumeIdByCostumeMaterial(
                     &v15->design_config.txt_config_mgr.material_config_mgr,
                     selling_item_id);
      std::shared_ptr<Config>::~shared_ptr(&v50);
      if ( !costume_id )
      {
        v2 = 0;
        goto LABEL_93;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v16 = Player::getAvatarComp(this->player_);
      if ( PlayerAvatarComp::isHasCostumeId(v16, costume_id) )
      {
        v2 = 3;
        goto LABEL_93;
      }
      goto LABEL_92;
    }
    if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&material_config_ptr->material_type);
    }
    if ( material_config_ptr->material_type != MATERIAL_BGM )
    {
      if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&material_config_ptr->material_type);
      }
      if ( material_config_ptr->material_type == MATERIAL_GCG_CARD )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v50);
        v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
        card_id = MaterialExcelConfigMgr::findGCGCardIdByMaterial(
                    &v23->design_config.txt_config_mgr.material_config_mgr,
                    selling_item_id);
        std::shared_ptr<Config>::~shared_ptr(&v50);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        GCGComp = Player::getGCGComp(this->player_);
        DeckSystem = PlayerGCGComp::getDeckSystem(GCGComp);
        if ( GCGDeckSystem::isCardNumExceeded(DeckSystem, card_id) )
        {
          v2 = 5;
          goto LABEL_93;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&material_config_ptr->material_type);
        }
        if ( material_config_ptr->material_type == MATERIAL_GCG_CARD_FACE )
        {
          *(_DWORD *)(v3 + 32) = 0;
          *(_DWORD *)(v3 + 48) = 0;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v50);
          v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
          v27 = MaterialExcelConfigMgr::findGCGCardFaceByMaterial(
                  &v26->design_config.txt_config_mgr.material_config_mgr,
                  selling_item_id,
                  (uint32_t *)(v3 + 32),
                  (data::GCGCardFaceType *)(v3 + 48)) == 0;
          std::shared_ptr<Config>::~shared_ptr(&v50);
          if ( v27 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v28 = Player::getGCGComp(this->player_);
            v29 = PlayerGCGComp::getDeckSystem(v28);
            if ( GCGDeckSystem::isCardFaceUnlock(v29, *(_DWORD *)(v3 + 32), *(data::GCGCardFaceType *)(v3 + 48)) )
            {
              v2 = 6;
              goto LABEL_93;
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(&material_config_ptr->material_type);
          }
          if ( material_config_ptr->material_type == MATERIAL_GCG_CARD_BACK )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v50);
            v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
            card_back_id = MaterialExcelConfigMgr::findGCGCardBackIdByMaterial(
                             &v30->design_config.txt_config_mgr.material_config_mgr,
                             selling_item_id);
            std::shared_ptr<Config>::~shared_ptr(&v50);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v31 = Player::getGCGComp(this->player_);
            v32 = PlayerGCGComp::getDeckSystem(v31);
            if ( GCGDeckSystem::isCardBackUnlock(v32, card_back_id) )
            {
              v2 = 7;
              goto LABEL_93;
            }
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4(&material_config_ptr->material_type);
            }
            if ( material_config_ptr->material_type == MATERIAL_GCG_FIELD )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v50);
              v33 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
              field_id = MaterialExcelConfigMgr::findGCGFieldIdByMaterial(
                           &v33->design_config.txt_config_mgr.material_config_mgr,
                           selling_item_id);
              std::shared_ptr<Config>::~shared_ptr(&v50);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v34 = Player::getGCGComp(this->player_);
              v35 = PlayerGCGComp::getDeckSystem(v34);
              if ( GCGDeckSystem::isFieldUnlock(v35, field_id) )
              {
                v2 = 8;
                goto LABEL_93;
              }
            }
          }
        }
      }
      goto LABEL_92;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    if ( PlayerItemComp::getItemCount(ItemComp, selling_item_id) )
    {
      v2 = 4;
      goto LABEL_93;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v50);
    v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
    MaterialExcelConfigMgr::findBgmListByBgmMaterial(
      (std::vector<unsigned int> *)(v3 + 96),
      &v18->design_config.txt_config_mgr.material_config_mgr,
      selling_item_id);
    std::shared_ptr<Config>::~shared_ptr(&v50);
    is_all_unlock = 1;
    __for_range = (std::vector<unsigned int> *)(v3 + 96);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v19 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      bgm_id = *v20;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v21 = Player::getHomeComp(this->player_);
      if ( !PlayerHomeComp::isHomeBgmUnlocked(v21, bgm_id) )
      {
        is_all_unlock = 0;
        break;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( is_all_unlock )
    {
      v2 = 4;
      v22 = 0;
    }
    else
    {
      v22 = 1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    if ( v22 == 1 )
LABEL_92:
      v2 = 0;
  }
LABEL_93:
  result = v2;
  if ( v51 == (char *)v3 )
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

// Line 1660: range 0000000013E904C4-0000000013E90BA1
void __cdecl PlayerShopComp::fillPreGoodsIdList(
        PlayerShopComp *const this,
        const data::ShopGoodsExcelConfig *goods_config,
        google::protobuf::RepeatedField<unsigned int> *pre_goods_id_list)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rax
  _DWORD *v15; // rdx
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-F0h]
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 sheet_id:1682 48 4 17 pre_goods_id:1690 64 24 21 pre_goods_id_vec:1683";
  *(_QWORD *)(v3 + 16) = PlayerShopComp::fillPreGoodsIdList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->precondition);
  }
  if ( goods_config->precondition == SHOP_PRECONDITION_SPECIFY )
  {
    google::protobuf::RepeatedField<unsigned int>::Add(pre_goods_id_list, &goods_config->precondition_param);
    goto LABEL_34;
  }
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->precondition);
  }
  if ( goods_config->precondition == SHOP_PRECONDITION_REST )
  {
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->shop_type);
    }
    *(_DWORD *)(v3 + 32) = goods_config->shop_type;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    v7 = ShopExcelConfigMgr::getPreGoodsIdVecByShopType(
           &v6->design_config.txt_config_mgr.shop_config_mgr,
           *(data::ShopType *)(v3 + 32),
           (std::vector<unsigned int> *)(v3 + 64)) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( v7 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "fillPreGoodsIdList",
        1671);
      v8 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v22,
             (const char (*)[54])"[SHOP] getPreGoodsIdVecByShopType failed, shop_type: ");
      common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(v8, (const data::ShopType *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      __for_range = (std::vector<unsigned int> *)(v3 + 64);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v3 + 48) = *v10;
        google::protobuf::RepeatedField<unsigned int>::Add(pre_goods_id_list, (const unsigned int *)(v3 + 48));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
LABEL_33:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
    goto LABEL_34;
  }
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->precondition >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->precondition);
  }
  if ( goods_config->precondition == SHOP_PRECONDITION_SHEET_REST )
  {
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->secondary_sheet_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->secondary_sheet_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->secondary_sheet_id);
    }
    *(_DWORD *)(v3 + 32) = goods_config->secondary_sheet_id;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    v12 = ShopExcelConfigMgr::getPreGoodsIdVecBySheetId(
            &v11->design_config.txt_config_mgr.shop_config_mgr,
            *(_DWORD *)(v3 + 32),
            (std::vector<unsigned int> *)(v3 + 64)) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "fillPreGoodsIdList",
        1686);
      v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v22,
              (const char (*)[52])"[SHOP] getPreGoodsIdVecBySheetId failed, sheet_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      __for_range_0 = (std::vector<unsigned int> *)(v3 + 64);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        *(_DWORD *)(v3 + 48) = *v15;
        google::protobuf::RepeatedField<unsigned int>::Add(pre_goods_id_list, (const unsigned int *)(v3 + 48));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    goto LABEL_33;
  }
LABEL_34:
  if ( v23 == (char *)v3 )
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

// Line 1698: range 0000000013E90BA2-0000000013E919B6
int32_t __cdecl PlayerShopComp::getSellingItemId(
        PlayerShopComp *const this,
        const data::ShopGoodsExcelConfig *goods_config,
        uint32_t *selling_item_id)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t *p_rotate_id; // rax
  __int64 v8; // rsi
  ShopExcelConfigMgr *p_shop_config_mgr; // rcx
  bool v10; // r15
  common::milog::MiLogStream *v11; // rax
  int v12; // r15d
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t v25; // edx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  uint32_t v31; // edx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  uint32_t v37; // edx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::vector<unsigned int>::size_type v44; // rsi
  std::vector<unsigned int>::reference v45; // rax
  uint32_t *v46; // rdx
  uint32_t v47; // ecx
  char v48; // dl
  bool v49; // dl
  uint32_t item_id; // ecx
  char v51; // dl
  bool v52; // dl
  int32_t result; // eax
  uint32_t rotate_item_count; // [rsp+28h] [rbp-108h]
  uint32_t refresh_param; // [rsp+2Ch] [rbp-104h]
  std::shared_ptr<Config> v58; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v59; // [rsp+40h] [rbp-F0h] BYREF
  char v60[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 8 now:1723 48 4 17 refresh_type:1731 64 4 17 select_index:1739 80 4 16 passed_days:1754 9"
                        "6 24 16 item_id_vec:1702";
  *(_QWORD *)(v4 + 16) = PlayerShopComp::getSellingItemId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  p_rotate_id = &goods_config->rotate_id;
  v8 = (((_BYTE)goods_config + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->rotate_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->rotate_id >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(p_rotate_id);
  }
  if ( goods_config->rotate_id )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 96));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v58);
    p_shop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v58)->design_config.txt_config_mgr.shop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->rotate_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->rotate_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->rotate_id);
    }
    v10 = ShopExcelConfigMgr::getItemIdVecByRotateId(
            p_shop_config_mgr,
            goods_config->rotate_id,
            (std::vector<unsigned int> *)(v4 + 96)) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v58);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "getSellingItemId",
        1705);
      v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v59,
              (const char (*)[50])"[SHOP] getItemIdVecByRotateId failed, rotate id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &goods_config->rotate_id);
      common::milog::MiLogStream::~MiLogStream(&v59);
      v3 = -1;
      v12 = 0;
      goto LABEL_55;
    }
    rotate_item_count = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 96));
    if ( !rotate_item_count )
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "getSellingItemId",
        1712);
      v13 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v59,
              (const char (*)[43])"[SHOP] rotate_item_count is 0, rotate id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &goods_config->rotate_id);
      common::milog::MiLogStream::~MiLogStream(&v59);
      v3 = -1;
      v12 = 0;
      goto LABEL_55;
    }
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->begin_timestamp);
    }
    if ( !goods_config->begin_timestamp )
      goto LABEL_19;
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->end_timestamp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->end_timestamp >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->end_timestamp);
    }
    if ( goods_config->end_timestamp )
    {
      *(_DWORD *)(v4 + 32) = common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&goods_config->begin_timestamp);
      }
      if ( goods_config->begin_timestamp > *(_DWORD *)(v4 + 32) )
        goto LABEL_28;
      if ( *(_BYTE *)(((unsigned __int64)&goods_config->end_timestamp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_config - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->end_timestamp >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&goods_config->end_timestamp);
      }
      if ( goods_config->end_timestamp >= *(_DWORD *)(v4 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&goods_config->refresh_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&goods_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&goods_config->refresh_type);
        }
        *(_DWORD *)(v4 + 48) = goods_config->refresh_type;
        if ( *(_BYTE *)(((unsigned __int64)&goods_config->refresh_param >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)goods_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->refresh_param >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&goods_config->refresh_param);
        }
        refresh_param = goods_config->refresh_param;
        if ( !refresh_param )
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "getSellingItemId",
            1735);
          v24 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v59,
                  (const char (*)[38])"[SHOP] refresh_param is 0, goods_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &goods_config->goods_id);
          common::milog::MiLogStream::~MiLogStream(&v59);
          v3 = -1;
          v12 = 0;
          goto LABEL_55;
        }
        *(_DWORD *)(v4 + 64) = 0;
        switch ( *(_DWORD *)(v4 + 48) )
        {
          case 1:
            v25 = *(_DWORD *)(v4 + 32);
            if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&goods_config->begin_timestamp);
            }
            *(_DWORD *)(v4 + 80) = PlayerShopComp::getPassedMonths(
                                     this,
                                     goods_config->begin_timestamp,
                                     v25,
                                     refresh_param);
            *(_DWORD *)(v4 + 64) = *(_DWORD *)(v4 + 80) % rotate_item_count;
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/shop/player_shop_comp.cpp",
              "getSellingItemId",
              1744);
            v26 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v59,
                    (const char (*)[18])"[SHOP] goods_id: ");
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &goods_config->goods_id);
            v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v27,
                    (const char (*)[18])" ,passed_months: ");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v4 + 80));
            v30 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v29,
                    (const char (*)[17])" ,select_index: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v4 + 64));
            common::milog::MiLogStream::~MiLogStream(&v59);
            break;
          case 2:
            v31 = *(_DWORD *)(v4 + 32);
            if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&goods_config->begin_timestamp);
            }
            *(_DWORD *)(v4 + 80) = PlayerShopComp::getPassedWeeks(
                                     this,
                                     goods_config->begin_timestamp,
                                     v31,
                                     refresh_param);
            *(_DWORD *)(v4 + 64) = *(_DWORD *)(v4 + 80) % rotate_item_count;
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/shop/player_shop_comp.cpp",
              "getSellingItemId",
              1750);
            v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v59,
                    (const char (*)[18])"[SHOP] goods_id: ");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &goods_config->goods_id);
            v34 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v33,
                    (const char (*)[17])" ,passed_weeks: ");
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v34,
                    (const unsigned int *)(v4 + 80));
            v36 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v35,
                    (const char (*)[17])" ,select_index: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v4 + 64));
            common::milog::MiLogStream::~MiLogStream(&v59);
            break;
          case 3:
            v37 = *(_DWORD *)(v4 + 32);
            if ( *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&goods_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&goods_config->begin_timestamp);
            }
            *(_DWORD *)(v4 + 80) = PlayerShopComp::getPassedDays(this, goods_config->begin_timestamp, v37);
            *(_DWORD *)(v4 + 64) = *(_DWORD *)(v4 + 80) / refresh_param % rotate_item_count;
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/shop/player_shop_comp.cpp",
              "getSellingItemId",
              1756);
            v38 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v59,
                    (const char (*)[18])"[SHOP] goods_id: ");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &goods_config->goods_id);
            v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v39,
                    (const char (*)[16])" ,passed_days: ");
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v40,
                    (const unsigned int *)(v4 + 80));
            v42 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v41,
                    (const char (*)[17])" ,select_index: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v4 + 64));
            common::milog::MiLogStream::~MiLogStream(&v59);
            break;
          default:
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/shop/player_shop_comp.cpp",
              "getSellingItemId",
              1760);
            v43 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v59,
                    (const char (*)[43])"[SHOP] refresh_type is invalid, goods_id: ");
            common::milog::MiLogStream::operator<<<data::ShopRefreshType,(data::ShopRefreshType*)0>(
              v43,
              (const data::ShopRefreshType *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v59);
            v3 = -1;
            v12 = 0;
            goto LABEL_55;
        }
        v44 = *(unsigned int *)(v4 + 64);
        v45 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 96), v44);
        v46 = v45;
        if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v45);
        }
        v47 = *v46;
        v48 = *(_BYTE *)(((unsigned __int64)selling_item_id >> 3) + 0x7FFF8000);
        LOBYTE(v44) = v48 != 0;
        v49 = v48 != 0 && (char)(((unsigned __int8)selling_item_id & 7) + 3) >= v48;
        if ( v49 )
          __asan_report_store4(selling_item_id, v44, v49);
        *selling_item_id = v47;
        v12 = 1;
      }
      else
      {
LABEL_28:
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "getSellingItemId",
          1726);
        v17 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v59,
                (const char (*)[39])"[SHOP] now time is not in range, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v4 + 80));
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" ,now time: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v4 + 32));
        v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" ,begin time: ");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                &goods_config->begin_timestamp);
        v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" ,end time: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &goods_config->end_timestamp);
        common::milog::MiLogStream::~MiLogStream(&v59);
        v3 = -1;
        v12 = 0;
      }
    }
    else
    {
LABEL_19:
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "getSellingItemId",
        1718);
      v14 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v59,
              (const char (*)[57])"[SHOP] begin time stamp or end time stamp invalid, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 80));
      v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" ,goods_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &goods_config->goods_id);
      common::milog::MiLogStream::~MiLogStream(&v59);
      v3 = -1;
      v12 = 0;
    }
LABEL_55:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 96));
    if ( v12 != 1 )
      goto LABEL_63;
    goto LABEL_62;
  }
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->item_id);
  }
  item_id = goods_config->item_id;
  v51 = *(_BYTE *)(((unsigned __int64)selling_item_id >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v51 != 0;
  v52 = v51 != 0 && (char)(((unsigned __int8)selling_item_id & 7) + 3) >= v51;
  if ( v52 )
    __asan_report_store4(selling_item_id, v8, v52);
  *selling_item_id = item_id;
LABEL_62:
  v3 = 0;
LABEL_63:
  result = v3;
  if ( v60 == (char *)v4 )
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
  return result;
};

// Line 1776: range 0000000013E919B8-0000000013E91C86
__int64 __fastcall PlayerShopComp::getPassedMonths(
        PlayerShopComp *const this,
        uint32_t begin_timestamp,
        uint32_t end_timestamp,
        uint32_t refresh_month_day)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t passed_months; // [rsp+28h] [rbp-A8h]
  uint32_t time_offset; // [rsp+2Ch] [rbp-A4h]
  uint32_t begin_months; // [rsp+30h] [rbp-A0h]
  uint32_t begin_month_day; // [rsp+34h] [rbp-9Ch]
  uint32_t end_months; // [rsp+38h] [rbp-98h]
  uint32_t end_month_day; // [rsp+3Ch] [rbp-94h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-80h] BYREF
  char v20[96]; // [rsp+70h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 22 refresh_month_day:1775";
  *(_QWORD *)(v4 + 16) = PlayerShopComp::getPassedMonths;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = refresh_month_day;
  if ( begin_timestamp < end_timestamp )
  {
    if ( *(_DWORD *)(v4 + 32) && *(_DWORD *)(v4 + 32) <= 0x1Cu )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
      time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v9->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v18);
      begin_months = common::tools::TimeUtils::getTimeMonth(begin_timestamp - time_offset);
      begin_month_day = common::tools::TimeUtils::getTimeMonthDay(begin_timestamp, time_offset);
      end_months = common::tools::TimeUtils::getTimeMonth(end_timestamp - time_offset);
      end_month_day = common::tools::TimeUtils::getTimeMonthDay(end_timestamp, time_offset);
      if ( begin_month_day >= *(_DWORD *)(v4 + 32) || end_month_day < *(_DWORD *)(v4 + 32) )
      {
        if ( begin_month_day < *(_DWORD *)(v4 + 32) || end_month_day >= *(_DWORD *)(v4 + 32) )
          passed_months = end_months - begin_months;
        else
          passed_months = end_months - begin_months - 1;
      }
      else
      {
        passed_months = end_months - begin_months + 1;
      }
      result = passed_months;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "getPassedMonths",
        1784);
      v8 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             &v19,
             (const char (*)[57])"[SHOP] refresh_month_day is invalid, refresh_month_day: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0LL;
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1816: range 0000000013E91C88-0000000013E91F58
__int64 __fastcall PlayerShopComp::getPassedWeeks(
        PlayerShopComp *const this,
        uint32_t begin_timestamp,
        uint32_t end_timestamp,
        uint32_t refresh_week_day)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t passed_weeks; // [rsp+28h] [rbp-A8h]
  uint32_t time_offset; // [rsp+2Ch] [rbp-A4h]
  uint32_t begin_weeks; // [rsp+30h] [rbp-A0h]
  uint32_t begin_week_day; // [rsp+34h] [rbp-9Ch]
  uint32_t end_weeks; // [rsp+38h] [rbp-98h]
  uint32_t end_week_day; // [rsp+3Ch] [rbp-94h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-80h] BYREF
  char v20[96]; // [rsp+70h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 21 refresh_week_day:1815";
  *(_QWORD *)(v4 + 16) = PlayerShopComp::getPassedWeeks;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = refresh_week_day;
  if ( begin_timestamp < end_timestamp )
  {
    if ( *(_DWORD *)(v4 + 32) && *(_DWORD *)(v4 + 32) <= 7u )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
      time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v9->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v18);
      begin_weeks = common::tools::TimeUtils::getTimeWeek(begin_timestamp, time_offset);
      begin_week_day = common::tools::TimeUtils::getTimeWeekDay(begin_timestamp, time_offset);
      end_weeks = common::tools::TimeUtils::getTimeWeek(end_timestamp, time_offset);
      end_week_day = common::tools::TimeUtils::getTimeWeekDay(end_timestamp, time_offset);
      if ( begin_week_day >= *(_DWORD *)(v4 + 32) || end_week_day < *(_DWORD *)(v4 + 32) )
      {
        if ( begin_week_day < *(_DWORD *)(v4 + 32) || end_week_day >= *(_DWORD *)(v4 + 32) )
          passed_weeks = end_weeks - begin_weeks;
        else
          passed_weeks = end_weeks - begin_weeks - 1;
      }
      else
      {
        passed_weeks = end_weeks - begin_weeks + 1;
      }
      result = passed_weeks;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "getPassedWeeks",
        1824);
      v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v19,
             (const char (*)[56])"[SHOP] refresh_month_day is invalid, refresh_week_day: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0LL;
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1856: range 0000000013E91F5A-0000000013E91FF6
uint32_t __cdecl PlayerShopComp::getPassedDays(
        PlayerShopComp *const this,
        uint32_t begin_timestamp,
        uint32_t end_timestamp)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t time_offset; // [rsp+10h] [rbp-20h]
  uint32_t begin_days; // [rsp+14h] [rbp-1Ch]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-10h] BYREF

  if ( begin_timestamp >= end_timestamp )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  begin_days = common::tools::TimeUtils::getTimeDay(begin_timestamp, time_offset);
  return common::tools::TimeUtils::getTimeDay(end_timestamp, time_offset) - begin_days;
};

// Line 1871: range 0000000013E91FF8-0000000013E921E9
uint32_t __cdecl PlayerShopComp::findOpeningActivityScheduleId(const PlayerShopComp *const this, uint32_t shop_type)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t v3; // ebx
  unsigned int *v4; // rax
  unsigned int *v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isScheduleBeginning; // bl
  uint32_t opening_schedule_id; // [rsp+18h] [rbp-68h]
  unsigned int schedule_id; // [rsp+1Ch] [rbp-64h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const std::vector<unsigned int> *schedule_id_vec; // [rsp+30h] [rbp-50h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v15; // [rsp+40h] [rbp-40h] BYREF
  std::vector<unsigned int> v16; // [rsp+50h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  ActivityShopExcelConfigMgr::getScheduleIdVecByShopType(
    &v16,
    &v2->design_config.txt_config_mgr.activity_shop_config_mgr,
    shop_type);
  schedule_id_vec = &v16;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( std::vector<unsigned int>::empty(&v16) )
  {
    v3 = 0;
  }
  else
  {
    opening_schedule_id = 0;
    __for_range = schedule_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(schedule_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(schedule_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v4 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      schedule_id = *v5;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v15);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
      isScheduleBeginning = NewActivityExcelConfigMgr::isScheduleBeginning(
                              &v6->design_config.txt_config_mgr.new_activity_config_mgr,
                              schedule_id,
                              0);
      std::shared_ptr<Config>::~shared_ptr(&v15);
      if ( isScheduleBeginning )
      {
        opening_schedule_id = schedule_id;
        break;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( opening_schedule_id )
      v3 = opening_schedule_id;
    else
      v3 = 0;
  }
  std::vector<unsigned int>::~vector(&v16);
  return v3;
};

// Line 1906: range 0000000013E921EA-0000000013E923A4
bool __cdecl PlayerShopComp::isActivityGoodsDisplaySatisfied(
        const PlayerShopComp *const this,
        uint32_t schedule_id,
        const data::ShopGoodsExcelConfig *goods_config)
{
  ActivityShopExcelConfigMgr *p_activity_shop_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  const data::ActivityShopSheetExcelConfig *sheet_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v8; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  p_activity_shop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.activity_shop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->secondary_sheet_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->secondary_sheet_id >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->secondary_sheet_id);
  }
  sheet_config_ptr = data::ActivityShopExcelConfigMgrBase::findActivityShopSheetExcelConfig(
                       p_activity_shop_config_mgr,
                       goods_config->secondary_sheet_id);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( sheet_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&sheet_config_ptr->is_ahead_preview >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)sheet_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&sheet_config_ptr->is_ahead_preview >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load1(&sheet_config_ptr->is_ahead_preview);
    }
    return sheet_config_ptr->is_ahead_preview
        || PlayerShopComp::isActivitySheetValid(this, schedule_id, sheet_config_ptr);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/shop/player_shop_comp.cpp",
      "isActivityGoodsDisplaySatisfied",
      1910);
    v4 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v9,
           (const char (*)[68])"[ACTIVITY_SHOP] findActivityShopSheetExcelConfig failed, sheet_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &goods_config->secondary_sheet_id);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0;
  }
};

// Line 1923: range 0000000013E923A6-0000000013E92512
bool __cdecl PlayerShopComp::checkBuyActivityGoods(
        const PlayerShopComp *const this,
        uint32_t schedule_id,
        const data::ShopGoodsExcelConfig *goods_config)
{
  ActivityShopExcelConfigMgr *p_activity_shop_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  const data::ActivityShopSheetExcelConfig *sheet_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v8; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  p_activity_shop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.activity_shop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->secondary_sheet_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->secondary_sheet_id >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->secondary_sheet_id);
  }
  sheet_config_ptr = data::ActivityShopExcelConfigMgrBase::findActivityShopSheetExcelConfig(
                       p_activity_shop_config_mgr,
                       goods_config->secondary_sheet_id);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( sheet_config_ptr )
    return PlayerShopComp::isActivitySheetValid(this, schedule_id, sheet_config_ptr);
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/shop/player_shop_comp.cpp",
    "checkBuyActivityGoods",
    1927);
  v4 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
         &v9,
         (const char (*)[68])"[ACTIVITY_SHOP] findActivityShopSheetExcelConfig failed, sheet_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &goods_config->secondary_sheet_id);
  common::milog::MiLogStream::~MiLogStream(&v9);
  return 0;
};

// Line 1935: range 0000000013E92514-0000000013E92772
bool __cdecl PlayerShopComp::isActivitySheetValid(
        const PlayerShopComp *const this,
        uint32_t schedule_id,
        const data::ActivityShopSheetExcelConfig *sheet_config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r14
  bool result; // al
  std::vector<data::ActivityShopSheetCond>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<data::ActivityShopSheetCond>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::vector<data::ActivityShopSheetCond> *__for_range; // [rsp+30h] [rbp-C0h]
  const data::ActivityShopSheetCond *sheet_cond; // [rsp+38h] [rbp-B8h]
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 19 cond_check_vec:1936";
  *(_QWORD *)(v3 + 16) = PlayerShopComp::isActivitySheetValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<bool>::vector((std::vector<bool> *const)(v3 + 48));
  __for_range = &sheet_config->cond;
  __for_begin._M_current = std::vector<data::ActivityShopSheetCond>::begin(&sheet_config->cond)._M_current;
  __for_end._M_current = std::vector<data::ActivityShopSheetCond>::end(&sheet_config->cond)._M_current;
  while ( __gnu_cxx::operator!=<data::ActivityShopSheetCond const*,std::vector<data::ActivityShopSheetCond>>(
            &__for_begin,
            &__for_end) )
  {
    sheet_cond = __gnu_cxx::__normal_iterator<data::ActivityShopSheetCond const*,std::vector<data::ActivityShopSheetCond>>::operator*(&__for_begin);
    if ( PlayerShopComp::isActivitySheetCondSatisfied(this, schedule_id, sheet_cond) )
      std::vector<bool>::push_back((std::vector<bool> *const)(v3 + 48), 1);
    else
      std::vector<bool>::push_back((std::vector<bool> *const)(v3 + 48), 0);
    __gnu_cxx::__normal_iterator<data::ActivityShopSheetCond const*,std::vector<data::ActivityShopSheetCond>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&sheet_config->cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&sheet_config->cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&sheet_config->cond_comb);
  }
  v6 = CommonMiscs::evaluateLogicComb(sheet_config->cond_comb, (const std::vector<bool> *)(v3 + 48));
  std::vector<bool>::~vector((std::vector<bool> *const)(v3 + 48));
  result = v6;
  if ( v13 == (char *)v3 )
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

// Line 1953: range 0000000013E92774-0000000013E92C92
__int64 __fastcall PlayerShopComp::isActivitySheetCondSatisfied(
        const PlayerShopComp *const this,
        uint32_t schedule_id,
        const data::ActivityShopSheetCond *sheet_cond)
{
  SeaLampActivity *Now; // r14
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  data::ActivityShopSheetCondType type; // eax
  PlayerQuestComp *QuestComp; // rbx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  uint32_t *v10; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v11; // rax
  uint32_t *v12; // rdx
  std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v19; // rax
  uint32_t *v20; // rdx
  int v21; // eax
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 16 schedule_id:1952 64 16 17 activity_ptr:1984";
  *(_QWORD *)(v4 + 16) = PlayerShopComp::isActivitySheetCondSatisfied;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&sheet_cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&sheet_cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&sheet_cond->type);
  }
  type = sheet_cond->type;
  if ( type == ACTIVITY_SHOP_SHEET_COND_SEA_LAMP_PHASE )
  {
    if ( std::vector<unsigned int>::empty(&sheet_cond->param) )
    {
      LODWORD(Now) = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<SeaLampActivity>((PlayerActivityComp *const)(v4 + 64));
      if ( std::operator==<SeaLampActivity>(0LL, (const std::shared_ptr<SeaLampActivity> *)(v4 + 64))
        || (v13 = std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64)),
            BaseActivity::isSettled((const BaseActivity *const)v13)) )
      {
        LODWORD(Now) = 0;
      }
      else
      {
        v15 = std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( BaseActivity::getScheduleId((const BaseActivity *const)v15) == *(_DWORD *)(v4 + 48) )
        {
          Now = std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v19 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&sheet_cond->param, 0LL);
          v20 = v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v19);
          }
          LOBYTE(v21) = SeaLampActivity::isSectionOpen(Now, *v20);
          LODWORD(Now) = v21;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/shop/player_shop_comp.cpp",
            "isActivitySheetCondSatisfied",
            1991);
          Now = (SeaLampActivity *)common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                     &v25,
                                     (const char (*)[29])"SeaLampActivity schedule_id:");
          v16 = std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          val = BaseActivity::getScheduleId((const BaseActivity *const)v16);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  (common::milog::MiLogStream *const)Now,
                  &val);
          v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v17,
                  (const char (*)[25])" but config schedule_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v25);
          LODWORD(Now) = 0;
        }
      }
      std::shared_ptr<SeaLampActivity>::~shared_ptr((std::shared_ptr<SeaLampActivity> *const)(v4 + 64));
    }
  }
  else
  {
    if ( type > ACTIVITY_SHOP_SHEET_COND_SEA_LAMP_PHASE )
    {
LABEL_41:
      LODWORD(Now) = 0;
      goto LABEL_42;
    }
    switch ( type )
    {
      case ACTIVITY_SHOP_SHEET_COND_TIME_EQUAL_GREATER:
        if ( std::vector<unsigned int>::empty(&sheet_cond->param) )
        {
          LODWORD(Now) = 0;
        }
        else
        {
          Now = (SeaLampActivity *)common::tools::TimeUtils::getNow();
          v11 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&sheet_cond->param, 0LL);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          LOBYTE(Now) = (__int64)Now >= BaseActivity::getBeginTimeByOpenDay(*(_DWORD *)(v4 + 48), *v12);
        }
        break;
      case ACTIVITY_SHOP_SHEET_COND_NONE:
        LODWORD(Now) = 1;
        break;
      case ACTIVITY_SHOP_SHEET_COND_QUEST_FINISH:
        if ( std::vector<unsigned int>::empty(&sheet_cond->param) )
        {
          LODWORD(Now) = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          QuestComp = Player::getQuestComp(this->player_);
          v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                     &sheet_cond->param,
                                                                                                     0LL);
          v10 = v9;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v9);
          }
          LOBYTE(Now) = PlayerQuestComp::getQuestState(QuestComp, *v10) == QUEST_STATE_FINISHED;
        }
        break;
      default:
        goto LABEL_41;
    }
  }
LABEL_42:
  result = (unsigned int)Now;
  if ( v26 == (char *)v4 )
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
  return result;
};

// Line 2007: range 0000000013E92C94-0000000013E93034
uint32_t __cdecl PlayerShopComp::getDisplayBuyLimit(
        const PlayerShopComp *const this,
        const data::ShopGoodsExcelConfig *goods_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int goods_id; // edi
  ActivityShopExcelConfigMgr *p_activity_shop_config_mgr; // rcx
  bool v7; // r14
  uint32_t result; // eax
  common::milog::MiLogStream *v9; // rax
  uint32_t schedule_id; // [rsp+1Ch] [rbp-A4h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 buy_limit:2008";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::getDisplayBuyLimit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->buy_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->buy_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->buy_limit);
  }
  *(_DWORD *)(v2 + 32) = goods_config->buy_limit;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->goods_id);
  }
  goods_id = goods_config->goods_id;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                + 0x7FFF8000) )
  {
    goods_id = (_DWORD)goods_config + 12;
    __asan_report_load4(&goods_config->shop_type);
  }
  PlayerShopComp::changeBuyLimitByLimitCondition(this, goods_config->shop_type, goods_id, (uint32_t *)(v2 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  p_activity_shop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_shop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->shop_type);
  }
  v7 = !ActivityShopExcelConfigMgr::isActivityShop(p_activity_shop_config_mgr, goods_config->shop_type);
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( v7 )
  {
    result = *(_DWORD *)(v2 + 32);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&goods_config->shop_type);
    }
    schedule_id = PlayerShopComp::findOpeningActivityScheduleId(this, goods_config->shop_type);
    if ( schedule_id )
    {
      if ( PlayerShopComp::checkBuyActivityGoods(this, schedule_id, goods_config) )
        result = *(_DWORD *)(v2 + 32);
      else
        result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "getDisplayBuyLimit",
        2019);
      v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v13,
             (const char (*)[25])"activity shop not open: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &goods_config->shop_type);
      common::milog::MiLogStream::~MiLogStream(&v13);
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

// Line 2032: range 0000000013E93036-0000000013E931BE
bool __cdecl PlayerShopComp::isPlatformTypeSatisfied(
        const PlayerShopComp *const this,
        const data::ShopGoodsExcelConfig *goods_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+18h] [rbp-88h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+20h] [rbp-80h] BYREF
  const std::vector<unsigned int> *platform_type_list; // [rsp+28h] [rbp-78h]
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 platform_type:2040";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::isPlatformTypeSatisfied;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  platform_type_list = &goods_config->platform_type_list;
  if ( std::vector<unsigned int>::empty(&goods_config->platform_type_list) )
  {
    result = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v2 + 32) = Player::getPlatformType(this->player_);
    __rhs._M_current = std::vector<unsigned int>::end(platform_type_list)._M_current;
    M_current = std::vector<unsigned int>::end(platform_type_list)._M_current;
    v7._M_current = std::vector<unsigned int>::begin(platform_type_list)._M_current;
    __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                         v7,
                         (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                         (const unsigned int *)(v2 + 32))._M_current;
    result = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs);
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

// Line 2045: range 0000000013E931C0-0000000013E93625
bool __cdecl PlayerShopComp::isNChooseOneBought(
        PlayerShopComp *const this,
        const data::ShopGoodsExcelConfig *goods_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ShopExcelConfigMgr *p_shop_config_mgr; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  bool result; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::set<unsigned int> *goods_set; // [rsp+28h] [rbp-A8h]
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+38h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 goods_id:2047";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::isNChooseOneBought;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  p_shop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.shop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->choose_one_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->choose_one_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->choose_one_group_id);
  }
  goods_set = ShopExcelConfigMgr::queryNChooseOneGoodsSet(p_shop_config_mgr, goods_config->choose_one_group_id);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  __for_range = goods_set;
  __for_begin._M_node = std::set<unsigned int>::begin(goods_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(goods_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 32) = *v7;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
                         &v8->design_config.txt_config_mgr.shop_config_mgr,
                         *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( goods_config_ptr )
    {
      if ( PlayerShopComp::refreshAndGetShopGoodsBoughtNum(this, goods_config_ptr) )
      {
        result = 1;
        goto LABEL_20;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/shop/player_shop_comp.cpp",
        "isNChooseOneBought",
        2052);
      v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v19,
             (const char (*)[51])"[SHOP] findShopGoodsExcelConfig failed, goods_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( PlayerShopComp::refreshAndGetHistoryBoughtGoodsNum(this, goods_config) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "isNChooseOneBought",
      2065);
    v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v19,
            (const char (*)[23])" history bought goods:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &goods_config->goods_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v12, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 1;
  }
  else
  {
    result = 0;
  }
LABEL_20:
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

// Line 2073: range 0000000013E93626-0000000013E93F2F
int32_t __cdecl PlayerShopComp::fillNChooseOneGoodsData(
        PlayerShopComp *const this,
        const data::ShopGoodsExcelConfig *goods_config,
        google::protobuf::RepeatedPtrField<proto::ShopGoods> *proto_goods_list)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  ShopExcelConfigMgr *p_shop_config_mgr; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rax
  _DWORD *v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  ShopExcelConfigMgr *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  proto::ShopGoods *v14; // rcx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  ShopExcelConfigMgr *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  proto::ShopGoods *v20; // rcx
  common::milog::MiLogStream *v21; // r13
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  unsigned int val; // [rsp+2Ch] [rbp-E4h] BYREF
  unsigned int scoin_discount_rate_0; // [rsp+30h] [rbp-E0h]
  unsigned int scoin_discount_rate; // [rsp+34h] [rbp-DCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-D0h] BYREF
  const data::ShopExcelConfig *shop_config_ptr_0; // [rsp+48h] [rbp-C8h]
  const std::set<unsigned int> *goods_set; // [rsp+50h] [rbp-C0h]
  const std::set<unsigned int> *__for_range; // [rsp+58h] [rbp-B8h]
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+60h] [rbp-B0h]
  const data::ShopExcelConfig *shop_config_ptr; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<Config> v35; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v36; // [rsp+80h] [rbp-90h] BYREF
  char v37[112]; // [rsp+A0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 goods_id:2077";
  *(_QWORD *)(v3 + 16) = PlayerShopComp::fillNChooseOneGoodsData;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->choose_one_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config->choose_one_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config->choose_one_group_id);
  }
  if ( goods_config->choose_one_group_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    p_shop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.shop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&goods_config->choose_one_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&goods_config->choose_one_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&goods_config->choose_one_group_id);
    }
    goods_set = ShopExcelConfigMgr::queryNChooseOneGoodsSet(p_shop_config_mgr, goods_config->choose_one_group_id);
    std::shared_ptr<Config>::~shared_ptr(&v35);
    __for_range = goods_set;
    __for_begin._M_node = std::set<unsigned int>::begin(goods_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(goods_set)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      *(_DWORD *)(v3 + 32) = *v8;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v35);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
      goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
                           &v9->design_config.txt_config_mgr.shop_config_mgr,
                           *(_DWORD *)(v3 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v35);
      if ( !goods_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "fillNChooseOneGoodsData",
          2082);
        v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v36,
                (const char (*)[51])"[SHOP] findShopGoodsExcelConfig failed, goods_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v36);
        result = -1;
        goto LABEL_33;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v35);
      v12 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.shop_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->shop_type >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&goods_config_ptr->shop_type);
      }
      shop_config_ptr = data::ShopExcelConfigMgrBase::findShopExcelConfig(
                          v12,
                          (data::ShopType)goods_config_ptr->shop_type);
      std::shared_ptr<Config>::~shared_ptr(&v35);
      if ( !shop_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "fillNChooseOneGoodsData",
          2088);
        v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v36,
                (const char (*)[46])"[SHOP] findShopExcelConfig failed, goods_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v36);
        result = -1;
        goto LABEL_33;
      }
      scoin_discount_rate = PlayerShopComp::getShopScoinDiscountRate(this, shop_config_ptr);
      v14 = google::protobuf::RepeatedPtrField<proto::ShopGoods>::Add(proto_goods_list);
      if ( PlayerShopComp::fillShopGoodsData(this, scoin_discount_rate, goods_config_ptr, v14) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/shop/player_shop_comp.cpp",
          "fillNChooseOneGoodsData",
          2094);
        v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v36,
                (const char (*)[39])"[SHOP] fillShopGoodsData failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" ,goods_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v36);
        result = -1;
        goto LABEL_33;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
LABEL_32:
    result = 0;
    goto LABEL_33;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v35);
  v18 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.shop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->shop_type);
  }
  shop_config_ptr_0 = data::ShopExcelConfigMgrBase::findShopExcelConfig(v18, (data::ShopType)goods_config->shop_type);
  std::shared_ptr<Config>::~shared_ptr(&v35);
  if ( !shop_config_ptr_0 )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/shop/player_shop_comp.cpp",
      "fillNChooseOneGoodsData",
      2104);
    v19 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v36,
            (const char (*)[46])"[SHOP] findShopExcelConfig failed, goods_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &goods_config->goods_id);
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = -1;
    goto LABEL_33;
  }
  scoin_discount_rate_0 = PlayerShopComp::getShopScoinDiscountRate(this, shop_config_ptr_0);
  v20 = google::protobuf::RepeatedPtrField<proto::ShopGoods>::Add(proto_goods_list);
  if ( !PlayerShopComp::fillShopGoodsData(this, scoin_discount_rate_0, goods_config, v20) )
    goto LABEL_32;
  common::milog::MiLogStream::create(
    &v36,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/shop/player_shop_comp.cpp",
    "fillNChooseOneGoodsData",
    2110);
  v21 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v36,
          (const char (*)[39])"[SHOP] fillShopGoodsData failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
  v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" ,goods_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &goods_config->goods_id);
  common::milog::MiLogStream::~MiLogStream(&v36);
  result = -1;
LABEL_33:
  if ( v37 == (char *)v3 )
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

// Line 2119: range 0000000013E93F30-0000000013E942CF
void __fastcall PlayerShopComp::addToHistoryGoodsRecord(
        PlayerShopComp *const this,
        uint32_t shop_type,
        unsigned __int64 goods_record)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::map<unsigned int,ShopRecord>::mapped_type *v6; // rax
  __int64 v7; // rsi
  uint32_t v8; // ecx
  char v9; // dl
  bool v10; // dl
  uint32_t bought_num; // ecx
  uint32_t *v12; // rsi
  uint32_t *v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  char v16; // dl
  bool v17; // dl
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  ShopGoodsRecord *history_goods_records; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-80h] BYREF
  char v26[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 shop_type:2118";
  *(_QWORD *)(v3 + 16) = PlayerShopComp::addToHistoryGoodsRecord;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = shop_type;
  v6 = std::map<unsigned int,ShopRecord>::operator[](
         &this->shop_record_map_,
         (const std::map<unsigned int,ShopRecord>::key_type *)(v3 + 32));
  history_goods_records = std::map<unsigned int,ShopGoodsRecord>::operator[](
                            &v6->history_goods_record_map,
                            (const std::map<unsigned int,ShopGoodsRecord>::key_type *)goods_record);
  v7 = (unsigned int)(goods_record & 7) + 3;
  if ( *(_BYTE *)((goods_record >> 3) + 0x7FFF8000) != 0
    && (char)((goods_record & 7) + 3) >= *(_BYTE *)((goods_record >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(goods_record);
  }
  v8 = *(_DWORD *)goods_record;
  v9 = *(_BYTE *)(((unsigned __int64)history_goods_records >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v9 != 0;
  v10 = v9 != 0 && (char)(((unsigned __int8)history_goods_records & 7) + 3) >= v9;
  if ( v10 )
    __asan_report_store4(history_goods_records, v7, v10);
  history_goods_records->goods_id = v8;
  if ( *(_BYTE *)(((unsigned __int64)&history_goods_records->bought_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)history_goods_records + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&history_goods_records->bought_num >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&history_goods_records->bought_num);
  }
  bought_num = history_goods_records->bought_num;
  if ( *(_BYTE *)(((goods_record + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((goods_record + 4) & 7) + 3) >= *(_BYTE *)(((goods_record + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(goods_record + 4);
  }
  history_goods_records->bought_num = bought_num + *(_DWORD *)(goods_record + 4);
  v12 = (uint32_t *)(goods_record + 8);
  v13 = (uint32_t *)std::max<unsigned int>(
                      &history_goods_records->last_buy_time,
                      (const unsigned int *)(goods_record + 8));
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  v15 = *v14;
  v16 = *(_BYTE *)(((unsigned __int64)&history_goods_records->last_buy_time >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v16 != 0;
  v17 = v16 != 0 && (char)((((_BYTE)history_goods_records + 8) & 7) + 3) >= v16;
  if ( v17 )
    __asan_report_store4(&history_goods_records->last_buy_time, v12, v17);
  history_goods_records->last_buy_time = v15;
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/shop/player_shop_comp.cpp",
    "addToHistoryGoodsRecord",
    2124);
  v18 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v25,
          (const char (*)[23])" update history goods:");
  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)goods_record);
  v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])", bought_num:");
  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &history_goods_records->bought_num);
  v22 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v21, (const char (*)[17])", last_buy_time:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &history_goods_records->last_buy_time);
  common::milog::MiLogStream::~MiLogStream(&v25);
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2128: range 0000000013E942D0-0000000013E94566
uint32_t __cdecl PlayerShopComp::refreshAndGetHistoryBoughtGoodsNum(
        PlayerShopComp *const this,
        const data::ShopGoodsExcelConfig *goods_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord> >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> >::pointer v7; // rax
  uint32_t *p_bought_num; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord> >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  ShopRecord *shop_record; // [rsp+20h] [rbp-B0h]
  ShopGoodsRecord *goods_record; // [rsp+28h] [rbp-A8h]
  char v12[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 shop_type:2131 64 8 14 shop_iter:2132 96 8 15 goods_iter:2139";
  *(_QWORD *)(v2 + 16) = PlayerShopComp::refreshAndGetHistoryBoughtGoodsNum;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  PlayerShopComp::refreshAndGetShopGoodsBoughtNum(this, goods_config);
  if ( *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config->shop_type >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_config->shop_type);
  }
  *(_DWORD *)(v2 + 48) = goods_config->shop_type;
  *(std::map<unsigned int,ShopRecord>::iterator *)(v2 + 64) = std::map<unsigned int,ShopRecord>::find(
                                                                &this->shop_record_map_,
                                                                (const std::map<unsigned int,ShopRecord>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,ShopRecord>::end(&this->shop_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopRecord> > *const)(v2 + 64));
    shop_record = &v6->second;
    *(std::map<unsigned int,ShopGoodsRecord>::iterator *)(v2 + 96) = std::map<unsigned int,ShopGoodsRecord>::find(
                                                                       &v6->second.history_goods_record_map,
                                                                       &goods_config->goods_id);
    __y._M_node = std::map<unsigned int,ShopGoodsRecord>::end(&shop_record->history_goods_record_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> >::_Self *)(v2 + 96),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> >::_Self *)&__y) )
    {
      result = 0;
    }
    else
    {
      v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ShopGoodsRecord> > *const)(v2 + 96));
      goods_record = &v7->second;
      p_bought_num = &v7->second.bought_num;
      if ( *(_BYTE *)(((unsigned __int64)p_bought_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_bought_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_bought_num >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(p_bought_num);
      }
      result = goods_record->bought_num;
    }
  }
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

// Line 2150: range 0000000013E94568-0000000013E948DB
__int64 __fastcall PlayerShopComp::changeBuyLimitByLimitCondition(
        const PlayerShopComp *const this,
        uint32_t shop_type,
        uint32_t goods_id,
        uint32_t *buy_limit)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  uint32_t *p_limit_num; // rsi
  uint32_t *v11; // rax
  uint32_t *v12; // rdx
  uint32_t v13; // ecx
  char v14; // dl
  bool v15; // dl
  std::vector<data::LimitStrategy>::const_iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  std::vector<data::LimitStrategy>::const_iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+38h] [rbp-A8h]
  const std::vector<data::LimitStrategy> *__for_range; // [rsp+40h] [rbp-A0h]
  const data::LimitStrategy *limit_strategy; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-80h] BYREF
  char v25[96]; // [rsp+80h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 goods_id:2149";
  *(_QWORD *)(v4 + 16) = PlayerShopComp::changeBuyLimitByLimitCondition;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = goods_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
                       &v7->design_config.txt_config_mgr.shop_config_mgr,
                       *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( goods_config_ptr )
  {
    if ( shop_type == 1048 )
    {
      if ( std::vector<data::LimitStrategy>::empty(&goods_config_ptr->limit_strategy_list) )
      {
        result = 0LL;
      }
      else
      {
        __for_range = &goods_config_ptr->limit_strategy_list;
        __for_begin._M_current = std::vector<data::LimitStrategy>::begin(&goods_config_ptr->limit_strategy_list)._M_current;
        __for_end._M_current = std::vector<data::LimitStrategy>::end(&goods_config_ptr->limit_strategy_list)._M_current;
        while ( __gnu_cxx::operator!=<data::LimitStrategy const*,std::vector<data::LimitStrategy>>(
                  &__for_begin,
                  &__for_end) )
        {
          limit_strategy = __gnu_cxx::__normal_iterator<data::LimitStrategy const*,std::vector<data::LimitStrategy>>::operator*(&__for_begin);
          if ( PlayerShopComp::isLimitStrategyMeet(this, limit_strategy) )
          {
            p_limit_num = &limit_strategy->limit_num;
            v11 = (uint32_t *)std::max<unsigned int>(buy_limit, &limit_strategy->limit_num);
            v12 = v11;
            if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v11);
            }
            v13 = *v12;
            v14 = *(_BYTE *)(((unsigned __int64)buy_limit >> 3) + 0x7FFF8000);
            LOBYTE(p_limit_num) = v14 != 0;
            v15 = v14 != 0 && (char)(((unsigned __int8)buy_limit & 7) + 3) >= v14;
            if ( v15 )
              __asan_report_store4(buy_limit, p_limit_num, v15);
            *buy_limit = v13;
          }
          __gnu_cxx::__normal_iterator<data::LimitStrategy const*,std::vector<data::LimitStrategy>>::operator++(&__for_begin);
        }
        result = 0LL;
      }
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/shop/player_shop_comp.cpp",
      "changeBuyLimitByLimitCondition",
      2154);
    v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v24,
           (const char (*)[51])"[SHOP] findShopGoodsExcelConfig failed, goods_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 701LL;
  }
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2187: range 0000000013E948DC-0000000013E94A90
bool __cdecl PlayerShopComp::isLimitStrategyMeet(
        const PlayerShopComp *const this,
        const data::LimitStrategy *limit_strategy)
{
  uint32_t HomeLevel; // ecx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  const PlayerHomeComp *home_comp; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  home_comp = Player::getHomeComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&limit_strategy->limit_cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&limit_strategy->limit_cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&limit_strategy->limit_cond_type);
  }
  if ( limit_strategy->limit_cond_type != SHOP_PRECONDITION_HOME_LEVEL )
    return 1;
  HomeLevel = PlayerHomeComp::getHomeLevel(home_comp);
  if ( *(_BYTE *)(((unsigned __int64)&limit_strategy->limit_cond_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)limit_strategy + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limit_strategy->limit_cond_param >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&limit_strategy->limit_cond_param);
  }
  if ( HomeLevel >= limit_strategy->limit_cond_param )
    return 1;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/shop/player_shop_comp.cpp",
    "isLimitStrategyMeet",
    2195);
  v3 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v9,
         (const char (*)[33])"check home level failed. level: ");
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &limit_strategy->limit_cond_param);
  v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v4, (const char (*)[13])" now level: ");
  val = PlayerHomeComp::getHomeLevel(home_comp);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v9);
  return 0;
};

// Line 2207: range 0000000013EA6478-0000000013EA648C
void __cdecl GLOBAL__sub_I_merge_single_player_offline_msg_comp_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 2207: range 0000000013EA5E6C-0000000013EA6477
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  __int64 v7; // rsi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  char v18; // dl
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  char v22; // dl
  __int64 v23; // rdx
  const char *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  char v27; // dl
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  char v31; // dl
  __int64 v32; // rdx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  char v35; // dl
  __int64 v36; // rdx
  const char *v37; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_player_offline_msg_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      v7 = 5LL;
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   5LL);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  5LL);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     5LL);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 5LL);
      boost::asio::error::misc_category = misc_category;
      v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v7,
            v15);
        *v13 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v7 = (__int64)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v16 )
      {
        v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v18 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v7,
            v19);
        *v17 = 1;
        v7 = (__int64)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v20 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v22 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v22 != 0;
        v23 = (v22 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v22);
        if ( (_BYTE)v23 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v7,
            v23);
        *v21 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v24;
      }
      v25 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v27 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v27 != 0;
        v28 = (v27 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v27);
        if ( (_BYTE)v28 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v7,
            v28);
        *v26 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v29 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v29 )
      {
        v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v31 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v31 != 0;
        v32 = (v31 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v31);
        if ( (_BYTE)v32 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v7,
            v32);
        *v30 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v33 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v33 )
      {
        v34 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v35 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v35 != 0;
        v36 = (v35 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v35);
        if ( (_BYTE)v36 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v7,
            v36);
        *v34 = 1;
        v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v37;
      }
    }
    __asan_after_dynamic_init();
  }
};
