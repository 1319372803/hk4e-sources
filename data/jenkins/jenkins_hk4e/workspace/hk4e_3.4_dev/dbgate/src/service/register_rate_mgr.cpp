// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/service/register_rate_mgr.cpp

// Line 19: range 000000000C5E3508-000000000C5E36C2
void __cdecl RegisterRateFilter::RegisterRateFilter(RegisterRateFilter *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, (_BYTE)this);
  this->is_init_ = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->filter_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->filter_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->filter_id_, v2);
  }
  this->filter_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->period_length_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->period_length_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->period_length_, v2);
  }
  this->period_length_ = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_register_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_register_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_register_num_, v3);
  }
  this->max_register_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_punish_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_punish_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_punish_value_, v3);
  }
  this->max_punish_value_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->black_ip_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->period_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->period_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->period_id_, v3);
  }
  this->period_id_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->ip_register_num_map_);
  std::mutex::mutex(&this->register_mu_);
};

// Line 24: range 000000000C5E36C4-000000000C5E36F2
void __cdecl RegisterRateFilter::~RegisterRateFilter(RegisterRateFilter *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->ip_register_num_map_);
  std::map<unsigned int,unsigned int>::~map(&this->black_ip_map_);
};

// Line 30: range 000000000C5E36F4-000000000C5E3905
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl RegisterRateFilter::init(
        RegisterRateFilter *const this,
        uint32_t filter_id,
        uint32_t period_length,
        uint32_t max_register_num,
        uint32_t max_punish_value)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  if ( this->is_init_ )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/register_rate_mgr.cpp",
      "init",
      33);
    common::milog::MiLogStream::operator()(&v12, "can not re init");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(this, *(_QWORD *)&filter_id, (_BYTE)this);
    this->is_init_ = 1;
    v6 = (((_BYTE)this + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->filter_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->filter_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->filter_id_, v6);
    }
    this->filter_id_ = filter_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->period_length_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->period_length_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->period_length_, v6);
    }
    this->period_length_ = period_length;
    v7 = (((_BYTE)this + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_register_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_register_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->max_register_num_, v7);
    }
    this->max_register_num_ = max_register_num;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_punish_value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_punish_value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->max_punish_value_, v7);
    }
    this->max_punish_value_ = max_punish_value;
    return 0;
  }
};

// Line 48: range 000000000C5E3906-000000000C5E4318
_BOOL8 __fastcall RegisterRateFilter::isAllowRegister(RegisterRateFilter *const this, uint32_t user_ip)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  _BOOL4 v5; // r14d
  time_t Now; // rdx
  uint32_t v7; // eax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v8; // rax
  __int64 v9; // rsi
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v10; // ecx
  char v11; // dl
  uint32_t v12; // ecx
  uint32_t v13; // ecx
  uint32_t *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v15; // rdx
  unsigned int *p_second; // rax
  uint32_t v17; // r14d
  const char *v18; // rcx
  uint32_t v19; // ecx
  _BOOL8 result; // rax
  uint32_t punish_value; // [rsp+1Ch] [rbp-154h]
  uint32_t cur_period_id; // [rsp+20h] [rbp-150h]
  uint32_t punish_value_desc; // [rsp+24h] [rbp-14Ch]
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-140h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-138h]
  std::pair<unsigned int const,unsigned int> *v27; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *ip_int_0; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *reg_num; // [rsp+50h] [rbp-120h]
  uint32_t *punish_value_1; // [rsp+58h] [rbp-118h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+60h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *ip_int; // [rsp+68h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *punish_value_0; // [rsp+70h] [rbp-100h]
  uint32_t *register_num; // [rsp+78h] [rbp-F8h]
  common::milog::MiLogStream v35; // [rsp+80h] [rbp-F0h] BYREF
  std::string v36; // [rsp+A0h] [rbp-D0h] BYREF
  char v37[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 10 user_ip:47 64 8 7 lock:57 96 8 8 iter:100";
  *(_QWORD *)(v2 + 16) = RegisterRateFilter::isAllowRegister;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = user_ip;
  if ( *(_BYTE *)(((unsigned __int64)&this->period_length_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->period_length_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->period_length_);
  }
  if ( !this->period_length_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_register_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_register_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_register_num_);
  }
  if ( this->max_register_num_ )
  {
    std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 64), &this->register_mu_);
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->period_length_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->period_length_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->period_length_);
    }
    cur_period_id = Now / this->period_length_;
    if ( *(_BYTE *)(((unsigned __int64)&this->period_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->period_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->period_id_);
    }
    if ( cur_period_id != this->period_id_ )
    {
      if ( cur_period_id <= this->period_id_ )
        v7 = 0;
      else
        v7 = cur_period_id - this->period_id_;
      punish_value_desc = v7;
      __for_range = &this->black_ip_map_;
      *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::begin(&this->black_ip_map_);
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
                &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
        ip_int = std::get<0ul,unsigned int const,unsigned int>(__in);
        v8 = std::get<1ul,unsigned int const,unsigned int>(__in);
        punish_value_0 = v8;
        v9 = ((unsigned __int8)v8 & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        if ( punish_value_desc >= *punish_value_0 )
          v10 = 0;
        else
          v10 = *punish_value_0 - punish_value_desc;
        v11 = *(_BYTE *)(((unsigned __int64)punish_value_0 >> 3) + 0x7FFF8000);
        if ( v11 != 0 && (char)(((unsigned __int8)punish_value_0 & 7) + 3) >= v11 )
        {
          LOBYTE(v9) = v11 != 0;
          __asan_report_store4(punish_value_0, v9);
        }
        *punish_value_0 = v10;
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
      }
      __for_range_0 = &this->ip_register_num_map_;
      *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::begin(&this->ip_register_num_map_);
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
                &__for_end) )
      {
        v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
        ip_int_0 = std::get<0ul,unsigned int const,unsigned int>(v27);
        reg_num = std::get<1ul,unsigned int const,unsigned int>(v27);
        punish_value_1 = std::map<unsigned int,unsigned int>::operator[](&this->black_ip_map_, ip_int_0);
        if ( *(_BYTE *)(((unsigned __int64)reg_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)reg_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reg_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(reg_num);
        }
        v12 = *reg_num;
        if ( *(_BYTE *)(((unsigned __int64)&this->max_register_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_register_num_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->max_register_num_);
        }
        if ( v12 >= this->max_register_num_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)punish_value_1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)punish_value_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)punish_value_1 >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(punish_value_1);
          }
          *punish_value_1 += *reg_num / this->max_register_num_;
          v13 = *punish_value_1;
          if ( *(_BYTE *)(((unsigned __int64)&this->max_punish_value_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->max_punish_value_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->max_punish_value_);
          }
          if ( v13 > this->max_punish_value_ )
            *punish_value_1 = this->max_punish_value_;
        }
        if ( *(_BYTE *)(((unsigned __int64)punish_value_1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)punish_value_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)punish_value_1 >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(punish_value_1);
        }
        if ( !*punish_value_1 )
          std::map<unsigned int,unsigned int>::erase(&this->black_ip_map_, ip_int_0);
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->period_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->period_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->period_id_, &__for_end);
      }
      this->period_id_ = cur_period_id;
      std::map<unsigned int,unsigned int>::clear(&this->ip_register_num_map_);
    }
    v14 = std::map<unsigned int,unsigned int>::operator[](
            &this->ip_register_num_map_,
            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    register_num = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    ++*register_num;
    punish_value = 0;
    *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                    &this->black_ip_map_,
                                                                    (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->black_ip_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
           &__for_end) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
      p_second = &v15->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      punish_value = v15->second;
    }
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/register_rate_mgr.cpp",
      "isAllowRegister",
      106);
    if ( *(_BYTE *)(((unsigned __int64)register_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)register_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)register_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(register_num);
    }
    v17 = *register_num;
    common::tools::NetUtils::inetNtoa[abi:cxx11](&v36, *(_DWORD *)(v2 + 48));
    v18 = (const char *)std::string::c_str(&v36);
    if ( *(_BYTE *)(((unsigned __int64)&this->filter_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->filter_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->filter_id_);
    }
    common::milog::MiLogStream::operator()(
      &v35,
      "filter_id=%u, user_ip=%s, register_num=%u, punish_value=%u",
      this->filter_id_,
      v18,
      v17,
      punish_value);
    std::string::~string(&v36);
    common::milog::MiLogStream::~MiLogStream(&v35);
    if ( *(_BYTE *)(((unsigned __int64)register_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)register_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)register_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(register_num);
    }
    v19 = *register_num;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_register_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_register_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max_register_num_);
    }
    v5 = v19 <= this->max_register_num_ && !punish_value;
    std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 64));
  }
  else
  {
LABEL_10:
    v5 = 1;
  }
  result = v5;
  if ( v37 == (char *)v2 )
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

// Line 124: range 000000000C5E431A-000000000C5E4334
void __cdecl RegisterRateMgr::RegisterRateMgr(RegisterRateMgr *const this)
{
  std::vector<std::shared_ptr<RegisterRateFilter>>::vector(&this->filter_ptr_vec_);
};

// Line 127: range 000000000C5E4336-000000000C5E4350
void __cdecl RegisterRateMgr::~RegisterRateMgr(RegisterRateMgr *const this)
{
  std::vector<std::shared_ptr<RegisterRateFilter>>::~vector(&this->filter_ptr_vec_);
};

// Line 133: range 000000000C5E4352-000000000C5E4D14
int32_t __cdecl RegisterRateMgr::init(RegisterRateMgr *const this, common::tools::PTree *dbgate_pt)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // r15d
  common::tools::PTree *v7; // rax
  common::tools::PTree *p_second; // r15
  common::tools::PTree *v9; // r15
  common::tools::PTree *v10; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  RegisterRateFilter *v15; // rax
  int v16; // r15d
  std::vector<std::shared_ptr<RegisterRateFilter>>::size_type v17; // rax
  int32_t result; // eax
  std::allocator<char> v19; // [rsp+25h] [rbp-14Bh] BYREF
  std::allocator<char> v20; // [rsp+26h] [rbp-14Ah] BYREF
  std::allocator<char> __a; // [rsp+27h] [rbp-149h] BYREF
  uint32_t filter_id; // [rsp+28h] [rbp-148h]
  uint32_t max_punish_value; // [rsp+2Ch] [rbp-144h]
  std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self __y; // [rsp+30h] [rbp-140h] BYREF
  std::string child_name; // [rsp+40h] [rbp-130h] BYREF
  char v26[272]; // [rsp+60h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 17 period_length:145 48 4 20 max_register_num:146 64 8 18 filter_pt_iter:143 96 16 19 reg"
                        "_rate_pt_opt:137 128 16 14 filter_ptr:150 160 24 13 filter_pt:142";
  *(_QWORD *)(v3 + 16) = RegisterRateMgr::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  filter_id = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "RegisterRateConf", &__a);
  common::tools::PTree::getChildOptional((common::tools::PTree *)(v3 + 96), dbgate_pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( !std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 96)) )
  {
    v2 = 0;
    v6 = 0;
  }
  else
  {
    v7 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 96));
    common::tools::PTree::getAllChild[abi:cxx11](
      (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 160),
      v7);
    *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v3 + 64) = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 160));
    while ( 1 )
    {
      __y._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 160))._M_node;
      if ( !std::operator!=(
              (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v3 + 64),
              &__y) )
        break;
      p_second = &std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator->((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v3 + 64))->second;
      std::allocator<char>::allocator(&v19);
      std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.period_length", &v19);
      *(_DWORD *)(v3 + 32) = common::tools::PTree::get<unsigned int>(p_second, &child_name);
      std::string::~string(&child_name);
      std::allocator<char>::~allocator(&v19);
      v9 = &std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator->((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v3 + 64))->second;
      std::allocator<char>::allocator(&v20);
      std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.max_register_num", &v20);
      *(_DWORD *)(v3 + 48) = common::tools::PTree::get<unsigned int>(v9, &child_name);
      std::string::~string(&child_name);
      std::allocator<char>::~allocator(&v20);
      v10 = &std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator->((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v3 + 64))->second;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.max_punish_value", &__a);
      max_punish_value = common::tools::PTree::get<unsigned int>(v10, &child_name);
      std::string::~string(&child_name);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/register_rate_mgr.cpp",
        "init",
        149);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&child_name,
              (const char (*)[27])"[REGISTER] period_length: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v12,
              (const char (*)[19])" max_register_num:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      common::tools::perf::make_shared<RegisterRateFilter>();
      if ( std::operator==<RegisterRateFilter>(0LL, (const std::shared_ptr<RegisterRateFilter> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/register_rate_mgr.cpp",
          "init",
          153);
        common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, "new filter failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v2 = -1;
        v14 = 0;
      }
      else
      {
        v15 = std::__shared_ptr_access<RegisterRateFilter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegisterRateFilter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( RegisterRateFilter::init(v15, filter_id, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48), max_punish_value) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&child_name,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/register_rate_mgr.cpp",
            "init",
            159);
          common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, "init filter failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
          v2 = -1;
          v14 = 0;
        }
        else
        {
          std::vector<std::shared_ptr<RegisterRateFilter>>::push_back(
            &this->filter_ptr_vec_,
            (const std::vector<std::shared_ptr<RegisterRateFilter>>::value_type *)(v3 + 128));
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&child_name,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/service/register_rate_mgr.cpp",
            "init",
            165);
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&child_name,
            "load filter_id=%u,  period_length=%u, max_register_num=%u, max_punish_value=%u",
            filter_id,
            *(unsigned int *)(v3 + 32),
            *(unsigned int *)(v3 + 48),
            max_punish_value);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
          v14 = 1;
        }
      }
      std::shared_ptr<RegisterRateFilter>::~shared_ptr((std::shared_ptr<RegisterRateFilter> *const)(v3 + 128));
      if ( v14 != 1 )
      {
        v16 = 0;
        goto LABEL_17;
      }
      std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(
        (std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v3 + 64),
        0);
      ++filter_id;
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/service/register_rate_mgr.cpp",
      "init",
      169);
    v17 = std::vector<std::shared_ptr<RegisterRateFilter>>::size(&this->filter_ptr_vec_);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, "load %lu filter", v17);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v16 = 1;
LABEL_17:
    std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 160));
    v6 = v16 == 1;
  }
  std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 96));
  if ( v6 )
    v2 = 0;
  result = v2;
  if ( v26 == (char *)v3 )
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

// Line 181: range 000000000C5E4D16-000000000C5E4D8A
bool __cdecl RegisterRateMgr::isAllowRegister(RegisterRateMgr *const this, uint32_t user_ip)
{
  const std::__shared_ptr_access<RegisterRateFilter,(__gnu_cxx::_Lock_policy)2,false,false> *v2; // rax
  RegisterRateFilter *v3; // rax
  bool is_allow; // [rsp+17h] [rbp-9h]
  size_t idx; // [rsp+18h] [rbp-8h]

  is_allow = 1;
  for ( idx = 0LL; idx < std::vector<std::shared_ptr<RegisterRateFilter>>::size(&this->filter_ptr_vec_); ++idx )
  {
    v2 = (const std::__shared_ptr_access<RegisterRateFilter,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RegisterRateFilter>>::operator[](&this->filter_ptr_vec_, idx);
    v3 = std::__shared_ptr_access<RegisterRateFilter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v2);
    if ( !RegisterRateFilter::isAllowRegister(v3, user_ip) )
      is_allow = 0;
  }
  return is_allow;
};

// Line 194: range 000000000C5E5C58-000000000C5E5C6C
void __cdecl GLOBAL__sub_I_merge_merge_dbgate_app_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 194: range 000000000C5E523C-000000000C5E5C57
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::exception_ptr *v7; // rsi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  char *v12; // rcx
  char *v13; // rcx
  char v14; // dl
  bool v15; // dl
  char *v16; // rcx
  char v17; // dl
  char *v18; // rcx
  char v19; // dl
  bool v20; // dl
  const std::piecewise_construct_t *v21; // rdx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  char v24; // dl
  bool v25; // dl
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  char v28; // dl
  bool v29; // dl
  _BYTE *v30; // rcx
  _BYTE *v31; // rcx
  char v32; // dl
  bool v33; // dl
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  char v36; // dl
  bool v37; // dl
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  char v40; // dl
  bool v41; // dl
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  char v44; // dl
  bool v45; // dl
  const char *v46; // rcx
  _BYTE *v47; // rcx
  _BYTE *v48; // rcx
  char v49; // dl
  bool v50; // dl
  _BYTE *v51; // rcx
  _BYTE *v52; // rcx
  char v53; // dl
  bool v54; // dl
  _BYTE *v55; // rcx
  _BYTE *v56; // rcx
  char v57; // dl
  bool v58; // dl
  const char *v59; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_dbgate_app.cpp");
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
      v7 = (const boost::exception_ptr *)5;
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
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
      v12 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v14 != 0;
        v15 = v14 != 0
           && (char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e & 7) >= v14;
        if ( v15 )
          __asan_report_store1(
            &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e,
            v7,
            v15);
        *v13 = 1;
        if ( *(_WORD *)(((unsigned __int64)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                      + 0x7FFF8000) )
          __asan_report_store16();
        boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>();
        v7 = &boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::exception_ptr::~exception_ptr,
          (void *)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e;
      v17 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                     + 0x7FFF8000);
      LOBYTE(v7) = v17 != 0;
      if ( v17 != 0
        && (char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e & 7) >= v17 )
      {
        __asan_report_load1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e);
      }
      if ( !*v16 )
      {
        v18 = &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e;
        v19 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v19 != 0;
        v20 = v19 != 0
           && (char)((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e & 7) >= v19;
        if ( v20 )
          __asan_report_store1(
            &`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e,
            v7,
            v20);
        *v18 = 1;
        if ( *(_WORD *)(((unsigned __int64)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                      + 0x7FFF8000) )
          __asan_report_store16();
        boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>();
        v7 = &boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::exception_ptr::~exception_ptr,
          (void *)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e,
          &_dso_handle);
      }
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)v7);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)v7);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)v7);
      v21 = boost::container::std_piecewise_construct_holder<0>::dummy;
      if ( *(_BYTE *)(((unsigned __int64)&boost::container::piecewise_construct >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::container::piecewise_construct, v7);
      boost::container::piecewise_construct = v21;
      v22 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v22 )
      {
        v23 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v24 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v24 != 0;
        v25 = v24 != 0
           && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v24;
        if ( v25 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v7,
            v25);
        *v23 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v26 = `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v26 )
      {
        v27 = `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        v28 = *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v28 != 0;
        v29 = v28 != 0
           && (char)((unsigned __int64)`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= v28;
        if ( v29 )
          __asan_report_store1(
            `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
            v7,
            v29);
        *v27 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v30 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
      }
      if ( !*v30 )
      {
        v31 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        v32 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v32 != 0;
        v33 = v32 != 0
           && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= v32;
        if ( v33 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
            v7,
            v33);
        *v31 = 1;
        boost::asio::detail::service_id<boost::asio::detail::strand_service>::service_id(&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
          &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
          &_dso_handle);
      }
      v34 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v34 )
      {
        v35 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        v36 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v36 != 0;
        v37 = v36 != 0
           && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= v36;
        if ( v37 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
            v7,
            v37);
        *v35 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v38 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v38 )
      {
        v39 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v40 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v40 != 0;
        v41 = v40 != 0
           && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v40;
        if ( v41 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v7,
            v41);
        *v39 = 1;
        v7 = (const boost::exception_ptr *)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v42 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v42 )
      {
        v43 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v44 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v44 != 0;
        v45 = v44 != 0
           && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v44;
        if ( v45 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v7,
            v45);
        *v43 = 1;
        v46 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v46;
      }
      v47 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v47 )
      {
        v48 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v49 = *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v49 != 0;
        v50 = v49 != 0
           && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v49;
        if ( v50 )
          __asan_report_store1(
            `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v7,
            v50);
        *v48 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v51 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v51 )
      {
        v52 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v53 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v53 != 0;
        v54 = v53 != 0
           && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v53;
        if ( v54 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v7,
            v54);
        *v52 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v7 = (const boost::exception_ptr *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v55 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v55 )
      {
        v56 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v57 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v57 != 0;
        v58 = v57 != 0
           && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v57;
        if ( v58 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v7,
            v58);
        *v56 = 1;
        v59 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v59;
      }
    }
    __asan_after_dynamic_init();
  }
};
