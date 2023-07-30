// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/fish_pool_comp.cpp

// Line 39: range 0000000013143A8C-0000000013143D04
__int64 __fastcall FishStock::getLeftNum(FishStock *const this, uint32_t target_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  uint32_t gen_fish_num; // esi
  uint32_t max_num; // esi
  const unsigned int *v9; // rdx
  unsigned int __b; // [rsp+1Ch] [rbp-64h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 target_num:38";
  *(_QWORD *)(v2 + 16) = FishStock::getLeftNum;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = target_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->max_num )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    gen_fish_num = this->gen_fish_num;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( gen_fish_num < this->max_num )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      max_num = this->max_num;
      if ( *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      __b = max_num - this->gen_fish_num;
      v9 = std::min<unsigned int>((const unsigned int *)v4 - 8, &__b);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      result = *v9;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    result = *((unsigned int *)v4 - 8);
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

// Line 52: range 0000000013143D06-0000000013143DB2
bool __cdecl FishStock::isEmpty(FishStock *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( !this->max_num )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->gen_fish_num >= this->max_num;
};

// Line 61: range 0000000013143DB4-0000000013143EB4
void __cdecl FishStock::fromBin(FishStock *const this, const proto::FishStockBin *bin)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx
  uint32_t v4; // ecx

  v2 = proto::FishStockBin::stock_type(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stock_type = v2;
  v3 = proto::FishStockBin::gen_fish_num(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gen_fish_num);
  }
  this->gen_fish_num = v3;
  v4 = proto::FishStockBin::max_num(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_num);
  }
  this->max_num = v4;
};

// Line 68: range 0000000013143EB6-0000000013143FB3
void __cdecl FishStock::toBin(const FishStock *const this, proto::FishStockBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FishStockBin::set_stock_type(bin, this->stock_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FishStockBin::set_gen_fish_num(bin, this->gen_fish_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FishStockBin::set_max_num(bin, this->max_num);
};

// Line 75: range 0000000013143FB4-0000000013144058
void __cdecl Angler::setState(Angler *const this, FishState fish_state, uint32_t now)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state);
  }
  this->state = fish_state;
  if ( !now )
    now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_state_change_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_state_change_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_state_change_time);
  }
  this->last_state_change_time = now;
};

// Line 84: range 000000001314405A-000000001314421A
void __cdecl FishPoolComp::FishPoolComp(FishPoolComp *const this, Gadget *gadget)
{
  int (**v2)(...); // rdx

  GadgetCompBase::GadgetCompBase(this, gadget);
  v2 = (int (**)(...))(&`vtable for'FishPoolComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
  std::map<unsigned int,FishStock>::map(&this->fish_stock_map_);
  std::map<unsigned int,std::weak_ptr<Monster>>::map(&this->fish_wtr_map_);
  std::map<unsigned int,unsigned int>::map(&this->cached_fish_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_disperse_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_disperse_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_disperse_time_);
  }
  this->last_disperse_time_ = 0;
  std::map<unsigned int,std::shared_ptr<Angler>>::map(&this->angler_map_);
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->update_timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_fish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_fish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_fish_time_);
  }
  this->last_refresh_fish_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->today_fish_output_num_);
  }
  this->today_fish_output_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_fish_output_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_fish_output_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_fish_output_refresh_time_);
  }
  this->last_fish_output_refresh_time_ = 0;
};

// Line 89: range 000000001314421C-0000000013144634
int32_t __cdecl FishPoolComp::fromBin(FishPoolComp *const this, const proto::GroupGadgetBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  uint32_t v6; // ecx
  uint32_t refresh_today_fish_time; // edx
  unsigned int v8; // r12d
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  unsigned int *v10; // rdx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FishStockBin>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FishStockBin>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  const proto::GadgetFishPoolBin *proto_fish_pool; // [rsp+28h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::FishStockBin> *__for_range; // [rsp+30h] [rbp-C0h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-B8h]
  const unsigned int *p_fish_id; // [rsp+40h] [rbp-B0h]
  const proto::FishStockBin *proto_fish_stock; // [rsp+48h] [rbp-A8h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+50h] [rbp-A0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+70h] [rbp-80h] BYREF
  char v21[96]; // [rsp+90h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 fish_stock:93";
  *(_QWORD *)(v2 + 16) = FishPoolComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  proto_fish_pool = proto::GroupGadgetBin::fish_pool(bin);
  __for_range = proto::GadgetFishPoolBin::fish_stock_list(proto_fish_pool);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FishStockBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FishStockBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FishStockBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto_fish_stock = google::protobuf::internal::RepeatedPtrIterator<proto::FishStockBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    FishStock::fromBin((FishStock *const)(v2 + 32), proto_fish_stock);
    v5 = (unsigned __int64)std::map<unsigned int,FishStock>::operator[](
                             &this->fish_stock_map_,
                             (const std::map<unsigned int,FishStock>::key_type *)(v2 + 32));
    if ( (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v5 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 11) & 7) >= *(_BYTE *)(((v5 + 11) >> 3) + 0x7FFF8000) )
    {
      v5 = __asan_report_store_n(v5, 12LL);
    }
    *(_QWORD *)v5 = *(_QWORD *)(v2 + 32);
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(v2 + 40);
    google::protobuf::internal::RepeatedPtrIterator<proto::FishStockBin const>::operator++(&__for_begin);
  }
  v6 = proto::GadgetFishPoolBin::today_fish_num(proto_fish_pool);
  if ( *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->today_fish_output_num_);
  }
  this->today_fish_output_num_ = v6;
  refresh_today_fish_time = proto::GadgetFishPoolBin::last_refresh_today_fish_time(proto_fish_pool);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_fish_output_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_fish_output_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_fish_output_refresh_time_);
  }
  this->last_fish_output_refresh_time_ = refresh_today_fish_time;
  __for_range_0 = proto::GadgetFishPoolBin::cached_fish_map(proto_fish_pool);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_0);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_fish_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
    if ( *(_BYTE *)(((unsigned __int64)(p_fish_id + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_fish_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_fish_id + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v8 = p_fish_id[1];
    v9 = std::map<unsigned int,unsigned int>::operator[](&this->cached_fish_map_, p_fish_id);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v9);
    }
    *v10 = v8;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
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

// Line 107: range 0000000013144636-000000001314497A
int32_t __cdecl FishPoolComp::toBin(const FishPoolComp *const this, proto::GroupGadgetBin *bin)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  unsigned int *v3; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v4; // rdx
  std::map<unsigned int,FishStock>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,FishStock>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::GadgetFishPoolBin *proto_fish_pool; // [rsp+28h] [rbp-68h]
  const std::map<unsigned int,FishStock> *__for_range; // [rsp+30h] [rbp-60h]
  google::protobuf::Map<unsigned int,unsigned int> *fish_map; // [rsp+38h] [rbp-58h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-50h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+48h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *fish_id; // [rsp+50h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+58h] [rbp-38h]
  const std::pair<unsigned int const,FishStock> *v15; // [rsp+60h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,FishStock> >::type *_; // [rsp+68h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,FishStock> >::type *fish_stock; // [rsp+70h] [rbp-20h]
  proto::FishStockBin *proto_fish_stock; // [rsp+78h] [rbp-18h]

  proto_fish_pool = proto::GroupGadgetBin::mutable_fish_pool(bin);
  __for_range = &this->fish_stock_map_;
  __for_begin._M_node = std::map<unsigned int,FishStock>::begin(&this->fish_stock_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FishStock>::end(&this->fish_stock_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,FishStock>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,FishStock>(v15);
    fish_stock = (std::tuple_element<1,const std::pair<unsigned int const,FishStock> >::type *)std::get<1ul,unsigned int const,FishStock>(v15);
    proto_fish_stock = proto::GadgetFishPoolBin::add_fish_stock_list(proto_fish_pool);
    FishStock::toBin(fish_stock, proto_fish_stock);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,FishStock>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GadgetFishPoolBin::set_today_fish_num(proto_fish_pool, this->today_fish_output_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_fish_output_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_fish_output_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GadgetFishPoolBin::set_last_refresh_today_fish_time(proto_fish_pool, this->last_fish_output_refresh_time_);
  fish_map = proto::GadgetFishPoolBin::mutable_cached_fish_map(proto_fish_pool);
  __for_range_0 = &this->cached_fish_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->cached_fish_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    fish_id = std::get<0ul,unsigned int const,unsigned int>(v12);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
    if ( *(_BYTE *)(((unsigned __int64)fish_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)fish_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fish_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *fish_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *num )
      {
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v2 = *num;
        v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](fish_map, fish_id);
        v4 = v3;
        if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3);
        }
        *v4 = v2;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  return 0;
};

// Line 129: range 000000001314497C-0000000013144C65
int32_t __cdecl FishPoolComp::toClient(const FishPoolComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  unsigned int *v7; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-64h] BYREF
  unsigned int EntityId; // [rsp+20h] [rbp-60h] BYREF
  unsigned int area_id; // [rsp+24h] [rbp-5Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-58h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-50h] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+38h] [rbp-48h]
  proto::FishPoolInfo *pool_info; // [rsp+40h] [rbp-40h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
  if ( gadget_script_config_ptr )
  {
    pool_info = proto::SceneGadgetInfo::mutable_fish_pool_info(gadget_info);
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::FishPoolInfo::set_pool_id(pool_info, gadget_script_config_ptr->fish_pool_id);
    __for_range = &gadget_script_config_ptr->fishing_area_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&gadget_script_config_ptr->fishing_area_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&gadget_script_config_ptr->fishing_area_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      area_id = *v7;
      proto::FishPoolInfo::add_fish_area_list(pool_info, area_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FishPoolInfo::set_today_fish_num(pool_info, this->today_fish_output_num_);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/fish_pool_comp.cpp",
      "toClient",
      133);
    v2 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v16, (const char (*)[11])"gadget_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Gadget::getGadgetId(this->gadget_);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    v4 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v3, (const char (*)[12])" entity_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &EntityId);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])off_24F43340);
    common::milog::MiLogStream::~MiLogStream(&v16);
    return -1;
  }
};

// Line 147: range 0000000013144C66-0000000013144C78
int32_t __cdecl FishPoolComp::initByConfig(FishPoolComp *const this, const GadgetParam *gadget_param)
{
  return 0;
};

// Line 153: range 0000000013144ECA-0000000013145301
int32_t __cdecl FishPoolComp::start(FishPoolComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  uint32_t Now; // ecx
  SceneUnixTimer *v6; // rax
  int32_t result; // eax
  std::shared_ptr<Gadget> __r; // [rsp+10h] [rbp-D0h] BYREF
  std::shared_ptr<Scene> v9; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:154 64 16 14 gadget_wtr:161";
  *(_QWORD *)(v1 + 16) = FishPoolComp::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/fish_pool_comp.cpp",
      "start",
      157);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v4 = -1;
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    FishPoolComp::refreshDailyOutput(this, Now, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Gadget>((Gadget *)&__r);
    std::weak_ptr<Gadget>::weak_ptr<Gadget,void>((std::weak_ptr<Gadget> *const)(v1 + 64), &__r);
    std::shared_ptr<Gadget>::~shared_ptr(&__r);
    std::weak_ptr<Gadget>::weak_ptr((std::weak_ptr<Gadget> *const)&__r, (const std::weak_ptr<Gadget> *)(v1 + 64));
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,FishPoolComp::start(void)::{lambda(unsigned long)#1}>(
      &v9,
      (FishPoolComp::start::<lambda(uint64_t)> *)(v1 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (FishPoolComp::start::<lambda(uint64_t)> *)(v1 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(&this->update_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v9);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v9);
    FishPoolComp::start(void)::{lambda(unsigned long)#1}::~start((FishPoolComp::start::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneUnixTimer>(0LL, &this->update_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/fish_pool_comp.cpp",
        "start",
        164);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v10,
        (const char (*)[29])"create SceneUnixTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v4 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
      if ( SceneUnixTimer::startS(v6, 1u, 1, "./src/gadget/fish_pool_comp.cpp", "start", 167) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/fish_pool_comp.cpp",
          "start",
          169);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v10,
          (const char (*)[41])"fish pool comp update_timer start failed");
        common::milog::MiLogStream::~MiLogStream(&v10);
        v4 = -1;
      }
      else
      {
        v4 = 0;
      }
    }
    std::weak_ptr<Gadget>::~weak_ptr((std::weak_ptr<Gadget> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v4;
  if ( v11 == (char *)v1 )
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

// Line 161: range 0000000013144C7A-0000000013144EAD
void __cdecl FishPoolComp::start(void)::{lambda(unsigned long)#1}::operator()(
        const FishPoolComp::start::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:161 64 16 11 obj_ptr:161";
  *(_QWORD *)(v2 + 16) = FishPoolComp::start(void)::{lambda(unsigned long)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/fish_pool_comp.cpp",
      "operator()",
      161);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"gadget is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<FishPoolComp>((const std::shared_ptr<FishPoolComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FishPoolComp::onUpdateTimer(v5, now_ms);
    }
    std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v2 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
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
};

// Line 161: range 00000000131B0474-00000000131B0499
void __cdecl FishPoolComp::start(void)::{lambda(unsigned long)#1}::start(
        FishPoolComp::start::<lambda(uint64_t)> *const this,
        FishPoolComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 161: range 00000000131B1804-00000000131B1829
void __cdecl FishPoolComp::start(void)::{lambda(unsigned long)#1}::start(
        FishPoolComp::start::<lambda(uint64_t)> *const this,
        const FishPoolComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 161: range 0000000013144EAE-0000000013144EC8
void __cdecl FishPoolComp::start(void)::{lambda(unsigned long)#1}::~start(
        FishPoolComp::start::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 177: range 0000000013145302-0000000013145318
int32_t __cdecl FishPoolComp::onAfterEnterScene(FishPoolComp *const this, Scene *scene, const VisionContext *context)
{
  return 0;
};

// Line 183: range 00000000131454F8-00000000131455FE
void __cdecl FishPoolComp::onBeforeLeaveScene(FishPoolComp *const this, const VisionContext *context)
{
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::function<ForeachPolicy(Angler&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Angler &)>::function<FishPoolComp::onBeforeLeaveScene(VisionContext const&)::{lambda(Angler &)#1},void,void>(
    &p_func,
    (FishPoolComp::onBeforeLeaveScene::<lambda(Angler&)>)this);
  FishPoolComp::foreachAngler(this, &p_func);
  std::function<ForeachPolicy ()(Angler &)>::~function(&p_func);
  std::map<unsigned int,std::shared_ptr<Angler>>::clear(&this->angler_map_);
  std::function<ForeachPolicy ()(Monster &)>::function<FishPoolComp::onBeforeLeaveScene(VisionContext const&)::{lambda(Monster &)#2},void,void>(
    (std::function<ForeachPolicy(Monster&)> *const)&p_func,
    (FishPoolComp::onBeforeLeaveScene::<lambda(Monster&)>)&p_func);
  FishPoolComp::foreachFish(this, (std::function<ForeachPolicy(Monster&)> *)&p_func);
  std::function<ForeachPolicy ()(Monster &)>::~function((std::function<ForeachPolicy(Monster&)> *const)&p_func);
  std::map<unsigned int,std::weak_ptr<Monster>>::clear(&this->fish_wtr_map_);
  if ( std::operator!=<SceneUnixTimer>(0LL, &this->update_timer_ptr_) )
  {
    v2 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
    common::tools::MiTimer::cancel(v2);
  }
};

// Line 185: range 000000001314531A-000000001314547C
ForeachPolicy __cdecl FishPoolComp::onBeforeLeaveScene(VisionContext const&)::{lambda(Angler &)#1}::operator()(
        const FishPoolComp::onBeforeLeaveScene::<lambda(Angler&)> *const __closure,
        Angler *angler)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  FishPoolComp *this; // r14
  Player *v6; // rax
  ForeachPolicy result; // eax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:187";
  *(_QWORD *)(v2 + 16) = FishPoolComp::onBeforeLeaveScene(VisionContext const&)::{lambda(Angler &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 32));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    FishPoolComp::playerExitFishing(this, v6, 1);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
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

// Line 198: range 000000001314547E-00000000131454F7
ForeachPolicy __cdecl FishPoolComp::onBeforeLeaveScene(VisionContext const&)::{lambda(Monster &)#2}::operator()(
        const FishPoolComp::onBeforeLeaveScene::<lambda(Monster&)> *const __closure,
        Monster *monster)
{
  Monster *v2; // rdx
  unsigned __int64 v3; // rax

  v2 = monster;
  if ( *(_BYTE *)(((unsigned __int64)monster >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)monster->baseclass_0 + 128LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  (*(void (__fastcall **)(Monster *, VisionContext *))v3)(v2, &VisionContext::miss_context);
  return 0;
};

// Line 211: range 0000000013145600-000000001314598C
int32_t __cdecl FishPoolComp::foreachFish(FishPoolComp *const this, std::function<ForeachPolicy(Monster&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::map<unsigned int,std::weak_ptr<Monster>>::size_type v6; // rax
  Monster *v7; // rdx
  int32_t result; // eax
  std::shared_ptr<Monster> *monster_ptr; // [rsp+18h] [rbp-F8h]
  char v10[240]; // [rsp+20h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 8 iter:218 64 8 12 tmp_iter:220 96 16 15 monster_ptr:221 128 24 15 monster_vec:216";
  *(_QWORD *)(v2 + 16) = FishPoolComp::foreachFish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( std::map<unsigned int,std::weak_ptr<Monster>>::size(&this->fish_wtr_map_) )
  {
    std::vector<std::shared_ptr<Monster>>::vector((std::vector<std::shared_ptr<Monster>> *const)(v2 + 128));
    v6 = std::map<unsigned int,std::weak_ptr<Monster>>::size(&this->fish_wtr_map_);
    std::vector<std::shared_ptr<Monster>>::reserve((std::vector<std::shared_ptr<Monster>> *const)(v2 + 128), v6);
    *(std::map<unsigned int,std::weak_ptr<Monster>>::iterator *)(v2 + 32) = std::map<unsigned int,std::weak_ptr<Monster>>::begin(&this->fish_wtr_map_);
    while ( 1 )
    {
      *(std::map<unsigned int,std::weak_ptr<Monster>>::iterator *)(v2 + 64) = std::map<unsigned int,std::weak_ptr<Monster>>::end(&this->fish_wtr_map_);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > >::_Self *)(v2 + 32),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > >::_Self *)(v2 + 64)) )
        break;
      *(std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > >::_Self *)(v2 + 64) = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > > *const)(v2 + 32), 0);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > > *const)(v2 + 64));
      std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v2 + 96));
      if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 96)) )
        std::map<unsigned int,std::weak_ptr<Monster>>::erase[abi:cxx11](
          &this->fish_wtr_map_,
          *(std::map<unsigned int,std::weak_ptr<Monster>>::iterator *)(v2 + 64));
      else
        std::vector<std::shared_ptr<Monster>>::push_back(
          (std::vector<std::shared_ptr<Monster>> *const)(v2 + 128),
          (const std::vector<std::shared_ptr<Monster>>::value_type *)(v2 + 96));
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 96));
    }
    *(std::vector<std::shared_ptr<Monster>>::iterator *)(v2 + 32) = std::vector<std::shared_ptr<Monster>>::begin((std::vector<std::shared_ptr<Monster>> *const)(v2 + 128));
    *(std::vector<std::shared_ptr<Monster>>::iterator *)(v2 + 64) = std::vector<std::shared_ptr<Monster>>::end((std::vector<std::shared_ptr<Monster>> *const)(v2 + 128));
    while ( __gnu_cxx::operator!=<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<Monster>*,std::vector<std::shared_ptr<Monster>> > *)(v2 + 32),
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<Monster>*,std::vector<std::shared_ptr<Monster>> > *)(v2 + 64)) )
    {
      monster_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Monster>*,std::vector<std::shared_ptr<Monster>> > *const)(v2 + 32));
      if ( !std::operator==<Monster>(0LL, monster_ptr) )
      {
        v7 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)monster_ptr);
        if ( std::function<ForeachPolicy ()(Monster &)>::operator()(p_func, v7) )
        {
          v5 = -1;
          goto LABEL_19;
        }
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Monster>*,std::vector<std::shared_ptr<Monster>> > *const)(v2 + 32));
    }
    v5 = 0;
LABEL_19:
    std::vector<std::shared_ptr<Monster>>::~vector((std::vector<std::shared_ptr<Monster>> *const)(v2 + 128));
  }
  else
  {
    v5 = 0;
  }
  result = v5;
  if ( v10 == (char *)v2 )
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
  return result;
};

// Line 244: range 000000001314598E-0000000013145A08
void __cdecl FishPoolComp::onUpdateTimer(FishPoolComp *const this, uint64_t now_ms)
{
  uint32_t now; // [rsp+1Ch] [rbp-4h]

  now = now_ms / 0x3E8;
  FishPoolComp::refreshAngler(this, now);
  FishPoolComp::refreshDisperse(this);
  FishPoolComp::refreshFish(this, now, 0);
  FishPoolComp::refreshDailyOutput(this, now, 1);
};

// Line 261: range 0000000013145C60-000000001314609E
void __cdecl FishPoolComp::refreshDisperse(FishPoolComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<data::ConfigFishingZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  unsigned __int64 Position; // rax
  Scene *v8; // r14
  FishPoolComp::refreshDisperse::<lambda(Player&)> v9; // [rsp-20h] [rbp-140h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-F0h] BYREF
  char v11[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 1 15 is_disperse:279 48 4 15 flee_radius:278 64 12 7 pos:280 96 16 13 scene_ptr:262 128 16 "
                        "21 config_gadget_ptr:268";
  *(_QWORD *)(v1 + 16) = FishPoolComp::refreshDisperse;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556927;
  v3[536862722] = -219020288;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v1 + 96));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 96)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Gadget::getJsonConfig((const Gadget *const)(v1 + 128));
    if ( !std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v1 + 128)) )
    {
      v4 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( !std::operator==<data::ConfigFishingZone>(0LL, &v4->fishing_zone) )
      {
        v5 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        v6 = std::__shared_ptr_access<data::ConfigFishingZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigFishingZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5->fishing_zone);
        if ( *(_BYTE *)(((unsigned __int64)&v6->flee_radius >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v6 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->flee_radius >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(float *)(v1 + 48) = v6->flee_radius;
        *(_BYTE *)(v1 + 32) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Position = (unsigned __int64)Entity::getPosition((const Entity *const)this->gadget_);
        if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
        {
          Position = __asan_report_load_n(Position, 12LL);
        }
        *(_QWORD *)(v1 + 64) = *(_QWORD *)Position;
        *(_DWORD *)(v1 + 72) = *(_DWORD *)(Position + 8);
        v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        v9.__is_disperse = (bool *)(v1 + 32);
        v9.__pos = (Vector3 *)(v1 + 64);
        v9.__flee_radius = (float *)(v1 + 48);
        std::function<ForeachPolicy ()(Player &)>::function<FishPoolComp::refreshDisperse(void)::{lambda(Player &)#1},void,void>(
          &p_func,
          v9);
        Scene::foreachPlayer(v8, &p_func);
        std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
        if ( *(_BYTE *)(v1 + 32) )
          FishPoolComp::disperseFishPool(this);
      }
    }
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v1 + 128));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 96));
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 282: range 0000000013145A0A-0000000013145C5E
ForeachPolicy __cdecl FishPoolComp::refreshDisperse(void)::{lambda(Player &)#1}::operator()(
        const FishPoolComp::refreshDisperse::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy v5; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const Vector3 *Position; // rcx
  double v8; // xmm0_8
  float *flee_radius; // rdx
  bool *is_disperse; // rdx
  ForeachPolicy result; // eax
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:284";
  *(_QWORD *)(v2 + 16) = FishPoolComp::refreshDisperse(void)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getAvatarComp(player);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 32));
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
  {
    v5 = FOREACH_CONTINUE;
  }
  else
  {
    v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Position = Entity::getPosition((const Entity *const)v6);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__pos >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(float *)&v8 = getPlaneDistance(__closure->__pos, Position);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    flee_radius = __closure->__flee_radius;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__flee_radius >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__flee_radius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__flee_radius >> 3)
                                                                         + 0x7FFF8000) )
    {
      v8 = __asan_report_load4();
    }
    if ( *flee_radius <= *(float *)&v8 )
    {
      v5 = FOREACH_CONTINUE;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_disperse >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      is_disperse = __closure->__is_disperse;
      if ( *(_BYTE *)(((unsigned __int64)is_disperse >> 3) + 0x7FFF8000) != 0
        && ((__int64)__closure->__is_disperse & 7) >= *(_BYTE *)(((unsigned __int64)is_disperse >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__closure->__is_disperse);
      }
      *is_disperse = 1;
      v5 = FOREACH_BREAK;
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = v5;
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

// Line 304: range 00000000131460A0-00000000131464A7
void __cdecl FishPoolComp::refreshAngler(FishPoolComp *const this, uint32_t now)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  char v5; // r15
  bool v6; // r14
  Angler *v7; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rdx
  std::map<unsigned int,std::shared_ptr<Angler>>::iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::map<unsigned int,std::shared_ptr<Angler>>::iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  std::map<unsigned int,std::shared_ptr<Angler>> *__for_range; // [rsp+38h] [rbp-148h]
  std::set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-140h]
  std::pair<unsigned int const,std::shared_ptr<Angler> > *__in; // [rsp+48h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Angler> > >::type *uid; // [rsp+50h] [rbp-130h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Angler> > >::type *angler_ptr; // [rsp+58h] [rbp-128h]
  std::weak_ptr<Player> v16; // [rsp+60h] [rbp-120h] BYREF
  char v17[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:316 64 48 14 angler_map:305 144 48 19 need_delete_set:306";
  *(_QWORD *)(v2 + 16) = FishPoolComp::refreshAngler;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  std::map<unsigned int,std::shared_ptr<Angler>>::map(
    (std::map<unsigned int,std::shared_ptr<Angler>> *const)(v2 + 64),
    &this->angler_map_);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 144));
  __for_range = (std::map<unsigned int,std::shared_ptr<Angler>> *)(v2 + 64);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Angler>>::begin((std::map<unsigned int,std::shared_ptr<Angler>> *const)(v2 + 64))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Angler>>::end((std::map<unsigned int,std::shared_ptr<Angler>> *const)(v2 + 64))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler>>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::shared_ptr<Angler>>(__in);
    angler_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Angler>>(__in);
    v5 = 0;
    v6 = 1;
    if ( !std::operator==<Angler>(0LL, angler_ptr) )
    {
      std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)angler_ptr);
      std::weak_ptr<Player>::lock(&v16);
      v5 = 1;
      if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)&v16) )
        v6 = 0;
    }
    if ( v5 )
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v16);
    if ( v6 )
    {
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 144), uid);
    }
    else
    {
      v7 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)angler_ptr);
      FishPoolComp::refreshAngler(this, v7, now);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler>>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::set<unsigned int> *)(v2 + 144);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Base_ptr)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 144))._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Base_ptr)std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v8;
    std::map<unsigned int,std::shared_ptr<Angler>>::erase(
      &this->angler_map_,
      (const std::map<unsigned int,std::shared_ptr<Angler>>::key_type *)(v2 + 48));
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 144));
  std::map<unsigned int,std::shared_ptr<Angler>>::~map((std::map<unsigned int,std::shared_ptr<Angler>> *const)(v2 + 64));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 323: range 00000000131464A8-0000000013146643
void __cdecl FishPoolComp::refreshAngler(FishPoolComp *const this, Angler *angler, uint32_t now)
{
  int v3; // eax
  FishState state; // eax
  bool v5; // bl
  uint32_t timeout; // [rsp+2Ch] [rbp-24h]
  std::weak_ptr<Monster> v8; // [rsp+30h] [rbp-20h] BYREF

  if ( !FishPoolComp::checkAndExitFishing(this, angler) )
  {
    timeout = 0;
    v3 = *(unsigned __int8 *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000);
    if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
      __asan_report_load4();
    state = angler->state;
    if ( state == FISH_STATE_BITE )
    {
      timeout = FishPoolComp::getFishBiteTimeout(this, angler);
    }
    else if ( state <= FISH_STATE_BITE )
    {
      if ( state == FISH_STATE_CAST )
      {
        FishPoolComp::anglerFilterFish(this, angler, 0);
      }
      else if ( state == FISH_STATE_CHOOSE )
      {
        std::weak_ptr<Monster>::lock(&v8);
        v5 = std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)&v8);
        std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)&v8);
        if ( v5 )
          FishPoolComp::anglerFilterFish(this, angler, 0);
        else
          timeout = 60;
      }
    }
    if ( timeout )
    {
      if ( *(_BYTE *)(((unsigned __int64)&angler->last_state_change_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)angler + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&angler->last_state_change_time >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( now > angler->last_state_change_time + timeout )
        FishPoolComp::failFishing(this, angler, 1, FISH_BATTLE_RESULT_TIMEOUT);
    }
  }
};

// Line 370: range 0000000013146644-00000000131468F5
int32_t __cdecl FishPoolComp::checkAndExitFishing(FishPoolComp *const this, Angler *angler)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  Player *v7; // rax
  const Vector3 *Position; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const Vector3 *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t Uid; // edx
  int32_t result; // eax
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 player_ptr:371 64 16 14 avatar_ptr:376";
  *(_QWORD *)(v3 + 16) = FishPoolComp::checkAndExitFishing;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 32)) )
  {
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Player::getAvatarComp(v7);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 64));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64)) )
    {
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Position = Entity::getPosition((const Entity *const)this->gadget_);
      v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v10 = Entity::getPosition((const Entity *const)v9);
      *(float *)v2.m128i_i32 = getPlaneDistance(v10, Position);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v15);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
      LOBYTE(Position) = COERCE_FLOAT(_mm_cvtsi128_si32(v2)) > ConstValueExcelConfigMgr::getFishingCheckMaxDistance(&v11->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v15);
      if ( (_BYTE)Position )
      {
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Uid = Player::getUid(v12);
        FishPoolComp::doExitFishing(this, Uid);
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  result = v6;
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

// Line 391: range 00000000131468F6-0000000013146B90
uint32_t __cdecl FishPoolComp::getFishBiteTimeout(FishPoolComp *const this, Angler *angler)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t bite_timeout; // r14d
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t result; // eax
  uint32_t fish_id; // [rsp+14h] [rbp-ACh]
  const data::FishExcelConfig *fish_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-A0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 fish_ptr:392 64 16 17 fish_comp_ptr:397";
  *(_QWORD *)(v2 + 16) = FishPoolComp::getFishBiteTimeout;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v2 + 32));
  if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 32)) )
  {
    bite_timeout = 0;
  }
  else
  {
    std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v2 + 64));
    if ( std::operator==<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v2 + 64)) )
    {
      bite_timeout = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      fish_id = MonsterFishComp::getFishId(v6);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v11);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
      fish_config_ptr = data::FishExcelConfigMgrBase::findFishExcelConfig(
                          &v7->design_config.txt_config_mgr.fish_config_mgr,
                          fish_id);
      std::shared_ptr<Config>::~shared_ptr(&v11);
      if ( fish_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->bite_timeout >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)fish_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_config_ptr->bite_timeout >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        bite_timeout = fish_config_ptr->bite_timeout;
      }
      else
      {
        bite_timeout = 0;
      }
    }
    std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v2 + 64));
  }
  std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 32));
  result = bite_timeout;
  if ( v12 == (char *)v2 )
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

// Line 413: range 0000000013147680-0000000013149140
void __fastcall FishPoolComp::refreshFish(FishPoolComp *const this, uint32_t now, uint32_t pool_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t last_disperse_time; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v14; // rax
  std::pair<unsigned int const,unsigned int> *v15; // rax
  unsigned int **v16; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v17; // rax
  unsigned int **v18; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v19; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v21; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v22; // rax
  unsigned int **v23; // rdx
  FishExcelConfigMgr *p_fish_config_mgr; // rcx
  std::map<unsigned int,unsigned int>::mapped_type *v25; // rdx
  unsigned int *p_second; // rcx
  uint32_t *v27; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v28; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v29; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v30; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v31; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v32; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v34; // rax
  uint32_t *v35; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v36; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v37; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v38; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v39; // rax
  FishPoolComp::refreshFish::<lambda(Monster&)> v40; // [rsp-20h] [rbp-510h]
  FishPoolComp::refreshFish::<lambda(Monster&)>_0 v41; // [rsp-20h] [rbp-510h]
  uint32_t cur_num; // [rsp+1Ch] [rbp-4D4h]
  uint32_t add_num_0; // [rsp+20h] [rbp-4D0h]
  uint32_t add_num; // [rsp+24h] [rbp-4CCh]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-4C8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-4C0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_1; // [rsp+38h] [rbp-4B8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-4B0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_2; // [rsp+48h] [rbp-4A8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_1; // [rsp+50h] [rbp-4A0h] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+58h] [rbp-498h]
  const data::FishPoolExcelConfig *pool_config_ptr; // [rsp+60h] [rbp-490h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+68h] [rbp-488h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+70h] [rbp-480h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+78h] [rbp-478h]
  const std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+80h] [rbp-470h]
  std::vector<unsigned int> *__for_range_6; // [rsp+88h] [rbp-468h]
  const std::pair<unsigned int const,unsigned int> *v59; // [rsp+90h] [rbp-460h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *stock_id_0; // [rsp+98h] [rbp-458h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num_1; // [rsp+A0h] [rbp-450h]
  const data::FishStockExcelConfig *stock_config_ptr; // [rsp+A8h] [rbp-448h]
  const std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+B0h] [rbp-440h]
  const std::map<unsigned int,unsigned int> *__for_range_4; // [rsp+B8h] [rbp-438h]
  const std::pair<unsigned int const,unsigned int> *v65; // [rsp+C0h] [rbp-430h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *fish_id_1; // [rsp+C8h] [rbp-428h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *__2; // [rsp+D0h] [rbp-420h]
  std::vector<unsigned int> *__for_range_5; // [rsp+D8h] [rbp-418h]
  const std::pair<unsigned int const,unsigned int> *v69; // [rsp+E0h] [rbp-410h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *fish_id_0; // [rsp+E8h] [rbp-408h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *__1; // [rsp+F0h] [rbp-400h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *__0; // [rsp+F8h] [rbp-3F8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+100h] [rbp-3F0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *fish_id; // [rsp+108h] [rbp-3E8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+110h] [rbp-3E0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stock_id; // [rsp+118h] [rbp-3D8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+120h] [rbp-3D0h]
  std::vector<unsigned int>::iterator __for_end_2; // [rsp+128h] [rbp-3C8h] BYREF
  std::shared_ptr<Config> v79; // [rsp+130h] [rbp-3C0h] BYREF
  std::function<ForeachPolicy(Monster&)> p_func; // [rsp+140h] [rbp-3B0h] BYREF
  FishPoolComp::refreshFish::<lambda(Monster&)> __f; // [rsp+160h] [rbp-390h]
  common::milog::MiLogStream v82; // [rsp+180h] [rbp-370h] BYREF
  char v83[848]; // [rsp+1A0h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 4 16 cur_fish_num:501 64 4 16 pool_max_num:508 80 4 11 fish_id:620 96 4 11 pool_id:412 112"
                        " 8 8 iter:534 144 8 8 iter:549 176 24 11 add_vec:618 240 48 16 stock_id_set:449 320 48 19 valid_"
                        "stock_set:454 400 48 18 valid_fish_set:455 480 48 20 valid_cached_map:459 560 48 21 occupied_fis"
                        "h_set:470 640 48 17 keep_fish_map:474 720 48 16 need_add_map:517";
  *(_QWORD *)(v3 + 16) = FishPoolComp::refreshFish;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862729] = -218959118;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862734] = -218959118;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862739] = -218959118;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862744] = -202116109;
  *(_DWORD *)(v3 + 96) = pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_fish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_fish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now > this->last_refresh_fish_time_ + 5 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_disperse_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_disperse_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    last_disperse_time = this->last_disperse_time_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v79);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79);
    LOBYTE(last_disperse_time) = now <= last_disperse_time
                                      + ConstValueExcelConfigMgr::getFishingDisperseTime(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v79);
    if ( !(_BYTE)last_disperse_time )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_fish_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_refresh_fish_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_refresh_fish_time_);
      }
      this->last_refresh_fish_time_ = now;
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
      if ( !*(_DWORD *)(v3 + 96) && gadget_script_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 96) = gadget_script_config_ptr->fish_pool_id;
      }
      if ( *(_DWORD *)(v3 + 96) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v79);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79);
        pool_config_ptr = data::FishExcelConfigMgrBase::findFishPoolExcelConfig(
                            &v10->design_config.txt_config_mgr.fish_config_mgr,
                            *(_DWORD *)(v3 + 96));
        std::shared_ptr<Config>::~shared_ptr(&v79);
        if ( pool_config_ptr )
        {
          M_current = std::vector<unsigned int>::end(&pool_config_ptr->stock_list)._M_current;
          v14._M_current = std::vector<unsigned int>::begin(&pool_config_ptr->stock_list)._M_current;
          std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
            (std::set<unsigned int> *const)(v3 + 240),
            v14,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
          __for_range = &pool_config_ptr->stock_guarantee;
          __for_end_1._M_node = std::map<unsigned int,unsigned int>::begin(&pool_config_ptr->stock_guarantee)._M_node;
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 144) = std::map<unsigned int,unsigned int>::end(&pool_config_ptr->stock_guarantee);
          while ( std::operator!=(
                    &__for_end_1,
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 144)) )
          {
            v15 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_end_1);
            v16 = (unsigned int **)v15;
            if ( ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v15 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load_n(v15, 8LL);
            }
            __for_end_2._M_current = *v16;
            stock_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_2);
            _ = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_2);
            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 240), stock_id);
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_end_1);
          }
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 320));
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 400));
          FishPoolComp::getValidStock(
            this,
            (const std::set<unsigned int> *)(v3 + 240),
            (std::set<unsigned int> *)(v3 + 320),
            (std::set<unsigned int> *)(v3 + 400));
          std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 480));
          __for_range_0 = &this->cached_fish_map_;
          __for_end_1._M_node = std::map<unsigned int,unsigned int>::begin(&this->cached_fish_map_)._M_node;
          *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 144) = std::map<unsigned int,unsigned int>::end(__for_range_0);
          while ( std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_1,
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 144)) )
          {
            v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end_1);
            v18 = (unsigned int **)v17;
            if ( ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v17 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load_n(v17, 8LL);
            }
            __for_end_2._M_current = *v18;
            fish_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_2);
            num = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_2);
            if ( std::set<unsigned int>::count((const std::set<unsigned int> *const)(v3 + 400), fish_id) )
            {
              if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v19 = *num;
              v20 = std::map<unsigned int,unsigned int>::operator[](
                      (std::map<unsigned int,unsigned int> *const)(v3 + 480),
                      fish_id);
              v21 = v20;
              if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v20);
              }
              *v21 = v19;
            }
            std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end_1);
          }
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 560));
          FishPoolComp::getOccupiedFish(this, (std::set<unsigned int> *)(v3 + 560));
          std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 640));
          __f.__valid_cached_map = (std::map<unsigned int,unsigned int> *)(v3 + 480);
          __f.__keep_fish_map = (std::map<unsigned int,unsigned int> *)(v3 + 640);
          __f.__occupied_fish_set = (std::set<unsigned int> *)(v3 + 560);
          __f.__this = this;
          v40.__this = this;
          v40.__occupied_fish_set = (std::set<unsigned int> *)(v3 + 560);
          v40.__keep_fish_map = (std::map<unsigned int,unsigned int> *)(v3 + 640);
          v40.__valid_cached_map = (std::map<unsigned int,unsigned int> *)(v3 + 480);
          std::function<ForeachPolicy ()(Monster &)>::function<FishPoolComp::refreshFish(unsigned int,unsigned int)::{lambda(Monster &)#1},void,void>(
            (std::function<ForeachPolicy(Monster&)> *const)&v82,
            v40);
          FishPoolComp::foreachFish(this, (std::function<ForeachPolicy(Monster&)> *)&v82);
          std::function<ForeachPolicy ()(Monster &)>::~function((std::function<ForeachPolicy(Monster&)> *const)&v82);
          *(_DWORD *)(v3 + 48) = 0;
          __for_range_1 = (std::map<unsigned int,unsigned int> *)(v3 + 640);
          __for_end_1._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 640))._M_node;
          *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 144) = std::map<unsigned int,unsigned int>::end(__for_range_1);
          while ( std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_1,
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 144)) )
          {
            v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end_1);
            v23 = (unsigned int **)v22;
            if ( ((unsigned __int8)v22 & 7) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v22->second + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v22 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v22->second + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load_n(v22, 8LL);
            }
            __for_end_2._M_current = *v23;
            __0 = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_2);
            num_0 = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_2);
            if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 48) += *num_0;
            std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end_1);
          }
          if ( *(_BYTE *)(((unsigned __int64)&pool_config_ptr->max_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&pool_config_ptr->max_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 64) = pool_config_ptr->max_num;
          std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 720));
          __for_range_2 = &pool_config_ptr->stock_guarantee;
          __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&pool_config_ptr->stock_guarantee)._M_node;
          __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
          while ( std::operator!=(&__for_begin_0, &__for_end) )
          {
            v59 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
            stock_id_0 = std::get<0ul,unsigned int const,unsigned int>(v59);
            num_1 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v59);
            if ( std::set<unsigned int>::count((const std::set<unsigned int> *const)(v3 + 320), stock_id_0) )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v79);
              p_fish_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79)->design_config.txt_config_mgr.fish_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)stock_id_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)stock_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stock_id_0 >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              stock_config_ptr = data::FishExcelConfigMgrBase::findFishStockExcelConfig(p_fish_config_mgr, *stock_id_0);
              std::shared_ptr<Config>::~shared_ptr(&v79);
              if ( stock_config_ptr )
              {
                cur_num = 0;
                __for_range_3 = &stock_config_ptr->fish_weight;
                __for_begin_1._M_node = std::map<unsigned int,unsigned int>::begin(&stock_config_ptr->fish_weight)._M_node;
                __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_3)._M_node;
                while ( std::operator!=(&__for_begin_1, &__for_end_0) )
                {
                  v69 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_1);
                  fish_id_0 = std::get<0ul,unsigned int const,unsigned int>(v69);
                  __1 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v69);
                  *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::find(
                                                                                   (std::map<unsigned int,unsigned int> *const)(v3 + 640),
                                                                                   fish_id_0);
                  __for_end_2._M_current = (unsigned int *)std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v3 + 640))._M_node;
                  if ( !std::operator==(
                          (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112),
                          (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_2) )
                  {
                    v25 = std::map<unsigned int,unsigned int>::operator[](
                            (std::map<unsigned int,unsigned int> *const)(v3 + 640),
                            fish_id_0);
                    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    cur_num += *v25;
                  }
                  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_1);
                }
                if ( *(_BYTE *)(((unsigned __int64)num_1 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)num_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_1 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( cur_num < *num_1 )
                {
                  __for_range_4 = &stock_config_ptr->fish_weight;
                  __for_begin_2._M_node = std::map<unsigned int,unsigned int>::begin(&stock_config_ptr->fish_weight)._M_node;
                  __for_end_1._M_node = std::map<unsigned int,unsigned int>::end(__for_range_4)._M_node;
                  while ( std::operator!=(&__for_begin_2, &__for_end_1) )
                  {
                    v65 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_2);
                    fish_id_1 = std::get<0ul,unsigned int const,unsigned int>(v65);
                    __2 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v65);
                    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 144) = std::map<unsigned int,unsigned int>::find(
                                                                                     (std::map<unsigned int,unsigned int> *const)(v3 + 480),
                                                                                     fish_id_1);
                    __for_end_2._M_current = (unsigned int *)std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v3 + 480))._M_node;
                    if ( !std::operator==(
                            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 144),
                            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_2) )
                    {
                      p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 144))->second;
                      if ( *(_BYTE *)(((unsigned __int64)num_1 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)num_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_1 >> 3)
                                                                                + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      *(_DWORD *)(v3 + 80) = cur_num - *num_1;
                      v27 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v3 + 80), p_second);
                      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      add_num = *v27;
                      v28 = std::map<unsigned int,unsigned int>::operator[](
                              (std::map<unsigned int,unsigned int> *const)(v3 + 480),
                              fish_id_1);
                      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      *v28 -= add_num;
                      v29 = std::map<unsigned int,unsigned int>::operator[](
                              (std::map<unsigned int,unsigned int> *const)(v3 + 720),
                              fish_id_1);
                      if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      *v29 += add_num;
                      cur_num += add_num;
                      *(_DWORD *)(v3 + 48) += add_num;
                      if ( *(_BYTE *)(((unsigned __int64)num_1 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)num_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_1 >> 3)
                                                                                + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      if ( cur_num >= *num_1 )
                        break;
                    }
                    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_2);
                  }
                  if ( *(_BYTE *)(((unsigned __int64)num_1 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)num_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_1 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( cur_num < *num_1 )
                  {
                    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 176));
                    if ( *(_BYTE *)(((unsigned __int64)num_1 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)num_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_1 >> 3)
                                                                              + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    FishPoolComp::selectFish(
                      this,
                      &stock_config_ptr->fish_weight,
                      *num_1 - cur_num,
                      (std::vector<unsigned int> *)(v3 + 176));
                    *(_DWORD *)(v3 + 48) += std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 176));
                    __for_range_5 = (std::vector<unsigned int> *)(v3 + 176);
                    *(std::vector<unsigned int>::iterator *)(v3 + 144) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 176));
                    __for_end_2._M_current = std::vector<unsigned int>::end(__for_range_5)._M_current;
                    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 144),
                              &__for_end_2) )
                    {
                      v30 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 144));
                      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      *(_DWORD *)(v3 + 80) = *v30;
                      v31 = std::map<unsigned int,unsigned int>::operator[](
                              (std::map<unsigned int,unsigned int> *const)(v3 + 720),
                              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
                      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      ++*v31;
                      v32 = std::map<unsigned int,unsigned int>::operator[](
                              &this->cached_fish_map_,
                              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
                      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      ++*v32;
                      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 144));
                    }
                    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 176));
                  }
                }
              }
            }
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
          }
          if ( *(_DWORD *)(v3 + 48) > *(_DWORD *)(v3 + 64) )
          {
            v82.log_ = (common::milog::MiLog *)(v3 + 48);
            v82.ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(v3 + 64);
            v82.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v3 + 560);
            v82.ostr_ = (common::milog::MilogStringStream *)this;
            v41.__this = this;
            v41.__occupied_fish_set = (std::set<unsigned int> *)(v3 + 560);
            v41.__pool_max_num = (uint32_t *)(v3 + 64);
            v41.__cur_fish_num = (uint32_t *)(v3 + 48);
            std::function<ForeachPolicy ()(Monster &)>::function<FishPoolComp::refreshFish(unsigned int,unsigned int)::{lambda(Monster &)#2},void,void>(
              &p_func,
              v41);
            FishPoolComp::foreachFish(this, &p_func);
            std::function<ForeachPolicy ()(Monster &)>::~function(&p_func);
          }
          *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 144) = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 480));
          while ( 1 )
          {
            __for_end_2._M_current = (unsigned int *)std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v3 + 480))._M_node;
            if ( !std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 144),
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_2)
              || *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 64) )
            {
              break;
            }
            v34 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 144));
            *(_DWORD *)(v3 + 80) = *(_DWORD *)(v3 + 64) - *(_DWORD *)(v3 + 48);
            v35 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v3 + 80), &v34->second);
            if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            add_num_0 = *v35;
            v36 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 144));
            v37 = std::map<unsigned int,unsigned int>::operator[](
                    (std::map<unsigned int,unsigned int> *const)(v3 + 720),
                    (const std::map<unsigned int,unsigned int>::key_type *)v36);
            if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *v37 += add_num_0;
            *(_DWORD *)(v3 + 48) += add_num_0;
            std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(
              (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 144),
              0);
          }
          if ( *(_DWORD *)(v3 + 64) > *(_DWORD *)(v3 + 48) )
          {
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 176));
            FishPoolComp::selectFish(
              this,
              pool_config_ptr,
              (const std::set<unsigned int> *)(v3 + 320),
              *(_DWORD *)(v3 + 64) - *(_DWORD *)(v3 + 48),
              (std::vector<unsigned int> *)(v3 + 176));
            __for_range_6 = (std::vector<unsigned int> *)(v3 + 176);
            *(std::vector<unsigned int>::iterator *)(v3 + 144) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 176));
            __for_end_2._M_current = std::vector<unsigned int>::end(__for_range_6)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 144),
                      &__for_end_2) )
            {
              v38 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 144));
              if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v3 + 80) = *v38;
              v39 = std::map<unsigned int,unsigned int>::operator[](
                      (std::map<unsigned int,unsigned int> *const)(v3 + 720),
                      (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
              if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              ++*v39;
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 144));
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 176));
          }
          FishPoolComp::genFish(this, (const std::map<unsigned int,unsigned int> *)(v3 + 720), *(_DWORD *)(v3 + 64));
          FishPoolComp::refreshFishPoolState(this);
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 720));
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 640));
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 560));
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 480));
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 400));
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 320));
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 240));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v82,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/fish_pool_comp.cpp",
            "refreshFish",
            444);
          v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v82, (const char (*)[10])"pool_id: ");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v3 + 96));
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v12, (const char (*)[18])" config not found");
          common::milog::MiLogStream::~MiLogStream(&v82);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/fish_pool_comp.cpp",
          "refreshFish",
          436);
        v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v82, (const char (*)[11])"gadget_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 80) = Entity::getEntityId((const Entity *const)this->gadget_);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" pool_id=0");
        common::milog::MiLogStream::~MiLogStream(&v82);
      }
    }
  }
  if ( v83 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
};

// Line 475: range 0000000013146B92-000000001314719A
ForeachPolicy __cdecl FishPoolComp::refreshFish(unsigned int,unsigned int)::{lambda(Monster &)#1}::operator()(
        const FishPoolComp::refreshFish::<lambda(Monster&)> *const __closure,
        Monster *monster)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  std::set<unsigned int> *occupied_fish_set; // r14
  char v8; // al
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(Monster *, VisionContext *); // r15
  std::map<unsigned int,std::weak_ptr<Monster>> *p_fish_wtr_map; // r14
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v16; // rdx
  char v17; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v18; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  std::set<unsigned int>::key_type __x; // [rsp+24h] [rbp-ECh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  VisionContext v24; // [rsp+34h] [rbp-DCh] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 fish_id:478 64 8 8 iter:484 96 16 17 fish_comp_ptr:479";
  *(_QWORD *)(v2 + 16) = FishPoolComp::refreshFish(unsigned int,unsigned int)::{lambda(Monster &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = 0;
  EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v2 + 96));
  if ( std::operator!=<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v2 + 96)) )
  {
    v5 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    *(_DWORD *)(v2 + 48) = MonsterFishComp::getFishId(v5);
  }
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  __closure->__valid_cached_map,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(__closure->__valid_cached_map)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
          &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v6->second )
      goto LABEL_16;
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__occupied_fish_set >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  occupied_fish_set = __closure->__occupied_fish_set;
  __x = Entity::getEntityId((const Entity *const)monster);
  if ( std::set<unsigned int>::count(occupied_fish_set, &__x) )
LABEL_16:
    v8 = 0;
  else
    v8 = 1;
  if ( v8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)monster >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = *(_QWORD *)monster->baseclass_0 + 128LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(void (__fastcall **)(Monster *, VisionContext *))v9;
    VisionContext::VisionContext(&v24, VISION_FISH_REFRESH);
    v10(monster, &v24);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_fish_wtr_map = &__closure->__this->fish_wtr_map_;
    __x = Entity::getEntityId((const Entity *const)monster);
    std::map<unsigned int,std::weak_ptr<Monster>>::erase(p_fish_wtr_map, &__x);
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/fish_pool_comp.cpp",
      "operator()",
      489);
    v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v25, (const char (*)[9])"fish id:");
    val = Monster::getMonsterId(monster);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" entity_id:");
    __x = Entity::getEntityId((const Entity *const)monster);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &__x);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v15,
      (const char (*)[33])" leave scene, because fish stock");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __y._M_node = std::map<unsigned int,unsigned int>::end(__closure->__valid_cached_map)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
            &__y) )
      goto LABEL_32;
    v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v16->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v16 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v16->second )
      v17 = 1;
    else
LABEL_32:
      v17 = 0;
    if ( v17 )
    {
      v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v18->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v18 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      --v18->second;
    }
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__keep_fish_map >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = std::map<unsigned int,unsigned int>::operator[](
            __closure->__keep_fish_map,
            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*v19;
  }
  std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v2 + 96));
  result = FOREACH_CONTINUE;
  if ( v26 == (char *)v2 )
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

// Line 583: range 000000001314719C-000000001314767F
ForeachPolicy __cdecl FishPoolComp::refreshFish(unsigned int,unsigned int)::{lambda(Monster &)#2}::operator()(
        const FishPoolComp::refreshFish::<lambda(Monster&)>_0 *const __closure,
        Monster *monster)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t *cur_fish_num; // rdx
  uint32_t v6; // esi
  uint32_t *pool_max_num; // rdx
  ForeachPolicy v8; // r14d
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::set<unsigned int> *occupied_fish_set; // r14
  char v11; // al
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(Monster *, VisionContext *); // r15
  std::map<unsigned int,std::weak_ptr<Monster>> *p_fish_wtr_map; // r14
  uint32_t *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+28h] [rbp-A8h] BYREF
  std::set<unsigned int>::key_type __x; // [rsp+2Ch] [rbp-A4h] BYREF
  uint32_t fish_id; // [rsp+30h] [rbp-A0h]
  VisionContext v25; // [rsp+34h] [rbp-9Ch] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-90h] BYREF
  char v27[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 fish_comp_ptr:590";
  *(_QWORD *)(v2 + 16) = FishPoolComp::refreshFish(unsigned int,unsigned int)::{lambda(Monster &)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cur_fish_num = __closure->__cur_fish_num;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__cur_fish_num >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__cur_fish_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__cur_fish_num >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v6 = *cur_fish_num;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__pool_max_num >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  pool_max_num = __closure->__pool_max_num;
  if ( *(_BYTE *)(((unsigned __int64)pool_max_num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pool_max_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pool_max_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( v6 > *pool_max_num )
  {
    fish_id = 0;
    EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v2 + 32));
    if ( std::operator!=<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v2 + 32)) )
    {
      v9 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      fish_id = MonsterFishComp::getFishId(v9);
    }
    if ( !fish_id )
      goto LABEL_21;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__occupied_fish_set >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    occupied_fish_set = __closure->__occupied_fish_set;
    __x = Entity::getEntityId((const Entity *const)monster);
    if ( std::set<unsigned int>::count(occupied_fish_set, &__x) )
      v11 = 1;
    else
LABEL_21:
      v11 = 0;
    if ( v11 )
    {
      v8 = FOREACH_CONTINUE;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)monster >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = *(_QWORD *)monster->baseclass_0 + 128LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      v13 = *(void (__fastcall **)(Monster *, VisionContext *))v12;
      VisionContext::VisionContext(&v25, VISION_FISH_REFRESH);
      v13(monster, &v25);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      p_fish_wtr_map = &__closure->__this->fish_wtr_map_;
      __x = Entity::getEntityId((const Entity *const)monster);
      std::map<unsigned int,std::weak_ptr<Monster>>::erase(p_fish_wtr_map, &__x);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = __closure->__cur_fish_num;
      if ( *(_BYTE *)(((unsigned __int64)__closure->__cur_fish_num >> 3) + 0x7FFF8000) != 0
        && (char)(((__int64)__closure->__cur_fish_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__cur_fish_num >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      --*v15;
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/fish_pool_comp.cpp",
        "operator()",
        602);
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v26, (const char (*)[9])"fish id:");
      val = Monster::getMonsterId(monster);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" entity_id:");
      __x = Entity::getEntityId((const Entity *const)monster);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &__x);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        v19,
        (const char (*)[28])" leave scene, because baodi");
      common::milog::MiLogStream::~MiLogStream(&v26);
      v8 = FOREACH_CONTINUE;
    }
    std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v2 + 32));
  }
  else
  {
    v8 = FOREACH_BREAK;
  }
  result = v8;
  if ( v27 == (char *)v2 )
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

// Line 634: range 0000000013149360-000000001314953B
void __cdecl FishPoolComp::refreshFishPoolState(FishPoolComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t state; // [rsp+1Ch] [rbp-84h]
  std::function<ForeachPolicy(Monster&)> p_func; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 20 is_has_furniture:643";
  *(_QWORD *)(v1 + 16) = FishPoolComp::refreshFishPoolState;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  if ( FishPoolComp::isFishPoolEmpty(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Gadget::setState(this->gadget_, 0xCAu, 0, 1);
  }
  else
  {
    *(_BYTE *)(v1 + 32) = 0;
    std::function<ForeachPolicy ()(Monster &)>::function<FishPoolComp::refreshFishPoolState(void)::{lambda(Monster &)#1},void,void>(
      &p_func,
      (FishPoolComp::refreshFishPoolState::<lambda(Monster&)>)(v1 + 32));
    FishPoolComp::foreachFish(this, &p_func);
    std::function<ForeachPolicy ()(Monster &)>::~function(&p_func);
    state = 0;
    if ( *(_BYTE *)(v1 + 32) )
      state = 203;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Gadget::setState(this->gadget_, state, 0, 1);
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 644: range 0000000013149142-000000001314935F
ForeachPolicy __cdecl FishPoolComp::refreshFishPoolState(void)::{lambda(Monster &)#1}::operator()(
        const FishPoolComp::refreshFishPoolState::<lambda(Monster&)> *const __closure,
        Monster *monster)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy v5; // r14d
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool isFurnitureFish; // r14
  bool *is_has_furniture; // rdx
  ForeachPolicy result; // eax
  uint32_t fish_id; // [rsp+1Ch] [rbp-84h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-80h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 fish_comp_ptr:646";
  *(_QWORD *)(v2 + 16) = FishPoolComp::refreshFishPoolState(void)::{lambda(Monster &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v2 + 32));
  if ( std::operator==<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v2 + 32)) )
  {
    v5 = FOREACH_CONTINUE;
  }
  else
  {
    v6 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    fish_id = MonsterFishComp::getFishId(v6);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    isFurnitureFish = FishExcelConfigMgr::isFurnitureFish(&v7->design_config.txt_config_mgr.fish_config_mgr, fish_id);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( isFurnitureFish )
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      is_has_furniture = __closure->__is_has_furniture;
      if ( *(_BYTE *)(((unsigned __int64)__closure->__is_has_furniture >> 3) + 0x7FFF8000) != 0
        && ((__int64)__closure->__is_has_furniture & 7) >= *(_BYTE *)(((unsigned __int64)__closure->__is_has_furniture >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_store1(__closure->__is_has_furniture);
      }
      *is_has_furniture = 1;
      v5 = FOREACH_BREAK;
    }
    else
    {
      v5 = FOREACH_CONTINUE;
    }
  }
  std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 669: range 000000001314953C-000000001314A0D0
void __cdecl FishPoolComp::selectFish(
        FishPoolComp *const this,
        const data::FishPoolExcelConfig *pool_config,
        const std::set<unsigned int> *valid_stock_set,
        uint32_t num,
        std::vector<unsigned int> *add_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  int v11; // esi
  FishStock *v12; // rax
  uint32_t v13; // ecx
  const FishExcelConfigMgr *p_fish_config_mgr; // rdi
  data::FishStockType type; // edx
  unsigned int max_num; // ecx
  uint32_t v17; // ecx
  unsigned int *M_current; // r15
  unsigned int *v19; // r14
  int v20; // ecx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v21; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v22; // rax
  uint32_t left_num; // [rsp+38h] [rbp-208h]
  uint32_t gen_num; // [rsp+3Ch] [rbp-204h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-200h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-1F8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+50h] [rbp-1F0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-1E8h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_1; // [rsp+60h] [rbp-1E0h]
  std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *__in; // [rsp+68h] [rbp-1D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *stock_type; // [rsp+70h] [rbp-1D0h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *fish_weight_map; // [rsp+78h] [rbp-1C8h]
  FishStock *fish_stock_0; // [rsp+80h] [rbp-1C0h]
  std::vector<unsigned int> *__for_range_2; // [rsp+88h] [rbp-1B8h]
  const data::FishStockExcelConfig *stock_config_ptr; // [rsp+90h] [rbp-1B0h]
  std::map<unsigned int,unsigned int> *weight_map; // [rsp+98h] [rbp-1A8h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+A0h] [rbp-1A0h]
  FishStock *fish_stock; // [rsp+A8h] [rbp-198h]
  const data::FishStockLimit *stock_limit_ptr; // [rsp+B0h] [rbp-190h]
  const std::pair<unsigned int const,unsigned int> *v45; // [rsp+B8h] [rbp-188h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *fish_id; // [rsp+C0h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+C8h] [rbp-178h]
  std::shared_ptr<Config> v48; // [rsp+D0h] [rbp-170h] BYREF
  std::shared_ptr<Config> v49; // [rsp+E0h] [rbp-160h] BYREF
  char v50[336]; // [rsp+F0h] [rbp-150h] BYREF

  v5 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 12 stock_id:677 64 4 11 fish_id:732 80 8 8 iter:712 112 8 8 iter:696 144 24 15 cur_add_ve"
                        "c:725 208 48 21 stock_fish_weight:675";
  *(_QWORD *)(v5 + 16) = FishPoolComp::selectFish;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = 61956;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862725] = -218959360;
  v7[536862726] = 62194;
  v7[536862728] = -202116109;
  if ( num )
  {
    left_num = num;
    std::map<unsigned int,std::map<unsigned int,unsigned int>>::map((std::map<unsigned int,std::map<unsigned int,unsigned int>> *const)(v5 + 208));
    __for_range = &pool_config->stock_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&pool_config->stock_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&pool_config->stock_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 48) = *v8;
      if ( std::set<unsigned int>::count(valid_stock_set, (const std::set<unsigned int>::key_type *)(v5 + 48)) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v48);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
        stock_config_ptr = data::FishExcelConfigMgrBase::findFishStockExcelConfig(
                             &v9->design_config.txt_config_mgr.fish_config_mgr,
                             *(_DWORD *)(v5 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v48);
        if ( stock_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&stock_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)stock_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stock_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v5 + 64) = stock_config_ptr->type;
          weight_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                         (std::map<unsigned int,std::map<unsigned int,unsigned int>> *const)(v5 + 208),
                         (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v5 + 64));
          __for_range_0 = &stock_config_ptr->fish_weight;
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v5 + 80) = std::map<unsigned int,unsigned int>::begin(&stock_config_ptr->fish_weight);
          __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
          while ( std::operator!=(
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 80),
                    &__for_end_0) )
          {
            v45 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 80));
            fish_id = std::get<0ul,unsigned int const,unsigned int>(v45);
            weight = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v45);
            v10 = std::map<unsigned int,unsigned int>::operator[](weight_map, fish_id);
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v11 = *v10;
            if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *v10 = v11 + *weight;
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 80));
          }
          *(std::map<unsigned int,FishStock>::iterator *)(v5 + 112) = std::map<unsigned int,FishStock>::find(
                                                                        &this->fish_stock_map_,
                                                                        (const std::map<unsigned int,FishStock>::key_type *)(v5 + 64));
          __for_end_0._M_node = std::map<unsigned int,FishStock>::end(&this->fish_stock_map_)._M_node;
          if ( !std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,FishStock> >::_Self *)(v5 + 112),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,FishStock> >::_Self *)&__for_end_0) )
          {
            v12 = std::map<unsigned int,FishStock>::operator[](
                    &this->fish_stock_map_,
                    (const std::map<unsigned int,FishStock>::key_type *)(v5 + 64));
            fish_stock = v12;
            v13 = *(_DWORD *)(v5 + 64);
            if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v12);
            }
            fish_stock->stock_type = v13;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v49);
            p_fish_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.txt_config_mgr.fish_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&stock_config_ptr->type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)stock_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stock_config_ptr->type >> 3)
                                                                              + 0x7FFF8000) )
            {
              p_fish_config_mgr = (const FishExcelConfigMgr *)&stock_config_ptr->type;
              __asan_report_load4();
            }
            type = stock_config_ptr->type;
            if ( *(_BYTE *)(((unsigned __int64)&pool_config->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&pool_config->id >> 3) + 0x7FFF8000) <= 3 )
            {
              p_fish_config_mgr = (const FishExcelConfigMgr *)&pool_config->id;
              __asan_report_load4();
            }
            stock_limit_ptr = FishExcelConfigMgr::findFishStockLimitConfig(p_fish_config_mgr, pool_config->id, type);
            std::shared_ptr<Config>::~shared_ptr(&v49);
            if ( stock_limit_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&stock_limit_ptr->max_num >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&stock_limit_ptr->max_num >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              max_num = stock_limit_ptr->max_num;
              if ( *(_BYTE *)(((unsigned __int64)&stock_limit_ptr->min_num >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)stock_limit_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stock_limit_ptr->min_num >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v17 = common::tools::RandomUtils::rand<unsigned int>(stock_limit_ptr->min_num, max_num);
              if ( *(_BYTE *)(((unsigned __int64)&fish_stock->max_num >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)fish_stock + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_stock->max_num >> 3)
                                                                         + 0x7FFF8000) )
              {
                __asan_report_store4(&fish_stock->max_num);
              }
              fish_stock->max_num = v17;
            }
          }
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    __for_range_1 = (std::map<unsigned int,std::map<unsigned int,unsigned int>> *)(v5 + 208);
    __for_begin._M_current = (const unsigned int *)std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin((std::map<unsigned int,std::map<unsigned int,unsigned int>> *const)(v5 + 208))._M_node;
    __for_end._M_current = (const unsigned int *)std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)&__for_begin);
      stock_type = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(__in);
      fish_weight_map = std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(__in);
      *(std::map<unsigned int,FishStock>::iterator *)(v5 + 80) = std::map<unsigned int,FishStock>::find(
                                                                   &this->fish_stock_map_,
                                                                   stock_type);
      __for_end_0._M_node = std::map<unsigned int,FishStock>::end(&this->fish_stock_map_)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,FishStock> >::_Self *)(v5 + 80),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,FishStock> >::_Self *)&__for_end_0) )
      {
        fish_stock_0 = &std::_Rb_tree_iterator<std::pair<unsigned int const,FishStock>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FishStock> > *const)(v5 + 80))->second;
        gen_num = FishStock::getLeftNum(fish_stock_0, left_num);
        if ( gen_num )
        {
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 144));
          FishPoolComp::selectFish(this, fish_weight_map, gen_num, (std::vector<unsigned int> *)(v5 + 144));
          left_num -= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 144));
          M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v5 + 144))._M_current;
          v19 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 144))._M_current;
          *(std::vector<unsigned int>::iterator *)(v5 + 112) = std::vector<unsigned int>::end(add_vec);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v5 + 112));
          std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
            add_vec,
            (std::vector<unsigned int>::const_iterator)__for_end_0._M_node,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v19,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
          v20 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&fish_stock_0->gen_fish_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)fish_stock_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_stock_0->gen_fish_num >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          fish_stock_0->gen_fish_num += v20;
          __for_range_2 = add_vec;
          *(std::vector<unsigned int>::iterator *)(v5 + 112) = std::vector<unsigned int>::begin(add_vec);
          __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_2)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v5 + 112),
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
          {
            v21 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v5 + 112));
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v5 + 64) = *v21;
            v22 = std::map<unsigned int,unsigned int>::operator[](
                    &this->cached_fish_map_,
                    (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 64));
            if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            ++*v22;
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v5 + 112));
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 144));
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)&__for_begin);
    }
    std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map((std::map<unsigned int,std::map<unsigned int,unsigned int>> *const)(v5 + 208));
  }
  if ( v50 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 740: range 000000001314A0D2-000000001314A1EE
void __cdecl FishPoolComp::selectFish(
        FishPoolComp *const this,
        const std::map<unsigned int,unsigned int> *fish_weight_map,
        uint32_t num,
        std::vector<unsigned int> *selected_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned int idx; // [rsp+2Ch] [rbp-64h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 11 fish_id:743";
  *(_QWORD *)(v4 + 16) = FishPoolComp::selectFish;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  for ( idx = 0; num > idx; ++idx )
  {
    *(_DWORD *)(v4 + 32) = 0;
    if ( !common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
            fish_weight_map,
            (unsigned int *)(v4 + 32),
            0) )
      std::vector<unsigned int>::push_back(selected_vec, (const std::vector<unsigned int>::value_type *)(v4 + 32));
  }
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 752: range 000000001314A1F0-000000001314AF38
void __cdecl FishPoolComp::genFish(
        FishPoolComp *const this,
        const std::map<unsigned int,unsigned int> *add_fish_map,
        uint32_t max_fish_num)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::ConfigFishingZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v11; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v12; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 Position; // rax
  unsigned __int64 Rotation; // rax
  Scene *v18; // rax
  Entity *v19; // r14
  uint32_t GroupVisionType; // eax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  unsigned __int64 v22; // rax
  void (__fastcall *v23)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::weak_ptr<Monster> *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  float v34; // [rsp+8h] [rbp-318h]
  float v35; // [rsp+8h] [rbp-318h]
  unsigned int val; // [rsp+20h] [rbp-300h] BYREF
  uint32_t idx; // [rsp+24h] [rbp-2FCh]
  float born_radius; // [rsp+28h] [rbp-2F8h]
  uint32_t fish_num; // [rsp+2Ch] [rbp-2F4h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+30h] [rbp-2F0h] BYREF
  const data::FishExcelConfig *fish_config_ptr; // [rsp+38h] [rbp-2E8h]
  std::shared_ptr<Config> v43; // [rsp+40h] [rbp-2E0h] BYREF
  common::milog::MiLogStream v44; // [rsp+50h] [rbp-2D0h] BYREF
  char v45[688]; // [rsp+70h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 11 fish_id:774 64 8 8 iter:772 96 12 12 fish_pos:785 128 16 13 scene_ptr:753 160 16 21 co"
                        "nfig_gadget_ptr:760 192 16 15 monster_ptr:797 224 352 9 param:783";
  *(_QWORD *)(v3 + 16) = FishPoolComp::genFish;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219020288;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862738] = -202116109;
  v5[536862739] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v3 + 128));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/fish_pool_comp.cpp",
      "genFish",
      756);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v44,
           (const char (*)[41])"fish pool is not on the scene entity_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Entity::getEntityId((const Entity *const)this->gadget_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Gadget::getJsonConfig((const Gadget *const)(v3 + 160));
    if ( !std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v3 + 160)) )
    {
      v7 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( !std::operator==<data::ConfigFishingZone>(0LL, &v7->fishing_zone) )
      {
        v8 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v9 = std::__shared_ptr_access<data::ConfigFishingZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigFishingZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8->fishing_zone);
        if ( *(_BYTE *)(((unsigned __int64)&v9->born_radius >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v9 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->born_radius >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        born_radius = v9->born_radius;
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::begin(add_fish_map);
        while ( 1 )
        {
          __y._M_node = std::map<unsigned int,unsigned int>::end(add_fish_map)._M_node;
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
                  &__y)
            || std::map<unsigned int,std::weak_ptr<Monster>>::size(&this->fish_wtr_map_) >= max_fish_num )
          {
            break;
          }
          v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 48) = v11->first;
          v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          fish_num = v12->second;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v43);
          v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
          fish_config_ptr = data::FishExcelConfigMgrBase::findFishExcelConfig(
                              &v13->design_config.txt_config_mgr.fish_config_mgr,
                              *(_DWORD *)(v3 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v43);
          if ( fish_config_ptr )
          {
            MonsterParam::MonsterParam((MonsterParam *const)(v3 + 224));
            if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->monster_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)fish_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_config_ptr->monster_id >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 224) = fish_config_ptr->monster_id;
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Position = (unsigned __int64)Entity::getPosition((const Entity *const)this->gadget_);
            if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
              && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
              && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
            {
              Position = __asan_report_load_n(Position, 12LL);
            }
            *(_QWORD *)(v3 + 96) = *(_QWORD *)Position;
            *(_DWORD *)(v3 + 104) = *(_DWORD *)(Position + 8);
            *(_QWORD *)(v3 + 236) = *(_QWORD *)(v3 + 96);
            *(_DWORD *)(v3 + 244) = *(_DWORD *)(v3 + 104);
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Rotation = (unsigned __int64)Entity::getRotation((const Entity *const)this->gadget_);
            if ( (char)(Rotation & 7) >= *(_BYTE *)((Rotation >> 3) + 0x7FFF8000)
              && *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) != 0
              && (char)((Rotation + 11) & 7) >= *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) )
            {
              Rotation = __asan_report_load_n(Rotation, 12LL);
            }
            *(_QWORD *)(v3 + 248) = *(_QWORD *)Rotation;
            *(_DWORD *)(v3 + 256) = *(_DWORD *)(Rotation + 8);
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            toPtr<Gadget,Gadget>((Gadget *)(v3 + 192));
            std::shared_ptr<Gadget>::operator=(
              (std::shared_ptr<Gadget> *const)(v3 + 528),
              (std::shared_ptr<Gadget> *)(v3 + 192));
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 192));
            *(_DWORD *)(v3 + 544) = *(_DWORD *)(v3 + 48);
            if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->init_pose >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&fish_config_ptr->init_pose >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 432) = fish_config_ptr->init_pose;
            for ( idx = 0; idx < fish_num; ++idx )
            {
              v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              *(_DWORD *)(v3 + 232) = Scene::genNewEntityId(v18, PROT_ENTITY_MONSTER);
              v34 = *(float *)(v3 + 96);
              *(float *)(v3 + 236) = common::tools::RandomUtils::rand<float>(-born_radius, born_radius) + v34;
              v35 = *(float *)(v3 + 104);
              *(float *)(v3 + 244) = common::tools::RandomUtils::rand<float>(-born_radius, born_radius) + v35;
              *(float *)(v3 + 252) = (float)(int)common::tools::RandomUtils::rand<unsigned int>(0, 0x168u);
              EntityMgr::createMonster((const MonsterParam *)(v3 + 192));
              if ( !std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v3 + 192)) )
              {
                v19 = (Entity *)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                GroupVisionType = Entity::getGroupVisionType((const Entity *const)this->gadget_);
                Entity::setGroupVisionType(v19, GroupVisionType);
                v21 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v22 = *(_QWORD *)v21->baseclass_0 + 56LL;
                if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                  v22 = __asan_report_load8();
                v23 = *(void (__fastcall **)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v22;
                v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                v23(v21, v24, &VisionContext::meet_context);
                v25 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                val = Entity::getEntityId((const Entity *const)v25);
                v26 = std::map<unsigned int,std::weak_ptr<Monster>>::operator[](&this->fish_wtr_map_, &val);
                std::weak_ptr<Monster>::operator=<Monster>(v26, (const std::shared_ptr<Monster> *)(v3 + 192));
                common::milog::MiLogStream::create(
                  &v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/gadget/fish_pool_comp.cpp",
                  "genFish",
                  805);
                v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v44, (const char (*)[9])"fish_id:");
                v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v27,
                        (const unsigned int *)(v3 + 48));
                v29 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v28,
                        (const char (*)[13])" monster_id:");
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        &fish_config_ptr->monster_id);
                v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" pos:");
                v32 = operator<<(v31, (const Vector3 *)(v3 + 236));
                v33 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v32,
                        (const char (*)[17])" pool_entity_id:");
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Entity::getEntityId((const Entity *const)this->gadget_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
                common::milog::MiLogStream::~MiLogStream(&v44);
              }
              std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 192));
            }
            MonsterParam::~MonsterParam((MonsterParam *const)(v3 + 224));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/fish_pool_comp.cpp",
              "genFish",
              779);
            v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v44, (const char (*)[9])"fish_id:");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v15,
              (const char (*)[18])" config not found");
            common::milog::MiLogStream::~MiLogStream(&v44);
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(
            (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64),
            0);
        }
      }
    }
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v3 + 160));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 812: range 000000001314B172-000000001314B431
void __cdecl FishPoolComp::disperseFishPool(FishPoolComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  FishPoolComp::disperseFishPool::<lambda(Monster&)> v4; // [rsp-20h] [rbp-120h]
  uint32_t now; // [rsp+1Ch] [rbp-E4h]
  std::function<ForeachPolicy(Monster&)> p_func; // [rsp+40h] [rbp-C0h] BYREF
  char v7[160]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 1 15 is_has_fish:822 48 48 16 occupied_set:820";
  *(_QWORD *)(v1 + 16) = FishPoolComp::disperseFishPool;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61953;
  v3[536862723] = -202116109;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_disperse_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_disperse_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now > this->last_disperse_time_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_disperse_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_disperse_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_disperse_time_);
    }
    this->last_disperse_time_ = now;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 48));
    FishPoolComp::getOccupiedFish(this, (std::set<unsigned int> *)(v1 + 48));
    *(_BYTE *)(v1 + 32) = 0;
    v4.__this = this;
    v4.__is_has_fish = (bool *)(v1 + 32);
    v4.__occupied_set = (std::set<unsigned int> *)(v1 + 48);
    std::function<ForeachPolicy ()(Monster &)>::function<FishPoolComp::disperseFishPool(void)::{lambda(Monster &)#1},void,void>(
      &p_func,
      v4);
    FishPoolComp::foreachFish(this, &p_func);
    std::function<ForeachPolicy ()(Monster &)>::~function(&p_func);
    if ( *(_BYTE *)(v1 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Gadget::setState(this->gadget_, 0xC9u, 0, 1);
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 48));
  }
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 823: range 000000001314AF3A-000000001314B171
ForeachPolicy __cdecl FishPoolComp::disperseFishPool(void)::{lambda(Monster &)#1}::operator()(
        const FishPoolComp::disperseFishPool::<lambda(Monster&)> *const __closure,
        Monster *monster)
{
  bool *is_has_fish; // rdx
  std::set<unsigned int> *occupied_set; // rbx
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(Monster *, VisionContext *); // r12
  std::map<unsigned int,std::weak_ptr<Monster>> *p_fish_wtr_map; // rbx
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rax
  std::set<unsigned int>::key_type __x; // [rsp+10h] [rbp-40h] BYREF
  VisionContext v11; // [rsp+14h] [rbp-3Ch] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_has_fish >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  is_has_fish = __closure->__is_has_fish;
  if ( *(_BYTE *)(((unsigned __int64)is_has_fish >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_has_fish & 7) >= *(_BYTE *)(((unsigned __int64)is_has_fish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_has_fish);
  }
  *is_has_fish = 1;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  occupied_set = __closure->__occupied_set;
  __x = Entity::getEntityId((const Entity *const)monster);
  if ( std::set<unsigned int>::count(occupied_set, &__x) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)monster >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(_QWORD *)monster->baseclass_0 + 128LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = *(void (__fastcall **)(Monster *, VisionContext *))v5;
  VisionContext::VisionContext(&v11, VISION_FISH_BIG_SHOCK);
  v6(monster, &v11);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_fish_wtr_map = &__closure->__this->fish_wtr_map_;
  __x = Entity::getEntityId((const Entity *const)monster);
  std::map<unsigned int,std::weak_ptr<Monster>>::erase(p_fish_wtr_map, &__x);
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/fish_pool_comp.cpp",
    "operator()",
    832);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"fish entity_id:");
  __x = Entity::getEntityId((const Entity *const)monster);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
  common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v9, (const char (*)[25])" big shock and disappear");
  common::milog::MiLogStream::~MiLogStream(&v12);
  return 0;
};

// Line 844: range 000000001314B432-000000001314B757
void __cdecl FishPoolComp::getValidStock(
        FishPoolComp *const this,
        const std::set<unsigned int> *stock_id_set,
        std::set<unsigned int> *valid_stock_set,
        std::set<unsigned int> *valid_fish_set)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-B0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-A8h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-A0h]
  const data::FishStockExcelConfig *stock_config_ptr; // [rsp+48h] [rbp-98h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-90h]
  const std::pair<unsigned int const,unsigned int> *v18; // [rsp+58h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *fish_id; // [rsp+60h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+68h] [rbp-78h]
  std::shared_ptr<Config> v21; // [rsp+70h] [rbp-70h] BYREF
  char v22[96]; // [rsp+80h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 stock_id:847";
  *(_QWORD *)(v4 + 16) = FishPoolComp::getValidStock;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  std::set<unsigned int>::clear(valid_stock_set);
  std::set<unsigned int>::clear(valid_fish_set);
  __for_range = stock_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(stock_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(stock_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 32) = *v7;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    stock_config_ptr = data::FishExcelConfigMgrBase::findFishStockExcelConfig(
                         &v8->design_config.txt_config_mgr.fish_config_mgr,
                         *(_DWORD *)(v4 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( stock_config_ptr && FishPoolComp::isValidFishStock(this, stock_config_ptr) )
    {
      std::set<unsigned int>::insert(valid_stock_set, (const std::set<unsigned int>::value_type *)(v4 + 32));
      __for_range_0 = &stock_config_ptr->fish_weight;
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&stock_config_ptr->fish_weight)._M_node;
      __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
        fish_id = std::get<0ul,unsigned int const,unsigned int>(v18);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v18);
        std::set<unsigned int>::insert(valid_fish_set, fish_id);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 867: range 000000001314B758-000000001314B9D7
bool __cdecl FishPoolComp::isValidFishStock(FishPoolComp *const this, const data::FishStockExcelConfig *stock_config)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool isGameNightHour; // r14
  data::FishStockType type; // eax
  Player *v7; // rax
  PlayerBasicComp *v8; // rax
  Player *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  bool result; // al
  char v12[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 scene_ptr:868 64 16 14 player_ptr:873";
  *(_QWORD *)(v2 + 16) = FishPoolComp::isValidFishStock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    isGameNightHour = 0;
    goto LABEL_22;
  }
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Scene::getOwnPlayer((const Scene *const)(v2 + 64));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&stock_config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stock_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stock_config->type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    type = stock_config->type;
    if ( type == FISH_STOCK_TYPE_NIGHT )
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BasicComp = Player::getBasicComp(v9);
      isGameNightHour = PlayerBasicComp::isGameNightHour(BasicComp);
      goto LABEL_21;
    }
    if ( type <= FISH_STOCK_TYPE_NIGHT )
    {
      if ( type == FISH_STOCK_TYPE_ANY )
      {
        isGameNightHour = 1;
        goto LABEL_21;
      }
      if ( type == FISH_STOCK_TYPE_DAY )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v8 = Player::getBasicComp(v7);
        isGameNightHour = PlayerBasicComp::isGameDayHour(v8);
        goto LABEL_21;
      }
    }
    isGameNightHour = 0;
    goto LABEL_21;
  }
  isGameNightHour = 0;
LABEL_21:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
LABEL_22:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = isGameNightHour;
  if ( v12 == (char *)v2 )
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

// Line 901: range 000000001314B9D8-000000001314BCC1
int32_t __cdecl FishPoolComp::foreachAngler(FishPoolComp *const this, std::function<ForeachPolicy(Angler&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,std::shared_ptr<Angler>>::size_type v5; // rax
  Angler *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<Angler>>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::map<unsigned int,std::shared_ptr<Angler>>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,std::shared_ptr<Angler>> *__for_range; // [rsp+20h] [rbp-C0h]
  std::vector<std::shared_ptr<Angler>> *__for_range_0; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Angler> *angler_ptr_0; // [rsp+30h] [rbp-B0h]
  std::pair<unsigned int const,std::shared_ptr<Angler> > *__in; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Angler> > >::type *_; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Angler> > >::type *angler_ptr; // [rsp+48h] [rbp-98h]
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 14 angler_vec:902";
  *(_QWORD *)(v2 + 16) = FishPoolComp::foreachAngler;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<std::shared_ptr<Angler>>::vector((std::vector<std::shared_ptr<Angler>> *const)(v2 + 32));
  v5 = std::map<unsigned int,std::shared_ptr<Angler>>::size(&this->angler_map_);
  std::vector<std::shared_ptr<Angler>>::reserve((std::vector<std::shared_ptr<Angler>> *const)(v2 + 32), v5);
  __for_range = &this->angler_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Angler>>::begin(&this->angler_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Angler>>::end(&this->angler_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Angler>>(__in);
    angler_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Angler>>(__in);
    std::vector<std::shared_ptr<Angler>>::push_back((std::vector<std::shared_ptr<Angler>> *const)(v2 + 32), angler_ptr);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler>>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::shared_ptr<Angler>> *)(v2 + 32);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Base_ptr)std::vector<std::shared_ptr<Angler>>::begin((std::vector<std::shared_ptr<Angler>> *const)(v2 + 32))._M_current;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Base_ptr)std::vector<std::shared_ptr<Angler>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Angler> *,std::vector<std::shared_ptr<Angler>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<Angler>*,std::vector<std::shared_ptr<Angler>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<Angler>*,std::vector<std::shared_ptr<Angler>> > *)&__for_end) )
  {
    angler_ptr_0 = __gnu_cxx::__normal_iterator<std::shared_ptr<Angler> *,std::vector<std::shared_ptr<Angler>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Angler>*,std::vector<std::shared_ptr<Angler>> > *const)&__for_begin);
    if ( !std::operator==<Angler>(0LL, angler_ptr_0) )
    {
      v6 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)angler_ptr_0);
      if ( std::function<ForeachPolicy ()(Angler &)>::operator()(p_func, v6) )
      {
        v7 = -1;
        goto LABEL_14;
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Angler> *,std::vector<std::shared_ptr<Angler>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Angler>*,std::vector<std::shared_ptr<Angler>> > *const)&__for_begin);
  }
  v7 = 0;
LABEL_14:
  std::vector<std::shared_ptr<Angler>>::~vector((std::vector<std::shared_ptr<Angler>> *const)(v2 + 32));
  result = v7;
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

// Line 924: range 000000001314BEA2-000000001314BF09
void __cdecl FishPoolComp::getOccupiedFish(FishPoolComp *const this, std::set<unsigned int> *fish_set)
{
  std::function<ForeachPolicy(Angler&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Angler &)>::function<FishPoolComp::getOccupiedFish(std::set<unsigned int> &)::{lambda(Angler &)#1},void,void>(
    &p_func,
    (FishPoolComp::getOccupiedFish::<lambda(Angler&)>)fish_set);
  FishPoolComp::foreachAngler(this, &p_func);
  std::function<ForeachPolicy ()(Angler &)>::~function(&p_func);
};

// Line 925: range 000000001314BCC2-000000001314BEA0
ForeachPolicy __cdecl FishPoolComp::getOccupiedFish(std::set<unsigned int> &)::{lambda(Angler &)#1}::operator()(
        const FishPoolComp::getOccupiedFish::<lambda(Angler&)> *const __closure,
        Angler *angler)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::set<unsigned int> *fish_set; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ForeachPolicy result; // eax
  std::set<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-74h] BYREF
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 fish_ptr:927";
  *(_QWORD *)(v2 + 16) = FishPoolComp::getOccupiedFish(std::set<unsigned int> &)::{lambda(Angler &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v2 + 32));
  if ( !std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( angler->state == FISH_STATE_BITE || angler->state == FISH_STATE_QTE )
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      fish_set = __closure->__fish_set;
      v6 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __x = Entity::getEntityId((const Entity *const)v6);
      std::set<unsigned int>::insert(fish_set, &__x);
    }
  }
  std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
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

// Line 942: range 000000001314C144-000000001314C2C7
__int64 __fastcall FishPoolComp::getFishState(FishPoolComp *const this, uint32_t fish_entity_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::function<ForeachPolicy(Angler&)> p_func; // [rsp+20h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 fish_state:943 64 4 18 fish_entity_id:941";
  *(_QWORD *)(v2 + 16) = FishPoolComp::getFishState;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = fish_entity_id;
  *(_DWORD *)(v2 + 48) = 0;
  std::function<ForeachPolicy ()(Angler &)>::function<FishPoolComp::getFishState(unsigned int)::{lambda(Angler &)#1},void,void>(
    &p_func,
    (FishPoolComp::getFishState::<lambda(Angler&)>)__PAIR128__(v2 + 64, v2 + 48));
  FishPoolComp::foreachAngler(this, &p_func);
  std::function<ForeachPolicy ()(Angler &)>::~function(&p_func);
  result = *(unsigned int *)(v2 + 48);
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

// Line 944: range 000000001314BF0A-000000001314C143
ForeachPolicy __cdecl FishPoolComp::getFishState(unsigned int)::{lambda(Angler &)#1}::operator()(
        const FishPoolComp::getFishState::<lambda(Angler&)> *const __closure,
        Angler *angler)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t *fish_entity_id; // rdx
  int v6; // r14d
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  char v8; // al
  ForeachPolicy v9; // r14d
  FishState *fish_state; // rdx
  FishState state; // esi
  ForeachPolicy result; // eax
  char v13[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 fish_ptr:946";
  *(_QWORD *)(v2 + 16) = FishPoolComp::getFishState(unsigned int)::{lambda(Angler &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v2 + 32));
  if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 32)) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__fish_entity_id >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  fish_entity_id = __closure->__fish_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)fish_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)fish_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fish_entity_id >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v6 = *fish_entity_id;
  v7 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( v6 == Entity::getEntityId((const Entity *const)v7) )
    v8 = 0;
  else
LABEL_10:
    v8 = 1;
  if ( v8 )
  {
    v9 = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    fish_state = __closure->__fish_state;
    if ( *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    state = angler->state;
    if ( *(_BYTE *)(((unsigned __int64)fish_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)fish_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fish_state >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(fish_state);
    }
    *fish_state = state;
    v9 = FOREACH_BREAK;
  }
  std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 32));
  result = v9;
  if ( v13 == (char *)v2 )
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

// Line 958: range 000000001314C2C8-000000001314CF53
int32_t __cdecl FishPoolComp::playerEnterFishing(FishPoolComp *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  FishExcelConfigMgr *p_fish_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const Vector3 *Position; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  PlayerAvatarComp *AvatarComp; // rax
  Angler *v21; // rdx
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::shared_ptr<Angler> *v24; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  common::milog::MiLogStream *i; // r14
  PlayerAbilityGroupComp *v27; // rax
  PlayerAbilityGroupComp *v29; // r14
  common::milog::MiLogStream *j; // r14
  PlayerAbilityGroupComp *v31; // rax
  int32_t result; // eax
  Vector3 *pos2a; // [rsp+8h] [rbp-178h]
  PlayerFishingComp *pos2; // [rsp+8h] [rbp-178h]
  PlayerAbilityGroupComp *pos2b; // [rsp+8h] [rbp-178h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-170h]
  std::allocator<std::string > __a; // [rsp+33h] [rbp-14Dh] BYREF
  unsigned int val; // [rsp+34h] [rbp-14Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self __y; // [rsp+38h] [rbp-148h] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+40h] [rbp-140h]
  const data::FishPoolExcelConfig *pool_config_ptr; // [rsp+48h] [rbp-138h]
  std::shared_ptr<Config> v42; // [rsp+50h] [rbp-130h] BYREF
  std::shared_ptr<Player> v43; // [rsp+60h] [rbp-120h] BYREF
  std::vector<std::string> group_vec; // [rsp+70h] [rbp-110h] BYREF
  common::milog::MiLogStream v45; // [rsp+90h] [rbp-F0h] BYREF
  char v46[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:988 64 8 8 iter:989 96 16 14 avatar_ptr:972 128 16 14 angler_ptr:995";
  *(_QWORD *)(v2 + 16) = FishPoolComp::playerEnterFishing;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
  if ( gadget_script_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v43);
    p_fish_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.fish_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    pool_config_ptr = data::FishExcelConfigMgrBase::findFishPoolExcelConfig(
                        p_fish_config_mgr,
                        gadget_script_config_ptr->fish_pool_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
    if ( pool_config_ptr )
    {
      Player::getAvatarComp(player);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 96));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/fish_pool_comp.cpp",
          "playerEnterFishing",
          975);
        v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v45, (const char (*)[5])"uid:");
        val = Player::getUid(player);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v16,
          (const char (*)[23])" cur_avatar is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v45);
        v9 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        pos2a = (Vector3 *)Entity::getPosition((const Entity *const)this->gadget_);
        v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Position = Entity::getPosition((const Entity *const)v17);
        LODWORD(pos2a) = getPlaneDistance(Position, pos2a);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v42);
        v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
        LOBYTE(pos2a) = *(float *)&pos2a > ConstValueExcelConfigMgr::getFishingMaxDistance(&v19->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v42);
        if ( (_BYTE)pos2a )
        {
          v9 = 11004;
        }
        else
        {
          AvatarComp = Player::getAvatarComp(player);
          if ( PlayerAvatarComp::isInCombat(AvatarComp) )
          {
            v9 = 11005;
          }
          else
          {
            *(_DWORD *)(v2 + 48) = Player::getUid(player);
            *(std::map<unsigned int,std::shared_ptr<Angler>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<Angler>>::find(
                                                                                       &this->angler_map_,
                                                                                       (const std::map<unsigned int,std::shared_ptr<Angler>>::key_type *)(v2 + 48));
            __y._M_node = std::map<unsigned int,std::shared_ptr<Angler>>::end(&this->angler_map_)._M_node;
            if ( std::operator!=(
                   (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self *)(v2 + 64),
                   &__y) )
            {
              v9 = 0;
            }
            else
            {
              common::tools::perf::make_shared<Angler>();
              if ( std::operator==<Angler>(0LL, (const std::shared_ptr<Angler> *)(v2 + 128)) )
              {
                common::milog::MiLogStream::create(
                  &v45,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/gadget/fish_pool_comp.cpp",
                  "playerEnterFishing",
                  998);
                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v45,
                  (const char (*)[27])"maker shared angler failed");
                common::milog::MiLogStream::~MiLogStream(&v45);
                v9 = -1;
              }
              else
              {
                v21 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                if ( FishPoolComp::changeDefaultAvatar(this, player, v21) )
                {
                  common::milog::MiLogStream::create(
                    &v45,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/gadget/fish_pool_comp.cpp",
                    "playerEnterFishing",
                    1005);
                  v22 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          &v45,
                          (const char (*)[35])"change default avatar failed, uid:");
                  val = Player::getUid(player);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
                  common::milog::MiLogStream::~MiLogStream(&v45);
                  v9 = -1;
                }
                else
                {
                  toThisPtr<Player>((Player *)&v43);
                  v23 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  std::weak_ptr<Player>::operator=<Player>(&v23->player_wtr, &v43);
                  std::shared_ptr<Player>::~shared_ptr(&v43);
                  v24 = std::map<unsigned int,std::shared_ptr<Angler>>::operator[](
                          &this->angler_map_,
                          (const std::map<unsigned int,std::shared_ptr<Angler>>::key_type *)(v2 + 48));
                  std::shared_ptr<Angler>::operator=(v24, (const std::shared_ptr<Angler> *)(v2 + 128));
                  pos2 = Player::getFishingComp(player);
                  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  toThisPtr<Gadget>((Gadget *)&v43);
                  PlayerFishingComp::onPlayerEnterFishing(pos2, (GadgetPtr *)&v43);
                  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v43);
                  AbilityGroupComp = Player::getAbilityGroupComp(player);
                  if ( !PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(
                          AbilityGroupComp,
                          &pool_config_ptr->ability_group) )
                  {
                    pos2b = Player::getAbilityGroupComp(player);
                    std::string::basic_string(&v45, &pool_config_ptr->ability_group);
                    std::allocator<std::string>::allocator(&__a);
                    std::vector<std::string>::vector(
                      &group_vec,
                      (std::initializer_list<std::string >)__PAIR128__(1LL, &v45),
                      &__a);
                    PlayerAbilityGroupComp::addNoneFilterAbilityGroup(pos2b, &group_vec, 0);
                    std::vector<std::string>::~vector(&group_vec);
                    std::allocator<std::string>::~allocator(&__a);
                    for ( i = (common::milog::MiLogStream *)v46; i != &v45; std::string::~string(i) )
                      --i;
                  }
                  if ( (unsigned __int8)std::string::empty(&pool_config_ptr->team_ability_group) != 1 )
                  {
                    v27 = Player::getAbilityGroupComp(player);
                    if ( !PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(
                            v27,
                            &pool_config_ptr->team_ability_group) )
                    {
                      v29 = Player::getAbilityGroupComp(player);
                      std::string::basic_string(&v45, &pool_config_ptr->team_ability_group);
                      __l._M_array = (std::initializer_list<std::string >::iterator)&v45;
                      __l._M_len = 1LL;
                      std::allocator<std::string>::allocator(&__a);
                      std::vector<std::string>::vector(&group_vec, __l, &__a);
                      PlayerAbilityGroupComp::addTeamAbilityGroup(v29, &group_vec, 0);
                      std::vector<std::string>::~vector(&group_vec);
                      std::allocator<std::string>::~allocator(&__a);
                      for ( j = (common::milog::MiLogStream *)v46; j != &v45; std::string::~string(j) )
                        --j;
                    }
                  }
                  v31 = Player::getAbilityGroupComp(player);
                  PlayerAbilityGroupComp::tryRefreshAbilityGroup(v31);
                  v9 = 0;
                }
              }
              std::shared_ptr<Angler>::~shared_ptr((std::shared_ptr<Angler> *const)(v2 + 128));
            }
          }
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/fish_pool_comp.cpp",
        "playerEnterFishing",
        969);
      v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v45, (const char (*)[5])"uid:");
      val = Player::getUid(player);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" pool_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              &gadget_script_config_ptr->fish_pool_id);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])" config not found");
      common::milog::MiLogStream::~MiLogStream(&v45);
      v9 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/fish_pool_comp.cpp",
      "playerEnterFishing",
      963);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v45, (const char (*)[5])"uid:");
    *(_DWORD *)(v2 + 48) = Player::getUid(player);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])" gadget entity_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Entity::getEntityId((const Entity *const)this->gadget_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v8, (const char (*)[25])" script config not found");
    common::milog::MiLogStream::~MiLogStream(&v45);
    v9 = -1;
  }
  result = v9;
  if ( v46 == (char *)v2 )
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

// Line 1028: range 000000001314CF54-000000001314D8FB
int32_t __cdecl FishPoolComp::changeDefaultAvatar(FishPoolComp *const this, Player *player, Angler *angler)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  uint32_t Uid; // eax
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  __int64 Guid; // rax
  unsigned __int64 *M_current; // r14
  std::vector<long unsigned int>::iterator v29; // rax
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  uint32_t v31; // eax
  PlayerAvatarComp *v33; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-1A4h] BYREF
  float revive_hp_percent; // [rsp+30h] [rbp-1A0h]
  uint32_t allow_num; // [rsp+34h] [rbp-19Ch]
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > __i; // [rsp+38h] [rbp-198h] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > __rhs; // [rsp+40h] [rbp-190h] BYREF
  uint64_t cur_avatar_guid; // [rsp+48h] [rbp-188h]
  std::shared_ptr<Scene> v42; // [rsp+50h] [rbp-180h] BYREF
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-170h] BYREF
  char v44[336]; // [rsp+80h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 24 default_avatar_guid:1048 64 8 9 iter:1072 96 16 14 scene_ptr:1029 128 16 19 scene_team"
                        "_ptr:1035 160 16 19 cur_avatar_ptr:1041 192 16 23 default_avatar_ptr:1049 224 24 17 cur_team_vec:1047";
  *(_QWORD *)(v3 + 16) = FishPoolComp::changeDefaultAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  Player::getSceneComp(player);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/fish_pool_comp.cpp",
      "changeDefaultAvatar",
      1032);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v43, (const char (*)[28])off_24F44220);
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v7 = -1;
  }
  else
  {
    v8 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    v9 = *(_QWORD *)v8 + 280LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v9)(v3 + 128, v8);
    if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/fish_pool_comp.cpp",
        "changeDefaultAvatar",
        1038);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v43,
              (const char (*)[27])"findSceneTeam failed, uid:");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v43);
      v7 = -1;
    }
    else
    {
      Player::getCurAvatar((Player *const)(v3 + 160));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/fish_pool_comp.cpp",
          "changeDefaultAvatar",
          1044);
        v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v43, (const char (*)[32])off_24F442A0);
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        common::milog::MiLogStream::~MiLogStream(&v43);
        v7 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        Uid = Player::getUid(player);
        SceneTeam::getAvatarGuidVec((std::vector<long unsigned int> *)(v3 + 224), v12, Uid);
        AvatarComp = Player::getAvatarComp(player);
        *(_QWORD *)(v3 + 32) = PlayerAvatarComp::getChooseAvatarGuid(AvatarComp);
        v15 = Player::getAvatarComp(player);
        PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 192), (uint64_t)v15);
        if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/fish_pool_comp.cpp",
            "changeDefaultAvatar",
            1052);
          v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v43, (const char (*)[5])"uid:");
          val = Player::getUid(player);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
          v18 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v17,
                  (const char (*)[22])" default avatar guid:");
          v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v18,
                  (const unsigned __int64 *)(v3 + 32));
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v19, (const char (*)[18])" avatar not found");
          common::milog::MiLogStream::~MiLogStream(&v43);
          v7 = -1;
        }
        else
        {
          v20 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          if ( Creature::getLifeState(v20) == LIFE_DEAD )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v42);
            v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
            revive_hp_percent = (float)(int)ConstValueExcelConfigMgr::getHurtReviveHpPercent(&v21->design_config.txt_config_mgr.const_value_config_mgr);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v42);
            v22 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            Creature::setCurHpPercent(v22, revive_hp_percent, CHANGE_HP_ADD_REVIVE, 1);
            v23 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            Avatar::clearSpeed(v23);
            v24 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            Avatar::setLifeAlive(v24, 0x66u, 0LL, 1);
          }
          v25 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          cur_avatar_guid = Avatar::getGuid(v25);
          if ( cur_avatar_guid == *(_QWORD *)(v3 + 32) )
          {
            v7 = 0;
          }
          else
          {
            v26 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            Guid = Avatar::getGuid(v26);
            if ( *(_BYTE *)(((unsigned __int64)&angler->cur_avatar_guid >> 3) + 0x7FFF8000) )
              Guid = __asan_report_store8(&angler->cur_avatar_guid);
            angler->cur_avatar_guid = Guid;
            std::vector<unsigned long>::operator=(
              &angler->ori_avatar_guid_vec,
              (const std::vector<long unsigned int> *)(v3 + 224));
            M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v3 + 224))._M_current;
            v29._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v3 + 224))._M_current;
            *(__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>,unsigned long>(v29, (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current, (const unsigned __int64 *)(v3 + 32));
            __rhs._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v3 + 224))._M_current;
            if ( __gnu_cxx::operator==<unsigned long *,std::vector<unsigned long>>(
                   (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v3 + 64),
                   &__rhs) )
            {
              std::vector<unsigned long>::push_back(
                (std::vector<long unsigned int> *const)(v3 + 224),
                (const std::vector<long unsigned int>::value_type *)(v3 + 32));
              v30 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v31 = Player::getUid(player);
              allow_num = SceneTeam::getAllowAvatarNum(v30, v31);
              if ( std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 224)) > allow_num
                && std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 224)) > 1 )
              {
                __i._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v3 + 224))._M_current;
                __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::__normal_iterator<unsigned long *>(
                  (__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__rhs,
                  &__i);
                std::vector<unsigned long>::erase(
                  (std::vector<long unsigned int> *const)(v3 + 224),
                  (std::vector<long unsigned int>::const_iterator)__rhs._M_current);
              }
            }
            v33 = Player::getAvatarComp(player);
            std::shared_ptr<Scene>::shared_ptr(&v42, (const std::shared_ptr<Scene> *)(v3 + 96));
            v7 = PlayerAvatarComp::setSceneTeamAndAddToScene(
                   v33,
                   (const std::vector<long unsigned int> *)(v3 + 224),
                   *(_QWORD *)(v3 + 32),
                   &v42,
                   CHANGE_SCENE_TEAM_REASON_FISHING);
            std::shared_ptr<Scene>::~shared_ptr(&v42);
          }
        }
        std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 192));
        std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 224));
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
    }
    std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v3 + 128));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
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

// Line 1090: range 000000001314D8FC-000000001314DD5C
void __cdecl FishPoolComp::recoverAvatar(FishPoolComp *const this, Angler *angler)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Avatar *v10; // rax
  Avatar *v11; // rax
  Player *v12; // rax
  PlayerAvatarComp *v13; // r14
  float revive_hp_percent; // [rsp+1Ch] [rbp-A4h]
  std::shared_ptr<Scene> v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 player_ptr:1095 64 16 19 cur_avatar_ptr:1100";
  *(_QWORD *)(v2 + 16) = FishPoolComp::recoverAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&angler->cur_avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( angler->cur_avatar_guid )
  {
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 32));
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
    {
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      AvatarComp = Player::getAvatarComp(v5);
      if ( *(_BYTE *)(((unsigned __int64)&angler->cur_avatar_guid >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v2 + 64), (uint64_t)AvatarComp);
      if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 64)) )
      {
        v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( Creature::getLifeState(v7) == LIFE_DEAD )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v15);
          v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
          revive_hp_percent = (float)(int)ConstValueExcelConfigMgr::getHurtReviveHpPercent(&v8->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v15);
          v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          Creature::setCurHpPercent(v9, revive_hp_percent, CHANGE_HP_ADD_REVIVE, 1);
          v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          Avatar::clearSpeed(v10);
          v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          Avatar::setLifeAlive(v11, 0x66u, 0LL, 1);
        }
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v13 = Player::getAvatarComp(v12);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Entity::getScene((const Entity *const)&v15);
        if ( *(_BYTE *)(((unsigned __int64)&angler->cur_avatar_guid >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        PlayerAvatarComp::setSceneTeamAndAddToScene(
          v13,
          &angler->ori_avatar_guid_vec,
          angler->cur_avatar_guid,
          &v15,
          CHANGE_SCENE_TEAM_REASON_FISHING);
        std::shared_ptr<Scene>::~shared_ptr(&v15);
        if ( *(_BYTE *)(((unsigned __int64)&angler->cur_avatar_guid >> 3) + 0x7FFF8000) )
          __asan_report_store8(&angler->cur_avatar_guid);
        angler->cur_avatar_guid = 0LL;
        std::vector<unsigned long>::clear(&angler->ori_avatar_guid_vec);
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  }
  if ( v16 == (char *)v2 )
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

// Line 1118: range 000000001314DD5E-000000001314DEE5
void __cdecl FishPoolComp::playerExitFishing(FishPoolComp *const this, Player *player, bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t Uid; // edx
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 8 rsp:1125";
  *(_QWORD *)(v3 + 16) = FishPoolComp::playerExitFishing;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  Uid = Player::getUid(player);
  FishPoolComp::doExitFishing(this, Uid);
  if ( is_notify )
  {
    proto::ExitFishingRsp::ExitFishingRsp((proto::ExitFishingRsp *const)(v3 + 32));
    proto::ExitFishingRsp::set_retcode((proto::ExitFishingRsp *const)(v3 + 32), 0);
    Player::sendProto(player, (const google::protobuf::Message *)(v3 + 32));
    proto::ExitFishingRsp::~ExitFishingRsp((proto::ExitFishingRsp *const)(v3 + 32));
  }
  if ( v8 == (char *)v3 )
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

// Line 1131: range 000000001314DEE6-000000001314EC95
void __fastcall FishPoolComp::doExitFishing(FishPoolComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::pointer v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  Angler *v8; // rax
  Player *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  FishExcelConfigMgr *p_fish_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  Player *v19; // rax
  common::milog::MiLogStream *i; // r14
  Player *v21; // rax
  PlayerAbilityGroupComp *v22; // r14
  common::milog::MiLogStream *j; // r14
  Player *v24; // rax
  PlayerAbilityGroupComp *v25; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  Player *v28; // rax
  Angler *v29; // rax
  Player *v30; // rax
  PlayerEventComp *EventComp; // r14
  uint32_t v33; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rdx
  uint32_t *p_uid; // rax
  Group *v36; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  common::milog::MiLogStream *v39; // rax
  PlayerFishingComp *FishingComp; // [rsp+8h] [rbp-1A8h]
  PlayerAbilityGroupComp *AbilityGroupComp; // [rsp+8h] [rbp-1A8h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-1A0h]
  std::initializer_list<unsigned int> v43; // [rsp+20h] [rbp-190h]
  std::allocator<std::string > __a; // [rsp+43h] [rbp-16Dh] BYREF
  unsigned int val; // [rsp+44h] [rbp-16Ch] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+48h] [rbp-168h]
  const data::FishPoolExcelConfig *pool_config_ptr; // [rsp+50h] [rbp-160h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self __y; // [rsp+58h] [rbp-158h] BYREF
  std::vector<std::string> group_vec; // [rsp+60h] [rbp-150h] BYREF
  common::milog::MiLogStream v50; // [rsp+80h] [rbp-130h] BYREF
  char v51[272]; // [rsp+A0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 8 uid:1130 64 8 9 iter:1132 96 16 15 angler_ptr:1137 128 16 15 player_ptr:1147 160 16 12 "
                        "evt_ptr:1181 192 16 14 group_ptr:1182";
  *(_QWORD *)(v2 + 16) = FishPoolComp::doExitFishing;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::map<unsigned int,std::shared_ptr<Angler>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<Angler>>::find(
                                                                             &this->angler_map_,
                                                                             (const std::map<unsigned int,std::shared_ptr<Angler>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Angler>>::end(&this->angler_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self *)(v2 + 64),
          &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > > *const)(v2 + 64));
    std::shared_ptr<Angler>::shared_ptr((std::shared_ptr<Angler> *const)(v2 + 96), &v5->second);
    if ( std::operator==<Angler>(0LL, (const std::shared_ptr<Angler> *)(v2 + 96)) )
    {
      std::map<unsigned int,std::shared_ptr<Angler>>::erase[abi:cxx11](
        &this->angler_map_,
        *(std::map<unsigned int,std::shared_ptr<Angler>>::iterator *)(v2 + 64));
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/fish_pool_comp.cpp",
        "doExitFishing",
        1141);
      v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v50, (const char (*)[5])"uid:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])" angler ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v50);
    }
    else
    {
      std::map<unsigned int,std::shared_ptr<Angler>>::erase[abi:cxx11](
        &this->angler_map_,
        *(std::map<unsigned int,std::shared_ptr<Angler>>::iterator *)(v2 + 64));
      v8 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      FishPoolComp::failFishing(this, v8, 0, FISH_BATTLE_RESULT_EXIT);
      std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 128));
      if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        FishingComp = Player::getFishingComp(v9);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        toThisPtr<Gadget>((Gadget *)(v2 + 192));
        PlayerFishingComp::onPlayerExitFishing(FishingComp, (GadgetPtr *)(v2 + 192));
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 192));
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
        if ( gadget_script_config_ptr )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v2 + 192));
          p_fish_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192))->design_config.txt_config_mgr.fish_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          pool_config_ptr = data::FishExcelConfigMgrBase::findFishPoolExcelConfig(
                              p_fish_config_mgr,
                              gadget_script_config_ptr->fish_pool_id);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
          if ( pool_config_ptr )
          {
            v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            AbilityGroupComp = Player::getAbilityGroupComp(v19);
            std::string::basic_string(&v50, &pool_config_ptr->ability_group);
            std::allocator<std::string>::allocator(&__a);
            std::vector<std::string>::vector(
              &group_vec,
              (std::initializer_list<std::string >)__PAIR128__(1LL, &v50),
              &__a);
            PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, &group_vec);
            std::vector<std::string>::~vector(&group_vec);
            std::allocator<std::string>::~allocator(&__a);
            for ( i = (common::milog::MiLogStream *)v51; i != &v50; std::string::~string(i) )
              --i;
            if ( (unsigned __int8)std::string::empty(&pool_config_ptr->team_ability_group) != 1 )
            {
              v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              v22 = Player::getAbilityGroupComp(v21);
              std::string::basic_string(&v50, &pool_config_ptr->team_ability_group);
              __l._M_array = (std::initializer_list<std::string >::iterator)&v50;
              __l._M_len = 1LL;
              std::allocator<std::string>::allocator(&__a);
              std::vector<std::string>::vector(&group_vec, __l, &__a);
              PlayerAbilityGroupComp::delTeamAbilityGroup(v22, &group_vec);
              std::vector<std::string>::~vector(&group_vec);
              std::allocator<std::string>::~allocator(&__a);
              for ( j = (common::milog::MiLogStream *)v51; j != &v50; std::string::~string(j) )
                --j;
            }
            v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v25 = Player::getAbilityGroupComp(v24);
            PlayerAbilityGroupComp::tryRefreshAbilityGroup(v25);
            v26 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v26->rod_entity_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v26->rod_entity_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            LODWORD(__y._M_node) = v26->rod_entity_id;
            v27 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v27->bladder_entity_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v27 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->bladder_entity_id >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            HIDWORD(__y._M_node) = v27->bladder_entity_id;
            v43._M_array = (std::initializer_list<unsigned int>::iterator)&__y;
            v43._M_len = 2LL;
            std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
            std::vector<unsigned int>::vector(
              (std::vector<unsigned int> *const)&group_vec,
              v43,
              (const std::vector<unsigned int>::allocator_type *)&__a);
            v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            FishPoolComp::delRodLocalGadget(this, v28, (const std::vector<unsigned int> *)&group_vec);
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&group_vec);
            std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
            v29 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            FishPoolComp::recoverAvatar(this, v29);
            v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            EventComp = Player::getEventComp(v30);
            common::tools::perf::make_shared<StopFishingEvent,unsigned int const&>(
              (const unsigned int *)(v2 + 160),
              &gadget_script_config_ptr->fish_pool_id);
            std::shared_ptr<BaseEvent>::shared_ptr<StopFishingEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v2 + 192),
              (std::shared_ptr<StopFishingEvent> *)(v2 + 160));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 192));
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 192));
            std::shared_ptr<StopFishingEvent>::~shared_ptr((std::shared_ptr<StopFishingEvent> *const)(v2 + 160));
            EventUtil::createEvent((data::EventType)(v2 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Entity::getGroup((const Entity *const)(v2 + 192));
            if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 160))
              && std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 192)) )
            {
              v33 = *(_DWORD *)(v2 + 48);
              v34 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              p_uid = &v34->uid;
              if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(p_uid);
              }
              v34->uid = v33;
              v36 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              Group::handleEvent(v36, (EventPtr *)(v2 + 160));
            }
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/gadget/fish_pool_comp.cpp",
              "doExitFishing",
              1188);
            v37 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    &v50,
                    (const char (*)[15])"[FISHING] uid:");
            v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            val = Player::getUid(v38);
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
            common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v39, (const char (*)[14])" exit fishing");
            common::milog::MiLogStream::~MiLogStream(&v50);
            std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 192));
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 160));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/fish_pool_comp.cpp",
              "doExitFishing",
              1163);
            v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v50, (const char (*)[5])"uid:");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v2 + 48));
            v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" pool_id:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    &gadget_script_config_ptr->fish_pool_id);
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v18,
              (const char (*)[18])" config not found");
            common::milog::MiLogStream::~MiLogStream(&v50);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/fish_pool_comp.cpp",
            "doExitFishing",
            1157);
          v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v50, (const char (*)[5])"uid:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v2 + 48));
          v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v11,
                  (const char (*)[19])" gadget entity_id:");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Entity::getEntityId((const Entity *const)this->gadget_);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v13,
            (const char (*)[25])" script config not found");
          common::milog::MiLogStream::~MiLogStream(&v50);
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    }
    std::shared_ptr<Angler>::~shared_ptr((std::shared_ptr<Angler> *const)(v2 + 96));
  }
  if ( v51 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 1192: range 000000001314EC96-000000001314F00E
void __cdecl FishPoolComp::delRodLocalGadget(
        FishPoolComp *const this,
        Player *player,
        const std::vector<unsigned int> *entity_id_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rdx
  uint32_t v7; // eax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlayerSceneComp *SceneComp; // r14
  Entity *v10; // rax
  PlayerSceneComp *v11; // r14
  Entity *v12; // rax
  Scene *v13; // rax
  uint32_t entity_id; // [rsp+24h] [rbp-CCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  char v19[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 12 context:1198 64 16 14 scene_ptr:1193 96 16 12 rod_ptr:1206";
  *(_QWORD *)(v3 + 16) = FishPoolComp::delRodLocalGadget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  Player::getSceneComp(player);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    VisionContext::VisionContext((VisionContext *const)(v3 + 32), VISION_MISS);
    *(_DWORD *)(v3 + 40) = Player::getUid(player);
    __for_range = entity_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(entity_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(entity_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      entity_id = *v6;
      if ( *v6 )
      {
        v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Scene::findEntity<Gadget>((const Scene *const)(v3 + 96), v7);
        if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 96)) )
        {
          v8 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( Creature::getIsClientGadget(v8) )
          {
            SceneComp = Player::getSceneComp(player);
            v10 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            PlayerSceneComp::removeDisconnectDestroyEntity(SceneComp, v10);
            v11 = Player::getSceneComp(player);
            v12 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            PlayerSceneComp::removeLeaveSceneDestroyEntity(v11, v12);
            v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            Scene::delEntity(v13, entity_id, (const VisionContext *)(v3 + 32));
          }
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  if ( v19 == (char *)v3 )
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

// Line 1223: range 000000001314F010-000000001314F808
__int64 __fastcall FishPoolComp::playerStartFishing(FishPoolComp *const this, uint32_t uid, uint32_t rod_entity_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t Now; // r14d
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // rax
  PlayerEventComp *EventComp; // r14
  uint32_t v19; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  uint32_t *p_uid; // rax
  uint32_t config_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  int32_t *p_param1; // rax
  int32_t v25; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  Group *v27; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self __y; // [rsp+10h] [rbp-140h] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v32; // [rsp+20h] [rbp-130h] BYREF
  char v33[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 17 fish_pool_id:1242 48 4 8 uid:1222 64 8 9 iter:1224 96 16 15 angler_ptr:1229 128 16 15 "
                        "player_ptr:1249 160 16 12 evt_ptr:1254 192 16 14 group_ptr:1255";
  *(_QWORD *)(v3 + 16) = FishPoolComp::playerStartFishing;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 48) = uid;
  *(std::map<unsigned int,std::shared_ptr<Angler>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Angler>>::find(
                                                                             &this->angler_map_,
                                                                             (const std::map<unsigned int,std::shared_ptr<Angler>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Angler>>::end(&this->angler_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = 11001;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > > *const)(v3 + 64));
    std::shared_ptr<Angler>::shared_ptr((std::shared_ptr<Angler> *const)(v3 + 96), &v7->second);
    if ( std::operator==<Angler>(0LL, (const std::shared_ptr<Angler> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/fish_pool_comp.cpp",
        "playerStartFishing",
        1232);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v32, (const char (*)[5])"uid=");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" angler ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v6 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v10->fishing_start_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->fishing_start_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v10->fishing_start_time )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/fish_pool_comp.cpp",
          "playerStartFishing",
          1237);
        v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v32, (const char (*)[5])"uid:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" already start");
        common::milog::MiLogStream::~MiLogStream(&v32);
        v6 = 0;
      }
      else
      {
        Now = common::tools::TimeUtils::getNow();
        v14 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v14->fishing_start_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v14->fishing_start_time >> 3) + 0x7FFF8000) <= 3 )
        {
          v14 = (std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v14->fishing_start_time);
        }
        v14->fishing_start_time = Now;
        v15 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v15->rod_entity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v15->rod_entity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v15 = (std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v15->rod_entity_id);
        }
        v15->rod_entity_id = rod_entity_id;
        *(_DWORD *)(v3 + 32) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
        if ( gadget_script_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 32) = gadget_script_config_ptr->fish_pool_id;
        }
        std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 128));
        if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 128)) )
        {
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          EventComp = Player::getEventComp(v16);
          common::tools::perf::make_shared<StartFishingEvent,unsigned int &>(
            (unsigned int *)(v3 + 160),
            (unsigned int *)(v3 + 32));
          std::shared_ptr<BaseEvent>::shared_ptr<StartFishingEvent,void>(
            (std::shared_ptr<BaseEvent> *const)(v3 + 192),
            (std::shared_ptr<StartFishingEvent> *)(v3 + 160));
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 192));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 192));
          std::shared_ptr<StartFishingEvent>::~shared_ptr((std::shared_ptr<StartFishingEvent> *const)(v3 + 160));
        }
        EventUtil::createEvent((data::EventType)(v3 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Entity::getGroup((const Entity *const)(v3 + 192));
        if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v3 + 160))
          && std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 192)) )
        {
          v19 = *(_DWORD *)(v3 + 48);
          v20 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          p_uid = &v20->uid;
          if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_uid);
          }
          v20->uid = v19;
          if ( gadget_script_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)gadget_script_config_ptr >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)gadget_script_config_ptr >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            config_id = gadget_script_config_ptr->config_id;
            v23 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            p_param1 = &v23->param1;
            if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(p_param1);
            }
            v23->param1 = config_id;
          }
          v25 = *(_DWORD *)(v3 + 32);
          v26 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&v26->param2 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v26->param2 >> 3) + 0x7FFF8000) <= 3 )
          {
            v26 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v26->param2);
          }
          v26->param2 = v25;
          v27 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          Group::handleEvent(v27, (EventPtr *)(v3 + 160));
        }
        v6 = 0;
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 192));
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 160));
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
      }
    }
    std::shared_ptr<Angler>::~shared_ptr((std::shared_ptr<Angler> *const)(v3 + 96));
  }
  result = v6;
  if ( v33 == (char *)v3 )
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

// Line 1270: range 000000001314F80A-0000000013150438
__int64 __fastcall FishPoolComp::playerCastRod(
        FishPoolComp *const this,
        uint32_t uid,
        const proto::FishCastRodReq *req)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v19; // rax
  Player *v21; // rax
  PlayerItemComp *ItemComp; // rax
  const proto::Vector *v23; // rax
  const Vector3 *Position; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  bool v26; // r14
  Angler *v27; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t v29; // r14d
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  google::protobuf::uint32 v31; // r14d
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rdx
  uint32_t *p_fish_rod; // rax
  google::protobuf::uint32 v34; // r14d
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  __int64 Now; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  Angler *v38; // rax
  Player *v39; // rax
  PlayerFishingComp *FishingComp; // r14
  uint32_t v41; // eax
  Angler *v42; // rax
  __int64 result; // rax
  float PlaneDistance; // [rsp+4h] [rbp-21Ch]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+20h] [rbp-200h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self __y; // [rsp+28h] [rbp-1F8h] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+30h] [rbp-1F0h]
  const data::FishBaitExcelConfig *bait_config_ptr; // [rsp+38h] [rbp-1E8h]
  std::shared_ptr<Config> v50; // [rsp+40h] [rbp-1E0h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-1D0h] BYREF
  std::string v52; // [rsp+70h] [rbp-1B0h] BYREF
  std::string v53; // [rsp+90h] [rbp-190h] BYREF
  std::string v54; // [rsp+B0h] [rbp-170h] BYREF
  common::milog::MiLogStream v55; // [rsp+D0h] [rbp-150h] BYREF
  char v56[304]; // [rsp+F0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 17 fish_pool_id:1293 64 4 12 bait_id:1294 80 4 8 uid:1269 96 8 9 iter:1271 128 12 8 pos:1"
                        "321 160 16 15 angler_ptr:1276 192 16 15 player_ptr:1301 224 16 10 param:1314";
  *(_QWORD *)(v3 + 16) = FishPoolComp::playerCastRod;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219020288;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  *(_DWORD *)(v3 + 80) = uid;
  *(std::map<unsigned int,std::shared_ptr<Angler>>::iterator *)(v3 + 96) = std::map<unsigned int,std::shared_ptr<Angler>>::find(
                                                                             &this->angler_map_,
                                                                             (const std::map<unsigned int,std::shared_ptr<Angler>>::key_type *)(v3 + 80));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Angler>>::end(&this->angler_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self *)(v3 + 96),
         &__y) )
  {
    v6 = 11001;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > > *const)(v3 + 96));
    std::shared_ptr<Angler>::shared_ptr((std::shared_ptr<Angler> *const)(v3 + 160), &v7->second);
    if ( std::operator==<Angler>(0LL, (const std::shared_ptr<Angler> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/fish_pool_comp.cpp",
        "playerCastRod",
        1279);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v55, (const char (*)[5])"uid=");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" angler ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v55);
      v6 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&v10->state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v10->state == FISH_STATE_CAST )
      {
        v6 = 11002;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
        if ( gadget_script_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 48) = gadget_script_config_ptr->fish_pool_id;
          *(_DWORD *)(v3 + 64) = proto::FishCastRodReq::bait_id(req);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v50);
          v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
          bait_config_ptr = data::FishExcelConfigMgrBase::findFishBaitExcelConfig(
                              &v13->design_config.txt_config_mgr.fish_config_mgr,
                              *(_DWORD *)(v3 + 64));
          std::shared_ptr<Config>::~shared_ptr(&v50);
          if ( bait_config_ptr )
          {
            std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 192));
            if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v55,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/gadget/fish_pool_comp.cpp",
                "playerCastRod",
                1304);
              v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v55, (const char (*)[5])"uid:");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v3 + 80));
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v17,
                (const char (*)[23])" player ptr is nullptr");
              common::milog::MiLogStream::~MiLogStream(&v55);
              v6 = -1;
            }
            else if ( !std::vector<unsigned int>::empty(&bait_config_ptr->pool_id_list)
                   && (__y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Base_ptr)std::vector<unsigned int>::end(&bait_config_ptr->pool_id_list)._M_current,
                       M_current = std::vector<unsigned int>::end(&bait_config_ptr->pool_id_list)._M_current,
                       v19._M_current = std::vector<unsigned int>::begin(&bait_config_ptr->pool_id_list)._M_current,
                       __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                            v19,
                                            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                            (const unsigned int *)(v3 + 48))._M_current,
                       __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
                         &__lhs,
                         (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__y)) )
            {
              v6 = 11003;
            }
            else
            {
              *(_QWORD *)(v3 + 224) = 0LL;
              *(_QWORD *)(v3 + 232) = 0LL;
              *(_DWORD *)(v3 + 228) = 1;
              *(_DWORD *)(v3 + 224) = *(_DWORD *)(v3 + 64);
              v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              ItemComp = Player::getItemComp(v21);
              if ( PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 224)) )
              {
                v6 = 609;
              }
              else
              {
                v23 = proto::FishCastRodReq::pos(req);
                Vector3::Vector3((Vector3 *const)(v3 + 128), v23);
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Position = Entity::getPosition((const Entity *const)this->gadget_);
                PlaneDistance = getPlaneDistance((const Vector3 *)(v3 + 128), Position);
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v50);
                v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
                v26 = PlaneDistance > ConstValueExcelConfigMgr::getFishingMaxDistance(&v25->design_config.txt_config_mgr.const_value_config_mgr);
                std::shared_ptr<Config>::~shared_ptr(&v50);
                if ( v26 )
                {
                  v6 = 11004;
                }
                else
                {
                  v27 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  Angler::setState(v27, FISH_STATE_CAST, 0);
                  v28 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  if ( *(char *)(((unsigned __int64)&v28->fishing_pos >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)((((unsigned __int64)&v28->fishing_pos.z + 3) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)v28 + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&v28->fishing_pos.z + 3) >> 3)
                                                                     + 0x7FFF8000) )
                  {
                    v28 = (std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v28->fishing_pos, 12LL);
                  }
                  *(_QWORD *)&v28->fishing_pos.x = *(_QWORD *)(v3 + 128);
                  v28->fishing_pos.z = *(float *)(v3 + 136);
                  v29 = *(_DWORD *)(v3 + 64);
                  v30 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  if ( *(_BYTE *)(((unsigned __int64)&v30->fish_bait >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v30->fish_bait >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v30 = (std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v30->fish_bait);
                  }
                  v30->fish_bait = v29;
                  v31 = proto::FishCastRodReq::rod_id(req);
                  v32 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  p_fish_rod = &v32->fish_rod;
                  if ( *(_BYTE *)(((unsigned __int64)p_fish_rod >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_fish_rod & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_fish_rod >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_fish_rod);
                  }
                  v32->fish_rod = v31;
                  v34 = proto::FishCastRodReq::rod_entity_id(req);
                  v35 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  if ( *(_BYTE *)(((unsigned __int64)&v35->bladder_entity_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)v35 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->bladder_entity_id >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_store4(&v35->bladder_entity_id);
                  }
                  v35->bladder_entity_id = v34;
                  Now = common::tools::TimeUtils::getNow();
                  std::to_string(&v54, Now);
                  std::to_string(&__rhs, *(_DWORD *)(v3 + 80));
                  std::operator+<char>(&v52, "fishing_", &__rhs);
                  std::operator+<char>(&v53, &v52, "_");
                  std::operator+<char>((std::string *)&v55, &v53, &v54);
                  v37 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  std::string::operator=(&v37->transaction, &v55);
                  std::string::~string(&v55);
                  std::string::~string(&v53);
                  std::string::~string(&v52);
                  std::string::~string(&__rhs);
                  std::string::~string(&v54);
                  v38 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  FishPoolComp::anglerFilterFish(this, v38, 1);
                  v39 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                  FishingComp = Player::getFishingComp(v39);
                  v41 = proto::FishCastRodReq::rod_id(req);
                  PlayerFishingComp::setLastFishRod(FishingComp, v41);
                  v42 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  FishPoolComp::logFishingCastRod(this, v42);
                  v6 = 0;
                }
              }
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 192));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/fish_pool_comp.cpp",
              "playerCastRod",
              1298);
            v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    &v55,
                    (const char (*)[15])off_24F44800);
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v15,
              (const char (*)[18])" config not found");
            common::milog::MiLogStream::~MiLogStream(&v55);
            v6 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/fish_pool_comp.cpp",
            "playerCastRod",
            1290);
          v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v55, (const char (*)[11])"entity_id:");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v3 + 64) = Entity::getEntityId((const Entity *const)this->gadget_);
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v12,
            (const char (*)[25])" script config not found");
          common::milog::MiLogStream::~MiLogStream(&v55);
          v6 = -1;
        }
      }
    }
    std::shared_ptr<Angler>::~shared_ptr((std::shared_ptr<Angler> *const)(v3 + 160));
  }
  result = v6;
  if ( v56 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1345: range 000000001315043A-00000000131508AD
void __cdecl FishPoolComp::logFishingCastRod(FishPoolComp *const this, Angler *angler)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingCastRod,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingCastRod,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingCastRod,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  Player *v10; // r14
  std::string anglera; // [rsp+0h] [rbp-110h]
  Angler *anglerb; // [rsp+0h] [rbp-110h]
  uint32_t fish_pool_id; // [rsp+14h] [rbp-FCh]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  std::string v16; // [rsp+40h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+60h] [rbp-B0h] BYREF

  anglera._M_string_length = (std::string::size_type)this;
  anglera._M_dataplus._M_p = (std::string::pointer)angler;
  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 11 holder:1359 64 16 15 player_ptr:1346 96 16 12 log_ptr:1360";
  *(_QWORD *)(v2 + 16) = FishPoolComp::logFishingCastRod;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 64));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(&anglera._anon_0._M_allocated_capacity + 1) = (std::string::size_type)Gadget::getScriptConfig(this->gadget_);
    if ( *(&anglera._anon_0._M_allocated_capacity + 1) )
    {
      if ( *(_BYTE *)(((*(&anglera._anon_0._M_allocated_capacity + 1) + 320) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((*(&anglera._anon_0._M_allocated_capacity + 1) + 320) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      HIDWORD(anglera._anon_0._M_allocated_capacity) = *(_DWORD *)(*(&anglera._anon_0._M_allocated_capacity + 1) + 320);
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BasicComp = Player::getBasicComp(v5);
      PlayerBasicComp::getNextTransNo[abi:cxx11](&v16, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDBFu, anglera);
      std::string::~string(&v16);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyFishingCastRod>();
      if ( !std::operator==<proto_log::PlayerLogBodyFishingCastRod>(
              0LL,
              (const std::shared_ptr<proto_log::PlayerLogBodyFishingCastRod> *)(v2 + 96)) )
      {
        v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingCastRod,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingCastRod,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        proto_log::PlayerLogBodyFishingCastRod::set_fish_pool_id(v7, fish_pool_id);
        v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingCastRod,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingCastRod,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&anglerb->fish_rod >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)anglerb + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&anglerb->fish_rod >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyFishingCastRod::set_rod_id(v8, anglerb->fish_rod);
        v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingCastRod,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingCastRod,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&anglerb->fish_bait >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&anglerb->fish_bait >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyFishingCastRod::set_bait_id(v9, anglerb->fish_bait);
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFishingCastRod,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyFishingCastRod> *)(v2 + 96));
        Player::printStatLog(v10, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      }
      std::shared_ptr<proto_log::PlayerLogBodyFishingCastRod>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFishingCastRod> *const)(v2 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v17 == (char *)v2 )
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
};

// Line 1372: range 0000000013151324-00000000131523B5
void __cdecl FishPoolComp::anglerFilterFish(FishPoolComp *const this, Angler *angler, bool is_cast)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  Entity *v11; // rax
  EntityViewMgr *ViewMgr; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t EntityId; // eax
  Player *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t *v21; // rdx
  proto::Vector *v22; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t Uid; // eax
  Scene *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t *v31; // rdx
  proto::Vector *v32; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t v34; // eax
  Scene *v35; // rax
  Player *v36; // rax
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  FishPoolComp::anglerFilterFish::<lambda(Monster&)> v42; // [rsp-50h] [rbp-420h]
  unsigned int v44; // [rsp+20h] [rbp-3B0h] BYREF
  unsigned int val; // [rsp+24h] [rbp-3ACh] BYREF
  uint32_t fish_entity_id; // [rsp+28h] [rbp-3A8h]
  uint32_t fish_entity_id_0; // [rsp+2Ch] [rbp-3A4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-3A0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-398h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-390h]
  std::set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-388h]
  std::shared_ptr<FishingShockEvent> __r; // [rsp+50h] [rbp-380h] BYREF
  std::shared_ptr<Player> p_authority_player_ptr; // [rsp+60h] [rbp-370h] BYREF
  common::milog::MiLogStream v54; // [rsp+70h] [rbp-360h] BYREF
  FishPoolComp::anglerFilterFish::<lambda(Monster&)> __f; // [rsp+90h] [rbp-340h]
  char v56[752]; // [rsp+E0h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 23 min_attract_weight:1390 64 4 12 bait_id:1394 80 12 8 pos:1393 112 16 15 player_ptr:13"
                        "73 144 16 14 scene_ptr:1380 176 16 21 choosen_fish_ptr:1392 208 24 18 chosen_notify:1457 272 48 "
                        "17 occupied_set:1388 352 48 16 attract_set:1391 432 48 13 flee_set:1395 512 56 19 attract_notify"
                        ":1465 608 64 18 escape_notify:1479";
  *(_QWORD *)(v3 + 16) = FishPoolComp::anglerFilterFish;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = 0x4000000;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862730] = -218959118;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862735] = -218959118;
  v5[536862737] = -234881024;
  v5[536862738] = -218959118;
  v5[536862741] = -202116109;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 112));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/fish_pool_comp.cpp",
      "anglerFilterFish",
      1376);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v54,
      (const char (*)[26])"angler player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v54);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/fish_pool_comp.cpp",
      "anglerFilterFish",
      1379);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v54,
           (const char (*)[28])"angler filter fish for uid:");
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    val = Player::getUid(v7);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v54);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v3 + 144));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/fish_pool_comp.cpp",
        "anglerFilterFish",
        1383);
      v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v54,
             (const char (*)[41])"fish pool is not on the scene entity_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Entity::getEntityId((const Entity *const)this->gadget_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v54);
    }
    else
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 272));
      FishPoolComp::getOccupiedFish(this, (std::set<unsigned int> *)(v3 + 272));
      *(_DWORD *)(v3 + 48) = 2139095039;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 352));
      std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)(v3 + 176), 0LL);
      if ( *(char *)(((unsigned __int64)&angler->fishing_pos >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&angler->fishing_pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)angler + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&angler->fishing_pos.z + 3) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load_n(&angler->fishing_pos, 12LL);
      }
      *(Vector3 *)(v3 + 80) = angler->fishing_pos;
      if ( *(_BYTE *)(((unsigned __int64)&angler->fish_bait >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&angler->fish_bait >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 64) = angler->fish_bait;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 432));
      __f.__occupied_set = (std::set<unsigned int> *)(v3 + 272);
      __f.__pos = (Vector3 *)(v3 + 80);
      __f.__bait_id = (uint32_t *)(v3 + 64);
      __f.__flee_set = (std::set<unsigned int> *)(v3 + 432);
      __f.__attract_set = (std::set<unsigned int> *)(v3 + 352);
      __f.__min_attract_weight = (float *)(v3 + 48);
      __f.__choosen_fish_ptr = (MonsterPtr *)(v3 + 176);
      __f.__is_cast = is_cast;
      __f.__this = this;
      v42.__this = this;
      *(_QWORD *)&v42.__is_cast = *(_QWORD *)&__f.__is_cast;
      v42.__choosen_fish_ptr = (MonsterPtr *)(v3 + 176);
      v42.__min_attract_weight = (float *)(v3 + 48);
      v42.__attract_set = (std::set<unsigned int> *)(v3 + 352);
      v42.__flee_set = (std::set<unsigned int> *)(v3 + 432);
      v42.__bait_id = (uint32_t *)(v3 + 64);
      v42.__pos = (Vector3 *)(v3 + 80);
      v42.__occupied_set = (std::set<unsigned int> *)(v3 + 272);
      std::function<ForeachPolicy ()(Monster &)>::function<FishPoolComp::anglerFilterFish(Angler &,bool)::{lambda(Monster &)#1},void,void>(
        (std::function<ForeachPolicy(Monster&)> *const)&v54,
        v42);
      FishPoolComp::foreachFish(this, (std::function<ForeachPolicy(Monster&)> *)&v54);
      std::function<ForeachPolicy ()(Monster &)>::~function((std::function<ForeachPolicy(Monster&)> *const)&v54);
      if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v3 + 176)) )
      {
        v9 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        val = Entity::getEntityId((const Entity *const)v9);
        std::set<unsigned int>::erase((std::set<unsigned int> *const)(v3 + 352), &val);
        Angler::setState(angler, FISH_STATE_CHOOSE, 0);
        std::weak_ptr<Monster>::operator=<Monster>(&angler->fish_wtr, (const std::shared_ptr<Monster> *)(v3 + 176));
        v10 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        v11 = (Entity *)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        ViewMgr = Entity::getViewMgr(v11);
        EntityViewMgr::validateAndGetViewingPlayers((std::vector<std::shared_ptr<Player>> *)(v3 + 208), ViewMgr);
        std::shared_ptr<Player>::shared_ptr(&p_authority_player_ptr, (const std::shared_ptr<Player> *)(v3 + 112));
        Creature::onAuthorityChangedToPlayer(
          v10,
          &p_authority_player_ptr,
          (const std::vector<std::shared_ptr<Player>> *)(v3 + 208),
          0);
        std::shared_ptr<Player>::~shared_ptr(&p_authority_player_ptr);
        std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 208));
        proto::FishChosenNotify::FishChosenNotify((proto::FishChosenNotify *const)(v3 + 208));
        v13 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        EntityId = Entity::getEntityId((const Entity *const)v13);
        proto::FishChosenNotify::set_fish_id((proto::FishChosenNotify *const)(v3 + 208), EntityId);
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        Player::sendProto(v15, (const google::protobuf::Message *)(v3 + 208));
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/fish_pool_comp.cpp",
          "anglerFilterFish",
          1460);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v54,
                (const char (*)[16])"fish entity_id:");
        v17 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        v44 = Entity::getEntityId((const Entity *const)v17);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v44);
        v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v18,
                (const char (*)[22])" choosen to bite uid:");
        v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        val = Player::getUid(v20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        common::milog::MiLogStream::~MiLogStream(&v54);
        proto::FishChosenNotify::~FishChosenNotify((proto::FishChosenNotify *const)(v3 + 208));
      }
      if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 352)) )
      {
        proto::FishAttractNotify::FishAttractNotify((proto::FishAttractNotify *const)(v3 + 512));
        __for_range = (std::set<unsigned int> *)(v3 + 352);
        __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 352))._M_node;
        __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v21 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          fish_entity_id = *v21;
          proto::FishAttractNotify::add_fish_id_list((proto::FishAttractNotify *const)(v3 + 512), fish_entity_id);
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        Vector3::operator proto::Vector((proto::Vector *)&v54, (const Vector3 *const)(v3 + 80));
        v22 = proto::FishAttractNotify::mutable_pos((proto::FishAttractNotify *const)(v3 + 512));
        proto::Vector::operator=(v22, (proto::Vector *)&v54);
        proto::Vector::~Vector((proto::Vector *const)&v54);
        v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        Uid = Player::getUid(v23);
        proto::FishAttractNotify::set_uid((proto::FishAttractNotify *const)(v3 + 512), Uid);
        v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        Scene::notifyAllPlayer<proto::FishAttractNotify>(v25, (proto::FishAttractNotify *)(v3 + 512), 0);
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/fish_pool_comp.cpp",
          "anglerFilterFish",
          1474);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v54,
                (const char (*)[16])"fish entity_id:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int>(v26, (const std::set<unsigned int> *)(v3 + 352));
        v28 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v27,
                (const char (*)[22])" choosen to show uid:");
        v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        val = Player::getUid(v29);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
        common::milog::MiLogStream::~MiLogStream(&v54);
        proto::FishAttractNotify::~FishAttractNotify((proto::FishAttractNotify *const)(v3 + 512));
      }
      if ( is_cast && !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 432)) )
      {
        proto::FishEscapeNotify::FishEscapeNotify((proto::FishEscapeNotify *const)(v3 + 608));
        __for_range_0 = (std::set<unsigned int> *)(v3 + 432);
        __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 432))._M_node;
        __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v31 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          fish_entity_id_0 = *v31;
          proto::FishEscapeNotify::add_fish_id_list((proto::FishEscapeNotify *const)(v3 + 608), fish_entity_id_0);
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        Vector3::operator proto::Vector((proto::Vector *)&v54, (const Vector3 *const)(v3 + 80));
        v32 = proto::FishEscapeNotify::mutable_pos((proto::FishEscapeNotify *const)(v3 + 608));
        proto::Vector::operator=(v32, (proto::Vector *)&v54);
        proto::Vector::~Vector((proto::Vector *const)&v54);
        proto::FishEscapeNotify::set_reason((proto::FishEscapeNotify *const)(v3 + 608), FISH_ESCAPE_SHOCKED);
        v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        v34 = Player::getUid(v33);
        proto::FishEscapeNotify::set_uid((proto::FishEscapeNotify *const)(v3 + 608), v34);
        v35 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        Scene::notifyAllPlayer<proto::FishEscapeNotify>(v35, (proto::FishEscapeNotify *)(v3 + 608), 0);
        v36 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        EventComp = Player::getEventComp(v36);
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 432));
        common::tools::perf::make_shared<FishingShockEvent,unsigned long>(
          (unsigned __int64 *)&__r,
          (unsigned __int64 *)&__for_end);
        std::shared_ptr<BaseEvent>::shared_ptr<FishingShockEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&p_authority_player_ptr,
          &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_authority_player_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_authority_player_ptr);
        std::shared_ptr<FishingShockEvent>::~shared_ptr(&__r);
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/fish_pool_comp.cpp",
          "anglerFilterFish",
          1489);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v54,
                (const char (*)[16])"fish entity_id:");
        v39 = common::milog::MiLogStream::operator<<<unsigned int>(v38, (const std::set<unsigned int> *)(v3 + 432));
        v40 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v39,
                (const char (*)[24])" choosen to escape uid:");
        v41 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        val = Player::getUid(v41);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &val);
        common::milog::MiLogStream::~MiLogStream(&v54);
        proto::FishEscapeNotify::~FishEscapeNotify((proto::FishEscapeNotify *const)(v3 + 608));
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 432));
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 176));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 352));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 272));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 144));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 112));
  if ( v56 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1396: range 00000000131508AE-0000000013151323
ForeachPolicy __cdecl FishPoolComp::anglerFilterFish(Angler &,bool)::{lambda(Monster &)#1}::operator()(
        const FishPoolComp::anglerFilterFish::<lambda(Monster&)> *const __closure,
        Monster *monster)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::set<unsigned int> *occupied_set; // r14
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const Vector3 *Position; // rcx
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::set<unsigned int> *flee_set; // r14
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t LastShockTime; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  time_t v19; // r14
  const FishExcelConfigMgr *p_fish_config_mgr; // rdi
  uint32_t v21; // esi
  uint32_t *bait_id; // rdx
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  float attract_range; // xmm1_4
  std::set<unsigned int> *attract_set; // r14
  float *min_attract_weight; // rdx
  float *v30; // rdx
  ForeachPolicy result; // eax
  std::set<unsigned int>::key_type __x; // [rsp+18h] [rbp-D8h] BYREF
  float attract_weight; // [rsp+1Ch] [rbp-D4h]
  const data::FishExcelConfig *fish_config_ptr; // [rsp+20h] [rbp-D0h]
  const data::FishBaitFeature *bait_feature_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v38; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v39; // [rsp+40h] [rbp-B0h] BYREF
  char v40[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 fish_id:1408 48 4 13 distance:1415 64 16 18 fish_comp_ptr:1403";
  *(_QWORD *)(v3 + 16) = FishPoolComp::anglerFilterFish(Angler &,bool)::{lambda(Monster &)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  occupied_set = __closure->__occupied_set;
  __x = Entity::getEntityId((const Entity *const)monster);
  if ( !std::set<unsigned int>::count(occupied_set, &__x) )
  {
    EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v3 + 64));
    if ( !std::operator==<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v3 + 64)) )
    {
      v7 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      *(_DWORD *)(v3 + 32) = MonsterFishComp::getFishId(v7);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v38);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
      fish_config_ptr = data::FishExcelConfigMgrBase::findFishExcelConfig(
                          &v8->design_config.txt_config_mgr.fish_config_mgr,
                          *(_DWORD *)(v3 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v38);
      if ( fish_config_ptr )
      {
        Position = Entity::getPosition((const Entity *const)monster);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__pos >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(float *)v2.m128i_i32 = getPlaneDistance(__closure->__pos, Position);
        *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(v2);
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/fish_pool_comp.cpp",
          "operator()",
          1416);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v39,
                (const char (*)[16])"fish entity_id:");
        __x = Entity::getEntityId((const Entity *const)monster);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &__x);
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" distance=");
        common::milog::MiLogStream::operator<<<float,(float *)0>(v14, (const float *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v39);
        if ( *(char *)(((unsigned __int64)&__closure->__is_cast >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&__closure->__is_cast);
        if ( !__closure->__is_cast )
          goto LABEL_23;
        if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->flee_range >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)fish_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_config_ptr->flee_range >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( fish_config_ptr->flee_range >= *(float *)(v3 + 48) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          FishPoolComp::shockFish(__closure->__this, monster, 0);
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__flee_set >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          flee_set = __closure->__flee_set;
          __x = Entity::getEntityId((const Entity *const)monster);
          std::set<unsigned int>::insert(flee_set, &__x);
        }
        else
        {
LABEL_23:
          v16 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          LastShockTime = MonsterFishComp::getLastShockTime(v16);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v38);
          v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
          v19 = LastShockTime
              + ConstValueExcelConfigMgr::getFishingShockTime(&v18->design_config.txt_config_mgr.const_value_config_mgr);
          LOBYTE(v19) = v19 >= common::tools::TimeUtils::getNow();
          std::shared_ptr<Config>::~shared_ptr(&v38);
          if ( !(_BYTE)v19 )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v38);
            p_fish_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.fish_config_mgr;
            v21 = *(_DWORD *)(v3 + 32);
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__bait_id >> 3) + 0x7FFF8000) )
            {
              p_fish_config_mgr = (const FishExcelConfigMgr *)&__closure->__bait_id;
              __asan_report_load8();
            }
            bait_id = __closure->__bait_id;
            if ( *(_BYTE *)(((unsigned __int64)bait_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)bait_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bait_id >> 3) + 0x7FFF8000) )
            {
              p_fish_config_mgr = (const FishExcelConfigMgr *)__closure->__bait_id;
              __asan_report_load4();
            }
            bait_feature_ptr = FishExcelConfigMgr::findFishBaitFeature(p_fish_config_mgr, *bait_id, v21);
            std::shared_ptr<Config>::~shared_ptr(&v38);
            if ( bait_feature_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->attract_range >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&fish_config_ptr->attract_range >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              attract_range = fish_config_ptr->attract_range;
              if ( *(_BYTE *)(((unsigned __int64)&bait_feature_ptr->bonus_range >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&bait_feature_ptr->bonus_range >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( *(float *)(v3 + 48) <= (float)(attract_range * bait_feature_ptr->bonus_range) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&__closure->__attract_set >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                attract_set = __closure->__attract_set;
                __x = Entity::getEntityId((const Entity *const)monster);
                std::set<unsigned int>::insert(attract_set, &__x);
                if ( *(_BYTE *)(((unsigned __int64)&bait_feature_ptr->weight >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)bait_feature_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bait_feature_ptr->weight >> 3)
                                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                attract_weight = *(float *)(v3 + 48) * bait_feature_ptr->weight;
                if ( attract_weight > 0.00000011920929 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&__closure->__min_attract_weight >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  min_attract_weight = __closure->__min_attract_weight;
                  if ( *(_BYTE *)(((unsigned __int64)min_attract_weight >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)min_attract_weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)min_attract_weight >> 3)
                                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( attract_weight < *min_attract_weight )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&__closure->__min_attract_weight >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v30 = __closure->__min_attract_weight;
                    if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store4(__closure->__min_attract_weight);
                    }
                    *v30 = attract_weight;
                    toThisPtr<Monster>((Monster *)&v38);
                    if ( *(_BYTE *)(((unsigned __int64)&__closure->__choosen_fish_ptr >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    std::shared_ptr<Monster>::operator=(__closure->__choosen_fish_ptr, (std::shared_ptr<Monster> *)&v38);
                    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)&v38);
                  }
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v39,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/gadget/fish_pool_comp.cpp",
                "operator()",
                1432);
              v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      &v39,
                      (const char (*)[16])"fish entity_id:");
              __x = Entity::getEntityId((const Entity *const)monster);
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &__x);
              v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v24,
                      (const char (*)[10])" fish_id:");
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v25,
                      (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v26, (const char (*)[24])off_24F44A20);
              common::milog::MiLogStream::~MiLogStream(&v39);
            }
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/fish_pool_comp.cpp",
          "operator()",
          1412);
        v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v39, (const char (*)[9])"fish_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])" config not found");
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
    }
    std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v3 + 64));
  }
  result = FOREACH_CONTINUE;
  if ( v40 == (char *)v3 )
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

// Line 1494: range 00000000131523B6-0000000013152A4E
__int64 __fastcall FishPoolComp::fishBite(FishPoolComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::pointer v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *v14; // rax
  PlayerItemComp *ItemComp; // rax
  Player *v16; // rax
  PlayerItemComp *v17; // rax
  Angler *v18; // rax
  Scene *v19; // rax
  __int64 result; // rax
  common::milog::MiLogStream v21; // [rsp+10h] [rbp-190h] BYREF
  char v22[368]; // [rsp+30h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 8 uid:1493 64 8 9 iter:1495 96 8 11 reason:1528 128 16 15 angler_ptr:1500 160 16 15 playe"
                        "r_ptr:1506 192 16 10 param:1522 224 16 14 scene_ptr:1536 256 24 16 bait_notify:1534";
  *(_QWORD *)(v2 + 16) = FishPoolComp::fishBite;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::map<unsigned int,std::shared_ptr<Angler>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<Angler>>::find(
                                                                             &this->angler_map_,
                                                                             (const std::map<unsigned int,std::shared_ptr<Angler>>::key_type *)(v2 + 48));
  *(std::map<unsigned int,std::shared_ptr<Angler>>::iterator *)(v2 + 96) = std::map<unsigned int,std::shared_ptr<Angler>>::end(&this->angler_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self *)(v2 + 96)) )
  {
    v5 = 11001;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > > *const)(v2 + 64));
    std::shared_ptr<Angler>::shared_ptr((std::shared_ptr<Angler> *const)(v2 + 128), &v6->second);
    if ( std::operator==<Angler>(0LL, (const std::shared_ptr<Angler> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/fish_pool_comp.cpp",
        "fishBite",
        1503);
      v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v21, (const char (*)[5])"uid:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v8, (const char (*)[23])" angler_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v5 = -1;
    }
    else
    {
      std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 160));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/fish_pool_comp.cpp",
          "fishBite",
          1509);
        v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v21, (const char (*)[5])"uid:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v10,
          (const char (*)[23])" player_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v21);
        v5 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v11->state >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->state >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v11->state == FISH_STATE_CHOOSE )
        {
          std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v2 + 224));
          v12 = std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 224));
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 224));
          if ( v12 )
          {
            v5 = 11007;
          }
          else
          {
            *(_QWORD *)(v2 + 192) = 0LL;
            *(_QWORD *)(v2 + 200) = 0LL;
            *(_DWORD *)(v2 + 196) = 1;
            v13 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v13->fish_bait >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v13->fish_bait >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 192) = v13->fish_bait;
            v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            ItemComp = Player::getItemComp(v14);
            if ( PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v2 + 192)) )
            {
              v5 = 609;
            }
            else
            {
              SubItemReason::SubItemReason((SubItemReason *const)(v2 + 96), ACTION_REASON_FISH_BITE);
              v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              v17 = Player::getItemComp(v16);
              PlayerItemComp::subItem(v17, (const ItemParam *)(v2 + 192), (const SubItemReason *)(v2 + 96));
              v18 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              Angler::setState(v18, FISH_STATE_BITE, 0);
              proto::FishBaitGoneNotify::FishBaitGoneNotify((proto::FishBaitGoneNotify *const)(v2 + 256));
              proto::FishBaitGoneNotify::set_uid((proto::FishBaitGoneNotify *const)(v2 + 256), *(_DWORD *)(v2 + 48));
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Entity::getScene((const Entity *const)(v2 + 224));
              if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 224)) )
              {
                v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                Scene::notifyAllPlayer<proto::FishBaitGoneNotify>(v19, (proto::FishBaitGoneNotify *)(v2 + 256), 0);
              }
              v5 = 0;
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 224));
              proto::FishBaitGoneNotify::~FishBaitGoneNotify((proto::FishBaitGoneNotify *const)(v2 + 256));
            }
          }
        }
        else
        {
          v5 = 11002;
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
    }
    std::shared_ptr<Angler>::~shared_ptr((std::shared_ptr<Angler> *const)(v2 + 128));
  }
  result = v5;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1546: range 0000000013152A50-0000000013152D4E
__int64 __fastcall FishPoolComp::fishBattleBegin(FishPoolComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::pointer v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Angler *v10; // rax
  Angler *v11; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 uid:1545 64 8 9 iter:1547 96 16 15 angler_ptr:1552";
  *(_QWORD *)(v2 + 16) = FishPoolComp::fishBattleBegin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::map<unsigned int,std::shared_ptr<Angler>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<Angler>>::find(
                                                                             &this->angler_map_,
                                                                             (const std::map<unsigned int,std::shared_ptr<Angler>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Angler>>::end(&this->angler_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = 11001;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > > *const)(v2 + 64));
    std::shared_ptr<Angler>::shared_ptr((std::shared_ptr<Angler> *const)(v2 + 96), &v6->second);
    if ( std::operator==<Angler>(0LL, (const std::shared_ptr<Angler> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/fish_pool_comp.cpp",
        "fishBattleBegin",
        1555);
      v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v14, (const char (*)[5])"uid:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v8, (const char (*)[23])" angler_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v5 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v9->state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v9->state == FISH_STATE_BITE )
      {
        v10 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Angler::setState(v10, FISH_STATE_QTE, 0);
        v11 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        FishPoolComp::logFishingQTEStart(this, v11);
        v5 = 0;
      }
      else
      {
        v5 = 11002;
      }
    }
    std::shared_ptr<Angler>::~shared_ptr((std::shared_ptr<Angler> *const)(v2 + 96));
  }
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 1572: range 0000000013152D50-0000000013153346
void __cdecl FishPoolComp::logFishingQTEStart(FishPoolComp *const this, Angler *angler)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // r14
  std::string anglera; // [rsp+0h] [rbp-150h]
  Angler *anglerb; // [rsp+0h] [rbp-150h]
  uint32_t fish_pool_id; // [rsp+10h] [rbp-140h]
  uint32_t fish_id; // [rsp+14h] [rbp-13Ch]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-120h] BYREF
  std::string v20; // [rsp+40h] [rbp-110h] BYREF
  char v21[240]; // [rsp+60h] [rbp-F0h] BYREF

  anglera._M_string_length = (std::string::size_type)this;
  anglera._M_dataplus._M_p = (std::string::pointer)angler;
  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 11 holder:1597 64 16 15 player_ptr:1573 96 16 13 fish_ptr:1585 128 16 18 fish_comp_ptr:15"
                        "90 160 16 12 log_ptr:1598";
  *(_QWORD *)(v2 + 16) = FishPoolComp::logFishingQTEStart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 64));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(&anglera._anon_0._M_allocated_capacity + 1) = (std::string::size_type)Gadget::getScriptConfig(this->gadget_);
    if ( *(&anglera._anon_0._M_allocated_capacity + 1) )
    {
      if ( *(_BYTE *)(((*(&anglera._anon_0._M_allocated_capacity + 1) + 320) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((*(&anglera._anon_0._M_allocated_capacity + 1) + 320) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)anglera._anon_0._M_local_buf = *(_DWORD *)(*(&anglera._anon_0._M_allocated_capacity + 1) + 320);
      std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v2 + 96));
      if ( !std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 96)) )
      {
        std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v2 + 128));
        if ( !std::operator==<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v2 + 128)) )
        {
          v5 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          HIDWORD(anglera._anon_0._M_allocated_capacity) = MonsterFishComp::getFishId(v5);
          v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          BasicComp = Player::getBasicComp(v6);
          PlayerBasicComp::getNextTransNo[abi:cxx11](&v20, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDC0u, anglera);
          std::string::~string(&v20);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyFishingQteStart>();
          if ( !std::operator==<proto_log::PlayerLogBodyFishingQteStart>(
                  0LL,
                  (const std::shared_ptr<proto_log::PlayerLogBodyFishingQteStart> *)(v2 + 160)) )
          {
            v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            proto_log::PlayerLogBodyFishingQteStart::set_fish_pool_id(v8, fish_pool_id);
            v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&anglerb->fish_rod >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)anglerb + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&anglerb->fish_rod >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyFishingQteStart::set_rod_id(v9, anglerb->fish_rod);
            v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&anglerb->fish_bait >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&anglerb->fish_bait >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyFishingQteStart::set_bait_id(v10, anglerb->fish_bait);
            v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            proto_log::PlayerLogBodyFishingQteStart::set_transaction(v11, &anglerb->transaction);
            v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            proto_log::PlayerLogBodyFishingQteStart::set_fish_id(v12, fish_id);
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFishingQteStart,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyFishingQteStart> *)(v2 + 160));
            Player::printStatLog(v13, &p_body_ptr, &p_body_ext_ptr, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
          }
          std::shared_ptr<proto_log::PlayerLogBodyFishingQteStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFishingQteStart> *const)(v2 + 160));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
        }
        std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v2 + 128));
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 96));
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v21 == (char *)v2 )
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

// Line 1612: range 0000000013153348-0000000013154477
__int64 __fastcall FishPoolComp::fishBattleEnd(
        FishPoolComp *const this,
        uint32_t uid,
        const proto::FishBattleEndReq *req,
        proto::FishBattleEndRsp *rsp_0)
{
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned int v6; // r12d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r12
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Angler *v13; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  uint32_t last_state_change_time; // r12d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  time_t v17; // r12
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t v23; // r12d
  uint32_t v24; // r13d
  uint32_t v25; // r15d
  Angler *v26; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v27; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v28; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v29; // rax
  Player *v31; // rax
  PlayerEventComp *EventComp; // r12
  Player *v33; // rax
  PlayerEventComp *v34; // r12
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // r12
  unsigned __int64 v36; // rax
  void (__fastcall *v37)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r13
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  Angler *v39; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t v41; // r15d
  uint32_t v42; // r12d
  Angler *v43; // rax
  uint32_t v45; // r12d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rdx
  uint32_t *p_uid; // rax
  uint32_t EntityId; // r12d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rdx
  uint32_t *p_source_entity_id; // rax
  int32_t v51; // r12d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  int32_t v55; // r12d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rdx
  int32_t *p_param3; // rax
  google::protobuf::uint32 v58; // r12d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  Group *v60; // rax
  __int64 result; // rax
  unsigned __int64 v62; // [rsp+38h] [rbp-268h]
  bool is_battle_succ; // [rsp+6Bh] [rbp-235h]
  proto::VisionType vision_type; // [rsp+6Ch] [rbp-234h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self __y; // [rsp+70h] [rbp-230h] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+78h] [rbp-228h]
  VisionContext v69; // [rsp+84h] [rbp-21Ch] BYREF
  common::milog::MiLogStream v70; // [rsp+90h] [rbp-210h] BYREF
  char v71[496]; // [rsp+B0h] [rbp-1F0h] BYREF

  v62 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v62 = v4;
  }
  *(_QWORD *)v62 = 1102416563LL;
  *(_QWORD *)(v62 + 8) = "13 32 1 20 is_grant_reward:1661 48 4 17 fish_pool_id:1631 64 4 12 fish_id:1659 80 4 11 reason:1"
                         "668 96 4 8 uid:1611 112 8 9 iter:1613 144 16 15 angler_ptr:1618 176 16 13 fish_ptr:1646 208 16 "
                         "18 fish_comp_ptr:1652 240 16 15 player_ptr:1683 272 16 12 evt_ptr:1699 304 16 14 group_ptr:1700"
                         " 336 72 26 fishing_output_result:1667";
  *(_QWORD *)(v62 + 16) = FishPoolComp::fishBattleEnd;
  v5 = (_DWORD *)(v62 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = 62194;
  v5[536862729] = 62194;
  v5[536862730] = 62194;
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  *(_DWORD *)(v62 + 96) = uid;
  *(std::map<unsigned int,std::shared_ptr<Angler>>::iterator *)(v62 + 112) = std::map<unsigned int,std::shared_ptr<Angler>>::find(
                                                                               &this->angler_map_,
                                                                               (const std::map<unsigned int,std::shared_ptr<Angler>>::key_type *)(v62 + 96));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Angler>>::end(&this->angler_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self *)(v62 + 112),
         &__y) )
  {
    v6 = 11001;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > > *const)(v62 + 112));
    std::shared_ptr<Angler>::shared_ptr((std::shared_ptr<Angler> *const)(v62 + 144), &v7->second);
    if ( std::operator==<Angler>(0LL, (const std::shared_ptr<Angler> *)(v62 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v70,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/fish_pool_comp.cpp",
        "fishBattleEnd",
        1621);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v70, (const char (*)[5])"uid:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v62 + 96));
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v9, (const char (*)[23])" angler_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v70);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
      if ( gadget_script_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v62 + 48) = gadget_script_config_ptr->fish_pool_id;
        v12 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&v12->state >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->state >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v12->state == FISH_STATE_QTE )
        {
          v14 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&v14->last_state_change_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v14 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->last_state_change_time >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          last_state_change_time = v14->last_state_change_time;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v62 + 304));
          v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 304));
          v17 = last_state_change_time
              + ConstValueExcelConfigMgr::getFishBattleMinTime(&v16->design_config.txt_config_mgr.const_value_config_mgr);
          LOBYTE(v17) = v17 > common::tools::TimeUtils::getNow();
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v62 + 304));
          if ( (_BYTE)v17 )
          {
            v6 = 11006;
          }
          else
          {
            std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 144));
            std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v62 + 176));
            if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v62 + 176)) )
            {
              common::milog::MiLogStream::create(
                &v70,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/gadget/fish_pool_comp.cpp",
                "fishBattleEnd",
                1649);
              v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v70, (const char (*)[5])"uid:");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v18,
                      (const unsigned int *)(v62 + 96));
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v19,
                (const char (*)[21])" fish_ptr is nullptr");
              common::milog::MiLogStream::~MiLogStream(&v70);
              v6 = -1;
            }
            else
            {
              std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 176));
              EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v62 + 208));
              if ( std::operator==<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v62 + 208)) )
              {
                common::milog::MiLogStream::create(
                  &v70,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/gadget/fish_pool_comp.cpp",
                  "fishBattleEnd",
                  1655);
                v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v70, (const char (*)[5])"uid:");
                v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v20,
                        (const unsigned int *)(v62 + 96));
                common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  v21,
                  (const char (*)[26])" fish_comp_ptr is nullptr");
                common::milog::MiLogStream::~MiLogStream(&v70);
                v6 = -1;
              }
              else
              {
                v22 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 208));
                *(_DWORD *)(v62 + 64) = MonsterFishComp::getFishId(v22);
                vision_type = VISION_FISH_BIG_SHOCK;
                *(_BYTE *)(v62 + 32) = 0;
                is_battle_succ = 0;
                if ( proto::FishBattleEndReq::battle_result(req) == FISH_BATTLE_RESULT_SUCC )
                {
                  is_battle_succ = 1;
                  vision_type = VISION_FISH_QTE_SUCC;
                  FishPoolComp::FishingOutputResult::FishingOutputResult((FishPoolComp::FishingOutputResult *const)(v62 + 336));
                  *(_DWORD *)(v62 + 80) = 0;
                  v23 = proto::FishBattleEndReq::max_bonus_time(req);
                  v24 = *(_DWORD *)(v62 + 64);
                  v25 = *(_DWORD *)(v62 + 48);
                  v26 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 144));
                  FishPoolComp::onFishingSucc(
                    this,
                    v26,
                    v25,
                    v24,
                    (bool *)(v62 + 32),
                    (FishPoolComp::FishingOutputResult *)(v62 + 336),
                    v23,
                    (proto::FishBattleEndRsp::FishNoRewardReason *)(v62 + 80));
                  proto::FishBattleEndRsp::set_is_got_reward(rsp_0, *(_BYTE *)(v62 + 32));
                  proto::FishBattleEndRsp::set_no_reward_reason(
                    rsp_0,
                    *(proto::FishBattleEndRsp_FishNoRewardReason *)(v62 + 80));
                  v27 = proto::FishBattleEndRsp::mutable_reward_item_list(rsp_0);
                  common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::ItemParam,int (ItemParam::*)(proto::ItemParam&)const>(
                    (const std::vector<ItemParam> *)(v62 + 336),
                    v27,
                    (int (*)(const ItemParam *, proto::ItemParam *))ItemParam::toClient);
                  v28 = proto::FishBattleEndRsp::mutable_drop_item_list(rsp_0);
                  common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::ItemParam,int (ItemParam::*)(proto::ItemParam&)const>(
                    (const std::vector<ItemParam> *)(v62 + 360),
                    v28,
                    (int (*)(const ItemParam *, proto::ItemParam *))ItemParam::toClient);
                  v29 = proto::FishBattleEndRsp::mutable_talent_item_list(rsp_0);
                  common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::ItemParam,int (ItemParam::*)(proto::ItemParam&)const>(
                    (const std::vector<ItemParam> *)(v62 + 384),
                    v29,
                    (int (*)(const ItemParam *, proto::ItemParam *))ItemParam::toClient);
                  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 144));
                  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v62 + 240));
                  if ( proto::FishBattleEndReq::is_always_bonus(req)
                    && std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v62 + 240)) )
                  {
                    v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 240));
                    EventComp = Player::getEventComp(v31);
                    common::tools::perf::make_shared<FishingKeepBonusEvent,unsigned int &>(
                      (unsigned int *)(v62 + 272),
                      (unsigned int *)(v62 + 64));
                    std::shared_ptr<BaseEvent>::shared_ptr<FishingKeepBonusEvent,void>(
                      (std::shared_ptr<BaseEvent> *const)(v62 + 304),
                      (std::shared_ptr<FishingKeepBonusEvent> *)(v62 + 272));
                    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v62 + 304));
                    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v62 + 304));
                    std::shared_ptr<FishingKeepBonusEvent>::~shared_ptr((std::shared_ptr<FishingKeepBonusEvent> *const)(v62 + 272));
                  }
                  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v62 + 240));
                  FishPoolComp::FishingOutputResult::~FishingOutputResult((FishPoolComp::FishingOutputResult *const)(v62 + 336));
                }
                else if ( proto::FishBattleEndReq::battle_result(req) == FISH_BATTLE_RESULT_FAIL )
                {
                  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 144));
                  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v62 + 240));
                  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v62 + 240)) )
                  {
                    v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 240));
                    v34 = Player::getEventComp(v33);
                    common::tools::perf::make_shared<FishingFailEvent,unsigned int &,unsigned int &>(
                      (unsigned int *)(v62 + 272),
                      (unsigned int *)(v62 + 48),
                      (unsigned int *)(v62 + 64),
                      (unsigned int *)(v62 + 48));
                    std::shared_ptr<BaseEvent>::shared_ptr<FishingFailEvent,void>(
                      (std::shared_ptr<BaseEvent> *const)(v62 + 304),
                      (std::shared_ptr<FishingFailEvent> *)(v62 + 272));
                    PlayerEventComp::notifyEvent(v34, (BaseEventPtr *)(v62 + 304));
                    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v62 + 304));
                    std::shared_ptr<FishingFailEvent>::~shared_ptr((std::shared_ptr<FishingFailEvent> *const)(v62 + 272));
                  }
                  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v62 + 240));
                }
                v35 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 176));
                if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v36 = *(_QWORD *)v35->baseclass_0 + 128LL;
                if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
                  v36 = __asan_report_load8();
                v37 = *(void (__fastcall **)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v36;
                VisionContext::VisionContext(&v69, vision_type);
                v37(v35, &v69);
                v38 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 176));
                *(_DWORD *)(v62 + 80) = Entity::getEntityId((const Entity *const)v38);
                std::map<unsigned int,std::weak_ptr<Monster>>::erase(
                  &this->fish_wtr_map_,
                  (const std::map<unsigned int,std::weak_ptr<Monster>>::key_type *)(v62 + 80));
                v39 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 144));
                Angler::setState(v39, FISH_STATE_END, 0);
                v40 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 144));
                std::__weak_ptr<Monster,(__gnu_cxx::_Lock_policy)2>::reset(&v40->fish_wtr);
                v41 = proto::FishBattleEndReq::battle_result(req);
                LODWORD(v37) = *(_DWORD *)(v62 + 64);
                v42 = *(_DWORD *)(v62 + 48);
                v43 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 144));
                FishPoolComp::logFishingQTEEnd(this, v43, v42, (uint32_t)v37, v41);
                EventUtil::createEvent((data::EventType)(v62 + 272));
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Entity::getGroup((const Entity *const)(v62 + 304));
                if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v62 + 272))
                  && std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v62 + 304)) )
                {
                  v45 = *(_DWORD *)(v62 + 96);
                  v46 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 272));
                  p_uid = &v46->uid;
                  if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_uid);
                  }
                  v46->uid = v45;
                  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
                  v49 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 272));
                  p_source_entity_id = &v49->source_entity_id;
                  if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_source_entity_id);
                  }
                  v49->source_entity_id = EntityId;
                  v51 = *(_DWORD *)(v62 + 64);
                  v52 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 272));
                  p_param1 = &v52->param1;
                  if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_param1);
                  }
                  v52->param1 = v51;
                  v54 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 272));
                  if ( *(_BYTE *)(((unsigned __int64)&v54->param2 >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v54->param2 >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v54 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v54->param2);
                  }
                  v54->param2 = is_battle_succ;
                  v55 = *(unsigned __int8 *)(v62 + 32);
                  v56 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 272));
                  p_param3 = &v56->param3;
                  if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_param3);
                  }
                  v56->param3 = v55;
                  v58 = proto::FishBattleEndReq::max_bonus_time(req);
                  v59 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 272));
                  if ( *(_BYTE *)(((unsigned __int64)&v59->param4 >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v59->param4 >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v59 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v59->param4);
                  }
                  v59->param4 = v58;
                  v60 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 304));
                  Group::handleEvent(v60, (EventPtr *)(v62 + 272));
                }
                v6 = 0;
                std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v62 + 304));
                std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v62 + 272));
              }
              std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v62 + 208));
            }
            std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v62 + 176));
          }
        }
        else
        {
          v13 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v62 + 144));
          FishPoolComp::failFishing(this, v13, 0, FISH_BATTLE_RESULT_CANCEL);
          v6 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v70,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/fish_pool_comp.cpp",
          "fishBattleEnd",
          1628);
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v70, (const char (*)[11])"entity_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v62 + 80) = Entity::getEntityId((const Entity *const)this->gadget_);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v62 + 80));
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v11,
          (const char (*)[25])" script config not found");
        common::milog::MiLogStream::~MiLogStream(&v70);
        v6 = -1;
      }
    }
    std::shared_ptr<Angler>::~shared_ptr((std::shared_ptr<Angler> *const)(v62 + 144));
  }
  result = v6;
  if ( v71 == (char *)v62 )
  {
    *(_QWORD *)((v62 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v62 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v62 = 1172321806LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1716: range 0000000013154478-00000000131548C4
void __cdecl FishPoolComp::logFishingQTEEnd(
        FishPoolComp *const this,
        Angler *angler,
        uint32_t fish_pool_id,
        uint32_t fish_id,
        uint32_t result)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // r14
  std::string v17; // [rsp+0h] [rbp-110h]
  uint32_t resulta; // [rsp+4h] [rbp-10Ch]
  uint32_t fish_ida; // [rsp+8h] [rbp-108h]
  uint32_t fish_pool_ida; // [rsp+Ch] [rbp-104h]
  Angler *anglera; // [rsp+10h] [rbp-100h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  std::string v24; // [rsp+40h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+60h] [rbp-B0h] BYREF

  *(&v17._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v17._anon_0._M_allocated_capacity = (std::string::size_type)angler;
  HIDWORD(v17._M_string_length) = fish_pool_id;
  LODWORD(v17._M_string_length) = fish_id;
  HIDWORD(v17._M_dataplus._M_p) = result;
  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 1 11 holder:1723 64 16 15 player_ptr:1717 96 16 12 log_ptr:1724";
  *(_QWORD *)(v5 + 16) = FishPoolComp::logFishingQTEEnd;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -219021312;
  v7[536862723] = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v5 + 64));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 64)) )
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    BasicComp = Player::getBasicComp(v8);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xDC1u, v17);
    std::string::~string(&v24);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyFishingQteEnd>();
    if ( !std::operator==<proto_log::PlayerLogBodyFishingQteEnd>(
            0LL,
            (const std::shared_ptr<proto_log::PlayerLogBodyFishingQteEnd> *)(v5 + 96)) )
    {
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      proto_log::PlayerLogBodyFishingQteEnd::set_fish_pool_id(v10, fish_pool_ida);
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&anglera->fish_rod >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)anglera + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&anglera->fish_rod >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyFishingQteEnd::set_rod_id(v11, anglera->fish_rod);
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&anglera->fish_bait >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&anglera->fish_bait >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyFishingQteEnd::set_bait_id(v12, anglera->fish_bait);
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      proto_log::PlayerLogBodyFishingQteEnd::set_transaction(v13, &anglera->transaction);
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      proto_log::PlayerLogBodyFishingQteEnd::set_fish_id(v14, fish_ida);
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFishingQteEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      proto_log::PlayerLogBodyFishingQteEnd::set_result(v15, resulta);
      v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFishingQteEnd,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyFishingQteEnd> *)(v5 + 96));
      Player::printStatLog(v16, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    }
    std::shared_ptr<proto_log::PlayerLogBodyFishingQteEnd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFishingQteEnd> *const)(v5 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 64));
  if ( v25 == (char *)v5 )
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

// Line 1739: range 00000000131548C6-0000000013154FEB
void __fastcall FishPoolComp::onFishingSucc(
        FishPoolComp *const this,
        Angler *angler,
        uint32_t fish_pool_id,
        uint32_t fish_id,
        bool *is_grant_reward,
        FishPoolComp::FishingOutputResult *fishing_output_result,
        uint32_t max_bonus_time,
        proto::FishBattleEndRsp::FishNoRewardReason *reason)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  uint32_t v13; // r15d
  uint32_t v14; // r14d
  Player *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *v17; // rax
  PlayerCookComp *CookComp; // rcx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  Player *v22; // rax
  PlayerEventComp *EventComp; // r14
  Player *v25; // rax
  PlayerEventComp *v26; // r14
  unsigned int *v27; // [rsp+0h] [rbp-150h]
  unsigned int *v30; // [rsp+18h] [rbp-138h]
  uint32_t owner_uid; // [rsp+34h] [rbp-11Ch]
  const data::FishExcelConfig *fish_config_ptr; // [rsp+38h] [rbp-118h]
  std::shared_ptr<FishingSuccEvent> __r; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<Config> v34; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-F0h] BYREF
  unsigned int v36[52]; // [rsp+80h] [rbp-D0h] BYREF

  v30 = (unsigned int *)__PAIR64__(fish_pool_id, fish_id);
  v8 = (unsigned __int64)v36;
  v27 = v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(160LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "6 32 1 22 is_in_other_world:1772 48 4 17 fish_pool_id:1738 64 4 12 fish_id:1738 80 4 19 max_bonu"
                        "s_time:1738 96 16 15 player_ptr:1740 128 16 14 scene_ptr:1767";
  *(_QWORD *)(v8 + 16) = FishPoolComp::onFishingSucc;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556927;
  v10[536862722] = -234556924;
  v10[536862723] = -219021312;
  v10[536862724] = -202178560;
  *(_DWORD *)(v8 + 48) = HIDWORD(v30);
  *(_DWORD *)(v8 + 64) = (_DWORD)v30;
  *(_DWORD *)(v8 + 80) = max_bonus_time;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v8 + 96));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v8 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/fish_pool_comp.cpp",
      "onFishingSucc",
      1743);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v35, (const char (*)[22])"player_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  else
  {
    v11 = std::map<unsigned int,unsigned int>::operator[](
            &this->cached_fish_map_,
            (const std::map<unsigned int,unsigned int>::key_type *)(v8 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *v11 > 1 )
    {
      v12 = std::map<unsigned int,unsigned int>::operator[](
              &this->cached_fish_map_,
              (const std::map<unsigned int,unsigned int>::key_type *)(v8 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      --*v12;
    }
    else
    {
      std::map<unsigned int,unsigned int>::erase(
        &this->cached_fish_map_,
        (const std::map<unsigned int,unsigned int>::key_type *)(v8 + 64));
    }
    v13 = *(_DWORD *)(v8 + 64);
    v14 = *(_DWORD *)(v8 + 48);
    v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 96));
    FishPoolComp::tryGrantFishReward(this, v15, v14, v13, is_grant_reward, fishing_output_result, reason);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
    fish_config_ptr = data::FishExcelConfigMgrBase::findFishExcelConfig(
                        &v16->design_config.txt_config_mgr.fish_config_mgr,
                        *(_DWORD *)(v8 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v34);
    if ( fish_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->compound_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fish_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_config_ptr->compound_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( fish_config_ptr->compound_id )
      {
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 96));
        CookComp = Player::getCookComp(v17);
        if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->compound_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)fish_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_config_ptr->compound_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PlayerCookComp::unlockCompoundId(CookComp, fish_config_ptr->compound_id);
      }
    }
    v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 96));
    owner_uid = Player::getUid(v19);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v8 + 128));
    if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v8 + 128)) )
    {
      v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 128));
      owner_uid = Scene::getOwnerUid(v20);
    }
    v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 96));
    *(_BYTE *)(v8 + 32) = owner_uid != Player::getUid(v21);
    v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 96));
    EventComp = Player::getEventComp(v22);
    common::tools::perf::make_shared<FishingSuccEvent,unsigned int &,unsigned int &,bool &,bool &,unsigned int &>(
      (unsigned int *)&__r,
      (unsigned int *)(v8 + 48),
      (bool *)(v8 + 64),
      is_grant_reward,
      (unsigned int *)(v8 + 32),
      (unsigned int *)(v8 + 80),
      v36,
      (bool *)fishing_output_result,
      is_grant_reward,
      v30);
    std::shared_ptr<BaseEvent>::shared_ptr<FishingSuccEvent,void>((std::shared_ptr<BaseEvent> *const)&v34, &__r);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v34);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v34);
    std::shared_ptr<FishingSuccEvent>::~shared_ptr(&__r);
    if ( FishPoolComp::isFishPoolEmpty(this) && *(_BYTE *)(v8 + 32) != 1 )
    {
      v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 96));
      v26 = Player::getEventComp(v25);
      common::tools::perf::make_shared<FishingEmptyPoolEvent,unsigned int &>(
        (unsigned int *)&__r,
        (unsigned int *)(v8 + 48));
      std::shared_ptr<BaseEvent>::shared_ptr<FishingEmptyPoolEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v34,
        (std::shared_ptr<FishingEmptyPoolEvent> *)&__r);
      PlayerEventComp::notifyEvent(v26, (BaseEventPtr *)&v34);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v34);
      std::shared_ptr<FishingEmptyPoolEvent>::~shared_ptr((std::shared_ptr<FishingEmptyPoolEvent> *const)&__r);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Gadget::setState(this->gadget_, 0xCAu, 0, 1);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v8 + 128));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v8 + 96));
  if ( v27 == (unsigned int *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1786: range 0000000013154FEC-00000000131550BA
bool __cdecl FishPoolComp::isFishPoolEmpty(FishPoolComp *const this)
{
  std::map<unsigned int,FishStock>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,FishStock>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,FishStock> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,FishStock> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,FishStock> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,FishStock> >::type *stock; // [rsp+38h] [rbp-8h]

  if ( !std::map<unsigned int,unsigned int>::empty(&this->cached_fish_map_) )
    return 0;
  __for_range = &this->fish_stock_map_;
  __for_begin._M_node = std::map<unsigned int,FishStock>::begin(&this->fish_stock_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FishStock>::end(&this->fish_stock_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,FishStock>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,FishStock>(__in);
    stock = std::get<1ul,unsigned int const,FishStock>(__in);
    if ( !FishStock::isEmpty(stock) )
      return 0;
    std::_Rb_tree_iterator<std::pair<unsigned int const,FishStock>>::operator++(&__for_begin);
  }
  return 1;
};

// Line 1802: range 00000000131550BC-0000000013156701
void __fastcall FishPoolComp::tryGrantFishReward(
        FishPoolComp *const this,
        Player *player,
        uint32_t fish_pool_id,
        uint32_t fish_id,
        unsigned __int64 is_grant_reward,
        FishPoolComp::FishingOutputResult *fishing_output_result,
        proto::FishBattleEndRsp::FishNoRewardReason *no_reward_reason)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int>::const_iterator v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<MoonfinTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  PlayerItemComp *ItemComp; // rcx
  char v30; // al
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v36; // rdx
  PlayerItemComp *v37; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  char v46; // r14
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  PlayerFishingComp *FishingComp; // rax
  PlayerItemComp *v53; // rax
  std::vector<ItemParam> *v54; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v55; // rdx
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  ItemParam *v63; // r15
  ItemParam *v64; // r14
  PlayerItemComp *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  const PlayerItemComp *v71; // [rsp+10h] [rbp-290h]
  const unsigned int *M_current; // [rsp+18h] [rbp-288h]
  char v73; // [rsp+18h] [rbp-288h]
  const unsigned int *__lasta; // [rsp+20h] [rbp-280h]
  const unsigned int *__lastb; // [rsp+20h] [rbp-280h]
  char __last; // [rsp+20h] [rbp-280h]
  std::allocator<unsigned int> __a; // [rsp+5Fh] [rbp-241h] BYREF
  unsigned int val; // [rsp+60h] [rbp-240h] BYREF
  uint32_t now; // [rsp+64h] [rbp-23Ch]
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+68h] [rbp-238h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+70h] [rbp-230h] BYREF
  __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > __i; // [rsp+78h] [rbp-228h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+80h] [rbp-220h] BYREF
  const data::FishPoolExcelConfig *pool_config_ptr; // [rsp+88h] [rbp-218h]
  const data::FishExcelConfig *fish_config_ptr; // [rsp+90h] [rbp-210h]
  std::vector<unsigned int> *__for_range; // [rsp+98h] [rbp-208h]
  std::vector<unsigned int> *__for_range_0; // [rsp+A0h] [rbp-200h]
  std::vector<ItemParam> *drop_item_vec; // [rsp+A8h] [rbp-1F8h]
  common::milog::MiLogStream v93; // [rsp+B0h] [rbp-1F0h] BYREF
  char v94[464]; // [rsp+D0h] [rbp-1D0h] BYREF

  v7 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(416LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "9 48 4 12 drop_id:1884 64 4 17 fish_pool_id:1801 80 4 12 fish_id:1801 96 8 18 output_result:1891"
                        " 128 16 25 moonfin_activity_ptr:1836 160 24 11 reason:1845 224 24 16 drop_id_vec:1852 288 24 13 "
                        "item_vec:1865 352 24 25 temp_reward_item_vec:1875";
  *(_QWORD *)(v7 + 16) = FishPoolComp::tryGrantFishReward;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862723] = -218959360;
  v9[536862724] = -219021312;
  v9[536862725] = -234881024;
  v9[536862726] = -218959118;
  v9[536862727] = -234881024;
  v9[536862728] = -218959118;
  v9[536862729] = -234881024;
  v9[536862730] = -218959118;
  v9[536862731] = -218103808;
  v9[536862732] = -202116109;
  *(_DWORD *)(v7 + 64) = fish_pool_id;
  *(_DWORD *)(v7 + 80) = fish_id;
  if ( *(_BYTE *)((is_grant_reward >> 3) + 0x7FFF8000) != 0
    && (char)(is_grant_reward & 7) >= *(_BYTE *)((is_grant_reward >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(is_grant_reward);
  }
  *(_BYTE *)is_grant_reward = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v7 + 128));
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 128));
  pool_config_ptr = data::FishExcelConfigMgrBase::findFishPoolExcelConfig(
                      &v10->design_config.txt_config_mgr.fish_config_mgr,
                      *(_DWORD *)(v7 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 128));
  if ( !pool_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/fish_pool_comp.cpp",
      "tryGrantFishReward",
      1808);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v93, (const char (*)[14])"fish_pool_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v7 + 64));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v12, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream(&v93);
    goto LABEL_90;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v7 + 128));
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 128));
  fish_config_ptr = data::FishExcelConfigMgrBase::findFishExcelConfig(
                      &v13->design_config.txt_config_mgr.fish_config_mgr,
                      *(_DWORD *)(v7 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 128));
  if ( !fish_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/fish_pool_comp.cpp",
      "tryGrantFishReward",
      1815);
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v93, (const char (*)[9])"fish_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v7 + 80));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream(&v93);
    goto LABEL_90;
  }
  now = common::tools::TimeUtils::getNow();
  FishPoolComp::refreshDailyOutput(this, now, 0);
  *(std::vector<unsigned int>::const_iterator *)(v7 + 96) = std::vector<unsigned int>::end(&pool_config_ptr->exclude_fish);
  __lasta = std::vector<unsigned int>::end(&pool_config_ptr->exclude_fish)._M_current;
  v16._M_current = std::vector<unsigned int>::begin(&pool_config_ptr->exclude_fish)._M_current;
  __for_begin._M_current = (unsigned int *)std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                             v16,
                                             (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__lasta,
                                             (const unsigned int *)(v7 + 80))._M_current;
  if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
         (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
         (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v7 + 96)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&pool_config_ptr->daily_limit_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&pool_config_ptr->daily_limit_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( pool_config_ptr->daily_limit_num )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( this->today_fish_output_num_ >= pool_config_ptr->daily_limit_num )
      {
        common::milog::MiLogStream::create(
          &v93,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/fish_pool_comp.cpp",
          "tryGrantFishReward",
          1827);
        v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v93, (const char (*)[14])"fish_pool_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v7 + 64));
        v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" fish_id:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v7 + 80));
        v21 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v20,
                (const char (*)[18])" has reach limit:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &pool_config_ptr->daily_limit_num);
        common::milog::MiLogStream::~MiLogStream(&v93);
        if ( *(_BYTE *)(((unsigned __int64)no_reward_reason >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)no_reward_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)no_reward_reason >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_store4(no_reward_reason);
        }
        *no_reward_reason = FishBattleEndRsp_FishNoRewardReason_FISH_NO_REWARD_POOL_LIMIT;
        goto LABEL_90;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++this->today_fish_output_num_;
    FishPoolComp::notifyFishPoolData(this);
  }
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<MoonfinTrialActivity>((PlayerActivityComp *const)(v7 + 128));
  if ( std::operator!=<MoonfinTrialActivity>(0LL, (const std::shared_ptr<MoonfinTrialActivity> *)(v7 + 128))
    && (v22 = std::__shared_ptr_access<MoonfinTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MoonfinTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 128)),
        !MoonfinTrialActivity::isCanGetFish(v22, *(_DWORD *)(v7 + 80))) )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/fish_pool_comp.cpp",
      "tryGrantFishReward",
      1839);
    v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v93, (const char (*)[14])"fish_pool_id:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v7 + 64));
    v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])" fish_id:");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v7 + 80));
    v28 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            v27,
            (const char (*)[40])" moonfin_activity refuse get fish, uid:");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
    common::milog::MiLogStream::~MiLogStream(&v93);
    if ( *(_BYTE *)(((unsigned __int64)no_reward_reason >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)no_reward_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)no_reward_reason >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_store4(no_reward_reason);
    }
    *no_reward_reason = FishBattleEndRsp_FishNoRewardReason_FISH_NO_REWARD_ACTIVITY_LIMIT;
  }
  else
  {
    ActionReason::ActionReason((ActionReason *const)(v7 + 160), ACTION_REASON_FISH_SUCC, ITEM_LIMIT_FISH_REWARD);
    if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&fish_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !fish_config_ptr->reward_id )
      goto LABEL_38;
    ItemComp = Player::getItemComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&fish_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( PlayerItemComp::checkGrantReward(ItemComp, fish_config_ptr->reward_id, (const ActionReason *)(v7 + 160)) )
      v30 = 1;
    else
LABEL_38:
      v30 = 0;
    if ( v30 )
    {
      common::milog::MiLogStream::create(
        &v93,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/fish_pool_comp.cpp",
        "tryGrantFishReward",
        1848);
      v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v93, (const char (*)[9])"fish_id:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v7 + 80));
      v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v32, (const char (*)[12])" reward_id:");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &fish_config_ptr->reward_id);
      v35 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v34,
              (const char (*)[33])" check grant reward failed, uid:");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
      common::milog::MiLogStream::~MiLogStream(&v93);
      if ( *(_BYTE *)(((unsigned __int64)no_reward_reason >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)no_reward_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)no_reward_reason >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_store4(no_reward_reason);
      }
      *no_reward_reason = FishBattleEndRsp_FishNoRewardReason_FISH_NO_REWARD_BAG_LIMIT;
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v7 + 224), &fish_config_ptr->drop_id_list);
      M_current = std::vector<unsigned int>::end(&pool_config_ptr->drop_id_list)._M_current;
      __lastb = std::vector<unsigned int>::begin(&pool_config_ptr->drop_id_list)._M_current;
      __for_begin._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v7 + 224))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v7 + 96),
        &__for_begin);
      std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
        (std::vector<unsigned int> *const)(v7 + 224),
        *(std::vector<unsigned int>::const_iterator *)(v7 + 96),
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__lastb,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
      __for_range = (std::vector<unsigned int> *)(v7 + 224);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v7 + 224))._M_current;
      *(std::vector<unsigned int>::iterator *)(v7 + 96) = std::vector<unsigned int>::end(__for_range);
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                &__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v7 + 96)) )
      {
        v36 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v7 + 48) = *v36;
        if ( *(_DWORD *)(v7 + 48) )
        {
          v37 = Player::getItemComp(player);
          if ( PlayerItemComp::checkFrontLooseGrantDropItems(
                 v37,
                 *(_DWORD *)(v7 + 48),
                 1u,
                 (const ActionReason *)(v7 + 160),
                 0LL) )
          {
            common::milog::MiLogStream::create(
              &v93,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/gadget/fish_pool_comp.cpp",
              "tryGrantFishReward",
              1858);
            v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    &v93,
                    (const char (*)[14])"fish_pool_id:");
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v7 + 64));
            v41 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v40, (const char (*)[10])" fish_id:");
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v41,
                    (const unsigned int *)(v7 + 80));
            v43 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v42, (const char (*)[10])" drop_id:");
            v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v43,
                    (const unsigned int *)(v7 + 48));
            v45 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    v44,
                    (const char (*)[31])" check grant drop failed, uid:");
            val = Player::getUid(player);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &val);
            common::milog::MiLogStream::~MiLogStream(&v93);
            if ( *(_BYTE *)(((unsigned __int64)no_reward_reason >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)no_reward_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)no_reward_reason >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_store4(no_reward_reason);
            }
            *no_reward_reason = FishBattleEndRsp_FishNoRewardReason_FISH_NO_REWARD_BAG_LIMIT;
            goto LABEL_88;
          }
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v7 + 288));
      __last = 0;
      v73 = 0;
      if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&fish_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( !fish_config_ptr->reward_id )
        goto LABEL_63;
      v71 = Player::getItemComp(player);
      if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&fish_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      val = fish_config_ptr->reward_id;
      std::allocator<unsigned int>::allocator(&__a);
      __last = 1;
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v7 + 352),
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
        &__a);
      v73 = 1;
      if ( PlayerItemComp::getItemParamVecByRewardIdVec(
             v71,
             (const std::vector<unsigned int> *)(v7 + 352),
             (std::vector<ItemParam> *)(v7 + 288)) )
      {
        v46 = 1;
      }
      else
      {
LABEL_63:
        v46 = 0;
      }
      if ( v73 )
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v7 + 352));
      if ( __last )
        std::allocator<unsigned int>::~allocator(&__a);
      if ( v46 )
      {
        common::milog::MiLogStream::create(
          &v93,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/fish_pool_comp.cpp",
          "tryGrantFishReward",
          1868);
        v47 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v93, (const char (*)[9])"fish_id:");
        v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v47,
                (const unsigned int *)(v7 + 80));
        v49 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v48, (const char (*)[12])" reward_id:");
        v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &fish_config_ptr->reward_id);
        v51 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v50,
                (const char (*)[20])" grant failed, uid:");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &val);
        common::milog::MiLogStream::~MiLogStream(&v93);
      }
      std::vector<ItemParam>::operator=(
        &fishing_output_result->reward_item_vec,
        (const std::vector<ItemParam> *)(v7 + 288));
      if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v7 + 288)) )
      {
        std::vector<ItemParam>::vector(
          (std::vector<ItemParam> *const)(v7 + 352),
          (const std::vector<ItemParam> *)(v7 + 288));
        FishingComp = Player::getFishingComp(player);
        PlayerFishingComp::modifyRewardItemByTalent(
          FishingComp,
          *(_DWORD *)(v7 + 64),
          (std::vector<ItemParam> *)(v7 + 288),
          &fishing_output_result->talent_item_vec);
        v53 = Player::getItemComp(player);
        if ( PlayerItemComp::checkAddItemBatch(
               v53,
               (const std::vector<ItemParam> *)(v7 + 288),
               (const ActionReason *)(v7 + 160)) )
        {
          v54 = std::move<std::vector<ItemParam> &>((std::vector<ItemParam> *)(v7 + 352));
          std::vector<ItemParam>::operator=((std::vector<ItemParam> *const)(v7 + 288), v54);
          std::vector<ItemParam>::clear(&fishing_output_result->talent_item_vec);
        }
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v7 + 352));
      }
      __for_range_0 = (std::vector<unsigned int> *)(v7 + 224);
      __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v7 + 224))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end) )
      {
        v55 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v55 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v7 + 48) = *v55;
        if ( *(_DWORD *)(v7 + 48) )
        {
          drop_item_vec = &fishing_output_result->drop_item_vec;
          *(OutputResult *)(v7 + 96) = DropUtils::dropItems(
                                         player,
                                         *(_DWORD *)(v7 + 48),
                                         1u,
                                         (const ActionReason *)(v7 + 160),
                                         &fishing_output_result->drop_item_vec);
          if ( *(_DWORD *)(v7 + 96) )
          {
            common::milog::MiLogStream::create(
              &v93,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/fish_pool_comp.cpp",
              "tryGrantFishReward",
              1894);
            v56 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    &v93,
                    (const char (*)[14])"fish_pool_id:");
            v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v56,
                    (const unsigned int *)(v7 + 64));
            v58 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v57, (const char (*)[10])" fish_id:");
            v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v58,
                    (const unsigned int *)(v7 + 80));
            v60 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v59, (const char (*)[10])" drop_id:");
            v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v60,
                    (const unsigned int *)(v7 + 48));
            v62 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v61,
                    (const char (*)[20])" grant failed, uid:");
            val = Player::getUid(player);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &val);
            common::milog::MiLogStream::~MiLogStream(&v93);
          }
          else
          {
            v63 = std::vector<ItemParam>::end(drop_item_vec)._M_current;
            v64 = std::vector<ItemParam>::begin(drop_item_vec)._M_current;
            __i._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v7 + 288))._M_current;
            __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
              (__gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__for_begin,
              &__i);
            std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
              (std::vector<ItemParam> *const)(v7 + 288),
              (std::vector<ItemParam>::const_iterator)__for_begin._M_current,
              (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)v64,
              (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)v63);
          }
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
      v65 = Player::getItemComp(player);
      if ( PlayerItemComp::addItemBatch(
             v65,
             (const std::vector<ItemParam> *)(v7 + 288),
             (const ActionReason *)(v7 + 160),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v93,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/fish_pool_comp.cpp",
          "tryGrantFishReward",
          1901);
        v66 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v93, (const char (*)[14])"fish_pool_id:");
        v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v66,
                (const unsigned int *)(v7 + 64));
        v68 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v67, (const char (*)[10])" fish_id:");
        v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v68,
                (const unsigned int *)(v7 + 80));
        v70 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                v69,
                (const char (*)[29])" add item batch failed, uid:");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &val);
        common::milog::MiLogStream::~MiLogStream(&v93);
      }
      if ( *(_BYTE *)((is_grant_reward >> 3) + 0x7FFF8000) != 0
        && (char)(is_grant_reward & 7) >= *(_BYTE *)((is_grant_reward >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_grant_reward);
      }
      *(_BYTE *)is_grant_reward = 1;
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v7 + 288));
LABEL_88:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v7 + 224));
    }
  }
  std::shared_ptr<MoonfinTrialActivity>::~shared_ptr((std::shared_ptr<MoonfinTrialActivity> *const)(v7 + 128));
LABEL_90:
  if ( v94 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 1908: range 0000000013156702-000000001315698A
void __cdecl FishPoolComp::notifyFishPoolData(FishPoolComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t EntityId; // eax
  Scene *v5; // rax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 scene_ptr:1912 64 32 11 notify:1909";
  *(_QWORD *)(v1 + 16) = FishPoolComp::notifyFishPoolData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -202116109;
  proto::FishPoolDataNotify::FishPoolDataNotify((proto::FishPoolDataNotify *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
  proto::FishPoolDataNotify::set_entity_id((proto::FishPoolDataNotify *const)(v1 + 64), EntityId);
  if ( *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FishPoolDataNotify::set_today_fish_num(
    (proto::FishPoolDataNotify *const)(v1 + 64),
    this->today_fish_output_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Scene::notifyAllPlayer<proto::FishPoolDataNotify>(v5, (proto::FishPoolDataNotify *)(v1 + 64), 0);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  proto::FishPoolDataNotify::~FishPoolDataNotify((proto::FishPoolDataNotify *const)(v1 + 64));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1921: range 000000001315698C-0000000013156B77
void __cdecl FishPoolComp::refreshDailyOutput(FishPoolComp *const this, uint32_t now, bool is_notify)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  time_t v4; // rdx
  uint32_t old_num; // [rsp+18h] [rbp-18h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  old_num = this->today_fish_output_num_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v3->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  v4 = time_offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_fish_output_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_fish_output_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !common::tools::TimeUtils::isSameDay(now, this->last_fish_output_refresh_time_, v4) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->today_fish_output_num_);
    }
    this->today_fish_output_num_ = 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_fish_output_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_fish_output_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_fish_output_refresh_time_);
  }
  this->last_fish_output_refresh_time_ = now;
  if ( is_notify )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( old_num != this->today_fish_output_num_ )
      FishPoolComp::notifyFishPoolData(this);
  }
};

// Line 1937: range 0000000013156B78-00000000131573D1
void __cdecl FishPoolComp::failFishing(
        FishPoolComp *const this,
        Angler *angler,
        bool is_notify,
        proto::FishBattleResult result)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  Monster *v7; // rdx
  Monster *v8; // rcx
  char v9; // al
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  uint32_t *p_uid; // rax
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t FishId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  int32_t *p_param1; // rax
  Group *v19; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t v21; // eax
  Scene *v22; // rax
  bool v23; // al
  Player *v24; // rax
  bool is_need_end; // [rsp+2Fh] [rbp-1D1h]
  char v28[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 16 15 player_ptr:1938 80 16 13 fish_ptr:1945 112 16 18 fish_comp_ptr:1957 144 16 12 evt_ptr"
                        ":1960 176 16 14 scene_ptr:1976 208 24 16 bait_notify:1974 272 112 8 rsp:1994";
  *(_QWORD *)(v4 + 16) = FishPoolComp::failFishing;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = -218959360;
  v6[536862728] = 62194;
  v6[536862732] = -202116109;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v4 + 48));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 48)) )
  {
    std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v4 + 80));
    if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v4 + 80)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( angler->state == FISH_STATE_QTE )
      {
        v7 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        FishPoolComp::failQTEFish(this, angler, v7);
      }
      else
      {
        v8 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        FishPoolComp::shockFish(this, v8, 1);
      }
      std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v4 + 112));
      if ( result != FISH_BATTLE_RESULT_TIMEOUT )
        goto LABEL_17;
      if ( *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( angler->state > FISH_STATE_CHOOSE
        && std::operator!=<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v4 + 112)) )
      {
        v9 = 1;
      }
      else
      {
LABEL_17:
        v9 = 0;
      }
      if ( v9 )
      {
        EventUtil::createEvent((data::EventType)(v4 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Entity::getGroup((const Entity *const)(v4 + 176));
        if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v4 + 144))
          && std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 176)) )
        {
          v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
          Uid = Player::getUid(v11);
          v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          p_uid = &v13->uid;
          if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_uid);
          }
          v13->uid = Uid;
          v15 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
          FishId = MonsterFishComp::getFishId(v15);
          v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          p_param1 = &v17->param1;
          if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_param1);
          }
          v17->param1 = FishId;
          v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
          Group::handleEvent(v19, (EventPtr *)(v4 + 144));
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 176));
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 144));
      }
      std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v4 + 112));
    }
    if ( *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( angler->state == FISH_STATE_CHOOSE )
    {
      proto::FishBaitGoneNotify::FishBaitGoneNotify((proto::FishBaitGoneNotify *const)(v4 + 208));
      v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      v21 = Player::getUid(v20);
      proto::FishBaitGoneNotify::set_uid((proto::FishBaitGoneNotify *const)(v4 + 208), v21);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getScene((const Entity *const)(v4 + 176));
      if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 176)) )
      {
        v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
        Scene::notifyAllPlayer<proto::FishBaitGoneNotify>(v22, (proto::FishBaitGoneNotify *)(v4 + 208), 0);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 176));
      proto::FishBaitGoneNotify::~FishBaitGoneNotify((proto::FishBaitGoneNotify *const)(v4 + 208));
    }
    if ( *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&angler->state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v23 = angler->state > FISH_STATE_NONE && angler->state != FISH_STATE_END;
    is_need_end = v23;
    std::__weak_ptr<Monster,(__gnu_cxx::_Lock_policy)2>::reset(&angler->fish_wtr);
    Angler::setState(angler, FISH_STATE_END, 0);
    if ( is_notify && is_need_end )
    {
      proto::FishBattleEndRsp::FishBattleEndRsp((proto::FishBattleEndRsp *const)(v4 + 272));
      proto::FishBattleEndRsp::set_battle_result((proto::FishBattleEndRsp *const)(v4 + 272), result);
      proto::FishBattleEndRsp::set_retcode((proto::FishBattleEndRsp *const)(v4 + 272), 0);
      v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      Player::sendProto(v24, (const google::protobuf::Message *)(v4 + 272));
      proto::FishBattleEndRsp::~FishBattleEndRsp((proto::FishBattleEndRsp *const)(v4 + 272));
    }
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 80));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 48));
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
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
};

// Line 2001: range 00000000131573D2-0000000013157666
void __cdecl FishPoolComp::failQTEFish(FishPoolComp *const this, Angler *angler, Monster *fish)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(Monster *, VisionContext *); // r15
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t fish_id; // [rsp+20h] [rbp-90h]
  uint32_t fish_pool_id; // [rsp+24h] [rbp-8Ch]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+28h] [rbp-88h]
  VisionContext v13; // [rsp+34h] [rbp-7Ch] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 fish_comp_ptr:2012";
  *(_QWORD *)(v3 + 16) = FishPoolComp::failQTEFish;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)fish >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)fish->baseclass_0 + 128LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  v7 = *(void (__fastcall **)(Monster *, VisionContext *))v6;
  VisionContext::VisionContext(&v13, VISION_FISH_BIG_SHOCK);
  v7(fish, &v13);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
  if ( gadget_script_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    fish_pool_id = gadget_script_config_ptr->fish_pool_id;
    fish_id = 0;
    EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v3 + 32));
    if ( std::operator!=<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v3 + 32)) )
    {
      v8 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      fish_id = MonsterFishComp::getFishId(v8);
    }
    FishPoolComp::logFishingQTEEnd(this, angler, fish_pool_id, fish_id, 2u);
    std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v3 + 32));
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2021: range 0000000013157668-0000000013157A6C
void __cdecl FishPoolComp::shockFish(FishPoolComp *const this, Monster *monster, bool is_notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  uint32_t Now; // eax
  uint32_t EntityId; // eax
  const Vector3 *Position; // rax
  proto::Vector *v10; // rax
  Scene *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  unsigned int val; // [rsp+2Ch] [rbp-114h] BYREF
  proto::Vector from; // [rsp+30h] [rbp-110h] BYREF
  char v17[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 18 fish_comp_ptr:2022 64 16 14 scene_ptr:2032 96 64 18 escape_notify:2037";
  *(_QWORD *)(v3 + 16) = FishPoolComp::shockFish;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862725] = -202116109;
  EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v3 + 32));
  if ( !std::operator==<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Now = common::tools::TimeUtils::getNow();
    MonsterFishComp::setLastShockTime(v6, Now);
    if ( is_notify )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getScene((const Entity *const)(v3 + 64));
      if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
      {
        proto::FishEscapeNotify::FishEscapeNotify((proto::FishEscapeNotify *const)(v3 + 96));
        EntityId = Entity::getEntityId((const Entity *const)monster);
        proto::FishEscapeNotify::add_fish_id_list((proto::FishEscapeNotify *const)(v3 + 96), EntityId);
        Position = Entity::getPosition((const Entity *const)monster);
        Vector3::operator proto::Vector(&from, Position);
        v10 = proto::FishEscapeNotify::mutable_pos((proto::FishEscapeNotify *const)(v3 + 96));
        proto::Vector::operator=(v10, &from);
        proto::Vector::~Vector(&from);
        proto::FishEscapeNotify::set_reason((proto::FishEscapeNotify *const)(v3 + 96), FISH_ESCAPE_SHOCKED);
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Scene::notifyAllPlayer<proto::FishEscapeNotify>(v11, (proto::FishEscapeNotify *)(v3 + 96), 0);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&from,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/fish_pool_comp.cpp",
          "shockFish",
          2042);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)&from,
                (const char (*)[16])"fish_entity_id:");
        val = Entity::getEntityId((const Entity *const)monster);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" escape");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&from);
        proto::FishEscapeNotify::~FishEscapeNotify((proto::FishEscapeNotify *const)(v3 + 96));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
    }
  }
  std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v3 + 32));
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2046: range 0000000013157A6E-0000000013158056
void __fastcall FishPoolComp::genFishByGm(
        FishPoolComp *const this,
        std::map<unsigned int,unsigned int> *gen_fish_map,
        uint32_t pool_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t v6; // r14d
  uint32_t Now; // eax
  std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::map<unsigned int,std::weak_ptr<Monster>>::key_type __x; // [rsp+2Ch] [rbp-114h] BYREF
  uint32_t idx; // [rsp+30h] [rbp-110h]
  uint32_t max_gen_num; // [rsp+34h] [rbp-10Ch]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > >::_Self __y; // [rsp+38h] [rbp-108h] BYREF
  VisionContext v24; // [rsp+44h] [rbp-FCh] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 12 fish_id:2069 48 4 12 pool_id:2045 64 8 9 iter:2052 96 16 13 fish_ptr:2057 128 16 18 fi"
                        "sh_comp_ptr:2063";
  *(_QWORD *)(v3 + 16) = FishPoolComp::genFishByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = pool_id;
  max_gen_num = 100;
  for ( idx = 0; idx < max_gen_num; ++idx )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_fish_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_refresh_fish_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_refresh_fish_time_);
    }
    this->last_refresh_fish_time_ = 0;
    v6 = *(_DWORD *)(v3 + 48);
    Now = common::tools::TimeUtils::getNow();
    FishPoolComp::refreshFish(this, Now, v6);
    *(std::map<unsigned int,std::weak_ptr<Monster>>::iterator *)(v3 + 64) = std::map<unsigned int,std::weak_ptr<Monster>>::begin(&this->fish_wtr_map_);
    __y._M_node = std::map<unsigned int,std::weak_ptr<Monster>>::end(&this->fish_wtr_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > >::_Self *)(v3 + 64),
           &__y) )
    {
      break;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > > *const)(v3 + 64));
    std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v3 + 96));
    if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v3 + 96)) )
    {
      std::map<unsigned int,std::weak_ptr<Monster>>::erase[abi:cxx11](
        &this->fish_wtr_map_,
        *(std::map<unsigned int,std::weak_ptr<Monster>>::iterator *)(v3 + 64));
    }
    else
    {
      std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v3 + 128));
      if ( std::operator==<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v3 + 128)) )
      {
        std::map<unsigned int,std::weak_ptr<Monster>>::erase[abi:cxx11](
          &this->fish_wtr_map_,
          *(std::map<unsigned int,std::weak_ptr<Monster>>::iterator *)(v3 + 64));
      }
      else
      {
        v8 = std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterFishComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        *(_DWORD *)(v3 + 32) = MonsterFishComp::getFishId(v8);
        v9 = std::map<unsigned int,unsigned int>::operator[](
               &this->cached_fish_map_,
               (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *v9 > 1 )
        {
          v10 = std::map<unsigned int,unsigned int>::operator[](
                  &this->cached_fish_map_,
                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          --*v10;
        }
        else
        {
          std::map<unsigned int,unsigned int>::erase(
            &this->cached_fish_map_,
            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
        }
        v11 = std::map<unsigned int,unsigned int>::operator[](
                gen_fish_map,
                (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ++*v11;
        v12 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v13 = *(_QWORD *)v12->baseclass_0 + 128LL;
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8();
        v14 = *(void (__fastcall **)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v13;
        VisionContext::VisionContext(&v24, VISION_FISH_QTE_SUCC);
        v14(v12, &v24);
        v15 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        __x = Entity::getEntityId((const Entity *const)v15);
        std::map<unsigned int,std::weak_ptr<Monster>>::erase(&this->fish_wtr_map_, &__x);
      }
      std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v3 + 128));
    }
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 96));
  }
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/fish_pool_comp.cpp",
    "genFishByGm",
    2082);
  v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v25,
          (const char (*)[21])"GenFishByGm pool_id:");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
  v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" gen fish:");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v18, gen_fish_map);
  common::milog::MiLogStream::~MiLogStream(&v25);
  if ( v26 == (char *)v3 )
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
};

// Line 2086: range 0000000013158058-0000000013158D00
void __fastcall FishPoolComp::castRodByGm(FishPoolComp *const this, uint32_t uid, uint32_t bait_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  Player *v20; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  char v25; // r15
  bool v26; // r14
  uint32_t Now; // eax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  Angler *v32; // rax
  const Vector3 *Position; // r14
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *n; // rax
  uint32_t v35; // r14d
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t EntityId; // eax
  Player *v40; // rax
  unsigned int val; // [rsp+24h] [rbp-19Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self __y; // [rsp+28h] [rbp-198h] BYREF
  common::milog::MiLogStream v44; // [rsp+30h] [rbp-190h] BYREF
  char v45[368]; // [rsp+50h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 8 uid:2085 48 4 12 bait_id:2085 64 8 9 iter:2087 96 8 14 fish_iter:2118 128 16 15 angler_"
                        "ptr:2093 160 16 15 player_ptr:2104 192 16 10 param:2110 224 16 13 fish_ptr:2134 256 24 18 chosen_notify:2145";
  *(_QWORD *)(v3 + 16) = FishPoolComp::castRodByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 32) = uid;
  *(_DWORD *)(v3 + 48) = bait_id;
  *(std::map<unsigned int,std::shared_ptr<Angler>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Angler>>::find(
                                                                             &this->angler_map_,
                                                                             (const std::map<unsigned int,std::shared_ptr<Angler>>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Angler>>::end(&this->angler_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/fish_pool_comp.cpp",
      "castRodByGm",
      2090);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v44, (const char (*)[6])"uid: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" not in fishing");
    common::milog::MiLogStream::~MiLogStream(&v44);
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Angler> > > *const)(v3 + 64));
    std::shared_ptr<Angler>::shared_ptr((std::shared_ptr<Angler> *const)(v3 + 128), &v8->second);
    if ( std::operator==<Angler>(0LL, (const std::shared_ptr<Angler> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/fish_pool_comp.cpp",
        "castRodByGm",
        2096);
      v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v44, (const char (*)[5])"uid=");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])" angler ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    else
    {
      v11 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v11->state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v11->state == FISH_STATE_NONE )
        goto LABEL_15;
      v12 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v12->state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v12->state == FISH_STATE_END )
LABEL_15:
        v13 = 0;
      else
        v13 = 1;
      if ( v13 )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/fish_pool_comp.cpp",
          "castRodByGm",
          2101);
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v44, (const char (*)[6])"uid: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 32));
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" fish status=");
        v17 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&v17->state >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v17->state >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        val = v17->state;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
      else
      {
        std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 160));
        if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/fish_pool_comp.cpp",
            "castRodByGm",
            2107);
          v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v44, (const char (*)[5])"uid:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v19,
            (const char (*)[20])" player_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        else
        {
          *(_QWORD *)(v3 + 192) = 0LL;
          *(_QWORD *)(v3 + 200) = 0LL;
          *(_DWORD *)(v3 + 196) = 1;
          *(_DWORD *)(v3 + 192) = *(_DWORD *)(v3 + 48);
          v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          ItemComp = Player::getItemComp(v20);
          if ( PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 192)) )
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/fish_pool_comp.cpp",
              "castRodByGm",
              2113);
            v22 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v44, (const char (*)[5])"uid:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v3 + 32));
            v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v23,
                    (const char (*)[12])" lack item:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v44);
          }
          else
          {
            *(std::map<unsigned int,std::weak_ptr<Monster>>::iterator *)(v3 + 96) = std::map<unsigned int,std::weak_ptr<Monster>>::begin(&this->fish_wtr_map_);
            v25 = 0;
            __y._M_node = std::map<unsigned int,std::weak_ptr<Monster>>::end(&this->fish_wtr_map_)._M_node;
            v26 = 1;
            if ( !std::operator==(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > >::_Self *)(v3 + 96),
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > >::_Self *)&__y) )
            {
              std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > > *const)(v3 + 96));
              std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v3 + 224));
              v25 = 1;
              if ( !std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v3 + 224)) )
                v26 = 0;
            }
            if ( v25 )
              std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 224));
            if ( v26 )
            {
              std::map<unsigned int,FishStock>::clear(&this->fish_stock_map_);
              std::map<unsigned int,unsigned int>::clear(&this->cached_fish_map_);
              std::map<unsigned int,std::weak_ptr<Monster>>::clear(&this->fish_wtr_map_);
              Now = common::tools::TimeUtils::getNow();
              FishPoolComp::refreshFish(this, Now, 0);
            }
            *(std::map<unsigned int,std::weak_ptr<Monster>>::iterator *)(v3 + 96) = std::map<unsigned int,std::weak_ptr<Monster>>::begin(&this->fish_wtr_map_);
            __y._M_node = std::map<unsigned int,std::weak_ptr<Monster>>::end(&this->fish_wtr_map_)._M_node;
            if ( std::operator==(
                   (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > >::_Self *)(v3 + 96),
                   (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > >::_Self *)&__y) )
            {
              common::milog::MiLogStream::create(
                &v44,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/gadget/fish_pool_comp.cpp",
                "castRodByGm",
                2131);
              v28 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v44, (const char (*)[5])"uid:");
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v28,
                      (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v29, (const char (*)[13])off_24F45CA0);
              common::milog::MiLogStream::~MiLogStream(&v44);
            }
            else
            {
              std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<Monster> > > *const)(v3 + 96));
              std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v3 + 224));
              if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v3 + 224)) )
              {
                common::milog::MiLogStream::create(
                  &v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/gadget/fish_pool_comp.cpp",
                  "castRodByGm",
                  2137);
                v30 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v44, (const char (*)[5])"uid:");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v31,
                  (const char (*)[14])" fish is null");
                common::milog::MiLogStream::~MiLogStream(&v44);
              }
              else
              {
                v32 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                Angler::setState(v32, FISH_STATE_CHOOSE, 0);
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Position = Entity::getPosition((const Entity *const)this->gadget_);
                n = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                if ( *(char *)(((unsigned __int64)&n->fishing_pos >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)((((unsigned __int64)&n->fishing_pos.z + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)n + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&n->fishing_pos.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
                {
                  n = (std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&n->fishing_pos, 12LL);
                }
                if ( ((unsigned __int8)Position & 7) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)Position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3)
                                                                        + 0x7FFF8000) )
                {
                  n = (std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load_n(Position, 12LL);
                }
                *(_QWORD *)&n->fishing_pos.x = *(_QWORD *)&Position->x;
                n->fishing_pos.z = Position->z;
                v35 = *(_DWORD *)(v3 + 48);
                v36 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v36->fish_bait >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v36->fish_bait >> 3) + 0x7FFF8000) <= 3 )
                {
                  v36 = (std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v36->fish_bait);
                }
                v36->fish_bait = v35;
                v37 = std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Angler,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                std::weak_ptr<Monster>::operator=<Monster>(&v37->fish_wtr, (const std::shared_ptr<Monster> *)(v3 + 224));
                proto::FishChosenNotify::FishChosenNotify((proto::FishChosenNotify *const)(v3 + 256));
                v38 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                EntityId = Entity::getEntityId((const Entity *const)v38);
                proto::FishChosenNotify::set_fish_id((proto::FishChosenNotify *const)(v3 + 256), EntityId);
                v40 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                Player::sendProto(v40, (const google::protobuf::Message *)(v3 + 256));
                proto::FishChosenNotify::~FishChosenNotify((proto::FishChosenNotify *const)(v3 + 256));
              }
              std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 224));
            }
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
      }
    }
    std::shared_ptr<Angler>::~shared_ptr((std::shared_ptr<Angler> *const)(v3 + 128));
  }
  if ( v45 == (char *)v3 )
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
};
