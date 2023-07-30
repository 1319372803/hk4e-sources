// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/pile_value.cpp

// Line 17: range 00000000130CE3CE-00000000130CE5CF
void __cdecl PileValue::PileValue(
        PileValue *const this,
        float init_val,
        data::StackMethod stack_method,
        float floor,
        float ceiling)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->value_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->floor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->floor_);
  }
  this->floor_ = floor;
  if ( *(_BYTE *)(((unsigned __int64)&this->ceiling_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ceiling_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ceiling_);
  }
  this->ceiling_ = ceiling;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_min_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_min_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_min_);
  }
  this->limit_min_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_max_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_max_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_max_);
  }
  this->limit_max_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stack_method_);
  }
  this->stack_method_ = stack_method;
  std::map<unsigned int,std::pair<float,bool>>::map(&this->value_map_);
  PileValue::add(this, init_val, 0);
};

// Line 24: range 00000000130CE5D0-00000000130CE69D
void __cdecl PileValue::setLimit(PileValue *const this, float min, float max)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_min_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_min_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_min_);
  }
  this->limit_min_ = min;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_max_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_max_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_max_);
  }
  this->limit_max_ = max;
  if ( this->limit_min_ > this->limit_max_ )
    this->limit_min_ = this->limit_max_;
};

// Line 33: range 00000000130CE69E-00000000130CE95E
__int64 __fastcall PileValue::add(PileValue *const this, float val, char is_limited)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int *v6; // rcx
  std::pair<float,bool> *v7; // r8
  int *v8; // rcx
  std::pair<float,bool> *v9; // r8
  __int64 result; // rax
  std::map<unsigned int,std::pair<float,bool>>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::map<unsigned int,std::pair<float,bool>> *__for_range; // [rsp+18h] [rbp-B8h]
  std::pair<unsigned int const,std::pair<float,bool> > *__in; // [rsp+20h] [rbp-B0h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<float,bool> > >::type *idx; // [rsp+28h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int const,std::pair<float,bool> > >::type *p; // [rsp+30h] [rbp-A0h]
  std::map<unsigned int,std::pair<float,bool>>::iterator __for_end; // [rsp+38h] [rbp-98h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 13 is_limited:32 48 4 8 index:34 64 4 6 val:32";
  *(_QWORD *)(v3 + 16) = PileValue::add;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -202116348;
  *(float *)(v3 + 64) = val;
  *(_BYTE *)(v3 + 32) = is_limited;
  *(_DWORD *)(v3 + 48) = 0;
  if ( std::map<unsigned int,std::pair<float,bool>>::empty(&this->value_map_) )
  {
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool> > >::_Base_ptr)std::make_pair<float &,bool &>((float *)(v3 + 64), (bool *)(v3 + 32));
    std::map<unsigned int,std::pair<float,bool>>::emplace<int &,std::pair<float,bool>>(
      &this->value_map_,
      (int *)(v3 + 48),
      (std::pair<float,bool> *)&__for_end,
      v6,
      v7);
  }
  else
  {
    __for_range = &this->value_map_;
    __for_begin._M_node = std::map<unsigned int,std::pair<float,bool>>::begin(&this->value_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::pair<float,bool>>::end(&this->value_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool>>>::operator*(&__for_begin);
      idx = std::get<0ul,unsigned int const,std::pair<float,bool>>(__in);
      p = std::get<1ul,unsigned int const,std::pair<float,bool>>(__in);
      if ( *(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(idx);
      }
      if ( *idx != *(_DWORD *)(v3 + 48) )
        break;
      ++*(_DWORD *)(v3 + 48);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool>>>::operator++(&__for_begin);
    }
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool> > >::_Base_ptr)std::make_pair<float &,bool &>((float *)(v3 + 64), (bool *)(v3 + 32));
    std::map<unsigned int,std::pair<float,bool>>::emplace<int &,std::pair<float,bool>>(
      &this->value_map_,
      (int *)(v3 + 48),
      (std::pair<float,bool> *)&__for_end,
      v8,
      v9);
  }
  PileValue::updateValue(this);
  result = *(unsigned int *)(v3 + 48);
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
  return result;
};

// Line 55: range 00000000130CE960-00000000130CEAED
__int64 __fastcall PileValue::del(PileValue *const this, int32_t idx)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::map<unsigned int,std::pair<float,bool>>::key_type __x; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 idx:54";
  *(_QWORD *)(v2 + 16) = PileValue::del;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = idx;
  __x = *(_DWORD *)(v2 + 32);
  if ( std::map<unsigned int,std::pair<float,bool>>::erase(&this->value_map_, &__x) )
  {
    PileValue::updateValue(this);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/ability/pile_value.cpp",
      off_24F1A860,
      58);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])off_24F1A8E0);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v5, (const int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = 0xFFFFFFFFLL;
  }
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

// Line 67: range 00000000130CEAEE-00000000130CED16
float __fastcall PileValue::get(const PileValue *const this, int32_t idx)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  float result; // xmm0_4
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<float,bool> > >::pointer v7; // rdx
  std::pair<float,bool> *p_second; // rax
  std::map<unsigned int,std::pair<float,bool>>::key_type __x; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<float,bool> > >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 idx:66 64 8 5 it:68";
  *(_QWORD *)(v2 + 16) = PileValue::get;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = idx;
  __x = *(_DWORD *)(v2 + 48);
  *(std::map<unsigned int,std::pair<float,bool>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::pair<float,bool>>::find(
                                                                                 &this->value_map_,
                                                                                 &__x);
  __y._M_node = std::map<unsigned int,std::pair<float,bool>>::end(&this->value_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<float,bool> > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/ability/pile_value.cpp",
      off_24F1A940,
      71);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v11, (const char (*)[16])off_24F1A8E0);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v5, (const int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0.0;
  }
  else
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<float,bool>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<float,bool> > > *const)(v2 + 64));
    p_second = &v7->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v7->second.first;
  }
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

// Line 79: range 00000000130CED18-00000000130CED82
float __cdecl PileValue::getValue(const PileValue *const this)
{
  float *v1; // rax
  float *v2; // rdx

  v1 = (float *)std::clamp<float>(&this->value_, &this->floor_, &this->ceiling_);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  return *v2;
};

// Line 85: range 00000000130CED84-00000000130CEE23
bool __cdecl PileValue::isDefaultValue(const PileValue *const this)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<float,bool> > >::pointer v1; // rax
  _DWORD *p_first; // rdx
  char v3; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<float,bool> > > v5; // [rsp+18h] [rbp-8h] BYREF

  if ( std::map<unsigned int,std::pair<float,bool>>::size(&this->value_map_) != 1 )
    goto LABEL_6;
  v5._M_node = std::map<unsigned int,std::pair<float,bool>>::begin(&this->value_map_)._M_node;
  v1 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<float,bool>>>::operator->(&v5);
  p_first = &v1->first;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  if ( *p_first )
LABEL_6:
    v3 = 0;
  else
    v3 = 1;
  return v3 != 0;
};

// Line 95: range 00000000130CEE24-00000000130CF7E3
void __cdecl PileValue::updateValue(PileValue *const this)
{
  data::StackMethod stack_method; // eax
  std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool> > > >::pointer v2; // rax
  bool *v3; // rax
  float first; // xmm0_4
  bool *v5; // rax
  float v6; // xmm1_4
  bool *v7; // rax
  float v8; // xmm1_4
  bool *p_second; // rax
  float value; // xmm1_4
  data::StackMethod v11; // eax
  float limit_value; // [rsp+14h] [rbp-7Ch]
  std::map<unsigned int,std::pair<float,bool>>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,std::pair<float,bool>>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,std::pair<float,bool>> *__for_range_1; // [rsp+28h] [rbp-68h]
  std::pair<unsigned int const,std::pair<float,bool> > *v16; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<float,bool> > >::type *idx_1; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,std::pair<float,bool> > >::type *p_2; // [rsp+40h] [rbp-50h]
  std::map<unsigned int,std::pair<float,bool>> *__for_range_0; // [rsp+48h] [rbp-48h]
  std::pair<unsigned int const,std::pair<float,bool> > *v20; // [rsp+50h] [rbp-40h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<float,bool> > >::type *idx_0; // [rsp+58h] [rbp-38h]
  std::tuple_element<1,std::pair<unsigned int const,std::pair<float,bool> > >::type *p_1; // [rsp+60h] [rbp-30h]
  std::map<unsigned int,std::pair<float,bool>> *__for_range; // [rsp+68h] [rbp-28h]
  std::pair<unsigned int const,std::pair<float,bool> > *__in; // [rsp+70h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<float,bool> > >::type *idx; // [rsp+78h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int const,std::pair<float,bool> > >::type *p_0; // [rsp+80h] [rbp-10h]
  std::pair<float,bool> *p; // [rsp+88h] [rbp-8h]

  limit_value = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->stack_method_);
  }
  stack_method = this->stack_method_;
  if ( stack_method == OneMinusMultiplied )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(this);
    }
    this->value_ = 1.0;
    __for_range_1 = &this->value_map_;
    __for_begin._M_node = std::map<unsigned int,std::pair<float,bool>>::begin(&this->value_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::pair<float,bool>>::end(&this->value_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool>>>::operator*(&__for_begin);
      idx_1 = std::get<0ul,unsigned int const,std::pair<float,bool>>(v16);
      p_2 = std::get<1ul,unsigned int const,std::pair<float,bool>>(v16);
      p_second = &p_2->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_second);
      }
      if ( p_2->second )
      {
        if ( *(_BYTE *)(((unsigned __int64)p_2 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_2);
        }
        limit_value = (float)(1.0 - p_2->first) * limit_value;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(this);
        }
        value = this->value_;
        if ( *(_BYTE *)(((unsigned __int64)p_2 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_2);
        }
        this->value_ = (float)(1.0 - p_2->first) * value;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool>>>::operator++(&__for_begin);
    }
  }
  else if ( stack_method <= OneMinusMultiplied )
  {
    if ( stack_method == Multiplied )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(this);
      }
      this->value_ = 1.0;
      __for_range_0 = &this->value_map_;
      __for_begin._M_node = std::map<unsigned int,std::pair<float,bool>>::begin(&this->value_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,std::pair<float,bool>>::end(&this->value_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool>>>::operator*(&__for_begin);
        idx_0 = std::get<0ul,unsigned int const,std::pair<float,bool>>(v20);
        p_1 = std::get<1ul,unsigned int const,std::pair<float,bool>>(v20);
        v7 = &p_1->second;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v7);
        }
        if ( p_1->second )
        {
          if ( *(_BYTE *)(((unsigned __int64)p_1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_1);
          }
          limit_value = (float)(p_1->first + 1.0) * limit_value;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(this);
          }
          v8 = this->value_;
          if ( *(_BYTE *)(((unsigned __int64)p_1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_1);
          }
          this->value_ = (float)(p_1->first + 1.0) * v8;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool>>>::operator++(&__for_begin);
      }
    }
    else if ( stack_method )
    {
      if ( stack_method == Sum )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(this);
        }
        this->value_ = 0.0;
        __for_range = &this->value_map_;
        __for_begin._M_node = std::map<unsigned int,std::pair<float,bool>>::begin(&this->value_map_)._M_node;
        __for_end._M_node = std::map<unsigned int,std::pair<float,bool>>::end(&this->value_map_)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool>>>::operator*(&__for_begin);
          idx = std::get<0ul,unsigned int const,std::pair<float,bool>>(__in);
          p_0 = std::get<1ul,unsigned int const,std::pair<float,bool>>(__in);
          v5 = &p_0->second;
          if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v5);
          }
          if ( p_0->second )
          {
            if ( *(_BYTE *)(((unsigned __int64)p_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_0 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_0);
            }
            limit_value = p_0->first + limit_value;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(this);
            }
            v6 = this->value_;
            if ( *(_BYTE *)(((unsigned __int64)p_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_0 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_0);
            }
            this->value_ = p_0->first + v6;
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool>>>::operator++(&__for_begin);
        }
      }
    }
    else if ( !std::map<unsigned int,std::pair<float,bool>>::empty(&this->value_map_) )
    {
      std::map<unsigned int,std::pair<float,bool>>::rbegin((std::map<unsigned int,std::pair<float,bool>> *const)&__for_end);
      v2 = std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool>>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<float,bool> > > > *const)&__for_end);
      p = &v2->second;
      v3 = &v2->second.second;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v3);
      }
      if ( p->second )
      {
        if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p);
        }
        limit_value = p->first;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p);
        }
        first = p->first;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(this);
        }
        this->value_ = first;
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_min_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_min_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->limit_min_);
  }
  if ( this->limit_min_ <= limit_value )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->limit_max_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->limit_max_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->limit_max_);
    }
    if ( limit_value > this->limit_max_ )
      limit_value = this->limit_max_;
  }
  else
  {
    limit_value = this->limit_min_;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->stack_method_);
  }
  v11 = this->stack_method_;
  if ( v11 > Sum )
  {
    if ( (unsigned int)(v11 - 2) <= 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(this);
      }
      this->value_ = this->value_ * limit_value;
    }
  }
  else if ( v11 >= Top )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    this->value_ = this->value_ + limit_value;
  }
};

// Line 161: range 00000000130CF7E4-00000000130CFBD0
void __cdecl PileBoolValue::set(PileBoolValue *const this, int32_t idx, bool value)
{
  std::map<unsigned int,bool>::mapped_type *v4; // rax
  bool *v5; // rdx
  PileBoolValue::BoolStackMethod stack_method; // eax
  std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > >::pointer v7; // rdx
  bool *p_second; // rax
  bool second; // cl
  std::tuple_element<1,std::pair<unsigned int const,bool> >::type *v10; // rax
  std::tuple_element<1,std::pair<unsigned int const,bool> >::type *v11; // rax
  std::map<unsigned int,bool>::key_type __k; // [rsp+1Ch] [rbp-64h] BYREF
  std::map<unsigned int,bool>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,bool>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::map<unsigned int,bool> *__for_range_0; // [rsp+30h] [rbp-50h]
  std::pair<unsigned int const,bool> *v16; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,bool> >::type *__0; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,bool> >::type *val_0; // [rsp+48h] [rbp-38h]
  std::map<unsigned int,bool> *__for_range; // [rsp+50h] [rbp-30h]
  std::pair<unsigned int const,bool> *__in; // [rsp+58h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,bool> >::type *_; // [rsp+60h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,bool> >::type *val; // [rsp+68h] [rbp-18h]

  __k = idx;
  v4 = std::map<unsigned int,bool>::operator[](&this->value_map_, &__k);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(v4);
  }
  *v5 = value;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->stack_method_);
  }
  stack_method = this->stack_method_;
  if ( stack_method == OnceFalse )
  {
    if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(this);
    this->value_ = 1;
    __for_range_0 = &this->value_map_;
    __for_begin._M_node = std::map<unsigned int,bool>::begin(&this->value_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,bool>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
      __0 = std::get<0ul,unsigned int const,bool>(v16);
      v11 = std::get<1ul,unsigned int const,bool>(v16);
      val_0 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v11);
      }
      if ( !*val_0 )
      {
        if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(this);
        this->value_ = 0;
        return;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
    }
  }
  else if ( stack_method <= OnceFalse )
  {
    if ( stack_method )
    {
      if ( stack_method == OnceTrue )
      {
        if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(this);
        this->value_ = 0;
        __for_range = &this->value_map_;
        __for_begin._M_node = std::map<unsigned int,bool>::begin(&this->value_map_)._M_node;
        __for_end._M_node = std::map<unsigned int,bool>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          __in = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
          _ = std::get<0ul,unsigned int const,bool>(__in);
          v10 = std::get<1ul,unsigned int const,bool>(__in);
          val = v10;
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v10);
          }
          if ( *val )
          {
            if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(this);
            this->value_ = 1;
            return;
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
        }
      }
    }
    else
    {
      std::map<unsigned int,bool>::rbegin((std::map<unsigned int,bool> *const)&__for_end);
      v7 = std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > > *const)&__for_end);
      p_second = &v7->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_second);
      }
      second = v7->second;
      if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(this);
      this->value_ = second;
    }
  }
};

// Line 195: range 00000000130CFBD2-00000000130CFC05
void __cdecl PileBoolValue::reset(PileBoolValue *const this)
{
  PileBoolValue *v1; // rax

  PileBoolValue::~PileBoolValue(this);
  v1 = (PileBoolValue *)operator new(0x38uLL, this);
  PileBoolValue::PileBoolValue(v1);
};
